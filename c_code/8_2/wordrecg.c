/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tident199021 tident199021;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj199015 tidobj199015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY203330[252];
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj199015  {
  TNimObject Sup;
NI Id;
};
struct  tident199021  {
  tidobj199015 Sup;
NimStringDesc* S;
tident199021* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(void, initspecials_203400)(void);
N_NIMCALL(tident199021*, getident_199482)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_127885)(NimStringDesc* x);
N_NIMCALL(NU8, whichkeyword_203379)(tident199021* id);
N_NIMCALL(tident199021*, getident_199472)(NimStringDesc* identifier);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
STRING_LITERAL(TMP448, "", 0);
STRING_LITERAL(TMP449, "addr", 4);
STRING_LITERAL(TMP450, "and", 3);
STRING_LITERAL(TMP451, "as", 2);
STRING_LITERAL(TMP452, "asm", 3);
STRING_LITERAL(TMP453, "atomic", 6);
STRING_LITERAL(TMP454, "bind", 4);
STRING_LITERAL(TMP455, "block", 5);
STRING_LITERAL(TMP456, "break", 5);
STRING_LITERAL(TMP457, "case", 4);
STRING_LITERAL(TMP458, "cast", 4);
STRING_LITERAL(TMP459, "const", 5);
STRING_LITERAL(TMP460, "continue", 8);
STRING_LITERAL(TMP461, "converter", 9);
STRING_LITERAL(TMP462, "discard", 7);
STRING_LITERAL(TMP463, "distinct", 8);
STRING_LITERAL(TMP464, "div", 3);
STRING_LITERAL(TMP465, "do", 2);
STRING_LITERAL(TMP466, "elif", 4);
STRING_LITERAL(TMP467, "else", 4);
STRING_LITERAL(TMP468, "end", 3);
STRING_LITERAL(TMP469, "enum", 4);
STRING_LITERAL(TMP470, "except", 6);
STRING_LITERAL(TMP471, "export", 6);
STRING_LITERAL(TMP472, "finally", 7);
STRING_LITERAL(TMP473, "for", 3);
STRING_LITERAL(TMP474, "from", 4);
STRING_LITERAL(TMP475, "generic", 7);
STRING_LITERAL(TMP476, "if", 2);
STRING_LITERAL(TMP477, "import", 6);
STRING_LITERAL(TMP478, "in", 2);
STRING_LITERAL(TMP479, "include", 7);
STRING_LITERAL(TMP480, "interface", 9);
STRING_LITERAL(TMP481, "is", 2);
STRING_LITERAL(TMP482, "isnot", 5);
STRING_LITERAL(TMP483, "iterator", 8);
STRING_LITERAL(TMP484, "let", 3);
STRING_LITERAL(TMP485, "macro", 5);
STRING_LITERAL(TMP486, "method", 6);
STRING_LITERAL(TMP487, "mixin", 5);
STRING_LITERAL(TMP488, "mod", 3);
STRING_LITERAL(TMP489, "nil", 3);
STRING_LITERAL(TMP490, "not", 3);
STRING_LITERAL(TMP491, "notin", 5);
STRING_LITERAL(TMP492, "object", 6);
STRING_LITERAL(TMP493, "of", 2);
STRING_LITERAL(TMP494, "or", 2);
STRING_LITERAL(TMP495, "out", 3);
STRING_LITERAL(TMP496, "proc", 4);
STRING_LITERAL(TMP497, "ptr", 3);
STRING_LITERAL(TMP498, "raise", 5);
STRING_LITERAL(TMP499, "ref", 3);
STRING_LITERAL(TMP500, "return", 6);
STRING_LITERAL(TMP501, "shl", 3);
STRING_LITERAL(TMP502, "shr", 3);
STRING_LITERAL(TMP503, "static", 6);
STRING_LITERAL(TMP504, "template", 8);
STRING_LITERAL(TMP505, "try", 3);
STRING_LITERAL(TMP506, "tuple", 5);
STRING_LITERAL(TMP507, "type", 4);
STRING_LITERAL(TMP508, "using", 5);
STRING_LITERAL(TMP509, "var", 3);
STRING_LITERAL(TMP510, "when", 4);
STRING_LITERAL(TMP511, "while", 5);
STRING_LITERAL(TMP512, "with", 4);
STRING_LITERAL(TMP513, "without", 7);
STRING_LITERAL(TMP514, "xor", 3);
STRING_LITERAL(TMP515, "yield", 5);
STRING_LITERAL(TMP516, ":", 1);
STRING_LITERAL(TMP517, "::", 2);
STRING_LITERAL(TMP518, "=", 1);
STRING_LITERAL(TMP519, ".", 1);
STRING_LITERAL(TMP520, "..", 2);
STRING_LITERAL(TMP521, "*", 1);
STRING_LITERAL(TMP522, "-", 1);
STRING_LITERAL(TMP523, "magic", 5);
STRING_LITERAL(TMP524, "thread", 6);
STRING_LITERAL(TMP525, "final", 5);
STRING_LITERAL(TMP526, "profiler", 8);
STRING_LITERAL(TMP527, "objchecks", 9);
STRING_LITERAL(TMP528, "destroy", 7);
STRING_LITERAL(TMP529, "immediate", 9);
STRING_LITERAL(TMP530, "destructor", 10);
STRING_LITERAL(TMP531, "delegator", 9);
STRING_LITERAL(TMP532, "override", 8);
STRING_LITERAL(TMP533, "importcpp", 9);
STRING_LITERAL(TMP534, "importobjc", 10);
STRING_LITERAL(TMP535, "importcompilerproc", 18);
STRING_LITERAL(TMP536, "importc", 7);
STRING_LITERAL(TMP537, "exportc", 7);
STRING_LITERAL(TMP538, "incompletestruct", 16);
STRING_LITERAL(TMP539, "requiresinit", 12);
STRING_LITERAL(TMP540, "align", 5);
STRING_LITERAL(TMP541, "nodecl", 6);
STRING_LITERAL(TMP542, "pure", 4);
STRING_LITERAL(TMP543, "sideeffect", 10);
STRING_LITERAL(TMP544, "header", 6);
STRING_LITERAL(TMP545, "nosideeffect", 12);
STRING_LITERAL(TMP546, "gcsafe", 6);
STRING_LITERAL(TMP547, "noreturn", 8);
STRING_LITERAL(TMP548, "merge", 5);
STRING_LITERAL(TMP549, "lib", 3);
STRING_LITERAL(TMP550, "dynlib", 6);
STRING_LITERAL(TMP551, "compilerproc", 12);
STRING_LITERAL(TMP552, "procvar", 7);
STRING_LITERAL(TMP553, "fatal", 5);
STRING_LITERAL(TMP554, "error", 5);
STRING_LITERAL(TMP555, "warning", 7);
STRING_LITERAL(TMP556, "hint", 4);
STRING_LITERAL(TMP557, "line", 4);
STRING_LITERAL(TMP558, "push", 4);
STRING_LITERAL(TMP559, "pop", 3);
STRING_LITERAL(TMP560, "define", 6);
STRING_LITERAL(TMP561, "undef", 5);
STRING_LITERAL(TMP562, "linedir", 7);
STRING_LITERAL(TMP563, "stacktrace", 10);
STRING_LITERAL(TMP564, "linetrace", 9);
STRING_LITERAL(TMP565, "link", 4);
STRING_LITERAL(TMP566, "compile", 7);
STRING_LITERAL(TMP567, "linksys", 7);
STRING_LITERAL(TMP568, "deprecated", 10);
STRING_LITERAL(TMP569, "varargs", 7);
STRING_LITERAL(TMP570, "callconv", 8);
STRING_LITERAL(TMP571, "breakpoint", 10);
STRING_LITERAL(TMP572, "debugger", 8);
STRING_LITERAL(TMP573, "nimcall", 7);
STRING_LITERAL(TMP574, "stdcall", 7);
STRING_LITERAL(TMP575, "cdecl", 5);
STRING_LITERAL(TMP576, "safecall", 8);
STRING_LITERAL(TMP577, "syscall", 7);
STRING_LITERAL(TMP578, "inline", 6);
STRING_LITERAL(TMP579, "noinline", 8);
STRING_LITERAL(TMP580, "fastcall", 8);
STRING_LITERAL(TMP581, "closure", 7);
STRING_LITERAL(TMP582, "noconv", 6);
STRING_LITERAL(TMP583, "on", 2);
STRING_LITERAL(TMP584, "off", 3);
STRING_LITERAL(TMP585, "checks", 6);
STRING_LITERAL(TMP586, "rangechecks", 11);
STRING_LITERAL(TMP587, "boundchecks", 11);
STRING_LITERAL(TMP588, "overflowchecks", 14);
STRING_LITERAL(TMP589, "nilchecks", 9);
STRING_LITERAL(TMP590, "floatchecks", 11);
STRING_LITERAL(TMP591, "nanchecks", 9);
STRING_LITERAL(TMP592, "infchecks", 9);
STRING_LITERAL(TMP593, "assertions", 10);
STRING_LITERAL(TMP594, "patterns", 8);
STRING_LITERAL(TMP595, "warnings", 8);
STRING_LITERAL(TMP596, "hints", 5);
STRING_LITERAL(TMP597, "optimization", 12);
STRING_LITERAL(TMP598, "raises", 6);
STRING_LITERAL(TMP599, "writes", 6);
STRING_LITERAL(TMP600, "reads", 5);
STRING_LITERAL(TMP601, "size", 4);
STRING_LITERAL(TMP602, "effects", 7);
STRING_LITERAL(TMP603, "tags", 4);
STRING_LITERAL(TMP604, "deadcodeelim", 12);
STRING_LITERAL(TMP605, "safecode", 8);
STRING_LITERAL(TMP606, "noforward", 9);
STRING_LITERAL(TMP607, "pragma", 6);
STRING_LITERAL(TMP608, "compiletime", 11);
STRING_LITERAL(TMP609, "noinit", 6);
STRING_LITERAL(TMP610, "passc", 5);
STRING_LITERAL(TMP611, "passl", 5);
STRING_LITERAL(TMP612, "borrow", 6);
STRING_LITERAL(TMP613, "discardable", 11);
STRING_LITERAL(TMP614, "fieldchecks", 11);
STRING_LITERAL(TMP615, "watchpoint", 10);
STRING_LITERAL(TMP616, "subschar", 8);
STRING_LITERAL(TMP617, "acyclic", 7);
STRING_LITERAL(TMP618, "shallow", 7);
STRING_LITERAL(TMP619, "unroll", 6);
STRING_LITERAL(TMP620, "linearscanend", 13);
STRING_LITERAL(TMP621, "computedgoto", 12);
STRING_LITERAL(TMP622, "injectstmt", 10);
STRING_LITERAL(TMP623, "write", 5);
STRING_LITERAL(TMP624, "gensym", 6);
STRING_LITERAL(TMP625, "inject", 6);
STRING_LITERAL(TMP626, "dirty", 5);
STRING_LITERAL(TMP627, "inheritable", 11);
STRING_LITERAL(TMP628, "threadvar", 9);
STRING_LITERAL(TMP629, "emit", 4);
STRING_LITERAL(TMP630, "asmnostackframe", 15);
STRING_LITERAL(TMP631, "implicitstatic", 14);
STRING_LITERAL(TMP632, "global", 6);
STRING_LITERAL(TMP633, "codegendecl", 11);
STRING_LITERAL(TMP634, "unchecked", 9);
STRING_LITERAL(TMP635, "guard", 5);
STRING_LITERAL(TMP636, "locks", 5);
STRING_LITERAL(TMP637, "auto", 4);
STRING_LITERAL(TMP638, "bool", 4);
STRING_LITERAL(TMP639, "catch", 5);
STRING_LITERAL(TMP640, "char", 4);
STRING_LITERAL(TMP641, "class", 5);
STRING_LITERAL(TMP642, "const_cast", 10);
STRING_LITERAL(TMP643, "default", 7);
STRING_LITERAL(TMP644, "delete", 6);
STRING_LITERAL(TMP645, "double", 6);
STRING_LITERAL(TMP646, "dynamic_cast", 12);
STRING_LITERAL(TMP647, "explicit", 8);
STRING_LITERAL(TMP648, "extern", 6);
STRING_LITERAL(TMP649, "false", 5);
STRING_LITERAL(TMP650, "float", 5);
STRING_LITERAL(TMP651, "friend", 6);
STRING_LITERAL(TMP652, "goto", 4);
STRING_LITERAL(TMP653, "int", 3);
STRING_LITERAL(TMP654, "long", 4);
STRING_LITERAL(TMP655, "mutable", 7);
STRING_LITERAL(TMP656, "namespace", 9);
STRING_LITERAL(TMP657, "new", 3);
STRING_LITERAL(TMP658, "operator", 8);
STRING_LITERAL(TMP659, "private", 7);
STRING_LITERAL(TMP660, "protected", 9);
STRING_LITERAL(TMP661, "public", 6);
STRING_LITERAL(TMP662, "register", 8);
STRING_LITERAL(TMP663, "reinterpret_cast", 16);
STRING_LITERAL(TMP664, "short", 5);
STRING_LITERAL(TMP665, "signed", 6);
STRING_LITERAL(TMP666, "sizeof", 6);
STRING_LITERAL(TMP667, "static_cast", 11);
STRING_LITERAL(TMP668, "struct", 6);
STRING_LITERAL(TMP669, "switch", 6);
STRING_LITERAL(TMP670, "this", 4);
STRING_LITERAL(TMP671, "throw", 5);
STRING_LITERAL(TMP672, "true", 4);
STRING_LITERAL(TMP673, "typedef", 7);
STRING_LITERAL(TMP674, "typeid", 6);
STRING_LITERAL(TMP675, "typename", 8);
STRING_LITERAL(TMP676, "union", 5);
STRING_LITERAL(TMP677, "packed", 6);
STRING_LITERAL(TMP678, "unsigned", 8);
STRING_LITERAL(TMP679, "virtual", 7);
STRING_LITERAL(TMP680, "void", 4);
STRING_LITERAL(TMP681, "volatile", 8);
STRING_LITERAL(TMP682, "wchar_t", 7);
STRING_LITERAL(TMP683, "alignas", 7);
STRING_LITERAL(TMP684, "alignof", 7);
STRING_LITERAL(TMP685, "constexpr", 9);
STRING_LITERAL(TMP686, "decltype", 8);
STRING_LITERAL(TMP687, "nullptr", 7);
STRING_LITERAL(TMP688, "noexcept", 8);
STRING_LITERAL(TMP689, "thread_local", 12);
STRING_LITERAL(TMP690, "static_assert", 13);
STRING_LITERAL(TMP691, "char16_t", 8);
STRING_LITERAL(TMP692, "char32_t", 8);
STRING_LITERAL(TMP693, "stdin", 5);
STRING_LITERAL(TMP694, "stdout", 6);
STRING_LITERAL(TMP695, "stderr", 6);
STRING_LITERAL(TMP696, "inout", 5);
STRING_LITERAL(TMP697, "bycopy", 6);
STRING_LITERAL(TMP698, "byref", 5);
STRING_LITERAL(TMP699, "oneway", 6);
NIM_CONST TY203330 specialwords_203329 = {((NimStringDesc*) &TMP448),
((NimStringDesc*) &TMP449),
((NimStringDesc*) &TMP450),
((NimStringDesc*) &TMP451),
((NimStringDesc*) &TMP452),
((NimStringDesc*) &TMP453),
((NimStringDesc*) &TMP454),
((NimStringDesc*) &TMP455),
((NimStringDesc*) &TMP456),
((NimStringDesc*) &TMP457),
((NimStringDesc*) &TMP458),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP460),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP462),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP464),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP469),
((NimStringDesc*) &TMP470),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP485),
((NimStringDesc*) &TMP486),
((NimStringDesc*) &TMP487),
((NimStringDesc*) &TMP488),
((NimStringDesc*) &TMP489),
((NimStringDesc*) &TMP490),
((NimStringDesc*) &TMP491),
((NimStringDesc*) &TMP492),
((NimStringDesc*) &TMP493),
((NimStringDesc*) &TMP494),
((NimStringDesc*) &TMP495),
((NimStringDesc*) &TMP496),
((NimStringDesc*) &TMP497),
((NimStringDesc*) &TMP498),
((NimStringDesc*) &TMP499),
((NimStringDesc*) &TMP500),
((NimStringDesc*) &TMP501),
((NimStringDesc*) &TMP502),
((NimStringDesc*) &TMP503),
((NimStringDesc*) &TMP504),
((NimStringDesc*) &TMP505),
((NimStringDesc*) &TMP506),
((NimStringDesc*) &TMP507),
((NimStringDesc*) &TMP508),
((NimStringDesc*) &TMP509),
((NimStringDesc*) &TMP510),
((NimStringDesc*) &TMP511),
((NimStringDesc*) &TMP512),
((NimStringDesc*) &TMP513),
((NimStringDesc*) &TMP514),
((NimStringDesc*) &TMP515),
((NimStringDesc*) &TMP516),
((NimStringDesc*) &TMP517),
((NimStringDesc*) &TMP518),
((NimStringDesc*) &TMP519),
((NimStringDesc*) &TMP520),
((NimStringDesc*) &TMP521),
((NimStringDesc*) &TMP522),
((NimStringDesc*) &TMP523),
((NimStringDesc*) &TMP524),
((NimStringDesc*) &TMP525),
((NimStringDesc*) &TMP526),
((NimStringDesc*) &TMP527),
((NimStringDesc*) &TMP528),
((NimStringDesc*) &TMP529),
((NimStringDesc*) &TMP530),
((NimStringDesc*) &TMP531),
((NimStringDesc*) &TMP532),
((NimStringDesc*) &TMP533),
((NimStringDesc*) &TMP534),
((NimStringDesc*) &TMP535),
((NimStringDesc*) &TMP536),
((NimStringDesc*) &TMP537),
((NimStringDesc*) &TMP538),
((NimStringDesc*) &TMP539),
((NimStringDesc*) &TMP540),
((NimStringDesc*) &TMP541),
((NimStringDesc*) &TMP542),
((NimStringDesc*) &TMP543),
((NimStringDesc*) &TMP544),
((NimStringDesc*) &TMP545),
((NimStringDesc*) &TMP546),
((NimStringDesc*) &TMP547),
((NimStringDesc*) &TMP548),
((NimStringDesc*) &TMP549),
((NimStringDesc*) &TMP550),
((NimStringDesc*) &TMP551),
((NimStringDesc*) &TMP552),
((NimStringDesc*) &TMP553),
((NimStringDesc*) &TMP554),
((NimStringDesc*) &TMP555),
((NimStringDesc*) &TMP556),
((NimStringDesc*) &TMP557),
((NimStringDesc*) &TMP558),
((NimStringDesc*) &TMP559),
((NimStringDesc*) &TMP560),
((NimStringDesc*) &TMP561),
((NimStringDesc*) &TMP562),
((NimStringDesc*) &TMP563),
((NimStringDesc*) &TMP564),
((NimStringDesc*) &TMP565),
((NimStringDesc*) &TMP566),
((NimStringDesc*) &TMP567),
((NimStringDesc*) &TMP568),
((NimStringDesc*) &TMP569),
((NimStringDesc*) &TMP570),
((NimStringDesc*) &TMP571),
((NimStringDesc*) &TMP572),
((NimStringDesc*) &TMP573),
((NimStringDesc*) &TMP574),
((NimStringDesc*) &TMP575),
((NimStringDesc*) &TMP576),
((NimStringDesc*) &TMP577),
((NimStringDesc*) &TMP578),
((NimStringDesc*) &TMP579),
((NimStringDesc*) &TMP580),
((NimStringDesc*) &TMP581),
((NimStringDesc*) &TMP582),
((NimStringDesc*) &TMP583),
((NimStringDesc*) &TMP584),
((NimStringDesc*) &TMP585),
((NimStringDesc*) &TMP586),
((NimStringDesc*) &TMP587),
((NimStringDesc*) &TMP588),
((NimStringDesc*) &TMP589),
((NimStringDesc*) &TMP590),
((NimStringDesc*) &TMP591),
((NimStringDesc*) &TMP592),
((NimStringDesc*) &TMP593),
((NimStringDesc*) &TMP594),
((NimStringDesc*) &TMP595),
((NimStringDesc*) &TMP596),
((NimStringDesc*) &TMP597),
((NimStringDesc*) &TMP598),
((NimStringDesc*) &TMP599),
((NimStringDesc*) &TMP600),
((NimStringDesc*) &TMP601),
((NimStringDesc*) &TMP602),
((NimStringDesc*) &TMP603),
((NimStringDesc*) &TMP604),
((NimStringDesc*) &TMP605),
((NimStringDesc*) &TMP606),
((NimStringDesc*) &TMP607),
((NimStringDesc*) &TMP608),
((NimStringDesc*) &TMP609),
((NimStringDesc*) &TMP610),
((NimStringDesc*) &TMP611),
((NimStringDesc*) &TMP612),
((NimStringDesc*) &TMP613),
((NimStringDesc*) &TMP614),
((NimStringDesc*) &TMP615),
((NimStringDesc*) &TMP616),
((NimStringDesc*) &TMP617),
((NimStringDesc*) &TMP618),
((NimStringDesc*) &TMP619),
((NimStringDesc*) &TMP620),
((NimStringDesc*) &TMP621),
((NimStringDesc*) &TMP622),
((NimStringDesc*) &TMP623),
((NimStringDesc*) &TMP624),
((NimStringDesc*) &TMP625),
((NimStringDesc*) &TMP626),
((NimStringDesc*) &TMP627),
((NimStringDesc*) &TMP628),
((NimStringDesc*) &TMP629),
((NimStringDesc*) &TMP630),
((NimStringDesc*) &TMP631),
((NimStringDesc*) &TMP632),
((NimStringDesc*) &TMP633),
((NimStringDesc*) &TMP634),
((NimStringDesc*) &TMP635),
((NimStringDesc*) &TMP636),
((NimStringDesc*) &TMP637),
((NimStringDesc*) &TMP638),
((NimStringDesc*) &TMP639),
((NimStringDesc*) &TMP640),
((NimStringDesc*) &TMP641),
((NimStringDesc*) &TMP642),
((NimStringDesc*) &TMP643),
((NimStringDesc*) &TMP644),
((NimStringDesc*) &TMP645),
((NimStringDesc*) &TMP646),
((NimStringDesc*) &TMP647),
((NimStringDesc*) &TMP648),
((NimStringDesc*) &TMP649),
((NimStringDesc*) &TMP650),
((NimStringDesc*) &TMP651),
((NimStringDesc*) &TMP652),
((NimStringDesc*) &TMP653),
((NimStringDesc*) &TMP654),
((NimStringDesc*) &TMP655),
((NimStringDesc*) &TMP656),
((NimStringDesc*) &TMP657),
((NimStringDesc*) &TMP658),
((NimStringDesc*) &TMP659),
((NimStringDesc*) &TMP660),
((NimStringDesc*) &TMP661),
((NimStringDesc*) &TMP662),
((NimStringDesc*) &TMP663),
((NimStringDesc*) &TMP664),
((NimStringDesc*) &TMP665),
((NimStringDesc*) &TMP666),
((NimStringDesc*) &TMP667),
((NimStringDesc*) &TMP668),
((NimStringDesc*) &TMP669),
((NimStringDesc*) &TMP670),
((NimStringDesc*) &TMP671),
((NimStringDesc*) &TMP672),
((NimStringDesc*) &TMP673),
((NimStringDesc*) &TMP674),
((NimStringDesc*) &TMP675),
((NimStringDesc*) &TMP676),
((NimStringDesc*) &TMP677),
((NimStringDesc*) &TMP678),
((NimStringDesc*) &TMP679),
((NimStringDesc*) &TMP680),
((NimStringDesc*) &TMP681),
((NimStringDesc*) &TMP682),
((NimStringDesc*) &TMP683),
((NimStringDesc*) &TMP684),
((NimStringDesc*) &TMP685),
((NimStringDesc*) &TMP686),
((NimStringDesc*) &TMP687),
((NimStringDesc*) &TMP688),
((NimStringDesc*) &TMP689),
((NimStringDesc*) &TMP690),
((NimStringDesc*) &TMP691),
((NimStringDesc*) &TMP692),
((NimStringDesc*) &TMP693),
((NimStringDesc*) &TMP694),
((NimStringDesc*) &TMP695),
((NimStringDesc*) &TMP696),
((NimStringDesc*) &TMP697),
((NimStringDesc*) &TMP698),
((NimStringDesc*) &TMP699)}
;

