
//
// Localized "alternate" spellings of Logo reserved words
//
#define LOCALIZED_ALTERNATE_TRUE     L"ΑΛΗΘΗΣ" // 
#define LOCALIZED_ALTERNATE_FALSE    L"ΨΕΥΔΗΣ" // 
#define LOCALIZED_ALTERNATE_END      L"ΤΕΛΟΣ" // 
#define LOCALIZED_ALTERNATE_TOPLEVEL L"ΑΡΧΗ" // 
#define LOCALIZED_ALTERNATE_SYSTEM   L"ΣΥΣΤΗΜΑ" // 

//
// Localized "alternate" names of Logo special variables
//
#define LOCALIZED_ALTERNATE_CASEIGNOREDP    L"caseignoredp"
#define LOCALIZED_ALTERNATE_ERRACT          L"ΟΔΗΓΙΕΣ_ΣΦΑΛΜΑΤΟΣ"
#define LOCALIZED_ALTERNATE_STARTUP         L"ΕΚΚΙΝΗΣΗ"
#define LOCALIZED_ALTERNATE_REDEFP          L"ΕΠΑΝΑΠΡΟΣΔΙΟΡΙΣΜΟΣ" 
#define LOCALIZED_ALTERNATE_PRINTWIDTHLIMIT L"ΠΛΑΤΟΣ_ΕΚΤΥΠΩΣΗΣ"
#define LOCALIZED_ALTERNATE_PRINTDEPTHLIMIT L"ΒΑΘΟΣ_ΕΚΤΥΠΩΣΗΣ"


