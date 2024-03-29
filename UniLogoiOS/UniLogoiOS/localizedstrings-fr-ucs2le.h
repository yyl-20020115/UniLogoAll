
//
// Localized "alternate" spellings of Logo reserved words
//
#define LOCALIZED_ALTERNATE_TRUE     L"vrai"
#define LOCALIZED_ALTERNATE_FALSE    L"faux"
#define LOCALIZED_ALTERNATE_END      L"fin"
#define LOCALIZED_ALTERNATE_TOPLEVEL L"toplevel" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SYSTEM   L"system" // NOT_YET_LOCALIZED

//
// Localized "alternate" names of Logo special variables
//
#define LOCALIZED_ALTERNATE_CASEIGNOREDP    L"caseignoredp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ERRACT          L"erract" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_STARTUP         L"startup" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_REDEFP          L"redefp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PRINTWIDTHLIMIT L"printwidthlimit" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PRINTDEPTHLIMIT L"printdepthlimit" // NOT_YET_LOCALIZED


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
#define LOCALIZED_ALTERNATE__DEFMACRO              L".dΘfmacro" // 
#define LOCALIZED_ALTERNATE__EQ                    L".identique?" // 
#define LOCALIZED_ALTERNATE__MACRO                 L".macro" // 
#define LOCALIZED_ALTERNATE__MAYBEOUTPUT           L".retournepeutΩtre" // 
#define LOCALIZED_ALTERNATE__SETBF                 L".fixesp"
#define LOCALIZED_ALTERNATE__SETFIRST              L".fixepremier"
#define LOCALIZED_ALTERNATE__SETITEM               L".fixeitem"
#define LOCALIZED_ALTERNATE_ACTIVEAREA             L"zoneactive" 
#define LOCALIZED_ALTERNATE_ALLOPEN                L"fluxouverts" // 
#define LOCALIZED_ALTERNATE_AND                    L"et"
#define LOCALIZED_ALTERNATE_APPLY                  L"applique" // 
#define LOCALIZED_ALTERNATE_ARCCOS                 L"arccos"
#define LOCALIZED_ALTERNATE_ARCSIN                 L"arcsin"
#define LOCALIZED_ALTERNATE_ARCTAN                 L"arctan"
#define LOCALIZED_ALTERNATE_ARITY                  L"arity" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ARRAY                  L"tableau" // 
#define LOCALIZED_ALTERNATE_ARRAYP                 L"tableaup" // 
#define LOCALIZED_ALTERNATE_ARRAY_                 L"tableau?" // 
#define LOCALIZED_ALTERNATE_ASCII                  L"ascii" // 
#define LOCALIZED_ALTERNATE_ASHIFT                 L"dΘcale" // 
#define LOCALIZED_ALTERNATE_BACK                   L"recule"
#define LOCALIZED_ALTERNATE_BACKSLASHEDP           L"antislash" // 
#define LOCALIZED_ALTERNATE_BACKSLASHED_           L"antislash?" // 
#define LOCALIZED_ALTERNATE_BEFOREP                L"prΘcΦdep"
#define LOCALIZED_ALTERNATE_BEFORE_                L"prΘcΦde?"
#define LOCALIZED_ALTERNATE_BF                     L"sp"
#define LOCALIZED_ALTERNATE_BFS                    L"sps"
#define LOCALIZED_ALTERNATE_BITAND                 L"etbit" // 
#define LOCALIZED_ALTERNATE_BITBLOCK               L"pavΘ" // 
#define LOCALIZED_ALTERNATE_BITCOPY                L"copiedessin"
#define LOCALIZED_ALTERNATE_BITCUT                 L"coupedessin"
#define LOCALIZED_ALTERNATE_BITFIT                 L"ajustedessin" // 
#define LOCALIZED_ALTERNATE_BITINDEX               L"indexdessin"
#define LOCALIZED_ALTERNATE_BITLOAD                L"ramΦnedessin"
#define LOCALIZED_ALTERNATE_BITLOADSIZE            L"ramΦnetailledes"
#define LOCALIZED_ALTERNATE_BITSIZE                L"tailledessin"
#define LOCALIZED_ALTERNATE_BITMAPTURTLE           L"formetortue"
#define LOCALIZED_ALTERNATE_BITMODE                L"modedessin" // 
#define LOCALIZED_ALTERNATE_BITNOT                 L"nonbit" // 
#define LOCALIZED_ALTERNATE_BITOR                  L"oubit" // 
#define LOCALIZED_ALTERNATE_BITPASTE               L"colledessin"
#define LOCALIZED_ALTERNATE_BITPASTETOINDEX        L"collesurindex"
#define LOCALIZED_ALTERNATE_BITSAVE                L"sauvedessin"
#define LOCALIZED_ALTERNATE_BITXOR                 L"ouxbit" // 
#define LOCALIZED_ALTERNATE_BK                     L"re"
#define LOCALIZED_ALTERNATE_BL                     L"sd"
#define LOCALIZED_ALTERNATE_BURIED                 L"enterrΘes" // 
#define LOCALIZED_ALTERNATE_BURY                   L"enterre" // 
#define LOCALIZED_ALTERNATE_BUTFIRST               L"saufpremier"
#define LOCALIZED_ALTERNATE_BUTFIRSTS              L"saufpremiers" // 
#define LOCALIZED_ALTERNATE_BUTLAST                L"saufdernier" // 
#define LOCALIZED_ALTERNATE_BUTTONCREATE           L"crΘebouton" // 
#define LOCALIZED_ALTERNATE_BUTTONDELETE           L"effacebouton" // 
#define LOCALIZED_ALTERNATE_BUTTONENABLE           L"activebouton" // 
#define LOCALIZED_ALTERNATE_BUTTONUPDATE           L"actualisebouton" // 
#define LOCALIZED_ALTERNATE_BUTTONP                L"boutonp" // 
#define LOCALIZED_ALTERNATE_BUTTON_                L"bouton?" // 
#define LOCALIZED_ALTERNATE_BYE                    L"aurevoir"
#define LOCALIZED_ALTERNATE_CATCH                  L"attrape"
#define LOCALIZED_ALTERNATE_CHAR                   L"car"
#define LOCALIZED_ALTERNATE_CHDIR                  L"chrΘp" // 
#define LOCALIZED_ALTERNATE_CHECKBOXCREATE         L"crΘecasechoix" // 
#define LOCALIZED_ALTERNATE_CHECKBOXDELETE         L"effacecasechoix" // 
#define LOCALIZED_ALTERNATE_CHECKBOXENABLE         L"activecasechoix" // 
#define LOCALIZED_ALTERNATE_CHECKBOXGET            L"casechoix" // 
#define LOCALIZED_ALTERNATE_CHECKBOXSET            L"fixecasechoix" // 
#define LOCALIZED_ALTERNATE_CLEAN                  L"nettoie"
#define LOCALIZED_ALTERNATE_CLEARPALETTE           L"videpalette"
#define LOCALIZED_ALTERNATE_CLEARSCREEN            L"videΘcran"
#define LOCALIZED_ALTERNATE_CLEARTEXT              L"videtexte"
#define LOCALIZED_ALTERNATE_CLEARTIMER             L"videchrono" // 
#define LOCALIZED_ALTERNATE_CLOSE                  L"ferme"
#define LOCALIZED_ALTERNATE_CLOSEALL               L"fermetout"
#define LOCALIZED_ALTERNATE_CO                     L"co"
#define LOCALIZED_ALTERNATE_COMBOBOXADDSTRING      L"ajouteitemcombo" // 
#define LOCALIZED_ALTERNATE_COMBOBOXCREATE         L"crΘecombo" // 
#define LOCALIZED_ALTERNATE_COMBOBOXDELETE         L"effacecombo" // 
#define LOCALIZED_ALTERNATE_COMBOBOXENABLE         L"activecombo" // 
#define LOCALIZED_ALTERNATE_COMBOBOXDELETESTRING   L"effaceitemcombo" // 
#define LOCALIZED_ALTERNATE_COMBOBOXGETTEXT        L"textecombo" // 
#define LOCALIZED_ALTERNATE_COMBOBOXSETTEXT        L"fixetextecombo" // 
#define LOCALIZED_ALTERNATE_CONTENTS               L"contenu" // 
#define LOCALIZED_ALTERNATE_CONTINUE               L"continue"
#define LOCALIZED_ALTERNATE_COPYDEF                L"donnedΘf" // 
#define LOCALIZED_ALTERNATE_COS                    L"cos"
#define LOCALIZED_ALTERNATE_COUNT                  L"compte"
#define LOCALIZED_ALTERNATE_CS                     L"vΘ"
#define LOCALIZED_ALTERNATE_CT                     L"vt"
#define LOCALIZED_ALTERNATE_CURSOR                 L"curseur" // 
#define LOCALIZED_ALTERNATE_DEBUGWINDOWS           L"dΘboguefenΩtres" // 
#define LOCALIZED_ALTERNATE_DEFINE                 L"dΘfinis"
#define LOCALIZED_ALTERNATE_DEFINEDP               L"definedp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_DEFINED_               L"defined?" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_DIALOGCREATE           L"crΘedialogue" // 
#define LOCALIZED_ALTERNATE_DIALOGENABLE           L"activedialogue" // 
#define LOCALIZED_ALTERNATE_DIALOGDELETE           L"effacedialogue" // 
#define LOCALIZED_ALTERNATE_DIALOGFILEOPEN         L"ouvrefichier" // 
#define LOCALIZED_ALTERNATE_DIALOGFILESAVE         L"sauvefichier" // 
#define LOCALIZED_ALTERNATE_DIFFERENCE             L"diffΘrence"
#define LOCALIZED_ALTERNATE_DIRECTORIES            L"rΘpertoires"
#define LOCALIZED_ALTERNATE_DLLCALL                L"appelledll" // 
#define LOCALIZED_ALTERNATE_DLLFREE                L"libΦredll" // 
#define LOCALIZED_ALTERNATE_DLLLOAD                L"chargedll" // 
#define LOCALIZED_ALTERNATE_DOWN                   L"pique" // 
#define LOCALIZED_ALTERNATE_DOWNPITCH              L"pique" // 
#define LOCALIZED_ALTERNATE_DRIBBLE                L"transcription" // 
#define LOCALIZED_ALTERNATE_ED                     L"Θd"
#define LOCALIZED_ALTERNATE_EDIT                   L"Θdite"
#define LOCALIZED_ALTERNATE_ELLIPSEARC             L"ellipsearc" // 
#define LOCALIZED_ALTERNATE_EMPTYP                 L"videp"
#define LOCALIZED_ALTERNATE_EMPTY_                 L"vide?"
#define LOCALIZED_ALTERNATE_EOFP                   L"eofp" // 
#define LOCALIZED_ALTERNATE_EOF_                   L"ff?" // 
#define LOCALIZED_ALTERNATE_EQUALP                 L"Θgalp"
#define LOCALIZED_ALTERNATE_EQUAL_                 L"Θgal?"
#define LOCALIZED_ALTERNATE_ER                     L"ef" // 
#define LOCALIZED_ALTERNATE_ERASE                  L"efface"
#define LOCALIZED_ALTERNATE_ERASEFILE              L"effacefichier" // 
#define LOCALIZED_ALTERNATE_ERF                    L"eff" // 
#define LOCALIZED_ALTERNATE_ERROR                  L"erreur"
#define LOCALIZED_ALTERNATE_EVENTCHECK             L"testΘv" // 
#define LOCALIZED_ALTERNATE_EXP                    L"exp" // 
#define LOCALIZED_ALTERNATE_FD                     L"av"
#define LOCALIZED_ALTERNATE_FENCE                  L"clos"
#define LOCALIZED_ALTERNATE_FILL                   L"remplis"
#define LOCALIZED_ALTERNATE_FILES                  L"fichiers"
#define LOCALIZED_ALTERNATE_FIRST                  L"premier"
#define LOCALIZED_ALTERNATE_FIRSTS                 L"premiers"
#define LOCALIZED_ALTERNATE_FLOODCOLOR             L"couleurremplissage"
#define LOCALIZED_ALTERNATE_FONTFACENAMES          L"listepolices" // 
#define LOCALIZED_ALTERNATE_FOREVER                L"pourtoujours" // 
#define LOCALIZED_ALTERNATE_FORM                   L"formate" // 
#define LOCALIZED_ALTERNATE_FORWARD                L"avance"
#define LOCALIZED_ALTERNATE_FPUT                   L"metspremier"
#define LOCALIZED_ALTERNATE_FS                     L"pΘc" // 
#define LOCALIZED_ALTERNATE_FULLSCREEN             L"pleinΘcran" // 
#define LOCALIZED_ALTERNATE_FULLTEXT               L"pleintexte" // 
#define LOCALIZED_ALTERNATE_GETFOCUS               L"focus" // 
#define LOCALIZED_ALTERNATE_GOTO                   L"vavers" // 
#define LOCALIZED_ALTERNATE_GIFLOAD                L"ramΦnegif" // 
#define LOCALIZED_ALTERNATE_GIFSIZE                L"taillegif" // 
#define LOCALIZED_ALTERNATE_GIFSAVE                L"sauvegif" // 
#define LOCALIZED_ALTERNATE_GPROP                  L"rprop" // 
#define LOCALIZED_ALTERNATE_GREATEREQUALP          L"supΘrieurΘgalp" // 
#define LOCALIZED_ALTERNATE_GREATEREQUAL_          L"supΘrieurΘgal?" // 
#define LOCALIZED_ALTERNATE_GREATERP               L"supΘrieurp" // 
#define LOCALIZED_ALTERNATE_GREATER_               L"supΘrieur?" // 
#define LOCALIZED_ALTERNATE_GROUPBOXCREATE         L"crΘegroupe" // 
#define LOCALIZED_ALTERNATE_GROUPBOXDELETE         L"effacegroupe" // 
#define LOCALIZED_ALTERNATE_HALT                   L"arrΩtetout" // 
#define LOCALIZED_ALTERNATE_HASOWNPENP             L"hasownpenp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_HASOWNPEN_             L"hasownpen?" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_HEADING                L"cap" //
#define LOCALIZED_ALTERNATE_HELP                   L"aide" // 
#define LOCALIZED_ALTERNATE_HIDETURTLE             L"cachetortue"
#define LOCALIZED_ALTERNATE_HOME                   L"origine"
#define LOCALIZED_ALTERNATE_HT                     L"ct"
#define LOCALIZED_ALTERNATE_IF                     L"si"
#define LOCALIZED_ALTERNATE_IFELSE                 L"sisinon"
#define LOCALIZED_ALTERNATE_IFF                    L"sif"
#define LOCALIZED_ALTERNATE_IFFALSE                L"sifaux"
#define LOCALIZED_ALTERNATE_IFT                    L"siv"
#define LOCALIZED_ALTERNATE_IFTRUE                 L"sivrai"
#define LOCALIZED_ALTERNATE_INGAMEPORT             L"lisportjeu" // 
#define LOCALIZED_ALTERNATE_INPORT                 L"lisport" // 
#define LOCALIZED_ALTERNATE_INPORTB                L"lisportb" // 
#define LOCALIZED_ALTERNATE_INT                    L"tronque"
#define LOCALIZED_ALTERNATE_ITEM                   L"item" // 
#define LOCALIZED_ALTERNATE_KEYBOARDOFF            L"dΘsactiveclavier" //
#define LOCALIZED_ALTERNATE_KEYBOARDON             L"activeclavier" //
#define LOCALIZED_ALTERNATE_KEYBOARDVALUE          L"clavier" //
#define LOCALIZED_ALTERNATE_KEYP                   L"touchep"
#define LOCALIZED_ALTERNATE_KEY_                   L"touche?"
#define LOCALIZED_ALTERNATE_LABEL                  L"Θtiquette"
#define LOCALIZED_ALTERNATE_LABELFONT              L"policeΘtiquette"
#define LOCALIZED_ALTERNATE_LABELSIZE              L"tailleΘtiquette" // 
#define LOCALIZED_ALTERNATE_LAST                   L"dernier" // 
#define LOCALIZED_ALTERNATE_LEFT                   L"gauche"
#define LOCALIZED_ALTERNATE_LEFTROLL               L"inclinegauche" // 
#define LOCALIZED_ALTERNATE_LESSEQUALP             L"infΘrieurΘgalp" // 
#define LOCALIZED_ALTERNATE_LESSEQUAL_             L"infΘrieurΘgal?" // 
#define LOCALIZED_ALTERNATE_LESSP                  L"infΘrieurp" // 
#define LOCALIZED_ALTERNATE_LESS_                  L"infΘrieur?" // 
#define LOCALIZED_ALTERNATE_LIGHT                  L"lumiΦre" // 
#define LOCALIZED_ALTERNATE_LIST                   L"liste"
#define LOCALIZED_ALTERNATE_LISTBOXADDSTRING       L"ajouteitemliste" // 
#define LOCALIZED_ALTERNATE_LISTBOXCREATE          L"crΘeliste" // 
#define LOCALIZED_ALTERNATE_LISTBOXENABLE          L"activeliste" // 
#define LOCALIZED_ALTERNATE_LISTBOXDELETE          L"effaceliste" // 
#define LOCALIZED_ALTERNATE_LISTBOXDELETESTRING    L"effaceitemliste" // 
#define LOCALIZED_ALTERNATE_LISTBOXGETSELECT       L"choixliste" // 
#define LOCALIZED_ALTERNATE_LISTP                  L"listep"
#define LOCALIZED_ALTERNATE_LIST_                  L"liste?"
#define LOCALIZED_ALTERNATE_LN                     L"ln" // 
#define LOCALIZED_ALTERNATE_LOAD                   L"ramΦne"
#define LOCALIZED_ALTERNATE_LOCAL                  L"locale"
#define LOCALIZED_ALTERNATE_LOG10                  L"log10"
#define LOCALIZED_ALTERNATE_LOGOVERSION            L"versionlogo" // 
#define LOCALIZED_ALTERNATE_LOWERCASE              L"minuscule"
#define LOCALIZED_ALTERNATE_LPUT                   L"metsdernier"
#define LOCALIZED_ALTERNATE_LR                     L"ig" // 
#define LOCALIZED_ALTERNATE_LSHIFT                 L"dΘcaleg" // 
#define LOCALIZED_ALTERNATE_LT                     L"ga"
#define LOCALIZED_ALTERNATE_MACHINE                L"machine" // 
#define LOCALIZED_ALTERNATE_MACROP                 L"macrop" // 
#define LOCALIZED_ALTERNATE_MACRO_                 L"macro?" // 
#define LOCALIZED_ALTERNATE_MAKE                   L"donne"
#define LOCALIZED_ALTERNATE_MCI                    L"mci"
#define LOCALIZED_ALTERNATE_MEMBER                 L"membre"
#define LOCALIZED_ALTERNATE_MEMBERP                L"membrep"
#define LOCALIZED_ALTERNATE_MEMBER_                L"membre?"
#define LOCALIZED_ALTERNATE_MESSAGEBOX             L"message"
#define LOCALIZED_ALTERNATE_MIDICLOSE              L"fermemidi" // 
#define LOCALIZED_ALTERNATE_MIDIMESSAGE            L"messagemidi" // 
#define LOCALIZED_ALTERNATE_MIDIOPEN               L"ouvremidi" // 
#define LOCALIZED_ALTERNATE_MINUS                  L"moins"
#define LOCALIZED_ALTERNATE_MKDIR                  L"fixerΘp" // 
#define LOCALIZED_ALTERNATE_MODULO                 L"modulo"
#define LOCALIZED_ALTERNATE_MOUSEOFF               L"dΘsactivesouris" // 
#define LOCALIZED_ALTERNATE_MOUSEON                L"activesouris" // 
#define LOCALIZED_ALTERNATE_MOUSEPOS               L"possouris"
#define LOCALIZED_ALTERNATE_NAMEP                  L"nomp"
#define LOCALIZED_ALTERNATE_NAME_                  L"nom?"
#define LOCALIZED_ALTERNATE_NAMES                  L"noms"
#define LOCALIZED_ALTERNATE_NETACCEPTOFF           L"finaccepte" // 
#define LOCALIZED_ALTERNATE_NETACCEPTON            L"accepte" // 
#define LOCALIZED_ALTERNATE_NETACCEPTRECEIVEVALUE  L"accepte.reτu" // 
#define LOCALIZED_ALTERNATE_NETACCEPTSENDVALUE     L"accepte.envoyΘ" // 
#define LOCALIZED_ALTERNATE_NETCONNECTOFF          L"finconnecte" //
#define LOCALIZED_ALTERNATE_NETCONNECTON           L"connecte" //
#define LOCALIZED_ALTERNATE_NETCONNECTRECEIVEVALUE L"connecte.reτu" // 
#define LOCALIZED_ALTERNATE_NETCONNECTSENDVALUE    L"connecte.envoyΘ" // 
#define LOCALIZED_ALTERNATE_NETSHUTDOWN            L"fermerΘseau" // 
#define LOCALIZED_ALTERNATE_NETSTARTUP             L"ouvrerΘseau" // 
#define LOCALIZED_ALTERNATE_NOBITMAPTURTLE         L"finformetortue" // 
#define LOCALIZED_ALTERNATE_NODES                  L"noeuds" // 
#define LOCALIZED_ALTERNATE_NODRIBBLE              L"fintranscription" // 
#define LOCALIZED_ALTERNATE_NOSTATUS               L"fermeΘtat" // 
#define LOCALIZED_ALTERNATE_NOT                    L"non"
#define LOCALIZED_ALTERNATE_NOTEQUALP              L"nonΘgalp" // 
#define LOCALIZED_ALTERNATE_NOTEQUAL_              L"nonΘgal?" // 
#define LOCALIZED_ALTERNATE_NOYIELD                L"finpartage" // 
#define LOCALIZED_ALTERNATE_NUMBERP                L"nombrep" // 
#define LOCALIZED_ALTERNATE_NUMBER_                L"nombre?" // 
#define LOCALIZED_ALTERNATE_OP                     L"ret" // 
#define LOCALIZED_ALTERNATE_OPENAPPEND             L"ajouteflux" // 
#define LOCALIZED_ALTERNATE_OPENREAD               L"lisflux" // 
#define LOCALIZED_ALTERNATE_OPENUPDATE             L"actualiseflux" // 
#define LOCALIZED_ALTERNATE_OPENWRITE              L"Θcrisflux" // 
#define LOCALIZED_ALTERNATE_OR                     L"ou" // 
#define LOCALIZED_ALTERNATE_OUTPORT                L"Θcrisport" // 
#define LOCALIZED_ALTERNATE_OUTPORTB               L"Θcrisportb" // 
#define LOCALIZED_ALTERNATE_OUTPUT                 L"retourne"
#define LOCALIZED_ALTERNATE_PARSE                  L"analyse" // 
#define LOCALIZED_ALTERNATE_PAUSE                  L"pause" // 
#define LOCALIZED_ALTERNATE_PC                     L"cc"
#define LOCALIZED_ALTERNATE_PD                     L"bc"
#define LOCALIZED_ALTERNATE_PE                     L"go"
#define LOCALIZED_ALTERNATE_PENCOLOR               L"couleurcrayon"
#define LOCALIZED_ALTERNATE_PENDOWN                L"baissecrayon"
#define LOCALIZED_ALTERNATE_PENDOWNP               L"baissecrayonp"
#define LOCALIZED_ALTERNATE_PENDOWN_               L"baissecrayon?"
#define LOCALIZED_ALTERNATE_PENERASE               L"gomme"
#define LOCALIZED_ALTERNATE_PENMODE                L"modecrayon"
#define LOCALIZED_ALTERNATE_PENPAINT               L"dessine"
#define LOCALIZED_ALTERNATE_PENPATTERN             L"motifcrayon" // 
#define LOCALIZED_ALTERNATE_PENREVERSE             L"inversecrayon"
#define LOCALIZED_ALTERNATE_PENSIZE                L"taillecrayon" // 
#define LOCALIZED_ALTERNATE_PENUP                  L"lΦvecrayon"
#define LOCALIZED_ALTERNATE_PERSPECTIVE            L"perspective"
#define LOCALIZED_ALTERNATE_PITCH                  L"cabrement" // 
#define LOCALIZED_ALTERNATE_PIXEL                  L"point"
#define LOCALIZED_ALTERNATE_PLAYWAVE               L"jouewave" // 
#define LOCALIZED_ALTERNATE_PLIST                  L"lprop" // 
#define LOCALIZED_ALTERNATE_PLISTS                 L"lprops" // 
#define LOCALIZED_ALTERNATE_PO                     L"im" // 
#define LOCALIZED_ALTERNATE_POPDIR                 L"rΘpparent" // 
#define LOCALIZED_ALTERNATE_POLYSTART              L"dΘbutpoly" // 
#define LOCALIZED_ALTERNATE_POLYEND                L"finpoly" // 
#define LOCALIZED_ALTERNATE_POLYVIEW               L"affichepoly" // 
#define LOCALIZED_ALTERNATE_PORTCLOSE              L"fermeport" // 
#define LOCALIZED_ALTERNATE_PORTFLUSH              L"purgeport" // 
#define LOCALIZED_ALTERNATE_PORTMODE               L"modeport" // 
#define LOCALIZED_ALTERNATE_PORTOPEN               L"ouvreport" // 
#define LOCALIZED_ALTERNATE_PORTREADARRAY          L"listableauport" // 
#define LOCALIZED_ALTERNATE_PORTREADCHAR           L"liscarport" // 
#define LOCALIZED_ALTERNATE_PORTWRITEARRAY         L"Θcristableauport" // 
#define LOCALIZED_ALTERNATE_PORTWRITECHAR          L"Θcriscarport" // 
#define LOCALIZED_ALTERNATE_POS                    L"pos" // 
#define LOCALIZED_ALTERNATE_POSXYZ                 L"posxyz" // 
#define LOCALIZED_ALTERNATE_POT                    L"imt" // 
#define LOCALIZED_ALTERNATE_POWER                  L"puissance"
#define LOCALIZED_ALTERNATE_PPROP                  L"dprop" // 
#define LOCALIZED_ALTERNATE_PPT                    L"de"
#define LOCALIZED_ALTERNATE_PR                     L"Θc"
#define LOCALIZED_ALTERNATE_PRIMITIVEP             L"primitivep"
#define LOCALIZED_ALTERNATE_PRIMITIVE_             L"primitive?"
#define LOCALIZED_ALTERNATE_PRINT                  L"Θcris"
#define LOCALIZED_ALTERNATE_PROCEDUREP             L"procΘdurep" // 
#define LOCALIZED_ALTERNATE_PROCEDURE_             L"procΘdure?" // 
#define LOCALIZED_ALTERNATE_PROPLISTP              L"lpropp" // 
#define LOCALIZED_ALTERNATE_PROPLIST_              L"lprop?" // 
#define LOCALIZED_ALTERNATE_PROCEDURES             L"procΘdures" // 
#define LOCALIZED_ALTERNATE_PRODUCT                L"produit"
#define LOCALIZED_ALTERNATE_PU                     L"lc"
#define LOCALIZED_ALTERNATE_PX                     L"ic"
#define LOCALIZED_ALTERNATE_QUESTIONBOX            L"question" // 
#define LOCALIZED_ALTERNATE_QUOTIENT               L"divise"
#define LOCALIZED_ALTERNATE_RADARCCOS              L"radarccos"
#define LOCALIZED_ALTERNATE_RADARCSIN              L"radarcsin"
#define LOCALIZED_ALTERNATE_RADARCTAN              L"radarctan"
#define LOCALIZED_ALTERNATE_RADCOS                 L"radcos"
#define LOCALIZED_ALTERNATE_RADIOBUTTONCREATE      L"crΘeboutonradio" // 
#define LOCALIZED_ALTERNATE_RADIOBUTTONENABLE      L"activeboutonradio" // 
#define LOCALIZED_ALTERNATE_RADIOBUTTONDELETE      L"effaceboutonradio" // 
#define LOCALIZED_ALTERNATE_RADIOBUTTONGET         L"boutonradio" // 
#define LOCALIZED_ALTERNATE_RADIOBUTTONSET         L"fixeboutonradio" // 
#define LOCALIZED_ALTERNATE_RADSIN                 L"radsin"
#define LOCALIZED_ALTERNATE_RADTAN                 L"radtan"
#define LOCALIZED_ALTERNATE_RANDOM                 L"hasard"
#define LOCALIZED_ALTERNATE_RAWASCII               L"asciibrut" // 
#define LOCALIZED_ALTERNATE_RC                     L"lcar"
#define LOCALIZED_ALTERNATE_RCS                    L"lcars"
#define LOCALIZED_ALTERNATE_READCHAR               L"liscar"
#define LOCALIZED_ALTERNATE_READCHARS              L"liscars"
#define LOCALIZED_ALTERNATE_READER                 L"fluxlecture"
#define LOCALIZED_ALTERNATE_READLIST               L"lisliste"
#define LOCALIZED_ALTERNATE_READPOS                L"poslecture"
#define LOCALIZED_ALTERNATE_READRAWLINE            L"readrawline" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_READWORD               L"lismot"
#define LOCALIZED_ALTERNATE_REMAINDER              L"reste"
#define LOCALIZED_ALTERNATE_REMPROP                L"eprop" // 
#define LOCALIZED_ALTERNATE_REPCOUNT               L"compteur"
#define LOCALIZED_ALTERNATE_REPEAT                 L"rΘpΦte"
#define LOCALIZED_ALTERNATE_RERANDOM               L"rehasard" // 
#define LOCALIZED_ALTERNATE_RIGHT                  L"droite"
#define LOCALIZED_ALTERNATE_RIGHTROLL              L"inclinedroite" // 
#define LOCALIZED_ALTERNATE_RL                     L"ll" // 
#define LOCALIZED_ALTERNATE_RMDIR                  L"efrΘp" // 
#define LOCALIZED_ALTERNATE_ROLL                   L"inclinaison" // 
#define LOCALIZED_ALTERNATE_ROUND                  L"arrondis"
#define LOCALIZED_ALTERNATE_RR                     L"id" // 
#define LOCALIZED_ALTERNATE_RT                     L"dr"
#define LOCALIZED_ALTERNATE_RUN                    L"exΘcute"
#define LOCALIZED_ALTERNATE_RUNPARSE               L"exΘcuteanalyse" // 
#define LOCALIZED_ALTERNATE_RUNRESULT              L"exΘcuterΘsultat" // 
#define LOCALIZED_ALTERNATE_RW                     L"lm" // 
#define LOCALIZED_ALTERNATE_SAVE                   L"sauve"
#define LOCALIZED_ALTERNATE_SCREENCOLOR            L"couleurfond" // 
#define LOCALIZED_ALTERNATE_SCROLLBARCREATE        L"crΘeascenseur" // 
#define LOCALIZED_ALTERNATE_SCROLLBARENABLE        L"activeascenseur" // 
#define LOCALIZED_ALTERNATE_SCROLLBARDELETE        L"effaceascenceur" // 
#define LOCALIZED_ALTERNATE_SCROLLBARGET           L"ascenseur" // 
#define LOCALIZED_ALTERNATE_SCROLLBARSET           L"fixeascenseur" // 
#define LOCALIZED_ALTERNATE_SCROLLX                L"dΘfilex" // 
#define LOCALIZED_ALTERNATE_SCROLLY                L"dΘfiley" // 
#define LOCALIZED_ALTERNATE_SCRUNCH                L"Θchelle" // 
#define LOCALIZED_ALTERNATE_SE                     L"ph"
#define LOCALIZED_ALTERNATE_SELECTBOX              L"choix" // 
#define LOCALIZED_ALTERNATE_SENTENCE               L"phrase"
#define LOCALIZED_ALTERNATE_SETACTIVEAREA          L"fixezoneactive"
#define LOCALIZED_ALTERNATE_SETBITINDEX            L"fixeindexbmp" // 
#define LOCALIZED_ALTERNATE_SETBITMODE             L"fixemodebmp" // 
#define LOCALIZED_ALTERNATE_SETCLIP                L"setclip" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_SETCURSOR              L"fixecurseur" // 
#define LOCALIZED_ALTERNATE_SETCURSORNOWAIT        L"fincurseurattente" // 
#define LOCALIZED_ALTERNATE_SETCURSORWAIT          L"fixecurseurattente" // 
#define LOCALIZED_ALTERNATE_SETFC                  L"fcr"
#define LOCALIZED_ALTERNATE_SETFLOODCOLOR          L"fixecouleurremplissage"
#define LOCALIZED_ALTERNATE_SETFOCUS               L"fixefocus" // 
#define LOCALIZED_ALTERNATE_SETH                   L"fcap" // 
#define LOCALIZED_ALTERNATE_SETHEADING             L"fixecap"
#define LOCALIZED_ALTERNATE_SETITEM                L"fixeitem"
#define LOCALIZED_ALTERNATE_SETLABELFONT           L"fixepolice"
#define LOCALIZED_ALTERNATE_SETLIGHT               L"fixelumiΦre" // 
#define LOCALIZED_ALTERNATE_SETMARGINS             L"fixemarges" // 
#define LOCALIZED_ALTERNATE_SETPC                  L"fcc"
#define LOCALIZED_ALTERNATE_SETPENCOLOR            L"fixecouleurcrayon"
#define LOCALIZED_ALTERNATE_SETPENPATTERN          L"fixemotifcrayon" // 
#define LOCALIZED_ALTERNATE_SETPENSIZE             L"fixetaillecrayon"
#define LOCALIZED_ALTERNATE_SETPITCH               L"fixecabrement" // 
#define LOCALIZED_ALTERNATE_SETPIXEL               L"fixepoint" // 
#define LOCALIZED_ALTERNATE_SETPOS                 L"fixeposition"
#define LOCALIZED_ALTERNATE_SETPOSXYZ              L"fixepositionxyz"
#define LOCALIZED_ALTERNATE_SETREAD                L"fixelecture" // 
#define LOCALIZED_ALTERNATE_SETREADPOS             L"fixeposlecture" // 
#define LOCALIZED_ALTERNATE_SETROLL                L"fixeinclinaison" // 
#define LOCALIZED_ALTERNATE_SETSC                  L"fcf"
#define LOCALIZED_ALTERNATE_SETSCREENCOLOR         L"fixecouleurfond"
#define LOCALIZED_ALTERNATE_SETSCRUNCH             L"fixeΘchelle" // 
#define LOCALIZED_ALTERNATE_SETTIMER               L"fixechrono" // 
#define LOCALIZED_ALTERNATE_SETTURTLE              L"fixetortue"
#define LOCALIZED_ALTERNATE_SETTURTLEMODE          L"fixemodetortue" 
#define LOCALIZED_ALTERNATE_SETWRITE               L"fixeΘcriture" // 
#define LOCALIZED_ALTERNATE_SETWRITEPOS            L"fixeposΘcriture" // 
#define LOCALIZED_ALTERNATE_SETX                   L"fixex"
#define LOCALIZED_ALTERNATE_SETXY                  L"fixexy"
#define LOCALIZED_ALTERNATE_SETXYZ                 L"fixexyz"
#define LOCALIZED_ALTERNATE_SETY                   L"fixey"
#define LOCALIZED_ALTERNATE_SETZ                   L"fixez"
#define LOCALIZED_ALTERNATE_SHELL                  L"lance" // 
#define LOCALIZED_ALTERNATE_SHOW                   L"montre"
#define LOCALIZED_ALTERNATE_SHOWNP                 L"visiblep"
#define LOCALIZED_ALTERNATE_SHOWN_                 L"visible?"
#define LOCALIZED_ALTERNATE_SHOWTURTLE             L"montretortue"
#define LOCALIZED_ALTERNATE_SIN                    L"sin"
#define LOCALIZED_ALTERNATE_SOUND                  L"son" // 
#define LOCALIZED_ALTERNATE_SPLITSCREEN            L"Θcranmixte" // 
#define LOCALIZED_ALTERNATE_SQRT                   L"racine"
#define LOCALIZED_ALTERNATE_SS                     L"Θcm" // 
#define LOCALIZED_ALTERNATE_ST                     L"mt"
#define LOCALIZED_ALTERNATE_STANDOUT               L"contour" // 
#define LOCALIZED_ALTERNATE_STATICCREATE           L"crΘetexte" // 
#define LOCALIZED_ALTERNATE_STATICDELETE           L"effacetexte" // 
#define LOCALIZED_ALTERNATE_STATICUPDATE           L"actualisetexte" // 
#define LOCALIZED_ALTERNATE_STATUS                 L"Θtat" // 
#define LOCALIZED_ALTERNATE_STEP                   L"pas" // 
#define LOCALIZED_ALTERNATE_STEPPED                L"pas?" // 
#define LOCALIZED_ALTERNATE_STOP                   L"arrΩte" // 
#define LOCALIZED_ALTERNATE_SUBSTRINGP             L"appartientp" // 
#define LOCALIZED_ALTERNATE_SUBSTRING_             L"appartient?" // 
#define LOCALIZED_ALTERNATE_SUM                    L"somme"
#define LOCALIZED_ALTERNATE_TAG                    L"balise" // 
#define LOCALIZED_ALTERNATE_TAN                    L"tan"
#define LOCALIZED_ALTERNATE_TEST                   L"teste" // 
#define LOCALIZED_ALTERNATE_TEXT                   L"dΘfinition" // 
#define LOCALIZED_ALTERNATE_TEXTSCREEN             L"Θcrantexte" // 
#define LOCALIZED_ALTERNATE_THING                  L"chose"
#define LOCALIZED_ALTERNATE_THROW                  L"renvoie"
#define LOCALIZED_ALTERNATE_TIME                   L"temps"
#define LOCALIZED_ALTERNATE_TIMEMILLI              L"tempsms" // 
#define LOCALIZED_ALTERNATE_TO                     L"pour"
#define LOCALIZED_ALTERNATE_TONE                   L"ton" // 
#define LOCALIZED_ALTERNATE_TOWARDS                L"vers"
#define LOCALIZED_ALTERNATE_TOWARDSXYZ             L"versxyz"
#define LOCALIZED_ALTERNATE_TRACE                  L"suivi" // 
#define LOCALIZED_ALTERNATE_TRACED                 L"suivi?" // 
#define LOCALIZED_ALTERNATE_TS                     L"Θct" // 
#define LOCALIZED_ALTERNATE_TURTLE                 L"tortue"
#define LOCALIZED_ALTERNATE_TURTLEMODE             L"modetortue"
#define LOCALIZED_ALTERNATE_TURTLES                L"tortues"
#define LOCALIZED_ALTERNATE_TYPE                   L"tape"
#define LOCALIZED_ALTERNATE_UNBURY                 L"dΘterre" // 
#define LOCALIZED_ALTERNATE_UNSTEP                 L"finpas" // 
#define LOCALIZED_ALTERNATE_UNTRACE                L"finsuivi" // 
#define LOCALIZED_ALTERNATE_UP                     L"cabre" // 
#define LOCALIZED_ALTERNATE_UPPERCASE              L"majuscule"
#define LOCALIZED_ALTERNATE_UPPITCH                L"cabre" // 
#define LOCALIZED_ALTERNATE_WAIT                   L"attends"
#define LOCALIZED_ALTERNATE_WINDOW                 L"fenΩtre"
#define LOCALIZED_ALTERNATE_WINDOWCREATE           L"crΘefenΩtre" // 
#define LOCALIZED_ALTERNATE_WINDOWENABLE           L"activefenΩtre" // 
#define LOCALIZED_ALTERNATE_WINDOWDELETE           L"effacefenΩtre" // 
#define LOCALIZED_ALTERNATE_WINDOWFILEEDIT         L"Θditefichier" // 
#define LOCALIZED_ALTERNATE_WINDOWSET              L"modefenΩtre" // 
#define LOCALIZED_ALTERNATE_WINHELP                L"aidewin" // 
#define LOCALIZED_ALTERNATE_WORD                   L"mot"
#define LOCALIZED_ALTERNATE_WORDP                  L"motp"
#define LOCALIZED_ALTERNATE_WORD_                  L"mot?"
#define LOCALIZED_ALTERNATE_WRAP                   L"enroule"
#define LOCALIZED_ALTERNATE_WRITEPOS               L"posΘcriture" // 
#define LOCALIZED_ALTERNATE_WRITER                 L"fluxΘcriture"
#define LOCALIZED_ALTERNATE_YESNOBOX               L"choixouinon"
#define LOCALIZED_ALTERNATE_YIELD                  L"partage" // 
#define LOCALIZED_ALTERNATE_ZOOM                   L"zoom"