N_NIMCALL(void, initspecials_203400)(void) {
	{
		NU8 s_203461;
		NU8 res_203473;
		s_203461 = 0;
		res_203473 = ((NU8) 1);
		{
			while (1) {
				NI LOC4;
				tident199021* LOC5;
				if (!(res_203473 <= ((NU8) 251))) goto LA3;
				s_203461 = res_203473;
				LOC4 = 0;
				LOC4 = hashignorestyle_127885(specialwords_203329[(s_203461)- 0]);
				LOC5 = 0;
				LOC5 = getident_199482(specialwords_203329[(s_203461)- 0], LOC4);
				(*LOC5).Sup.Id = ((NI) (s_203461));
				res_203473 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(NU8, whichkeyword_203379)(tident199021* id) {
	NU8 result;
	result = 0;
	{
		if (!((*id).Sup.Id < 0)) goto LA3;
		result = ((NU8) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((NU8) ((*id).Sup.Id));
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, whichkeyword_203390)(NimStringDesc* id) {
	NU8 result;
	tident199021* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_199472(id);
	result = whichkeyword_203379(LOC1);
	return result;
}

N_NIMCALL(NI, findstr_203339)(NimStringDesc** a, NI aLen0, NimStringDesc* s) {
	NI result;
	result = 0;
	{
		NI i_203357;
		NI HEX3Atmp_203359;
		NI res_203362;
		i_203357 = 0;
		HEX3Atmp_203359 = 0;
		HEX3Atmp_203359 = (aLen0-1);
		res_203362 = 0;
		{
			while (1) {
				if (!(res_203362 <= HEX3Atmp_203359)) goto LA3;
				i_203357 = res_203362;
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(a[i_203357], s);
					if (!(LOC6 == 0)) goto LA7;
					result = i_203357;
					goto BeforeRet;
				}
				LA7: ;
				res_203362 += 1;
			} LA3: ;
		}
	}
	result = -1;
	BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_wordrecgInit)(void) {
	initspecials_203400();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_wordrecgDatInit)(void) {
}