//
// Localized "alternate" spellings of Logo primitives.
// These become the perferred name of the primitives.  For example,
// when you press the "reset" button, UniLogo will write the value of
// LOCALIZED_ALTERNATE_CLEARSCREEN to the commander.
// 
// Furthermore, if one of the LOCALIZED_ALTERNATE names uses the same text 
// as the English counterpart, then the localized name will be used. 
// For example, in the English version, "ct" is short for "CLEARTEXT".
// In the French version, "ct" is short for "CACHETORTUE" (HIDETURTLE).
// So in the French UniLogo, running "ct" will hide the turtle.
//
// That said, it is strongly recommended that you do not choose names
// that match the long English name of any command.  If you do, you may
// find that some programs won't run on the localized version of UniLogo.
// 
// If you don't know how to translate a particular command, leave it
// as the English name and it will be ignored.
//
#define LOCALIZED_ALTERNATE__DEFMACRO              L".ΟΡΙΣΜΟΣ_ΜΑΚΡΟΕΝΤΛΗ" // 
#define LOCALIZED_ALTERNATE__EQ                    L".ΙΣΟ" // 
#define LOCALIZED_ALTERNATE__MACRO                 L".ΜΑΚΡΟΕΝΤΟΛΗ" // 
#define LOCALIZED_ALTERNATE__MAYBEOUTPUT           L".ΠΙΘΑΝΗ_ΕΞΟΔΟΣ" // 
#define LOCALIZED_ALTERNATE__SETBF                 L".setbf" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE__SETFIRST              L".setfirst" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE__SETITEM               L".setitem" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ACTIVEAREA             L"ΕΝΕΡΓΗ_ΠΕΡΙΟΧΗ" // 
#define LOCALIZED_ALTERNATE_ALLOPEN                L"ΑΝΟΙΧΤΑ" // 
#define LOCALIZED_ALTERNATE_AND                    L"ΚΑΙ" // 
#define LOCALIZED_ALTERNATE_APPLY                  L"ΕΦΑΡΜΟΓΗ" // 
#define LOCALIZED_ALTERNATE_ARCCOS                 L"arccos" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ARCSIN                 L"arcsin" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ARCTAN                 L"arctan" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ARITY                  L"arity" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ARRAY                  L"ΠΙΝΑΚΑΣ" // 
#define LOCALIZED_ALTERNATE_ARRAYP                 L"arrayp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ARRAY_                 L"ΠΙΝΑΚΑΣ?" // 
#define LOCALIZED_ALTERNATE_ASCII                  L"ascii" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ASHIFT                 L"ΠΡΟΣΗΜΑΣΜΕΝΗ_ΟΛΙΣΘΗΣΗ" // 
#define LOCALIZED_ALTERNATE_BACK                   L"ΠΙΣΩ" // 
#define LOCALIZED_ALTERNATE_BACKSLASHEDP           L"backslashedp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BACKSLASHED_           L"backslashed?" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BEFOREP                L"beforep" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BEFORE_                L"ΠΡΙΝ?" // 
#define LOCALIZED_ALTERNATE_BF                     L"bf" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BFS                    L"bfs" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BITAND                 L"ΔΥΑΔΙΚΟ_ΚΑΙ" // 
#define LOCALIZED_ALTERNATE_BITBLOCK               L"bitblock" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BITCOPY                L"bitcopy" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BITCUT                 L"bitcut" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BITFIT                 L"bitfit" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BITINDEX               L"bitindex" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BITLOAD                L"bitload" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BITLOADSIZE            L"bitloadsize" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BITSIZE                L"bitsize" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BITMAPTURTLE           L"bitmapturtle" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BITMODE                L"bitmode" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BITNOT                 L"ΔΥΑΔΙΚΟ_ΟΧΙ" // 
#define LOCALIZED_ALTERNATE_BITOR                  L"ΔΥΑΔΙΚΟ_Η" // 
#define LOCALIZED_ALTERNATE_BITPASTE               L"bitpaste" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BITPASTETOINDEX        L"bitpastetoindex" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BITSAVE                L"bitsave" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BITXOR                 L"ΔΥΑΔΙΚΟ_ΑΠ0ΟΚΛΕΙΣΤΙΚΟ_Η" // 
#define LOCALIZED_ALTERNATE_BK                     L"bk" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BL                     L"bl" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BURIED                 L"buried" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BURY                   L"bury" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BUTFIRST               L"ΧΩΡΙΣ_ΠΡΩΤΟ" // 
#define LOCALIZED_ALTERNATE_BUTFIRSTS              L"ΧΩΡΙΣ_ΠΡΩΤΑ" // 
#define LOCALIZED_ALTERNATE_BUTLAST                L"ΧΩΡΙΣ_ΤΕΛΕΥΤΑΙΟ" // 
#define LOCALIZED_ALTERNATE_BUTTONCREATE           L"ΚΟΥΜΠΙ_ΔΗΜΙΟΥΡΓΙΑ" // 
#define LOCALIZED_ALTERNATE_BUTTONDELETE           L"ΚΟΥΜΠΙ_ΔΙΑΓΡΑΦΗ" // 
#define LOCALIZED_ALTERNATE_BUTTONENABLE           L"ΚΟΥΜΠΙ_ΕΝΕΡΓΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_BUTTONUPDATE           L"ΚΟΥΜΠΙ_ΕΝΗΜΕΡΩΣΗ" // 
#define LOCALIZED_ALTERNATE_BUTTONP                L"buttonp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_BUTTON_                L"ΚΟΥΜΠΙ?" // 
#define LOCALIZED_ALTERNATE_BYE                    L"ΑΝΤΙΟ" // 
#define LOCALIZED_ALTERNATE_CATCH                  L"catch" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_CHAR                   L"ΧΑΡΑΚΤΗΡΑΣ" // 
#define LOCALIZED_ALTERNATE_CHDIR                  L"ΚΑΤΑΛΟΓΟΣ_ΑΛΛΑΓΗ" // 
#define LOCALIZED_ALTERNATE_CHECKBOXCREATE         L"ΠΛΑΙΣΙΟ_ΕΛΕΓΧΟΥ_ΔΗΜΙΟΥΡΓΙΑ" // 
#define LOCALIZED_ALTERNATE_CHECKBOXDELETE         L"ΠΛΑΙΣΙΟ_ΕΛΕΓΧΟΥ_ΔΙΑΓΡΑΦΗ" // 
#define LOCALIZED_ALTERNATE_CHECKBOXENABLE         L"ΠΛΑΙΣΙΟ_ΕΛΕΓΧΟΥ_ΕΝΕΡΓΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_CHECKBOXGET            L"ΠΛΑΙΣΙΟ_ΕΛΕΓΧΟΥ_ΤΙΜΗ" // 
#define LOCALIZED_ALTERNATE_CHECKBOXSET            L"ΠΛΑΙΣΙΟ_ΕΛΕΓΧΟΥ_ΟΡΙΣΜΟΣ" // 
#define LOCALIZED_ALTERNATE_CLEAN                  L"ΚΑΘΑΡΙΣΜΟΣ" // 
#define LOCALIZED_ALTERNATE_CLEARPALETTE           L"clearpalette" //
#define LOCALIZED_ALTERNATE_CLEARSCREEN            L"ΚΑΘΑΡΙΣΜΟΣ_ΟΘΟΝΗΣ" // 
#define LOCALIZED_ALTERNATE_CLEARTEXT              L"ΚΑΘΑΡΙΜΣΟΣ_ΚΕΙΜΕΝΟΥ" // 
#define LOCALIZED_ALTERNATE_CLEARTIMER             L"ΚΑΘΑΡΙΣΜΟΣ_ΧΡΟΝΟΜΕΤΡΟΥ" // 
#define LOCALIZED_ALTERNATE_CLOSE                  L"ΚΛΕΙΣΙΜΟ" // 
#define LOCALIZED_ALTERNATE_CLOSEALL               L"ΚΛΕΙΣΙΜΟ_ΟΛΩΝ" // 
#define LOCALIZED_ALTERNATE_CO                     L"co" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_COMBOBOXADDSTRING      L"ΠΛΑΙΣΙΟ_ΚΕΙΜΕΝΟΥ_ΠΡΟΣΘΗΚΗ" // 
#define LOCALIZED_ALTERNATE_COMBOBOXCREATE         L"ΠΛΑΙΣΙΟ_ΚΕΙΜΕΝΟΥ_ΔΗΜΙΟΥΡΓΙΑ" // 
#define LOCALIZED_ALTERNATE_COMBOBOXDELETE         L"ΠΛΑΙΣΙΟ_ΚΕΙΜΕΝΟΥ_ΔΙΑΓΡΑΦΗ" // 
#define LOCALIZED_ALTERNATE_COMBOBOXENABLE         L"ΠΛΑΙΣΙΟ_ΚΕΙΜΕΝΟΥ_ΕΝΕΡΓΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_COMBOBOXDELETESTRING   L"ΠΛΑΙΣΙΟ_ΚΕΙΜΕΝΟΥ_ΑΦΑΙΡΕΣΗ" // 
#define LOCALIZED_ALTERNATE_COMBOBOXGETTEXT        L"ΠΛΑΙΣΙΟ_ΚΕΙΜΕΝΟΥ_ΤΙΜΗ" // 
#define LOCALIZED_ALTERNATE_COMBOBOXSETTEXT        L"ΠΛΑΙΣΙΟ_ΚΕΙΜΕΝΟΥ_ΟΡΙΣΜΟΣ" // 
#define LOCALIZED_ALTERNATE_CONTENTS               L"ΠΕΡΙΕΧΟΜΕΝΑ" // 
#define LOCALIZED_ALTERNATE_CONTINUE               L"ΣΥΝΕΧΕΙΑ" // 
#define LOCALIZED_ALTERNATE_COPYDEF                L"ΑΝΤΙΓΡΑΦΗ_ΟΡΙΣΜΟΥ" // 
#define LOCALIZED_ALTERNATE_COS                    L"ΣΥΝΗΜΙΤΟΝΟ" // 
#define LOCALIZED_ALTERNATE_COUNT                  L"ΜΕΤΡΗΣΗ" // 
#define LOCALIZED_ALTERNATE_CS                     L"cs" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_CT                     L"ct" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_CURSOR                 L"cursor" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_DEBUGWINDOWS           L"debugwindows" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_DEFINE                 L"ΟΡΙΣΜΟΣ" // 
#define LOCALIZED_ALTERNATE_DEFINEDP               L"definedp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_DEFINED_               L"ΟΡΙΣΤΗΚΕ?" // 
#define LOCALIZED_ALTERNATE_DIALOGCREATE           L"ΠΑΡΑΘΥΡΟ_ΔΙΑΛΟΓΟΥ_ΔΗΜΙΟΥΡΓΙΑ" // 
#define LOCALIZED_ALTERNATE_DIALOGENABLE           L"ΠΑΡΑΘΥΡΟ_ΔΙΑΛΟΓΟΥ_ΕΝΕΡΓΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_DIALOGDELETE           L"ΠΑΡΑΘΥΡΟ_ΔΙΑΛΟΓΟΥ_ΔΙΑΓΡΑΦΗ" // 
#define LOCALIZED_ALTERNATE_DIALOGFILEOPEN         L"ΠΑΡΑΘΥΡΟ_ΑΡΧΕΙΟ_ΑΝΟΙΓΜΑ" // 
#define LOCALIZED_ALTERNATE_DIALOGFILESAVE         L"ΠΑΡΑΘΥΡΟ_ΑΡΧΕΙΟ_ΑΠΟΘΗΚΕΥΣΗ" // 
#define LOCALIZED_ALTERNATE_DIFFERENCE             L"ΔΙΑΦΟΡΑ" // 
#define LOCALIZED_ALTERNATE_DIRECTORIES            L"ΚΑΤΑΛΟΓΟΙ" // 
#define LOCALIZED_ALTERNATE_DLLCALL                L"DLL_ΚΛΗΣΗ" // 
#define LOCALIZED_ALTERNATE_DLLFREE                L"DLL_ΚΛΕΙΣΙΜΟ" // 
#define LOCALIZED_ALTERNATE_DLLLOAD                L"DLL_ΑΝΟΙΓΜΑ" // 
#define LOCALIZED_ALTERNATE_DOWN                   L"ΚΑΤΩ" // 
#define LOCALIZED_ALTERNATE_DOWNPITCH              L"downpitch" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_DRIBBLE                L"ΚΑΤΑΓΡΑΦΗ" // 
#define LOCALIZED_ALTERNATE_ED                     L"ed" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_EDIT                   L"edit" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ELLIPSEARC             L"ellipsearc" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_EMPTYP                 L"emptyp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_EMPTY_                 L"ΑΔΕΙΟ?" // 
#define LOCALIZED_ALTERNATE_EOFP                   L"eofp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_EOF_                   L"ΤΕΛΟΣ_ΑΡΧΕΙΟΥ?" // 
#define LOCALIZED_ALTERNATE_EQUALP                 L"equalp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_EQUAL_                 L"ΙΣΟ?" // 
#define LOCALIZED_ALTERNATE_ER                     L"er" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ERASE                  L"ΣΒΗΣΙΜΟ" // 
#define LOCALIZED_ALTERNATE_ERASEFILE              L"ΣΒΗΣΙΜΟ_ΑΡΧΕΙΟΥ" // 
#define LOCALIZED_ALTERNATE_ERF                    L"erf" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ERROR                  L"ΣΦΑΛΜΑ" // 
#define LOCALIZED_ALTERNATE_EVENTCHECK             L"ΕΛΕΓΧΟΣ_ΓΕΓΟΝΟΤΩΝ" // 
#define LOCALIZED_ALTERNATE_EXP                    L"exp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_FD                     L"fd" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_FENCE                  L"fence" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_FILL                   L"ΓΕΜΙΣΜΑ" // 
#define LOCALIZED_ALTERNATE_FILES                  L"ΑΡΧΕΙΑ" // 
#define LOCALIZED_ALTERNATE_FIRST                  L"ΠΡΩΤΟ" // 
#define LOCALIZED_ALTERNATE_FIRSTS                 L"ΠΡΩΤΑ" // 
#define LOCALIZED_ALTERNATE_FLOODCOLOR             L"ΧΡΩΜΑ_ΓΕΜΙΣΜΑΤΟΣ" // 
#define LOCALIZED_ALTERNATE_FONTFACENAMES          L"ΓΡΑΜΜΑΤΟΣΕΙΡΕΣ" // 
#define LOCALIZED_ALTERNATE_FOREVER                L"forever" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_FORM                   L"form" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_FORWARD                L"ΕΜΠΡΟΣ" // 
#define LOCALIZED_ALTERNATE_FPUT                   L"fput" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_FS                     L"fs" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_FULLSCREEN             L"ΠΛΗΡΗΣ_ΟΘΟΝΗ" // 
#define LOCALIZED_ALTERNATE_FULLTEXT               L"ΠΛΗΡΕΣ_ΚΕΙΜΕΝΟ" // 
#define LOCALIZED_ALTERNATE_GETFOCUS               L"ΕΣΤΙΑ" // 
#define LOCALIZED_ALTERNATE_GOTO                   L"ΠΗΓΑΙΝΕ" // 
#define LOCALIZED_ALTERNATE_GIFLOAD                L"GIF_ΑΝΟΙΓΜΑ" // 
#define LOCALIZED_ALTERNATE_GIFSIZE                L"GIF_ΜΕΓΕΘΟΣ" // 
#define LOCALIZED_ALTERNATE_GIFSAVE                L"GIF_ΑΠΟΘΗΚΕΥΣΗ" // 
#define LOCALIZED_ALTERNATE_GPROP                  L"ΙΔΙΟΤΗΤΑ_ΤΙΜΗ" // 
#define LOCALIZED_ALTERNATE_GREATEREQUALP          L"greaterequalp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_GREATEREQUAL_          L"ΜΕΓΑΛΥΤΕΡΟ_ΙΣΟ?" // 
#define LOCALIZED_ALTERNATE_GREATERP               L"greaterp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_GREATER_               L"ΜΕΓΑΛΥΤΕΡΟ?" // 
#define LOCALIZED_ALTERNATE_GROUPBOXCREATE         L"ΠΛΑΙΣΙΟ_ΟΜΑΔΑΣ_ΔΗΜΙΟΥΡΓΙΑ" // 
#define LOCALIZED_ALTERNATE_GROUPBOXDELETE         L"ΠΛΑΙΣΙΟ_ΟΜΑΔΑΣ_ΔΙΑΓΡΑΦΗ" // 
#define LOCALIZED_ALTERNATE_HALT                   L"halt" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_HASOWNPENP             L"hasownpenp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_HASOWNPEN_             L"hasownpen?" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_HEADING                L"ΚΑΤΕΥΘΥΝΣΗ" // 
#define LOCALIZED_ALTERNATE_HELP                   L"ΒΟΗΘΕΙΑ" // 
#define LOCALIZED_ALTERNATE_HIDETURTLE             L"hideturtle" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_HOME                   L"ΣΠΙΤΙ" // 
#define LOCALIZED_ALTERNATE_HT                     L"ht" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_IF                     L"ΑΝ" // 
#define LOCALIZED_ALTERNATE_IFELSE                 L"ΑΝ_ΑΛΛΙΩΣ" // 
#define LOCALIZED_ALTERNATE_IFF                    L"iff" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_IFFALSE                L"ΑΝ_ΨΕΥΔΗΣ" // 
#define LOCALIZED_ALTERNATE_IFT                    L"ift" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_IFTRUE                 L"ΑΝ_ΑΛΗΘΗΣ" // 
#define LOCALIZED_ALTERNATE_INGAMEPORT             L"ingameport" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_INPORT                 L"inport" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_INPORTB                L"inportb" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_INT                    L"ΑΚΕΡΑΙΟΣ" // 
#define LOCALIZED_ALTERNATE_ITEM                   L"ΣΤΟΙΧΕΙΟ" // 
#define LOCALIZED_ALTERNATE_KEYBOARDOFF            L"ΠΛΗΚΤΡΟΛΟΓΙΟ_ΑΠΕΝΕΡΓΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_KEYBOARDON             L"ΠΛΗΚΤΡΟΛΟΓΙΟ_ΕΝΕΡΓΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_KEYBOARDVALUE          L"ΠΛΗΚΤΡΟΛΟΓΙΟ_ΤΙΜΗ" // 
#define LOCALIZED_ALTERNATE_KEYP                   L"keyp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_KEY_                   L"ΠΛΗΚΤΡΟ?" // 
#define LOCALIZED_ALTERNATE_LABEL                  L"ΕΤΙΚΕΤΑ" // 
#define LOCALIZED_ALTERNATE_LABELFONT              L"ΕΤΙΚΕΤΑ_ΓΡΑΜΜΑΤΟΣΕΙΡΑ" // 
#define LOCALIZED_ALTERNATE_LABELSIZE              L"ΕΤΙΚΕΤΑ_ΜΕΓΕΘΟΣ" // 
#define LOCALIZED_ALTERNATE_LAST                   L"ΤΕΛΕΥΤΑΙΟ" // 
#define LOCALIZED_ALTERNATE_LEFT                   L"ΑΡΙΣΤΕΡΑ" // 
#define LOCALIZED_ALTERNATE_LEFTROLL               L"leftroll" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_LESSEQUALP             L"lessequalp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_LESSEQUAL_             L"ΜΙΚΡΟΤΕΡΟ_ΙΣΟ?" // 
#define LOCALIZED_ALTERNATE_LESSP                  L"lessp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_LESS_                  L"ΜΙΚΡΟΤΕΡΟ?" // 
#define LOCALIZED_ALTERNATE_LIGHT                  L"ΦΩΣ" // 
#define LOCALIZED_ALTERNATE_LIST                   L"ΛΙΣΤΑ" // 
#define LOCALIZED_ALTERNATE_LISTBOXADDSTRING       L"ΠΛΑΙΣΙΟ_ΛΙΣΤΑΣ_ΠΡΟΣΘΗΚΗ" // 
#define LOCALIZED_ALTERNATE_LISTBOXCREATE          L"ΠΛΑΙΣΙΟ_ΛΙΣΤΑΣ_ΔΗΜΙΟΥΡΓΙΑ" // 
#define LOCALIZED_ALTERNATE_LISTBOXENABLE          L"ΠΛΑΙΣΙΟ_ΛΙΣΤΑΣ_ΕΝΕΡΓΟΠΙΟΗΣΗ" // 
#define LOCALIZED_ALTERNATE_LISTBOXDELETE          L"ΠΛΑΙΣΙΟ_ΛΙΣΤΑΣ_ΔΙΑΓΡΑΦΗ" // 
#define LOCALIZED_ALTERNATE_LISTBOXDELETESTRING    L"ΠΛΑΙΣΙΟ_ΛΙΣΤΑΣ_ΑΦΑΙΡΕΣΗ" // 
#define LOCALIZED_ALTERNATE_LISTBOXGETSELECT       L"ΠΛΑΙΣΙΟ_ΛΙΣΤΑΣ_ΕΠΙΛΟΓΗ" // 
#define LOCALIZED_ALTERNATE_LISTP                  L"listp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_LIST_                  L"ΛΙΣΤΑ?" // 
#define LOCALIZED_ALTERNATE_LN                     L"ln" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_LOAD                   L"ΦΟΡΤΩΣΗ" // 
#define LOCALIZED_ALTERNATE_LOCAL                  L"ΤΟΠΙΚΟ" // 
#define LOCALIZED_ALTERNATE_LOG10                  L"log10" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_LOGOVERSION            L"ΕΚΔΟΣΗ" // 
#define LOCALIZED_ALTERNATE_LOWERCASE              L"ΠΕΖΑ" // 
#define LOCALIZED_ALTERNATE_LPUT                   L"ΠΡΟΣΘΗΚΗ_ΤΕΛΟΣ" // 
#define LOCALIZED_ALTERNATE_LR                     L"lr" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_LSHIFT                 L"ΟΛΙΣΘΗΣΗ" // 
#define LOCALIZED_ALTERNATE_LT                     L"lt" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_MACHINE                L"ΜΗΧΑΝΗ" // 
#define LOCALIZED_ALTERNATE_MACROP                 L"macrop" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_MACRO_                 L"ΜΑΚΡΟΕΝΤΟΛΗ?" // 
#define LOCALIZED_ALTERNATE_MAKE                   L"ΜΕΤΑΒΛΗΤΗ" // 
#define LOCALIZED_ALTERNATE_MCI                    L"mci" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_MEMBER                 L"ΜΕΛΟΣ" // 
#define LOCALIZED_ALTERNATE_MEMBERP                L"memberp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_MEMBER_                L"ΜΕΛΟΣ?" // 
#define LOCALIZED_ALTERNATE_MESSAGEBOX             L"ΜΗΝΥΜΑ" // 
#define LOCALIZED_ALTERNATE_MIDICLOSE              L"MIDI_ΚΛΕΙΣΙΜΟ" // 
#define LOCALIZED_ALTERNATE_MIDIMESSAGE            L"MIDI_ΜΗΝΥΜΑ" // 
#define LOCALIZED_ALTERNATE_MIDIOPEN               L"MIDI_ΑΝΟΙΓΜΑ" // 
#define LOCALIZED_ALTERNATE_MINUS                  L"ΜΕΙΟΝ" // 
#define LOCALIZED_ALTERNATE_MKDIR                  L"ΚΑΤΑΛΟΓΟΣ_ΔΗΜΙΟΥΡΓΙΑ" // 
#define LOCALIZED_ALTERNATE_MODULO                 L"modulo" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_MOUSEOFF               L"ΠΟΝΤΙΚΙ_ΑΠΕΝΕΡΓΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_MOUSEON                L"ΠΟΝΤΙΚΙ_ΕΝΕΡΓΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_MOUSEPOS               L"ΠΟΝΤΙΚΙ_ΘΕΣΗ" // 
#define LOCALIZED_ALTERNATE_NAMEP                  L"namep" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_NAME_                  L"ΟΝΟΜΑ?" // 
#define LOCALIZED_ALTERNATE_NAMES                  L"ΟΝΟΜΑΤΑ" // 
#define LOCALIZED_ALTERNATE_NETACCEPTOFF           L"ΔΙΚΤΥΟ_ΑΠΟΔΟΧΗ_ΑΠΕΝΕΡΓΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_NETACCEPTON            L"ΔΙΚΤΥΟ_ΑΠΟΔΟΧΗ_ΕΝΕΡΓΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_NETACCEPTRECEIVEVALUE  L"ΔΙΚΤΥΟ_ΑΠΟΔΟΧΗ_ΤΙΜΗ_ΛΗΨΗΣ" // 
#define LOCALIZED_ALTERNATE_NETACCEPTSENDVALUE     L"ΔΙΚΤΥΟ_ΑΠΟΔΟΧΗ_ΤΙΜΗ_ΑΠΟΣΤΟΛΗΣ" // 
#define LOCALIZED_ALTERNATE_NETCONNECTOFF          L"ΔΙΚΤΥΟ_ΣΥΝΔΕΣΗ_ΑΠΕΝΕΡΓΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_NETCONNECTON           L"ΔΙΚΤΥΟ_ΣΥΝΔΕΣΗ_ΕΝΕΡΓΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_NETCONNECTRECEIVEVALUE L"ΔΙΚΤΥΟ_ΣΥΝΔΕΣΗ_ΤΙΜΗ_ΛΗΨΗΣ" // 
#define LOCALIZED_ALTERNATE_NETCONNECTSENDVALUE    L"ΔΙΚΤΥΟ_ΣΥΝΔΕΣΗ_ΤΙΜΗ_ΑΠΟΣΤΟΛΗΣ" // 
#define LOCALIZED_ALTERNATE_NETSHUTDOWN            L"ΔΙΚΤΥΟ_ΑΠΕΝΕΡΓΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_NETSTARTUP             L"ΔΙΚΤΥΟ_ΕΝΕΡΓΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_NOBITMAPTURTLE         L"nobitmapturtle" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_NODES                  L"ΚΟΜΒΟΙ" // 
#define LOCALIZED_ALTERNATE_NODRIBBLE              L"nodribble" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_NOSTATUS               L"nostatus" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_NOT                    L"ΟΧΙ" // 
#define LOCALIZED_ALTERNATE_NOTEQUALP              L"notequalp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_NOTEQUAL_              L"ΟΧΙ_ΙΣΟ?" // 
#define LOCALIZED_ALTERNATE_NOYIELD                L"noyield" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_NUMBERP                L"numberp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_NUMBER_                L"ΑΡΙΘΜΟΣ?" // 
#define LOCALIZED_ALTERNATE_OP                     L"op" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_OPENAPPEND             L"ΑΝΟΙΓΜΑ_ΠΡΟΣΑΡΤΗΣΗ" // 
#define LOCALIZED_ALTERNATE_OPENREAD               L"ΑΝΟΙΓΜΑ_ΑΝΑΓΝΩΣΗ" // 
#define LOCALIZED_ALTERNATE_OPENUPDATE             L"ΑΝΟΙΓΜΑ_ΕΝΗΜΕΡΩΣΗ" // 
#define LOCALIZED_ALTERNATE_OPENWRITE              L"ΑΝΟΙΓΜΑ_ΕΓΓΡΑΦΗ" // 
#define LOCALIZED_ALTERNATE_OR                     L"Η" // 
#define LOCALIZED_ALTERNATE_OUTPORT                L"outport" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_OUTPORTB               L"outportb" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_OUTPUT                 L"ΕΞΟΔΟΣ" // 
#define LOCALIZED_ALTERNATE_PARSE                  L"ΕΠΕΞΕΡΓΑΣΙΑ" // 
#define LOCALIZED_ALTERNATE_PAUSE                  L"ΠΑΥΣΗ" // 
#define LOCALIZED_ALTERNATE_PC                     L"pc" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PD                     L"pd" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PE                     L"pe" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PENCOLOR               L"ΠΕΝΑ_ΧΡΩΜΑ" // 
#define LOCALIZED_ALTERNATE_PENDOWN                L"ΠΕΝΑ_ΚΑΤΩ" // 
#define LOCALIZED_ALTERNATE_PENDOWNP               L"pendownp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PENDOWN_               L"ΠΕΝΑ_ΚΑΤΩ?" // 
#define LOCALIZED_ALTERNATE_PENERASE               L"ΠΕΝΑ_ΣΒΗΣΙΜΟ" // 
#define LOCALIZED_ALTERNATE_PENMODE                L"ΠΕΝΑ_ΣΥΣΤΗΜΑ" // 
#define LOCALIZED_ALTERNATE_PENPAINT               L"ΠΕΝΑ_ΣΧΕΔΙΑΣΗ" // 
#define LOCALIZED_ALTERNATE_PENPATTERN             L"ΠΕΝΑ_ΜΟΤΙΒΟ" // 
#define LOCALIZED_ALTERNATE_PENREVERSE             L"ΠΕΝΑ_ΑΝΤΙΣΤΡΟΦΗ" // 
#define LOCALIZED_ALTERNATE_PENSIZE                L"ΠΕΝΑ_ΜΕΓΕΘΟΣ" // 
#define LOCALIZED_ALTERNATE_PENUP                  L"ΠΕΝΑ_ΠΑΝΩ" // 
#define LOCALIZED_ALTERNATE_PERSPECTIVE            L"ΠΡΟΟΠΤΙΚΗ" // 
#define LOCALIZED_ALTERNATE_PITCH                  L"pitch" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PIXEL                  L"pixel" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PLAYWAVE               L"ΑΝΑΠΑΡΑΓΩΓΗ" // 
#define LOCALIZED_ALTERNATE_PLIST                  L"ΙΔΙΟΤΗΤΑ_ΛΙΣΤΑ" // 
#define LOCALIZED_ALTERNATE_PLISTS                 L"ΙΔΙΟΤΗΤΑ_ΛΙΣΤΕΣ" // 
#define LOCALIZED_ALTERNATE_PO                     L"po" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_POPDIR                 L"ΚΑΤΑΛΟΓΟΣ_ΠΑΝΩ" // 
#define LOCALIZED_ALTERNATE_POLYSTART              L"ΠΟΛΥΓΩΝΟ_ΑΡΧΗ" // 
#define LOCALIZED_ALTERNATE_POLYEND                L"ΠΟΛΥΓΩΝΟ_ΤΕΛΟΣ" // 
#define LOCALIZED_ALTERNATE_POLYVIEW               L"ΠΟΛΥΓΩΝΟ_ΠΡΟΒΟΛΗ" // 
#define LOCALIZED_ALTERNATE_PORTCLOSE              L"ΘΥΡΑ_ΚΛΕΙΣΙΜΟ" // 
#define LOCALIZED_ALTERNATE_PORTFLUSH              L"ΘΥΡΑ_ΚΑΘΑΡΙΣΜΟΣ" // 
#define LOCALIZED_ALTERNATE_PORTMODE               L"ΘΥΡΑ_ΣΥΣΤΗΜΑ" // 
#define LOCALIZED_ALTERNATE_PORTOPEN               L"ΘΥΡΑ_ΑΝΟΙΓΜΑ" // 
#define LOCALIZED_ALTERNATE_PORTREADARRAY          L"ΘΥΡΑ_ΑΝΑΓΝΩΣΗ_ΠΙΝΑΚΑ" // 
#define LOCALIZED_ALTERNATE_PORTREADCHAR           L"ΘΥΡΑ_ΑΝΑΓΝΩΣΗ_ΧΑΡΑΚΤΗΡΑ" // 
#define LOCALIZED_ALTERNATE_PORTWRITEARRAY         L"ΘΥΡΑ_ΕΓΓΡΑΦΗ_ΠΙΝΑΚΑ" // 
#define LOCALIZED_ALTERNATE_PORTWRITECHAR          L"ΘΥΡΑ_ΕΓΓΡΑΦΗ_ΧΑΡΑΚΤΗΡΑ" // 
#define LOCALIZED_ALTERNATE_POS                    L"ΘΕΣΗ" // 
#define LOCALIZED_ALTERNATE_POSXYZ                 L"ΘΕΣΗ_XYZ" // XYZ is Engilsh, copy XYZ in Greek
#define LOCALIZED_ALTERNATE_POT                    L"pot" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_POWER                  L"ΔΥΝΑΜΗ" // 
#define LOCALIZED_ALTERNATE_PPROP                  L"ΙΔΙΟΤΗΤΑ_ΟΡΙΣΜΟΣ" // 
#define LOCALIZED_ALTERNATE_PPT                    L"ppt" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PR                     L"pr" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PRIMITIVEP             L"primitivep" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PRIMITIVE_             L"primitive?" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PRINT                  L"ΕΚΤΥΠΩΣΗ" // 
#define LOCALIZED_ALTERNATE_PROCEDUREP             L"procedurep" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PROCEDURE_             L"procedure?" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PROPLISTP              L"proplistp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PROPLIST_              L"proplist?" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PROCEDURES             L"procedures" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PRODUCT                L"ΓΙΝΟΜΕΝΟ" // 
#define LOCALIZED_ALTERNATE_PU                     L"pu" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PX                     L"px" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_QUESTIONBOX            L"ΜΗΝΥΜΑ_ΕΡΩΤΗΣΗ" // 
#define LOCALIZED_ALTERNATE_QUOTIENT               L"ΔΙΑΙΡΕΣΗ" // 
#define LOCALIZED_ALTERNATE_RADARCCOS              L"radarccos" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_RADARCSIN              L"radarcsin" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_RADARCTAN              L"radarctan" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_RADCOS                 L"radcos" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_RADIOBUTTONCREATE      L"ΠΛΑΙΣΙΟ_ΕΠΙΛΟΓΗΣ_ΔΗΜΙΟΥΡΓΙΑ" // 
#define LOCALIZED_ALTERNATE_RADIOBUTTONENABLE      L"ΠΛΑΙΣΙΟ_ΕΠΙΛΟΓΗΣ_ΕΝΕΡΓΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_RADIOBUTTONDELETE      L"ΠΛΑΙΣΙΟ_ΕΠΙΛΟΓΗΣ_ΔΙΑΓΡΑΦΗ" // 
#define LOCALIZED_ALTERNATE_RADIOBUTTONGET         L"ΠΛΑΙΣΙΟ_ΕΠΙΛΟΓΗΣ_ΤΙΜΗ" // 
#define LOCALIZED_ALTERNATE_RADIOBUTTONSET         L"ΠΛΑΙΣΙΟ_ΕΠΙΛΟΓΗΣ_ΟΡΙΣΜΟΣ" // 
#define LOCALIZED_ALTERNATE_RADSIN                 L"radsin" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_RADTAN                 L"radtan" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_RANDOM                 L"random" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_RAWASCII               L"rawascii" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_RC                     L"rc" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_RCS                    L"rcs" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_READCHAR               L"ΑΝΑΓΝΩΣΗ_ΧΑΡΑΚΤΗΡΑ" // 
#define LOCALIZED_ALTERNATE_READCHARS              L"ΑΝΑΓΝΩΣΗ_ΧΑΡΑΚΤΗΡΩΝ" // 
#define LOCALIZED_ALTERNATE_READER                 L"ΑΝΑΓΝΩΣΗ_ΠΗΓΗ" // 
#define LOCALIZED_ALTERNATE_READLIST               L"ΑΝΑΓΝΩΣΗ_ΛΙΣΤΑΣ" // 
#define LOCALIZED_ALTERNATE_READPOS                L"ΑΝΑΓΝΩΣΗ_ΘΕΣΗ" // 
#define LOCALIZED_ALTERNATE_READRAWLINE            L"readrawline" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_READWORD               L"ΑΝΑΓΝΩΣΗ_ΛΕΞΗΣ" // 
#define LOCALIZED_ALTERNATE_REMAINDER              L"ΥΠΟΛΟΙΠΟ" // 
#define LOCALIZED_ALTERNATE_REMPROP                L"ΙΔΙΟΤΗΤΑ_ΑΦΑΙΡΕΣΗ" // 
#define LOCALIZED_ALTERNATE_REPCOUNT               L"ΕΠΑΝΑΛΗΨΗ_ΑΡΙΘΜΟΣ" // 
#define LOCALIZED_ALTERNATE_REPEAT                 L"ΕΠΑΝΑΛΗΨΗ" // 
#define LOCALIZED_ALTERNATE_RERANDOM               L"rerandom" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_RIGHT                  L"right" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_RIGHTROLL              L"rightroll" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_RL                     L"rl" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_RMDIR                  L"ΚΑΤΑΛΟΓΟΣ_ΔΙΑΓΡΑΦΗ" // 
#define LOCALIZED_ALTERNATE_ROLL                   L"roll" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ROUND                  L"ΣΤΡΟΓΓΥΛΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_RR                     L"rr" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_RT                     L"rt" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_RUN                    L"ΕΚΤΕΛΕΣΗ" // 
#define LOCALIZED_ALTERNATE_RUNPARSE               L"ΕΚΤΕΛΕΣΗ_ΕΠΕΞΕΡΓΑΣΙΑ" // 
#define LOCALIZED_ALTERNATE_RUNRESULT              L"ΕΚΤΕΛΕΣΗ_ΑΠΟΤΕΛΕΣΜΑ" // 
#define LOCALIZED_ALTERNATE_RW                     L"rw" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SAVE                   L"ΑΠΟΘΗΚΕΥΣΗ" // 
#define LOCALIZED_ALTERNATE_SCREENCOLOR            L"screencolor" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SCROLLBARCREATE        L"scrollbarcreate" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SCROLLBARENABLE        L"scrollbarenable" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SCROLLBARDELETE        L"scrollbardelete" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SCROLLBARGET           L"scrollbarget" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SCROLLBARSET           L"scrollbarset" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SCROLLX                L"scrollx" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SCROLLY                L"scrolly" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SCRUNCH                L"scrunch" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SE                     L"se" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SELECTBOX              L"ΜΗΝΥΜΑ_ΕΠΙΛΟΓΗ" // 
#define LOCALIZED_ALTERNATE_SENTENCE               L"ΠΡΟΤΑΣΗ" // 
#define LOCALIZED_ALTERNATE_SETACTIVEAREA          L"ΕΝΕΡΓΗ_ΠΕΡΙΟΧΗ_ΟΡΙΣΜΟΣ" // 
#define LOCALIZED_ALTERNATE_SETBITINDEX            L"setbitindex" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETBITMODE             L"setbitmode" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETCLIP                L"setclip" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETCURSOR              L"setcursor" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETCURSORNOWAIT        L"setcursornowait" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETCURSORWAIT          L"setcursorwait" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETFC                  L"setfc" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETFLOODCOLOR          L"setfloodcolor" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETFOCUS               L"setfocus" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETH                   L"seth" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETHEADING             L"setheading" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETITEM                L"setitem" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETLABELFONT           L"setlabelfont" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETLIGHT               L"setlight" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETMARGINS             L"setmargins" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETPC                  L"setpc" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETPENCOLOR            L"setpencolor" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETPENPATTERN          L"setpenpattern" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETPENSIZE             L"setpensize" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETPITCH               L"setpitch" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETPIXEL               L"setpixel" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETPOS                 L"setpos" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETPOSXYZ              L"setposxyz" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETREAD                L"setread" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETREADPOS             L"setreadpos" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETROLL                L"setroll" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETSC                  L"setsc" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETSCREENCOLOR         L"setscreencolor" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETSCRUNCH             L"setscrunch" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETTIMER               L"settimer" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETTURTLE              L"setturtle" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETTURTLEMODE          L"setturtlemode" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETWRITE               L"setwrite" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETWRITEPOS            L"setwritepos" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETX                   L"setx" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETXY                  L"setxy" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETXYZ                 L"setxyz" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETY                   L"sety" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETZ                   L"setz" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SHELL                  L"shell" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SHOW                   L"ΕΜΦΑΝΙΣΗ" // 
#define LOCALIZED_ALTERNATE_SHOWNP                 L"shownp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SHOWN_                 L"shown?" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SHOWTURTLE             L"showturtle" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SIN                    L"ΗΜΙΤΟΝΟ" // 
#define LOCALIZED_ALTERNATE_SOUND                  L"ΗΧΟΣ" // 
#define LOCALIZED_ALTERNATE_SPLITSCREEN            L"splitscreen" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SQRT                   L"ΡΙΖΑ" // 
#define LOCALIZED_ALTERNATE_SS                     L"ss" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ST                     L"st" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_STANDOUT               L"standout" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_STATICCREATE           L"staticcreate" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_STATICDELETE           L"staticdelete" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_STATICUPDATE           L"staticupdate" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_STATUS                 L"status" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_STEP                   L"ΒΗΜΑ" // 
#define LOCALIZED_ALTERNATE_STEPPED                L"stepped" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_STOP                   L"ΣΤΑΜΑΤΗΜΑ" // 
#define LOCALIZED_ALTERNATE_SUBSTRINGP             L"substringp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SUBSTRING_             L"substring?" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SUM                    L"ΑΘΡΟΙΣΜΑ" // 
#define LOCALIZED_ALTERNATE_TAG                    L"tag" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_TAN                    L"tan" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_TEST                   L"ΔΟΚΙΜΗ" // 
#define LOCALIZED_ALTERNATE_TEXT                   L"text" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_TEXTSCREEN             L"textscreen" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_THING                  L"ΤΙΜΗ" // 
#define LOCALIZED_ALTERNATE_THROW                  L"throw" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_TIME                   L"ΩΡΑ"
#define LOCALIZED_ALTERNATE_TIMEMILLI              L"ΧΡΟΝΟΣ" // 
#define LOCALIZED_ALTERNATE_TO                     L"to" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_TONE                   L"tone" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_TOWARDS                L"ΠΡΟΣ" // 
#define LOCALIZED_ALTERNATE_TOWARDSXYZ             L"ΠΡΟΣ_XYZ" // 
#define LOCALIZED_ALTERNATE_TRACE                  L"trace" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_TRACED                 L"traced" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_TS                     L"ts" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_TURTLE                 L"ΧΕΛΩΝΑ" //
#define LOCALIZED_ALTERNATE_TURTLEMODE             L"ΧΕΛΩΝΑ_ΣΥΣΤΗΜΑ" // 
#define LOCALIZED_ALTERNATE_TURTLES                L"ΧΕΛΩΝΕΣ" // 
#define LOCALIZED_ALTERNATE_TYPE                   L"type" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_UNBURY                 L"unbury" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_UNSTEP                 L"unstep" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_UNTRACE                L"untrace" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_UP                     L"up" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_UPPERCASE              L"ΚΕΦΑΛΑΙΑ" // 
#define LOCALIZED_ALTERNATE_UPPITCH                L"uppitch" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_WAIT                   L"ΑΝΑΜΟΝΗ" // 
#define LOCALIZED_ALTERNATE_WINDOW                 L"ΠΑΡΑΘΥΡΟ" // 
#define LOCALIZED_ALTERNATE_WINDOWCREATE           L"ΠΑΡΑΘΥΡΟ_ΔΗΜΙΟΥΡΓΙΑ" // 
#define LOCALIZED_ALTERNATE_WINDOWENABLE           L"ΠΑΡΑΘΥΡΟ_ΕΝΕΡΓΟΠΟΙΗΣΗ" // 
#define LOCALIZED_ALTERNATE_WINDOWDELETE           L"ΠΑΡΑΘΥΡΟ_ΔΙΑΓΡΑΦΗ" // 
#define LOCALIZED_ALTERNATE_WINDOWFILEEDIT         L"windowfileedit" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_WINDOWSET              L"windowset" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_WINHELP                L"BOHUEIA" // 
#define LOCALIZED_ALTERNATE_WORD                   L"ΛΕΞΗ" // 
#define LOCALIZED_ALTERNATE_WORDP                  L"wordp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_WORD_                  L"ΛΕΞΗ?" // 
#define LOCALIZED_ALTERNATE_WRAP                   L"wrap" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_WRITEPOS               L"ΕΓΓΡΑΦΗ_ΘΕΣΗ" // 
#define LOCALIZED_ALTERNATE_WRITER                 L"ΕΓΓΡΑΦΗ_ΠΡΟΟΡΙΣΜΟΣ" // 
#define LOCALIZED_ALTERNATE_YESNOBOX               L"ΜΗΝΥΜΑ_ΝΑΙ_ΟΧΙ" // 
#define LOCALIZED_ALTERNATE_YIELD                  L"yield" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ZOOM                   L"ΜΕΓΕΘΥΝΣΗ" // 

