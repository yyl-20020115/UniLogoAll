
//
// Localized "alternate" spellings of Logo reserved words
//
#define LOCALIZED_ALTERNATE_TRUE     L"verd"
#define LOCALIZED_ALTERNATE_FALSE    L"falso"
#define LOCALIZED_ALTERNATE_END      L"fim"
#define LOCALIZED_ALTERNATE_TOPLEVEL L"nφvelacima"
#define LOCALIZED_ALTERNATE_SYSTEM   L"sistema"

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
#define LOCALIZED_ALTERNATE__DEFMACRO              L".defMacro"
#define LOCALIZED_ALTERNATE__EQ                    L".ig"
#define LOCALIZED_ALTERNATE__MACRO                 L".macro"
#define LOCALIZED_ALTERNATE__MAYBEOUTPUT           L".talvezDevolva"
#define LOCALIZED_ALTERNATE__SETBF                 L".mude┌ltimos"
#define LOCALIZED_ALTERNATE__SETFIRST              L".mudePrimeiro"
#define LOCALIZED_ALTERNATE__SETITEM               L".mudeItem"
#define LOCALIZED_ALTERNATE_ACTIVEAREA             L"ßreaAtiva"
#define LOCALIZED_ALTERNATE_ALLOPEN                L"arqabertos"
#define LOCALIZED_ALTERNATE_AND                    L"e"
#define LOCALIZED_ALTERNATE_APPLY                  L"aplique"
#define LOCALIZED_ALTERNATE_ARCCOS                 L"arccos"
#define LOCALIZED_ALTERNATE_ARCSIN                 L"arcsen"
#define LOCALIZED_ALTERNATE_ARCTAN                 L"arctan"
#define LOCALIZED_ALTERNATE_ARITY                  L"arity" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_ARRAY                  L"vetor"
#define LOCALIZED_ALTERNATE_ARRAYP                 L"Θvetor?"
#define LOCALIZED_ALTERNATE_ARRAY_                 L"evetor?"
#define LOCALIZED_ALTERNATE_ASCII                  L"ascii"
#define LOCALIZED_ALTERNATE_ASHIFT                 L"desloquebitsa"
#define LOCALIZED_ALTERNATE_BACK                   L"paratrßs"
#define LOCALIZED_ALTERNATE_BACKSLASHEDP           L"tembarrainvertida?"
#define LOCALIZED_ALTERNATE_BACKSLASHED_           L"tembarrainv?"
#define LOCALIZED_ALTERNATE_BEFOREP                L"Θanterior?"
#define LOCALIZED_ALTERNATE_BEFORE_                L"eant?"
#define LOCALIZED_ALTERNATE_BF                     L"sp"
#define LOCALIZED_ALTERNATE_BFS                    L"sps"
#define LOCALIZED_ALTERNATE_BITAND                 L"bitE"
#define LOCALIZED_ALTERNATE_BITBLOCK               L"blocobmp"
#define LOCALIZED_ALTERNATE_BITCOPY                L"copiebmp"
#define LOCALIZED_ALTERNATE_BITCUT                 L"recortebmp"
#define LOCALIZED_ALTERNATE_BITFIT                 L"mudebmp"
#define LOCALIZED_ALTERNATE_BITINDEX               L"φndicebmp"
#define LOCALIZED_ALTERNATE_BITLOAD                L"carreguebmp"
#define LOCALIZED_ALTERNATE_BITLOADSIZE            L"tamcarreguebmp"
#define LOCALIZED_ALTERNATE_BITSIZE                L"tamBmp"
#define LOCALIZED_ALTERNATE_BITMAPTURTLE           L"tatbmp"
#define LOCALIZED_ALTERNATE_BITMODE                L"modobmp"
#define LOCALIZED_ALTERNATE_BITNOT                 L"bitNπo" // L"bitInverso"
#define LOCALIZED_ALTERNATE_BITOR                  L"bitOu"
#define LOCALIZED_ALTERNATE_BITPASTE               L"colebmp"
#define LOCALIZED_ALTERNATE_BITPASTETOINDEX        L"colebmp═ndice"
#define LOCALIZED_ALTERNATE_BITSAVE                L"salvebmp"
#define LOCALIZED_ALTERNATE_BITXOR                 L"bitXou"
#define LOCALIZED_ALTERNATE_BK                     L"pt"
#define LOCALIZED_ALTERNATE_BL                     L"su"
#define LOCALIZED_ALTERNATE_BURIED                 L"enterrados"
#define LOCALIZED_ALTERNATE_BURY                   L"enterre"
#define LOCALIZED_ALTERNATE_BUTFIRST               L"semPrimeiro"
#define LOCALIZED_ALTERNATE_BUTFIRSTS              L"semPrimeiros"
#define LOCALIZED_ALTERNATE_BUTLAST                L"sem┌ltimo"
#define LOCALIZED_ALTERNATE_BUTTONCREATE           L"crieBotπo"
#define LOCALIZED_ALTERNATE_BUTTONDELETE           L"apagueBotπo"
#define LOCALIZED_ALTERNATE_BUTTONENABLE           L"ativeBotπo"
#define LOCALIZED_ALTERNATE_BUTTONUPDATE           L"atualizeBotπo"
#define LOCALIZED_ALTERNATE_BUTTONP                L"Θbotπo?"
#define LOCALIZED_ALTERNATE_BUTTON_                L"ebotao?"
#define LOCALIZED_ALTERNATE_BYE                    L"adeus"
#define LOCALIZED_ALTERNATE_CATCH                  L"pegue"
#define LOCALIZED_ALTERNATE_CHAR                   L"car"
#define LOCALIZED_ALTERNATE_CHDIR                  L"mudeDir"
#define LOCALIZED_ALTERNATE_CHECKBOXCREATE         L"crieCaixamarcaτπo"
#define LOCALIZED_ALTERNATE_CHECKBOXDELETE         L"apagueCaixamarcaτπo"
#define LOCALIZED_ALTERNATE_CHECKBOXENABLE         L"ativeCaixamarcaτπo"
#define LOCALIZED_ALTERNATE_CHECKBOXGET            L"estadoCaixamarcaτπo"
#define LOCALIZED_ALTERNATE_CHECKBOXSET            L"mudeCaixamarcaτπo"
#define LOCALIZED_ALTERNATE_CLEAN                  L"apagueDesenho"
#define LOCALIZED_ALTERNATE_CLEARPALETTE           L"limpePaleta"
#define LOCALIZED_ALTERNATE_CLEARSCREEN            L"tartaruga"
#define LOCALIZED_ALTERNATE_CLEARTEXT              L"limpeJanelaComandos"
#define LOCALIZED_ALTERNATE_CLEARTIMER             L"desativeTemporizador"
#define LOCALIZED_ALTERNATE_CLOSE                  L"fechearq"
#define LOCALIZED_ALTERNATE_CLOSEALL               L"fecheTodosArq"
#define LOCALIZED_ALTERNATE_CO                     L"co"
#define LOCALIZED_ALTERNATE_COMBOBOXADDSTRING      L"adicionenaCaixaCombo"
#define LOCALIZED_ALTERNATE_COMBOBOXCREATE         L"crieCaixaCombo"
#define LOCALIZED_ALTERNATE_COMBOBOXDELETE         L"apagueCaixaCombo"
#define LOCALIZED_ALTERNATE_COMBOBOXENABLE         L"ativeCaixaCombo"
#define LOCALIZED_ALTERNATE_COMBOBOXDELETESTRING   L"retiredaCaixaCombo"
#define LOCALIZED_ALTERNATE_COMBOBOXGETTEXT        L"leiatextoCaixaCombo"
#define LOCALIZED_ALTERNATE_COMBOBOXSETTEXT        L"mudetextoCaixaCombo"
#define LOCALIZED_ALTERNATE_CONTENTS               L"desenterrados"
#define LOCALIZED_ALTERNATE_CONTINUE               L"continue"
#define LOCALIZED_ALTERNATE_COPYDEF                L"copieDef"
#define LOCALIZED_ALTERNATE_COS                    L"cos"
#define LOCALIZED_ALTERNATE_COUNT                  L"conteItem" //"numelem"
#define LOCALIZED_ALTERNATE_CS                     L"tat"
#define LOCALIZED_ALTERNATE_CT                     L"ljc"
#define LOCALIZED_ALTERNATE_CURSOR                 L"cursor"
#define LOCALIZED_ALTERNATE_DEBUGWINDOWS           L"rastreieJanela"
#define LOCALIZED_ALTERNATE_DEFINE                 L"defina"
#define LOCALIZED_ALTERNATE_DEFINEDP               L"Θdefinido?"
#define LOCALIZED_ALTERNATE_DEFINED_               L"edef?"
#define LOCALIZED_ALTERNATE_DIALOGCREATE           L"crieDißlogo"
#define LOCALIZED_ALTERNATE_DIALOGENABLE           L"ativeDißlogo"
#define LOCALIZED_ALTERNATE_DIALOGDELETE           L"apagueDißlogo"
#define LOCALIZED_ALTERNATE_DIALOGFILEOPEN         L"dißlogoAbreArq"
#define LOCALIZED_ALTERNATE_DIALOGFILESAVE         L"dißlogoSalveArq"
#define LOCALIZED_ALTERNATE_DIFFERENCE             L"diferenτa"
#define LOCALIZED_ALTERNATE_DIRECTORIES            L"diret≤rios"
#define LOCALIZED_ALTERNATE_DLLCALL                L"chameDLL"
#define LOCALIZED_ALTERNATE_DLLFREE                L"libereDLL"
#define LOCALIZED_ALTERNATE_DLLLOAD                L"carregueDLL"
#define LOCALIZED_ALTERNATE_DOWN                   L"baixenz"
#define LOCALIZED_ALTERNATE_DOWNPITCH              L"baixeNariz"
#define LOCALIZED_ALTERNATE_DRIBBLE                L"registre"
#define LOCALIZED_ALTERNATE_ED                     L"ed"
#define LOCALIZED_ALTERNATE_EDIT                   L"edite"
#define LOCALIZED_ALTERNATE_ELLIPSEARC             L"arcoElipse"
#define LOCALIZED_ALTERNATE_EMPTYP                 L"Θvazia?"
#define LOCALIZED_ALTERNATE_EMPTY_                 L"evazia?"
#define LOCALIZED_ALTERNATE_EOFP                   L"efimarq?"
#define LOCALIZED_ALTERNATE_EOF_                   L"Θfimarq?"
#define LOCALIZED_ALTERNATE_EQUALP                 L"sπoiguais?"
#define LOCALIZED_ALTERNATE_EQUAL_                 L"saoig?"
#define LOCALIZED_ALTERNATE_ER                     L"el"
#define LOCALIZED_ALTERNATE_ERASE                  L"apague"
#define LOCALIZED_ALTERNATE_ERASEFILE              L"apagueArquivo"
#define LOCALIZED_ALTERNATE_ERF                    L"apagueArq"
#define LOCALIZED_ALTERNATE_ERROR                  L"erro"
#define LOCALIZED_ALTERNATE_EVENTCHECK             L"verifiqueEventos"
#define LOCALIZED_ALTERNATE_EXP                    L"exp"
#define LOCALIZED_ALTERNATE_FD                     L"pf"
#define LOCALIZED_ALTERNATE_FENCE                  L"ponhalimite"
#define LOCALIZED_ALTERNATE_FILL                   L"pinte"
#define LOCALIZED_ALTERNATE_FILES                  L"arquivos"
#define LOCALIZED_ALTERNATE_FIRST                  L"primeiro"
#define LOCALIZED_ALTERNATE_FIRSTS                 L"primeiros"
#define LOCALIZED_ALTERNATE_FLOODCOLOR             L"cordePreenchimento"
#define LOCALIZED_ALTERNATE_FONTFACENAMES          L"tiposDeLetra"
#define LOCALIZED_ALTERNATE_FOREVER                L"parasempre"
#define LOCALIZED_ALTERNATE_FORM                   L"formatoN·mero"
#define LOCALIZED_ALTERNATE_FORWARD                L"parafrente"
#define LOCALIZED_ALTERNATE_FPUT                   L"juntenoInφcio"
#define LOCALIZED_ALTERNATE_FS                     L"tc"
#define LOCALIZED_ALTERNATE_FULLSCREEN             L"telaCheia"
#define LOCALIZED_ALTERNATE_FULLTEXT               L"todoTexto"
#define LOCALIZED_ALTERNATE_GETFOCUS               L"foco"
#define LOCALIZED_ALTERNATE_GOTO                   L"vßPara"
#define LOCALIZED_ALTERNATE_GIFLOAD                L"carregueGif"
#define LOCALIZED_ALTERNATE_GIFSIZE                L"tamGif"
#define LOCALIZED_ALTERNATE_GIFSAVE                L"salveGif"
#define LOCALIZED_ALTERNATE_GPROP                  L"propriedade"
#define LOCALIZED_ALTERNATE_GREATEREQUALP          L"maior.ou.igual?"
#define LOCALIZED_ALTERNATE_GREATEREQUAL_          L"maiorig?"
#define LOCALIZED_ALTERNATE_GREATERP               L"Θmaior?"
#define LOCALIZED_ALTERNATE_GREATER_               L"maior?"
#define LOCALIZED_ALTERNATE_GROUPBOXCREATE         L"criecaixagrupo"
#define LOCALIZED_ALTERNATE_GROUPBOXDELETE         L"apaguecaixagrupo"
#define LOCALIZED_ALTERNATE_HALT                   L"paretudo"
#define LOCALIZED_ALTERNATE_HASOWNPENP             L"hasownpenp" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_HASOWNPEN_             L"hasownpen?" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_HEADING                L"direτπo"
#define LOCALIZED_ALTERNATE_HELP                   L"ajuda"
#define LOCALIZED_ALTERNATE_HIDETURTLE             L"oculteTat"
#define LOCALIZED_ALTERNATE_HOME                   L"paracentro"
#define LOCALIZED_ALTERNATE_HT                     L"ot"
#define LOCALIZED_ALTERNATE_IF                     L"se"
#define LOCALIZED_ALTERNATE_IFELSE                 L"seSenπo"
#define LOCALIZED_ALTERNATE_IFF                    L"sef"
#define LOCALIZED_ALTERNATE_IFFALSE                L"seFalso"
#define LOCALIZED_ALTERNATE_IFT                    L"sev"
#define LOCALIZED_ALTERNATE_IFTRUE                 L"seVerd"
#define LOCALIZED_ALTERNATE_INGAMEPORT             L"portaJoystick"
#define LOCALIZED_ALTERNATE_INPORT                 L"portaEntrada"
#define LOCALIZED_ALTERNATE_INPORTB                L"portaEntradab"
#define LOCALIZED_ALTERNATE_INT                    L"inteiro"
#define LOCALIZED_ALTERNATE_ITEM                   L"item"
#define LOCALIZED_ALTERNATE_KEYBOARDOFF            L"desativeTecla"
#define LOCALIZED_ALTERNATE_KEYBOARDON             L"ativeTecla"
#define LOCALIZED_ALTERNATE_KEYBOARDVALUE          L"asciiTecla"
#define LOCALIZED_ALTERNATE_KEYP                   L"tecla?"
#define LOCALIZED_ALTERNATE_KEY_                   L"temarq"
#define LOCALIZED_ALTERNATE_LABEL                  L"rotule"
#define LOCALIZED_ALTERNATE_LABELFONT              L"tiporotule"
#define LOCALIZED_ALTERNATE_LABELSIZE              L"tamanhorotule"
#define LOCALIZED_ALTERNATE_LAST                   L"·ltimo"
#define LOCALIZED_ALTERNATE_LEFT                   L"paraesquerda"
#define LOCALIZED_ALTERNATE_LEFTROLL               L"roleparaesquerda"
#define LOCALIZED_ALTERNATE_LESSEQUALP             L"menor.ou.igual?"
#define LOCALIZED_ALTERNATE_LESSEQUAL_             L"menorig?"
#define LOCALIZED_ALTERNATE_LESSP                  L"Θmenor?"
#define LOCALIZED_ALTERNATE_LESS_                  L"menor?"
#define LOCALIZED_ALTERNATE_LIGHT                  L"luz"
#define LOCALIZED_ALTERNATE_LIST                   L"lista"
#define LOCALIZED_ALTERNATE_LISTBOXADDSTRING       L"adicioneCaixaListagem"
#define LOCALIZED_ALTERNATE_LISTBOXCREATE          L"crieCaixaListagem"
#define LOCALIZED_ALTERNATE_LISTBOXENABLE          L"ativeCaixaListagem"
#define LOCALIZED_ALTERNATE_LISTBOXDELETE          L"apagueCaixaListagem"
#define LOCALIZED_ALTERNATE_LISTBOXDELETESTRING    L"retiredaCaixaListagem"
#define LOCALIZED_ALTERNATE_LISTBOXGETSELECT       L"selecioneCaixaListagem"
#define LOCALIZED_ALTERNATE_LISTP                  L"Θlista?"
#define LOCALIZED_ALTERNATE_LIST_                  L"elista?"
#define LOCALIZED_ALTERNATE_LN                     L"ln"
#define LOCALIZED_ALTERNATE_LOAD                   L"carregue"
#define LOCALIZED_ALTERNATE_LOCAL                  L"local"
#define LOCALIZED_ALTERNATE_LOG10                  L"log"
#define LOCALIZED_ALTERNATE_LOGOVERSION            L"versπoLogo"
#define LOCALIZED_ALTERNATE_LOWERCASE              L"min·sculas"
#define LOCALIZED_ALTERNATE_LPUT                   L"juntenofim"
#define LOCALIZED_ALTERNATE_LR                     L"rolepe"
#define LOCALIZED_ALTERNATE_LSHIFT                 L"desloquebitsl"
#define LOCALIZED_ALTERNATE_LT                     L"pe"
#define LOCALIZED_ALTERNATE_MACHINE                L"meupc"
#define LOCALIZED_ALTERNATE_MACROP                 L"Θmacro?"
#define LOCALIZED_ALTERNATE_MACRO_                 L"emacro?"
#define LOCALIZED_ALTERNATE_MAKE                   L"atribua"
#define LOCALIZED_ALTERNATE_MCI                    L"mci"
#define LOCALIZED_ALTERNATE_MEMBER                 L"membro"
#define LOCALIZED_ALTERNATE_MEMBERP                L"Θmembro?"
#define LOCALIZED_ALTERNATE_MEMBER_                L"emembro?"
#define LOCALIZED_ALTERNATE_MESSAGEBOX             L"mensagem"
#define LOCALIZED_ALTERNATE_MIDICLOSE              L"fecheMidi"
#define LOCALIZED_ALTERNATE_MIDIMESSAGE            L"mensagemMidi"
#define LOCALIZED_ALTERNATE_MIDIOPEN               L"abraMidi"
#define LOCALIZED_ALTERNATE_MINUS                  L"oposto"
#define LOCALIZED_ALTERNATE_MKDIR                  L"crieDir"
#define LOCALIZED_ALTERNATE_MODULO                 L"m≤dulo"
#define LOCALIZED_ALTERNATE_MOUSEOFF               L"ativeMouse"
#define LOCALIZED_ALTERNATE_MOUSEON                L"desativeMouse"
#define LOCALIZED_ALTERNATE_MOUSEPOS               L"posMouse"
#define LOCALIZED_ALTERNATE_NAMEP                  L"Θnome?"
#define LOCALIZED_ALTERNATE_NAME_                  L"enome?"
#define LOCALIZED_ALTERNATE_NAMES                  L"nomes"
#define LOCALIZED_ALTERNATE_NETACCEPTOFF           L"recuseRede" // L"nπoaceiteconexπo"
#define LOCALIZED_ALTERNATE_NETACCEPTON            L"aceiteRede" // L"aceiteconexπo"
#define LOCALIZED_ALTERNATE_NETACCEPTRECEIVEVALUE  L"recebaValorRedeAceita" // L"Recebavalorconexπoaceita"
#define LOCALIZED_ALTERNATE_NETACCEPTSENDVALUE     L"envieValorRedeAceita" // L"Envievalorconexπoaceita"
#define LOCALIZED_ALTERNATE_NETCONNECTOFF          L"desconecteRede" // L"desligueConexπo"
#define LOCALIZED_ALTERNATE_NETCONNECTON           L"conecteRede" // L"ligueConexπo"
#define LOCALIZED_ALTERNATE_NETCONNECTRECEIVEVALUE L"recebavalorRede" // L"recebavalorconexπo"
#define LOCALIZED_ALTERNATE_NETCONNECTSENDVALUE    L"envieValorRede" // L"envievalorconexπo"
#define LOCALIZED_ALTERNATE_NETSHUTDOWN            L"termineRede"
#define LOCALIZED_ALTERNATE_NETSTARTUP             L"inicieRede" // L"inicializeRede"
#define LOCALIZED_ALTERNATE_NOBITMAPTURTLE         L"semtatbmp"
#define LOCALIZED_ALTERNATE_NODES                  L"n≤s"
#define LOCALIZED_ALTERNATE_NODRIBBLE              L"nπoregistre"
#define LOCALIZED_ALTERNATE_NOSTATUS               L"semEstado"
#define LOCALIZED_ALTERNATE_NOT                    L"nπo"
#define LOCALIZED_ALTERNATE_NOTEQUALP              L"sπodiferentes?"
#define LOCALIZED_ALTERNATE_NOTEQUAL_              L"saodif?"
#define LOCALIZED_ALTERNATE_NOYIELD                L"monotarefa"
#define LOCALIZED_ALTERNATE_NUMBERP                L"Θn·mero?"
#define LOCALIZED_ALTERNATE_NUMBER_                L"enum?"
#define LOCALIZED_ALTERNATE_OP                     L"dev"
#define LOCALIZED_ALTERNATE_OPENAPPEND             L"abraparaAdicionar"
#define LOCALIZED_ALTERNATE_OPENREAD               L"abraparaLer"
#define LOCALIZED_ALTERNATE_OPENUPDATE             L"abraparaAtualizar"
#define LOCALIZED_ALTERNATE_OPENWRITE              L"abraparaEscrever"
#define LOCALIZED_ALTERNATE_OR                     L"ou"
#define LOCALIZED_ALTERNATE_OUTPORT                L"escrevaPorta"
#define LOCALIZED_ALTERNATE_OUTPORTB               L"escrevaPortab"
#define LOCALIZED_ALTERNATE_OUTPUT                 L"devolva"
#define LOCALIZED_ALTERNATE_PARSE                  L"analise"
#define LOCALIZED_ALTERNATE_PAUSE                  L"pausa"
#define LOCALIZED_ALTERNATE_PC                     L"cl"
#define LOCALIZED_ALTERNATE_PD                     L"pd" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_PE                     L"ub"
#define LOCALIZED_ALTERNATE_PENCOLOR               L"cordoLßpis"
#define LOCALIZED_ALTERNATE_PENDOWN                L"useLßpis"
#define LOCALIZED_ALTERNATE_PENDOWNP               L"ΘuseLßpis?"
#define LOCALIZED_ALTERNATE_PENDOWN_               L"euseLapis?"
#define LOCALIZED_ALTERNATE_PENERASE               L"useborracha"
#define LOCALIZED_ALTERNATE_PENMODE                L"modoLßpis"
#define LOCALIZED_ALTERNATE_PENPAINT               L"useRisco"
#define LOCALIZED_ALTERNATE_PENPATTERN             L"padrπoLßpis"
#define LOCALIZED_ALTERNATE_PENREVERSE             L"useInversor"
#define LOCALIZED_ALTERNATE_PENSIZE                L"espL"
#define LOCALIZED_ALTERNATE_PENUP                  L"useNada"
#define LOCALIZED_ALTERNATE_PERSPECTIVE            L"Logo3D"
#define LOCALIZED_ALTERNATE_PITCH                  L"direτπoNariz"
#define LOCALIZED_ALTERNATE_PIXEL                  L"pixel"
#define LOCALIZED_ALTERNATE_PLAYWAVE               L"toqueWave"
#define LOCALIZED_ALTERNATE_PLIST                  L"listaProp"
#define LOCALIZED_ALTERNATE_PLISTS                 L"listaProps"
#define LOCALIZED_ALTERNATE_PO                     L"moDefs" // L"mot"
#define LOCALIZED_ALTERNATE_POPDIR                 L"voltedir"
#define LOCALIZED_ALTERNATE_POLYSTART              L"iniciePolφgono"
#define LOCALIZED_ALTERNATE_POLYEND                L"terminePolφgono"
#define LOCALIZED_ALTERNATE_POLYVIEW               L"mostrePolφgono"
#define LOCALIZED_ALTERNATE_PORTCLOSE              L"fechePorta"
#define LOCALIZED_ALTERNATE_PORTFLUSH              L"descarregaPorta"
#define LOCALIZED_ALTERNATE_PORTMODE               L"mudemodoPorta"
#define LOCALIZED_ALTERNATE_PORTOPEN               L"abraPorta"
#define LOCALIZED_ALTERNATE_PORTREADARRAY          L"leiaVetorPorta"
#define LOCALIZED_ALTERNATE_PORTREADCHAR           L"leiaCarPorta"
#define LOCALIZED_ALTERNATE_PORTWRITEARRAY         L"escrevaVetorPorta"
#define LOCALIZED_ALTERNATE_PORTWRITECHAR          L"escrevaCarPorta"
#define LOCALIZED_ALTERNATE_POS                    L"pos"
#define LOCALIZED_ALTERNATE_POSXYZ                 L"posxyz"
#define LOCALIZED_ALTERNATE_POT                    L"mostreTφtulo"
#define LOCALIZED_ALTERNATE_POWER                  L"potΩncia"
#define LOCALIZED_ALTERNATE_PPROP                  L"mudeprop"
#define LOCALIZED_ALTERNATE_PPT                    L"ul"
#define LOCALIZED_ALTERNATE_PR                     L"esc"
#define LOCALIZED_ALTERNATE_PRIMITIVEP             L"Θprimitiva?"
#define LOCALIZED_ALTERNATE_PRIMITIVE_             L"eprim?"
#define LOCALIZED_ALTERNATE_PRINT                  L"escreva"
#define LOCALIZED_ALTERNATE_PROCEDUREP             L"Θprocedimento?" // L"Θdefinido?"
#define LOCALIZED_ALTERNATE_PROCEDURE_             L"eproced?"
#define LOCALIZED_ALTERNATE_PROPLISTP              L"lProp?"
#define LOCALIZED_ALTERNATE_PROPLIST_              L"lProp?"
#define LOCALIZED_ALTERNATE_PROCEDURES             L"lProcs"
#define LOCALIZED_ALTERNATE_PRODUCT                L"produto"
#define LOCALIZED_ALTERNATE_PU                     L"un"
#define LOCALIZED_ALTERNATE_PX                     L"ui"
#define LOCALIZED_ALTERNATE_QUESTIONBOX            L"caixadeQuestπo"
#define LOCALIZED_ALTERNATE_QUOTIENT               L"quociente"
#define LOCALIZED_ALTERNATE_RADARCCOS              L"arcCosRad"
#define LOCALIZED_ALTERNATE_RADARCSIN              L"arcSenRad"
#define LOCALIZED_ALTERNATE_RADARCTAN              L"arcTanRad"
#define LOCALIZED_ALTERNATE_RADCOS                 L"cosRad"
#define LOCALIZED_ALTERNATE_RADIOBUTTONCREATE      L"crieBotπoRßdio"
#define LOCALIZED_ALTERNATE_RADIOBUTTONENABLE      L"ativeBotπoRßdio"
#define LOCALIZED_ALTERNATE_RADIOBUTTONDELETE      L"apagueBotπoRßdio"
#define LOCALIZED_ALTERNATE_RADIOBUTTONGET         L"botπoRßdio"
#define LOCALIZED_ALTERNATE_RADIOBUTTONSET         L"mudeBotπoRßdio"
#define LOCALIZED_ALTERNATE_RADSIN                 L"senRad"
#define LOCALIZED_ALTERNATE_RADTAN                 L"tanRad"
#define LOCALIZED_ALTERNATE_RANDOM                 L"sorteien·mero"
#define LOCALIZED_ALTERNATE_RAWASCII               L"rawascii" // L"asciiPuro"
#define LOCALIZED_ALTERNATE_RC                     L"leiacar"
#define LOCALIZED_ALTERNATE_RCS                    L"leiacars"
#define LOCALIZED_ALTERNATE_READCHAR               L"leiaCaractere"
#define LOCALIZED_ALTERNATE_READCHARS              L"leiaCaracteres"
#define LOCALIZED_ALTERNATE_READER                 L"arqLeitura"
#define LOCALIZED_ALTERNATE_READLIST               L"leiaLista"
#define LOCALIZED_ALTERNATE_READPOS                L"readpos" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_READRAWLINE            L"readrawline" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_READWORD               L"leiaPalavra"
#define LOCALIZED_ALTERNATE_REMAINDER              L"resto"
#define LOCALIZED_ALTERNATE_REMPROP                L"retireProp"
#define LOCALIZED_ALTERNATE_REPCOUNT               L"conteVezes"
#define LOCALIZED_ALTERNATE_REPEAT                 L"repita"
#define LOCALIZED_ALTERNATE_RERANDOM               L"repitasorteie"
#define LOCALIZED_ALTERNATE_RIGHT                  L"paradireita"
#define LOCALIZED_ALTERNATE_RIGHTROLL              L"roleparadireita"
#define LOCALIZED_ALTERNATE_RL                     L"rl" // NOT_YET_LOCALIZED
#define LOCALIZED_ALTERNATE_RMDIR                  L"apagueDir"
#define LOCALIZED_ALTERNATE_ROLL                   L"direτπoRolagem"
#define LOCALIZED_ALTERNATE_ROUND                  L"arredonde"
#define LOCALIZED_ALTERNATE_RR                     L"rolepd"
#define LOCALIZED_ALTERNATE_RT                     L"pd"
#define LOCALIZED_ALTERNATE_RUN                    L"faτa"
#define LOCALIZED_ALTERNATE_RUNPARSE               L"faτaAnalise"
#define LOCALIZED_ALTERNATE_RUNRESULT              L"faτaDevolva"
#define LOCALIZED_ALTERNATE_RW                     L"leiap"
#define LOCALIZED_ALTERNATE_SAVE                   L"salve"
#define LOCALIZED_ALTERNATE_SCREENCOLOR            L"cordofundo"
#define LOCALIZED_ALTERNATE_SCROLLBARCREATE        L"crieBarraRolagem"
#define LOCALIZED_ALTERNATE_SCROLLBARENABLE        L"ativeBarraRolagem"
#define LOCALIZED_ALTERNATE_SCROLLBARDELETE        L"apagueBarraRolagem"
#define LOCALIZED_ALTERNATE_SCROLLBARGET           L"barraRolagem"
#define LOCALIZED_ALTERNATE_SCROLLBARSET           L"mudeBarraRolagem"
#define LOCALIZED_ALTERNATE_SCROLLX                L"rolex"
#define LOCALIZED_ALTERNATE_SCROLLY                L"roley"
#define LOCALIZED_ALTERNATE_SCRUNCH                L"proporτπo"
#define LOCALIZED_ALTERNATE_SE                     L"fr"
#define LOCALIZED_ALTERNATE_SELECTBOX              L"caixaseleτπo"
#define LOCALIZED_ALTERNATE_SENTENCE               L"frase"
#define LOCALIZED_ALTERNATE_SETACTIVEAREA          L"mude┴reaAtiva"
#define LOCALIZED_ALTERNATE_SETBITINDEX            L"mude═ndicebmp"
#define LOCALIZED_ALTERNATE_SETBITMODE             L"mudeModobmp"
#define LOCALIZED_ALTERNATE_SETCLIP                L"mudeClip"
#define LOCALIZED_ALTERNATE_SETCURSOR              L"mudeCursor"
#define LOCALIZED_ALTERNATE_SETCURSORNOWAIT        L"mudeCursorSeta"
#define LOCALIZED_ALTERNATE_SETCURSORWAIT          L"mudeCursorEspera"
#define LOCALIZED_ALTERNATE_SETFC                  L"mudecp"
#define LOCALIZED_ALTERNATE_SETFLOODCOLOR          L"mudeCordePreenchimento"
#define LOCALIZED_ALTERNATE_SETFOCUS               L"mudeFoco"
#define LOCALIZED_ALTERNATE_SETH                   L"mudedc"
#define LOCALIZED_ALTERNATE_SETHEADING             L"mudeDireτπo"
#define LOCALIZED_ALTERNATE_SETITEM                L"mudeItem"
#define LOCALIZED_ALTERNATE_SETLABELFONT           L"mudeTipo"
#define LOCALIZED_ALTERNATE_SETLIGHT               L"mudeLuz"
#define LOCALIZED_ALTERNATE_SETMARGINS             L"mudeMargens"
#define LOCALIZED_ALTERNATE_SETPC                  L"mudeCL"
#define LOCALIZED_ALTERNATE_SETPENCOLOR            L"mudeCordoLßpis"
#define LOCALIZED_ALTERNATE_SETPENPATTERN          L"mudePadrπoLßpis"
#define LOCALIZED_ALTERNATE_SETPENSIZE             L"mudeEspL"
#define LOCALIZED_ALTERNATE_SETPITCH               L"mudeDireτπoNariz"
#define LOCALIZED_ALTERNATE_SETPIXEL               L"mudePixel"
#define LOCALIZED_ALTERNATE_SETPOS                 L"mudePos"
#define LOCALIZED_ALTERNATE_SETPOSXYZ              L"mudeposxyz"
#define LOCALIZED_ALTERNATE_SETREAD                L"mudeLeitura"
#define LOCALIZED_ALTERNATE_SETREADPOS             L"mudePosLeitura"
#define LOCALIZED_ALTERNATE_SETROLL                L"mudeDireτπoRolagem"
#define LOCALIZED_ALTERNATE_SETSC                  L"mudeCF"
#define LOCALIZED_ALTERNATE_SETSCREENCOLOR         L"mudeCordoFundo"
#define LOCALIZED_ALTERNATE_SETSCRUNCH             L"mudeProporτπo"
#define LOCALIZED_ALTERNATE_SETTIMER               L"mudeTemporizador" // L"mudecontador"
#define LOCALIZED_ALTERNATE_SETTURTLE              L"ativetat"
#define LOCALIZED_ALTERNATE_SETTURTLEMODE          L"mudeModoTat"
#define LOCALIZED_ALTERNATE_SETWRITE               L"mudeEscrita"
#define LOCALIZED_ALTERNATE_SETWRITEPOS            L"mudePosEscrita"
#define LOCALIZED_ALTERNATE_SETX                   L"mudex"
#define LOCALIZED_ALTERNATE_SETXY                  L"mudexy"
#define LOCALIZED_ALTERNATE_SETXYZ                 L"mudexyz"
#define LOCALIZED_ALTERNATE_SETY                   L"mudey"
#define LOCALIZED_ALTERNATE_SETZ                   L"mudez"
#define LOCALIZED_ALTERNATE_SHELL                  L"shell"
#define LOCALIZED_ALTERNATE_SHOW                   L"mostre"
#define LOCALIZED_ALTERNATE_SHOWNP                 L"Θvisφvel?"
#define LOCALIZED_ALTERNATE_SHOWN_                 L"evisivel?"
#define LOCALIZED_ALTERNATE_SHOWTURTLE             L"mostreTat"
#define LOCALIZED_ALTERNATE_SIN                    L"sen"
#define LOCALIZED_ALTERNATE_SOUND                  L"som"
#define LOCALIZED_ALTERNATE_SPLITSCREEN            L"fixeJanelaComandos"
#define LOCALIZED_ALTERNATE_SQRT                   L"raizq"
#define LOCALIZED_ALTERNATE_SS                     L"fixeJC"
#define LOCALIZED_ALTERNATE_ST                     L"mt"
#define LOCALIZED_ALTERNATE_STANDOUT               L"standout" //
#define LOCALIZED_ALTERNATE_STATICCREATE           L"crieEstßtico"
#define LOCALIZED_ALTERNATE_STATICDELETE           L"apagueEstßtico"
#define LOCALIZED_ALTERNATE_STATICUPDATE           L"mudeEstßtico"
#define LOCALIZED_ALTERNATE_STATUS                 L"estado"
#define LOCALIZED_ALTERNATE_STEP                   L"siga" //"passoapasso"
#define LOCALIZED_ALTERNATE_STEPPED                L"seguidos"
#define LOCALIZED_ALTERNATE_STOP                   L"pare"
#define LOCALIZED_ALTERNATE_SUBSTRINGP             L"ΘsubseqⁿΩncia?"
#define LOCALIZED_ALTERNATE_SUBSTRING_             L"esubseq?"
#define LOCALIZED_ALTERNATE_SUM                    L"soma"
#define LOCALIZED_ALTERNATE_TAG                    L"etiqueta"
#define LOCALIZED_ALTERNATE_TAN                    L"tan"
#define LOCALIZED_ALTERNATE_TEST                   L"teste"
#define LOCALIZED_ALTERNATE_TEXT                   L"texto"
#define LOCALIZED_ALTERNATE_TEXTSCREEN             L"libereJanelaComandos"
#define LOCALIZED_ALTERNATE_THING                  L"valor"
#define LOCALIZED_ALTERNATE_THROW                  L"lance"
#define LOCALIZED_ALTERNATE_TIME                   L"diahora"
#define LOCALIZED_ALTERNATE_TIMEMILLI              L"tempoMili"
#define LOCALIZED_ALTERNATE_TO                     L"aprenda"
#define LOCALIZED_ALTERNATE_TONE                   L"tom"
#define LOCALIZED_ALTERNATE_TOWARDS                L"direτπopara"
#define LOCALIZED_ALTERNATE_TOWARDSXYZ             L"direτπoparaxyz"
#define LOCALIZED_ALTERNATE_TRACE                  L"rastreie"
#define LOCALIZED_ALTERNATE_TRACED                 L"rastreados"
#define LOCALIZED_ALTERNATE_TS                     L"libereJC"
#define LOCALIZED_ALTERNATE_TURTLE                 L"tatativa"
#define LOCALIZED_ALTERNATE_TURTLEMODE             L"modoTat"
#define LOCALIZED_ALTERNATE_TURTLES                L"tartarugas"
#define LOCALIZED_ALTERNATE_TYPE                   L"guardeparaescrever"
#define LOCALIZED_ALTERNATE_UNBURY                 L"desenterre"
#define LOCALIZED_ALTERNATE_UNSTEP                 L"nπoSiga" //"nπoPassoaPasso"
#define LOCALIZED_ALTERNATE_UNTRACE                L"nπoRastreie"
#define LOCALIZED_ALTERNATE_UP                     L"levantenz"
#define LOCALIZED_ALTERNATE_UPPERCASE              L"mai·sculas"
#define LOCALIZED_ALTERNATE_UPPITCH                L"levantenariz"
#define LOCALIZED_ALTERNATE_WAIT                   L"espere"
#define LOCALIZED_ALTERNATE_WINDOW                 L"semlimite"
#define LOCALIZED_ALTERNATE_WINDOWCREATE           L"crieJanela"
#define LOCALIZED_ALTERNATE_WINDOWENABLE           L"ativeJanela"
#define LOCALIZED_ALTERNATE_WINDOWDELETE           L"apagueJanela"
#define LOCALIZED_ALTERNATE_WINDOWFILEEDIT         L"janelaediteArquivo"
#define LOCALIZED_ALTERNATE_WINDOWSET              L"mudeEstadoJanela"
#define LOCALIZED_ALTERNATE_WINHELP                L"socorro"
#define LOCALIZED_ALTERNATE_WORD                   L"palavra"
#define LOCALIZED_ALTERNATE_WORDP                  L"Θpalavra?"
#define LOCALIZED_ALTERNATE_WORD_                  L"epal?"
#define LOCALIZED_ALTERNATE_WRAP                   L"dobrejanela"
#define LOCALIZED_ALTERNATE_WRITEPOS               L"posLeitura"
#define LOCALIZED_ALTERNATE_WRITER                 L"arqescrita"
#define LOCALIZED_ALTERNATE_YESNOBOX               L"CaixaSimNπo"
#define LOCALIZED_ALTERNATE_YIELD                  L"multiTarefa"
#define LOCALIZED_ALTERNATE_ZOOM                   L"zoom"