//
// General localized strings
//
#define LOCALIZED_GENERAL_OKBUTTON      L"Valider"
#define LOCALIZED_GENERAL_CANCELBUTTON  L"Annuler"
#define LOCALIZED_GENERAL_APPLYBUTTON   L"&Appliquer"

#define LOCALIZED_GENERAL_PRODUCTNAME   L"UniLogo"

// Embedded description of unilogo.exe
#define LOCALIZED_UNILOGO_FILE_DESCRIPTION L"L'environnement de programmation UniLogo"

//
// The menu options on the main window 
//
#define LOCALIZED_FILE                  L"&Fichier"
#define LOCALIZED_FILE_NEW              L"&Nouveau\t(supprime l'espace de travail)"
#define LOCALIZED_FILE_LOAD             L"&RamΦne...\t(fusionne avec l'espace de travail)"
#define LOCALIZED_FILE_OPEN             L"&Ouvrir...\t(remplace l'espace de travail)"
#define LOCALIZED_FILE_SAVE             L"&Enregistrer"
#define LOCALIZED_FILE_SAVEAS           L"En&registrer sous..."
#define LOCALIZED_FILE_SETASSCREENSAVER L"&Mettre comme ╔conomiseur d'╔cran"
#define LOCALIZED_FILE_EDIT             L"E&diter..."
#define LOCALIZED_FILE_ERASE            L"E&ffacer..."
#define LOCALIZED_FILE_EXIT             L"&Quitter"