//
// General localized strings
//
#define LOCALIZED_GENERAL_OKBUTTON      L"OK"
#define LOCALIZED_GENERAL_CANCELBUTTON  L"ʼκυρο"
#define LOCALIZED_GENERAL_APPLYBUTTON   L"&Apply" // NOT_YET_LOCALIZED

#define LOCALIZED_GENERAL_PRODUCTNAME   L"UniLogo"

// Embedded description of unilogo.exe
#define LOCALIZED_UNILOGO_FILE_DESCRIPTION  L"The UniLogo programming environment" // NOT_YET_LOCALIZED

//
// The menu options on the main window 
//
#define LOCALIZED_FILE                  L"&Αρχείο" // 
#define LOCALIZED_FILE_NEW              L"&Νέο\t(διαγράφει εντολές και μεταβλητές)" // I'm sure "workspace" can have a better translation.
#define LOCALIZED_FILE_LOAD             L"&Φόρτωση...\t(προσθέτει εντολές και μεταβλητές από αρχείο)" // 
#define LOCALIZED_FILE_OPEN             L"ʼν&οιγμα...\t(διαγράφει εντολές και μεταβλητές και ανοίγει ένα νέο αρχείο)" // 
#define LOCALIZED_FILE_SAVE             L"&Αποθήκευση"  // 
#define LOCALIZED_FILE_SAVEAS           L"Αποθήκευση &ως..." // 
#define LOCALIZED_FILE_SETASSCREENSAVER L"Se&t As Screen Saver" // NOT_YET_LOCALIZED
#define LOCALIZED_FILE_EDIT             L"&Επεξεργασία..." // 
#define LOCALIZED_FILE_ERASE            L"&Σβήσιμο..." // 
#define LOCALIZED_FILE_EXIT             L"Έ&ξοδος" // 