//
// General localized strings
//
#define LOCALIZED_GENERAL_OKBUTTON      L"&OK"
#define LOCALIZED_GENERAL_CANCELBUTTON  L"&Cancelar"
#define LOCALIZED_GENERAL_APPLYBUTTON   L"&Aplicar"

#define LOCALIZED_GENERAL_PRODUCTNAME   L"UniLogo"

// Embedded description of unilogo.exe
#define LOCALIZED_UNILOGO_FILE_DESCRIPTION  L"O ambiente de programaτπo UniLogo"

//
// The menu options on the main window 
//
#define LOCALIZED_FILE                  L"&Arquivo"
#define LOCALIZED_FILE_NEW              L"&Novo\t(apaga o trabalho atual)"
#define LOCALIZED_FILE_LOAD             L"&Carregar...\t(une ao trabalho atual)"
#define LOCALIZED_FILE_OPEN             L"A&brir...\t(substitui o trabalho atual)"
#define LOCALIZED_FILE_SAVE             L"&Guardar"
#define LOCALIZED_FILE_SAVEAS           L"G&uardar como..."
#define LOCALIZED_FILE_SETASSCREENSAVER L"Coloque como Protetor de &Tela"
#define LOCALIZED_FILE_EDIT             L"&Editar..."
#define LOCALIZED_FILE_ERASE            L"A&pagar..."
#define LOCALIZED_FILE_EXIT             L"&Sair"