#define LOCALIZED_BITMAP               L"&Dessin"
#define LOCALIZED_BITMAP_NEW           L"&Nouveau"
#define LOCALIZED_BITMAP_LOAD          L"&RamΦne..."
#define LOCALIZED_BITMAP_SAVE          L"&Enregistrer"
#define LOCALIZED_BITMAP_SAVEAS        L"En&registrer sous..."
#define LOCALIZED_BITMAP_PRINT         L"&Imprimer..."
#define LOCALIZED_BITMAP_PRINTERSETUP  L"&ParamΦtres Impr...."
#define LOCALIZED_BITMAP_ACTIVEAREA    L"&Zone active..."

#define LOCALIZED_SET                  L"&Options"
#define LOCALIZED_SET_PENSIZE          L"&Taille Crayon..."
#define LOCALIZED_SET_LABELFONT        L"&Police de CaractΦres pour ╔tiquette..."
#define LOCALIZED_SET_COMMANDERFONT    L"Police de CaractΦres du &Poste de Commande..."
#define LOCALIZED_SET_PENCOLOR         L"&Couleur Crayon..."
#define LOCALIZED_SET_FLOODCOLOR       L"Couleur &Remplissage..."
#define LOCALIZED_SET_SCREENCOLOR      L"Couleur &Fond..."

