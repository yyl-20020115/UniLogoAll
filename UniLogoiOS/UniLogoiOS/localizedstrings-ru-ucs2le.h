
//
// Localized "alternate" spellings of Logo reserved words
//
#define LOCALIZED_ALTERNATE_TRUE     L"истина" 
#define LOCALIZED_ALTERNATE_FALSE    L"ложь" 
#define LOCALIZED_ALTERNATE_END      L"конец"
#define LOCALIZED_ALTERNATE_TOPLEVEL L"верхнийуровень" 
#define LOCALIZED_ALTERNATE_SYSTEM   L"система" 

//
// Localized "alternate" names of Logo special variables
//
#define LOCALIZED_ALTERNATE_CASEIGNOREDP    L"игноририроватьрегистрпи" 
#define LOCALIZED_ALTERNATE_ERRACT          L"альтош" 
#define LOCALIZED_ALTERNATE_STARTUP         L"запуск" 
#define LOCALIZED_ALTERNATE_REDEFP          L"переопрпи" 
#define LOCALIZED_ALTERNATE_PRINTWIDTHLIMIT L"максширпеч" 
#define LOCALIZED_ALTERNATE_PRINTDEPTHLIMIT L"максглубпеч"


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
#define LOCALIZED_ALTERNATE__DEFMACRO              L".опрмакрос"
#define LOCALIZED_ALTERNATE__EQ                    L".равн" 
#define LOCALIZED_ALTERNATE__MACRO                 L".макрос"
#define LOCALIZED_ALTERNATE__MAYBEOUTPUT           L".альтвывод" 
#define LOCALIZED_ALTERNATE__SETBF                 L".вставькпе" 
#define LOCALIZED_ALTERNATE__SETFIRST              L".вставьпервым" 
#define LOCALIZED_ALTERNATE__SETITEM               L".новэлемент" 
#define LOCALIZED_ALTERNATE_ACTIVEAREA             L"активноеполе" 
#define LOCALIZED_ALTERNATE_ALLOPEN                L"откройвсе" 
#define LOCALIZED_ALTERNATE_AND                    L"кон"
#define LOCALIZED_ALTERNATE_APPLY                  L"применить" 
#define LOCALIZED_ALTERNATE_ARCCOS                 L"arccos" 
#define LOCALIZED_ALTERNATE_ARCSIN                 L"arcsin" 
#define LOCALIZED_ALTERNATE_ARCTAN                 L"arctg" 
#define LOCALIZED_ALTERNATE_ARITY                  L"arity" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ARRAY                  L"массив"
#define LOCALIZED_ALTERNATE_ARRAYP                 L"массивпи" 
#define LOCALIZED_ALTERNATE_ARRAY_                 L"массив?" 
#define LOCALIZED_ALTERNATE_ASCII                  L"код" 
#define LOCALIZED_ALTERNATE_ASHIFT                 L"асдвиг" 
#define LOCALIZED_ALTERNATE_BACK                   L"назад"
#define LOCALIZED_ALTERNATE_BACKSLASHEDP           L"спецсимволпи" 
#define LOCALIZED_ALTERNATE_BACKSLASHED_           L"спецсимвол?" 
#define LOCALIZED_ALTERNATE_BEFOREP                L"передпи" 
#define LOCALIZED_ALTERNATE_BEFORE_                L"передпи?" 
#define LOCALIZED_ALTERNATE_BF                     L"кпе"
#define LOCALIZED_ALTERNATE_BFS                    L"кпех" 
#define LOCALIZED_ALTERNATE_BITAND                 L"поразряди" 
#define LOCALIZED_ALTERNATE_BITBLOCK               L"растрблок" 
#define LOCALIZED_ALTERNATE_BITCOPY                L"растркопируй" 
#define LOCALIZED_ALTERNATE_BITCUT                 L"растрвырежи" 
#define LOCALIZED_ALTERNATE_BITFIT                 L"растрподгони" 
#define LOCALIZED_ALTERNATE_BITINDEX               L"растриндекс" 
#define LOCALIZED_ALTERNATE_BITLOAD                L"растрзагрузи" 
#define LOCALIZED_ALTERNATE_BITLOADSIZE            L"размеррастрзагрузки" 
#define LOCALIZED_ALTERNATE_BITSIZE                L"размеррастра" 
#define LOCALIZED_ALTERNATE_BITMAPTURTLE           L"растртортила" 
#define LOCALIZED_ALTERNATE_BITMODE                L"режимрастра" 
#define LOCALIZED_ALTERNATE_BITNOT                 L"поразрнет" 
#define LOCALIZED_ALTERNATE_BITOR                  L"поразрили"
#define LOCALIZED_ALTERNATE_BITPASTE               L"растрвставь"
#define LOCALIZED_ALTERNATE_BITPASTETOINDEX        L"растрвставьпоинд"
#define LOCALIZED_ALTERNATE_BITSAVE                L"растрсохрани"
#define LOCALIZED_ALTERNATE_BITXOR                 L"поразрисклили"
#define LOCALIZED_ALTERNATE_BK                     L"нд"
#define LOCALIZED_ALTERNATE_BL                     L"кпо"
#define LOCALIZED_ALTERNATE_BURIED                 L"скрытые" 
#define LOCALIZED_ALTERNATE_BURY                   L"скрой" 
#define LOCALIZED_ALTERNATE_BUTFIRST               L"кромепервого"
#define LOCALIZED_ALTERNATE_BUTFIRSTS              L"кромепервых" 
#define LOCALIZED_ALTERNATE_BUTLAST                L"кромепоследнего"
#define LOCALIZED_ALTERNATE_BUTTONCREATE           L"кнопкусоздай"
#define LOCALIZED_ALTERNATE_BUTTONDELETE           L"кнопкуудали" 
#define LOCALIZED_ALTERNATE_BUTTONENABLE           L"кнопкудопусти" 
#define LOCALIZED_ALTERNATE_BUTTONUPDATE           L"кнопкуобнови" 
#define LOCALIZED_ALTERNATE_BUTTONP                L"кнопкапи" 
#define LOCALIZED_ALTERNATE_BUTTON_                L"кнопка?" 
#define LOCALIZED_ALTERNATE_BYE                    L"пока" 
#define LOCALIZED_ALTERNATE_CATCH                  L"захват" 
#define LOCALIZED_ALTERNATE_CHAR                   L"символ"
#define LOCALIZED_ALTERNATE_CHDIR                  L"измпап" 
#define LOCALIZED_ALTERNATE_CHECKBOXCREATE         L"переключсоздай" 
#define LOCALIZED_ALTERNATE_CHECKBOXDELETE         L"переключудали"
#define LOCALIZED_ALTERNATE_CHECKBOXENABLE         L"переключдопусти" 
#define LOCALIZED_ALTERNATE_CHECKBOXGET            L"переключсост" 
#define LOCALIZED_ALTERNATE_CHECKBOXSET            L"переключзадай" 
#define LOCALIZED_ALTERNATE_CLEAN                  L"очисти" 
#define LOCALIZED_ALTERNATE_CLEARPALETTE           L"сотрипалитру" 
#define LOCALIZED_ALTERNATE_CLEARSCREEN            L"очистиэкран"
#define LOCALIZED_ALTERNATE_CLEARTEXT              L"очиститекст" 
#define LOCALIZED_ALTERNATE_CLEARTIMER             L"очиститаймер" 
#define LOCALIZED_ALTERNATE_CLOSE                  L"закрой" 
#define LOCALIZED_ALTERNATE_CLOSEALL               L"закройвсе" 
#define LOCALIZED_ALTERNATE_CO                     L"прод" 
#define LOCALIZED_ALTERNATE_COMBOBOXADDSTRING      L"добстрвполе" 
#define LOCALIZED_ALTERNATE_COMBOBOXCREATE         L"полесоздай" 
#define LOCALIZED_ALTERNATE_COMBOBOXDELETE         L"полеудали" 
#define LOCALIZED_ALTERNATE_COMBOBOXENABLE         L"поледопусти" 
#define LOCALIZED_ALTERNATE_COMBOBOXDELETESTRING   L"удалистрокуполя" 
#define LOCALIZED_ALTERNATE_COMBOBOXGETTEXT        L"текстполя" 
#define LOCALIZED_ALTERNATE_COMBOBOXSETTEXT        L"задатьтекстполя" 
#define LOCALIZED_ALTERNATE_CONTENTS               L"содержание" 
#define LOCALIZED_ALTERNATE_CONTINUE               L"продолжи" 
#define LOCALIZED_ALTERNATE_COPYDEF                L"переимен" 
#define LOCALIZED_ALTERNATE_COS                    L"cos" 
#define LOCALIZED_ALTERNATE_COUNT                  L"сколько"
#define LOCALIZED_ALTERNATE_CS                     L"оэ"
#define LOCALIZED_ALTERNATE_CT                     L"от" 
#define LOCALIZED_ALTERNATE_CURSOR                 L"курсор" 
#define LOCALIZED_ALTERNATE_DEBUGWINDOWS           L"окноотладки" 
#define LOCALIZED_ALTERNATE_DEFINE                 L"определи" 
#define LOCALIZED_ALTERNATE_DEFINEDP               L"определенпи" 
#define LOCALIZED_ALTERNATE_DEFINED_               L"определен?" 
#define LOCALIZED_ALTERNATE_DIALOGCREATE           L"диалогсоздай" 
#define LOCALIZED_ALTERNATE_DIALOGENABLE           L"диалогдопусти" 
#define LOCALIZED_ALTERNATE_DIALOGDELETE           L"диалогудали"
#define LOCALIZED_ALTERNATE_DIALOGFILEOPEN         L"диалогафайлоткрыть"
#define LOCALIZED_ALTERNATE_DIALOGFILESAVE         L"окнофайлсохранить" 
#define LOCALIZED_ALTERNATE_DIFFERENCE             L"разность"
#define LOCALIZED_ALTERNATE_DIRECTORIES            L"папки" 
#define LOCALIZED_ALTERNATE_DLLCALL                L"вызовбдк" 
#define LOCALIZED_ALTERNATE_DLLFREE                L"снимибдк" 
#define LOCALIZED_ALTERNATE_DLLLOAD                L"загрузиьбдк" 
#define LOCALIZED_ALTERNATE_DOWN                   L"вниз" 
#define LOCALIZED_ALTERNATE_DOWNPITCH              L"уклонвниз" 
#define LOCALIZED_ALTERNATE_DRIBBLE                L"протокол" 
#define LOCALIZED_ALTERNATE_ED                     L"ред" 
#define LOCALIZED_ALTERNATE_EDIT                   L"редактировать" 
#define LOCALIZED_ALTERNATE_ELLIPSEARC             L"дугаэллипса" 
#define LOCALIZED_ALTERNATE_EMPTYP                 L"пустойпи" 
#define LOCALIZED_ALTERNATE_EMPTY_                 L"пустой?" 
#define LOCALIZED_ALTERNATE_EOFP                   L"кфлпи" 
#define LOCALIZED_ALTERNATE_EOF_                   L"кфл?" 
#define LOCALIZED_ALTERNATE_EQUALP                 L"равныйпи"
#define LOCALIZED_ALTERNATE_EQUAL_                 L"equal?" 
#define LOCALIZED_ALTERNATE_ER                     L"уд" 
#define LOCALIZED_ALTERNATE_ERASE                  L"удали" 
#define LOCALIZED_ALTERNATE_ERASEFILE              L"удалифайл" 
#define LOCALIZED_ALTERNATE_ERF                    L"удф" 
#define LOCALIZED_ALTERNATE_ERROR                  L"ошибка" 
#define LOCALIZED_ALTERNATE_EVENTCHECK             L"контрсобытий" 
#define LOCALIZED_ALTERNATE_EXP                    L"exp" 
#define LOCALIZED_ALTERNATE_FD                     L"вп"
#define LOCALIZED_ALTERNATE_FENCE                  L"ограждение" 
#define LOCALIZED_ALTERNATE_FILL                   L"крась"
#define LOCALIZED_ALTERNATE_FILES                  L"файлы" 
#define LOCALIZED_ALTERNATE_FIRST                  L"первый"
#define LOCALIZED_ALTERNATE_FIRSTS                 L"первые" 
#define LOCALIZED_ALTERNATE_FLOODCOLOR             L"цветзаливки" 
#define LOCALIZED_ALTERNATE_FONTFACENAMES          L"названиешрифта" 
#define LOCALIZED_ALTERNATE_FOREVER                L"многократно" 
#define LOCALIZED_ALTERNATE_FORM                   L"формат" 
#define LOCALIZED_ALTERNATE_FORWARD                L"вперед"
#define LOCALIZED_ALTERNATE_FPUT                   L"пвнач" 
#define LOCALIZED_ALTERNATE_FS                     L"пэ" 
#define LOCALIZED_ALTERNATE_FULLSCREEN             L"полныйэкран" 
#define LOCALIZED_ALTERNATE_FULLTEXT               L"текстпроц" 
#define LOCALIZED_ALTERNATE_GETFOCUS               L"активноеокно" 
#define LOCALIZED_ALTERNATE_GOTO                   L"перейти" 
#define LOCALIZED_ALTERNATE_GIFLOAD                L"загрузирис" 
#define LOCALIZED_ALTERNATE_GIFSIZE                L"размеррис" 
#define LOCALIZED_ALTERNATE_GIFSAVE                L"сохранирис" 
#define LOCALIZED_ALTERNATE_GPROP                  L"выбсв" 
#define LOCALIZED_ALTERNATE_GREATEREQUALP          L"больщеравнопи" 
#define LOCALIZED_ALTERNATE_GREATEREQUAL_          L"большеравно?" 
#define LOCALIZED_ALTERNATE_GREATERP               L"большепи"
#define LOCALIZED_ALTERNATE_GREATER_               L"больше?" 
#define LOCALIZED_ALTERNATE_GROUPBOXCREATE         L"группусоздай" 
#define LOCALIZED_ALTERNATE_GROUPBOXDELETE         L"группуудали" 
#define LOCALIZED_ALTERNATE_HALT                   L"останов" 
#define LOCALIZED_ALTERNATE_HASOWNPENP             L"hasownpenp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_HASOWNPEN_             L"hasownpen?" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_HEADING                L"направление" 
#define LOCALIZED_ALTERNATE_HELP                   L"помощь" 
#define LOCALIZED_ALTERNATE_HIDETURTLE             L"скройтортилу"
#define LOCALIZED_ALTERNATE_HOME                   L"домой"
#define LOCALIZED_ALTERNATE_HT                     L"ст"
#define LOCALIZED_ALTERNATE_IF                     L"если"
#define LOCALIZED_ALTERNATE_IFELSE                 L"еслииначе"
#define LOCALIZED_ALTERNATE_IFF                    L"еслил" 
#define LOCALIZED_ALTERNATE_IFFALSE                L"еслиложь" 
#define LOCALIZED_ALTERNATE_IFT                    L"еслии" 
#define LOCALIZED_ALTERNATE_IFTRUE                 L"еслиистина" 
#define LOCALIZED_ALTERNATE_INGAMEPORT             L"портигры" 
#define LOCALIZED_ALTERNATE_INPORT                 L"впорт" 
#define LOCALIZED_ALTERNATE_INPORTB                L"впортб"
#define LOCALIZED_ALTERNATE_INT                    L"целаячасть"
#define LOCALIZED_ALTERNATE_ITEM                   L"элемент"
#define LOCALIZED_ALTERNATE_KEYBOARDOFF            L"клавиатуруотключи" 
#define LOCALIZED_ALTERNATE_KEYBOARDON             L"клавиатурувключи" 
#define LOCALIZED_ALTERNATE_KEYBOARDVALUE          L"клавиатуруоцени" 
#define LOCALIZED_ALTERNATE_KEYP                   L"клавищапи" 
#define LOCALIZED_ALTERNATE_KEY_                   L"клавиша?" 
#define LOCALIZED_ALTERNATE_LABEL                  L"надпись"
#define LOCALIZED_ALTERNATE_LABELFONT              L"шрифтнадписи"
#define LOCALIZED_ALTERNATE_LABELSIZE              L"размернадписи" 
#define LOCALIZED_ALTERNATE_LAST                   L"последний"
#define LOCALIZED_ALTERNATE_LEFT                   L"налево"
#define LOCALIZED_ALTERNATE_LEFTROLL               L"левыйкрен" 
#define LOCALIZED_ALTERNATE_LESSEQUALP             L"меньшеравнопи" 
#define LOCALIZED_ALTERNATE_LESSEQUAL_             L"меньшеравно?" 
#define LOCALIZED_ALTERNATE_LESSP                  L"меньшепи"
#define LOCALIZED_ALTERNATE_LESS_                  L"меньше?" 
#define LOCALIZED_ALTERNATE_LIGHT                  L"яркость" 
#define LOCALIZED_ALTERNATE_LIST                   L"список"
#define LOCALIZED_ALTERNATE_LISTBOXADDSTRING       L"спзапдобавьстроку" 
#define LOCALIZED_ALTERNATE_LISTBOXCREATE          L"спзапсоздай" 
#define LOCALIZED_ALTERNATE_LISTBOXENABLE          L"спзапдопусти" 
#define LOCALIZED_ALTERNATE_LISTBOXDELETE          L"спзапудали" 
#define LOCALIZED_ALTERNATE_LISTBOXDELETESTRING    L"спзапудалистроку" 
#define LOCALIZED_ALTERNATE_LISTBOXGETSELECT       L"спзапвыбор" 
#define LOCALIZED_ALTERNATE_LISTP                  L"списокпи" 
#define LOCALIZED_ALTERNATE_LIST_                  L"списокпи?" 
#define LOCALIZED_ALTERNATE_LN                     L"ln" 
#define LOCALIZED_ALTERNATE_LOAD                   L"загрузи" 
#define LOCALIZED_ALTERNATE_LOCAL                  L"локальный" 
#define LOCALIZED_ALTERNATE_LOG10                  L"lg" 
#define LOCALIZED_ALTERNATE_LOGOVERSION            L"версиялого" 
#define LOCALIZED_ALTERNATE_LOWERCASE              L"строчный" 
#define LOCALIZED_ALTERNATE_LPUT                   L"пвконец"
#define LOCALIZED_ALTERNATE_LR                     L"лкр" 
#define LOCALIZED_ALTERNATE_LSHIFT                 L"лсдвиг" 
#define LOCALIZED_ALTERNATE_LT                     L"лв"
#define LOCALIZED_ALTERNATE_MACHINE                L"машина" 
#define LOCALIZED_ALTERNATE_MACROP                 L"макроспи" 
#define LOCALIZED_ALTERNATE_MACRO_                 L"макрос?" 
#define LOCALIZED_ALTERNATE_MAKE                   L"пусть"
#define LOCALIZED_ALTERNATE_MCI                    L"мки" 
#define LOCALIZED_ALTERNATE_MEMBER                 L"сэлемента"
#define LOCALIZED_ALTERNATE_MEMBERP                L"элементпи"
#define LOCALIZED_ALTERNATE_MEMBER_                L"элемент?" 
#define LOCALIZED_ALTERNATE_MESSAGEBOX             L"окносообщений" 
#define LOCALIZED_ALTERNATE_MIDICLOSE              L"мидизакрой" 
#define LOCALIZED_ALTERNATE_MIDIMESSAGE            L"мидисообщение" 
#define LOCALIZED_ALTERNATE_MIDIOPEN               L"мидиоткрой" 
#define LOCALIZED_ALTERNATE_MINUS                  L"минус" 
#define LOCALIZED_ALTERNATE_MKDIR                  L"сзпапку" 
#define LOCALIZED_ALTERNATE_MODULO                 L"помодулю"
#define LOCALIZED_ALTERNATE_MOUSEOFF               L"мышьвыкл"
#define LOCALIZED_ALTERNATE_MOUSEON                L"мышьвкл"
#define LOCALIZED_ALTERNATE_MOUSEPOS               L"мышьместо"
#define LOCALIZED_ALTERNATE_NAMEP                  L"имяпи" 
#define LOCALIZED_ALTERNATE_NAME_                  L"имя?" 
#define LOCALIZED_ALTERNATE_NAMES                  L"имена" 
#define LOCALIZED_ALTERNATE_NETACCEPTOFF           L"подключениепосетивкл"
#define LOCALIZED_ALTERNATE_NETACCEPTON            L"подключениепосетиоткл"
#define LOCALIZED_ALTERNATE_NETACCEPTRECEIVEVALUE  L"значприемаполуч" 
#define LOCALIZED_ALTERNATE_NETACCEPTSENDVALUE     L"значотправкиполуч" 
#define LOCALIZED_ALTERNATE_NETCONNECTOFF          L"связьпосетивыкл" 
#define LOCALIZED_ALTERNATE_NETCONNECTON           L"связьпосетивкл" 
#define LOCALIZED_ALTERNATE_NETCONNECTRECEIVEVALUE L"значприемасоед" 
#define LOCALIZED_ALTERNATE_NETCONNECTSENDVALUE    L"значотправкисоед" 
#define LOCALIZED_ALTERNATE_NETSHUTDOWN            L"сетьоткл" 
#define LOCALIZED_ALTERNATE_NETSTARTUP             L"сетьзапусти" 
#define LOCALIZED_ALTERNATE_NOBITMAPTURTLE         L"нерастртортила" 
#define LOCALIZED_ALTERNATE_NODES                  L"узлы" 
#define LOCALIZED_ALTERNATE_NODRIBBLE              L"безпротокола" 
#define LOCALIZED_ALTERNATE_NOSTATUS               L"безстатуса" 
#define LOCALIZED_ALTERNATE_NOT                    L"не" 
#define LOCALIZED_ALTERNATE_NOTEQUALP              L"неравнопи" 
#define LOCALIZED_ALTERNATE_NOTEQUAL_              L"неравно?" 
#define LOCALIZED_ALTERNATE_NOYIELD                L"неуступать" 
#define LOCALIZED_ALTERNATE_NUMBERP                L"числопи" 
#define LOCALIZED_ALTERNATE_NUMBER_                L"число?" 
#define LOCALIZED_ALTERNATE_OP                     L"вд"
#define LOCALIZED_ALTERNATE_OPENAPPEND             L"откройдляизм" 
#define LOCALIZED_ALTERNATE_OPENREAD               L"откройдлячт" 
#define LOCALIZED_ALTERNATE_OPENUPDATE             L"откройдляобн" 
#define LOCALIZED_ALTERNATE_OPENWRITE              L"откройдлязап" 
#define LOCALIZED_ALTERNATE_OR                     L"или" 
#define LOCALIZED_ALTERNATE_OUTPORT                L"вдвпорт" 
#define LOCALIZED_ALTERNATE_OUTPORTB               L"вдвпортб" 
#define LOCALIZED_ALTERNATE_OUTPUT                 L"вывод"
#define LOCALIZED_ALTERNATE_PARSE                  L"впредл" 
#define LOCALIZED_ALTERNATE_PAUSE                  L"пауза" 
#define LOCALIZED_ALTERNATE_PC                     L"цп" 
#define LOCALIZED_ALTERNATE_PD                     L"по" 
#define LOCALIZED_ALTERNATE_PE                     L"лк"
#define LOCALIZED_ALTERNATE_PENCOLOR               L"цветпера"  
#define LOCALIZED_ALTERNATE_PENDOWN                L"пероопусти"
#define LOCALIZED_ALTERNATE_PENDOWNP               L"пероопущпи" 
#define LOCALIZED_ALTERNATE_PENDOWN_               L"пероопущ?" 
#define LOCALIZED_ALTERNATE_PENERASE               L"ластик"
#define LOCALIZED_ALTERNATE_PENMODE                L"режимпера" 
#define LOCALIZED_ALTERNATE_PENPAINT               L"пероручка"
#define LOCALIZED_ALTERNATE_PENPATTERN             L"модельпера" 
#define LOCALIZED_ALTERNATE_PENREVERSE             L"перообратное"
#define LOCALIZED_ALTERNATE_PENSIZE                L"размерпера" 
#define LOCALIZED_ALTERNATE_PENUP                  L"пероподними"
#define LOCALIZED_ALTERNATE_PERSPECTIVE            L"пространственный" 
#define LOCALIZED_ALTERNATE_PITCH                  L"уклон" 
#define LOCALIZED_ALTERNATE_PIXEL                  L"пиксель" 
#define LOCALIZED_ALTERNATE_PLAYWAVE               L"воспроизвзвук" 
#define LOCALIZED_ALTERNATE_PLIST                  L"списоксв" 
#define LOCALIZED_ALTERNATE_PLISTS                 L"спискисв" 
#define LOCALIZED_ALTERNATE_PO                     L"ппроц" 
#define LOCALIZED_ALTERNATE_POPDIR                 L"вверхпап" 
#define LOCALIZED_ALTERNATE_POLYSTART              L"начмногоуг" 
#define LOCALIZED_ALTERNATE_POLYEND                L"конмногоуг" 
#define LOCALIZED_ALTERNATE_POLYVIEW               L"показмногоуг" 
#define LOCALIZED_ALTERNATE_PORTCLOSE              L"портзакрой" 
#define LOCALIZED_ALTERNATE_PORTFLUSH              L"портсбр" 
#define LOCALIZED_ALTERNATE_PORTMODE               L"режимпорта" 
#define LOCALIZED_ALTERNATE_PORTOPEN               L"портоткрой" 
#define LOCALIZED_ALTERNATE_PORTREADARRAY          L"читмассизпорта" 
#define LOCALIZED_ALTERNATE_PORTREADCHAR           L"читсимизпорта" 
#define LOCALIZED_ALTERNATE_PORTWRITEARRAY         L"запмассвпорт" 
#define LOCALIZED_ALTERNATE_PORTWRITECHAR          L"запсимвпорт" 
#define LOCALIZED_ALTERNATE_POS                    L"место" 
#define LOCALIZED_ALTERNATE_POSXYZ                 L"место_xyz" 
#define LOCALIZED_ALTERNATE_POT                    L"вдзгстр" 
#define LOCALIZED_ALTERNATE_POWER                  L"степень"
#define LOCALIZED_ALTERNATE_PPROP                  L"дсвойство" 
#define LOCALIZED_ALTERNATE_PPT                    L"прк"
#define LOCALIZED_ALTERNATE_PR                     L"пш"
#define LOCALIZED_ALTERNATE_PRIMITIVEP             L"базиснаяпи" 
#define LOCALIZED_ALTERNATE_PRIMITIVE_             L"базисная?" 
#define LOCALIZED_ALTERNATE_PRINT                  L"пиши"
#define LOCALIZED_ALTERNATE_PROCEDUREP             L"процедурапи" 
#define LOCALIZED_ALTERNATE_PROCEDURE_             L"процедура?" 
#define LOCALIZED_ALTERNATE_PROPLISTP              L"спсвойствпи" 
#define LOCALIZED_ALTERNATE_PROPLIST_              L"спсвойств?" 
#define LOCALIZED_ALTERNATE_PROCEDURES             L"процедуры"
#define LOCALIZED_ALTERNATE_PRODUCT                L"произведение"
#define LOCALIZED_ALTERNATE_PU                     L"пп"
#define LOCALIZED_ALTERNATE_PX                     L"поб"
#define LOCALIZED_ALTERNATE_QUESTIONBOX            L"окновопроса" 
#define LOCALIZED_ALTERNATE_QUOTIENT               L"частное"
#define LOCALIZED_ALTERNATE_RADARCCOS              L"radarccos" 
#define LOCALIZED_ALTERNATE_RADARCSIN              L"radarcsin" 
#define LOCALIZED_ALTERNATE_RADARCTAN              L"radarctg" 
#define LOCALIZED_ALTERNATE_RADCOS                 L"radcos" 
#define LOCALIZED_ALTERNATE_RADIOBUTTONCREATE      L"радиопереклсоздай" 
#define LOCALIZED_ALTERNATE_RADIOBUTTONENABLE      L"радиопереклдопусти" 
#define LOCALIZED_ALTERNATE_RADIOBUTTONDELETE      L"радиопереклудали" 
#define LOCALIZED_ALTERNATE_RADIOBUTTONGET         L"радиопереклсобытие" 
#define LOCALIZED_ALTERNATE_RADIOBUTTONSET         L"радиопереклустанови" 
#define LOCALIZED_ALTERNATE_RADSIN                 L"radsin" 
#define LOCALIZED_ALTERNATE_RADTAN                 L"radtg" 
#define LOCALIZED_ALTERNATE_RANDOM                 L"случайный"
#define LOCALIZED_ALTERNATE_RAWASCII               L"альткод" 
#define LOCALIZED_ALTERNATE_RC                     L"жсмв"
#define LOCALIZED_ALTERNATE_RCS                    L"жсы" 
#define LOCALIZED_ALTERNATE_READCHAR               L"ждисимвол" 
#define LOCALIZED_ALTERNATE_READCHARS              L"ждисимволы" 
#define LOCALIZED_ALTERNATE_READER                 L"считыватель" 
#define LOCALIZED_ALTERNATE_READLIST               L"ждисписок" 
#define LOCALIZED_ALTERNATE_READPOS                L"читайкол" 
#define LOCALIZED_ALTERNATE_READRAWLINE            L"readrawline" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_READWORD               L"ждислово"
#define LOCALIZED_ALTERNATE_REMAINDER              L"остаток"
#define LOCALIZED_ALTERNATE_REMPROP                L"удалисв" 
#define LOCALIZED_ALTERNATE_REPCOUNT               L"счетчик"
#define LOCALIZED_ALTERNATE_REPEAT                 L"повтори"
#define LOCALIZED_ALTERNATE_RERANDOM               L"повторисл" 
#define LOCALIZED_ALTERNATE_RIGHT                  L"направо"
#define LOCALIZED_ALTERNATE_RIGHTROLL              L"правыйкрен" 
#define LOCALIZED_ALTERNATE_RL                     L"чс" 
#define LOCALIZED_ALTERNATE_RMDIR                  L"удпап" 
#define LOCALIZED_ALTERNATE_ROLL                   L"крен" 
#define LOCALIZED_ALTERNATE_ROUND                  L"целое"
#define LOCALIZED_ALTERNATE_RR                     L"пкр" 
#define LOCALIZED_ALTERNATE_RT                     L"пр"
#define LOCALIZED_ALTERNATE_RUN                    L"выполнить" 
#define LOCALIZED_ALTERNATE_RUNPARSE               L"выпвпредл" 
#define LOCALIZED_ALTERNATE_RUNRESULT              L"выпрез" 
#define LOCALIZED_ALTERNATE_RW                     L"жс"
#define LOCALIZED_ALTERNATE_SAVE                   L"сохрани" 
#define LOCALIZED_ALTERNATE_SCREENCOLOR            L"цветэкрана" 
#define LOCALIZED_ALTERNATE_SCROLLBARCREATE        L"полпроксоздать" 
#define LOCALIZED_ALTERNATE_SCROLLBARENABLE        L"полпрокдопусти" 
#define LOCALIZED_ALTERNATE_SCROLLBARDELETE        L"полпрокудали" 
#define LOCALIZED_ALTERNATE_SCROLLBARGET           L"полпрокустанови" 
#define LOCALIZED_ALTERNATE_SCROLLBARSET           L"полпрокзадай" 
#define LOCALIZED_ALTERNATE_SCROLLX                L"прокрутка_x" 
#define LOCALIZED_ALTERNATE_SCROLLY                L"прокрутка_y" 
#define LOCALIZED_ALTERNATE_SCRUNCH                L"коррекция" 
#define LOCALIZED_ALTERNATE_SE                     L"пе"
#define LOCALIZED_ALTERNATE_SELECTBOX              L"окновыбора" 
#define LOCALIZED_ALTERNATE_SENTENCE               L"предложение"
#define LOCALIZED_ALTERNATE_SETACTIVEAREA          L"актполеустанови" 
#define LOCALIZED_ALTERNATE_SETBITINDEX            L"индрастраустанови" 
#define LOCALIZED_ALTERNATE_SETBITMODE             L"режрастраустанови" 
#define LOCALIZED_ALTERNATE_SETCLIP                L"новклип" 
#define LOCALIZED_ALTERNATE_SETCURSOR              L"новкурсор" 
#define LOCALIZED_ALTERNATE_SETCURSORNOWAIT        L"курсорнечасы" 
#define LOCALIZED_ALTERNATE_SETCURSORWAIT          L"курсорчасы" 
#define LOCALIZED_ALTERNATE_SETFC                  L"новцз"
#define LOCALIZED_ALTERNATE_SETFLOODCOLOR          L"новыйцветзаливки" 
#define LOCALIZED_ALTERNATE_SETFOCUS               L"устактокно" 
#define LOCALIZED_ALTERNATE_SETH                   L"новк"
#define LOCALIZED_ALTERNATE_SETHEADING             L"новыйкурс"
#define LOCALIZED_ALTERNATE_SETITEM                L"новыйэлемент"
#define LOCALIZED_ALTERNATE_SETLABELFONT           L"новшрифтнадписи"
#define LOCALIZED_ALTERNATE_SETLIGHT               L"установияркость" 
#define LOCALIZED_ALTERNATE_SETMARGINS             L"новполя" 
#define LOCALIZED_ALTERNATE_SETPC                  L"нц"
#define LOCALIZED_ALTERNATE_SETPENCOLOR            L"новыйцветпера"
#define LOCALIZED_ALTERNATE_SETPENPATTERN          L"новмодельпера" 
#define LOCALIZED_ALTERNATE_SETPENSIZE             L"новыйразмерпера"
#define LOCALIZED_ALTERNATE_SETPITCH               L"новуклон" 
#define LOCALIZED_ALTERNATE_SETPIXEL               L"новпиксель" 
#define LOCALIZED_ALTERNATE_SETPOS                 L"новоеместо"
#define LOCALIZED_ALTERNATE_SETPOSXYZ              L"новместо_xyz" 
#define LOCALIZED_ALTERNATE_SETREAD                L"новчтение" 
#define LOCALIZED_ALTERNATE_SETREADPOS             L"чтениесместа" 
#define LOCALIZED_ALTERNATE_SETROLL                L"новкрен" 
#define LOCALIZED_ALTERNATE_SETSC                  L"нцэ" 
#define LOCALIZED_ALTERNATE_SETSCREENCOLOR         L"новцветэкрана" 
#define LOCALIZED_ALTERNATE_SETSCRUNCH             L"установикоррекцию" 
#define LOCALIZED_ALTERNATE_SETTIMER               L"новтаймер" 
#define LOCALIZED_ALTERNATE_SETTURTLE              L"новтортила" 
#define LOCALIZED_ALTERNATE_SETTURTLEMODE          L"новрежимтортилы" 
#define LOCALIZED_ALTERNATE_SETWRITE               L"новзапись" 
#define LOCALIZED_ALTERNATE_SETWRITEPOS            L"записьсместа" 
#define LOCALIZED_ALTERNATE_SETX                   L"нов_x" 
#define LOCALIZED_ALTERNATE_SETXY                  L"нов_xy"
#define LOCALIZED_ALTERNATE_SETXYZ                 L"нов_xyz" 
#define LOCALIZED_ALTERNATE_SETY                   L"нов_y" 
#define LOCALIZED_ALTERNATE_SETZ                   L"нов_z" 
#define LOCALIZED_ALTERNATE_SHELL                  L"оболочка" 
#define LOCALIZED_ALTERNATE_SHOW                   L"покажи"
#define LOCALIZED_ALTERNATE_SHOWNP                 L"видимаяпи" 
#define LOCALIZED_ALTERNATE_SHOWN_                 L"видимая?" 
#define LOCALIZED_ALTERNATE_SHOWTURTLE             L"покажитортилу"
#define LOCALIZED_ALTERNATE_SIN                    L"sin" 
#define LOCALIZED_ALTERNATE_SOUND                  L"звук" 
#define LOCALIZED_ALTERNATE_SPLITSCREEN            L"раздэкран" 
#define LOCALIZED_ALTERNATE_SQRT                   L"корень"
#define LOCALIZED_ALTERNATE_SS                     L"рэ" 
#define LOCALIZED_ALTERNATE_ST                     L"пт"
#define LOCALIZED_ALTERNATE_STANDOUT               L"выдел" 
#define LOCALIZED_ALTERNATE_STATICCREATE           L"заголовоксоздай" 
#define LOCALIZED_ALTERNATE_STATICDELETE           L"заголовокудали" 
#define LOCALIZED_ALTERNATE_STATICUPDATE           L"заголовокобнови" 
#define LOCALIZED_ALTERNATE_STATUS                 L"статус" 
#define LOCALIZED_ALTERNATE_STEP                   L"шаг" 
#define LOCALIZED_ALTERNATE_STEPPED                L"пройденные" 
#define LOCALIZED_ALTERNATE_STOP                   L"стоп" 
#define LOCALIZED_ALTERNATE_SUBSTRINGP             L"подстрокапи" 
#define LOCALIZED_ALTERNATE_SUBSTRING_             L"подстрока?" 
#define LOCALIZED_ALTERNATE_SUM                    L"сумма"
#define LOCALIZED_ALTERNATE_TAG                    L"метка" 
#define LOCALIZED_ALTERNATE_TAN                    L"tg" 
#define LOCALIZED_ALTERNATE_TEST                   L"тест" 
#define LOCALIZED_ALTERNATE_TEXT                   L"текст" 
#define LOCALIZED_ALTERNATE_TEXTSCREEN             L"текстовыйэкран" 
#define LOCALIZED_ALTERNATE_THING                  L"объект" 
#define LOCALIZED_ALTERNATE_THROW                  L"перемести" 
#define LOCALIZED_ALTERNATE_TIME                   L"время" 
#define LOCALIZED_ALTERNATE_TIMEMILLI              L"систвремя" 
#define LOCALIZED_ALTERNATE_TO                     L"это"
#define LOCALIZED_ALTERNATE_TONE                   L"тон" 
#define LOCALIZED_ALTERNATE_TOWARDS                L"внаправ" 
#define LOCALIZED_ALTERNATE_TOWARDSXYZ             L"внаправ_xyz" 
#define LOCALIZED_ALTERNATE_TRACE                  L"трасс" 
#define LOCALIZED_ALTERNATE_TRACED                 L"трассированные" 
#define LOCALIZED_ALTERNATE_TS                     L"тэ" 
#define LOCALIZED_ALTERNATE_TURTLE                 L"тортила" 
#define LOCALIZED_ALTERNATE_TURTLEMODE             L"режимтортилы" 
#define LOCALIZED_ALTERNATE_TURTLES                L"тортилы" 
#define LOCALIZED_ALTERNATE_TYPE                   L"набери" 
#define LOCALIZED_ALTERNATE_UNBURY                 L"нескрывать" 
#define LOCALIZED_ALTERNATE_UNSTEP                 L"безшага" 
#define LOCALIZED_ALTERNATE_UNTRACE                L"безтрасс" 
#define LOCALIZED_ALTERNATE_UP                     L"вверх" 
#define LOCALIZED_ALTERNATE_UPPERCASE              L"заглавный" 
#define LOCALIZED_ALTERNATE_UPPITCH                L"уклонвверх" 
#define LOCALIZED_ALTERNATE_WAIT                   L"жди"
#define LOCALIZED_ALTERNATE_WINDOW                 L"окно" 
#define LOCALIZED_ALTERNATE_WINDOWCREATE           L"окносоздай"
#define LOCALIZED_ALTERNATE_WINDOWENABLE           L"окнодопусти" 
#define LOCALIZED_ALTERNATE_WINDOWDELETE           L"окноудали"
#define LOCALIZED_ALTERNATE_WINDOWFILEEDIT         L"окнофайлоткрыть" 
#define LOCALIZED_ALTERNATE_WINDOWSET              L"окнозадать" 
#define LOCALIZED_ALTERNATE_WINHELP                L"окнопомощи" 
#define LOCALIZED_ALTERNATE_WORD                   L"слово"
#define LOCALIZED_ALTERNATE_WORDP                  L"словопи" 
#define LOCALIZED_ALTERNATE_WORD_                  L"слово?" 
#define LOCALIZED_ALTERNATE_WRAP                   L"обертка" 
#define LOCALIZED_ALTERNATE_WRITEPOS               L"пишикол" 
#define LOCALIZED_ALTERNATE_WRITER                 L"пишпоток" 
#define LOCALIZED_ALTERNATE_YESNOBOX               L"данетокно" 
#define LOCALIZED_ALTERNATE_YIELD                  L"уступать" 
#define LOCALIZED_ALTERNATE_ZOOM                   L"масштаб" 