#define LOCALIZED_BITMAP               L"Ει&κόνα" // 
#define LOCALIZED_BITMAP_NEW           L"&Νέο" // 
#define LOCALIZED_BITMAP_LOAD          L"ʼν&οιγμα..." // 
#define LOCALIZED_BITMAP_SAVE          L"&Αποθήκευση" // 
#define LOCALIZED_BITMAP_SAVEAS        L"Αποθήκευση &ως..." // 
#define LOCALIZED_BITMAP_PRINT         L"&Εκτύπωση..." // 
#define LOCALIZED_BITMAP_PRINTERSETUP  L"Ε&πιλογές εκτύπωσης..." // 
#define LOCALIZED_BITMAP_ACTIVEAREA    L"Ενε&ργή Περιοχή..." // 

#define LOCALIZED_SET                  L"&Ρύθμιση" // 
#define LOCALIZED_SET_PENSIZE          L"&Μέγεθος πένας..." // 
#define LOCALIZED_SET_LABELFONT        L"Γραμματοσειρά &χελωνας..." // 
#define LOCALIZED_SET_COMMANDERFONT    L"Γραμματοσειρά παραθύρου &ελέγχου (commander)..." // 
#define LOCALIZED_SET_PENCOLOR         L"Χρώμα &πένας..." // 
#define LOCALIZED_SET_FLOODCOLOR       L"Χρώμα &γεμίσματος..." // 
#define LOCALIZED_SET_SCREENCOLOR      L"Χρώμα &οθόνης..." // 

#define LOCALIZED_ZOOM                 L"&Ζουμ"  // 
#define LOCALIZED_ZOOM_IN              L"&Μεγέθυνση" // 
#define LOCALIZED_ZOOM_OUT             L"&Σμίκρυνση" // 
#define LOCALIZED_ZOOM_NORMAL          L"&Κανονικό" // 

#define LOCALIZED_HELP                 L"&Βοήθεια"  // 
#define LOCALIZED_HELP_INDEX           L"&Θέματα στη βοήθεια" // 
#define LOCALIZED_HELP_TUTORIAL        L"&Μάθημα" // 
#define LOCALIZED_HELP_DEMO            L"&Επίδειξη"  // 
#define LOCALIZED_HELP_EXAMPLE         L"&Παραδείγματα" // 
#define LOCALIZED_HELP_RELEASENOTES    L"&Σημειώσεις έκδοσης" // 
#define LOCALIZED_HELP_ABOUTUNILOGO    L"&Πληροφορίες για την " LOCALIZED_GENERAL_PRODUCTNAME L"..." 
#define LOCALIZED_HELP_MS              L"&Πληροφορίες για την MS..." // 
// The following two help options display tables for translating to/from English
// These tables are built from the LOCALIZED_ALTERNATE_* macros above and the
// and startup-xxxx.logoscript file.
#define LOCALIZED_HELP_LANGTOENGLISH   L"LANGUAGE to English" // NOT_YET_LOCALIZED
#define LOCALIZED_HELP_ENGLISHTOLANG   L"English to LANGUAGE" // NOT_YET_LOCALIZED

// The "Set Active Area" dialog box
#define LOCALIZED_SELECTACTIVEAREA              L"Επιλογή ενεργής περιοχής" // 
#define LOCALIZED_SELECTACTIVEAREA_EFFECT       L"Αυτές οι επιλογές επηρεάζουν την εκτύπωση και αποθήκευση εικόνων" // 
#define LOCALIZED_SELECTACTIVEAREA_YHIGH        L"Πάνω όριο" // 
#define LOCALIZED_SELECTACTIVEAREA_YLOW         L"Κάτω όριο"  // 
#define LOCALIZED_SELECTACTIVEAREA_XHIGH        L"Δεξί όριο" // 
#define LOCALIZED_SELECTACTIVEAREA_XLOW         L"Αριστερό όριο" // 
#define LOCALIZED_SELECTACTIVEAREA_STEPSPERINCH L"Βήματα χελώνας ανά ίντσα:" // 
#define LOCALIZED_SELECTACTIVEAREA_RESET        L"&Επαναφορά"  // 
#define LOCALIZED_SELECTACTIVEAREA_OK           LOCALIZED_GENERAL_OKBUTTON // Localized above
#define LOCALIZED_SELECTACTIVEAREA_CANCEL       LOCALIZED_GENERAL_CANCELBUTTON // 

// The screensaver strings
#define LOCALIZED_SCREENSAVER_NAME              LOCALIZED_GENERAL_PRODUCTNAME // NOT_YET_LOCALIZED
#define LOCALIZED_SCREENSAVER_DESCRIPTION       L"UniLogo Screensaver" // NOT_YET_LOCALIZED
#define LOCALIZED_SCREENSAVER_SETTINGS_TITLE    L"UniLogo Screensaver Settings" // NOT_YET_LOCALIZED
#define LOCALIZED_SCREENSAVER_LOCATE            L"&Locate ..."  // NOT_YET_LOCALIZED
#define LOCALIZED_SCREENSAVER_FILE              L"Logo &File:"  // NOT_YET_LOCALIZED
#define LOCALIZED_SCREENSAVER_OK                LOCALIZED_GENERAL_OKBUTTON // NOT_YET_LOCALIZED
#define LOCALIZED_SCREENSAVER_CANCEL            LOCALIZED_GENERAL_CANCELBUTTON // NOT_YET_LOCALIZED

// The dialog box for selecting a Startup procedure
#define LOCALIZED_SELECTSTARTUP_CAPTION               L"Select a " LOCALIZED_ALTERNATE_STARTUP L" instruction" // NOT_YET_LOCALIZED
#define LOCALIZED_SELECTSTARTUP_EXPLAINTEXT_UNDEFINED L"Your workspace does not have a " LOCALIZED_ALTERNATE_STARTUP L" instruction list defined, so nothing\nwill happen when the screensaver is loaded.\nPlease select a procedure to run when the program is loaded." // NOT_YET_LOCALIZED
#define LOCALIZED_SELECTSTARTUP_EXPLAINTEXT_NOTLIST   L"The " LOCALIZED_ALTERNATE_STARTUP L" variable is not a list, so nothing will happen when the screensaver\nis loaded.\nPlease select a procedure to run when the program is loaded." // NOT_YET_LOCALIZED
#define LOCALIZED_SELECTSTARTUP_EXPLAINTEXT_EMPTY     L"Your workspace has an empty " LOCALIZED_ALTERNATE_STARTUP L" instruction list defined, so nothing will\nhappen when the screensaver is loaded.\nPlease select a procedure to run when the program is loaded." // NOT_YET_LOCALIZED
#define LOCALIZED_SELECTSTARTUP_NOPROCEDURESDEFINED   L"No procedures are defined" // NOT_YET_LOCALIZED