#define LOCALIZED_ZOOM                 L"&Zoom"
#define LOCALIZED_ZOOM_IN              L"&Avant"
#define LOCALIZED_ZOOM_OUT             L"&ArriΦre"
#define LOCALIZED_ZOOM_NORMAL          L"&Normal"

#define LOCALIZED_HELP                 L"&Aide"
#define LOCALIZED_HELP_INDEX           L"&Manuel (en Anglais)"
#define LOCALIZED_HELP_TUTORIAL        L"&Tutoriel (en Anglais)"
#define LOCALIZED_HELP_DEMO            L"&DΘmo"
#define LOCALIZED_HELP_EXAMPLE         L"&Exemples"
#define LOCALIZED_HELP_RELEASENOTES    L"&Notes MαJ"
#define LOCALIZED_HELP_ABOUTUNILOGO    L"&A propos de " LOCALIZED_GENERAL_PRODUCTNAME L"..."
#define LOCALIZED_HELP_MS              L"A &propos de MS..."
// The following two help options display tables for translating to/from English
// These tables are built from the LOCALIZED_ALTERNATE_* macros above and the
// and startup-xxxx.logoscript file.
#define LOCALIZED_HELP_LANGTOENGLISH   L"Franτais α Anglais"
#define LOCALIZED_HELP_ENGLISHTOLANG   L"Anglais α Franτais"

// The "Set Active Area" dialog box
#define LOCALIZED_SELECTACTIVEAREA              L"Zone active"
#define LOCALIZED_SELECTACTIVEAREA_EFFECT       L"Zone d'impression et de sauvegarde"
#define LOCALIZED_SELECTACTIVEAREA_YHIGH        L"Y-Haut"
#define LOCALIZED_SELECTACTIVEAREA_YLOW         L"Y-Bas"
#define LOCALIZED_SELECTACTIVEAREA_XHIGH        L"X-Droite"
#define LOCALIZED_SELECTACTIVEAREA_XLOW         L"X-Gauche"
#define LOCALIZED_SELECTACTIVEAREA_STEPSPERINCH L"Points Tortue par pouce"
#define LOCALIZED_SELECTACTIVEAREA_RESET        L"&RαZ"
#define LOCALIZED_SELECTACTIVEAREA_OK           LOCALIZED_GENERAL_OKBUTTON
#define LOCALIZED_SELECTACTIVEAREA_CANCEL       LOCALIZED_GENERAL_CANCELBUTTON

// The screensaver strings
#define LOCALIZED_SCREENSAVER_NAME              LOCALIZED_GENERAL_PRODUCTNAME
#define LOCALIZED_SCREENSAVER_DESCRIPTION       L"L'Θconomiseur d'Θcran de UniLogo"
#define LOCALIZED_SCREENSAVER_SETTINGS_TITLE    L"ParamΦtres de l'Θconomiseur d'Θcran de UniLogo"
#define LOCALIZED_SCREENSAVER_LOCATE            L"&Recherchez ..."
#define LOCALIZED_SCREENSAVER_FILE              L"Logo &fichier:"
#define LOCALIZED_SCREENSAVER_OK                LOCALIZED_GENERAL_OKBUTTON
#define LOCALIZED_SCREENSAVER_CANCEL            LOCALIZED_GENERAL_CANCELBUTTON

// The dialog box for selecting a Startup procedure
#define LOCALIZED_SELECTSTARTUP_CAPTION               L"SΘlectionnez une instruction de " LOCALIZED_ALTERNATE_STARTUP
#define LOCALIZED_SELECTSTARTUP_EXPLAINTEXT_UNDEFINED L"L'espace de travail n'a pas d'une liste d'instructions de " LOCALIZED_ALTERNATE_STARTUP L" dΘfinie, donc rien\nne se passera lorsque l'Θconomiseur d'Θcran est chargΘ.\nVeuillez sΘlectionner une procΘdure α exΘcuter lorsque le programme est chargΘ."
#define LOCALIZED_SELECTSTARTUP_EXPLAINTEXT_NOTLIST   L"La variable " LOCALIZED_ALTERNATE_STARTUP L" n'est pas une liste, donc rien\nne se passera lorsque l'Θconomiseur d'Θcran est chargΘ.\nVeuillez sΘlectionner une procΘdure α exΘcuter lorsque le programme est chargΘ."
#define LOCALIZED_SELECTSTARTUP_EXPLAINTEXT_EMPTY     L"Votre espace de travail a une liste d'instructions vide " LOCALIZED_ALTERNATE_STARTUP L" dΘfinie, donc rien\nne se passera lorsque l'Θconomiseur d'Θcran est chargΘ.\nVeuillez sΘlectionner une procΘdure α exΘcuter lorsque le programme est chargΘ."
#define LOCALIZED_SELECTSTARTUP_NOPROCEDURESDEFINED   L"Aucuns procΘdures ne sont dΘfinis"

// The warning dialog box when the user saves an empty workspace
#define LOCALIZED_EMPTYWORKSPACE_TITLE                LOCALIZED_GENERAL_PRODUCTNAME
#define LOCALIZED_EMPTYWORKSPACE_MESSAGE              L"Il n'y a aucune procΘdures, variables ou des listes de propriΘtΘ dΘfinies,\ndonc l'espace de travail sera enregistrΘ comme un fichier vide.\n\nVous voulez enregistrer l'espace de travail de toute faτon?"

//
// Menu options in the popup menu
//
#define LOCALIZED_POPUP_COPY                     L"Copier"
#define LOCALIZED_POPUP_CUT                      L"Couper"
#define LOCALIZED_POPUP_PASTE                    L"Coller"
#define LOCALIZED_POPUP_DELETE                   L"Effacer"
#define LOCALIZED_POPUP_UNDO                     L"Annuler"
#define LOCALIZED_POPUP_REDO                     L"RΘtablir"
#define LOCALIZED_POPUP_SELECTALL                L"SΘlectionner tout"
#define LOCALIZED_POPUP_HELP                     L"Recherche thΘmatique"
#define LOCALIZED_POPUP_REMOVELINES              L"Remove Selected Lines" // NOT_YET_LOCALIZED

