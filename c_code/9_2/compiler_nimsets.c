/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
#undef near
typedef struct TNode_bROa11lyF5vxEN9aYNbHmhw TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct TType_LTUWCZolpovw9cWE3JBWSUw TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TSym_AXG7xcvKqaxY6koRX1xkCw TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct TIdent_4umxGerWTHGPwUms7Yqu3g TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ TY_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct TY_pxbIse2JUQkJU0n9blV9bY5g TY_pxbIse2JUQkJU0n9blV9bY5g;
typedef struct TIdObj_raN9cHVgzmvaXisezY9aGg9cg TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY_zuqP4Riz26Oi5fWgPYVEgA TY_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct TY_iGkpo9aKQdr3NWelKC4cnJA TY_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct TLoc_EtHNvCB0bgfu9bFjzx9cb6aA TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct RopeObj_HF4qJnb6xiOddgPmsxodtQ RopeObj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct CellSeq_Axo1XVm9aaQueTOldv8le5w CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct GcHeap_1TRH1TZMaVZTnLNcIHuNFQ GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct GcStack_7fytPA5bBsob6See21YMRA GcStack_7fytPA5bBsob6See21YMRA;
typedef struct MemRegion_x81NhDv59b8ercDZ9bi85jyg MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct SmallChunk_tXn60W2f8h3jgAYdEmy5NQ SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct LLChunk_XsENErzHIZV9bhvyJx56wGw LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct BigChunk_Rv9c70Uhp2TytkX7eH78qEg BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct IntSet_EZObFrE3NC9bIb3YMkY9crZA IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct AvlNode_IaqjtwKhxLEpvDS9bct9blEw AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct TY_ujsjpB2O9cjj3uDHsXbnSzg TY_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct GcStat_0RwLoVBHZPfUAcLczmfQAg GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct CellSet_jG87P0AI9aZtss9ccTYBIISQ CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct PageDesc_fublkgIY4LG3mT51LU2WHg PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct TY_DXS6mEo7PVUFJkirsQ9bNQA TY_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct TStrTable_f07aOS3dr28kGa5wcE29aFA TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct TY_sksVpmPRIkNR9axiwtD1Guw TY_sksVpmPRIkNR9axiwtD1Guw;
typedef struct TLib_NBMxlJ6g3utqUlplqTTHkA TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct TY_a09bGTAl9ceOKTAytYdkbyKg TY_a09bGTAl9ceOKTAytYdkbyKg;
typedef struct BaseChunk_Sdq7WpT6qAH858F5ZEdG3w BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct FreeCell_u6M5LHprqzkn9axr04yg9bGQ FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
struct  TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw  {
NI16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU16 TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg_Set;
typedef NU8 TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNode_bROa11lyF5vxEN9aYNbHmhw  {
TType_LTUWCZolpovw9cWE3JBWSUw* typ;
TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg_Set flags;
TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
} S1;
struct {NF floatVal;
} S2;
struct {NimStringDesc* strVal;
} S3;
struct {TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
} S4;
struct {TIdent_4umxGerWTHGPwUms7Yqu3g* ident;
} S5;
struct {TY_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct  TNimType  {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  TIdObj_raN9cHVgzmvaXisezY9aGg9cg  {
  TNimObject Sup;
NI id;
};
typedef NU8 TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw_Set;
typedef NU8 TLocKind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 TLocFlag_o2bqJgR4ceIupnUSpxiudA_Set;
struct  TLoc_EtHNvCB0bgfu9bFjzx9cb6aA  {
TLocKind_O7PRFZKuiBBWbku09cayVBg k;
TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw s;
TLocFlag_o2bqJgR4ceIupnUSpxiudA_Set flags;
TType_LTUWCZolpovw9cWE3JBWSUw* t;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* r;
};
struct  TType_LTUWCZolpovw9cWE3JBWSUw  {
  TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kind;
TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA callConv;
TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw_Set flags;
TY_zuqP4Riz26Oi5fWgPYVEgA* sons;
TNode_bROa11lyF5vxEN9aYNbHmhw* n;
TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
TSym_AXG7xcvKqaxY6koRX1xkCw* destructor;
TSym_AXG7xcvKqaxY6koRX1xkCw* deepCopy;
TSym_AXG7xcvKqaxY6koRX1xkCw* assignment;
TY_iGkpo9aKQdr3NWelKC4cnJA* methods;
NI64 size;
NI16 align;
NI16 lockLevel;
TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
TType_LTUWCZolpovw9cWE3JBWSUw* typeInst;
};
struct  Cell_1zcF9cV8XIAtbN8h5HRUB8g  {
NI refcount;
TNimType* typ;
};
struct  GcStack_7fytPA5bBsob6See21YMRA  {
void* bottom;
};
struct  CellSeq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  IntSet_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef AvlNode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  AvlNode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct TY_ujsjpB2O9cjj3uDHsXbnSzg {
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef TY_ujsjpB2O9cjj3uDHsXbnSzg TY_LzOv2eCDGiceMKQstCLmhw[30];
struct  HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg  {
NI len;
TY_LzOv2eCDGiceMKQstCLmhw chunks;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct  MemRegion_x81NhDv59b8ercDZ9bi85jyg  {
NI minLargeObj;
NI maxLargeObj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct  GcStat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct  CellSet_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
PageDesc_fublkgIY4LG3mT51LU2WHg* head;
PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  GcHeap_1TRH1TZMaVZTnLNcIHuNFQ  {
GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
typedef NU8 TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct  TStrTable_f07aOS3dr28kGa5wcE29aFA  {
NI counter;
TY_sksVpmPRIkNR9axiwtD1Guw* data;
};
typedef NU16 TMagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU64 TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw_Set;
typedef NU32 TOption_WspMeQySXNP2XoTWR5MTgg_Set;
struct  TSym_AXG7xcvKqaxY6koRX1xkCw  {
  TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
TSymKind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {TY_zuqP4Riz26Oi5fWgPYVEgA* typeInstCache;
} S1;
struct {TY_DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
TSym_AXG7xcvKqaxY6koRX1xkCw* gcUnsafetyReason;
} S2;
struct {TY_DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
TStrTable_f07aOS3dr28kGa5wcE29aFA tab;
} S3;
struct {TSym_AXG7xcvKqaxY6koRX1xkCw* guard;
NI bitsize;
} S4;
} kindU;
TMagic_shZhZOdbVC5nnFvcXQAImg magic;
TType_LTUWCZolpovw9cWE3JBWSUw* typ;
TIdent_4umxGerWTHGPwUms7Yqu3g* name;
TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw_Set flags;
TNode_bROa11lyF5vxEN9aYNbHmhw* ast;
TOption_WspMeQySXNP2XoTWR5MTgg_Set options;
NI position;
NI offset;
TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
TLib_NBMxlJ6g3utqUlplqTTHkA* annex;
TNode_bROa11lyF5vxEN9aYNbHmhw* constraint;
};
struct  TIdent_4umxGerWTHGPwUms7Yqu3g  {
  TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct  RopeObj_HF4qJnb6xiOddgPmsxodtQ  {
  TNimObject Sup;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* left;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* right;
NI length;
NimStringDesc* data;
};
struct  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w  {
NI prevSize;
NI size;
};
struct  SmallChunk_tXn60W2f8h3jgAYdEmy5NQ  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct  LLChunk_XsENErzHIZV9bhvyJx56wGw  {
NI size;
NI acc;
LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct  BigChunk_Rv9c70Uhp2TytkX7eH78qEg  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  PageDesc_fublkgIY4LG3mT51LU2WHg  {
PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
typedef NU8 TLibKind_9b8v60kso59bBaw9cp8B9a9apKQ;
struct  TLib_NBMxlJ6g3utqUlplqTTHkA  {
TLibKind_9b8v60kso59bBaw9cp8B9a9apKQ kind;
NIM_BOOL generated;
NIM_BOOL isOverriden;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* name;
TNode_bROa11lyF5vxEN9aYNbHmhw* path;
};
struct  FreeCell_u6M5LHprqzkn9axr04yg9bGQ  {
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct  TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA  {
TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
TY_zuqP4Riz26Oi5fWgPYVEgA* concreteTypes;
NI compilesId;
};
struct TY_pxbIse2JUQkJU0n9blV9bY5g {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct TY_zuqP4Riz26Oi5fWgPYVEgA {
  TGenericSeq Sup;
  TType_LTUWCZolpovw9cWE3JBWSUw* data[SEQ_DECL_SIZE];
};
struct TY_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  TY_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
struct TY_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct TY_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  TSym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, internalError_MXmtqrCmYwtOPkDCFgUWKQ)(TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, NimStringDesc* errMsg);
N_NIMCALL(NI, sonsLen_qPWPHw7WgJeEVYUdcaRIig)(TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(NIM_BOOL, leValue_1Qdwg1ZguEjbL3mmgPJD3w_2)(TNode_bROa11lyF5vxEN9aYNbHmhw* a, TNode_bROa11lyF5vxEN9aYNbHmhw* b);
N_NIMCALL(NIM_BOOL, sameValue_1Qdwg1ZguEjbL3mmgPJD3w)(TNode_bROa11lyF5vxEN9aYNbHmhw* a, TNode_bROa11lyF5vxEN9aYNbHmhw* b);
N_NIMCALL(void, toBitSet_Bgj7mr9bCmLIhOzddHDtD0A)(TNode_bROa11lyF5vxEN9aYNbHmhw* s, TY_pxbIse2JUQkJU0n9blV9bY5g** b);
N_NIMCALL(NI64, firstOrd_HUiBYxvKiECXCv8BzQNheg)(TType_LTUWCZolpovw9cWE3JBWSUw* t);
N_NIMCALL(void, bitSetInit_9bKA1DbmAErHy3uIMkQY9bUQ)(TY_pxbIse2JUQkJU0n9blV9bY5g** b, NI length);
N_NIMCALL(NI64, getSize_spMpEAO8ubfQavMigOxQdA)(TType_LTUWCZolpovw9cWE3JBWSUw* typ);
N_NIMCALL(NI64, getOrdValue_MzTDl1zEXJLD4sql7PhCwA)(TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(void, bitSetIncl_tznoRhsCn6M9csUzVp17S1w)(TY_pxbIse2JUQkJU0n9blV9bY5g** x, NI64 elem);
N_NIMCALL(void, bitSetDiff_zN8mfRIlfkwl4UeelbWZPg)(TY_pxbIse2JUQkJU0n9blV9bY5g** x, TY_pxbIse2JUQkJU0n9blV9bY5g* y);
N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, toTreeSet_T7faK845phyHxY50P3qxIQ)(TY_pxbIse2JUQkJU0n9blV9bY5g* s, TType_LTUWCZolpovw9cWE3JBWSUw* settype, TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info);
N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, newNodeI_PIqgSH9b0m7nFpOyXf9cpz5w)(TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind, TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(NIM_BOOL, bitSetIn_Z5HI0xhB5Wx2mWRfrJc2NQ)(TY_pxbIse2JUQkJU0n9blV9bY5g* x, NI64 e);
N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, newIntTypeNode_v0NY9cuqixP6ToMm9avHw5ig)(TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind, NI64 intVal, TType_LTUWCZolpovw9cWE3JBWSUw* typ);
N_NIMCALL(void, addSon_gCCf68XrWL79bKes6htzFjQ)(TNode_bROa11lyF5vxEN9aYNbHmhw* father, TNode_bROa11lyF5vxEN9aYNbHmhw* son);
N_NIMCALL(NIM_BOOL, bitSetContains_gqMsWrr3fORAvmtdSaP4rA)(TY_pxbIse2JUQkJU0n9blV9bY5g* x, TY_pxbIse2JUQkJU0n9blV9bY5g* y);
N_NIMCALL(NIM_BOOL, bitSetEquals_gqMsWrr3fORAvmtdSaP4rA_2)(TY_pxbIse2JUQkJU0n9blV9bY5g* x, TY_pxbIse2JUQkJU0n9blV9bY5g* y);
N_NIMCALL(void, bitSetIntersect_zN8mfRIlfkwl4UeelbWZPg_2)(TY_pxbIse2JUQkJU0n9blV9bY5g** x, TY_pxbIse2JUQkJU0n9blV9bY5g* y);
N_NIMCALL(void, bitSetUnion_zN8mfRIlfkwl4UeelbWZPg_3)(TY_pxbIse2JUQkJU0n9blV9bY5g** x, TY_pxbIse2JUQkJU0n9blV9bY5g* y);
N_NIMCALL(void, bitSetSymDiff_zN8mfRIlfkwl4UeelbWZPg_4)(TY_pxbIse2JUQkJU0n9blV9bY5g** x, TY_pxbIse2JUQkJU0n9blV9bY5g* y);
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_RCpa9aHGGIKsR9cKRKvszwow_2, "inSet", 5);

N_NIMCALL(NIM_BOOL, inSet_b4nxsJCvqXRlyalSWskgNA)(TNode_bROa11lyF5vxEN9aYNbHmhw* s, TNode_bROa11lyF5vxEN9aYNbHmhw* elem) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!!(((*s).kind == ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 39)))) goto LA3_;
		internalError_MXmtqrCmYwtOPkDCFgUWKQ((*s).info, ((NimStringDesc*) &TM_RCpa9aHGGIKsR9cKRKvszwow_2));
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI i;
		NI colontmp_;
		NI T6_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T6_ = (NI)0;
		T6_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(s);
		colontmp_ = (NI)(T6_ - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA8;
				i = res;
				{
					if (!((*(*s).kindU.S6.sons->data[i]).kind == ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA11_;
					{
						NIM_BOOL T15_;
						T15_ = (NIM_BOOL)0;
						T15_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2((*(*s).kindU.S6.sons->data[i]).kindU.S6.sons->data[((NI) 0)], elem);
						if (!(T15_)) goto LA16_;
						T15_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2(elem, (*(*s).kindU.S6.sons->data[i]).kindU.S6.sons->data[((NI) 1)]);
						LA16_: ;
						if (!T15_) goto LA17_;
						result = NIM_TRUE;
						goto BeforeRet_;
					}
					LA17_: ;
				}
				goto LA9_;
				LA11_: ;
				{
					{
						NIM_BOOL T22_;
						T22_ = (NIM_BOOL)0;
						T22_ = sameValue_1Qdwg1ZguEjbL3mmgPJD3w((*s).kindU.S6.sons->data[i], elem);
						if (!T22_) goto LA23_;
						result = NIM_TRUE;
						goto BeforeRet_;
					}
					LA23_: ;
				}
				LA9_: ;
				res += ((NI) 1);
			} LA8: ;
		}
	}
	result = NIM_FALSE;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(void, toBitSet_Bgj7mr9bCmLIhOzddHDtD0A)(TNode_bROa11lyF5vxEN9aYNbHmhw* s, TY_pxbIse2JUQkJU0n9blV9bY5g** b) {
	NI64 first;
	NI64 j;
	NI64 T1_;
	first = (NI64)0;
	j = (NI64)0;
	first = firstOrd_HUiBYxvKiECXCv8BzQNheg((*(*s).typ).sons->data[((NI) 0)]);
	T1_ = (NI64)0;
	T1_ = getSize_spMpEAO8ubfQavMigOxQdA((*s).typ);
	bitSetInit_9bKA1DbmAErHy3uIMkQY9bUQ(b, ((NI) (T1_)));
	{
		NI i;
		NI colontmp_;
		NI T3_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T3_ = (NI)0;
		T3_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(s);
		colontmp_ = (NI)(T3_ - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA5;
				i = res;
				{
					if (!((*(*s).kindU.S6.sons->data[i]).kind == ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA8_;
					j = getOrdValue_MzTDl1zEXJLD4sql7PhCwA((*(*s).kindU.S6.sons->data[i]).kindU.S6.sons->data[((NI) 0)]);
					{
						while (1) {
							NI64 T12_;
							T12_ = (NI64)0;
							T12_ = getOrdValue_MzTDl1zEXJLD4sql7PhCwA((*(*s).kindU.S6.sons->data[i]).kindU.S6.sons->data[((NI) 1)]);
							if (!(j <= T12_)) goto LA11;
							bitSetIncl_tznoRhsCn6M9csUzVp17S1w(b, (NI64)(j - first));
							j += ((NI) 1);
						} LA11: ;
					}
				}
				goto LA6_;
				LA8_: ;
				{
					NI64 T14_;
					T14_ = (NI64)0;
					T14_ = getOrdValue_MzTDl1zEXJLD4sql7PhCwA((*s).kindU.S6.sons->data[i]);
					bitSetIncl_tznoRhsCn6M9csUzVp17S1w(b, (NI64)(T14_ - first));
				}
				LA6_: ;
				res += ((NI) 1);
			} LA5: ;
		}
	}
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		if (!!((src == NIM_NIL))) goto LA3_;
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	(*dest) = src;
}

N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, toTreeSet_T7faK845phyHxY50P3qxIQ)(TY_pxbIse2JUQkJU0n9blV9bY5g* s, TType_LTUWCZolpovw9cWE3JBWSUw* settype, TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info) {
	TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	NI64 a;
	NI64 b;
	NI64 e;
	NI64 first;
	TType_LTUWCZolpovw9cWE3JBWSUw* elemType;
	TNode_bROa11lyF5vxEN9aYNbHmhw* n;
	result = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	a = (NI64)0;
	b = (NI64)0;
	e = (NI64)0;
	first = (NI64)0;
	elemType = (TType_LTUWCZolpovw9cWE3JBWSUw*)0;
	n = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	elemType = (*settype).sons->data[((NI) 0)];
	first = firstOrd_HUiBYxvKiECXCv8BzQNheg(elemType);
	result = newNodeI_PIqgSH9b0m7nFpOyXf9cpz5w(((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 39), info);
	asgnRefNoCycle((void**) (&(*result).typ), settype);
	(*result).info = info;
	e = IL64(0);
	{
		while (1) {
			if (!(e < ((NI64) ((NI)((s ? s->Sup.len : 0) * ((NI) 8)))))) goto LA2;
			{
				NIM_BOOL T5_;
				TNode_bROa11lyF5vxEN9aYNbHmhw* aa;
				T5_ = (NIM_BOOL)0;
				T5_ = bitSetIn_Z5HI0xhB5Wx2mWRfrJc2NQ(s, e);
				if (!T5_) goto LA6_;
				a = e;
				b = e;
				{
					while (1) {
						b += ((NI) 1);
						{
							NIM_BOOL T12_;
							NIM_BOOL T14_;
							T12_ = (NIM_BOOL)0;
							T12_ = (((NI64) ((NI)((s ? s->Sup.len : 0) * ((NI) 8)))) <= b);
							if (T12_) goto LA13_;
							T14_ = (NIM_BOOL)0;
							T14_ = bitSetIn_Z5HI0xhB5Wx2mWRfrJc2NQ(s, b);
							T12_ = !(T14_);
							LA13_: ;
							if (!T12_) goto LA15_;
							goto LA8;
						}
						LA15_: ;
					}
				} LA8: ;
				b -= ((NI) 1);
				aa = newIntTypeNode_v0NY9cuqixP6ToMm9avHw5ig(((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 6), (NI64)(a + first), elemType);
				(*aa).info = info;
				{
					if (!(a == b)) goto LA19_;
					addSon_gCCf68XrWL79bKes6htzFjQ(result, aa);
				}
				goto LA17_;
				LA19_: ;
				{
					TNode_bROa11lyF5vxEN9aYNbHmhw* bb;
					n = newNodeI_PIqgSH9b0m7nFpOyXf9cpz5w(((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 44), info);
					asgnRefNoCycle((void**) (&(*n).typ), elemType);
					addSon_gCCf68XrWL79bKes6htzFjQ(n, aa);
					bb = newIntTypeNode_v0NY9cuqixP6ToMm9avHw5ig(((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 6), (NI64)(b + first), elemType);
					(*bb).info = info;
					addSon_gCCf68XrWL79bKes6htzFjQ(n, bb);
					addSon_gCCf68XrWL79bKes6htzFjQ(result, n);
				}
				LA17_: ;
				e = b;
			}
			LA6_: ;
			e += ((NI) 1);
		} LA2: ;
	}
	return result;
}

N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, diffSets_E71eQfYz9b4v2qiZfNF2cdw)(TNode_bROa11lyF5vxEN9aYNbHmhw* a, TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	TY_pxbIse2JUQkJU0n9blV9bY5g* x;
	TY_pxbIse2JUQkJU0n9blV9bY5g* y;
	result = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	x = (TY_pxbIse2JUQkJU0n9blV9bY5g*)0;
	y = (TY_pxbIse2JUQkJU0n9blV9bY5g*)0;
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(a, (&x));
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(b, (&y));
	bitSetDiff_zN8mfRIlfkwl4UeelbWZPg((&x), y);
	result = toTreeSet_T7faK845phyHxY50P3qxIQ(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(NI64, cardSet_q9cOPX0ih7rvjzlPoLISJTQ)(TNode_bROa11lyF5vxEN9aYNbHmhw* s) {
	NI64 result;
	result = (NI64)0;
	result = IL64(0);
	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T2_ = (NI)0;
		T2_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(s);
		colontmp_ = (NI)(T2_ - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = res;
				{
					NI64 T9_;
					NI64 T10_;
					if (!((*(*s).kindU.S6.sons->data[i]).kind == ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA7_;
					T9_ = (NI64)0;
					T9_ = getOrdValue_MzTDl1zEXJLD4sql7PhCwA((*(*s).kindU.S6.sons->data[i]).kindU.S6.sons->data[((NI) 1)]);
					T10_ = (NI64)0;
					T10_ = getOrdValue_MzTDl1zEXJLD4sql7PhCwA((*(*s).kindU.S6.sons->data[i]).kindU.S6.sons->data[((NI) 0)]);
					result = (NI64)((NI64)((NI64)(result + T9_) - T10_) + IL64(1));
				}
				goto LA5_;
				LA7_: ;
				{
					result += ((NI) 1);
				}
				LA5_: ;
				res += ((NI) 1);
			} LA4: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, containsSets_tlIBRycg3YyKwtO2aPbGGg)(TNode_bROa11lyF5vxEN9aYNbHmhw* a, TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	NIM_BOOL result;
	TY_pxbIse2JUQkJU0n9blV9bY5g* x;
	TY_pxbIse2JUQkJU0n9blV9bY5g* y;
	result = (NIM_BOOL)0;
	x = (TY_pxbIse2JUQkJU0n9blV9bY5g*)0;
	y = (TY_pxbIse2JUQkJU0n9blV9bY5g*)0;
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(a, (&x));
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(b, (&y));
	result = bitSetContains_gqMsWrr3fORAvmtdSaP4rA(x, y);
	return result;
}

N_NIMCALL(NIM_BOOL, equalSets_tlIBRycg3YyKwtO2aPbGGg_2)(TNode_bROa11lyF5vxEN9aYNbHmhw* a, TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	NIM_BOOL result;
	TY_pxbIse2JUQkJU0n9blV9bY5g* x;
	TY_pxbIse2JUQkJU0n9blV9bY5g* y;
	result = (NIM_BOOL)0;
	x = (TY_pxbIse2JUQkJU0n9blV9bY5g*)0;
	y = (TY_pxbIse2JUQkJU0n9blV9bY5g*)0;
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(a, (&x));
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(b, (&y));
	result = bitSetEquals_gqMsWrr3fORAvmtdSaP4rA_2(x, y);
	return result;
}

N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, intersectSets_E71eQfYz9b4v2qiZfNF2cdw_2)(TNode_bROa11lyF5vxEN9aYNbHmhw* a, TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	TY_pxbIse2JUQkJU0n9blV9bY5g* x;
	TY_pxbIse2JUQkJU0n9blV9bY5g* y;
	result = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	x = (TY_pxbIse2JUQkJU0n9blV9bY5g*)0;
	y = (TY_pxbIse2JUQkJU0n9blV9bY5g*)0;
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(a, (&x));
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(b, (&y));
	bitSetIntersect_zN8mfRIlfkwl4UeelbWZPg_2((&x), y);
	result = toTreeSet_T7faK845phyHxY50P3qxIQ(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, unionSets_E71eQfYz9b4v2qiZfNF2cdw_3)(TNode_bROa11lyF5vxEN9aYNbHmhw* a, TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	TY_pxbIse2JUQkJU0n9blV9bY5g* x;
	TY_pxbIse2JUQkJU0n9blV9bY5g* y;
	result = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	x = (TY_pxbIse2JUQkJU0n9blV9bY5g*)0;
	y = (TY_pxbIse2JUQkJU0n9blV9bY5g*)0;
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(a, (&x));
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(b, (&y));
	bitSetUnion_zN8mfRIlfkwl4UeelbWZPg_3((&x), y);
	result = toTreeSet_T7faK845phyHxY50P3qxIQ(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, symdiffSets_E71eQfYz9b4v2qiZfNF2cdw_4)(TNode_bROa11lyF5vxEN9aYNbHmhw* a, TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	TY_pxbIse2JUQkJU0n9blV9bY5g* x;
	TY_pxbIse2JUQkJU0n9blV9bY5g* y;
	result = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	x = (TY_pxbIse2JUQkJU0n9blV9bY5g*)0;
	y = (TY_pxbIse2JUQkJU0n9blV9bY5g*)0;
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(a, (&x));
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(b, (&y));
	bitSetSymDiff_zN8mfRIlfkwl4UeelbWZPg_4((&x), y);
	result = toTreeSet_T7faK845phyHxY50P3qxIQ(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(NIM_BOOL, overlap_GLYFox9ciWitxKuirhftGHg)(TNode_bROa11lyF5vxEN9aYNbHmhw* a, TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		if (!((*a).kind == ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA3_;
		{
			NIM_BOOL T9_;
			if (!((*b).kind == ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA7_;
			T9_ = (NIM_BOOL)0;
			T9_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2((*a).kindU.S6.sons->data[((NI) 0)], (*b).kindU.S6.sons->data[((NI) 1)]);
			if (!(T9_)) goto LA10_;
			T9_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2((*b).kindU.S6.sons->data[((NI) 0)], (*a).kindU.S6.sons->data[((NI) 1)]);
			LA10_: ;
			result = T9_;
		}
		goto LA5_;
		LA7_: ;
		{
			NIM_BOOL T12_;
			T12_ = (NIM_BOOL)0;
			T12_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2((*a).kindU.S6.sons->data[((NI) 0)], b);
			if (!(T12_)) goto LA13_;
			T12_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2(b, (*a).kindU.S6.sons->data[((NI) 1)]);
			LA13_: ;
			result = T12_;
		}
		LA5_: ;
	}
	goto LA1_;
	LA3_: ;
	{
		{
			NIM_BOOL T19_;
			if (!((*b).kind == ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA17_;
			T19_ = (NIM_BOOL)0;
			T19_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2((*b).kindU.S6.sons->data[((NI) 0)], a);
			if (!(T19_)) goto LA20_;
			T19_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2(a, (*b).kindU.S6.sons->data[((NI) 1)]);
			LA20_: ;
			result = T19_;
		}
		goto LA15_;
		LA17_: ;
		{
			result = sameValue_1Qdwg1ZguEjbL3mmgPJD3w(a, b);
		}
		LA15_: ;
	}
	LA1_: ;
	return result;
}

N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, complement_Yi8Z7ip2BRBum7p5Po1zUQ)(TNode_bROa11lyF5vxEN9aYNbHmhw* a) {
	TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	TY_pxbIse2JUQkJU0n9blV9bY5g* x;
	result = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	x = (TY_pxbIse2JUQkJU0n9blV9bY5g*)0;
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(a, (&x));
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (x ? (x->Sup.len-1) : -1);
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				x->data[i] = (NI8)((NU8) ~(x->data[i]));
				res += ((NI) 1);
			} LA3: ;
		}
	}
	result = toTreeSet_T7faK845phyHxY50P3qxIQ(x, (*a).typ, (*a).info);
	return result;
}

N_NIMCALL(NIM_BOOL, emptyRange_GLYFox9ciWitxKuirhftGHg_2)(TNode_bROa11lyF5vxEN9aYNbHmhw* a, TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2(a, b);
	result = !(T1_);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsDatInit000)(void) {
}