//
// General localized strings
//
#define LOCALIZED_GENERAL_OKBUTTON      L"ОК" 
#define LOCALIZED_GENERAL_CANCELBUTTON  L"Отмена" 
#define LOCALIZED_GENERAL_APPLYBUTTON   L"&Применить" 

#define LOCALIZED_GENERAL_PRODUCTNAME   L"UniLogo" 

// Embedded description of unilogo.exe
#define LOCALIZED_UNILOGO_FILE_DESCRIPTION  L"Среда программирования UniLogo" 

//
// The menu options on the main window 
//
#define LOCALIZED_FILE                  L"&Файл" 
#define LOCALIZED_FILE_NEW              L"&Новый" 
#define LOCALIZED_FILE_LOAD             L"&Загрузить..." 
#define LOCALIZED_FILE_OPEN             L"&Открыть..."  
#define LOCALIZED_FILE_SAVE             L"&Сохранить"  
#define LOCALIZED_FILE_SAVEAS           L"Сохранить &как..." 
#define LOCALIZED_FILE_SETASSCREENSAVER L"Se&t As Screen Saver" // NOT_YET_LOCALIZED
#define LOCALIZED_FILE_EDIT             L"&Редактировать..." 
#define LOCALIZED_FILE_ERASE            L"С&тереть..." 
#define LOCALIZED_FILE_EXIT             L"&Выход" 