// The warning dialog box when the user saves an empty workspace
#define LOCALIZED_EMPTYWORKSPACE_TITLE                LOCALIZED_GENERAL_PRODUCTNAME // NOT_YET_LOCALIZED
#define LOCALIZED_EMPTYWORKSPACE_MESSAGE              L"There are no procedures, variables, or property lists defined,\nso the workspace will be saved as an empty file.\n\nDo you want to save the workspace anyway?" // NOT_YET_LOCALIZED

//
// Menu options in the popup menu
//
#define LOCALIZED_POPUP_COPY                     L"Αντι&γραφή" // 
#define LOCALIZED_POPUP_CUT                      L"Απ&οκοπή" // 
#define LOCALIZED_POPUP_PASTE                    L"&Επικόλληση" // 
#define LOCALIZED_POPUP_DELETE                   L"&Διαγραφή" // 
#define LOCALIZED_POPUP_UNDO                     L"Α&ναίρεση" // 
#define LOCALIZED_POPUP_REDO                     L"Ακύρωση αναίρεσης" // 
#define LOCALIZED_POPUP_SELECTALL                L"Ε&πιλογή όλων" // 
#define LOCALIZED_POPUP_HELP                     L"Ανα&ζήτηση στη βοήθεια" // 
#define LOCALIZED_POPUP_REMOVELINES              L"Remove Selected Lines" // NOT_YET_LOCALIZED

//
// The menu options on the editor
//
#define LOCALIZED_EDITOR_TITLE                   L"Επεξεργαστής" // 

#define LOCALIZED_EDITOR_FILE                    L"&Αρχείο" // 
#define LOCALIZED_EDITOR_FILE_SAVEANDEXIT        L"Αποθήκευση και έ&ξοδος\tCtrl+D" // 
#define LOCALIZED_EDITOR_FILE_SAVETOWORKSPACE    L"Απο&θήκευση" // 
#define LOCALIZED_EDITOR_FILE_PRINT              L"&Εκτύπωση..."  // 
#define LOCALIZED_EDITOR_FILE_EXIT               L"Έ&ξοδος"  // 

#define LOCALIZED_EDITOR_EDIT                    L"&Επεξεργασία" // 
#define LOCALIZED_EDITOR_EDIT_UNDO               L"Αναίρεσ&η\tCtrl+Z" // 
#define LOCALIZED_EDITOR_EDIT_REDO               L"Ακύρωση αναίρεσης\tCtrl+Y" // 
#define LOCALIZED_EDITOR_EDIT_CUT                L"Απ&οκοπή\tCtrl+X" // 
#define LOCALIZED_EDITOR_EDIT_COPY               L"Αντι&γραφή\tCtrl+C" // 
#define LOCALIZED_EDITOR_EDIT_PASTE              L"&Επικόλληση\tCtrl+V" // 
#define LOCALIZED_EDITOR_EDIT_DELETE             L"&Διαγραφή\tDel" // 
#define LOCALIZED_EDITOR_EDIT_CLEARALL           L"Κα&θαρισμός όλων\tCtrl+Del" // 
#define LOCALIZED_EDITOR_EDIT_SELECTALL          L"Ε&πιλογή όλων\tCtrl+A" // 

#define LOCALIZED_EDITOR_SEARCH                  L"Ανα&ζήτηση" // 
#define LOCALIZED_EDITOR_SEARCH_FIND             L"Εύ&ρεση...\tCtrl+F" // 
#define LOCALIZED_EDITOR_SEARCH_REPLACE          L"Αντι&κατάσταση...\tCtrl+H"  // 
#define LOCALIZED_EDITOR_SEARCH_NEXT             L"Ε&πόμενο\tF3"  // 

#define LOCALIZED_EDITOR_SET                     L"&Ρυθμίση"  // 
#define LOCALIZED_EDITOR_SET_FONT                L"&Γραμματοσειρά..."  // 

#define LOCALIZED_EDITOR_TEST                    L"Δοκιμή"
#define LOCALIZED_EDITOR_TEST_RUN_SELECTION      L"&Run Selection\tCtrl+R" // NOT_YET_LOCALIZED

#define LOCALIZED_EDITOR_HELP                    L"&Βοήθεια"  // 
#define LOCALIZED_EDITOR_HELP_INDEX              L"&Θέματα στη βοήθεια" // 
#define LOCALIZED_EDITOR_HELP_EDITOR             L"Επε&ξεργαστής" // 
#define LOCALIZED_EDITOR_HELP_TOPICSEARCH        L"Ανα&ζήτηση θέματος\tF1" // 


//
// The strings in the "You have unsaved changes" dialog
//
#define LOCALIZED_UNSAVEDCHANGES                LOCALIZED_YOUHAVEUNSAVEDCHANGES //
#define LOCALIZED_UNSAVEDCHANGES_SAVEANDEXIT    L"Απο&θήκευση και έξοδος" // 
#define LOCALIZED_UNSAVEDCHANGES_DONTSAVE       L"Χωρίς αποθήκευση" // 
#define LOCALIZED_UNSAVEDCHANGES_CANCEL         LOCALIZED_GENERAL_CANCELBUTTON // 
#define LOCALIZED_UNSAVEDCHANGES_MESSAGE1       L"Υπάρχουν αλλαγές που δεν έχουν αποθηκευθεί.  Αν δεν τις αποθηκεύσετε, αυτές οι αλλαγές θα χαθούν.  " // 
#define LOCALIZED_UNSAVEDCHANGES_MESSAGE2       L"Θέλετε να αποθηκεύσετε τις αλλαγές σας πριν την έξοδο;"  // 


//
// Strings on the Commander window
//
#define LOCALIZED_COMMANDER                     L"Παράθυρο ελέγχου" // 
#define LOCALIZED_COMMANDER_HALT                L"Σταμάτημα" // 
#define LOCALIZED_COMMANDER_TRACE               L"Ανίχνευση" // 
#define LOCALIZED_COMMANDER_NOTRACE             L"Χωρίς" // 
#define LOCALIZED_COMMANDER_PAUSE               L"Παύση" // 
#define LOCALIZED_COMMANDER_STATUS              L"Κατάσταση" // 
#define LOCALIZED_COMMANDER_NOSTATUS            L"Χωρίς" // 
#define LOCALIZED_COMMANDER_STEP                L"Βήμα" // 
#define LOCALIZED_COMMANDER_UNSTEP              L"Χωρίς" // 
#define LOCALIZED_COMMANDER_RESET               L"Επαναφορά" // 
#define LOCALIZED_COMMANDER_EXECUTE             L"Εκτέλεση" // 
#define LOCALIZED_COMMANDER_EDALL               L"Επεξεργασία" // If that's too long, please replace it again with EDALL

//
// Strings on the Status window
//
#define LOCALIZED_STATUS                        L"Κατάσταση" // 
#define LOCALIZED_STATUS_PEN                    L"Πένα" // 
#define LOCALIZED_STATUS_CONTACT                L"Επαφή:" // 
#define LOCALIZED_STATUS_WIDTH                  L"Πλάτος:" // 
#define LOCALIZED_STATUS_STYLE                  L"Στυλ:" // 
#define LOCALIZED_STATUS_ORIENTATION            L"Προσανατολισμός" // 
#define LOCALIZED_STATUS_PITCH                  L"Κλίση:" // 
#define LOCALIZED_STATUS_HEADING                L"Κατεύθυνση:" // 
#define LOCALIZED_STATUS_ROLL                   L"Στροφή:" // 
#define LOCALIZED_STATUS_TURTLE                 L"Χελώνα" // 
#define LOCALIZED_STATUS_POSITION               L"Θέση (XYZ):" //
#define LOCALIZED_STATUS_WHICH                  L"Χελώνα:" // 
#define LOCALIZED_STATUS_VISIBILITY             L"Ορατότητα:" // 
#define LOCALIZED_STATUS_COLOR                  L"Χρώμα" // 
#define LOCALIZED_STATUS_PENCOLOR               L"Πένα (ΚΠΓ/RGB):" //
#define LOCALIZED_STATUS_FLOODCOLOR             L"Γέμισμα (ΚΠΓ/RGB):" // 
#define LOCALIZED_STATUS_SCREENCOLOR            L"Οθόνη (ΚΠΓ/RGB):" // 
#define LOCALIZED_STATUS_KERNEL                 L"Πυρήνας" // 
#define LOCALIZED_STATUS_CALLS                  L"Κλήσεις:" // 
#define LOCALIZED_STATUS_PEAKMEMORY             L"Μνήμη:" // 

#define LOCALIZED_STATUS_PENREVERSE     L"Αντίστροφο" // 
#define LOCALIZED_STATUS_PENNORMAL      L"Κανονικό" // 
#define LOCALIZED_STATUS_PENERASE       L"Σβήσιμο" // 
#define LOCALIZED_STATUS_PENUP          L"Πάνω" // 
#define LOCALIZED_STATUS_PENDOWN        L"Κάτω" // 
#define LOCALIZED_STATUS_PENSHOWN       L"Ορατή" //  
#define LOCALIZED_STATUS_PENHIDDEN      L"Αόρατη" // 
#define LOCALIZED_STATUS_POLYGONS       L"Πολύγωνα" // 
#define LOCALIZED_STATUS_VECTORS        L"Διανύσματα" // 
#define LOCALIZED_STATUS_NODES          L"Κόμβοι" // 
#define LOCALIZED_STATUS_NOT_APPLICABLE L"N/A" // NOT_YET_LOCALIZED

//
// Strings on the Erase|Edit Procedure dialog box
//
#define LOCALIZED_SELECTPROCEDURE_OK            LOCALIZED_GENERAL_OKBUTTON
#define LOCALIZED_SELECTPROCEDURE_CANCEL        LOCALIZED_GENERAL_CANCELBUTTON
#define LOCALIZED_SELECTPROCEDURE_ALL           L"&Όλες"
#define LOCALIZED_ERASEPROCEDURE                L"Σβήσιμο εντολής"
#define LOCALIZED_EDITPROCEDURE                 L"Επεξεργασία εντολής"


//
// Strings on the Color Picker Dialog box
//
#define LOCALIZED_SETCOLOR                     L"Ρύθμιση χρώματος" // 
#define LOCALIZED_SETCOLOR_PENCOLOR            L"Χρώμα πένας" // 
#define LOCALIZED_SETCOLOR_FLOODCOLOR          L"Χρώμα γεμίσματος" // 
#define LOCALIZED_SETCOLOR_SCREENCOLOR         L"Χρώμα οθόνης" // 
#define LOCALIZED_SETCOLOR_RED                 L"Κόκκινο" // 
#define LOCALIZED_SETCOLOR_GREEN               L"Πράσινο" // 
#define LOCALIZED_SETCOLOR_BLUE                L"Γαλάζιο" // 
#define LOCALIZED_SETCOLOR_OK                  LOCALIZED_GENERAL_OKBUTTON // 
#define LOCALIZED_SETCOLOR_CANCEL              LOCALIZED_GENERAL_CANCELBUTTON // 
#define LOCALIZED_SETCOLOR_APPLY               LOCALIZED_GENERAL_APPLYBUTTON // NOT_YET_LOCALIZED

//
// Strings on the Pen Size Picker Dialog box
//
#define LOCALIZED_SETPENSIZE                   L"Μέγεθος πένας" // 
#define LOCALIZED_SETPENSIZE_SIZE              L"Μέγεθος" // 
#define LOCALIZED_SETPENSIZE_OK                LOCALIZED_GENERAL_OKBUTTON // NOT_YET_LOCALIZED
#define LOCALIZED_SETPENSIZE_CANCEL            LOCALIZED_GENERAL_CANCELBUTTON // NOT_YET_LOCALIZED
#define LOCALIZED_SETPENSIZE_APPLY             LOCALIZED_GENERAL_APPLYBUTTON // NOT_YET_LOCALIZED


//
// Strings on the "About UniLogo" Dialog box
//
#define LOCALIZED_ABOUTUNI                     L"Πληροφορίες για την " LOCALIZED_GENERAL_PRODUCTNAME 
#define LOCALIZED_ABOUTUNI_VERSION             L"έκδοση"
#define LOCALIZED_ABOUTUNI_GUI                 L""
#define LOCALIZED_ABOUTUNI_CORE                L""
#define LOCALIZED_ABOUTUNI_INSTALLER           L""
#define LOCALIZED_ABOUTUNI_SPECIALTHANKS       L""
#define LOCALIZED_ABOUTUNI_GPL                  LOCALIZED_GENERAL_PRODUCTNAME L""
#define LOCALIZED_ABOUTUNI_NEWSGROUP           L""
#define LOCALIZED_ABOUTUNI_MULTIMEDIALOGIC     L""
#define LOCALIZED_ABOUTUNILOGO_OK                  LOCALIZED_GENERAL_OKBUTTON