#define LOCALIZED_BITMAP               L"&Bitmap"
#define LOCALIZED_BITMAP_NEW           L"&Novo"
#define LOCALIZED_BITMAP_LOAD          L"&Carregar..."
#define LOCALIZED_BITMAP_SAVE          L"&Guardar"
#define LOCALIZED_BITMAP_SAVEAS        L"G&uardar como..."
#define LOCALIZED_BITMAP_PRINT         L"&Imprimir..."
#define LOCALIZED_BITMAP_PRINTERSETUP  L"C&onfigurar pßgina..."
#define LOCALIZED_BITMAP_ACTIVEAREA    L"┴rea &Ativa..."

#define LOCALIZED_SET                  L"&Configurar"
#define LOCALIZED_SET_PENSIZE          L"&Tamanho do lßpis..."
#define LOCALIZED_SET_LABELFONT        L"Tipo de letra para &r≤tulo..."
#define LOCALIZED_SET_COMMANDERFONT    L"Tipo de letra para &comandos..."
#define LOCALIZED_SET_PENCOLOR         L"Cor de &lßpis..."
#define LOCALIZED_SET_FLOODCOLOR       L"Cor de &preenchimento..."
#define LOCALIZED_SET_SCREENCOLOR      L"Color de &fundo..."

#define LOCALIZED_ZOOM                 L"&Zoom"
#define LOCALIZED_ZOOM_IN              L"&Ampliar"
#define LOCALIZED_ZOOM_OUT             L"&Reduzir"
#define LOCALIZED_ZOOM_NORMAL          L"&Normal"