#define LOCALIZED_BITMAP               L"&Рисунок" 
#define LOCALIZED_BITMAP_NEW           L"&Новый" 
#define LOCALIZED_BITMAP_LOAD          L"&Загрузить..." 
#define LOCALIZED_BITMAP_SAVE          L"&Сохранить" 
#define LOCALIZED_BITMAP_SAVEAS        L"Сохранить &как..." 
#define LOCALIZED_BITMAP_PRINT         L"&Печать..." 
#define LOCALIZED_BITMAP_PRINTERSETUP  L"С&войства принтера..." 
#define LOCALIZED_BITMAP_ACTIVEAREA    L"&Активная зона..." 

#define LOCALIZED_SET                  L"&Установить" 
#define LOCALIZED_SET_PENSIZE          L"&Размер пера..." 
#define LOCALIZED_SET_LABELFONT        L"&Шрифт надписей..." 
#define LOCALIZED_SET_COMMANDERFONT    L"Шр&ифт командного окна..." 
#define LOCALIZED_SET_PENCOLOR         L"Цв&ет пера..." 
#define LOCALIZED_SET_FLOODCOLOR       L"Ц&вет заливки..." 
#define LOCALIZED_SET_SCREENCOLOR      L"&Цвет экрана..." 

#define LOCALIZED_ZOOM                 L"&Лупа"  
#define LOCALIZED_ZOOM_IN              L"&Увеличить" 
#define LOCALIZED_ZOOM_OUT             L"У&меньшить" 
#define LOCALIZED_ZOOM_NORMAL          L"&Норма" 