//
// The menu options on the editor
//
#define LOCALIZED_EDITOR_TITLE                   L"Editeur"

#define LOCALIZED_EDITOR_FILE                    L"&Espace de travail"
#define LOCALIZED_EDITOR_FILE_SAVEANDEXIT        L"&InterprΘter et Quitter\tCtrl+D"
#define LOCALIZED_EDITOR_FILE_SAVETOWORKSPACE    L"E&nregistrer"
#define LOCALIZED_EDITOR_FILE_PRINT              L"&Imprimer..."
#define LOCALIZED_EDITOR_FILE_EXIT               L"&Quitter"

#define LOCALIZED_EDITOR_EDIT                    L"&Edition"
#define LOCALIZED_EDITOR_EDIT_UNDO               L"&Annuler frappe\tCtrl+Z"
#define LOCALIZED_EDITOR_EDIT_REDO               L"&RΘtablir\tCtrl+Y"
#define LOCALIZED_EDITOR_EDIT_CUT                L"&Couper\tCtrl+X"
#define LOCALIZED_EDITOR_EDIT_COPY               L"C&opier\tCtrl+C"
#define LOCALIZED_EDITOR_EDIT_PASTE              L"&Coller\tCtrl+V"
#define LOCALIZED_EDITOR_EDIT_DELETE             L"&Effacer\tDel"
#define LOCALIZED_EDITOR_EDIT_CLEARALL           L"E&ffacer Tout\tCtrl+Del"
#define LOCALIZED_EDITOR_EDIT_SELECTALL          L"&SΘlectionner tout\tCtrl+A"

#define LOCALIZED_EDITOR_SEARCH                  L"&Outils"
#define LOCALIZED_EDITOR_SEARCH_FIND             L"Re&chercher...\tCtrl+F"
#define LOCALIZED_EDITOR_SEARCH_REPLACE          L"&Remplacer...\tCtrl+H"
#define LOCALIZED_EDITOR_SEARCH_NEXT             L"&Suivant\tF3"

#define LOCALIZED_EDITOR_SET                     L"&Options"
#define LOCALIZED_EDITOR_SET_FONT                L"&Police..."

#define LOCALIZED_EDITOR_TEST                    L"Test" // NOT_YET_LOCALIZED
#define LOCALIZED_EDITOR_TEST_RUN_SELECTION      L"&Run Selection\tCtrl+R" // NOT_YET_LOCALIZED

#define LOCALIZED_EDITOR_HELP                    L"&Aide"
#define LOCALIZED_EDITOR_HELP_INDEX              L"&Index" // NOT_YET_LOCALIZED
#define LOCALIZED_EDITOR_HELP_EDITOR             L"&Editeur"
#define LOCALIZED_EDITOR_HELP_TOPICSEARCH        L"&Recherche thΘmatique\tF1"


//
// The strings in the "You have unsaved changes" dialog
//
#define LOCALIZED_UNSAVEDCHANGES                LOCALIZED_YOUHAVEUNSAVEDCHANGES // NOT_YET_LOCALIZED
#define LOCALIZED_UNSAVEDCHANGES_SAVEANDEXIT    L"&Enregistrer et quitter" // 
#define LOCALIZED_UNSAVEDCHANGES_DONTSAVE       L"&Ne pas enregistrer" // 
#define LOCALIZED_UNSAVEDCHANGES_CANCEL         LOCALIZED_GENERAL_CANCELBUTTON // NOT_YET_LOCALIZED
#define LOCALIZED_UNSAVEDCHANGES_MESSAGE1       L"Il y a des changements non enregistrΘs dans l'espace de travail. Si vous quittez sans enregistrer les changements seront perdus.  " // 
#define LOCALIZED_UNSAVEDCHANGES_MESSAGE2       L"Voulez-vous enregistrer les changements avant de quitter?"  // 


//
// Strings on the Commander window
//
#define LOCALIZED_COMMANDER                     L"Poste de commande"
#define LOCALIZED_COMMANDER_HALT                L"ArrΩt"
#define LOCALIZED_COMMANDER_TRACE               L"Suivi"
#define LOCALIZED_COMMANDER_NOTRACE             L"Fin Suivi"
#define LOCALIZED_COMMANDER_PAUSE               L"Pause"
#define LOCALIZED_COMMANDER_STATUS              L"Etat"
#define LOCALIZED_COMMANDER_NOSTATUS            L"Fin Etat"
#define LOCALIZED_COMMANDER_STEP                L"Pas"
#define LOCALIZED_COMMANDER_UNSTEP              L"Fin Pas"
#define LOCALIZED_COMMANDER_RESET               L"RαZ"
#define LOCALIZED_COMMANDER_EXECUTE             L"ExΘcute"
#define LOCALIZED_COMMANDER_EDALL               L"Edite tout" // 

//
// Strings on the Status window
//
#define LOCALIZED_STATUS                        L"Etat"
#define LOCALIZED_STATUS_PEN                    L"Crayon"
#define LOCALIZED_STATUS_CONTACT                L"Position:"
#define LOCALIZED_STATUS_WIDTH                  L"Largeur:"
#define LOCALIZED_STATUS_STYLE                  L"Style:"
#define LOCALIZED_STATUS_ORIENTATION            L"Orientation"
#define LOCALIZED_STATUS_PITCH                  L"Cabr:"
#define LOCALIZED_STATUS_HEADING                L"Cap:"
#define LOCALIZED_STATUS_ROLL                   L"Incl:"
#define LOCALIZED_STATUS_TURTLE                 L"Tortue"
#define LOCALIZED_STATUS_POSITION               L"Position(XYZ):"
#define LOCALIZED_STATUS_WHICH                  L"Laquelle:"
#define LOCALIZED_STATUS_VISIBILITY             L"VisibilitΘ:"
#define LOCALIZED_STATUS_COLOR                  L"Couleurs"
#define LOCALIZED_STATUS_PENCOLOR               L"Crayon(RVB):"
#define LOCALIZED_STATUS_FLOODCOLOR             L"Remplis(RVB):"
#define LOCALIZED_STATUS_SCREENCOLOR            L"Ecran(RVB):"
#define LOCALIZED_STATUS_KERNEL                 L"Noyau"
#define LOCALIZED_STATUS_CALLS                  L"Appels:"
#define LOCALIZED_STATUS_PEAKMEMORY             L"MΘmoire:"

#define LOCALIZED_STATUS_PENREVERSE     L"Inverse"
#define LOCALIZED_STATUS_PENNORMAL      L"Normal"
#define LOCALIZED_STATUS_PENERASE       L"Efface"
#define LOCALIZED_STATUS_PENUP          L"Haut"
#define LOCALIZED_STATUS_PENDOWN        L"Bas"
#define LOCALIZED_STATUS_PENSHOWN       L"Visible"
#define LOCALIZED_STATUS_PENHIDDEN      L"CachΘ"
#define LOCALIZED_STATUS_POLYGONS       L"Polygones" // 
#define LOCALIZED_STATUS_VECTORS        L"Vecteurs"
#define LOCALIZED_STATUS_NODES          L"Noeuds"
#define LOCALIZED_STATUS_NOT_APPLICABLE L"N/A" // NOT_YET_LOCALIZED

//
// Strings on the Erase|Edit Procedure dialog box
//
#define LOCALIZED_SELECTPROCEDURE_OK            LOCALIZED_GENERAL_OKBUTTON
#define LOCALIZED_SELECTPROCEDURE_CANCEL        LOCALIZED_GENERAL_CANCELBUTTON
#define LOCALIZED_SELECTPROCEDURE_ALL           L"&Toutes"
#define LOCALIZED_ERASEPROCEDURE                L"ProcΘdure α effacer"
#define LOCALIZED_EDITPROCEDURE                 L"ProcΘdure α Θditer"


//
// Strings on the Color Picker Dialog box
//
#define LOCALIZED_SETCOLOR                     L"Couleur"
#define LOCALIZED_SETCOLOR_PENCOLOR            L"Couleur Crayon"
#define LOCALIZED_SETCOLOR_FLOODCOLOR          L"Couleur de Remplissage"
#define LOCALIZED_SETCOLOR_SCREENCOLOR         L"Couleur Fond"
#define LOCALIZED_SETCOLOR_RED                 L"Rouge"
#define LOCALIZED_SETCOLOR_GREEN               L"Vert"
#define LOCALIZED_SETCOLOR_BLUE                L"Bleu"
#define LOCALIZED_SETCOLOR_OK                  LOCALIZED_GENERAL_OKBUTTON
#define LOCALIZED_SETCOLOR_CANCEL              LOCALIZED_GENERAL_CANCELBUTTON
#define LOCALIZED_SETCOLOR_APPLY               LOCALIZED_GENERAL_APPLYBUTTON // NOT_YET_LOCALIZED

//
// Strings on the Pen Size Picker Dialog box
//
#define LOCALIZED_SETPENSIZE                   L"Taille Crayon"
#define LOCALIZED_SETPENSIZE_SIZE              L"Dimension"
#define LOCALIZED_SETPENSIZE_OK                LOCALIZED_GENERAL_OKBUTTON
#define LOCALIZED_SETPENSIZE_CANCEL            LOCALIZED_GENERAL_CANCELBUTTON
#define LOCALIZED_SETPENSIZE_APPLY             LOCALIZED_GENERAL_APPLYBUTTON // NOT_YET_LOCALIZED


//
// Strings on the "About UniLogo" Dialog box
//
#define LOCALIZED_ABOUTUNI                     L"A propos de " LOCALIZED_GENERAL_PRODUCTNAME
#define LOCALIZED_ABOUTUNI_VERSION             L"Version" // NOT_YET_LOCALIZED
#define LOCALIZED_ABOUTUNI_GUI                 L"" // NOT_YET_LOCALIZED
#define LOCALIZED_ABOUTUNI_CORE                L"" // NOT_YET_LOCALIZED
#define LOCALIZED_ABOUTUNI_INSTALLER           L"" // NOT_YET_LOCALIZED
#define LOCALIZED_ABOUTUNI_ADVENTURE           L"" // NOT_YET_LOCALIZED
#define LOCALIZED_ABOUTUNI_SPECIALTHANKS       L"" // NOT_YET_LOCALIZED
#define LOCALIZED_ABOUTUNI_GPL                 LOCALIZED_GENERAL_PRODUCTNAME L"" // NOT_YET_LOCALIZED
#define LOCALIZED_ABOUTUNI_NEWSGROUP           L"" // NOT_YET_LOCALIZED
#define LOCALIZED_ABOUTUNI_MULTIMEDIALOGIC     L"" //
#define LOCALIZED_ABOUTUNILOGO_OK                  LOCALIZED_GENERAL_OKBUTTON // NOT_YET_LOCALIZED


//
// Strings on the "About UNI" Dialog box
//
#define LOCALIZED_ABOUTMS                      L""
#define LOCALIZED_ABOUTMS_UNI                  L"" // NOT_YET_LOCALIZED
#define LOCALIZED_ABOUTMS_CONSIDERDONATING     L"" // NOT_YET_LOCALIZED
#define LOCALIZED_ABOUTMS_OK                   LOCALIZED_GENERAL_OKBUTTON // NOT_YET_LOCALIZED


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

#define LOCALIZED_CHANGESINEDITORMAYBELOST  L"Des modifications dans l'Θditeur peuvent Ωtre perdues.\n\nVoulez-vous vraiment quitter " LOCALIZED_GENERAL_PRODUCTNAME L"?" // 
#define LOCALIZED_EDITSESSIONISRUNNING      L"L'Θditeur est dΘjα ouvert" // 

#define LOCALIZED_COULDNOTWRITEBMP            L"Impossible d'Θcrire .bmp" //
#define LOCALIZED_COULDNOTOPENBMP             L"Impossible d'ouvrir .bmp" // 
#define LOCALIZED_COULDNOTCREATEBMP           L"Ne peut pas crΘer un bitmap Windows 3.0" // 
#define LOCALIZED_NOTVALIDBMP                 L"Ce n'est pas un bitmap Windows 3.0 valide" // 