#define LOCALIZED_HELP                 L"A&juda"
#define LOCALIZED_HELP_INDEX           L"&Inφcio"
#define LOCALIZED_HELP_TUTORIAL        L"&Tutorial"
#define LOCALIZED_HELP_DEMO            L"&Demo"
#define LOCALIZED_HELP_EXAMPLE         L"&Exemplos"
#define LOCALIZED_HELP_RELEASENOTES    L"&Notas da versπo"
#define LOCALIZED_HELP_ABOUTUNILOGO    L"&Sobre o L" LOCALIZED_GENERAL_PRODUCTNAME L"..."
#define LOCALIZED_HELP_MS              L"Sobre o &UNI..."
// The following two help options display tables for translating to/from English
// These tables are built from the LOCALIZED_ALTERNATE_* macros above and the
// and startup-xxxx.logoscript file.
#define LOCALIZED_HELP_LANGTOENGLISH   L"PortuguΩs para InglΩs"
#define LOCALIZED_HELP_ENGLISHTOLANG   L"InglΩs para PortuguΩs"

// The L"Set Active Area" dialog box
#define LOCALIZED_SELECTACTIVEAREA              L"Selecionar ßrea activa"
#define LOCALIZED_SELECTACTIVEAREA_EFFECT       L"Isto afeta a impressπo e gravaτπo de bitmaps"
#define LOCALIZED_SELECTACTIVEAREA_YHIGH        L"Y-Sup"
#define LOCALIZED_SELECTACTIVEAREA_YLOW         L"Y-Inf"
#define LOCALIZED_SELECTACTIVEAREA_XHIGH        L"X-Sup"
#define LOCALIZED_SELECTACTIVEAREA_XLOW         L"X-Inf"
#define LOCALIZED_SELECTACTIVEAREA_STEPSPERINCH L"pontos por polegada impressa:"
#define LOCALIZED_SELECTACTIVEAREA_RESET        L"&Restaurar"
#define LOCALIZED_SELECTACTIVEAREA_OK           LOCALIZED_GENERAL_OKBUTTON
#define LOCALIZED_SELECTACTIVEAREA_CANCEL       LOCALIZED_GENERAL_CANCELBUTTON

// The screensaver strings
#define LOCALIZED_SCREENSAVER_NAME              LOCALIZED_GENERAL_PRODUCTNAME
#define LOCALIZED_SCREENSAVER_DESCRIPTION       L"Protetor de tela de UniLogo"
#define LOCALIZED_SCREENSAVER_SETTINGS_TITLE    L"Protetor de tela de UniLogo"
#define LOCALIZED_SCREENSAVER_LOCATE            L"&Localize ..."
#define LOCALIZED_SCREENSAVER_FILE              L"Logo &Arquivo:"
#define LOCALIZED_SCREENSAVER_OK                LOCALIZED_GENERAL_OKBUTTON
#define LOCALIZED_SCREENSAVER_CANCEL            LOCALIZED_GENERAL_CANCELBUTTON

// The dialog box for selecting a Startup procedure
#define LOCALIZED_SELECTSTARTUP_CAPTION               L"Selecione uma instruτπo de " LOCALIZED_ALTERNATE_STARTUP
#define LOCALIZED_SELECTSTARTUP_EXPLAINTEXT_UNDEFINED L"O espaτo de trabalho nπo possui uma lista de instruτπo de " LOCALIZED_ALTERNATE_STARTUP L" definida, nada vai\nacontecer quando o protetor de tela Θ carregado.\nPor favor, selecione um procedimento para executar quando o programa Θ carregado."
#define LOCALIZED_SELECTSTARTUP_EXPLAINTEXT_NOTLIST   L"A varißvel " LOCALIZED_ALTERNATE_STARTUP L" nπo Θ uma lista, nada vai\nacontecer quando o protetor de tela Θ carregado.\nPor favor, selecione um procedimento para executar quando o programa Θ carregado."
#define LOCALIZED_SELECTSTARTUP_EXPLAINTEXT_EMPTY     L"Seu espaτo de trabalho tem uma lista de instruτπo de vazio " LOCALIZED_ALTERNATE_STARTUP L" definida, nada vai\nacontecer quando o protetor de tela Θ carregado.\nPor favor, selecione um procedimento para executar quando o programa Θ carregado."
#define LOCALIZED_SELECTSTARTUP_NOPROCEDURESDEFINED   L"Nπo hß procedimentos definidos"