#define LOCALIZED_HELP                 L"&Помощь"  
#define LOCALIZED_HELP_INDEX           L"&Индекс" 
#define LOCALIZED_HELP_TUTORIAL        L"О&бучающая программа" 
#define LOCALIZED_HELP_DEMO            L"&Демо"  
#define LOCALIZED_HELP_EXAMPLE         L"&Примеры" 
#define LOCALIZED_HELP_RELEASENOTES    L"П&римечания к выпуску" 
#define LOCALIZED_HELP_ABOUTUNILOGO    L"&О " LOCALIZED_GENERAL_PRODUCTNAME L"..."
#define LOCALIZED_HELP_MS              L"&О MS..." 
// The following two help options display tables for translating to/from English
// These tables are built from the LOCALIZED_ALTERNATE_* macros above and the
// and startup-xxxx.logoscript file.
#define LOCALIZED_HELP_LANGTOENGLISH   L"Русско-Английский" 
#define LOCALIZED_HELP_ENGLISHTOLANG   L"Англо-Русский" 

// The "Set Active Area" dialog box
#define LOCALIZED_SELECTACTIVEAREA              L"Укажите активную зону" 
#define LOCALIZED_SELECTACTIVEAREA_EFFECT       L"Изменение свойств Печати и Сохранения растровых изображений" 
#define LOCALIZED_SELECTACTIVEAREA_YHIGH        L"Y-вверхний" 
#define LOCALIZED_SELECTACTIVEAREA_YLOW         L"Y-нижний"  
#define LOCALIZED_SELECTACTIVEAREA_XHIGH        L"X-правый" 
#define LOCALIZED_SELECTACTIVEAREA_XLOW         L"X-левый" 
#define LOCALIZED_SELECTACTIVEAREA_STEPSPERINCH L"Количество шагов на дюйм:" 
#define LOCALIZED_SELECTACTIVEAREA_RESET        L"&Сброс"  
#define LOCALIZED_SELECTACTIVEAREA_OK           LOCALIZED_GENERAL_OKBUTTON 
#define LOCALIZED_SELECTACTIVEAREA_CANCEL       LOCALIZED_GENERAL_CANCELBUTTON 

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
#define LOCALIZED_POPUP_COPY                     L"Копировать" 
#define LOCALIZED_POPUP_CUT                      L"Вырезать" 
#define LOCALIZED_POPUP_PASTE                    L"Вставить" 
#define LOCALIZED_POPUP_DELETE                   L"Удалить" 
#define LOCALIZED_POPUP_UNDO                     L"Отменить" 
#define LOCALIZED_POPUP_REDO                     L"Вернуть" 
#define LOCALIZED_POPUP_SELECTALL                L"Выделить всё" 
#define LOCALIZED_POPUP_HELP                     L"Поиск по разделу" 
#define LOCALIZED_POPUP_REMOVELINES              L"Remove Selected Lines" // NOT_YET_LOCALIZED

