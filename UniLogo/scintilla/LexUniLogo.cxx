#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <assert.h>
#include <ctype.h>

#include "ILexer.h"
#include "SciLexer.h"

#include "WordList.h"
#include "LexAccessor.h"
#include "Accessor.h"
#include "StyleContext.h"
#include "CharacterSet.h"
#include "LexerModule.h"

#ifdef SCI_NAMESPACE
using namespace Scintilla;
#endif

static inline bool IsAWordChar(const int ch) 
{
    switch (ch)
    {
    case ' ':
    case '\t':
    case '\n':
    case '\r':

    case '(':
    case ')':
    case '{':
    case '}':
    case '[':
    case ']':

    case '+':
    case '-':
    case '/':
    case '*':
    case '>':
    case '<':
    case '=':
        return false;

    default:
        return true;
    }
}

static inline bool IsStateComment(const int state)
{
    return ((state == SCE_UNI_COMMENT) || (state == SCE_UNI_COMMENTBACKSLASH));
}

static void AdvanceWithinVbar(StyleContext & Context)
{
    while (Context.ch != '|' && Context.More())
    {
        // Make sure to advance over
        // any escaped vbars.
        if (Context.ch == '\\')
        {
            Context.Forward();
            if (Context.ch == '|')
            {
                Context.Forward();
            }
        }
        else
        {
            Context.Forward();
        }
    }
}

static void ColorizeUniLogoDoc(
    unsigned int   startPos,
    int            length,
    int            initStyle,
    WordList    *  keywordlists[],
    Accessor    &  styler
    ) 
{
    StyleContext sc(startPos, length, initStyle, styler);
    for (; sc.More(); sc.Forward()) 
    {
        // Handle line continuation generically.
        if (sc.ch == '~') 
        {
            if (sc.chNext == '\n' || sc.chNext == '\r') 
            {
                // This was a line continuation, which breaks a comment
                if (IsStateComment(sc.state))
                {
                    sc.SetState(SCE_UNI_DEFAULT);
                }

                sc.Forward();
                if (sc.ch == '\r' && sc.chNext == '\n') 
                {
                    sc.Forward();
                }
                continue;
            }
        }

        // Determine if the current state should terminate.
        switch (sc.state)
        {
        case SCE_UNI_OPERATOR:
            sc.SetState(SCE_UNI_DEFAULT);
            break;

        case SCE_UNI_NUMBER:
            if (!IsAWordChar(sc.ch)) 
            {
                sc.SetState(SCE_UNI_DEFAULT);
            }
            break;

        case SCE_UNI_STRING:
            if (sc.ch == '|')
            {
                sc.SetState(SCE_UNI_STRING_VBAR);
            }
            else if (sc.ch == '\\') 
            {
                sc.Forward();
            }
            else if (sc.atLineEnd  ||
                     sc.ch == ' '  ||
                     sc.ch == '\t' ||
                     sc.ch == '('  ||
                     sc.ch == ')'  ||
                     sc.ch == '['  ||
                     sc.ch == ']'  ||
                     sc.ch == '{'  ||
                     sc.ch == '}'  ||
                     sc.ch == ';') 
            {
                sc.SetState(SCE_UNI_DEFAULT);
            }
            break;

        case SCE_UNI_STRING_VBAR:
            AdvanceWithinVbar(sc);
            sc.SetState(SCE_UNI_STRING);
            break;

        case SCE_UNI_VBAR:
            AdvanceWithinVbar(sc);
            sc.SetState(SCE_UNI_DEFAULT);
            sc.Forward();
            break;

        case SCE_UNI_COMMENT:
            // comments end at a newline, but can be continued
            // onto the next line if the newline is preceeded by
            // a backslash
            if (sc.Match("~\r\n") || sc.Match("~\n"))
            {
                // transition to continuation char state?
                sc.SetState(SCE_UNI_DEFAULT);
            }
            else if (sc.atLineEnd)
            {
                sc.SetState(SCE_UNI_DEFAULT);
            }
            else if (sc.ch == '\\')
            {
                sc.SetState(SCE_UNI_COMMENTBACKSLASH);
            }
            break;

        case SCE_UNI_COMMENTBACKSLASH:
            if (sc.ch == '\r' || sc.ch == '\n')
            {
                sc.Forward();
                if (sc.ch == '\r' || sc.ch == '\n')
                {
                    // This was a backslash followed by a newline.
                    sc.Forward();
                }
            }
            sc.SetState(SCE_UNI_COMMENT);
            break;

        case SCE_UNI_VARIABLE:
            if (sc.ch == '|')
            {
                sc.SetState(SCE_UNI_VARIABLE_VBAR);
            }
            else if (sc.ch == '\\')
            {
                sc.Forward();
            }
            else if (!IsAWordChar(sc.ch))
            {
                sc.SetState(SCE_UNI_DEFAULT);
            }
            break;

        case SCE_UNI_VARIABLE_VBAR:
            AdvanceWithinVbar(sc);
            sc.SetState(SCE_UNI_VARIABLE);
            sc.Forward();
            break;

        case SCE_UNI_DEFAULT_BACKSLASH:
            sc.Forward();
            sc.SetState(SCE_UNI_DEFAULT);
            break;

        default:
            break;
        }

        // Determine if a new state should be entered.
        if (sc.state == SCE_UNI_DEFAULT) 
        {
            if (IsADigit(sc.ch) || (sc.ch == '.' && IsADigit(sc.chNext))) 
            {
                sc.SetState(SCE_UNI_NUMBER);
            }
            else if (sc.ch == ':')
            {
                sc.SetState(SCE_UNI_VARIABLE);
            }
            else if (sc.ch == '|')
            {
                sc.SetState(SCE_UNI_VBAR);
            }
            else if (sc.ch == ';') 
            {
                sc.SetState(SCE_UNI_COMMENT);
            }
            else if (sc.ch == '\"') 
            {
                sc.SetState(SCE_UNI_STRING);
            }
            else if (isoperator(static_cast<char>(sc.ch)))
            {
                sc.SetState(SCE_UNI_OPERATOR);
            }
            else if (sc.ch == '\\')
            {
                sc.SetState(SCE_UNI_DEFAULT_BACKSLASH);
            }
        }
    }
    sc.Complete();
}


static void FoldUniLogoDoc(unsigned int, int, int, WordList *[], Accessor &)
{
}

static const char * const g_UniLogoWordLists[] = 
{
    "Structural keywords",
    "Primitives",
    "Library procedures",
    "Abbreviations",
    "Special Variables",
    0,
};

LexerModule lmUniLogo(SCLEX_UNILOGO, ColorizeUniLogoDoc, "UniLogo", FoldUniLogoDoc, g_UniLogoWordLists);