// The warning dialog box when the user saves an empty workspace
#define LOCALIZED_EMPTYWORKSPACE_TITLE                LOCALIZED_GENERAL_PRODUCTNAME
#define LOCALIZED_EMPTYWORKSPACE_MESSAGE              L"Nπo hß nenhum procedimentos, varißveis ou listas de propriedades definidas,\nassim que o espaτo de trabalho serß salvo como um arquivo vazio.\n\nVocΩ quer salvar o espaτo de trabalho de qualquer maneira?"

//
// Menu options in the popup menu
//
#define LOCALIZED_POPUP_COPY                     L"Copiar"
#define LOCALIZED_POPUP_CUT                      L"Cortar"
#define LOCALIZED_POPUP_PASTE                    L"Colar"
#define LOCALIZED_POPUP_DELETE                   L"Apagar"
#define LOCALIZED_POPUP_UNDO                     L"Desfazer"
#define LOCALIZED_POPUP_REDO                     L"Refazer"
#define LOCALIZED_POPUP_SELECTALL                L"Selecionar Tudo"
#define LOCALIZED_POPUP_HELP                     L"Busca por Tema"
#define LOCALIZED_POPUP_REMOVELINES              L"Remove Selected Lines" // NOT_YET_LOCALIZED

//
// The menu options on the editor
//
#define LOCALIZED_EDITOR_TITLE                   L"Editor"

#define LOCALIZED_EDITOR_FILE                    L"&Arquivo"
#define LOCALIZED_EDITOR_FILE_SAVEANDEXIT        L"&Guardar e Sair\tCtrl+D"
#define LOCALIZED_EDITOR_FILE_SAVETOWORKSPACE    L"Guardar na &ßrea de trabalho"
#define LOCALIZED_EDITOR_FILE_PRINT              L"&Imprimir..."
#define LOCALIZED_EDITOR_FILE_EXIT               L"&Sair"

#define LOCALIZED_EDITOR_EDIT                    L"&Editar"
#define LOCALIZED_EDITOR_EDIT_UNDO               L"&Desfazer\tCtrl+Z"
#define LOCALIZED_EDITOR_EDIT_REDO               L"&Refazer\tCtrl+Y"
#define LOCALIZED_EDITOR_EDIT_CUT                L"Recor&tar\tCtrl+X"
#define LOCALIZED_EDITOR_EDIT_COPY               L"&Copiar\tCtrl+C"
#define LOCALIZED_EDITOR_EDIT_PASTE              L"Co&lar\tCtrl+V"
#define LOCALIZED_EDITOR_EDIT_DELETE             L"&Apagar\tDel"
#define LOCALIZED_EDITOR_EDIT_CLEARALL           L"Apagar &tudo\tCtrl+Del"
#define LOCALIZED_EDITOR_EDIT_SELECTALL          L"&Selecionar Tudo\tCtrl+A"

#define LOCALIZED_EDITOR_SEARCH                  L"&Buscar"
#define LOCALIZED_EDITOR_SEARCH_FIND             L"&Localizar...\tCtrl+F"
#define LOCALIZED_EDITOR_SEARCH_REPLACE          L"&Substituir...\tCtrl+H"
#define LOCALIZED_EDITOR_SEARCH_NEXT             L"&Pr≤ximo\tF3"

#define LOCALIZED_EDITOR_SET                     L"&Configurar"
#define LOCALIZED_EDITOR_SET_FONT                L"&Tipo de letra..."

#define LOCALIZED_EDITOR_TEST                    L"&Testar"
#define LOCALIZED_EDITOR_TEST_RUN_SELECTION      L"&Run Selection\tCtrl+R" // NOT_YET_LOCALIZED

#define LOCALIZED_EDITOR_HELP                    L"Aj&uda"
#define LOCALIZED_EDITOR_HELP_INDEX              L"═&ndice"
#define LOCALIZED_EDITOR_HELP_EDITOR             L"&Editor"
#define LOCALIZED_EDITOR_HELP_TOPICSEARCH        L"&Busca contextual\tF1"


//
// The strings in the "You have unsaved changes" dialog
//
#define LOCALIZED_UNSAVEDCHANGES                LOCALIZED_YOUHAVEUNSAVEDCHANGES
#define LOCALIZED_UNSAVEDCHANGES_SAVEANDEXIT    L"&Guardar e Sair"
#define LOCALIZED_UNSAVEDCHANGES_DONTSAVE       L"&Nπo guardar"
#define LOCALIZED_UNSAVEDCHANGES_CANCEL         LOCALIZED_GENERAL_CANCELBUTTON
#define LOCALIZED_UNSAVEDCHANGES_MESSAGE1       L"Hß alteraτ⌡es nπo salvas em sua ßrea de trabalho. Se sair sem guardar, estas alteraτ⌡es serπo perdidas."
#define LOCALIZED_UNSAVEDCHANGES_MESSAGE2       L"Deseja guardar suas alteraτ⌡es antes de sair?"


//
// Strings on the Commander window
//
#define LOCALIZED_COMMANDER                     L"Janela de Comandos"
#define LOCALIZED_COMMANDER_HALT                L"PareTudo"
#define LOCALIZED_COMMANDER_TRACE               L"Rastreie"
#define LOCALIZED_COMMANDER_NOTRACE             L"Nπo Rastreie"
#define LOCALIZED_COMMANDER_PAUSE               L"Pause"
#define LOCALIZED_COMMANDER_STATUS              L"Estado"
#define LOCALIZED_COMMANDER_NOSTATUS            L"SemEstado"
#define LOCALIZED_COMMANDER_STEP                L"Siga"
#define LOCALIZED_COMMANDER_UNSTEP              L"NπoSiga"
#define LOCALIZED_COMMANDER_RESET               L"Tat"
#define LOCALIZED_COMMANDER_EXECUTE             L"Execute"
#define LOCALIZED_COMMANDER_EDALL               L"EdTudo"

//
// Strings on the Status window
//
#define LOCALIZED_STATUS                        L"Estado"
#define LOCALIZED_STATUS_PEN                    L"Lßpis"
#define LOCALIZED_STATUS_CONTACT                L"Contato:"
#define LOCALIZED_STATUS_WIDTH                  L"Largura:"
#define LOCALIZED_STATUS_STYLE                  L"Estilo:"
#define LOCALIZED_STATUS_ORIENTATION            L"Orientaτπo"
#define LOCALIZED_STATUS_PITCH                  L"Cabeceio:"
#define LOCALIZED_STATUS_HEADING                L"Direτπo:"
#define LOCALIZED_STATUS_ROLL                   L"Rolamento:"
#define LOCALIZED_STATUS_TURTLE                 L"Tartaruga"
#define LOCALIZED_STATUS_POSITION               L"Posiτπo(XYZ):"
#define LOCALIZED_STATUS_WHICH                  L"Tat Ativa:"
#define LOCALIZED_STATUS_VISIBILITY             L"Visibilidade:"
#define LOCALIZED_STATUS_COLOR                  L"Cor"
#define LOCALIZED_STATUS_PENCOLOR               L"Lßpis(RGB):"
#define LOCALIZED_STATUS_FLOODCOLOR             L"Preenchimento(RGB):"
#define LOCALIZED_STATUS_SCREENCOLOR            L"Fundo(RGB):"
#define LOCALIZED_STATUS_KERNEL                 L"N·cleo"
#define LOCALIZED_STATUS_CALLS                  L"Chamadas:"
#define LOCALIZED_STATUS_PEAKMEMORY             L"Mem≤ria:"

#define LOCALIZED_STATUS_PENREVERSE     L"Invertido"
#define LOCALIZED_STATUS_PENNORMAL      L"Normal"
#define LOCALIZED_STATUS_PENERASE       L"Borracha"
#define LOCALIZED_STATUS_PENUP          L"Erguido"
#define LOCALIZED_STATUS_PENDOWN        L"Baixado"
#define LOCALIZED_STATUS_PENSHOWN       L"Visφvel"
#define LOCALIZED_STATUS_PENHIDDEN      L"Oculta"
#define LOCALIZED_STATUS_POLYGONS       L"Polφgonos"
#define LOCALIZED_STATUS_VECTORS        L"Vetores"
#define LOCALIZED_STATUS_NODES          L"N≤s"
#define LOCALIZED_STATUS_NOT_APPLICABLE L"N/A" // NOT_YET_LOCALIZED

//
// Strings on the Erase|Edit Procedure dialog box
//
#define LOCALIZED_SELECTPROCEDURE_OK            LOCALIZED_GENERAL_OKBUTTON
#define LOCALIZED_SELECTPROCEDURE_CANCEL        LOCALIZED_GENERAL_CANCELBUTTON
#define LOCALIZED_SELECTPROCEDURE_ALL           L"&Tudo"
#define LOCALIZED_ERASEPROCEDURE                L"Apagar"
#define LOCALIZED_EDITPROCEDURE                 L"Editar"


//
// Strings on the Color Picker Dialog box
//
#define LOCALIZED_SETCOLOR                     L"Mudar Cor"
#define LOCALIZED_SETCOLOR_PENCOLOR            L"Cor do Lßpis"
#define LOCALIZED_SETCOLOR_FLOODCOLOR          L"Cor de Preenchimento"
#define LOCALIZED_SETCOLOR_SCREENCOLOR         L"Cor de Fundo"
#define LOCALIZED_SETCOLOR_RED                 L"Vermelho"
#define LOCALIZED_SETCOLOR_GREEN               L"Verde"
#define LOCALIZED_SETCOLOR_BLUE                L"Azul"
#define LOCALIZED_SETCOLOR_OK                  LOCALIZED_GENERAL_OKBUTTON
#define LOCALIZED_SETCOLOR_CANCEL              LOCALIZED_GENERAL_CANCELBUTTON
#define LOCALIZED_SETCOLOR_APPLY               LOCALIZED_GENERAL_APPLYBUTTON // NOT_YET_LOCALIZED

//
// Strings on the Pen Size Picker Dialog box
//
#define LOCALIZED_SETPENSIZE                   L"Tamanho do Lßpis"
#define LOCALIZED_SETPENSIZE_SIZE              L"Espessura"
#define LOCALIZED_SETPENSIZE_OK                LOCALIZED_GENERAL_OKBUTTON
#define LOCALIZED_SETPENSIZE_CANCEL            LOCALIZED_GENERAL_CANCELBUTTON
#define LOCALIZED_SETPENSIZE_APPLY             LOCALIZED_GENERAL_APPLYBUTTON


//
// Strings on the "About UniLogo" Dialog box
//
#define LOCALIZED_ABOUTUNI                     L"Sobre o " LOCALIZED_GENERAL_PRODUCTNAME
#define LOCALIZED_ABOUTUNI_VERSION             L"Versπo"
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

#define LOCALIZED_CHANGESINEDITORMAYBELOST  L"As mudanτas da ediτπo podem ser perdidas.\n\nRealmente quer sair do L" LOCALIZED_GENERAL_PRODUCTNAME L"?"
#define LOCALIZED_EDITSESSIONISRUNNING      L"Uma sessπo de ediτπo estß ativa"

#define LOCALIZED_COULDNOTWRITEBMP            L"Nπo pude guardar .bmp"
#define LOCALIZED_COULDNOTOPENBMP             L"Nπo pude abrir .bmp"
#define LOCALIZED_COULDNOTCREATEBMP           L"Nπo pude criar bitmat tipo Windows 3.0"
#define LOCALIZED_NOTVALIDBMP                 L"Nπo Θ um bitmap tipo Windows 3.0"