//
// The menu options on the editor
//
#define LOCALIZED_EDITOR_TITLE                   L"Редактор" 

#define LOCALIZED_EDITOR_FILE                    L"&Файл" 
#define LOCALIZED_EDITOR_FILE_SAVEANDEXIT        L"&Сохранить и выйти\tCtrl+D" 
#define LOCALIZED_EDITOR_FILE_SAVETOWORKSPACE    L"С&охранить" 
#define LOCALIZED_EDITOR_FILE_PRINT              L"&Печать..."  
#define LOCALIZED_EDITOR_FILE_EXIT               L"&Выход"  

#define LOCALIZED_EDITOR_EDIT                    L"&Редактировать" 
#define LOCALIZED_EDITOR_EDIT_UNDO               L"&Отменить\tCtrl+Z" 
#define LOCALIZED_EDITOR_EDIT_REDO               L"&Вернуть\tCtrl+Y" 
#define LOCALIZED_EDITOR_EDIT_CUT                L"&Вырезать\tCtrl+X" 
#define LOCALIZED_EDITOR_EDIT_COPY               L"&Копировать\tCtrl+C" 
#define LOCALIZED_EDITOR_EDIT_PASTE              L"В&ставить\tCtrl+V" 
#define LOCALIZED_EDITOR_EDIT_DELETE             L"&Удалить\tDel" 
#define LOCALIZED_EDITOR_EDIT_CLEARALL           L"О&чистить всё\tCtrl+Del" 
#define LOCALIZED_EDITOR_EDIT_SELECTALL          L"В&ыделить всё\tCtrl+A" 

#define LOCALIZED_EDITOR_SEARCH                  L"&Поиск" 
#define LOCALIZED_EDITOR_SEARCH_FIND             L"&Найти...\tCtrl+F" 
#define LOCALIZED_EDITOR_SEARCH_REPLACE          L"&Замена...\tCtrl+H"  
#define LOCALIZED_EDITOR_SEARCH_NEXT             L"&Следующий\tF3"  

#define LOCALIZED_EDITOR_SET                     L"&Установить"  
#define LOCALIZED_EDITOR_SET_FONT                L"&Шрифт..."  

#define LOCALIZED_EDITOR_TEST                    L"Тест"
#define LOCALIZED_EDITOR_TEST_RUN_SELECTION      L"&Run Selection\tCtrl+R" // NOT_YET_LOCALIZED

#define LOCALIZED_EDITOR_HELP                    L"&Помощь"  
#define LOCALIZED_EDITOR_HELP_INDEX              L"&Индекс" 
#define LOCALIZED_EDITOR_HELP_EDITOR             L"&Редактор" 
#define LOCALIZED_EDITOR_HELP_TOPICSEARCH        L"П&оиск по разделу\tF1"


//
// The strings in the "You have unsaved changes" dialog
//
#define LOCALIZED_UNSAVEDCHANGES                LOCALIZED_YOUHAVEUNSAVEDCHANGES // NOT_YET_LOCALIZED
#define LOCALIZED_UNSAVEDCHANGES_SAVEANDEXIT    L"&Сохранить и выйти" 
#define LOCALIZED_UNSAVEDCHANGES_DONTSAVE       L"&Не сохранять" 
#define LOCALIZED_UNSAVEDCHANGES_CANCEL         LOCALIZED_GENERAL_CANCELBUTTON 
#define LOCALIZED_UNSAVEDCHANGES_MESSAGE1       L"В рабочем пространстве есть не сохранённые данные. Если вы выйдете, эти данные будут потеряны.  " 
#define LOCALIZED_UNSAVEDCHANGES_MESSAGE2       L"Сохранить данные перед выходом?"  


//
// Strings on the Commander window
//
#define LOCALIZED_COMMANDER                     L"Редактор" 
#define LOCALIZED_COMMANDER_HALT                L"Останов" 
#define LOCALIZED_COMMANDER_TRACE               L"Трасс" 
#define LOCALIZED_COMMANDER_NOTRACE             L"Безтрасс" 
#define LOCALIZED_COMMANDER_PAUSE               L"Пауза" 
#define LOCALIZED_COMMANDER_STATUS              L"Статус" 
#define LOCALIZED_COMMANDER_NOSTATUS            L"Безстатуса" 
#define LOCALIZED_COMMANDER_STEP                L"Шаг" 
#define LOCALIZED_COMMANDER_UNSTEP              L"Безшага" 
#define LOCALIZED_COMMANDER_RESET               L"Сброс" 
#define LOCALIZED_COMMANDER_EXECUTE             L"Выполнить" 
#define LOCALIZED_COMMANDER_EDALL               L"Редактор" 

//
// Strings on the Status window
//
#define LOCALIZED_STATUS                        L"Статус" 
#define LOCALIZED_STATUS_PEN                    L"Перо" 
#define LOCALIZED_STATUS_CONTACT                L"Сост:" 
#define LOCALIZED_STATUS_WIDTH                  L"Ширина:" 
#define LOCALIZED_STATUS_STYLE                  L"Режим:" 
#define LOCALIZED_STATUS_ORIENTATION            L"Ориентация" 
#define LOCALIZED_STATUS_PITCH                  L"Уклон:" 
#define LOCALIZED_STATUS_HEADING                L"Направление:" 
#define LOCALIZED_STATUS_ROLL                   L"Крен:" 
#define LOCALIZED_STATUS_TURTLE                 L"Тортила" 
#define LOCALIZED_STATUS_POSITION               L"Позиция(XYZ):" 
#define LOCALIZED_STATUS_WHICH                  L"Номер:" 
#define LOCALIZED_STATUS_VISIBILITY             L"Видимость:" 
#define LOCALIZED_STATUS_COLOR                  L"Цвет" 
#define LOCALIZED_STATUS_PENCOLOR               L"Перо(RGB):" 
#define LOCALIZED_STATUS_FLOODCOLOR             L"Заливка(RGB):" 
#define LOCALIZED_STATUS_SCREENCOLOR            L"Экран(RGB):" 
#define LOCALIZED_STATUS_KERNEL                 L"Ядро" 
#define LOCALIZED_STATUS_CALLS                  L"Вызовы:" 
#define LOCALIZED_STATUS_PEAKMEMORY             L"Пиковая память:" 

#define LOCALIZED_STATUS_PENREVERSE     L"Реверс" 
#define LOCALIZED_STATUS_PENNORMAL      L"Норма" 
#define LOCALIZED_STATUS_PENERASE       L"Ластик" 
#define LOCALIZED_STATUS_PENUP          L"Поднято" 
#define LOCALIZED_STATUS_PENDOWN        L"Опущено" 
#define LOCALIZED_STATUS_PENSHOWN       L"Видима" 
#define LOCALIZED_STATUS_PENHIDDEN      L"Не видима" 
#define LOCALIZED_STATUS_POLYGONS       L"Ломаные" 
#define LOCALIZED_STATUS_VECTORS        L"Вектора" 
#define LOCALIZED_STATUS_NODES          L"Записи" 
#define LOCALIZED_STATUS_NOT_APPLICABLE L"N/A" 

//
// Strings on the Erase|Edit Procedure dialog box
//
#define LOCALIZED_SELECTPROCEDURE_OK            LOCALIZED_GENERAL_OKBUTTON 
#define LOCALIZED_SELECTPROCEDURE_CANCEL        LOCALIZED_GENERAL_CANCELBUTTON 
#define LOCALIZED_SELECTPROCEDURE_ALL           L"&Все" 
#define LOCALIZED_ERASEPROCEDURE                L"Удалить процедуру" 
#define LOCALIZED_EDITPROCEDURE                 L"Редактировать процедуру" 


//
// Strings on the Color Picker Dialog box
//
#define LOCALIZED_SETCOLOR                     L"Установить цвет" 
#define LOCALIZED_SETCOLOR_PENCOLOR            L"Цвет пера" 
#define LOCALIZED_SETCOLOR_FLOODCOLOR          L"Цвет заливки" 
#define LOCALIZED_SETCOLOR_SCREENCOLOR         L"Цвет экрана" 
#define LOCALIZED_SETCOLOR_RED                 L"Красный" 
#define LOCALIZED_SETCOLOR_GREEN               L"Зелёный" 
#define LOCALIZED_SETCOLOR_BLUE                L"Синий" 
#define LOCALIZED_SETCOLOR_OK                  LOCALIZED_GENERAL_OKBUTTON 
#define LOCALIZED_SETCOLOR_CANCEL              LOCALIZED_GENERAL_CANCELBUTTON 
#define LOCALIZED_SETCOLOR_APPLY               LOCALIZED_GENERAL_APPLYBUTTON 

//
// Strings on the Pen Size Picker Dialog box
//
#define LOCALIZED_SETPENSIZE                   L"Размер пера" 
#define LOCALIZED_SETPENSIZE_SIZE              L"Толщина" 
#define LOCALIZED_SETPENSIZE_OK                LOCALIZED_GENERAL_OKBUTTON 
#define LOCALIZED_SETPENSIZE_CANCEL            LOCALIZED_GENERAL_CANCELBUTTON 
#define LOCALIZED_SETPENSIZE_APPLY             LOCALIZED_GENERAL_APPLYBUTTON 


//
// Strings on the "About UniLogo" Dialog box
//
#define LOCALIZED_ABOUTUNI                     L"О " LOCALIZED_GENERAL_PRODUCTNAME 
#define LOCALIZED_ABOUTUNI_VERSION             L"Версия"
#define LOCALIZED_ABOUTUNI_GUI                 L""
#define LOCALIZED_ABOUTUNI_CORE                L""
#define LOCALIZED_ABOUTUNI_INSTALLER           L""
#define LOCALIZED_ABOUTUNI_ADVENTURE           L""
#define LOCALIZED_ABOUTUNI_SPECIALTHANKS       L""
#define LOCALIZED_ABOUTUNI_GPL                 LOCALIZED_GENERAL_PRODUCTNAME L""
#define LOCALIZED_ABOUTUNI_NEWSGROUP           L""
#define LOCALIZED_ABOUTUNI_MULTIMEDIALOGIC     L""
#define LOCALIZED_ABOUTUNILOGO_OK                  LOCALIZED_GENERAL_OKBUTTON 


//
// Strings on the "About UNI" Dialog box
//
#define LOCALIZED_ABOUTMS                      L""
#define LOCALIZED_ABOUTMS_UNI                  L""
#define LOCALIZED_ABOUTMS_CONSIDERDONATING     L"" 
#define LOCALIZED_ABOUTMS_OK                   LOCALIZED_GENERAL_OKBUTTON 


//
// Strings on the SELECTBOX Dialog box
//
#define LOCALIZED_SELECTBOX_OK                 LOCALIZED_GENERAL_OKBUTTON 
#define LOCALIZED_SELECTBOX_CANCEL             LOCALIZED_GENERAL_CANCELBUTTON

//
// Strings on the QUESTIONBOX dialog box
//
#define LOCALIZED_QUESTIONBOX_OK               LOCALIZED_GENERAL_OKBUTTON // NOT_YET_LOCALIZED
#define LOCALIZED_QUESTIONBOX_CANCEL           LOCALIZED_GENERAL_CANCELBUTTON // NOT_YET_LOCALIZED


// 
// Strings in various other dialog boxes
// 

#define LOCALIZED_CHANGESINEDITORMAYBELOST  L"Изменения в этом сеансе редактирования могут быть утеряны.\n\nВы действительно хотите выйти из " LOCALIZED_GENERAL_PRODUCTNAME L"?"
#define LOCALIZED_EDITSESSIONISRUNNING      L"Сеанс редактирования запущен" 

