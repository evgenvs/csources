/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
#include <stdio.h>
#undef linux
#undef near
typedef struct TY_iFqvBZrSfDuoihxoZtJWlA TY_iFqvBZrSfDuoihxoZtJWlA;
typedef struct TSourceFile_63g9cI9afCqv07CyRY708P8Q TSourceFile_63g9cI9afCqv07CyRY708P8Q;
typedef struct TY_sM4lkSb7zS6F7OVMvW9cffQ TY_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct TSym_AXG7xcvKqaxY6koRX1xkCw TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct TIdent_4umxGerWTHGPwUms7Yqu3g TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct TY_7q7q3E6Oj24ZNVJb9aonhAg TY_7q7q3E6Oj24ZNVJb9aonhAg;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TSafePoint TSafePoint;
typedef struct BaseLexer_B6cGbTPhMsqMovc9cOcIHRw BaseLexer_B6cGbTPhMsqMovc9cOcIHRw;
typedef struct StreamObj_RShkcoDOPnoCVhtpN1hDPQ StreamObj_RShkcoDOPnoCVhtpN1hDPQ;
typedef struct FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw;
typedef struct Slice_qL3WGViqT0p5sVr4YFHsLg Slice_qL3WGViqT0p5sVr4YFHsLg;
typedef struct TIdObj_raN9cHVgzmvaXisezY9aGg9cg TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct TY_zuqP4Riz26Oi5fWgPYVEgA TY_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct TY_DXS6mEo7PVUFJkirsQ9bNQA TY_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct TStrTable_f07aOS3dr28kGa5wcE29aFA TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct TY_sksVpmPRIkNR9axiwtD1Guw TY_sksVpmPRIkNR9axiwtD1Guw;
typedef struct TType_LTUWCZolpovw9cWE3JBWSUw TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct TNode_bROa11lyF5vxEN9aYNbHmhw TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct TLoc_EtHNvCB0bgfu9bFjzx9cb6aA TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct RopeObj_HF4qJnb6xiOddgPmsxodtQ RopeObj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct TLib_NBMxlJ6g3utqUlplqTTHkA TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct BaseChunk_Sdq7WpT6qAH858F5ZEdG3w BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct FreeCell_u6M5LHprqzkn9axr04yg9bGQ FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct TY_iGkpo9aKQdr3NWelKC4cnJA TY_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ TY_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct TY_a09bGTAl9ceOKTAytYdkbyKg TY_a09bGTAl9ceOKTAytYdkbyKg;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TSourceFile_63g9cI9afCqv07CyRY708P8Q  {
TY_sM4lkSb7zS6F7OVMvW9cffQ* lines;
NIM_BOOL dirty;
NIM_BOOL isNimfixFile;
NimStringDesc* fullpath;
NimStringDesc* newline;
NI32 fileIdx;
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
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, TY_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
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
struct  TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw  {
NI16 line;
NI16 col;
NI32 fileIndex;
};
struct TY_7q7q3E6Oj24ZNVJb9aonhAg {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef NU8 FileMode_fVUBHvW79bXUw1j55Oo9avSQ;
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} TY_KeeAOYBd84Ofsw6Y7LizaQ;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY_KeeAOYBd84Ofsw6Y7LizaQ raiseAction;
};
typedef NU8 TY_nmiMWKVIe46vacnhAFrQvw_Set[32];
struct  BaseLexer_B6cGbTPhMsqMovc9cOcIHRw  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI bufLen;
StreamObj_RShkcoDOPnoCVhtpN1hDPQ* input;
NI lineNumber;
NI sentinel;
NI lineStart;
TY_nmiMWKVIe46vacnhAFrQvw_Set refillChars;
};
struct  Slice_qL3WGViqT0p5sVr4YFHsLg  {
NI a;
NI b;
};
struct  TIdObj_raN9cHVgzmvaXisezY9aGg9cg  {
  TNimObject Sup;
NI id;
};
struct  TIdent_4umxGerWTHGPwUms7Yqu3g  {
  TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
typedef NU8 TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct  TStrTable_f07aOS3dr28kGa5wcE29aFA  {
NI counter;
TY_sksVpmPRIkNR9axiwtD1Guw* data;
};
typedef NU16 TMagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU64 TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw_Set;
typedef NU32 TOption_WspMeQySXNP2XoTWR5MTgg_Set;
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
typedef N_NIMCALL_PTR(void, TY_cnkJEp9bna8U6yi9aVW9cAJ0Q) (StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY_KjFcmLOhf4VQvVcyLJWXZw) (StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(void, TY_jlOYFw9cHausuCbPoWx2iiA) (StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY_Xzm85qBLb9cf9cu8VOfAr8PQ) (StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(NI, TY_tjaJtoUzLe1BMUbItlcGhQ) (StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
typedef N_NIMCALL_PTR(void, TY_b9bsIuILxTLVZHPvJBW187A) (StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
struct  StreamObj_RShkcoDOPnoCVhtpN1hDPQ  {
  TNimObject Sup;
TY_cnkJEp9bna8U6yi9aVW9cAJ0Q closeImpl;
TY_KjFcmLOhf4VQvVcyLJWXZw atEndImpl;
TY_jlOYFw9cHausuCbPoWx2iiA setPositionImpl;
TY_Xzm85qBLb9cf9cu8VOfAr8PQ getPositionImpl;
TY_tjaJtoUzLe1BMUbItlcGhQ readDataImpl;
TY_tjaJtoUzLe1BMUbItlcGhQ peekDataImpl;
TY_b9bsIuILxTLVZHPvJBW187A writeDataImpl;
TY_cnkJEp9bna8U6yi9aVW9cAJ0Q flushImpl;
};
struct  FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw  {
  StreamObj_RShkcoDOPnoCVhtpN1hDPQ Sup;
FILE* f;
};
typedef NU8 TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw_Set;
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
typedef NU16 TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg_Set;
typedef NU8 TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
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
struct  RopeObj_HF4qJnb6xiOddgPmsxodtQ  {
  TNimObject Sup;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* left;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* right;
NI length;
NimStringDesc* data;
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
struct TY_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct TY_iFqvBZrSfDuoihxoZtJWlA {
  TGenericSeq Sup;
  TSourceFile_63g9cI9afCqv07CyRY708P8Q data[SEQ_DECL_SIZE];
};
struct TY_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY_zuqP4Riz26Oi5fWgPYVEgA {
  TGenericSeq Sup;
  TType_LTUWCZolpovw9cWE3JBWSUw* data[SEQ_DECL_SIZE];
};
struct TY_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct TY_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  TSym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
struct TY_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  TY_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_TY_iFqvBZrSfDuoihxoZtJWlA)(void* p, NI op);
static N_NIMCALL(void, TM_SxkXd1Mt9bTXZFc8oUyTEhQ_3)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, replaceDeprecated_MCFlYIPYCGdqUBK0MS9a8dQ)(TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, TIdent_4umxGerWTHGPwUms7Yqu3g* oldSym, TIdent_4umxGerWTHGPwUms7Yqu3g* newSym);
N_NIMCALL(void, loadFile_e0l2N9bShT7NbC9c3sH4FHTg)(TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemSize, NI newLen);
N_NIMCALL(NimStringDesc*, toFullPath_7s19cb7WBgztz9aqEBzwwuqA)(NI32 fileIdx);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY_7q7q3E6Oj24ZNVJb9aonhAg* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size);
N_NIMCALL(FILE*, open_hqzpWQbdA2B8l9a6wwNoP4g)(NimStringDesc* filename, FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode, NI bufSize);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readLine_sO1bQXVRA6RP9cdYJXNKeSw)(FILE* f, NimStringDesc** line);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, close_BWnr8V7RERYno9bIdPmw8Hw_3)(FILE* f);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, open_xmgaYJZNnO6QcDtac9bs3Vg)(BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, StreamObj_RShkcoDOPnoCVhtpN1hDPQ* input, NI bufLen, TY_nmiMWKVIe46vacnhAFrQvw_Set refillChars);
N_NIMCALL(FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*, newFileStream_EYjHaJgKBbBv69c9c5DDOTIg)(NimStringDesc* filename, FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode);
N_NIMCALL(void, close_QbedUCk2XwI9c7bbRzXBY0g_2)(BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L);
N_NIMCALL(NI, identLen_9a9cOeuTrOeBTm0kBRJb0Hjw)(NimStringDesc* line, NI start);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NimStringDesc*, X5BX5D__Sq9b57KCLKZryBwyHy49aBswcommands)(NimStringDesc* s, Slice_qL3WGViqT0p5sVr4YFHsLg x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(Slice_qL3WGViqT0p5sVr4YFHsLg, dotdot__18yoMoUbfoITYgEZSwZDYAcommands)(NI a, NI b);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
TY_iFqvBZrSfDuoihxoZtJWlA* gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g;
TNimType NTI_63g9cI9afCqv07CyRY708P8Q_;
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI_sVg18TP9cLifHyygRe9cro9aA_;
TNimType NTI_iFqvBZrSfDuoihxoZtJWlA_;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TNimType NTI_B6cGbTPhMsqMovc9cOcIHRw_;
STRING_LITERAL(TM_SxkXd1Mt9bTXZFc8oUyTEhQ_4, ".nimfix", 7);
static NIM_CONST TY_nmiMWKVIe46vacnhAFrQvw_Set TM_SxkXd1Mt9bTXZFc8oUyTEhQ_6 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_SxkXd1Mt9bTXZFc8oUyTEhQ_7, "\015\012", 2);
STRING_LITERAL(TM_SxkXd1Mt9bTXZFc8oUyTEhQ_8, "\012", 1);
static N_NIMCALL(void, Marker_TY_iFqvBZrSfDuoihxoZtJWlA)(void* p, NI op) {
	TY_iFqvBZrSfDuoihxoZtJWlA* a;
	NI T1_;
	a = (TY_iFqvBZrSfDuoihxoZtJWlA*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < a->Sup.len; T1_++) {
	nimGCvisit((void*)a->data[T1_].lines, op);
	nimGCvisit((void*)a->data[T1_].fullpath, op);
	nimGCvisit((void*)a->data[T1_].newline, op);
	}
}
static N_NIMCALL(void, TM_SxkXd1Mt9bTXZFc8oUyTEhQ_3)(void) {
	nimGCvisit((void*)gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g, 0);
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = memcmp(a, b, ((size_t) (size)));
	result = (T1_ == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL T11_;
{	result = (NIM_BOOL)0;
	{
		if (!(a == b)) goto LA3_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == NIM_NIL);
		if (T7_) goto LA8_;
		T7_ = (b == NIM_NIL);
		LA8_: ;
		if (!T7_) goto LA9_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA9_: ;
	T11_ = (NIM_BOOL)0;
	T11_ = ((*a).Sup.len == (*b).Sup.len);
	if (!(T11_)) goto LA12_;
	T11_ = equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes(((void*) ((*a).data)), ((void*) ((*b).data)), ((NI) ((*a).Sup.len)));
	LA12_: ;
	result = T11_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = s;
}

static N_INLINE(void, popSafePoint)(void) {
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

N_NIMCALL(void, loadFile_e0l2N9bShT7NbC9c3sH4FHTg)(TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info) {
	NI32 i;
	i = info.fileIndex;
	{
		if (!((gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g ? gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->Sup.len : 0) <= ((NI) (i)))) goto LA3_;
		gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g = (TY_iFqvBZrSfDuoihxoZtJWlA*) setLengthSeq(&(gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g)->Sup, sizeof(TSourceFile_63g9cI9afCqv07CyRY708P8Q), ((NI) ((NI32)(i + ((NI32) 1)))));
	}
	LA3_: ;
	{
		NimStringDesc* path;
		NimStringDesc* T9_;
		TY_7q7q3E6Oj24ZNVJb9aonhAg T10_;
		BaseLexer_B6cGbTPhMsqMovc9cOcIHRw lex;
		FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw* T19_;
		StreamObj_RShkcoDOPnoCVhtpN1hDPQ* T20_;
		NI pos;
		if (!(gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].lines == 0)) goto LA7_;
		gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].fileIdx = info.fileIndex;
		if (gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].lines) nimGCunrefNoCycle(gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].lines);
		gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].lines = (TY_sM4lkSb7zS6F7OVMvW9cffQ*) newSeqRC1((&NTI_sM4lkSb7zS6F7OVMvW9cffQ_), 0);
		path = toFullPath_7s19cb7WBgztz9aqEBzwwuqA(info.fileIndex);
		T9_ = (NimStringDesc*)0;
		T9_ = gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].fullpath; gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].fullpath = copyStringRC1(path);
		if (T9_) nimGCunrefNoCycle(T9_);
		memset((void*)(&T10_), 0, sizeof(T10_));
		nossplitFile(path, (&T10_));
		gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].isNimfixFile = eqStrings(T10_.Field2, ((NimStringDesc*) &TM_SxkXd1Mt9bTXZFc8oUyTEhQ_4));
		{
			NimStringDesc* line;
			FILE* f;
			TSafePoint TM_SxkXd1Mt9bTXZFc8oUyTEhQ_5;
			line = (NimStringDesc*)0;
			f = open_hqzpWQbdA2B8l9a6wwNoP4g(path, ((FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 0), ((NI) 8000));
			pushSafePoint(&TM_SxkXd1Mt9bTXZFc8oUyTEhQ_5);
			TM_SxkXd1Mt9bTXZFc8oUyTEhQ_5.status = _setjmp(TM_SxkXd1Mt9bTXZFc8oUyTEhQ_5.context);
			if (TM_SxkXd1Mt9bTXZFc8oUyTEhQ_5.status == 0) {
				NimStringDesc* res;
				res = rawNewString(((NI) 80));
				{
					while (1) {
						NIM_BOOL T15_;
						NimStringDesc* T16_;
						T15_ = (NIM_BOOL)0;
						T15_ = readLine_sO1bQXVRA6RP9cdYJXNKeSw(f, (&res));
						if (!T15_) goto LA14;
						line = res;
						gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].lines = (TY_sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV2(&(gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].lines)->Sup, sizeof(NimStringDesc*));
						T16_ = (NimStringDesc*)0;
						T16_ = gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].lines->data[gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].lines->Sup.len]; gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].lines->data[gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].lines->Sup.len] = copyStringRC1(line);
						if (T16_) nimGCunrefNoCycle(T16_);
						++gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].lines->Sup.len;
					} LA14: ;
				}
				popSafePoint();
			}
			else {
				popSafePoint();
			}
			{
				close_BWnr8V7RERYno9bIdPmw8Hw_3(f);
			}
			if (TM_SxkXd1Mt9bTXZFc8oUyTEhQ_5.status != 0) reraiseException();
		}
		memset((void*)(&lex), 0, sizeof(lex));
		lex.Sup.m_type = (&NTI_B6cGbTPhMsqMovc9cOcIHRw_);
		T19_ = (FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*)0;
		T19_ = newFileStream_EYjHaJgKBbBv69c9c5DDOTIg(path, ((FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 0));
		T20_ = (StreamObj_RShkcoDOPnoCVhtpN1hDPQ*)0;
		T20_ = &T19_->Sup;
		open_xmgaYJZNnO6QcDtac9bs3Vg((&lex), T20_, ((NI) 8192), TM_SxkXd1Mt9bTXZFc8oUyTEhQ_6);
		pos = lex.bufpos;
		{
			while (1) {
				switch (((NU8)(lex.buf[pos]))) {
				case 13:
				{
					NimStringDesc* T24_;
					T24_ = (NimStringDesc*)0;
					T24_ = gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].newline; gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].newline = copyStringRC1(((NimStringDesc*) &TM_SxkXd1Mt9bTXZFc8oUyTEhQ_7));
					if (T24_) nimGCunrefNoCycle(T24_);
					goto LA21;
				}
				break;
				case 10:
				case 0:
				{
					NimStringDesc* T26_;
					T26_ = (NimStringDesc*)0;
					T26_ = gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].newline; gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[i].newline = copyStringRC1(((NimStringDesc*) &TM_SxkXd1Mt9bTXZFc8oUyTEhQ_8));
					if (T26_) nimGCunrefNoCycle(T26_);
					goto LA21;
				}
				break;
				default:
				{
				}
				break;
				}
				pos += ((NI) 1);
			}
		} LA21: ;
		close_QbedUCk2XwI9c7bbRzXBY0g_2((&lex));
	}
	LA7_: ;
}