#define LOCALIZED_YOUHAVEUNSAVEDCHANGES         L"Nπo foi guardado no disco"
#define LOCALIZED_FILENEWWILLERASEWORKSPACE     L"Escolher Novo apagarß todas as definiτ⌡es.\n\nContinuar com Novo?"
#define LOCALIZED_FILELOADMAYOVERWRITEWORKSPACE L"O arquivo que estß sendo carregado serß unido ao seu trabalho atual\ne substituirß suas alteraτ⌡es nπo guardadas.\n\nContinuar com Carregar?"
#define LOCALIZED_FILEOPENWILLERASEWORKSPACE    L"Isto apagarß todas as suas alteraτ⌡es nπo guardadas.\n\nContinuar com Abrir?"

#define LOCALIZED_EDITORISOPEN                  L"Sabia que estß com uma sessπo de ediτπo ativa?\n\nToda alteraτπo nesta sessπo de ediτπo nπo serß guardada."

#define LOCALIZED_ERROR_CANTREADFILE            L"Nπo posso ler o arquivo \"%s\" do disco"
#define LOCALIZED_ERROR_CANTWRITEFILE           L"Nπo posso escrever o arquivo \"%s\" no disco"

#define LOCALIZED_SAVETOWORKSPACE                L"Guardar na ßrea de trabalho"
#define LOCALIZED_CONTENTSCHANGED                L"O conte·do foi alterado"
#define LOCALIZED_SAVECHANGEDCONTENTSTOWORKSPACE L"O conte·do foi alterado.\nDeseja guardß-los na ßrea de trabalho?"



#define LOCALIZED_CURSORISATLASTGOODDEFINITION  L"Houve um erro ao guardar o conte·do do editor na ßrea de trabalho.  O cursor serß posicionado ante a ·ltima definiτπo correta.\n\nVerifique uma possφvel mensagem de erro na ┴rea de Comandos."
#define LOCALIZED_RETURNTOEDIT                  L"Voltar ao editor?"

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
#define LOCALIZED_FILEFILTER_ALLFILES L"Todos os Arquivos (*.*)|*.*"
#define LOCALIZED_FILEFILTER_LOGO     L"Arquivos do Logo (*.lgo)|*.lgo|" LOCALIZED_FILEFILTER_ALLFILES
#define LOCALIZED_FILEFILTER_IMAGE    L"Arquivos Bitmap (*.bmp)|*.bmp|Arquivos GIF (*.gif)|*.gif|" LOCALIZED_FILEFILTER_ALLFILES



//
// strings seen when tracing is enabled
//
#define LOCALIZED_TRACING_STOPS             L" interrompido\n"
#define LOCALIZED_TRACING_OUTPUTS           L" devolve %s\n"
#define LOCALIZED_TRACING_MAKE              L"atribua %s %s"
#define LOCALIZED_TRACING_PPROP             L"mudePROP %s %s %s"
#define LOCALIZED_TRACING_LOCATION          L" em %s\n%s"

//
// strings seen when single-stepping execution
//
#define LOCALIZED_STEPPING                  L"Passo Simples"

//
// Notification when defining a procedure with TO in the commander
//
#define LOCALIZED_PROCEDUREDEFINED  L"%s definido\n"


//
// Words that represent the pen's mode
//
#define LOCALIZED_PENMODE_ERASE    L"Borracha"
#define LOCALIZED_PENMODE_REVERSE  L"UseInversor"
#define LOCALIZED_PENMODE_PAINT    L"UseLßpis"

//
// Error message thrown by Logo
//
#define LOCALIZED_ERROR_FATALINTERNAL          L"Logo: Erro Interno Fatal"
#define LOCALIZED_ERROR_OUTOFMEMORYUNREC       L"Logo: Falta de Mem≤ria"
#define LOCALIZED_ERROR_OUTOFMEMORY            L"sem espaτo"
#define LOCALIZED_ERROR_STACKOVERFLOW          L"esvaziamento de pilha"
#define LOCALIZED_ERROR_TURTLEOUTOFBOUNDS      L"tat fora dos limites"
#define LOCALIZED_ERROR_BADGRAPHINIT           L"nπo pude inicializar grßfico"
#define LOCALIZED_ERROR_BADDATA                L"%p nπo sabe o que fazer com %s"
#define LOCALIZED_ERROR_DIDNTOUTPUT            L"%p nπo devolveu nada para %p"
#define LOCALIZED_ERROR_NOTENOUGHINPUTS        L"%p necessita de algum complemento"
#define LOCALIZED_ERROR_TOOMUCH                L"muitas coisas entre parΩnteses ()"
#define LOCALIZED_ERROR_DONTSAYWHATTODOWITH    L"VocΩ nπo disse o que devo fazer com %s"
#define LOCALIZED_ERROR_PARENMISMATCH          L"muitos parΩnteses '('"
#define LOCALIZED_ERROR_NOVALUE                L"%s nπo possui um valor"
#define LOCALIZED_ERROR_UNEXPECTEDPAREN        L"parΩnteses ')' inesperado"
#define LOCALIZED_ERROR_UNEXPECTEDBRACKET      L"colchete ']' inesperado"
#define LOCALIZED_ERROR_UNEXPECTEDBRACE        L"chave '}' inesperada"
#define LOCALIZED_ERROR_DONTKNOWHOWTO          L"nπo sei como fazer %p"
#define LOCALIZED_ERROR_NOCATCHTAG             L"nπo pude encontrar a etiqueta LANCE (THROW) para %p"
#define LOCALIZED_ERROR_ALREADYDEFINED         L"%p jß estß definido"
#define LOCALIZED_ERROR_STOPPING               L"Parando..."
#define LOCALIZED_ERROR_ALREADYDRIBBLING       L"ECO estß ativado"
#define LOCALIZED_ERROR_FILESYSTEM                   L"Erro do sistema de arquivos: %p"
#define LOCALIZED_ERROR_FILESYSTEM_CANTOPEN          L"Nπo pude abrir esse arquivo"
#define LOCALIZED_ERROR_FILESYSTEM_CANTOPEN2         L"Nπo pude abrir o arquivo: %t"
#define LOCALIZED_ERROR_FILESYSTEM_ALREADYOPEN       L"Arquivo jß estß aberto"
#define LOCALIZED_ERROR_FILESYSTEM_NOTOPEN           L"Arquivo nπo estß aberto"
#define LOCALIZED_ERROR_FILESYSTEM_CANTCREATEEDITOR  L"Nπo pude criar arquivo para editor"
#define LOCALIZED_ERROR_FILESYSTEM_CANTSTARTEDITOR   L"Nπo pude iniciar editor"
#define LOCALIZED_ERROR_FILESYSTEM_CANTREADEDITOR    L"Nπo pude ler arquivo do editor"
#define LOCALIZED_ERROR_IFWARNING              L"Creio que queira usar SESEN├O (IFELSE), nπo SEFOR (IF)"
#define LOCALIZED_ERROR_SHADOWWARNING          L"%p coberta por local em chamada a procedimento"
#define LOCALIZED_ERROR_USER                   L"PEGUE \"Erro"
#define LOCALIZED_ERROR_ISPRIMITIVE            L"%p Θ uma primitiva"
#define LOCALIZED_ERROR_TONOTINSIDE            L"S≤ Θ possφvel usar APRENDA (TO) dentro de um procedimento"
#define LOCALIZED_ERROR_ATTOPLEVEL             L"S≤ Θ possφvel usar %p dentro de um procedimento"
#define LOCALIZED_ERROR_ATTOPLEVEL2            L"╔ necessßrio estar dentro de um procedimento para usar DEVOLVA (OUTPUT) ou PARE (STOP)."
#define LOCALIZED_ERROR_NOTEST                 L"%p sem TESTE"
#define LOCALIZED_ERROR_BADMACROOUTPUT         L"Macro devolveu %s em lugar de uma lista"
#define LOCALIZED_ERROR_DEEPEND                L"FIM dentro de uma instruτπo multilinha"
#define LOCALIZED_ERROR_DEEPENDIN              L"FIM dentro de uma instruτπo multilinha em %p"
#define LOCALIZED_ERROR_UNKNOWN                L"Estado de erro desconhecido  - erro interno."
#define LOCALIZED_PAUSING                      L"Pausando..."


// UniLogo-specific error messages.
#define LOCALIZED_ERROR_INVALIDSTATEFORINSTRUCTION L"Invalid state for instruction: %p" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_MODE_ON_SPRITE             L"cannot set the mode of a turtle with a rotating bitmap" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_BITMAPSPECIALTUTRLE        L"cannot make a special turtle use a rotating bitmap" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_BITMAPCLIPBOARD            L"cannot use the clipboard as a rotating bitmap" // NOT_YET_LOCALIZED
#define LOCALIZED_ERROR_SPECIALFORM                L"%p doesn't like %p as input because it has a special form" // NOT_YET_LOCALIZED

//
// Error messages displayed in Message Boxes.
//
#define LOCALIZED_ERROR                      L"Erro"
#define LOCALIZED_ERROR_BADINPUT             L"Entrada incorreta"
#define LOCALIZED_ERROR_BADINPUTNOTPAIRED    L"Entrada sem par"

#define LOCALIZED_ERROR_CANTOPENPORT         L"Nπo foi possφvel ABRIR a porta"
#define LOCALIZED_ERROR_CANTCLOSEPORT        L"Nπo foi possφvel FECHAR a porta"
#define LOCALIZED_ERROR_CANTFLUSHPORT        L"Nπo foi possφvel ESVAZIAR a porta"
#define LOCALIZED_ERROR_CANTDCBONPORT        L"Nπo foi possφvel construir dcb na porta"
#define LOCALIZED_ERROR_CANTSETPORT          L"Nπo foi possφvel mudar a porta"
#define LOCALIZED_ERROR_PORTALREADYOPEN      L"PORTA jß aberta"
#define LOCALIZED_ERROR_PORTNOTOPEN          L"PORTA nπo aberta"

#define LOCALIZED_ERROR_WINDOWALREADYEXISTS   L"%s jß existe"
#define LOCALIZED_ERROR_WINDOWDOESNOTEXIST    L"%s nπo existe"

#define LOCALIZED_ERROR_DLLNOTLOADED          L"A DLL nπo estß carregada"
#define LOCALIZED_ERROR_DLLLOADFAILED         L"Falha ao carregar a DLL"
#define LOCALIZED_ERROR_DLLINVALIDDATATYPE    L"Tipo invßlido de entrada"
#define LOCALIZED_ERROR_DLLINVALIDOUTPUTTYPE  L"Tipo invßlido de saφda"
#define LOCALIZED_ERROR_DLLFUNCTIONNOTFOUND   L"Funτπo nπo encontrada"
#define LOCALIZED_ERROR_DLLTYPEDATANOTPAIRED  L"Nem todas as entradas estπo emparelhadas"

#define LOCALIZED_ERROR_NETWORK               L"Erro de Rede"
#define LOCALIZED_ERROR_NETWORKRECEIVE        L"Erro de Recepτπo de Rede"
#define LOCALIZED_ERROR_NETWORKSEND           L"Erro de Envio de Rede"
#define LOCALIZED_ERROR_NETWORKSHUTDOWN       L"Erro Inesperado, a Rede poderia estar inativa"
#define LOCALIZED_ERROR_NETWORKNOTSTARTED     L"Nπo iniciada"
#define LOCALIZED_ERROR_NETWORKALREADYSTARTED L"Jß iniciada"
#define LOCALIZED_ERROR_NETWORKALREADYON      L"Jß estß pronta"
#define LOCALIZED_ERROR_NETWORKALREADYOFF     L"Jß desligada"