//
// Strings on the "About UNI" Dialog box
//
#define LOCALIZED_ABOUTMS                      L"" //
#define LOCALIZED_ABOUTMS_UNI                  L"" //
#define LOCALIZED_ABOUTMS_CONSIDERDONATING     L"" // NOT_YET_LOCALIZED
#define LOCALIZED_ABOUTMS_OK                   LOCALIZED_GENERAL_OKBUTTON // 


//
// Strings on the SELECTBOX Dialog box
//
#define LOCALIZED_SELECTBOX_OK                 LOCALIZED_GENERAL_OKBUTTON // NOT_YET_LOCALIZED
#define LOCALIZED_SELECTBOX_CANCEL             LOCALIZED_GENERAL_CANCELBUTTON // NOT_YET_LOCALIZED

//
// Strings on the QUESTIONBOX dialog box
//
#define LOCALIZED_QUESTIONBOX_OK               LOCALIZED_GENERAL_OKBUTTON // NOT_YET_LOCALIZED
#define LOCALIZED_QUESTIONBOX_CANCEL           LOCALIZED_GENERAL_CANCELBUTTON // NOT_YET_LOCALIZED


// 
// Strings in various other dialog boxes
// 

#define LOCALIZED_CHANGESINEDITORMAYBELOST  L"Αλλαγές σε αυτή την περίοδο λειτουργίας ίσως χαθούν.\n\nΘέλετε πραγματικά να κλείσετε την " LOCALIZED_GENERAL_PRODUCTNAME L";" //
#define LOCALIZED_EDITSESSIONISRUNNING      L"Ο επεξεργαστής κώδικα είναι ήδη ανοιχτός" // 

#define LOCALIZED_COULDNOTWRITEBMP            L"Αδύνατη η εγγραφή στο .bmp" // 
#define LOCALIZED_COULDNOTOPENBMP             L"Αδύνατη η ανάγνωση από το .bmp" // 
#define LOCALIZED_COULDNOTCREATEBMP           L"Αδύνατο να δημιουργηθεί η εικόνα Windows 3.0 bitmap" // 
#define LOCALIZED_NOTVALIDBMP                 L"Η εικόν δεν είναι Windows 3.0 bitmap" // 

#define LOCALIZED_YOUHAVEUNSAVEDCHANGES         L"Δεν αποθηκεύσατε στο δίσκο" // 
#define LOCALIZED_FILENEWWILLERASEWORKSPACE     L"Η εκτέλεση ενός νέου αρχείου θα σβήσει τις υπάρχουσες εντολές και μεταβλητές.\n\nΣυνέχεια;" // 
#define LOCALIZED_FILELOADMAYOVERWRITEWORKSPACE L"Το αρχείο που φορτώνεται θα προστεθεί στις υπάρχουσες εντολές και μεταβλητές\nκαι ίσως σβήσει όποιες αλλαγές δεν έχετε αποθηκεύσει.\n\nΣυνέχεια;" // 
#define LOCALIZED_FILEOPENWILLERASEWORKSPACE    L"Αυτό θα σβήσει όλες τις αλλαγές που δεν έχετε αποθηκεύσει.\n\nΣυνέχεια;" // 

#define LOCALIZED_EDITORISOPEN                  L"Ξέρετε ότι ήδη έχετε μια περίοδο επεξεργασίας ανοιχτή;\n\nΟποιαδήποτε αλλαγή σε αυτή την περίοδο δε θα αποθηκευθεί." // 

#define LOCALIZED_ERROR_CANTREADFILE            L"Αδυναμία ανάγνωσης του αρχείου \"%s\" από το δίσκο" // 
#define LOCALIZED_ERROR_CANTWRITEFILE           L"Αδυναμία εγγραφής του αρχείου \"%s\" στο δίσκο" // 

#define LOCALIZED_SAVETOWORKSPACE                L"Αποθήκευση" // 
#define LOCALIZED_CONTENTSCHANGED                L"Τα περιεχόμενα άλλαξαν" // 
#define LOCALIZED_SAVECHANGEDCONTENTSTOWORKSPACE L"Τα περιεχόμενα έχουν αλλάξει.\nΘέλετε να τα αποθηκεύσετε;" // 



#define LOCALIZED_CURSORISATLASTGOODDEFINITION  L"Ο δείκτης θα τοποθετηθεί μετά τον τελευταίο επιτυχημένο ορισμό.\nΕλέγξτε το παράθυρο ελέγχου για πιθανό μήνυμα λάθους." // 
#define LOCALIZED_RETURNTOEDIT                  L"Επιστροφή στην επεξεργασία;" // 

#define LOCALIZED_EDITFAILEDTOLOAD              L"Η επεξεργασία σας ΑΠΕΤΥΧΕ να φορτωθεί" // Isn't the use of capitals like shouting to the programmer for making a mistake? ;P

#define LOCALIZED_ERRORINFILETITLE              L"Error in File" // NOT_YET_LOCALIZED
#define LOCALIZED_ERRORINFILEMESSAGE            L"There was a problem loading the contents of the file \"%s\".\n\nCheck the Commander for possible error message.\n\nDo you want to open the file in the editor to see the error?" // NOT_YET_LOCALIZED

#define LOCALIZED_CANNOTALLOCATESCREEN          L"Unable to allocate memory for the screen window.  You may have requested a width and height that exceeds the amount of available video RAM.\n\n" LOCALIZED_GENERAL_PRODUCTNAME L" can't continue." // NOT_YET_LOCALIZED


// 
//  Strings used in the File-Open filters
//
#define LOCALIZED_FILE_LOAD_DIALOG_TITLE    L"Select the Logo program to load (merge into workspace)" // NOT_YET_LOCALIZED
#define LOCALIZED_FILE_OPEN_DIALOG_TITLE    L"Select the Logo program to open (replace the workspace with)" // NOT_YET_LOCALIZED
#define LOCALIZED_FILE_SAVE_DIALOG_TITLE    L"Select the file to which the workspace will be saved" // NOT_YET_LOCALIZED
#define LOCALIZED_BITMAP_OPEN_DIALOG_TITLE  L"Select the image to load" // NOT_YET_LOCALIZED
#define LOCALIZED_BITMAP_SAVE_DIALOG_TITLE  L"Select the file to which the active area will be saved" // NOT_YET_LOCALIZED

#define LOCALIZED_LOGO_FILE_EXTENSION L"lgo"
#define LOCALIZED_FILEFILTER_ALLFILES L"Όλα τα αρχεία (*.*)|*.*"
#define LOCALIZED_FILEFILTER_LOGO     L"Αρχεία Logo (*.lgo)|*.lgo|" LOCALIZED_FILEFILTER_ALLFILES
#define LOCALIZED_FILEFILTER_IMAGE    L"Αρχεία εικόνας Bitmap (*.bmp)|*.bmp|Αρχεία εικόνας GIF (*.gif)|*.gif|" LOCALIZED_FILEFILTER_ALLFILES



//
// strings seen when tracing is enabled
//
#define LOCALIZED_TRACING_STOPS             L" σταματάει\n"
#define LOCALIZED_TRACING_OUTPUTS           L" επιστρέφει %s\n"
#define LOCALIZED_TRACING_MAKE              L"Μεταβλητή %s %s"
#define LOCALIZED_TRACING_PPROP             L"Ιδιότητα %s %s %s"
#define LOCALIZED_TRACING_LOCATION          L" στο %s\n%s"

//
// strings seen when single-stepping execution
//
#define LOCALIZED_STEPPING                  L"Βήμα-βήμα"

//
// Notification when defining a procedure with TO in the commander
//
#define LOCALIZED_PROCEDUREDEFINED  L"%s ορίστηκε\n" // 


//
// Words that represent the pen's mode
//
#define LOCALIZED_PENMODE_ERASE    L"σβήσιμο" // 
#define LOCALIZED_PENMODE_REVERSE  L"αντίστροφο" // 
#define LOCALIZED_PENMODE_PAINT    L"σχεδιασμός" // 

//
// Error message thrown by Logo
//
#define LOCALIZED_ERROR_FATALINTERNAL          L"Logo: Εσωτερικό σφάλμα" // 
#define LOCALIZED_ERROR_OUTOFMEMORYUNREC       L"Logo: Ανεπάρκεια μνήμης" // 
#define LOCALIZED_ERROR_OUTOFMEMORY            L"Ανεπάρκεια μνήμης" // 
#define LOCALIZED_ERROR_STACKOVERFLOW          L"υπερχείλιση στοίβας" // 
#define LOCALIZED_ERROR_TURTLEOUTOFBOUNDS      L"χελώνα εκτός ορίων" // 
#define LOCALIZED_ERROR_BADGRAPHINIT           L"αδυναμία εκκίνησης γραφικών" // 
#define LOCALIZED_ERROR_BADDATA                L"Στο %p δεν αρέσει το %s ως παράμετρος" // 
#define LOCALIZED_ERROR_DIDNTOUTPUT            L"Το %p δεν επέστρεψε τιμή για το %p" // 
#define LOCALIZED_ERROR_NOTENOUGHINPUTS        L"ανεπάρκεια παραμέτρων για το %p" // 
#define LOCALIZED_ERROR_TOOMUCH                L"υπερβολικά μεγάλη παράσταση ανάμεσα στα ()" // 
#define LOCALIZED_ERROR_DONTSAYWHATTODOWITH    L"Δεν είπες τί να κάνω με το %s" // 
#define LOCALIZED_ERROR_PARENMISMATCH          L"Υπερβολικά πολλά ('s" // 
#define LOCALIZED_ERROR_NOVALUE                L"Το %s δεν έχει τιμή" // 
#define LOCALIZED_ERROR_UNEXPECTEDPAREN        L"μη προβλεπόμενο ')'" // 
#define LOCALIZED_ERROR_UNEXPECTEDBRACKET      L"μη προβλεπόμενο ']'" // 
#define LOCALIZED_ERROR_UNEXPECTEDBRACE        L"μη προβλεπόμενο '}'" // 
#define LOCALIZED_ERROR_DONTKNOWHOWTO          L"Δεν ξέρω το %p" // 
#define LOCALIZED_ERROR_NOCATCHTAG             L"Δε μπορώ να βρω ετικέτα συνέχειας για το %p" // 
#define LOCALIZED_ERROR_ALREADYDEFINED         L"Το %p έχει ήδη οριστεί" // 
#define LOCALIZED_ERROR_STOPPING               L"Σταμάτημα..." // 
#define LOCALIZED_ERROR_ALREADYDRIBBLING       L"Γίνεται ήδη καταγραφή" // 
#define LOCALIZED_ERROR_FILESYSTEM                   L"Σφάλμα συστήματος αρχείων: %p" // 
#define LOCALIZED_ERROR_FILESYSTEM_CANTOPEN          L"Αδυναμία ανοίγματος" // 
#define LOCALIZED_ERROR_FILESYSTEM_CANTOPEN2         L"Αδυναμία ανοίγματος του %t" // 
#define LOCALIZED_ERROR_FILESYSTEM_ALREADYOPEN       L"Το αρχείο είναι ήδη ανοιχτό" // 
#define LOCALIZED_ERROR_FILESYSTEM_NOTOPEN           L"Το αρχείο δεν είναι ανοιχτό" // 
#define LOCALIZED_ERROR_FILESYSTEM_CANTCREATEEDITOR  L"Αδυναμία δημιουργία του αρχείου επεξεργαστή κώδικα"// 
#define LOCALIZED_ERROR_FILESYSTEM_CANTSTARTEDITOR   L"Αδυναμία ανοίγματος του επεξεργαστή κώδικα"  // 
#define LOCALIZED_ERROR_FILESYSTEM_CANTREADEDITOR    L"Αδυναμία ανάγνωσης του αρχείου επεξεργαστή κώδικα"  // 
#define LOCALIZED_ERROR_IFWARNING              L"Θεωρώ ότι εννοούσες IFELSE, όχι IF" // This should change a little when primitives are localized
#define LOCALIZED_ERROR_SHADOWWARNING          L"Το %p υποσκιάζεται από τοπικό στην κλήση της εντολής" // I could make it a little more accurate if I knew whether it refers to a variable or something else
#define LOCALIZED_ERROR_USER                   L"Throw \"Error" // 
#define LOCALIZED_ERROR_ISPRIMITIVE            L"Το %p είναι στοιχειώδης εντολή" // 
#define LOCALIZED_ERROR_TONOTINSIDE            L"Αδύνατη η χρήση του TO μέσα σε εντολή" // But why? :D
#define LOCALIZED_ERROR_ATTOPLEVEL             L"Το %p χρησιμοποιείται μόνο μέσα σε εντολές" // 
#define LOCALIZED_ERROR_ATTOPLEVEL2            L"Μπορείτε να χρησιμοποιήσετε OUTPUT ή STOP μόνο μέσα σε εντολή" // 
#define LOCALIZED_ERROR_NOTEST                 L"%p χωρίς TEST" // 
#define LOCALIZED_ERROR_BADMACROOUTPUT         L"Η μακροεντολή επέστρεψε %s αντί για λίστα" // 
#define LOCALIZED_ERROR_DEEPEND                L"Το END βρίσκεται μέσα σε οδηγία πολλαπλών γραμμών" // 
#define LOCALIZED_ERROR_DEEPENDIN              L"Το END βρίσκεται μέσα σε οδηγία πολλαπλών γραμμών στο %p" // 
#define LOCALIZED_ERROR_UNKNOWN                L"ʼγνωστη κατάσταση σφάλματος - εσωτερικό σφάλμα." // 
#define LOCALIZED_PAUSING                      L"Παύση..." // 