#define LOCALIZED_YOUHAVEUNSAVEDCHANGES         L"Non enregistrΘ"
#define LOCALIZED_FILENEWWILLERASEWORKSPACE     L"Nouveau supprime toutes les dΘfinitions.\n\nContinuer avec nouveau?"
#define LOCALIZED_FILELOADMAYOVERWRITEWORKSPACE L"Le fichier sera fusionnΘ dans l'espace de travail\net peut Θcraser des modifications non enregistrΘesand may overwrite your unsaved changes.\n\nContinuer le chargement?" // 
#define LOCALIZED_FILEOPENWILLERASEWORKSPACE    L"Le chargement du fichier va Θcraser l'espace de travail.\n\nContinuer le chargement?"

#define LOCALIZED_EDITORISOPEN                  L"Savez-vous que l'Θditeur est ouvert?\n\nDes changements dans cette session ne sont pas enregistrΘs." // 

#define LOCALIZED_ERROR_CANTREADFILE            L"Impossible de lire le fichier  \"%s\" sur le disque" // 
#define LOCALIZED_ERROR_CANTWRITEFILE           L"Impossible d'Θcrire le fichier \"%s\" tsur le disque" // 

#define LOCALIZED_SAVETOWORKSPACE                L"Sauve l'espace de travail"
#define LOCALIZED_CONTENTSCHANGED                L"Changement du contenu"
#define LOCALIZED_SAVECHANGEDCONTENTSTOWORKSPACE L"Le contenu a ΘtΘ modifiΘ. Voulez-vous interprΘter l'espace de travail?"



#define LOCALIZED_CURSORISATLASTGOODDEFINITION  L"Le curseur est placΘ aprΦs la derniΦre bonne dΘfinition.\nRegarder la fenΩtre de commande pour le message d'erreur."
#define LOCALIZED_RETURNTOEDIT                  L"Retour α l'Θditeur?"

#define LOCALIZED_EDITFAILEDTOLOAD              L"L'Θditeur n'a pas rΘussi le chargement"

#define LOCALIZED_ERRORINFILETITLE              L"Error in File" // NOT_YET_LOCALIZED
#define LOCALIZED_ERRORINFILEMESSAGE            L"There was a problem loading the contents of the file \"%s\".\n\nCheck the Commander for possible error message.\n\nDo you want to open the file in the editor to see the error?" // NOT_YET_LOCALIZED

#define LOCALIZED_CANNOTALLOCATESCREEN          L"Unable to allocate memory for the screen window.  You may have requested a width and height that exceeds the amount of available video RAM.\n\n" LOCALIZED_GENERAL_PRODUCTNAME " can't continue." // NOT_YET_LOCALIZED


// 
//  Strings used in the File-Open filters
//
#define LOCALIZED_FILE_LOAD_DIALOG_TITLE    L"Select the Logo program to load (merge into workspace)" // NOT_YET_LOCALIZED
#define LOCALIZED_FILE_OPEN_DIALOG_TITLE    L"Select the Logo program to open (replace the workspace with)" // NOT_YET_LOCALIZED
#define LOCALIZED_FILE_SAVE_DIALOG_TITLE    L"Select the file to which the workspace will be saved" // NOT_YET_LOCALIZED
#define LOCALIZED_BITMAP_OPEN_DIALOG_TITLE  L"Select the image to load" // NOT_YET_LOCALIZED
#define LOCALIZED_BITMAP_SAVE_DIALOG_TITLE  L"Select the file to which the active area will be saved" // NOT_YET_LOCALIZED

#define LOCALIZED_LOGO_FILE_EXTENSION L"lgo"
#define LOCALIZED_FILEFILTER_ALLFILES L"Tous les fichiers (*.*)|*.*"
#define LOCALIZED_FILEFILTER_LOGO     L"Fichiers Logo (*.lgo)|*.lgo|" LOCALIZED_FILEFILTER_ALLFILES
#define LOCALIZED_FILEFILTER_IMAGE    L"Fichiers Bitmap (*.bmp)|*.bmp|Fichiers GIF (*.gif)|*.gif|" LOCALIZED_FILEFILTER_ALLFILES



//
// strings seen when tracing is enabled
//
#define LOCALIZED_TRACING_STOPS             L" arrΩte\n"
#define LOCALIZED_TRACING_OUTPUTS           L" sort %s\n"
#define LOCALIZED_TRACING_MAKE              L"Donne %s %s"  // 
#define LOCALIZED_TRACING_PPROP             L"Dprop %s %s %s" // 
#define LOCALIZED_TRACING_LOCATION          L" dans %s\n%s"

//
// strings seen when single-stepping execution
//
#define LOCALIZED_STEPPING                  L"Simple pas" // 

//
// Notification when defining a procedure with TO in the commander
//
#define LOCALIZED_PROCEDUREDEFINED  L"%s dΘfinie\n"


//
// Words that represent the pen's mode
//
#define LOCALIZED_PENMODE_ERASE    L"erase" //
#define LOCALIZED_PENMODE_REVERSE  L"reverse" // 
#define LOCALIZED_PENMODE_PAINT    L"paint" // 

//
// Error message thrown by Logo
//
#define LOCALIZED_ERROR_FATALINTERNAL          L"Logo: erreur interne fatale"
#define LOCALIZED_ERROR_OUTOFMEMORYUNREC       L"Logo: Plus assez de mΘmoire (fatale)"
#define LOCALIZED_ERROR_OUTOFMEMORY            L"Plus assez de mΘmoire"
#define LOCALIZED_ERROR_STACKOVERFLOW          L"DΘbordement de pile"
#define LOCALIZED_ERROR_TURTLEOUTOFBOUNDS      L"Tortue en dehors des limites"
#define LOCALIZED_ERROR_BADGRAPHINIT           L"Impossible d'initialiser le graphisme"
#define LOCALIZED_ERROR_BADDATA                L"%p n'aime pas l'argument %s"
#define LOCALIZED_ERROR_DIDNTOUTPUT            L"%p ne donne pas de valeur α %p"
#define LOCALIZED_ERROR_NOTENOUGHINPUTS        L"Pas assez d'arguments pour %p"
#define LOCALIZED_ERROR_TOOMUCH                L"Trop de choses entre les ( )"
#define LOCALIZED_ERROR_DONTSAYWHATTODOWITH    L"Vous ne dites pas ce qu'il faut faire de %s"
#define LOCALIZED_ERROR_PARENMISMATCH          L"Trop de '('"
#define LOCALIZED_ERROR_NOVALUE                L"%s n'a pas de valeur"
#define LOCALIZED_ERROR_UNEXPECTEDPAREN        L"')' inattendue"
#define LOCALIZED_ERROR_UNEXPECTEDBRACKET      L"']' inattendue"
#define LOCALIZED_ERROR_UNEXPECTEDBRACE        L"'}' inattendue"
#define LOCALIZED_ERROR_DONTKNOWHOWTO          L"Je ne connais pas la procΘdure %p"
#define LOCALIZED_ERROR_NOCATCHTAG             L"Pas de ATTRAPE (CATCH) correspondant α la balise (tag) %p"
#define LOCALIZED_ERROR_ALREADYDEFINED         L"%p est dΘjα dΘfinie"
#define LOCALIZED_ERROR_STOPPING               L"ArrΩt..."
#define LOCALIZED_ERROR_ALREADYDRIBBLING       L"DΘjα en train d'appliquer TRANSCRIPTION (DRIBBLE)"
#define LOCALIZED_ERROR_FILESYSTEM                   L"Erreur systΦme de fichiers: %p"
#define LOCALIZED_ERROR_FILESYSTEM_CANTOPEN          L"Impossible d'ouvrir fichier"
#define LOCALIZED_ERROR_FILESYSTEM_CANTOPEN2         L"Impossible d'ouvrir fichier: %t"
#define LOCALIZED_ERROR_FILESYSTEM_ALREADYOPEN       L"Fichier dΘjα ouvert"
#define LOCALIZED_ERROR_FILESYSTEM_NOTOPEN           L"Fichier non ouvert"
#define LOCALIZED_ERROR_FILESYSTEM_CANTCREATEEDITOR  L"Impossible de crΘer un fichier Θditeur" // 
#define LOCALIZED_ERROR_FILESYSTEM_CANTSTARTEDITOR   L"Impossible de lancer l'Θditeur"  // 
#define LOCALIZED_ERROR_FILESYSTEM_CANTREADEDITOR    L"Impossible de lire un fichier Θditeur"  // 
#define LOCALIZED_ERROR_IFWARNING              L"Vous voulez sans doute dire SISINON (IFELSE) et non SI (IF)"
#define LOCALIZED_ERROR_SHADOWWARNING          L"%p masquΘe dans un appel de procΘdure"
#define LOCALIZED_ERROR_USER                   L"RENVOIE (THROW) \"Erreur" // 
#define LOCALIZED_ERROR_ISPRIMITIVE            L"%p est une primitive"
#define LOCALIZED_ERROR_TONOTINSIDE            L"Impossible d'utiliser POUR (TO) dans une procΘdure"
#define LOCALIZED_ERROR_ATTOPLEVEL             L"Ne peux utiliser %p que dans une procΘdure" // 
#define LOCALIZED_ERROR_ATTOPLEVEL2            L"Ne peux utiliser RETOURNE (OUTPUT) ou ARR╩TE (STOP) que dans une procΘdure"
#define LOCALIZED_ERROR_NOTEST                 L"%p sans TESTE (TEST)"
#define LOCALIZED_ERROR_BADMACROOUTPUT         L"La macro retourne %s au lieu d'une liste"
#define LOCALIZED_ERROR_DEEPEND                L"FIN (END) dans une instruction multi-ligne"
#define LOCALIZED_ERROR_DEEPENDIN              L"FIN (END) dans une instruction multi-ligne dans %p"
#define LOCALIZED_ERROR_UNKNOWN                L"Unknown error condition - internal error." // NOT_YET_LOCALIZED
#define LOCALIZED_PAUSING                      L"Pause..."


// UniLogo-specific error messages.
#define LOCALIZED_ERROR_INVALIDSTATEFORINSTRUCTION L"Invalid state for instruction: %p" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_MODE_ON_SPRITE             L"cannot set the mode of a turtle with a rotating bitmap" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_BITMAPSPECIALTUTRLE        L"cannot make a special turtle use a rotating bitmap" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_BITMAPCLIPBOARD            L"cannot use the clipboard as a rotating bitmap" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_SPECIALFORM                L"%p doesn't like %p as input because it has a special form" // NOT_YET_LOCALIZED

//
// Error messages displayed in Message Boxes.
//
#define LOCALIZED_ERROR                      L"Erreur"
#define LOCALIZED_ERROR_BADINPUT             L"EntrΘe invalide" // 
#define LOCALIZED_ERROR_BADINPUTNOTPAIRED    L"Input is not paired" // NOT_YET_LOCALIZED

#define LOCALIZED_ERROR_CANTOPENPORT         L"Impossible d'ouvrir le port" // 
#define LOCALIZED_ERROR_CANTCLOSEPORT        L"Impossible de fermer le port" // 
#define LOCALIZED_ERROR_CANTFLUSHPORT        L"Impossible de purger le port" // 
#define LOCALIZED_ERROR_CANTDCBONPORT        L"Could not build dcb on port" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_CANTSETPORT          L"Impossible de paramΘtrer le port" // 
#define LOCALIZED_ERROR_PORTALREADYOPEN      L"Le port est dΘjα ouvert" // 
#define LOCALIZED_ERROR_PORTNOTOPEN          L"Le port n'est pas ouvert" // 

#define LOCALIZED_ERROR_WINDOWALREADYEXISTS   L"%s existe dΘjα"
#define LOCALIZED_ERROR_WINDOWDOESNOTEXIST    L"%s n'existe pas"

#define LOCALIZED_ERROR_DLLNOTLOADED          L"DLL non chargΘe" // 
#define LOCALIZED_ERROR_DLLLOADFAILED         L"Echec chargement DLL" // 
#define LOCALIZED_ERROR_DLLINVALIDDATATYPE    L"Type de donnΘe en entrΘe invalide" //
#define LOCALIZED_ERROR_DLLINVALIDOUTPUTTYPE  L"Type de donnΘe en sortie invalide" // 
#define LOCALIZED_ERROR_DLLFUNCTIONNOTFOUND   L"Fonction introuvable" // 
#define LOCALIZED_ERROR_DLLTYPEDATANOTPAIRED  L"Not all Type/Data inputs are paired" // NOT_YET_LOCALIZED