// The rest of the network errors shouldn't really be seen -- may be okay not to localize
#define LOCALIZED_ERROR_NETWORKNAMETOOLONG         L"Nome muito longo"
#define LOCALIZED_ERROR_NETWORKNOTINITIALIZED      L"Nπo inicializado"
#define LOCALIZED_ERROR_NETWORKSYSTEMNOTREADY      L"O sistema nπo estß pronto"
#define LOCALIZED_ERROR_NETWORKVERSIONNOTSUPPORTED L"Versπo desconhecida"
#define LOCALIZED_ERROR_NETWORKSENDAFTERSHUTDOWN   L"Nπo posso enviar ap≤s desativar o soquete"
#define LOCALIZED_ERROR_NETWORKINTERRUPTED         L"Chamada o sistema interrompida"
#define LOCALIZED_ERROR_NETWORKHOSTNOTFOUNDAUTH    L"Resposta Autoritativa: Dominio nπo encontrado"
#define LOCALIZED_ERROR_NETWORKHOSTNOTFOUNDNONAUTH L"Nπo-Autoritativa: Dominio no encontrado. Ver INICIARED"
#define LOCALIZED_ERROR_NETWORKNOTRECOVERABLE      L"Erro irrecuperßvel"
#define LOCALIZED_ERROR_NETWORKNODATA              L"Registro de dados nπo disponφvel"
#define LOCALIZED_ERROR_NETWORKBADFILENUMBER       L"N·mero de arquivo incorreto"
#define LOCALIZED_ERROR_NETWORKWOULDBLOCK          L"A operaτπo bloquearia"
#define LOCALIZED_ERROR_NETWORKNOWINPROGRESS       L"Operaτπo em curso"
#define LOCALIZED_ERROR_NETWORKALREADYINPROGRESS   L"Operaτπo jß em curso"
#define LOCALIZED_ERROR_NETWORKBADADDRESS          L"Endereτo incorreto"
#define LOCALIZED_ERROR_NETWORKNEEDDESTADDRESS     L"Necessito endereτo de destino"
#define LOCALIZED_ERROR_NETWORKMESSAGETOOLONG      L"Mensagem muito longa"
#define LOCALIZED_ERROR_NETWORKPFNOTSUPPORTED      L"Familφa do protocolo desconhecida"
#define LOCALIZED_ERROR_NETWORKDIRNOTEMPTY         L"O diret≤rio nπo estß vazio"
#define LOCALIZED_ERROR_NETWORKAPPLIMITREACHED     L"Atingido limite da aplicaτπo"
#define LOCALIZED_ERROR_NETWORKDISKQUOTA           L"Superado limite do disco"
#define LOCALIZED_ERROR_NETWORKINVALIDARGUMENTS    LOCALIZED_ERROR_BADINPUT
#define LOCALIZED_ERROR_NETWORKTOOMANYFILES        L"Muitos arquivos abertos"
#define LOCALIZED_ERROR_NETWORKACCESSDENIED        L"Acesso negado"
#define LOCALIZED_ERROR_NETWORKNOTASOCKET          L"Operaτπo de soquete em algo que nπo Θ um soquete"
#define LOCALIZED_ERROR_NETWORKADDRNOTAVAILABLE    L"Nπo pude encontrar endereτo pedido"
#define LOCALIZED_ERROR_NETWORKADDRINUSE           L"O endereτo jß estß em uso"
#define LOCALIZED_ERROR_NETWORKAFNOTSUPPORTED      L"Famφlia de endereτo nπo Θ reconhecida pelo protocolo"
#define LOCALIZED_ERROR_NETWORKTIMEDOUT            L"Tempo de tentativa de conexπo excedido"
#define LOCALIZED_ERROR_NETWORKTYPENOTSUPPORTED    L"Tipo de soquete desconhecido"
#define LOCALIZED_ERROR_NETWORKPROTONOTSUPPORTED   L"Protocolo desconhecido"
#define LOCALIZED_ERROR_NETWORKNOBUFFER            L"Sem espaτo na mem≤ria temporßria"
#define LOCALIZED_ERROR_NETWORKALREADYCONNECTED    L"Soquete jß estß conectado"
#define LOCALIZED_ERROR_NETWORKNOTCONNECTED        L"Soquete nπo estß conectado"
#define LOCALIZED_ERROR_NETWORKBADPROTOOPT         L"Opτπo de protocolo incorreta"
#define LOCALIZED_ERROR_NETWORKCONNECTIONRESET     L"Conexπo reiniciada pelo interlocutor"
#define LOCALIZED_ERROR_NETWORKCONNECTIONABORT     L"O software ocasionou o fim da conexπo"
#define LOCALIZED_ERROR_NETWORKISDOWN              L"A rede caiu"
#define LOCALIZED_ERROR_NETWORKRESET               L"A rede foi reiniciada"
#define LOCALIZED_ERROR_NETWORKCONNECTIONREFUSED   L"Conexπo recusada"
#define LOCALIZED_ERROR_NETWORKHOSTISDOWN          L"Domφnio caiu"
#define LOCALIZED_ERROR_NETWORKHOSTISUNREACHABLE   L"Domφnio nπo alcanτßvel"
#define LOCALIZED_ERROR_NETWORKBADPROTOTYPE        L"O protocolo Θ de tipo equivocado para o soquete"
#define LOCALIZED_ERROR_NETWORKBADOPNOTSUPPORTED   L"Operaτπo nπo permitida no soquete"
#define LOCALIZED_ERROR_NETWORKUNREACHABLE         L"Nπo foi encontrada rota para o domφnio remoto"
#define LOCALIZED_ERROR_NETWORKTOOMANYREFS         L"Demasiadas referΩncias"

#define LOCALIZED_ERROR_POLYSTART               L"Erro em IniciePolφgono"
#define LOCALIZED_ERROR_POLYSTARTALREADYSTARTED L"VocΩ jß havia iniciado um polφgono"

#define LOCALIZED_ERROR_POLYEND                 L"Erro em MostrePolφgono"
#define LOCALIZED_ERROR_POLYENDNOTSTARTED       L"VocΩ nπo iniciou um polφgono"
#define LOCALIZED_ERROR_POLYENDNEED3VECTORS     L"╔ necessßrio ao menos 3 vetores para definir um polφgono"

#define LOCALIZED_ERROR_SOUND                 L"Erro de Som"

#define LOCALIZED_ERROR_MIDI                  L"Erro de MIDI"
#define LOCALIZED_ERROR_MIDIINVALIDDEVICE     L"Dispositivo Midi incorreto"
#define LOCALIZED_ERROR_MIDIALREADYOPEN       L"Jß estß aberto"
#define LOCALIZED_ERROR_MIDINOTOPEN           L"Nπo estß aberto"

#define LOCALIZED_ERROR_CLIPBOARDISEMPTY      L"Nπo hß texto no clipboard"

#define LOCALIZED_ERROR_MCI                   L"Erro de MCI"

#define LOCALIZED_ERROR_TIMERNOTFOUND         L"Temporizador nπo encontrado"

#define LOCALIZED_ERROR_HHCTRLNOTLOADED       L"Ajuda on line nπo disponφvel pois nπo pude carregar hhctrl.ocx"

#define LOCALIZED_ERROR_BADCOMMANDLINE        L"Linha de comandos incorreta"

#define LOCALIZED_ERROR_TMPNOTDEFINED         L"A varißvel de ambiente TMP nπo estß definida ou Θ incorreta.\n" LOCALIZED_GENERAL_PRODUCTNAME L" tentarß usar C:\\ para guardar arquivos temporßrios"

#define LOCALIZED_ERROR_GIFSAVEFAILED         L"Problema ao criar GIF, revise quantidade de mem≤ria ou espaτo em disco"
#define LOCALIZED_ERROR_GIFREADFAILED         L"Problema ao ler GIF, revise quantidade de mem≤ria ou espaτo em disco"

#define LOCALIZED_ERROR_BITMAPINDEXOUTOFRANGE  L"═ndice de BitMap fora do campo"
#define LOCALIZED_ERROR_BITMAPCUTFAILED        L"Recortar falhou, possivelmente nπo haja mem≤ria suficiente"

#define LOCALIZED_ERROR_BITMAPNOTHINGTOPASTE    L"Nada para Colar"
#define LOCALIZED_ERROR_BITMAPINDEXISNOTBITMAP  L"O BitMap no φndice deve ser inicializado com um mapa de bits"

#define LOCALIZED_ERROR_TURTLEHASNOPICTURE      L"A Tat %d nπo tem figura, farei uma parada"

#define LOCALIZED_ERROR_FONTNOTFOUND            L"Nπo encontrei o tipo de letra chamado %s. Escolhe um dos seguintes:\n"

#define LOCALIZED_ERROR_PRINTERCANTSCALE        L"O gerenciador de impressπo nπo conhece esta funτπo"
#define LOCALIZED_ERROR_CANTDRAWIMAGE           L"Nπo posso desenhar a imagem"
#define LOCALIZED_ERROR_CANTEXTRACTIMAGE        L"Nπo posso extrair a imagem"
#define LOCALIZED_ERROR_SUBCODE                 L"Subc≤digo"

//
// Strings in the dialog box for reading from "stdin"
//
#define LOCALIZED_INPUT         L"Entrada:"
#define LOCALIZED_PROMPT_TO     L"Modo Para (Cancelar para Finalizar)"
#define LOCALIZED_PROMPT_LIST   L"Modo de Lista (Cancelar para Parar)"
#define LOCALIZED_PROMPT_PAUSE  L"Modo de Pausa (Cancelar para Continuar)"
#define LOCALIZED_PROMPT_INPUT  L"Modo de Entrada (Cancelar para Parar)"

//
// Messages shown by the FILE API.
//
#define LOCALIZED_FILE_CHDIRSUCCEEDED      L"Mudado para  \"%s\""
#define LOCALIZED_FILE_CHDIRFAILED         L"Nπo pude mudar para o diret≤rio \"%s\""
#define LOCALIZED_FILE_POPPEDTO            L"Mudado para \"%s\""
#define LOCALIZED_FILE_MKDIRSUCCEEDED      L"Agora estamos no novo diret≤rio criado \"%s\""
#define LOCALIZED_FILE_MKDIRFAILED         L"Nπo pude criar diret≤rio \"%s\""
#define LOCALIZED_FILE_RMDIRSUCCEEDED      L"Diret≤rio Eliminado \"%s\""
#define LOCALIZED_FILE_RMDIRFAILED         L"Nπo pude eliminar o diret≤rio \"%s\""
#define LOCALIZED_FILE_RMDIRFAILEDNOEXIST  L"O diret≤rio nπo existe"
#define LOCALIZED_FILE_RMDIRFAILEDNOTEMPTY L"Assegure-se que o diret≤rio esteja vazio antes de eliminß-lo."


//
// The default title of a Logo picture when it is printed
//
#define LOCALIZED_BITMAPPRINTOUTTITLE       L"Desenho no Logo"

//
// Other strings
//
#define LOCALIZED_ACTIVEAREA    L"┴rea Ativa"
#define LOCALIZED_INFORMATION   L"Informaτπo"
#define LOCALIZED_WARNING       L"Atenτπo"
#define LOCALIZED_UNTITLED      L"Sem nome"
#define LOCALIZED_UNKNOWN       L"Desconhecido"

// The text which is shown when the Unbound node is formatted.
// This happens when a macro outputs nothing (instead of a list)
#define LOCALIZED_UNBOUND       L"Nπo demarcado"

// The title of the Editor's Find/Replace dialog box
#define LOCALIZED_EDITOR_TITLE_FIND     L"Localizar"
#define LOCALIZED_EDITOR_TITLE_REPLACE  L"Substituir"