// UniLogo-specific error messages.
#define LOCALIZED_ERROR_INVALIDSTATEFORINSTRUCTION L"Invalid state for instruction: %p" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_MODE_ON_SPRITE             L"cannot set the mode of a turtle with a rotating bitmap" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_BITMAPSPECIALTUTRLE        L"cannot make a special turtle use a rotating bitmap" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_BITMAPCLIPBOARD            L"cannot use the clipboard as a rotating bitmap" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_SPECIALFORM                L"%p doesn't like %p as input because it has a special form" // NOT_YET_LOCALIZED

//
// Error messages displayed in Message Boxes.
//
#define LOCALIZED_ERROR                      L"Σφάλμα" // 
#define LOCALIZED_ERROR_BADINPUT             L"Κακή παράμετρος" // 
#define LOCALIZED_ERROR_BADINPUTNOTPAIRED    L"Η παράμετρος δεν ταιριάζει" // 

#define LOCALIZED_ERROR_CANTOPENPORT         L"Αδύνατο το άνοιγμα της θύρας" // 
#define LOCALIZED_ERROR_CANTCLOSEPORT        L"Αδύνατο το κλείσιμο της θύρας" // 
#define LOCALIZED_ERROR_CANTFLUSHPORT        L"Αδύνατο το άδειασμα της θύρας" // 
#define LOCALIZED_ERROR_CANTDCBONPORT        L"Αδύνατη η δημιουργία dcb στη θύρα" // 
#define LOCALIZED_ERROR_CANTSETPORT          L"Αδύνατη η ρύθμιση της θύρας" // 
#define LOCALIZED_ERROR_PORTALREADYOPEN      L"Η θύρα είναι ήδη ανοιχτή" // 
#define LOCALIZED_ERROR_PORTNOTOPEN          L"Η θύρα δεν είναι ανοιχτή" // 

#define LOCALIZED_ERROR_WINDOWALREADYEXISTS   L"Υπάρχει ήδη: %s"
#define LOCALIZED_ERROR_WINDOWDOESNOTEXIST    L"Δεν υπάρχει: %s"

#define LOCALIZED_ERROR_DLLNOTLOADED          L"Το DLL δεν έχει φορτωθεί" // 
#define LOCALIZED_ERROR_DLLLOADFAILED         L"Η φόρτωση του DLL απέτυχε" // 
#define LOCALIZED_ERROR_DLLINVALIDDATATYPE    L"ʼκυρος τύπος δεδομένων" // 
#define LOCALIZED_ERROR_DLLINVALIDOUTPUTTYPE  L"ʼκυρος τύπος επιστροφής" // 
#define LOCALIZED_ERROR_DLLFUNCTIONNOTFOUND   L"Η συνάρτηση δε βρέθηκε" // 
#define LOCALIZED_ERROR_DLLTYPEDATANOTPAIRED  L"Δεν ταιριάζουιν όλες οι παράμετροι Τύπου/Δεδομένων" // 

#define LOCALIZED_ERROR_NETWORK               L"Σφάλμα δικτύου" // 
#define LOCALIZED_ERROR_NETWORKRECEIVE        L"Σφάλμα αποδοχής από το δίκτυο" // 
#define LOCALIZED_ERROR_NETWORKSEND           L"Σφάλμα αποστολής στο δίκτυο" // 
#define LOCALIZED_ERROR_NETWORKSHUTDOWN       L"Μη προβλεπόμενο σφάλμα, ίσως το δίκτυο να έκλεισε" // 
#define LOCALIZED_ERROR_NETWORKNOTSTARTED     L"Δεν άρχισε" // 
#define LOCALIZED_ERROR_NETWORKALREADYSTARTED L"Έχει ήδη αρχίσει" // 
#define LOCALIZED_ERROR_NETWORKALREADYON      L"Ήδη ανοιχτό" // 
#define LOCALIZED_ERROR_NETWORKALREADYOFF     L"Ήδη κλειστό" // 

// The rest of the network errors shouldn't really be seen -- may be okay not to localize
#define LOCALIZED_ERROR_NETWORKNAMETOOLONG         L"Πολύ μεγάλο όνομα" // 
#define LOCALIZED_ERROR_NETWORKNOTINITIALIZED      L"Δεν άρχισε" // 
#define LOCALIZED_ERROR_NETWORKSYSTEMNOTREADY      L"Το σύστημα δεν είναι έτοιμο" // 
#define LOCALIZED_ERROR_NETWORKVERSIONNOTSUPPORTED L"Η έκδοση δεν υποστηρίζεται" // 
#define LOCALIZED_ERROR_NETWORKSENDAFTERSHUTDOWN   L"Αδύνατη η αποστολή μετά το κλείσιμο της υποδοχής" // 
#define LOCALIZED_ERROR_NETWORKINTERRUPTED         L"Η κλήση συστήματος διακόπηκε" // 
#define LOCALIZED_ERROR_NETWORKHOSTNOTFOUNDAUTH    L"Επίσημη απάντηση: δε βρέθηκε ο κεντρικός υπολογιστής" // 
#define LOCALIZED_ERROR_NETWORKHOSTNOTFOUNDNONAUTH L"Ανεπίσημη: δε βρέθηκε ο κεντρικός υπολογιστής. Δείτε το NETSTARTUP" // 
#define LOCALIZED_ERROR_NETWORKNOTRECOVERABLE      L"Μη ανανήψιμο σφάλμα" // 
#define LOCALIZED_ERROR_NETWORKNODATA              L"Δεν υπάρχει εγγραφή δεδομένων" // 
#define LOCALIZED_ERROR_NETWORKBADFILENUMBER       L"Λάθος αριθμός αρχείου" // 
#define LOCALIZED_ERROR_NETWORKWOULDBLOCK          L"Η διαδικασία θα εμπόδιζε" // 
#define LOCALIZED_ERROR_NETWORKNOWINPROGRESS       L"Η διαδικασία εκτελείται τώρα" // 
#define LOCALIZED_ERROR_NETWORKALREADYINPROGRESS   L"Η διαδικασία εκτελείται ήδη" // 
#define LOCALIZED_ERROR_NETWORKBADADDRESS          L"Κακή διεύθυνση" // 
#define LOCALIZED_ERROR_NETWORKNEEDDESTADDRESS     L"Χρειάζεται διεύθυνση προορισμού" // 
#define LOCALIZED_ERROR_NETWORKMESSAGETOOLONG      L"Το μήνυμα είναι πολύ μεγάλο" // 
#define LOCALIZED_ERROR_NETWORKPFNOTSUPPORTED      L"Η οικογένεια πρωτοκόλλου δεν υποστηρίζεται" // 
#define LOCALIZED_ERROR_NETWORKDIRNOTEMPTY         L"Ο κατάλογος δεν είναι άδειος" // 
#define LOCALIZED_ERROR_NETWORKAPPLIMITREACHED     L"Όριο εφαρμογών" // 
#define LOCALIZED_ERROR_NETWORKDISKQUOTA           L"Η αναλογία δίσκου ξεπεράστηκε" // 
#define LOCALIZED_ERROR_NETWORKINVALIDARGUMENTS    LOCALIZED_ERROR_BADINPUT // 
#define LOCALIZED_ERROR_NETWORKTOOMANYFILES        L"Πολλά ανοιχτά αρχεία" // 
#define LOCALIZED_ERROR_NETWORKACCESSDENIED        L"Η πρόσβαση απαγορεύτηκε" // 
#define LOCALIZED_ERROR_NETWORKNOTASOCKET          L"Διαδικασία υποδοχής σε μη υποδοχή" // 
#define LOCALIZED_ERROR_NETWORKADDRNOTAVAILABLE    L"Αδύνατη η εκχώρηση των ζητούμενων διευθύνσεων" // 
#define LOCALIZED_ERROR_NETWORKADDRINUSE           L"Η διεύθυνση χρησιμοποιείται ήδη" // 
#define LOCALIZED_ERROR_NETWORKAFNOTSUPPORTED      L"Η οικογένεια διευθύνσεων δεν υποστηρίζεται από την οικογένεια πρωτοκόλλου" // 
#define LOCALIZED_ERROR_NETWORKTIMEDOUT            L"Ο χρόνος σύνδεσης έληξε" // 
#define LOCALIZED_ERROR_NETWORKTYPENOTSUPPORTED    L"Ο τύπος υποδοχής δεν υποστηρίζεται" // 
#define LOCALIZED_ERROR_NETWORKPROTONOTSUPPORTED   L"Ο τύπος πρωτοκόλλου δεν υποστηρίζεται" // 
#define LOCALIZED_ERROR_NETWORKNOBUFFER            L"Δεν υπάρχει χώρος στην προσωρινή μνήμη (buffer)" // 
#define LOCALIZED_ERROR_NETWORKALREADYCONNECTED    L"Η υποδοχή είναι ήδη συνδεδεμένη" // 
#define LOCALIZED_ERROR_NETWORKNOTCONNECTED        L"Η υποδοχή δεν είναι συνδεδεμένη" // 
#define LOCALIZED_ERROR_NETWORKBADPROTOOPT         L"Κακή επιλογή στο πρωτόκολλο" // 
#define LOCALIZED_ERROR_NETWORKCONNECTIONRESET     L"Η σύνδεση επανήλθε" // 
#define LOCALIZED_ERROR_NETWORKCONNECTIONABORT     L"Το λογισμικό προκάλεσε κλείσιμο της σύνδεσης" // 
#define LOCALIZED_ERROR_NETWORKISDOWN              L"Το δίκτυο δε λειτουργεί" // 
#define LOCALIZED_ERROR_NETWORKRESET               L"Το δίκτυο επανήλθε" // 
#define LOCALIZED_ERROR_NETWORKCONNECTIONREFUSED   L"Η σύνδεση δεν έγινε δεκτή" // 
#define LOCALIZED_ERROR_NETWORKHOSTISDOWN          L"Ο κεντρικός υπολογιστής δε λειτουργεί" // 
#define LOCALIZED_ERROR_NETWORKHOSTISUNREACHABLE   L"Αδύνατη η επαφή με τον κεντρικό υπολογιστή" // 
#define LOCALIZED_ERROR_NETWORKBADPROTOTYPE        L"Το πρωτόκολλο είναι λάθος τύπου για την υποδοχή" // 
#define LOCALIZED_ERROR_NETWORKBADOPNOTSUPPORTED   L"Η διαδικασία δεν υποστηρίζεται στην υποδοχή" // 
#define LOCALIZED_ERROR_NETWORKUNREACHABLE         L"Δε βρέθηκε διαδρομή στον απομακρυσμένο κεντρικό υπολογιστή" // 
#define LOCALIZED_ERROR_NETWORKTOOMANYREFS         L"Υπερβολικά πολλές αναφορές" // 

#define LOCALIZED_ERROR_POLYSTART               L"Σφάλμα PolyStart" // 
#define LOCALIZED_ERROR_POLYSTARTALREADYSTARTED L"Έχετε ήδη ξεκινήσει ένα πολύγωνο" // 

#define LOCALIZED_ERROR_POLYEND                 L"Σφάλμα PolyEnd" // 
#define LOCALIZED_ERROR_POLYENDNOTSTARTED       L"Δεν έχετε ξεκινήσει πολύγωνο" // 
#define LOCALIZED_ERROR_POLYENDNEED3VECTORS     L"Χρειάζεστε τουλάχιστον 3 διανύσματα για να ορίσετε ένα πολύγωνο" // 

#define LOCALIZED_ERROR_SOUND                 L"Σφάλμα ήχου" // 

#define LOCALIZED_ERROR_MIDI                  L"Σφάλμα MIDI" // 
#define LOCALIZED_ERROR_MIDIINVALIDDEVICE     L"ʼκυρη συσκευή MIDI" // 
#define LOCALIZED_ERROR_MIDIALREADYOPEN       L"Είναι ήδη ανοιχτή" // 
#define LOCALIZED_ERROR_MIDINOTOPEN           L"Δεν είναι ανοιχτή" // 

#define LOCALIZED_ERROR_CLIPBOARDISEMPTY      L"Δεν υπάρχει κείμενο στο πρόχειρο" // 

#define LOCALIZED_ERROR_MCI                   L"Σφάλμα MCI" // 

#define LOCALIZED_ERROR_TIMERNOTFOUND         L"Ο χρονοδιακόπτης δε βρέθηκε" // 

#define LOCALIZED_ERROR_HHCTRLNOTLOADED       L"Η online βοήθεια δεν είναι διαθέσιμη γιατί το hhctrl.ocx δε φορτώθηκε."  // 

#define LOCALIZED_ERROR_BADCOMMANDLINE        L"Λάθος εντολή γραμμής εντολών"  // 

#define LOCALIZED_ERROR_TMPNOTDEFINED         L"Η μεταβλητή περιβάλλοντος TMP δεν έχει οριστεί ή είναι άκυρη.\nΗ " LOCALIZED_GENERAL_PRODUCTNAME L" θα προσπαθήσει να χρησιμοποιήσει το C:\\ για την αποθήκευση προσωρινών αρχείων" //

#define LOCALIZED_ERROR_GIFSAVEFAILED         L"Αδύνατη η δημιουργία του GIF, ελέγξτε τη μνήμη και το χώρο στο δίσκο" // 
#define LOCALIZED_ERROR_GIFREADFAILED         L"Αδύνατη η ανάγνωση του GIF, ελέγξτε τη μνήμη και το χώρο στο δίσκο" // 

#define LOCALIZED_ERROR_BITMAPINDEXOUTOFRANGE  L"Ο δείκτης BitMap είναι εκτός ορίου" // 
#define LOCALIZED_ERROR_BITMAPCUTFAILED        L"Η αποκοπή (cut) απέτυχε, ίσως δεν υπάρχει αρκετή μνήμη" // 

