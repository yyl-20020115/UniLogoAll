/* SciLexer features - not in standard Scintilla */

#ifndef SCILEXER_H
#define SCILEXER_H

#define SCLEX_CONTAINER 0
#define SCLEX_NULL      1
#define SCLEX_UNILOGO   200 // beyond all of the built-in ones
#define SCLEX_AUTOMATIC 1000

// FMS lexer styles
#define SCE_UNI_DEFAULT          0
#define SCE_UNI_COMMENT          1
#define SCE_UNI_COMMENTBACKSLASH 2
#define SCE_UNI_STRING           3
#define SCE_UNI_STRING_VBAR      4

#define SCE_UNI_VBAR          5

#define SCE_UNI_VARIABLE      6
#define SCE_UNI_VARIABLE_VBAR 7

#define SCE_UNI_OPERATOR    8
#define SCE_UNI_NUMBER      9
#define SCE_UNI_IDENTIFIER  10

#define SCE_UNI_DEFAULT_BACKSLASH 11

#endif // SCILEXER_H