#define LOCALIZED_COULDNOTWRITEBMP            L"Не могу записать .bmp" 
#define LOCALIZED_COULDNOTOPENBMP             L"Не могу открыть .bmp" 
#define LOCALIZED_COULDNOTCREATEBMP           L"Невозможно создать Windows 3.0 рисунок" 
#define LOCALIZED_NOTVALIDBMP                 L"Не растровый рисунок Windows 3.0" 

#define LOCALIZED_YOUHAVEUNSAVEDCHANGES         L"Вы не сохранили на диск" 
#define LOCALIZED_FILENEWWILLERASEWORKSPACE     L"Создание нового сотрет все данные из рабочей области.\n\nПродолжить Новый?" 
#define LOCALIZED_FILELOADMAYOVERWRITEWORKSPACE L"Загружаемый файл будет объединен с данными вашей рабочей области\nи, может изменить ваши несохраненные данные.\n\nПродолжить Загрузить?" 
#define LOCALIZED_FILEOPENWILLERASEWORKSPACE    L"Эта операция сотрет все ваши несохраненные данные.\n\nПродолжить Открыть?" 

#define LOCALIZED_EDITORISOPEN                  L"Вы знаете, что запущен сеанс редактирования?\n\nВсе изменения в этом сеансе редактирования не были сохранены"

#define LOCALIZED_ERROR_CANTREADFILE            L"Невозможно прочитать файл \"%s\" с диска" 
#define LOCALIZED_ERROR_CANTWRITEFILE           L"Невозможно записать файл \"%s\" на диск" 

#define LOCALIZED_SAVETOWORKSPACE                L"Сохраните в рабочую область" 
#define LOCALIZED_CONTENTSCHANGED                L"Contents Changed" // NOT_YET_LOCALIZED
#define LOCALIZED_SAVECHANGEDCONTENTSTOWORKSPACE L"Содержание изменено.\n Хотите вы сохранить изменения в рабочей области?" 



#define LOCALIZED_CURSORISATLASTGOODDEFINITION  L"Обнаружена проблема сохранения  содержания редактора  в рабочую область. Курсор будет помещен за последним успешным определением. \n\n Для установления возможной ошибки активизируйте Командное окно." 
#define LOCALIZED_RETURNTOEDIT                  L"Вернуться в редактор?" 

#define LOCALIZED_EDITFAILEDTOLOAD              LOCALIZED_SAVETOWORKSPACE 

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
#define LOCALIZED_FILEFILTER_ALLFILES L"Все файлы (*.*)|*.*" 
#define LOCALIZED_FILEFILTER_LOGO     L"Лого-файлы (*.lgo)|*.lgo|" LOCALIZED_FILEFILTER_ALLFILES 
#define LOCALIZED_FILEFILTER_IMAGE    L"Растровые файлы (*.bmp)|*.bmp|GIF-файлы (*.gif)|*.gif|" LOCALIZED_FILEFILTER_ALLFILES



//
// strings seen when tracing is enabled
//
#define LOCALIZED_TRACING_STOPS             L" останов\n" 
#define LOCALIZED_TRACING_OUTPUTS           L" возвращает %s\n" 
#define LOCALIZED_TRACING_MAKE              L"пусть %s %s" 
#define LOCALIZED_TRACING_PPROP             L"Дсвойство %s %s %s" 
#define LOCALIZED_TRACING_LOCATION          L" в %s\n%s" 

//
// strings seen when single-stepping execution
//
#define LOCALIZED_STEPPING                  L"Отдельный шаг" 

//
// Notification when defining a procedure with TO in the commander
//
#define LOCALIZED_PROCEDUREDEFINED  L"%s определена\n" 


//
// Words that represent the pen's mode
//
#define LOCALIZED_PENMODE_ERASE    L"ластик" 
#define LOCALIZED_PENMODE_REVERSE  L"обратное" 
#define LOCALIZED_PENMODE_PAINT    L"ручка" 

//
// Error message thrown by Logo
//
#define LOCALIZED_ERROR_FATALINTERNAL          L"Лого: Фатальная внутренняя ошибка" 
#define LOCALIZED_ERROR_OUTOFMEMORYUNREC       L"Лого: Недостаточно памяти" 
#define LOCALIZED_ERROR_OUTOFMEMORY            L"Недостаточно памяти" 
#define LOCALIZED_ERROR_STACKOVERFLOW          L"Переполнение стека" 
#define LOCALIZED_ERROR_TURTLEOUTOFBOUNDS      L"Тортила вышла за границы" 
#define LOCALIZED_ERROR_BADGRAPHINIT           L"не могу инициализировать графику" 
#define LOCALIZED_ERROR_BADDATA                L"%p не нравится %s как аргумент" 
#define LOCALIZED_ERROR_DIDNTOUTPUT            L"%p не возвращает %p" 
#define LOCALIZED_ERROR_NOTENOUGHINPUTS        L"Не хватает аргументов в %p" 
#define LOCALIZED_ERROR_TOOMUCH                L"Слишком много внутренних ()" 
#define LOCALIZED_ERROR_DONTSAYWHATTODOWITH    L"Вы не сказали что делать с %s" 
#define LOCALIZED_ERROR_PARENMISMATCH          L"Слишком много (" 
#define LOCALIZED_ERROR_NOVALUE                L"%s не имеет значения" 
#define LOCALIZED_ERROR_UNEXPECTEDPAREN        L"неопределенная ')'" 
#define LOCALIZED_ERROR_UNEXPECTEDBRACKET      L"неопределенная ']'" 
#define LOCALIZED_ERROR_UNEXPECTEDBRACE        L"неопределенная '}'" 
#define LOCALIZED_ERROR_DONTKNOWHOWTO          L"Я не знаю что делать с  %p" 
#define LOCALIZED_ERROR_NOCATCHTAG             L"Не найдена метка для %p" 
#define LOCALIZED_ERROR_ALREADYDEFINED         L"%p уже определена" 
#define LOCALIZED_ERROR_STOPPING               L"Остановка..." 
#define LOCALIZED_ERROR_ALREADYDRIBBLING       L"Уже запротоколирован" 
#define LOCALIZED_ERROR_FILESYSTEM                   L"Ошибка файловой системы: %p" 
#define LOCALIZED_ERROR_FILESYSTEM_CANTOPEN          L"Не могу открыть файл" 
#define LOCALIZED_ERROR_FILESYSTEM_CANTOPEN2         L"Невозможно открыть файл: %t" 
#define LOCALIZED_ERROR_FILESYSTEM_ALREADYOPEN       L"Файл уже открыт" 
#define LOCALIZED_ERROR_FILESYSTEM_NOTOPEN           L"Файл не открыт" 
#define LOCALIZED_ERROR_FILESYSTEM_CANTCREATEEDITOR  L"Не могу создать редактируемый файл"
#define LOCALIZED_ERROR_FILESYSTEM_CANTSTARTEDITOR   L"Не могу запустить редактор"  
#define LOCALIZED_ERROR_FILESYSTEM_CANTREADEDITOR    L"Не могу прочитать редактируемый файл" 
#define LOCALIZED_ERROR_IFWARNING              L"Возможно вы имели ввиду ЕСЛИИНАЧЕ, а не ЕСЛИ" 
#define LOCALIZED_ERROR_SHADOWWARNING          L"%p затенена локально в вызове процедуры" 
#define LOCALIZED_ERROR_USER                   L"Перемести \"Ошибка" 
#define LOCALIZED_ERROR_ISPRIMITIVE            L"%p базисная" 
#define LOCALIZED_ERROR_TONOTINSIDE            L"Не могу использовать ЭТО внутри процедуры" 
#define LOCALIZED_ERROR_ATTOPLEVEL             L"Можно использовать %p только внутри процедуры" 
#define LOCALIZED_ERROR_ATTOPLEVEL2            L"Вы должны находиться внутри процедуры, чтобы использовать ВЫВОД или СТОП" 
#define LOCALIZED_ERROR_NOTEST                 L"%p без ТЕСТ" 
#define LOCALIZED_ERROR_BADMACROOUTPUT         L"Результат макроса %s вместо списка" 
#define LOCALIZED_ERROR_DEEPEND                L"КОНЕЦ внутри мульти-строковой инструкции" 
#define LOCALIZED_ERROR_DEEPENDIN              L"КОНЕЦ внутри мульти-строковой инструкции в %p" 
#define LOCALIZED_ERROR_UNKNOWN                L"Неизвестное ошибочное условие - внутренняя ошибка." 
#define LOCALIZED_PAUSING                      L"Пауза..." 


// UniLogo-specific error messages.
#define LOCALIZED_ERROR_INVALIDSTATEFORINSTRUCTION L"Invalid state for instruction: %p" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_MODE_ON_SPRITE             L"cannot set the mode of a turtle with a rotating bitmap" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_BITMAPSPECIALTUTRLE        L"cannot make a special turtle use a rotating bitmap" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_BITMAPCLIPBOARD            L"cannot use the clipboard as a rotating bitmap" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_SPECIALFORM                L"%p doesn't like %p as input because it has a special form" // NOT_YET_LOCALIZED

//
// Error messages displayed in Message Boxes.
//
#define LOCALIZED_ERROR                      L"Ошибка" 
#define LOCALIZED_ERROR_BADINPUT             L"Неверный аргумент" 
#define LOCALIZED_ERROR_BADINPUTNOTPAIRED    L"Аргументы не сочетаются" 

#define LOCALIZED_ERROR_CANTOPENPORT         L"Невозможно открыть порт" 
#define LOCALIZED_ERROR_CANTCLOSEPORT        L"Невозможно закрыть порт" 
#define LOCALIZED_ERROR_CANTFLUSHPORT        L"Невозможно сбросить порт"                                                                                                                           
#define LOCALIZED_ERROR_CANTDCBONPORT        L"Невозможно настроить структуру dcb на порту" 
#define LOCALIZED_ERROR_CANTSETPORT          L"Невозможно установить порт" 
#define LOCALIZED_ERROR_PORTALREADYOPEN      L"Порт уже открыт" 
#define LOCALIZED_ERROR_PORTNOTOPEN          L"Порт не открыт" 

#define LOCALIZED_ERROR_WINDOWALREADYEXISTS   L"%s уже существует" 
#define LOCALIZED_ERROR_WINDOWDOESNOTEXIST    L"%s не существует" 

#define LOCALIZED_ERROR_DLLNOTLOADED          L"DLL не загружена" 
#define LOCALIZED_ERROR_DLLLOADFAILED         L"DLL загружен неудачно" 
#define LOCALIZED_ERROR_DLLINVALIDDATATYPE    L"Недопустимый тип данных аргумента" 
#define LOCALIZED_ERROR_DLLINVALIDOUTPUTTYPE  L"Недопустимый тип данных результата" 
#define LOCALIZED_ERROR_DLLFUNCTIONNOTFOUND   L"Функция не найдена" 
#define LOCALIZED_ERROR_DLLTYPEDATANOTPAIRED  L"Не все типы/Данные аргументов соединены" 

#define LOCALIZED_ERROR_NETWORK               L"Ошибка сети" 
#define LOCALIZED_ERROR_NETWORKRECEIVE        L"Ошибка загрузки данных" 
#define LOCALIZED_ERROR_NETWORKSEND           L"Ошибка передачи данных" 
#define LOCALIZED_ERROR_NETWORKSHUTDOWN       L"Неизвестная ошибка, Сеть может быть недоступна" 
#define LOCALIZED_ERROR_NETWORKNOTSTARTED     L"Не запущена" 
#define LOCALIZED_ERROR_NETWORKALREADYSTARTED L"Уже запущена" 
#define LOCALIZED_ERROR_NETWORKALREADYON      L"Уже включено" 
#define LOCALIZED_ERROR_NETWORKALREADYOFF     L"Уже выключено" 