#define LOCALIZED_ERROR_BITMAPNOTHINGTOPASTE    L"Δεν υπάρχει τίποτα για επικόλληση"  // 
#define LOCALIZED_ERROR_BITMAPINDEXISNOTBITMAP  L"Το BitMap στον κατάλογο πρέπει να έχει εκκινηθεί με μια εικόνα"  // 

#define LOCALIZED_ERROR_TURTLEHASNOPICTURE      L"Η χελώνα %d δεν έχει εικόνα, θα σταματήσει" // 

#define LOCALIZED_ERROR_FONTNOTFOUND            L"Η γραμματοσειρά %s δε βρέθηκε.  Επιλέξτε μία από τις παρακάτω:\n" // 

#define LOCALIZED_ERROR_PRINTERCANTSCALE        L"Ο οδηγός του εκτυπωτή δεν υποστηρίζει αυτή τη δυνατότητα."  // 
#define LOCALIZED_ERROR_CANTDRAWIMAGE           L"Η εικόνα δε μπορεί να σχεδιαστεί" // 
#define LOCALIZED_ERROR_CANTEXTRACTIMAGE        L"Η εικόνα δε μπορεί να εξαχθεί" // 
#define LOCALIZED_ERROR_SUBCODE                 L"Υποκώδικας" // 

//
// Strings in the dialog box for reading from "stdin"
//
#define LOCALIZED_INPUT         L"Παράμετρος:" // 
#define LOCALIZED_PROMPT_TO     L"Σύστημα To (Ακύρωση για End)" // 
#define LOCALIZED_PROMPT_LIST   L"Σύστημα List (Ακύρωση για Σταμάτημα)" // 
#define LOCALIZED_PROMPT_PAUSE  L"Σύστημα Pause (Ακύρωση για Συνέχεια)" // 
#define LOCALIZED_PROMPT_INPUT  L"Σύστημα Input (Ακύρωση για Σταμάτημα)" // 

//
// Messages shown by the FILE API.
//
#define LOCALIZED_FILE_CHDIRSUCCEEDED      L"Είσοδος στον κατάλογο \"%s\"" // 
#define LOCALIZED_FILE_CHDIRFAILED         L"Αδύνατη η είσοδος τον κατάλογο \"%s\"" // 
#define LOCALIZED_FILE_POPPEDTO            L"Έξοδος στον κατάλογο \"%s\"" // 
#define LOCALIZED_FILE_MKDIRSUCCEEDED      L"Είσοδος στο νέο κατάλογο \"%s\""  // 
#define LOCALIZED_FILE_MKDIRFAILED         L"Αδυναμία δημιουργίας του καταλόγου \"%s\""  // 
#define LOCALIZED_FILE_RMDIRSUCCEEDED      L"Αφαιρέθηκε κατάλογος \"%s\""  // 
#define LOCALIZED_FILE_RMDIRFAILED         L"Αδυναμία αφαίρεσης του καταλόγου \"%s\""  // 
#define LOCALIZED_FILE_RMDIRFAILEDNOEXIST  L"Ο κατάλογος δεν υπάρχει" // 
#define LOCALIZED_FILE_RMDIRFAILEDNOTEMPTY L"Σιγουρευτείτε ότι ο κατάλογος είναι άδειος πριν προσπαθήσετε να τον αφαιρέσετε." // 


//
// The default title of a Logo picture when it is printed
//
#define LOCALIZED_BITMAPPRINTOUTTITLE       L"Logo Picture" // NOT_YET_LOCALIZED

//
// Other strings
//
#define LOCALIZED_ACTIVEAREA    L"Ενεργή περιοχή" // 
#define LOCALIZED_INFORMATION   L"Πληροφορίες" // 
#define LOCALIZED_WARNING       L"Προσοχή" // 
#define LOCALIZED_UNTITLED      L"Χωρίς τίτλο" // 
#define LOCALIZED_UNKNOWN       L"ʼγνωστο" // 

// The text which is shown when the Unbound node is formatted.
// This happens when a macro outputs nothing (instead of a list)
#define LOCALIZED_UNBOUND       L"(Εκτός ορίου)" // 

// The title of the Editor's Find/Replace dialog box
#define LOCALIZED_EDITOR_TITLE_FIND     L"Εύρεση"
#define LOCALIZED_EDITOR_TITLE_REPLACE  L"Αντικατάσταση"

//
// The text that's displayed when the Editor's Search->Find fails.
//
#define LOCALIZED_STRINGTABLE_CANNOTFINDSTRING L"{ Δε βρέθηκε το %s }" // 


//
// The words that describe color vectors.
// These words were selected from a de facto HTML standard, so you may
// be able to find translations for the entire set on the Web.
//
// As with the procedure names, these are part of the programming language,
// so once they are translated, they cannot be changed without breaking
// compatibility with older programs that may use the old name.
//
// Note that the colors have no spaces in their names.  This makes them
// easier to use, as the programmer doesn't have to escape the space
// when providing them as a literal word, as in:
//
//  SETPENCOLOR "AliceBlue
//
// In absense of the space, The PascalCase makes it easier to see the word
// separation in the documentation.
//
#define LOCALIZED_COLOR_ALICEBLUE             L"AliceBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_ANTIQUEWHITE          L"AntiqueWhite" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_AQUA                  L"Aqua" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_AQUAMARINE            L"Aquamarine" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_AZURE                 L"Azure" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_BEIGE                 L"Beige" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_BISQUE                L"Bisque" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_BLACK                 L"Black" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_BLANCHEDALMOND        L"BlanchedAlmond" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_BLUE                  L"Blue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_BLUEVIOLET            L"BlueViolet" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_BROWN                 L"Brown" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_BURLYWOOD             L"BurlyWood" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_CADETBLUE             L"CadetBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_CHARTREUSE            L"Chartreuse" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_CHOCOLATE             L"Chocolate" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_CORAL                 L"Coral" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_CORNFLOWERBLUE        L"CornflowerBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_CORNSILK              L"Cornsilk" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_CRIMSON               L"Crimson" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_CYAN                  L"Cyan" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKBLUE              L"DarkBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKCYAN              L"DarkCyan" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKGOLDENROD         L"DarkGoldenRod" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKGRAY              L"DarkGray" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKGREEN             L"DarkGreen" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKGREY              L"DarkGrey" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKKHAKI             L"DarkKhaki" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKMAGENTA           L"DarkMagenta" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKOLIVEGREEN        L"DarkOliveGreen" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKORANGE            L"DarkOrange" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKORCHID            L"DarkOrchid" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKRED               L"DarkRed" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKSALMON            L"DarkSalmon" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKSEAGREEN          L"DarkSeaGreen" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKSLATEBLUE         L"DarkSlateBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKSLATEGRAY         L"DarkSlateGray" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKSLATEGREY         L"DarkSlateGrey" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKTURQUOISE         L"DarkTurquoise" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DARKVIOLET            L"DarkViolet" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DEEPPINK              L"DeepPink" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DEEPSKYBLUE           L"DeepSkyBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DIMGRAY               L"DimGray" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DIMGREY               L"DimGrey" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_DODGERBLUE            L"DodgerBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_FIREBRICK             L"FireBrick" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_FLORALWHITE           L"FloralWhite" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_FORESTGREEN           L"ForestGreen" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_FUCHSIA               L"Fuchsia" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_GAINSBORO             L"Gainsboro" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_GHOSTWHITE            L"GhostWhite" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_GOLD                  L"Gold" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_GOLDENROD             L"GoldenRod" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_GRAY                  L"Gray" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_GREEN                 L"Green" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_GREENYELLOW           L"GreenYellow" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_GREY                  L"Grey" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_HONEYDEW              L"HoneyDew" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_HOTPINK               L"HotPink" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_INDIANRED             L"IndianRed" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_INDIGO                L"Indigo" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_IVORY                 L"Ivory" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_KHAKI                 L"Khaki" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LAVENDER              L"Lavender" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LAVENDERBLUSH         L"LavenderBlush" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LAWNGREEN             L"LawnGreen" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LEMONCHIFFON          L"LemonChiffon" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIGHTBLUE             L"LightBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIGHTCORAL            L"LightCoral" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIGHTCYAN             L"LightCyan" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIGHTGOLDENRODYELLOW  L"LightGoldenRodYellow" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIGHTGRAY             L"LightGray" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIGHTGREEN            L"LightGreen" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIGHTGREY             L"LightGrey" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIGHTPINK             L"LightPink" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIGHTSALMON           L"LightSalmon" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIGHTSEAGREEN         L"LightSeaGreen" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIGHTSKYBLUE          L"LightSkyBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIGHTSLATEGRAY        L"LightSlateGray" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIGHTSLATEGREY        L"LightSlateGrey" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIGHTSTEELBLUE        L"LightSteelBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIGHTYELLOW           L"LightYellow" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIME                  L"Lime" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LIMEGREEN             L"LimeGreen" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_LINEN                 L"Linen" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_MAGENTA               L"Magenta" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_MAROON                L"Maroon" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_MEDIUMAQUAMARINE      L"MediumAquaMarine" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_MEDIUMBLUE            L"MediumBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_MEDIUMORCHID          L"MediumOrchid" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_MEDIUMPURPLE          L"MediumPurple" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_MEDIUMSEAGREEN        L"MediumSeaGreen" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_MEDIUMSLATEBLUE       L"MediumSlateBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_MEDIUMSPRINGGREEN     L"MediumSpringGreen" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_MEDIUMTURQUOISE       L"MediumTurquoise" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_MEDIUMVIOLETRED       L"MediumVioletRed" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_MIDNIGHTBLUE          L"MidnightBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_MINTCREAM             L"MintCream" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_MISTYROSE             L"MistyRose" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_MOCCASIN              L"Moccasin" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_NAVAJOWHITE           L"NavajoWhite" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_NAVY                  L"Navy" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_OLDLACE               L"OldLace" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_OLIVE                 L"Olive" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_OLIVEDRAB             L"OliveDrab" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_ORANGE                L"Orange" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_ORANGERED             L"OrangeRed" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_ORCHID                L"Orchid" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_PALEGOLDENROD         L"PaleGoldenRod" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_PALEGREEN             L"PaleGreen" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_PALETURQUOISE         L"PaleTurquoise" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_PALEVIOLETRED         L"PaleVioletRed" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_PAPAYAWHIP            L"PapayaWhip" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_PEACHPUFF             L"PeachPuff" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_PERU                  L"Peru" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_PINK                  L"Pink" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_PLUM                  L"Plum" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_POWDERBLUE            L"PowderBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_PURPLE                L"Purple" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_RED                   L"Red" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_ROSYBROWN             L"RosyBrown" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_ROYALBLUE             L"RoyalBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_SADDLEBROWN           L"SaddleBrown" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_SALMON                L"Salmon" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_SANDYBROWN            L"SandyBrown" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_SEAGREEN              L"SeaGreen" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_SEASHELL              L"SeaShell" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_SIENNA                L"Sienna" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_SILVER                L"Silver" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_SKYBLUE               L"SkyBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_SLATEBLUE             L"SlateBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_SLATEGRAY             L"SlateGray" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_SLATEGREY             L"SlateGrey" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_SNOW                  L"Snow" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_SPRINGGREEN           L"SpringGreen" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_STEELBLUE             L"SteelBlue" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_TAN                   L"Tan" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_TEAL                  L"Teal" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_THISTLE               L"Thistle" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_TOMATO                L"Tomato" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_TURQUOISE             L"Turquoise" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_VIOLET                L"Violet" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_WHEAT                 L"Wheat" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_WHITE                 L"White" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_WHITESMOKE            L"WhiteSmoke" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_YELLOW                L"Yellow" // NOT_YET_LOCALIZED
#define LOCALIZED_COLOR_YELLOWGREEN           L"YellowGreen" // NOT_YET_LOCALIZED

//
// The name of each "window class" that DEBUGWINDOWS prints.
// These should match the corresponding terms that is used
// in the  LOCALIZED_ALTERNATE_*CREATE procedures.
//
#define LOCALIZED_WINDOWCLASSNAME_WINDOW       L"Window" // NOT_YET_LOCALIZED
#define LOCALIZED_WINDOWCLASSNAME_STATIC       L"Static" // NOT_YET_LOCALIZED
#define LOCALIZED_WINDOWCLASSNAME_LISTBOX      L"ListBox" // NOT_YET_LOCALIZED
#define LOCALIZED_WINDOWCLASSNAME_COMBOBOX     L"ComboBox" // NOT_YET_LOCALIZED
#define LOCALIZED_WINDOWCLASSNAME_BUTTON       L"Button" // NOT_YET_LOCALIZED
#define LOCALIZED_WINDOWCLASSNAME_SCROLLBAR    L"ScrollBar" // NOT_YET_LOCALIZED
#define LOCALIZED_WINDOWCLASSNAME_GROUPBOX     L"GroupBox" // NOT_YET_LOCALIZED
#define LOCALIZED_WINDOWCLASSNAME_RADIOBUTTON  L"RadioButton" // NOT_YET_LOCALIZED
#define LOCALIZED_WINDOWCLASSNAME_CHECKBOX     L"CheckBox" // NOT_YET_LOCALIZED
#define LOCALIZED_WINDOWCLASSNAME_DIALOG       L"Dialog" // NOT_YET_LOCALIZED


//
// The name of the default font face name.
// This should only be translated if the given font face doesn't include glyphs
// for characters in your language.  The specified font face name must be part
// of all Windows versions from Windows XP onward that would support your
// language.
//
#define LOCALIZED_DEFAULT_FONT_FACE L"Courier New" // NOT_YET_LOCALIZED