N_NIMCALL(NI, identLen_9a9cOeuTrOeBTm0kBRJb0Hjw)(NimStringDesc* line, NI start) {
	NI result;
	result = (NI)0;
	{
		while (1) {
			NIM_BOOL T3_;
			T3_ = (NIM_BOOL)0;
			T3_ = ((NI)(start + result) < (line ? line->Sup.len : 0));
			if (!(T3_)) goto LA4_;
			T3_ = (((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(start + result)])) == ((NU8)(95)));
			LA4_: ;
			if (!T3_) goto LA2;
			result += ((NI) 1);
		} LA2: ;
	}
	return result;
}

static N_INLINE(NimStringDesc*, X5BX5D__Sq9b57KCLKZryBwyHy49aBswcommands)(NimStringDesc* s, Slice_qL3WGViqT0p5sVr4YFHsLg x) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = copyStrLast(s, x.a, x.b);
	return result;
}

static N_INLINE(Slice_qL3WGViqT0p5sVr4YFHsLg, dotdot__18yoMoUbfoITYgEZSwZDYAcommands)(NI a, NI b) {
	Slice_qL3WGViqT0p5sVr4YFHsLg result;
	memset((void*)(&result), 0, sizeof(result));
	result.a = a;
	result.b = b;
	return result;
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(void, replaceDeprecated_MCFlYIPYCGdqUBK0MS9a8dQ)(TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, TIdent_4umxGerWTHGPwUms7Yqu3g* oldSym, TIdent_4umxGerWTHGPwUms7Yqu3g* newSym) {
	NimStringDesc* line;
	NI first;
	NI last;
	NI T17_;
{	loadFile_e0l2N9bShT7NbC9c3sH4FHTg(info);
	line = gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[info.fileIndex].lines->data[(NI16)(info.line - ((NI16) 1))];
	first = ((((NI) (info.col)) <= (line ? line->Sup.len : 0)) ? ((NI) (info.col)) : (line ? line->Sup.len : 0));
	{
		if (!(first < ((NI) 0))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		while (1) {
			NIM_BOOL T7_;
			T7_ = (NIM_BOOL)0;
			T7_ = (((NI) 0) < first);
			if (!(T7_)) goto LA8_;
			T7_ = (((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) == ((NU8)(95)));
			LA8_: ;
			if (!T7_) goto LA6;
			first -= ((NI) 1);
		} LA6: ;
	}
	{
		if (!(first < ((NI) 0))) goto LA11_;
		goto BeforeRet_;
	}
	LA11_: ;
	{
		if (!((NU8)(line->data[first]) == (NU8)(96))) goto LA15_;
		first += ((NI) 1);
	}
	LA15_: ;
	T17_ = (NI)0;
	T17_ = identLen_9a9cOeuTrOeBTm0kBRJb0Hjw(line, first);
	last = (NI)((NI)(first + T17_) - ((NI) 1));
	{
		Slice_qL3WGViqT0p5sVr4YFHsLg T20_;
		NimStringDesc* T21_;
		NI T22_;
		NimStringDesc* x;
		NimStringDesc* T25_;
		NimStringDesc* T26_;
		NimStringDesc* T27_;
		T20_ = dotdot__18yoMoUbfoITYgEZSwZDYAcommands(first, last);
		T21_ = (NimStringDesc*)0;
		T21_ = X5BX5D__Sq9b57KCLKZryBwyHy49aBswcommands(line, T20_);
		T22_ = (NI)0;
		T22_ = nsuCmpIgnoreStyle(T21_, (*oldSym).s);
		if (!(T22_ == ((NI) 0))) goto LA23_;
		T25_ = (NimStringDesc*)0;
		T26_ = (NimStringDesc*)0;
		T26_ = copyStrLast(line, ((NI) 0), (NI)(first - ((NI) 1)));
		T27_ = (NimStringDesc*)0;
		T27_ = copyStr(line, (NI)(last + ((NI) 1)));
		T25_ = rawNewString(T26_->Sup.len + (*newSym).s->Sup.len + T27_->Sup.len + 0);
appendString(T25_, T26_);
appendString(T25_, (*newSym).s);
appendString(T25_, T27_);
		x = T25_;
		asgnRefNoCycle((void**) (&gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[info.fileIndex].lines->data[(NI16)(info.line - ((NI16) 1))]), x);
		gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g->data[info.fileIndex].dirty = NIM_TRUE;
	}
	LA23_: ;
	}BeforeRet_: ;
}

N_NIMCALL(void, replaceDeprecated_AQoApfK6kmloBd8BEkBTbA)(TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, TSym_AXG7xcvKqaxY6koRX1xkCw* oldSym, TSym_AXG7xcvKqaxY6koRX1xkCw* newSym) {
	replaceDeprecated_MCFlYIPYCGdqUBK0MS9a8dQ(info, (*oldSym).name, (*newSym).name);
}
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseInit000)(void) {
nimRegisterGlobalMarker(TM_SxkXd1Mt9bTXZFc8oUyTEhQ_3);
	if (gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g) nimGCunrefNoCycle(gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g);
	gSourceFiles_NUcH74JNa8XRf9bXzt2nr2g = (TY_iFqvBZrSfDuoihxoZtJWlA*) newSeqRC1((&NTI_iFqvBZrSfDuoihxoZtJWlA_), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseDatInit000)(void) {
static TNimNode* TM_SxkXd1Mt9bTXZFc8oUyTEhQ_2[6];
static TNimNode TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[7];
NTI_63g9cI9afCqv07CyRY708P8Q_.size = sizeof(TSourceFile_63g9cI9afCqv07CyRY708P8Q);
NTI_63g9cI9afCqv07CyRY708P8Q_.kind = 18;
NTI_63g9cI9afCqv07CyRY708P8Q_.base = 0;
NTI_63g9cI9afCqv07CyRY708P8Q_.flags = 2;
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_2[0] = &TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[1];
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[1].kind = 1;
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[1].offset = offsetof(TSourceFile_63g9cI9afCqv07CyRY708P8Q, lines);
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[1].typ = (&NTI_sM4lkSb7zS6F7OVMvW9cffQ_);
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[1].name = "lines";
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_2[1] = &TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[2];
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[2].kind = 1;
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[2].offset = offsetof(TSourceFile_63g9cI9afCqv07CyRY708P8Q, dirty);
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[2].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[2].name = "dirty";
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_2[2] = &TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[3];
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[3].kind = 1;
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[3].offset = offsetof(TSourceFile_63g9cI9afCqv07CyRY708P8Q, isNimfixFile);
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[3].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[3].name = "isNimfixFile";
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_2[3] = &TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[4];
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[4].kind = 1;
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[4].offset = offsetof(TSourceFile_63g9cI9afCqv07CyRY708P8Q, fullpath);
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[4].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[4].name = "fullpath";
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_2[4] = &TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[5];
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[5].kind = 1;
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[5].offset = offsetof(TSourceFile_63g9cI9afCqv07CyRY708P8Q, newline);
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[5].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[5].name = "newline";
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_2[5] = &TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[6];
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[6].kind = 1;
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[6].offset = offsetof(TSourceFile_63g9cI9afCqv07CyRY708P8Q, fileIdx);
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[6].typ = (&NTI_sVg18TP9cLifHyygRe9cro9aA_);
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[6].name = "fileIdx";
TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[0].len = 6; TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[0].kind = 2; TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[0].sons = &TM_SxkXd1Mt9bTXZFc8oUyTEhQ_2[0];
NTI_63g9cI9afCqv07CyRY708P8Q_.node = &TM_SxkXd1Mt9bTXZFc8oUyTEhQ_0[0];
NTI_iFqvBZrSfDuoihxoZtJWlA_.size = sizeof(TY_iFqvBZrSfDuoihxoZtJWlA*);
NTI_iFqvBZrSfDuoihxoZtJWlA_.kind = 24;
NTI_iFqvBZrSfDuoihxoZtJWlA_.base = (&NTI_63g9cI9afCqv07CyRY708P8Q_);
NTI_iFqvBZrSfDuoihxoZtJWlA_.flags = 2;
NTI_iFqvBZrSfDuoihxoZtJWlA_.marker = Marker_TY_iFqvBZrSfDuoihxoZtJWlA;
}