// The rest of the network errors shouldn't really be seen -- may be okay not to localize
#define LOCALIZED_ERROR_NETWORKNAMETOOLONG         L"Слишком длинное имя" 
#define LOCALIZED_ERROR_NETWORKNOTINITIALIZED      L"Not initialized" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKSYSTEMNOTREADY      L"System not ready" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKVERSIONNOTSUPPORTED L"Version is not supported" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKSENDAFTERSHUTDOWN   L"Can't send after socket shutdown" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKINTERRUPTED         L"Interrupted system call" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKHOSTNOTFOUNDAUTH    L"Authoritative Answer: Host not found" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKHOSTNOTFOUNDNONAUTH L"Non-Authoritative: Host not found. See NETSTARTUP" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKNOTRECOVERABLE      L"Non-recoverable error" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKNODATA              L"No data record available" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKBADFILENUMBER       L"Bad file number" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKWOULDBLOCK          L"Operation would block" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKNOWINPROGRESS       L"Operation now in progress" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKALREADYINPROGRESS   L"Operation already in progress" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKBADADDRESS          L"Bad address" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKNEEDDESTADDRESS     L"Destination address required" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKMESSAGETOOLONG      L"Message too long" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKPFNOTSUPPORTED      L"Protocol family not supported" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKDIRNOTEMPTY         L"Directory not empty" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKAPPLIMITREACHED     L"Application limit has been reached" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKDISKQUOTA           L"Disk quota exceeded" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKINVALIDARGUMENTS    LOCALIZED_ERROR_BADINPUT // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKTOOMANYFILES        L"Too many open files" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKACCESSDENIED        L"Access denied" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKNOTASOCKET          L"Socket operation on non-socket" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKADDRNOTAVAILABLE    L"Can't assign requested address" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKADDRINUSE           L"Address already in use" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKAFNOTSUPPORTED      L"Address family not supported by protocol family" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKTIMEDOUT            L"Connection timed out" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKTYPENOTSUPPORTED    L"Socket type not supported" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKPROTONOTSUPPORTED   L"Protocol not supported" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKNOBUFFER            L"No space in buffer" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKALREADYCONNECTED    L"Socket is already connected" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKNOTCONNECTED        L"Socket is not connected" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKBADPROTOOPT         L"Bad protocol option" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKCONNECTIONRESET     L"Connection reset by peer" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKCONNECTIONABORT     L"Software caused connection abort" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKISDOWN              L"Network is down" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKRESET               L"Network was reset" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKCONNECTIONREFUSED   L"Connection refused" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKHOSTISDOWN          L"Host is down" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKHOSTISUNREACHABLE   L"Host is unreachable" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKBADPROTOTYPE        L"Protocol is wrong type for socket" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKBADOPNOTSUPPORTED   L"Operation not supported on socket" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKUNREACHABLE         L"No path to remote host was found" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_NETWORKTOOMANYREFS         L"Too many references" // NOT_YET_LOCALIZED

#define LOCALIZED_ERROR_POLYSTART               L"Ошибка НАЧМНОГОУГ" 
#define LOCALIZED_ERROR_POLYSTARTALREADYSTARTED L"Многоугольник уже начат" 

#define LOCALIZED_ERROR_POLYEND                 L"Ошибка КОНМНОГОУГ" 
#define LOCALIZED_ERROR_POLYENDNOTSTARTED       L"Многоугольник не начат" 
#define LOCALIZED_ERROR_POLYENDNEED3VECTORS     L"Должно быть по крайней мере 3 вектора, чтобы определить многоугольник" 

#define LOCALIZED_ERROR_SOUND                 L"Ошибка звука" 

#define LOCALIZED_ERROR_MIDI                  L"Ошибка MIDI" 
#define LOCALIZED_ERROR_MIDIINVALIDDEVICE     L"Недопустимое MIDI устройство" 
#define LOCALIZED_ERROR_MIDIALREADYOPEN       L"Уже открыто" 
#define LOCALIZED_ERROR_MIDINOTOPEN           L"Не открыто" 

#define LOCALIZED_ERROR_CLIPBOARDISEMPTY      L"В буфере нет текста" 

#define LOCALIZED_ERROR_MCI                   L"Ошибка МКИ" 

#define LOCALIZED_ERROR_TIMERNOTFOUND         L"Таймер не найден" 

#define LOCALIZED_ERROR_HHCTRLNOTLOADED       L"Онлайн-помощь недоступна, т.к. hhctrl.ocx не может быть загружена." 

#define LOCALIZED_ERROR_BADCOMMANDLINE        L"Ошибка командной строки"  

#define LOCALIZED_ERROR_TMPNOTDEFINED         L"Переменная среды TMP не определена или не допустима.\n" LOCALIZED_GENERAL_PRODUCTNAME L" будет использовать C: \\для хранения временных файлов"

#define LOCALIZED_ERROR_GIFSAVEFAILED         L"Проблема создания GIF, проверьте память и дисковое пространство" 
#define LOCALIZED_ERROR_GIFREADFAILED         L"Проблема чтения GIF, проверьте память и дисковое пространство" 

#define LOCALIZED_ERROR_BITMAPINDEXOUTOFRANGE  L"Растровый индекс вне диапазона" 
#define LOCALIZED_ERROR_BITMAPCUTFAILED        L"Операция Вырезать не удалась, возможно нехватает памяти" 

#define LOCALIZED_ERROR_BITMAPNOTHINGTOPASTE    L"Нечего вставить" 
#define LOCALIZED_ERROR_BITMAPINDEXISNOTBITMAP  L"Растровый индекс должен калиброваться с битовым массивом" 

#define LOCALIZED_ERROR_TURTLEHASNOPICTURE      L"Для тортилы %d нет рисунка, остановиться" 

#define LOCALIZED_ERROR_FONTNOTFOUND            L"\nК сожалению, шрифт по имени %s, не найден. Выберите один из следующих:\n" 

#define LOCALIZED_ERROR_PRINTERCANTSCALE        L"Драйвер печати не поддерживает эту функцию"  
#define LOCALIZED_ERROR_CANTDRAWIMAGE           L"Невозможно прорисовать изображение" 
#define LOCALIZED_ERROR_CANTEXTRACTIMAGE        L"Невозможно получить изображение" 
#define LOCALIZED_ERROR_SUBCODE                 L"Дополнительный код" 

//
// Strings in the dialog box for reading from "stdin"
//
#define LOCALIZED_INPUT         L"Ввод:" 
#define LOCALIZED_PROMPT_TO     L"Это (Отмена для окончания)" 
#define LOCALIZED_PROMPT_LIST   L"Список (Отмена для останова)" 
#define LOCALIZED_PROMPT_PAUSE  L"Pause Mode (Cancel to Continue)" // NOT_YET_LOCALIZED
#define LOCALIZED_PROMPT_INPUT  L"Ввод (Отмена для останова)" 

//
// Messages shown by the FILE API.
//
#define LOCALIZED_FILE_CHDIRSUCCEEDED      L"Измененный на \"%s\"" 
#define LOCALIZED_FILE_CHDIRFAILED         L"Невозможно измпап на папку \"%s\"" 
#define LOCALIZED_FILE_POPPEDTO            L"Выше к \"%s\"" 
#define LOCALIZED_FILE_MKDIRSUCCEEDED      L"Теперь во вновь созданной папке \"%s\""  
#define LOCALIZED_FILE_MKDIRFAILED         L"Невозможно создать папку \"%s\""  
#define LOCALIZED_FILE_RMDIRSUCCEEDED      L"Перемещена папка \"%s\""  
#define LOCALIZED_FILE_RMDIRFAILED         L"Не удалась операция перемещения папки \"%s\""  
#define LOCALIZED_FILE_RMDIRFAILEDNOEXIST  L"Такой папки не существует." 
#define LOCALIZED_FILE_RMDIRFAILEDNOTEMPTY L"Убедитесь в том, что директория пуста перед её перемещением." 


//
// The default title of a Logo picture when it is printed
//
#define LOCALIZED_BITMAPPRINTOUTTITLE       L"Лого-рисунок" 

//
// Other strings
//
#define LOCALIZED_ACTIVEAREA    L"Активная область" 
#define LOCALIZED_INFORMATION   L"Информация" 
#define LOCALIZED_WARNING       L"Предупреждение" 
#define LOCALIZED_UNTITLED      L"Без заголовка" 
#define LOCALIZED_UNKNOWN       L"Неизвестно" 

// The text which is shown when the Unbound node is formatted.
// This happens when a macro outputs nothing (instead of a list)
#define LOCALIZED_UNBOUND       L"Неограниченно" 

// The title of the Editor's Find/Replace dialog box
#define LOCALIZED_EDITOR_TITLE_FIND     L"Найти"
#define LOCALIZED_EDITOR_TITLE_REPLACE  L"Замена"