//
// The text that's displayed when the Editor's Search->Find fails.
//
#define LOCALIZED_STRINGTABLE_CANNOTFINDSTRING L"%s no encontrado"


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
#define LOCALIZED_COLOR_ALICEBLUE             L"AzulAlice"
#define LOCALIZED_COLOR_ANTIQUEWHITE          L"BrancoAntigo"
#define LOCALIZED_COLOR_AQUA                  L"┴gua"
#define LOCALIZED_COLOR_AQUAMARINE            L"┴guamarinha"
#define LOCALIZED_COLOR_AZURE                 L"AzulCeleste"
#define LOCALIZED_COLOR_BEIGE                 L"Bege"
#define LOCALIZED_COLOR_BISQUE                L"CremeDeMarisco"
#define LOCALIZED_COLOR_BLACK                 L"Preto"
#define LOCALIZED_COLOR_BLANCHEDALMOND        L"AmΩndoa"
#define LOCALIZED_COLOR_BLUE                  L"Azul"
#define LOCALIZED_COLOR_BLUEVIOLET            L"AzulVioleta"
#define LOCALIZED_COLOR_BROWN                 L"MarromClaro"
#define LOCALIZED_COLOR_BURLYWOOD             L"Madeira"
#define LOCALIZED_COLOR_CADETBLUE             L"AzulCadete"
#define LOCALIZED_COLOR_CHARTREUSE            L"VerdeParis"
#define LOCALIZED_COLOR_CHOCOLATE             L"Chocolate"
#define LOCALIZED_COLOR_CORAL                 L"Coral"
#define LOCALIZED_COLOR_CORNFLOWERBLUE        L"AzulFlordeMilho"
#define LOCALIZED_COLOR_CORNSILK              L"Milho"
#define LOCALIZED_COLOR_CRIMSON               L"Carmim"
#define LOCALIZED_COLOR_CYAN                  L"Ciano"
#define LOCALIZED_COLOR_DARKBLUE              L"AzulEscuro"
#define LOCALIZED_COLOR_DARKCYAN              L"CianoEscuro"
#define LOCALIZED_COLOR_DARKGOLDENROD         L"DouradoEscuro"
#define LOCALIZED_COLOR_DARKGRAY              L"CinzaEscuro"
#define LOCALIZED_COLOR_DARKGREEN             L"VerdeEscuro"
#define LOCALIZED_COLOR_DARKGREY              L"CinzaEscuro"
#define LOCALIZED_COLOR_DARKKHAKI             L"CaquiEscuro"
#define LOCALIZED_COLOR_DARKMAGENTA           L"MagentaEscuro"
#define LOCALIZED_COLOR_DARKOLIVEGREEN        L"OlivaEscuro"
#define LOCALIZED_COLOR_DARKORANGE            L"LaranjaEscuro"
#define LOCALIZED_COLOR_DARKORCHID            L"OrquφdeaEscuro"
#define LOCALIZED_COLOR_DARKRED               L"VermelhoEscuro"
#define LOCALIZED_COLOR_DARKSALMON            L"SalmπoEscuro"
#define LOCALIZED_COLOR_DARKSEAGREEN          L"VerdeMarEscuro"
#define LOCALIZED_COLOR_DARKSLATEBLUE         L"AzulPardoEscuro"
#define LOCALIZED_COLOR_DARKSLATEGRAY         L"CinzaPardoEscuro"
#define LOCALIZED_COLOR_DARKSLATEGREY         L"CinzaPardoEscuro"
#define LOCALIZED_COLOR_DARKTURQUOISE         L"TurquesaEscuro"
#define LOCALIZED_COLOR_DARKVIOLET            L"VioletaEscuro"
#define LOCALIZED_COLOR_DEEPPINK              L"RosaProfundo"
#define LOCALIZED_COLOR_DEEPSKYBLUE           L"AzulCelesteProfundo"
#define LOCALIZED_COLOR_DIMGRAY               L"CinzaFosco"
#define LOCALIZED_COLOR_DIMGREY               L"CinzaSuave"
#define LOCALIZED_COLOR_DODGERBLUE            L"AzulFurtivo"
#define LOCALIZED_COLOR_FIREBRICK             L"VermelhoTijolo"
#define LOCALIZED_COLOR_FLORALWHITE           L"BrancoFloral"
#define LOCALIZED_COLOR_FORESTGREEN           L"VerdeFloresta"
#define LOCALIZED_COLOR_FUCHSIA               L"F·csia"
#define LOCALIZED_COLOR_GAINSBORO             L"CinzaMΘdio"
#define LOCALIZED_COLOR_GHOSTWHITE            L"BrancoLigeiro"
#define LOCALIZED_COLOR_GOLD                  L"Ouro"
#define LOCALIZED_COLOR_GOLDENROD             L"Dourado"
#define LOCALIZED_COLOR_GRAY                  L"Prata"
#define LOCALIZED_COLOR_GREEN                 L"Verde"
#define LOCALIZED_COLOR_GREENYELLOW           L"AmareloEsverdeado"
#define LOCALIZED_COLOR_GREY                  L"Cinza"
#define LOCALIZED_COLOR_HONEYDEW              L"Manß"
#define LOCALIZED_COLOR_HOTPINK               L"RosaQuente"
#define LOCALIZED_COLOR_INDIANRED             L"VermelhoIndiano"
#define LOCALIZED_COLOR_INDIGO                L"Anil"
#define LOCALIZED_COLOR_IVORY                 L"Marfim"
#define LOCALIZED_COLOR_KHAKI                 L"Caqui"
#define LOCALIZED_COLOR_LAVENDER              L"Lavanda"
#define LOCALIZED_COLOR_LAVENDERBLUSH         L"RosaLavanda"
#define LOCALIZED_COLOR_LAWNGREEN             L"VerdeGrama"
#define LOCALIZED_COLOR_LEMONCHIFFON          L"Seda"
#define LOCALIZED_COLOR_LIGHTBLUE             L"AzulClaro"
#define LOCALIZED_COLOR_LIGHTCORAL            L"CoralClaro"
#define LOCALIZED_COLOR_LIGHTCYAN             L"CianoClaro"
#define LOCALIZED_COLOR_LIGHTGOLDENRODYELLOW  L"AmareloDouradoClaro"
#define LOCALIZED_COLOR_LIGHTGRAY             L"CinzaClaro"
#define LOCALIZED_COLOR_LIGHTGREEN            L"VerdeClaro"
#define LOCALIZED_COLOR_LIGHTGREY             L"CinzaClaro"
#define LOCALIZED_COLOR_LIGHTPINK             L"RosaClaro"
#define LOCALIZED_COLOR_LIGHTSALMON           L"SalmπoClaro"
#define LOCALIZED_COLOR_LIGHTSEAGREEN         L"VerdeMarinhoClaro"
#define LOCALIZED_COLOR_LIGHTSKYBLUE          L"AzulCelesteClaro"
#define LOCALIZED_COLOR_LIGHTSLATEGRAY        L"CinzaPardoClaro"
#define LOCALIZED_COLOR_LIGHTSLATEGREY        L"CinzaPardoClaro"
#define LOCALIZED_COLOR_LIGHTSTEELBLUE        L"AzulAτoClaro"
#define LOCALIZED_COLOR_LIGHTYELLOW           L"AmareloClaro"
#define LOCALIZED_COLOR_LIME                  L"Lima"
#define LOCALIZED_COLOR_LIMEGREEN             L"VerdeLima"
#define LOCALIZED_COLOR_LINEN                 L"Linho"
#define LOCALIZED_COLOR_MAGENTA               L"Magenta"
#define LOCALIZED_COLOR_MAROON                L"Marrom"
#define LOCALIZED_COLOR_MEDIUMAQUAMARINE      L"┴guaMarinhaMΘdio"
#define LOCALIZED_COLOR_MEDIUMBLUE            L"AzulMΘdio"
#define LOCALIZED_COLOR_MEDIUMORCHID          L"OrquφdeaMΘdio"
#define LOCALIZED_COLOR_MEDIUMPURPLE          L"P·rpuraMΘdio"
#define LOCALIZED_COLOR_MEDIUMSEAGREEN        L"VerdeMarMΘdio"
#define LOCALIZED_COLOR_MEDIUMSLATEBLUE       L"AzulPardoMΘdio"
#define LOCALIZED_COLOR_MEDIUMSPRINGGREEN     L"VerdePrimaveraMΘdio"
#define LOCALIZED_COLOR_MEDIUMTURQUOISE       L"TurquesaMΘdio"
#define LOCALIZED_COLOR_MEDIUMVIOLETRED       L"VioletaMΘdio"
#define LOCALIZED_COLOR_MIDNIGHTBLUE          L"AzulMeiaNoite"
#define LOCALIZED_COLOR_MINTCREAM             L"CremeDeMenta"
#define LOCALIZED_COLOR_MISTYROSE             L"RosaBrumoso"
#define LOCALIZED_COLOR_MOCCASIN              L"Mocassim"
#define LOCALIZED_COLOR_NAVAJOWHITE           L"BrancoNavajo"
#define LOCALIZED_COLOR_NAVY                  L"Marinho"
#define LOCALIZED_COLOR_OLDLACE               L"RendaAntiga"
#define LOCALIZED_COLOR_OLIVE                 L"Oliva"
#define LOCALIZED_COLOR_OLIVEDRAB             L"OlivaPardo"
#define LOCALIZED_COLOR_ORANGE                L"Laranja"
#define LOCALIZED_COLOR_ORANGERED             L"Alaranjado"
#define LOCALIZED_COLOR_ORCHID                L"Orquφdea"
#define LOCALIZED_COLOR_PALEGOLDENROD         L"DouradoPßlido"
#define LOCALIZED_COLOR_PALEGREEN             L"VerdePßlido"
#define LOCALIZED_COLOR_PALETURQUOISE         L"TurquesaPßlido"
#define LOCALIZED_COLOR_PALEVIOLETRED         L"VioletaPßlido"
#define LOCALIZED_COLOR_PAPAYAWHIP            L"Papaia"
#define LOCALIZED_COLOR_PEACHPUFF             L"PΩssego"
#define LOCALIZED_COLOR_PERU                  L"Peru"
#define LOCALIZED_COLOR_PINK                  L"Rosa"
#define LOCALIZED_COLOR_PLUM                  L"Ameixa"
#define LOCALIZED_COLOR_POWDERBLUE            L"AzulP≤lvora"
#define LOCALIZED_COLOR_PURPLE                L"P·rpura"
#define LOCALIZED_COLOR_RED                   L"Vermelho"
#define LOCALIZED_COLOR_ROSYBROWN             L"MarromRosado"
#define LOCALIZED_COLOR_ROYALBLUE             L"AzulReal"
#define LOCALIZED_COLOR_SADDLEBROWN           L"MarromTelha"
#define LOCALIZED_COLOR_SALMON                L"Salmπo"
#define LOCALIZED_COLOR_SANDYBROWN            L"MarromAreia"
#define LOCALIZED_COLOR_SEAGREEN              L"VerdeMarinho"
#define LOCALIZED_COLOR_SEASHELL              L"Concha"
#define LOCALIZED_COLOR_SIENNA                L"Siena"
#define LOCALIZED_COLOR_SILVER                L"Prata"
#define LOCALIZED_COLOR_SKYBLUE               L"AzulCΘu"
#define LOCALIZED_COLOR_SLATEBLUE             L"AzulPardo"
#define LOCALIZED_COLOR_SLATEGRAY             L"CinzaPardo"
#define LOCALIZED_COLOR_SLATEGREY             L"CinzaPardo"
#define LOCALIZED_COLOR_SNOW                  L"Neve"
#define LOCALIZED_COLOR_SPRINGGREEN           L"VerdePrimavera"
#define LOCALIZED_COLOR_STEELBLUE             L"AzulAτo"
#define LOCALIZED_COLOR_TAN                   L"Bronzeado"
#define LOCALIZED_COLOR_TEAL                  L"VerdeAzulado"
#define LOCALIZED_COLOR_THISTLE               L"Cardo"
#define LOCALIZED_COLOR_TOMATO                L"Tomate"
#define LOCALIZED_COLOR_TURQUOISE             L"Turquesa"
#define LOCALIZED_COLOR_VIOLET                L"Violeta"
#define LOCALIZED_COLOR_WHEAT                 L"Trigo"
#define LOCALIZED_COLOR_WHITE                 L"Branco"
#define LOCALIZED_COLOR_WHITESMOKE            L"FumaτaBranca"
#define LOCALIZED_COLOR_YELLOW                L"Amarelo"
#define LOCALIZED_COLOR_YELLOWGREEN           L"VerdeAmarelado"

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