#define LOCALIZED_ERROR_NETWORK               L"Erreur rΘseau" // 
#define LOCALIZED_ERROR_NETWORKRECEIVE        L"Erreur rΘseau en rΘception" // 
#define LOCALIZED_ERROR_NETWORKSEND           L"Erreur rΘseau en Θmission" // 
#define LOCALIZED_ERROR_NETWORKSHUTDOWN       L"Erreur inattendue, coupure du rΘseau" // 
#define LOCALIZED_ERROR_NETWORKNOTSTARTED     L"Non dΘmarrΘ" // 
#define LOCALIZED_ERROR_NETWORKALREADYSTARTED L"DΘjα dΘmarrΘ" // 
#define LOCALIZED_ERROR_NETWORKALREADYON      L"DΘjα connectΘ" // 
#define LOCALIZED_ERROR_NETWORKALREADYOFF     L"DΘjα dΘconnectΘ" // 

// The rest of the network errors shouldn't really be seen -- may be okay not to localize
#define LOCALIZED_ERROR_NETWORKNAMETOOLONG         L"Nom trop long" // 
#define LOCALIZED_ERROR_NETWORKNOTINITIALIZED      L"Non initialisΘ" // 
#define LOCALIZED_ERROR_NETWORKSYSTEMNOTREADY      L"Le systΦme n'est pas prΩt" // 
#define LOCALIZED_ERROR_NETWORKVERSIONNOTSUPPORTED L"Cette version n'est pas supportΘe" // 
#define LOCALIZED_ERROR_NETWORKSENDAFTERSHUTDOWN   L"Envoi impossible aprΦs coupure socket" // 
#define LOCALIZED_ERROR_NETWORKINTERRUPTED         L"Appel systΦme interrompu" // 
#define LOCALIZED_ERROR_NETWORKHOSTNOTFOUNDAUTH    L"Authoritative Answer: Host not found" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKHOSTNOTFOUNDNONAUTH L"Non-Authoritative: Host not found. See NETSTARTUP" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKNOTRECOVERABLE      L"Erreur irrΘcupΘrable" // 
#define LOCALIZED_ERROR_NETWORKNODATA              L"Pas d'enregistrement disponible" // 
#define LOCALIZED_ERROR_NETWORKBADFILENUMBER       L"Mauvais numΘro de fichier" //
#define LOCALIZED_ERROR_NETWORKWOULDBLOCK          L"Operation would block" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKNOWINPROGRESS       L"OpΘration en cours de dΘmarrage" // 
#define LOCALIZED_ERROR_NETWORKALREADYINPROGRESS   L"OpΘration dΘjα en cours" // 
#define LOCALIZED_ERROR_NETWORKBADADDRESS          L"Mauvaise addresse" // 
#define LOCALIZED_ERROR_NETWORKNEEDDESTADDRESS     L"Adresse de destination demandΘe" // 
#define LOCALIZED_ERROR_NETWORKMESSAGETOOLONG      L"Message trop long" // 
#define LOCALIZED_ERROR_NETWORKPFNOTSUPPORTED      L"Famille de protocole non supportΘe" // 
#define LOCALIZED_ERROR_NETWORKDIRNOTEMPTY         L"RΘpertoire non vide" // 
#define LOCALIZED_ERROR_NETWORKAPPLIMITREACHED     L"Limite de l'application atteinte" // 
#define LOCALIZED_ERROR_NETWORKDISKQUOTA           L"Quota disque dΘpassΘ" // 
#define LOCALIZED_ERROR_NETWORKINVALIDARGUMENTS    LOCALIZED_ERROR_BADINPUT // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKTOOMANYFILES        L"Trop de fichiers ouverts" // 
#define LOCALIZED_ERROR_NETWORKACCESSDENIED        L"AccΦs refusΘ"
#define LOCALIZED_ERROR_NETWORKNOTASOCKET          L"Socket operation on non-socket" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKADDRNOTAVAILABLE    L"Impossible d'assigner l'adresse demandΘe" // 
#define LOCALIZED_ERROR_NETWORKADDRINUSE           L"Adresse dΘjα utilisΘe" // 
#define LOCALIZED_ERROR_NETWORKAFNOTSUPPORTED      L"Address family not supported by protocol family" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKTIMEDOUT            L"Temps de connection dΘpassΘ" // 
#define LOCALIZED_ERROR_NETWORKTYPENOTSUPPORTED    L"Tye de socket non supportΘ" // 
#define LOCALIZED_ERROR_NETWORKPROTONOTSUPPORTED   L"Protocole non supportΘ" // 
#define LOCALIZED_ERROR_NETWORKNOBUFFER            L"Tampon plein" // 
#define LOCALIZED_ERROR_NETWORKALREADYCONNECTED    L"Socket dΘjα connectΘ" // 
#define LOCALIZED_ERROR_NETWORKNOTCONNECTED        L"Socket non connectΘ" // 
#define LOCALIZED_ERROR_NETWORKBADPROTOOPT         L"Option de protocole non valide" // 
#define LOCALIZED_ERROR_NETWORKCONNECTIONRESET     L"Connection reset by peer" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKCONNECTIONABORT     L"Le programme a causΘ l'abandon de la connection" // 
#define LOCALIZED_ERROR_NETWORKISDOWN              L"Le rΘseau est coupΘ" // 
#define LOCALIZED_ERROR_NETWORKRESET               L"Le rΘseau a ΘtΘ rΘinitialisΘ" // 
#define LOCALIZED_ERROR_NETWORKCONNECTIONREFUSED   L"Connection refusΘe" // 
#define LOCALIZED_ERROR_NETWORKHOSTISDOWN          L"Host is down" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKHOSTISUNREACHABLE   L"Host is unreachable" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKBADPROTOTYPE        L"Protocol is wrong type for socket" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKBADOPNOTSUPPORTED   L"Operation not supported on socket" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKUNREACHABLE         L"No path to remote host was found" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKTOOMANYREFS         L"Trop de rΘfΘrences" // 

#define LOCALIZED_ERROR_POLYSTART               L"Erreur DΘbutPoly" // 
#define LOCALIZED_ERROR_POLYSTARTALREADYSTARTED L"Il y a dΘjα un Polygone en cours" // 

#define LOCALIZED_ERROR_POLYEND                 L"Erreur FinPoly" // 
#define LOCALIZED_ERROR_POLYENDNOTSTARTED       L"Aucun Polygone n'est dΘmarrΘ" // 
#define LOCALIZED_ERROR_POLYENDNEED3VECTORS     L"Il faut au moins 3 vecteurs pour dΘfinir un polygone"  // 

#define LOCALIZED_ERROR_SOUND                 L"Erreur Son" // 

#define LOCALIZED_ERROR_MIDI                  L"Erreur Midi"
#define LOCALIZED_ERROR_MIDIINVALIDDEVICE     L"PΘriphΘrique MIDI non valide" // 
#define LOCALIZED_ERROR_MIDIALREADYOPEN       L"DΘja ouvert"
#define LOCALIZED_ERROR_MIDINOTOPEN           L"DΘja fermΘ"

#define LOCALIZED_ERROR_CLIPBOARDISEMPTY      L"Le presse-papier est vide" // 

#define LOCALIZED_ERROR_MCI                   L"Erreur MCI"

#define LOCALIZED_ERROR_TIMERNOTFOUND         L"Chrono non trouvΘ"

#define LOCALIZED_ERROR_HHCTRLNOTLOADED       L"L'aide en ligne n'est pas disponible car hhctrl.ocx ne peut Ωtre chargΘ."  // 

#define LOCALIZED_ERROR_BADCOMMANDLINE        L"Ligne de commande non valide"  // 

#define LOCALIZED_ERROR_TMPNOTDEFINED         L"La variable d'environnement TMP est non dΘfinie ou non valide.\n" LOCALIZED_GENERAL_PRODUCTNAME L" va essayer d'utiliser C:\\ pour stocker les fichiers temporaires" // 

#define LOCALIZED_ERROR_GIFSAVEFAILED         L"ProblΦme pour crΘer un GIF, vΘrifier la mΘmoire et l'espace disque" // 
#define LOCALIZED_ERROR_GIFREADFAILED         L"Problem Reading GIF, check memory and diskspace" // NOT_YET_LOCALIZED

#define LOCALIZED_ERROR_BITMAPINDEXOUTOFRANGE  L"Index BitMap hors limite" // 
#define LOCALIZED_ERROR_BITMAPCUTFAILED        L"Echec Coupe, probablement pas assez de mΘmoire" // 

#define LOCALIZED_ERROR_BITMAPNOTHINGTOPASTE    L"Rien α coller"  // 
#define LOCALIZED_ERROR_BITMAPINDEXISNOTBITMAP  L"BitMap at Index must be initialized with a bitmap"  // NOT_YET_LOCALIZED

#define LOCALIZED_ERROR_TURTLEHASNOPICTURE      L"La TortueT %d n'a pas d'image, arrΩt" // 

#define LOCALIZED_ERROR_FONTNOTFOUND            L"Sorry, no font named %s was found.  Choose one of the following:\n" // NOT_YET_LOCALIZED

#define LOCALIZED_ERROR_PRINTERCANTSCALE        L"Print driver does not support this function"  // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_CANTDRAWIMAGE           L"Cannot draw image" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_CANTEXTRACTIMAGE        L"Cannot extract image" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_SUBCODE                 L"Sub Code" // NOT_YET_LOCALIZED

//
// Strings in the dialog box for reading from "stdin"
//
#define LOCALIZED_INPUT         L"EntrΘe:"
#define LOCALIZED_PROMPT_TO     L"Mode POUR (TO) - Annuler pour FIN (END)"
#define LOCALIZED_PROMPT_LIST   L"Mode List Annuler pour HALT"
#define LOCALIZED_PROMPT_PAUSE  L"Mode Pause - Annuler pour CONTINUE"
#define LOCALIZED_PROMPT_INPUT  L"Mode EntrΘe - Annuler pour HALT"

//
// Messages shown by the FILE API.
//
#define LOCALIZED_FILE_CHDIRSUCCEEDED      L"Changement vers \"%s\""
#define LOCALIZED_FILE_CHDIRFAILED         L"Impossible changement vers le rΘpertoire \"%s\""
#define LOCALIZED_FILE_POPPEDTO            L"DΘsempiler dans \"%s\""
#define LOCALIZED_FILE_MKDIRSUCCEEDED      L"Le rΘpertoire \"%s\" est crΘΘ"
#define LOCALIZED_FILE_MKDIRFAILED         L"Impossible de crΘer le rΘpertoire \"%s\""
#define LOCALIZED_FILE_RMDIRSUCCEEDED      L"Le rΘpertoire \"%s\" est supprimΘ"
#define LOCALIZED_FILE_RMDIRFAILED         L"Imposible de supprimer le rΘpertoire \"%s\""
#define LOCALIZED_FILE_RMDIRFAILEDNOEXIST  L"Le rΘpertoire n'existe pas"
#define LOCALIZED_FILE_RMDIRFAILEDNOTEMPTY L"Le rΘpertoire est-il vide?"


//
// The default title of a Logo picture when it is printed
//
#define LOCALIZED_BITMAPPRINTOUTTITLE       L"Image Logo" // 

//
// Other strings
//
#define LOCALIZED_ACTIVEAREA    L"Zone Active"
#define LOCALIZED_INFORMATION   L"Information" // 
#define LOCALIZED_WARNING       L"Attention" // 
#define LOCALIZED_UNTITLED      L"Sans titre" // 
#define LOCALIZED_UNKNOWN       L"Inconnu" // 

// The text which is shown when the Unbound node is formatted.
// This happens when a macro outputs nothing (instead of a list)
#define LOCALIZED_UNBOUND       L"nothing" // NOT_YET_LOCALIZED

// The title of the Editor's Find/Replace dialog box
#define LOCALIZED_EDITOR_TITLE_FIND     L"Rechercher"
#define LOCALIZED_EDITOR_TITLE_REPLACE  L"Remplacer"