//
// The text that's displayed when the Editor's Search->Find fails.
//
#define LOCALIZED_STRINGTABLE_CANNOTFINDSTRING L"%s не найден" 


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
#define LOCALIZED_COLOR_ALICEBLUE             L"серебристо-голубой" 
#define LOCALIZED_COLOR_ANTIQUEWHITE          L"белый_антик" 
#define LOCALIZED_COLOR_AQUA                  L"аква" 
#define LOCALIZED_COLOR_AQUAMARINE            L"аквамарин" 
#define LOCALIZED_COLOR_AZURE                 L"лазурный" 
#define LOCALIZED_COLOR_BEIGE                 L"бежевый" 
#define LOCALIZED_COLOR_BISQUE                L"кремовый" 
#define LOCALIZED_COLOR_BLACK                 L"Черный" 
#define LOCALIZED_COLOR_BLANCHEDALMOND        L"бланшминдальный" 
#define LOCALIZED_COLOR_BLUE                  L"синий" 
#define LOCALIZED_COLOR_BLUEVIOLET            L"фиолетово-голубой" 
#define LOCALIZED_COLOR_BROWN                 L"коричневый" 
#define LOCALIZED_COLOR_BURLYWOOD             L"желтый_легкий" 
#define LOCALIZED_COLOR_CADETBLUE             L"голубой_кадет" 
#define LOCALIZED_COLOR_CHARTREUSE            L"шартрез" 
#define LOCALIZED_COLOR_CHOCOLATE             L"шоколадный" 
#define LOCALIZED_COLOR_CORAL                 L"коралл" 
#define LOCALIZED_COLOR_CORNFLOWERBLUE        L"василек" 
#define LOCALIZED_COLOR_CORNSILK              L"шелковистый" 
#define LOCALIZED_COLOR_CRIMSON               L"малиновый" 
#define LOCALIZED_COLOR_CYAN                  L"голубой" 
#define LOCALIZED_COLOR_DARKBLUE              L"темно-синий" 
#define LOCALIZED_COLOR_DARKCYAN              L"темно-голубой" 
#define LOCALIZED_COLOR_DARKGOLDENROD         L"темно-золотистокрасный" 
#define LOCALIZED_COLOR_DARKGRAY              L"темно-серый" 
#define LOCALIZED_COLOR_DARKGREEN             L"темно-зеленый" 
#define LOCALIZED_COLOR_DARKGREY              L"темно-серый" 
#define LOCALIZED_COLOR_DARKKHAKI             L"хаки_темный" 
#define LOCALIZED_COLOR_DARKMAGENTA           L"темно-сиреневый" 
#define LOCALIZED_COLOR_DARKOLIVEGREEN        L"темно-оливкогозеленый" 
#define LOCALIZED_COLOR_DARKORANGE            L"темно-оранжевый" 
#define LOCALIZED_COLOR_DARKORCHID            L"темно-лиловый" 
#define LOCALIZED_COLOR_DARKRED               L"темно-красный" 
#define LOCALIZED_COLOR_DARKSALMON            L"темно-оранжеворозовый" 
#define LOCALIZED_COLOR_DARKSEAGREEN          L"морской_волны_темный" 
#define LOCALIZED_COLOR_DARKSLATEBLUE         L"темно-голубоватосерый" 
#define LOCALIZED_COLOR_DARKSLATEGRAY         L"темно-синеватоватосерый" 
#define LOCALIZED_COLOR_DARKSLATEGREY         L"темно-синеватоватосерый" 
#define LOCALIZED_COLOR_DARKTURQUOISE         L"темно-бирюзовый" 
#define LOCALIZED_COLOR_DARKVIOLET            L"темно-фиолетовый" 
#define LOCALIZED_COLOR_DEEPPINK              L"темно-розовый" 
#define LOCALIZED_COLOR_DEEPSKYBLUE           L"темно-небесносиний" 
#define LOCALIZED_COLOR_DIMGRAY               L"тускло-серый" 
#define LOCALIZED_COLOR_DIMGREY               L"тускло-серый" 
#define LOCALIZED_COLOR_DODGERBLUE            L"тускло-васильковый" 
#define LOCALIZED_COLOR_FIREBRICK             L"кирпичный" 
#define LOCALIZED_COLOR_FLORALWHITE           L"цветочно-белый" 
#define LOCALIZED_COLOR_FORESTGREEN           L"лесной_зелени" 
#define LOCALIZED_COLOR_FUCHSIA               L"фуксия"
#define LOCALIZED_COLOR_GAINSBORO             L"гейнсборо" 
#define LOCALIZED_COLOR_GHOSTWHITE            L"туманно-белый" 
#define LOCALIZED_COLOR_GOLD                  L"золотой" 
#define LOCALIZED_COLOR_GOLDENROD             L"красно-золотой" 
#define LOCALIZED_COLOR_GRAY                  L"серый" 
#define LOCALIZED_COLOR_GREEN                 L"Зелёный" 
#define LOCALIZED_COLOR_GREENYELLOW           L"желто-зеленый" 
#define LOCALIZED_COLOR_GREY                  L"серый" 
#define LOCALIZED_COLOR_HONEYDEW              L"желто-оранжевый" 
#define LOCALIZED_COLOR_HOTPINK               L"ярко-розовый"
#define LOCALIZED_COLOR_INDIANRED             L"ярко-красный" 
#define LOCALIZED_COLOR_INDIGO                L"индиго" 
#define LOCALIZED_COLOR_IVORY                 L"слоновой_кости" 
#define LOCALIZED_COLOR_KHAKI                 L"хаки" 
#define LOCALIZED_COLOR_LAVENDER              L"лавандовый" 
#define LOCALIZED_COLOR_LAVENDERBLUSH         L"красновато-лавандовый" 
#define LOCALIZED_COLOR_LAWNGREEN             L"зеленой_лужайки" 
#define LOCALIZED_COLOR_LEMONCHIFFON          L"лимонный" 
#define LOCALIZED_COLOR_LIGHTBLUE             L"светло-синий" 
#define LOCALIZED_COLOR_LIGHTCORAL            L"светло-коралловый" 
#define LOCALIZED_COLOR_LIGHTCYAN             L"светло-голубой" 
#define LOCALIZED_COLOR_LIGHTGOLDENRODYELLOW  L"светло-жетлтокраснозолотой" 
#define LOCALIZED_COLOR_LIGHTGRAY             L"светло-серый" 
#define LOCALIZED_COLOR_LIGHTGREEN            L"светло-зеленый" 
#define LOCALIZED_COLOR_LIGHTGREY             L"светло-серый" 
#define LOCALIZED_COLOR_LIGHTPINK             L"светло-розовый" 
#define LOCALIZED_COLOR_LIGHTSALMON           L"светло-оранжеворозовый" 
#define LOCALIZED_COLOR_LIGHTSEAGREEN         L"морской_волны_светлый" 
#define LOCALIZED_COLOR_LIGHTSKYBLUE          L"светло-небесносиний" 
#define LOCALIZED_COLOR_LIGHTSLATEGRAY        L"светло-синеватоватосерый" 
#define LOCALIZED_COLOR_LIGHTSLATEGREY        L"светло-синеватоватосерый" 
#define LOCALIZED_COLOR_LIGHTSTEELBLUE        L"светло-стальной" 
#define LOCALIZED_COLOR_LIGHTYELLOW           L"светло-желтый" 
#define LOCALIZED_COLOR_LIME                  L"липовый" 
#define LOCALIZED_COLOR_LIMEGREEN             L"зеленая_липа" 
#define LOCALIZED_COLOR_LINEN                 L"льняной" 
#define LOCALIZED_COLOR_MAGENTA               L"сиреневый" 
#define LOCALIZED_COLOR_MAROON                L"каштановый" 
#define LOCALIZED_COLOR_MEDIUMAQUAMARINE      L"умеренно-аквамариновый" 
#define LOCALIZED_COLOR_MEDIUMBLUE            L"умеренно-синий" 
#define LOCALIZED_COLOR_MEDIUMORCHID          L"умеренно-темнолиловый" 
#define LOCALIZED_COLOR_MEDIUMPURPLE          L"умеренно-пурпурный" 
#define LOCALIZED_COLOR_MEDIUMSEAGREEN        L"морской_волны_умеренный" 
#define LOCALIZED_COLOR_MEDIUMSLATEBLUE       L"умеренно-голубоватосерый" 
#define LOCALIZED_COLOR_MEDIUMSPRINGGREEN     L"весенней_зелени_умеренный L" 
#define LOCALIZED_COLOR_MEDIUMTURQUOISE       L"умеренно-бирюзовый" 
#define LOCALIZED_COLOR_MEDIUMVIOLETRED       L"умеренно-фиолетовокрасный" 
#define LOCALIZED_COLOR_MIDNIGHTBLUE          L"черно-синий" 
#define LOCALIZED_COLOR_MINTCREAM             L"мятно-кремовый" 
#define LOCALIZED_COLOR_MISTYROSE             L"туманно-розовый" 
#define LOCALIZED_COLOR_MOCCASIN              L"болотный" 
#define LOCALIZED_COLOR_NAVAJOWHITE           L"грязно-белый" 
#define LOCALIZED_COLOR_NAVY                  L"морской" 
#define LOCALIZED_COLOR_OLDLACE               L"старое_кружево" 
#define LOCALIZED_COLOR_OLIVE                 L"оливковый" 
#define LOCALIZED_COLOR_OLIVEDRAB             L"тускло-оливковый" 
#define LOCALIZED_COLOR_ORANGE                L"оранжевый" 
#define LOCALIZED_COLOR_ORANGERED             L"красно-оранжевый" 
#define LOCALIZED_COLOR_ORCHID                L"лиловый" 
#define LOCALIZED_COLOR_PALEGOLDENROD         L"бледно-золотой" 
#define LOCALIZED_COLOR_PALEGREEN             L"бледно-зеленый" 
#define LOCALIZED_COLOR_PALETURQUOISE         L"бледно-бирюзовый" 
#define LOCALIZED_COLOR_PALEVIOLETRED         L"бледно-фиолетовокрасный" 
#define LOCALIZED_COLOR_PAPAYAWHIP            L"побег_папайи" 
#define LOCALIZED_COLOR_PEACHPUFF             L"персиковый" 
#define LOCALIZED_COLOR_PERU                  L"светло-коричневый" 
#define LOCALIZED_COLOR_PINK                  L"Розовый" 
#define LOCALIZED_COLOR_PLUM                  L"сливовый" 
#define LOCALIZED_COLOR_POWDERBLUE            L"туманно-синий" 
#define LOCALIZED_COLOR_PURPLE                L"пурпурный" 
#define LOCALIZED_COLOR_RED                   L"Красный" 
#define LOCALIZED_COLOR_ROSYBROWN             L"розово-коричневый" 
#define LOCALIZED_COLOR_ROYALBLUE             L"королевский_синий" 
#define LOCALIZED_COLOR_SADDLEBROWN           L"кожаного_седла" 
#define LOCALIZED_COLOR_SALMON                L"оранжево-розовый" 
#define LOCALIZED_COLOR_SANDYBROWN            L"рыжеватый" 
#define LOCALIZED_COLOR_SEAGREEN              L"морской_волны" 
#define LOCALIZED_COLOR_SEASHELL              L"морской_раковины" 
#define LOCALIZED_COLOR_SIENNA                L"охра" 
#define LOCALIZED_COLOR_SILVER                L"серебристый" 
#define LOCALIZED_COLOR_SKYBLUE               L"небесно-синий" 
#define LOCALIZED_COLOR_SLATEBLUE             L"голубовато-серый" 
#define LOCALIZED_COLOR_SLATEGRAY             L"синевато-серый" 
#define LOCALIZED_COLOR_SLATEGREY             L"синевато-серый" 
#define LOCALIZED_COLOR_SNOW                  L"снежный" 
#define LOCALIZED_COLOR_SPRINGGREEN           L"весенней_зелени L" 
#define LOCALIZED_COLOR_STEELBLUE             L"синевато-стальной" 
#define LOCALIZED_COLOR_TAN                   L"загар" 
#define LOCALIZED_COLOR_TEAL                  L"зеленовато-голубой" 
#define LOCALIZED_COLOR_THISTLE               L"чертополоха" 
#define LOCALIZED_COLOR_TOMATO                L"томатный" 
#define LOCALIZED_COLOR_TURQUOISE             L"бирюзовый" 
#define LOCALIZED_COLOR_VIOLET                L"фиолетовый" 
#define LOCALIZED_COLOR_WHEAT                 L"пшеничный" 
#define LOCALIZED_COLOR_WHITE                 L"белый" 
#define LOCALIZED_COLOR_WHITESMOKE            L"дымчато-белый" 
#define LOCALIZED_COLOR_YELLOW                L"желтый" 
#define LOCALIZED_COLOR_YELLOWGREEN           L"желто-зеленый" 

//
// The name of each "window class" that DEBUGWINDOWS prints.
// These should match the corresponding terms that is used
// in the  LOCALIZED_ALTERNATE_*CREATE procedures.
//
#define LOCALIZED_WINDOWCLASSNAME_WINDOW       L"Окно" 
#define LOCALIZED_WINDOWCLASSNAME_STATIC       L"Заголовок" 
#define LOCALIZED_WINDOWCLASSNAME_LISTBOX      L"Список_записей" 
#define LOCALIZED_WINDOWCLASSNAME_COMBOBOX     L"Поле" 
#define LOCALIZED_WINDOWCLASSNAME_BUTTON       L"Кнопка" 
#define LOCALIZED_WINDOWCLASSNAME_SCROLLBAR    L"Полоса_прорутки" 
#define LOCALIZED_WINDOWCLASSNAME_GROUPBOX     L"Группа" 
#define LOCALIZED_WINDOWCLASSNAME_RADIOBUTTON  L"Радио_кнопка" 
#define LOCALIZED_WINDOWCLASSNAME_CHECKBOX     L"Переключатель" 
#define LOCALIZED_WINDOWCLASSNAME_DIALOG       L"Диалог" 


//
// The name of the default font face name.
// This should only be translated if the given font face doesn't include glyphs
// for characters in your language.  The specified font face name must be part
// of all Windows versions from Windows XP onward that would support your
// language.
//
#define LOCALIZED_DEFAULT_FONT_FACE L"Courier New" // NOT_YET_LOCALIZED