//
// The text that's displayed when the Editor's Search->Find fails.
//
#define LOCALIZED_STRINGTABLE_CANNOTFINDSTRING L"'%s' non trouvΘ"


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
#define LOCALIZED_COLOR_ALICEBLUE             L"Bleu Alice"
#define LOCALIZED_COLOR_ANTIQUEWHITE          L"Blanc antique"
#define LOCALIZED_COLOR_AQUA                  L"Vert d'eau"
#define LOCALIZED_COLOR_AQUAMARINE            L"Bleu vert"
#define LOCALIZED_COLOR_AZURE                 L"Azur"
#define LOCALIZED_COLOR_BEIGE                 L"Beige"
#define LOCALIZED_COLOR_BISQUE                L"Bisque"
#define LOCALIZED_COLOR_BLACK                 L"Noir"
#define LOCALIZED_COLOR_BLANCHEDALMOND        L"Amande blanchie"
#define LOCALIZED_COLOR_BLUE                  L"Bleu"
#define LOCALIZED_COLOR_BLUEVIOLET            L"Bleu violet"
#define LOCALIZED_COLOR_BROWN                 L"Brun"
#define LOCALIZED_COLOR_BURLYWOOD             L"Bois brut"
#define LOCALIZED_COLOR_CADETBLUE             L"Blue cadet"
#define LOCALIZED_COLOR_CHARTREUSE            L"Chartreuse"
#define LOCALIZED_COLOR_CHOCOLATE             L"Chocolat"
#define LOCALIZED_COLOR_CORAL                 L"Corail"
#define LOCALIZED_COLOR_CORNFLOWERBLUE        L"Bleu barbeau"
#define LOCALIZED_COLOR_CORNSILK              L"Barbe de ma∩s"
#define LOCALIZED_COLOR_CRIMSON               L"Cramoisi"
#define LOCALIZED_COLOR_CYAN                  L"Cyan"
#define LOCALIZED_COLOR_DARKBLUE              L"Bleu foncΘ"
#define LOCALIZED_COLOR_DARKCYAN              L"Cyan foncΘ"
#define LOCALIZED_COLOR_DARKGOLDENROD         L"Verge d'or foncΘ"
#define LOCALIZED_COLOR_DARKGRAY              L"Gris foncΘ"
#define LOCALIZED_COLOR_DARKGREEN             L"Vert foncΘ"
#define LOCALIZED_COLOR_DARKGREY              L"Gris foncΘ"
#define LOCALIZED_COLOR_DARKKHAKI             L"Kaki foncΘ"
#define LOCALIZED_COLOR_DARKMAGENTA           L"Magenta foncΘ"
#define LOCALIZED_COLOR_DARKOLIVEGREEN        L"Olive foncΘ"
#define LOCALIZED_COLOR_DARKORANGE            L"Orange foncΘ"
#define LOCALIZED_COLOR_DARKORCHID            L"OrchidΘe foncΘ"
#define LOCALIZED_COLOR_DARKRED               L"Rouge foncΘ"
#define LOCALIZED_COLOR_DARKSALMON            L"Saumon foncΘ"
#define LOCALIZED_COLOR_DARKSEAGREEN          L"Vert marin foncΘ"
#define LOCALIZED_COLOR_DARKSLATEBLUE         L"Bleu ardoise foncΘ"
#define LOCALIZED_COLOR_DARKSLATEGRAY         L"Gris ardoise foncΘ"
#define LOCALIZED_COLOR_DARKSLATEGREY         L"Gris ardoise foncΘ"
#define LOCALIZED_COLOR_DARKTURQUOISE         L"Turquoise foncΘ"
#define LOCALIZED_COLOR_DARKVIOLET            L"Violet foncΘ"
#define LOCALIZED_COLOR_DEEPPINK              L"Rose soutenu"
#define LOCALIZED_COLOR_DEEPSKYBLUE           L"Bleu ciel intense"
#define LOCALIZED_COLOR_DIMGRAY               L"Gris pΓle"
#define LOCALIZED_COLOR_DIMGREY               L"Gris pΓle"
#define LOCALIZED_COLOR_DODGERBLUE            L"BleutΘ"
#define LOCALIZED_COLOR_FIREBRICK             L"Brique feu"
#define LOCALIZED_COLOR_FLORALWHITE           L"Blanc floral"
#define LOCALIZED_COLOR_FORESTGREEN           L"Vert forΩt"
#define LOCALIZED_COLOR_FUCHSIA               L"Fuchsia"
#define LOCALIZED_COLOR_GAINSBORO             L"Gainsborough"
#define LOCALIZED_COLOR_GHOSTWHITE            L"Blanc fant⌠me"
#define LOCALIZED_COLOR_GOLD                  L"Or"
#define LOCALIZED_COLOR_GOLDENROD             L"Verge d'or"
#define LOCALIZED_COLOR_GRAY                  L"Gris"
#define LOCALIZED_COLOR_GREEN                 L"Vert"
#define LOCALIZED_COLOR_GREENYELLOW           L"Vert jaune"
#define LOCALIZED_COLOR_GREY                  L"Gris"
#define LOCALIZED_COLOR_HONEYDEW              L"MiellΘ"
#define LOCALIZED_COLOR_HOTPINK               L"Cuisse de nymphe Θmue"
#define LOCALIZED_COLOR_INDIANRED             L"Rouge indien"
#define LOCALIZED_COLOR_INDIGO                L"Indigo"
#define LOCALIZED_COLOR_IVORY                 L"Ivoire"
#define LOCALIZED_COLOR_KHAKI                 L"Kaki"
#define LOCALIZED_COLOR_LAVENDER              L"Lavande"
#define LOCALIZED_COLOR_LAVENDERBLUSH         L"Bleu lavande"
#define LOCALIZED_COLOR_LAWNGREEN             L"Vert herbe"
#define LOCALIZED_COLOR_LEMONCHIFFON          L"Mousseline citron"
#define LOCALIZED_COLOR_LIGHTBLUE             L"Bleu clair"
#define LOCALIZED_COLOR_LIGHTCORAL            L"Corail clair"
#define LOCALIZED_COLOR_LIGHTCYAN             L"Cyan clair"
#define LOCALIZED_COLOR_LIGHTGOLDENRODYELLOW  L"Verge d'or jaunΓtre"
#define LOCALIZED_COLOR_LIGHTGRAY             L"Gris clair"
#define LOCALIZED_COLOR_LIGHTGREEN            L"Vert clair"
#define LOCALIZED_COLOR_LIGHTGREY             L"Gris clair"
#define LOCALIZED_COLOR_LIGHTPINK             L"Rose clair"
#define LOCALIZED_COLOR_LIGHTSALMON           L"Saumon clair"
#define LOCALIZED_COLOR_LIGHTSEAGREEN         L"Vert marin clair"
#define LOCALIZED_COLOR_LIGHTSKYBLUE          L"Bleu ciel clair"
#define LOCALIZED_COLOR_LIGHTSLATEGRAY        L"Gris ardoise clair"
#define LOCALIZED_COLOR_LIGHTSLATEGREY        L"Gris ardoise clair"
#define LOCALIZED_COLOR_LIGHTSTEELBLUE        L"Bleu acier clair"
#define LOCALIZED_COLOR_LIGHTYELLOW           L"Jaune clair"
#define LOCALIZED_COLOR_LIME                  L"Tilleul"
#define LOCALIZED_COLOR_LIMEGREEN             L"Citrone vert"
#define LOCALIZED_COLOR_LINEN                 L"Linon"
#define LOCALIZED_COLOR_MAGENTA               L"Magenta"
#define LOCALIZED_COLOR_MAROON                L"Marron"
#define LOCALIZED_COLOR_MEDIUMAQUAMARINE      L"Bleu vert moyen"
#define LOCALIZED_COLOR_MEDIUMBLUE            L"Bleu moyen"
#define LOCALIZED_COLOR_MEDIUMORCHID          L"OrchidΘe moyen"
#define LOCALIZED_COLOR_MEDIUMPURPLE          L"Pourpre moyen"
#define LOCALIZED_COLOR_MEDIUMSEAGREEN        L"Vert marin moyen"
#define LOCALIZED_COLOR_MEDIUMSLATEBLUE       L"Bleu ardoise moyen"
#define LOCALIZED_COLOR_MEDIUMSPRINGGREEN     L"Vert printemps moyen"
#define LOCALIZED_COLOR_MEDIUMTURQUOISE       L"Turquoise moyen"
#define LOCALIZED_COLOR_MEDIUMVIOLETRED       L"Rouge violet moyen"
#define LOCALIZED_COLOR_MIDNIGHTBLUE          L"Bleu nuit moyen"
#define LOCALIZED_COLOR_MINTCREAM             L"Creme de menthe"
#define LOCALIZED_COLOR_MISTYROSE             L"Rose fanΘ"
#define LOCALIZED_COLOR_MOCCASIN              L"Moccasin"
#define LOCALIZED_COLOR_NAVAJOWHITE           L"Blanc navajo"
#define LOCALIZED_COLOR_NAVY                  L"Marine"
#define LOCALIZED_COLOR_OLDLACE               L"Vieille dentelle"
#define LOCALIZED_COLOR_OLIVE                 L"Olive"
#define LOCALIZED_COLOR_OLIVEDRAB             L"Olive terne"
#define LOCALIZED_COLOR_ORANGE                L"Orange"
#define LOCALIZED_COLOR_ORANGERED             L"Rouge orangΘ"
#define LOCALIZED_COLOR_ORCHID                L"OrchidΘe"
#define LOCALIZED_COLOR_PALEGOLDENROD         L"Verge d'or pΓle"
#define LOCALIZED_COLOR_PALEGREEN             L"Vert pΓle"
#define LOCALIZED_COLOR_PALETURQUOISE         L"Turquoise pΓle"
#define LOCALIZED_COLOR_PALEVIOLETRED         L"Rouge violet pΓle"
#define LOCALIZED_COLOR_PAPAYAWHIP            L"Mousse a la papaye"
#define LOCALIZED_COLOR_PEACHPUFF             L"Fleur de pΩcher"
#define LOCALIZED_COLOR_PERU                  L"PΘrou"
#define LOCALIZED_COLOR_PINK                  L"Rose"
#define LOCALIZED_COLOR_PLUM                  L"Prune"
#define LOCALIZED_COLOR_POWDERBLUE            L"Bleu lΘger"
#define LOCALIZED_COLOR_PURPLE                L"Pourpre"
#define LOCALIZED_COLOR_RED                   L"Rouge"
#define LOCALIZED_COLOR_ROSYBROWN             L"Brun rosΘ"
#define LOCALIZED_COLOR_ROYALBLUE             L"Bleu roi"
#define LOCALIZED_COLOR_SADDLEBROWN           L"Brun selle"
#define LOCALIZED_COLOR_SALMON                L"Saumon"
#define LOCALIZED_COLOR_SANDYBROWN            L"Brun sable"
#define LOCALIZED_COLOR_SEAGREEN              L"Vert marin"
#define LOCALIZED_COLOR_SEASHELL              L"Coquillage"
#define LOCALIZED_COLOR_SIENNA                L"Terre de Sienne"
#define LOCALIZED_COLOR_SILVER                L"Argent"
#define LOCALIZED_COLOR_SKYBLUE               L"Bleu ciel"
#define LOCALIZED_COLOR_SLATEBLUE             L"Bleu ardoise"
#define LOCALIZED_COLOR_SLATEGRAY             L"Gris ardoise"
#define LOCALIZED_COLOR_SLATEGREY             L"Gris ardoise"
#define LOCALIZED_COLOR_SNOW                  L"Neige"
#define LOCALIZED_COLOR_SPRINGGREEN           L"Vert printemps"
#define LOCALIZED_COLOR_STEELBLUE             L"Bleu acier"
#define LOCALIZED_COLOR_TAN                   L"Tan"
#define LOCALIZED_COLOR_TEAL                  L"Sarcelle"
#define LOCALIZED_COLOR_THISTLE               L"Chardon"
#define LOCALIZED_COLOR_TOMATO                L"Tomate"
#define LOCALIZED_COLOR_TURQUOISE             L"Turquoise"
#define LOCALIZED_COLOR_VIOLET                L"Violet"
#define LOCALIZED_COLOR_WHEAT                 L"Froment"
#define LOCALIZED_COLOR_WHITE                 L"Blanc"
#define LOCALIZED_COLOR_WHITESMOKE            L"FumΘe blanche"
#define LOCALIZED_COLOR_YELLOW                L"Jaune"
#define LOCALIZED_COLOR_YELLOWGREEN           L"Jaune vert"

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
