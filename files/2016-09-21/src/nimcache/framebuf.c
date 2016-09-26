/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, i386, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/john/code/Nim/lib -o /media/sf_D_DRIVE/Work/Code/nim-raytracer/src/src/nimcache/framebuf.o /media/sf_D_DRIVE/Work/Code/nim-raytracer/src/src/nimcache/framebuf.c */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
#include <stdio.h>
typedef struct TY153031 TY153031;
typedef struct TGenericSeq TGenericSeq;
typedef struct Framebufobj153002 Framebufobj153002;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29485 Memregion29485;
typedef struct Smallchunk29439 Smallchunk29439;
typedef struct Llchunk29479 Llchunk29479;
typedef struct Bigchunk29441 Bigchunk29441;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29483 Avlnode29483;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY154490 TY154490;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TSafePoint TSafePoint;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  Framebufobj153002  {
NI w;
NI h;
TY153031* data;
};
typedef NU8 Tnimkind3203;
typedef NU8 Tnimtypeflag3209Set;
typedef N_NIMCALL_PTR(void, TY3289) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3203 kind;
Tnimtypeflag3209Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell47305  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47321  {
NI len;
NI cap;
Cell47305** d;
};
typedef Smallchunk29439* TY29500[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29485  {
NI minlargeobj;
NI maxlargeobj;
TY29500 freesmallchunks;
Llchunk29479* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29441* freechunkslist;
Intset29414 chunkstarts;
Avlnode29483* root;
Avlnode29483* deleted;
Avlnode29483* last;
Avlnode29483* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat49814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47317  {
NI counter;
NI max;
Pagedesc47313* head;
Pagedesc47313** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47321 zct;
Cellseq47321 decstack;
Cellseq47321 tempstack;
NI recgclock;
Memregion29485 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
typedef NF TY129056[3];
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NF32 TY151018[3];
struct  TY154490  {
NI HEX3Astate;
FILE* f154284;
Framebufobj153002* fb154278;
NF32 maxval154426;
NIM_BOOL srgb154282;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NI v0, void* ClEnv);
void* ClEnv;
} TY154434;
typedef NU8 Filemode12609;
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
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e0, void* ClEnv);
void* ClEnv;
} TY16811;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY16811 raiseAction;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (void* ClEnv);
void* ClEnv;
} TY154428;
typedef N_CLOSURE_PTR(void, T623370228_34) (void);
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (NF32 v0, void* ClEnv);
void* ClEnv;
} TY154448;
typedef N_CLOSURE_PTR(NI, T623370228_35) (NF32 v0);
typedef N_CLOSURE_PTR(void, T623370228_36) (NI v0);
typedef N_CLOSURE_PTR(NI, T623370228_38) (NF32 v0);
typedef N_CLOSURE_PTR(void, T623370228_39) (NI v0);
typedef N_CLOSURE_PTR(NI, T623370228_41) (NF32 v0);
typedef N_CLOSURE_PTR(void, T623370228_42) (NI v0);
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29437  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29439  {
  Basechunk29437 Sup;
Smallchunk29439* next;
Smallchunk29439* prev;
Freecell29429* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29479  {
NI size;
NI acc;
Llchunk29479* next;
};
struct  Bigchunk29441  {
  Basechunk29437 Sup;
Bigchunk29441* next;
Bigchunk29441* prev;
NI align;
NF data;
};
typedef NI TY29418[16];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29418 bits;
};
typedef Avlnode29483* TY29490[2];
struct  Avlnode29483  {
TY29490 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29418 bits;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct TY153031 {
  TGenericSeq Sup;
  NF32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY153031*, newseq_153026_1689653243)(NI len0);
N_NIMCALL(Framebufobj153002*, newframebuf_153010_623370228)(NI w0, NI h0);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T623370228_3)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NI, mulInt)(NI a0, NI b0);
static N_INLINE(NI, chckRange)(NI i0, NI a0, NI b0);
N_NOINLINE(void, raiseRangeError)(NI64 val0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_21201_1689653243)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(NF, r_153406_140325102)(TY129056 v0);
N_NIMCALL(NF, g_153421_140325102)(TY129056 v0);
N_NIMCALL(NF, b_153436_140325102)(TY129056 v0);
N_NIMCALL(void, set_153063_623370228)(Framebufobj153002** fb0, NI x0, NI y0, TY129056 color0);
N_NIMCALL(void, failedassertimpl_90839_1689653243)(NimStringDesc* msg0);
static N_INLINE(NI, addInt)(NI a0, NI b0);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, set_153452_623370228)(Framebufobj153002** fb0, NI x0, NI y0, TY151018 color0);
N_NIMCALL(NF32, r_151024_140325102)(TY151018 v0);
N_NIMCALL(NF32, g_151038_140325102)(TY151018 v0);
N_NIMCALL(NF32, b_151052_140325102)(TY151018 v0);
N_NIMCALL(void, get_153831_623370228)(Framebufobj153002** fb0, NI x0, NI y0, TY151018 Result);
N_NIMCALL(void, vec3_151066_140325102)(NF32 a0, NF32 b0, NF32 c0, TY151018 Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(void, genericReset)(void* dest0, TNimType* mt0);
N_NIMCALL(void, rect_154219_623370228)(Framebufobj153002** fb0, NI ox0, NI oy0, NI w0, NI h0, TY151018 color0);
N_NIMCALL(NI, HEX5E_154286_1009420244)(NI x_154290_1009420244, NI y_154292_1009420244);
static N_INLINE(void, HEX2AHEX3D_154406_1689653243)(NI* x0, NI y0);
N_NIMCALL(NF32, clamp_154452_1689653243)(NF32 x0, NF32 a0, NF32 b0);
N_NIMCALL(NF32, round_154464_1009420244)(NF32 x0, NI places0);
N_NIMCALL(NIM_BOOL, writeppm_154276_623370228)(Framebufobj153002* fb0, NimStringDesc* filename0, NI bits0, NIM_BOOL srgb0);
N_NIMCALL(void, T623370228_29)(void* p, NI op);
static N_INLINE(NI, subInt)(NI a0, NI b0);
N_CLOSURE(void, writeuint8_154433_623370228)(NI v0, void* ClEnv);
N_NIMCALL(NI, writebuffer_14578_1689653243)(FILE* f0, void* buffer0, NI len0);
N_CLOSURE(void, writeuint16_154438_623370228)(NI v0, void* ClEnv);
static N_INLINE(void, bigendian16_150058_837545836)(void* outp0, void* inp0);
N_NIMCALL(void, swapendian16_150021_837545836)(void* outp0, void* inp0);
N_NIMCALL(NIM_BOOL, open_14403_1689653243)(FILE** f0, NimStringDesc* filename0, Filemode12609 mode0, NI bufsize0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
N_CLOSURE(void, writeheader_154427_623370228)(void* ClEnv);
N_NIMCALL(void, write_14491_1689653243)(FILE* f0, NimStringDesc* s0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7285_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_CLOSURE(NI, outvalue_154447_623370228)(NF32 v0, void* ClEnv);
N_NIMCALL(NF32, lineartosrgb_151085_2725535669)(NF32 v0);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s0);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53419_1689653243)(Cell47305* c0);
static N_INLINE(void, decref_53001_1689653243)(Cell47305* c0);
N_NIMCALL(void, close_14453_1689653243)(FILE* f0);
N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(T623370228_6, "x < fb.w ", 9);
STRING_LITERAL(T623370228_7, "y < fb.h ", 9);
STRING_LITERAL(T623370228_32, "P6 ", 3);
STRING_LITERAL(T623370228_33, " ", 1);
TNimType NTI153002; /* FramebufObj */
extern TNimType NTI3404; /* Natural */
extern TNimType NTI153031; /* seq[float32] */
TNimType NTI153004; /* Framebuf */
extern TFrame* frameptr_18436_1689653243;
extern Gcheap49818 gch_49858_1689653243;
extern TNimType NTI151018; /* array[0..2, float32] */
TNimType NTI154490; /* object */
extern TNimType NTI101021; /* range -1..0(int) */
extern TNimType NTI12607; /* File */
extern TNimType NTI126; /* float32 */
extern TNimType NTI130; /* bool */
TNimType NTI154489; /* ref object */
extern TSafePoint* exchandler_18437_1689653243;
extern Exception* currexception_18439_1689653243;
N_NIMCALL(void, T623370228_3)(void* p, NI op) {
	Framebufobj153002* a;
	a = (Framebufobj153002*)p;
	nimGCvisit((void*)(*a).data, op);
}

static N_INLINE(NI, chckRange)(NI i0, NI a0, NI b0) {
	NI result0;
{	result0 = (NI)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (a0 <= i0);
		if (!(LOC3)) goto LA4;
		LOC3 = (i0 <= b0);
		LA4: ;
		if (!LOC3) goto LA5;
		result0 = i0;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i0)));
	}
	LA1: ;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, nimFrame)(TFrame* s0) {
	NI LOC1;
	LOC1 = (NI)0;
	{
		if (!(frameptr_18436_1689653243 == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_18436_1689653243).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s0).calldepth = ((NI16) (LOC1));
	(*s0).prev = frameptr_18436_1689653243;
	frameptr_18436_1689653243 = s0;
	{
		if (!((*s0).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_21201_1689653243();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_18436_1689653243 = (*frameptr_18436_1689653243).prev;
}

static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47305* result0;
	nimfr("usrToCell", "gc.nim")
	result0 = (Cell47305*)0;
	nimln(131, "gc.nim");
	result0 = ((Cell47305*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47305))))));
	popFrame();
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(211, "gc.nim");
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(271, "gc.nim");
	{
		Cell47305* c0;
		nimln(343, "system.nim");
		if (!!((src0 == NIM_NIL))) goto LA3;
		nimln(272, "gc.nim");
		c0 = usrtocell_51440_1689653243(src0);
		nimln(179, "gc.nim");
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	nimln(274, "gc.nim");
	{
		Cell47305* c0;
		nimln(343, "system.nim");
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		nimln(275, "gc.nim");
		c0 = usrtocell_51440_1689653243((*dest0));
		nimln(276, "gc.nim");
		{
			nimln(177, "gc.nim");
			(*c0).refcount -= ((NI) 8);
			nimln(178, "gc.nim");
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			nimln(277, "gc.nim");
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	nimln(278, "gc.nim");
	(*dest0) = src0;
	popFrame();
}

N_NIMCALL(Framebufobj153002*, newframebuf_153010_623370228)(NI w0, NI h0) {
	Framebufobj153002* result0;
	NI T623370228_4;
	NI T623370228_5;
	nimfr("newFramebuf", "framebuf.nim")
	result0 = (Framebufobj153002*)0;
	nimln(14, "framebuf.nim");
	result0 = (Framebufobj153002*) newObj((&NTI153004), sizeof(Framebufobj153002));
	nimln(15, "framebuf.nim");
	(*result0).w = w0;
	nimln(16, "framebuf.nim");
	(*result0).h = h0;
	nimln(17, "framebuf.nim");
	T623370228_4 = mulInt(((NI) (w0)), ((NI) (h0)));
	T623370228_5 = mulInt(((NI)chckRange((NI)(T623370228_4), ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) 3));
	asgnRefNoCycle((void**) (&(*result0).data), newseq_153026_1689653243(((NI)chckRange((NI)(T623370228_5), ((NI) 0), ((NI) 2147483647)))));
	popFrame();
	return result0;
}

static N_INLINE(NI, addInt)(NI a0, NI b0) {
	NI result0;
{	result0 = (NI)0;
	result0 = (NI)((NU32)(a0) + (NU32)(b0));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ a0));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ b0));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, set_153063_623370228)(Framebufobj153002** fb0, NI x0, NI y0, TY129056 color0) {
	NI offs0;
	NI T623370228_8;
	NI T623370228_9;
	NI T623370228_10;
	NF LOC9;
	NI T623370228_11;
	NF LOC10;
	NI T623370228_12;
	NF LOC11;
	nimfr("set", "framebuf.nim")
	nimln(21, "framebuf.nim");
	{
		if (!!((((NI) (x0)) < ((NI) ((*(*fb0)).w))))) goto LA3;
		failedassertimpl_90839_1689653243(((NimStringDesc*) &T623370228_6));
	}
	LA3: ;
	nimln(22, "framebuf.nim");
	{
		if (!!((((NI) (y0)) < ((NI) ((*(*fb0)).h))))) goto LA7;
		failedassertimpl_90839_1689653243(((NimStringDesc*) &T623370228_7));
	}
	LA7: ;
	nimln(23, "framebuf.nim");
	T623370228_8 = mulInt(((NI) (y0)), ((NI) ((*(*fb0)).w)));
	T623370228_9 = addInt(((NI)chckRange((NI)(T623370228_8), ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) (x0)));
	T623370228_10 = mulInt(((NI)chckRange((NI)(T623370228_9), ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) 3));
	offs0 = (NI)(T623370228_10);
	nimln(24, "framebuf.nim");
	if ((NU)(offs0) >= (NU)((*(*fb0)).data->Sup.len)) raiseIndexError();
	LOC9 = (NF)0;
	LOC9 = r_153406_140325102(color0);
	(*(*fb0)).data->data[offs0] = ((NF32) (LOC9));
	nimln(25, "framebuf.nim");
	T623370228_11 = addInt(((NI)chckRange(offs0, ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) 1));
	if ((NU)((NI)(T623370228_11)) >= (NU)((*(*fb0)).data->Sup.len)) raiseIndexError();
	LOC10 = (NF)0;
	LOC10 = g_153421_140325102(color0);
	(*(*fb0)).data->data[(NI)(T623370228_11)] = ((NF32) (LOC10));
	nimln(26, "framebuf.nim");
	T623370228_12 = addInt(((NI)chckRange(offs0, ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) 2));
	if ((NU)((NI)(T623370228_12)) >= (NU)((*(*fb0)).data->Sup.len)) raiseIndexError();
	LOC11 = (NF)0;
	LOC11 = b_153436_140325102(color0);
	(*(*fb0)).data->data[(NI)(T623370228_12)] = ((NF32) (LOC11));
	popFrame();
}

N_NIMCALL(void, set_153452_623370228)(Framebufobj153002** fb0, NI x0, NI y0, TY151018 color0) {
	NI offs0;
	NI T623370228_13;
	NI T623370228_14;
	NI T623370228_15;
	NI T623370228_16;
	NI T623370228_17;
	nimfr("set", "framebuf.nim")
	nimln(29, "framebuf.nim");
	{
		if (!!((((NI) (x0)) < ((NI) ((*(*fb0)).w))))) goto LA3;
		failedassertimpl_90839_1689653243(((NimStringDesc*) &T623370228_6));
	}
	LA3: ;
	nimln(30, "framebuf.nim");
	{
		if (!!((((NI) (y0)) < ((NI) ((*(*fb0)).h))))) goto LA7;
		failedassertimpl_90839_1689653243(((NimStringDesc*) &T623370228_7));
	}
	LA7: ;
	nimln(31, "framebuf.nim");
	T623370228_13 = mulInt(((NI) (y0)), ((NI) ((*(*fb0)).w)));
	T623370228_14 = addInt(((NI)chckRange((NI)(T623370228_13), ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) (x0)));
	T623370228_15 = mulInt(((NI)chckRange((NI)(T623370228_14), ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) 3));
	offs0 = (NI)(T623370228_15);
	nimln(32, "framebuf.nim");
	if ((NU)(offs0) >= (NU)((*(*fb0)).data->Sup.len)) raiseIndexError();
	(*(*fb0)).data->data[offs0] = r_151024_140325102(color0);
	nimln(33, "framebuf.nim");
	T623370228_16 = addInt(((NI)chckRange(offs0, ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) 1));
	if ((NU)((NI)(T623370228_16)) >= (NU)((*(*fb0)).data->Sup.len)) raiseIndexError();
	(*(*fb0)).data->data[(NI)(T623370228_16)] = g_151038_140325102(color0);
	nimln(34, "framebuf.nim");
	T623370228_17 = addInt(((NI)chckRange(offs0, ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) 2));
	if ((NU)((NI)(T623370228_17)) >= (NU)((*(*fb0)).data->Sup.len)) raiseIndexError();
	(*(*fb0)).data->data[(NI)(T623370228_17)] = b_151052_140325102(color0);
	popFrame();
}

N_NIMCALL(void, get_153831_623370228)(Framebufobj153002** fb0, NI x0, NI y0, TY151018 Result) {
	NI offs0;
	NI T623370228_18;
	NI T623370228_19;
	NI T623370228_20;
	NI T623370228_21;
	NI T623370228_22;
	nimfr("get", "framebuf.nim")
	nimln(37, "framebuf.nim");
	{
		if (!!((((NI) (x0)) < ((NI) ((*(*fb0)).w))))) goto LA3;
		failedassertimpl_90839_1689653243(((NimStringDesc*) &T623370228_6));
	}
	LA3: ;
	nimln(38, "framebuf.nim");
	{
		if (!!((((NI) (y0)) < ((NI) ((*(*fb0)).h))))) goto LA7;
		failedassertimpl_90839_1689653243(((NimStringDesc*) &T623370228_7));
	}
	LA7: ;
	nimln(39, "framebuf.nim");
	T623370228_18 = mulInt(((NI) (y0)), ((NI) ((*(*fb0)).w)));
	T623370228_19 = addInt(((NI)chckRange((NI)(T623370228_18), ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) (x0)));
	T623370228_20 = mulInt(((NI)chckRange((NI)(T623370228_19), ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) 3));
	offs0 = (NI)(T623370228_20);
	nimln(40, "framebuf.nim");
	if ((NU)(offs0) >= (NU)((*(*fb0)).data->Sup.len)) raiseIndexError();
	nimln(41, "framebuf.nim");
	T623370228_21 = addInt(((NI)chckRange(offs0, ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) 1));
	if ((NU)((NI)(T623370228_21)) >= (NU)((*(*fb0)).data->Sup.len)) raiseIndexError();
	nimln(42, "framebuf.nim");
	T623370228_22 = addInt(((NI)chckRange(offs0, ((NI) (-2147483647 -1)), ((NI) 2147483647))), ((NI) 2));
	if ((NU)((NI)(T623370228_22)) >= (NU)((*(*fb0)).data->Sup.len)) raiseIndexError();
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI151018));
	vec3_151066_140325102((*(*fb0)).data->data[offs0], (*(*fb0)).data->data[(NI)(T623370228_21)], (*(*fb0)).data->data[(NI)(T623370228_22)], Result);
	popFrame();
}

N_NIMCALL(void, rect_154219_623370228)(Framebufobj153002** fb0, NI ox0, NI oy0, NI w0, NI h0, TY151018 color0) {
	nimfr("rect", "framebuf.nim")
	{
		NI x_154252_623370228;
		NI HEX3Atmp_154271_623370228;
		NI T623370228_23;
		NI i_154274_623370228;
		x_154252_623370228 = (NI)0;
		HEX3Atmp_154271_623370228 = (NI)0;
		nimln(46, "framebuf.nim");
		T623370228_23 = addInt(((NI) (ox0)), ((NI) (w0)));
		HEX3Atmp_154271_623370228 = (NI)(T623370228_23);
		nimln(3615, "system.nim");
		i_154274_623370228 = ((NI) (ox0));
		{
			nimln(3616, "system.nim");
			while (1) {
				NI T623370228_26;
				if (!(((NI)chckRange(i_154274_623370228, ((NI) (-2147483647 -1)), ((NI) 2147483647))) < ((NI)chckRange(HEX3Atmp_154271_623370228, ((NI) (-2147483647 -1)), ((NI) 2147483647))))) goto LA3;
				nimln(3615, "system.nim");
				x_154252_623370228 = i_154274_623370228;
				{
					NI y_154263_623370228;
					NI HEX3Atmp_154266_623370228;
					NI T623370228_24;
					NI i_154269_623370228;
					y_154263_623370228 = (NI)0;
					HEX3Atmp_154266_623370228 = (NI)0;
					nimln(47, "framebuf.nim");
					T623370228_24 = addInt(((NI) (oy0)), ((NI) (h0)));
					HEX3Atmp_154266_623370228 = (NI)(T623370228_24);
					nimln(3615, "system.nim");
					i_154269_623370228 = ((NI) (oy0));
					{
						nimln(3616, "system.nim");
						while (1) {
							NI T623370228_25;
							if (!(((NI)chckRange(i_154269_623370228, ((NI) (-2147483647 -1)), ((NI) 2147483647))) < ((NI)chckRange(HEX3Atmp_154266_623370228, ((NI) (-2147483647 -1)), ((NI) 2147483647))))) goto LA6;
							nimln(3615, "system.nim");
							y_154263_623370228 = i_154269_623370228;
							nimln(48, "framebuf.nim");
							set_153452_623370228(fb0, ((NI)chckRange(x_154252_623370228, ((NI) 0), ((NI) 2147483647))), ((NI)chckRange(y_154263_623370228, ((NI) 0), ((NI) 2147483647))), color0);
							nimln(3618, "system.nim");
							T623370228_25 = addInt(i_154269_623370228, ((NI) 1));
							if (T623370228_25 < 0 || T623370228_25 > IL64(4294967294)) raiseOverflow();
							i_154269_623370228 = (NI)(T623370228_25);
						} LA6: ;
					}
				}
				T623370228_26 = addInt(i_154274_623370228, ((NI) 1));
				if (T623370228_26 < 0 || T623370228_26 > IL64(4294967294)) raiseOverflow();
				i_154274_623370228 = (NI)(T623370228_26);
			} LA3: ;
		}
	}
	popFrame();
}

static N_INLINE(void, HEX2AHEX3D_154406_1689653243)(NI* x0, NI y0) {
	NI T623370228_27;
	nimfr("*=", "system.nim")
	nimln(3317, "system.nim");
	T623370228_27 = mulInt((*x0), y0);
	(*x0) = (NI)(T623370228_27);
	popFrame();
}
N_NIMCALL(void, T623370228_29)(void* p, NI op) {
	TY154490* a;
	a = (TY154490*)p;
	nimGCvisit((void*)(*a).fb154278, op);
}

static N_INLINE(NI, subInt)(NI a0, NI b0) {
	NI result0;
{	result0 = (NI)0;
	result0 = (NI)((NU32)(a0) - (NU32)(b0));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ a0));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ (NI)((NU32) ~(b0))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result0;
}

N_CLOSURE(void, writeuint8_154433_623370228)(NI v0, void* ClEnv) {
	TY154490* HEX3Aenvp_154493_623370228;
	NU8 buf0;
	NI LOC1;
	nimfr("writeUint8", "framebuf.nim")
	HEX3Aenvp_154493_623370228 = (TY154490*) ClEnv;
	nimln(61, "framebuf.nim");
	buf0 = ((NU8) (v0));
	nimln(62, "framebuf.nim");
	LOC1 = (NI)0;
	LOC1 = writebuffer_14578_1689653243((*HEX3Aenvp_154493_623370228).f154284, ((void*) ((&buf0))), ((NI) 1));
	popFrame();
}

static N_INLINE(void, bigendian16_150058_837545836)(void* outp0, void* inp0) {
	nimfr("bigEndian16", "endians.nim")
	nimln(59, "endians.nim");
	swapendian16_150021_837545836(outp0, inp0);
	popFrame();
}

N_CLOSURE(void, writeuint16_154438_623370228)(NI v0, void* ClEnv) {
	TY154490* HEX3Aenvp_154495_623370228;
	NU16 buf0;
	NU16 bufbe0;
	NI LOC1;
	nimfr("writeUint16", "framebuf.nim")
	HEX3Aenvp_154495_623370228 = (TY154490*) ClEnv;
	nimln(65, "framebuf.nim");
	buf0 = ((NU16) (v0));
	bufbe0 = (NU16)0;
	nimln(67, "framebuf.nim");
	bigendian16_150058_837545836(((void*) ((&bufbe0))), ((void*) ((&buf0))));
	nimln(68, "framebuf.nim");
	LOC1 = (NI)0;
	LOC1 = writebuffer_14578_1689653243((*HEX3Aenvp_154495_623370228).f154284, ((void*) ((&bufbe0))), ((NI) 2));
	popFrame();
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_18437_1689653243;
	exchandler_18437_1689653243 = s0;
}

static N_INLINE(void, copymem_7285_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_7285_1689653243(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_CLOSURE(void, writeheader_154427_623370228)(void* ClEnv) {
	TY154490* HEX3Aenvp_154496_623370228;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	nimfr("writeHeader", "framebuf.nim")
	HEX3Aenvp_154496_623370228 = (TY154490*) ClEnv;
	nimln(58, "framebuf.nim");
	LOC1 = (NimStringDesc*)0;
	LOC2 = (NimStringDesc*)0;
	LOC2 = nimIntToStr(((NI) ((*(*HEX3Aenvp_154496_623370228).fb154278).w)));
	LOC3 = (NimStringDesc*)0;
	LOC3 = nimIntToStr(((NI) ((*(*HEX3Aenvp_154496_623370228).fb154278).h)));
	LOC4 = (NimStringDesc*)0;
	LOC4 = nimIntToStr(((NI) ((*HEX3Aenvp_154496_623370228).maxval154426)));
	LOC1 = rawNewString(LOC2->Sup.len + LOC3->Sup.len + LOC4->Sup.len + 6);
appendString(LOC1, ((NimStringDesc*) &T623370228_32));
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &T623370228_33));
appendString(LOC1, LOC3);
appendString(LOC1, ((NimStringDesc*) &T623370228_33));
appendString(LOC1, LOC4);
appendString(LOC1, ((NimStringDesc*) &T623370228_33));
	write_14491_1689653243((*HEX3Aenvp_154496_623370228).f154284, LOC1);
	popFrame();
}

N_CLOSURE(NI, outvalue_154447_623370228)(NF32 v0, void* ClEnv) {
	NI result0;
	TY154490* HEX3Aenvp_154499_623370228;
	NF32 c0;
	NF32 LOC5;
	nimfr("outvalue", "framebuf.nim")
	result0 = (NI)0;
	HEX3Aenvp_154499_623370228 = (TY154490*) ClEnv;
	nimln(71, "framebuf.nim");
	c0 = clamp_154452_1689653243(v0, 0.0, 1.0000000000000000e+00);
	nimln(72, "framebuf.nim");
	{
		if (!(*HEX3Aenvp_154499_623370228).srgb154282) goto LA3;
		nimln(73, "framebuf.nim");
		c0 = lineartosrgb_151085_2725535669(c0);
	}
	LA3: ;
	nimln(74, "framebuf.nim");
	LOC5 = (NF32)0;
	LOC5 = round_154464_1009420244(((NF32)(c0) * (NF32)((*HEX3Aenvp_154499_623370228).maxval154426)), ((NI) 0));
	result0 = ((NI) (LOC5));
	popFrame();
	return result0;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_18437_1689653243 = (*exchandler_18437_1689653243).prev;
}

static N_INLINE(void, setFrame)(TFrame* s0) {
	frameptr_18436_1689653243 = s0;
}

static N_INLINE(void, incref_53419_1689653243)(Cell47305* c0) {
	nimfr("incRef", "gc.nim")
	nimln(223, "gc.nim");
	(*c0).refcount = (NI)((NU32)((*c0).refcount) + (NU32)(((NI) 8)));
	popFrame();
}

static N_INLINE(void, decref_53001_1689653243)(Cell47305* c0) {
	nimfr("decRef", "gc.nim")
	nimln(218, "gc.nim");
	{
		nimln(177, "gc.nim");
		(*c0).refcount -= ((NI) 8);
		nimln(178, "gc.nim");
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		nimln(219, "gc.nim");
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	nimfr("asgnRef", "gc.nim")
	nimln(264, "gc.nim");
	{
		Cell47305* LOC5;
		nimln(343, "system.nim");
		if (!!((src0 == NIM_NIL))) goto LA3;
		nimln(264, "gc.nim");
		LOC5 = (Cell47305*)0;
		LOC5 = usrtocell_51440_1689653243(src0);
		incref_53419_1689653243(LOC5);
	}
	LA3: ;
	nimln(265, "gc.nim");
	{
		Cell47305* LOC10;
		nimln(343, "system.nim");
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		nimln(265, "gc.nim");
		LOC10 = (Cell47305*)0;
		LOC10 = usrtocell_51440_1689653243((*dest0));
		decref_53001_1689653243(LOC10);
	}
	LA8: ;
	nimln(266, "gc.nim");
	(*dest0) = src0;
	popFrame();
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_18439_1689653243), NIM_NIL);
}

N_NIMCALL(NIM_BOOL, writeppm_154276_623370228)(Framebufobj153002* fb0, NimStringDesc* filename0, NI bits0, NIM_BOOL srgb0) {
	NIM_BOOL volatile result0;
	TY154490* HEX3Aenv_154501_623370228;
	NI LOC1;
	NI T623370228_30;
	TY154434 writecomponent0;
	nimfr("writePpm", "framebuf.nim")
	result0 = (NIM_BOOL)0;
	HEX3Aenv_154501_623370228 = (TY154490*)0;
	nimln(198, "system.nim");
	HEX3Aenv_154501_623370228 = (TY154490*) newObj((&NTI154489), sizeof(TY154490));
	nimln(51, "framebuf.nim");
	asgnRefNoCycle((void**) (&(*HEX3Aenv_154501_623370228).fb154278), fb0);
	(*HEX3Aenv_154501_623370228).srgb154282 = srgb0;
	nimln(55, "framebuf.nim");
	LOC1 = (NI)0;
	LOC1 = HEX5E_154286_1009420244(((NI) 2), ((NI) (bits0)));
	T623370228_30 = subInt(LOC1, ((NI) 1));
	(*HEX3Aenv_154501_623370228).maxval154426 = ((NF32) ((NI)(T623370228_30)));
	memset((void*)(&writecomponent0), 0, sizeof(writecomponent0));
	nimln(76, "framebuf.nim");
	{
		TY154434 LOC6;
		if (!(((NI) (bits0)) <= ((NI) 8))) goto LA4;
		memset((void*)(&LOC6), 0, sizeof(LOC6));
		LOC6.ClPrc = writeuint8_154433_623370228; LOC6.ClEnv = HEX3Aenv_154501_623370228;
		writecomponent0.ClEnv = LOC6.ClEnv;
		writecomponent0.ClPrc = LOC6.ClPrc;
	}
	goto LA2;
	LA4: ;
	{
		TY154434 LOC8;
		memset((void*)(&LOC8), 0, sizeof(LOC8));
		LOC8.ClPrc = writeuint16_154438_623370228; LOC8.ClEnv = HEX3Aenv_154501_623370228;
		writecomponent0.ClEnv = LOC8.ClEnv;
		writecomponent0.ClPrc = LOC8.ClPrc;
	}
	LA2: ;
	nimln(78, "framebuf.nim");
	{
		NIM_BOOL LOC11;
		TSafePoint T623370228_31;
		LOC11 = (NIM_BOOL)0;
		LOC11 = open_14403_1689653243(&(*HEX3Aenv_154501_623370228).f154284, filename0, ((Filemode12609) 1), ((NI) -1));
		if (!LOC11) goto LA12;
		nimln(79, "framebuf.nim");
		pushSafePoint(&T623370228_31);
		T623370228_31.status = setjmp(T623370228_31.context);
		if (T623370228_31.status == 0) {
			TY154428 LOC15;
			nimln(80, "framebuf.nim");
			memset((void*)(&LOC15), 0, sizeof(LOC15));
			LOC15.ClPrc = writeheader_154427_623370228; LOC15.ClEnv = HEX3Aenv_154501_623370228;
			LOC15.ClEnv? LOC15.ClPrc(LOC15.ClEnv):((T623370228_34)(LOC15.ClPrc))();
			{
				NI i_154488_623370228;
				NI HEX3Atmp_154505_623370228;
				NI res_154508_623370228;
				i_154488_623370228 = (NI)0;
				HEX3Atmp_154505_623370228 = (NI)0;
				nimln(81, "framebuf.nim");
				HEX3Atmp_154505_623370228 = ((*(*HEX3Aenv_154501_623370228).fb154278).data ? ((*(*HEX3Aenv_154501_623370228).fb154278).data->Sup.len-1) : -1);
				nimln(1873, "system.nim");
				res_154508_623370228 = ((NI) 0);
				{
					nimln(1874, "system.nim");
					while (1) {
						TY154448 LOC19;
						NI LOC20;
						TY154448 LOC21;
						NI T623370228_37;
						NI LOC22;
						TY154448 LOC23;
						NI T623370228_40;
						NI LOC24;
						NI T623370228_43;
						if (!(res_154508_623370228 <= HEX3Atmp_154505_623370228)) goto LA18;
						nimln(1875, "system.nim");
						i_154488_623370228 = res_154508_623370228;
						nimln(82, "framebuf.nim");
						memset((void*)(&LOC19), 0, sizeof(LOC19));
						LOC19.ClPrc = outvalue_154447_623370228; LOC19.ClEnv = HEX3Aenv_154501_623370228;
						if ((NU)(i_154488_623370228) >= (NU)((*(*HEX3Aenv_154501_623370228).fb154278).data->Sup.len)) raiseIndexError();
						LOC20 = (NI)0;
						LOC20 = LOC19.ClEnv? LOC19.ClPrc((*(*HEX3Aenv_154501_623370228).fb154278).data->data[i_154488_623370228], LOC19.ClEnv):((T623370228_35)(LOC19.ClPrc))((*(*HEX3Aenv_154501_623370228).fb154278).data->data[i_154488_623370228]);
						writecomponent0.ClEnv? writecomponent0.ClPrc(LOC20, writecomponent0.ClEnv):((T623370228_36)(writecomponent0.ClPrc))(LOC20);
						nimln(83, "framebuf.nim");
						memset((void*)(&LOC21), 0, sizeof(LOC21));
						LOC21.ClPrc = outvalue_154447_623370228; LOC21.ClEnv = HEX3Aenv_154501_623370228;
						T623370228_37 = addInt(i_154488_623370228, ((NI) 1));
						if ((NU)((NI)(T623370228_37)) >= (NU)((*(*HEX3Aenv_154501_623370228).fb154278).data->Sup.len)) raiseIndexError();
						LOC22 = (NI)0;
						LOC22 = LOC21.ClEnv? LOC21.ClPrc((*(*HEX3Aenv_154501_623370228).fb154278).data->data[(NI)(T623370228_37)], LOC21.ClEnv):((T623370228_38)(LOC21.ClPrc))((*(*HEX3Aenv_154501_623370228).fb154278).data->data[(NI)(T623370228_37)]);
						writecomponent0.ClEnv? writecomponent0.ClPrc(LOC22, writecomponent0.ClEnv):((T623370228_39)(writecomponent0.ClPrc))(LOC22);
						nimln(84, "framebuf.nim");
						memset((void*)(&LOC23), 0, sizeof(LOC23));
						LOC23.ClPrc = outvalue_154447_623370228; LOC23.ClEnv = HEX3Aenv_154501_623370228;
						T623370228_40 = addInt(i_154488_623370228, ((NI) 2));
						if ((NU)((NI)(T623370228_40)) >= (NU)((*(*HEX3Aenv_154501_623370228).fb154278).data->Sup.len)) raiseIndexError();
						LOC24 = (NI)0;
						LOC24 = LOC23.ClEnv? LOC23.ClPrc((*(*HEX3Aenv_154501_623370228).fb154278).data->data[(NI)(T623370228_40)], LOC23.ClEnv):((T623370228_41)(LOC23.ClPrc))((*(*HEX3Aenv_154501_623370228).fb154278).data->data[(NI)(T623370228_40)]);
						writecomponent0.ClEnv? writecomponent0.ClPrc(LOC24, writecomponent0.ClEnv):((T623370228_42)(writecomponent0.ClPrc))(LOC24);
						nimln(1889, "system.nim");
						T623370228_43 = addInt(res_154508_623370228, ((NI) 3));
						res_154508_623370228 = (NI)(T623370228_43);
					} LA18: ;
				}
			}
			nimln(85, "framebuf.nim");
			result0 = NIM_TRUE;
			popSafePoint();
		}
		else {
			popSafePoint();
			setFrame((TFrame*)&FR);
			{
				T623370228_31.status = 0;
				nimln(87, "framebuf.nim");
				result0 = NIM_FALSE;
				popCurrentException();
			}
		}
		{
			nimln(89, "framebuf.nim");
			close_14453_1689653243((*HEX3Aenv_154501_623370228).f154284);
		}
		if (T623370228_31.status != 0) reraiseException();
	}
	LA12: ;
	popFrame();
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_framebufInit000)(void) {
	nimfr("framebuf", "framebuf.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_framebufDatInit000)(void) {
static TNimNode* T623370228_2[3];
static TNimNode* T623370228_28[5];
static TNimNode T623370228_0[10];
NTI153002.size = sizeof(Framebufobj153002);
NTI153002.kind = 18;
NTI153002.base = 0;
NTI153002.flags = 2;
T623370228_2[0] = &T623370228_0[1];
T623370228_0[1].kind = 1;
T623370228_0[1].offset = offsetof(Framebufobj153002, w);
T623370228_0[1].typ = (&NTI3404);
T623370228_0[1].name = "w";
T623370228_2[1] = &T623370228_0[2];
T623370228_0[2].kind = 1;
T623370228_0[2].offset = offsetof(Framebufobj153002, h);
T623370228_0[2].typ = (&NTI3404);
T623370228_0[2].name = "h";
T623370228_2[2] = &T623370228_0[3];
T623370228_0[3].kind = 1;
T623370228_0[3].offset = offsetof(Framebufobj153002, data);
T623370228_0[3].typ = (&NTI153031);
T623370228_0[3].name = "data";
T623370228_0[0].len = 3; T623370228_0[0].kind = 2; T623370228_0[0].sons = &T623370228_2[0];
NTI153002.node = &T623370228_0[0];
NTI153004.size = sizeof(Framebufobj153002*);
NTI153004.kind = 22;
NTI153004.base = (&NTI153002);
NTI153004.flags = 2;
NTI153004.marker = T623370228_3;
NTI154490.size = sizeof(TY154490);
NTI154490.kind = 18;
NTI154490.base = 0;
NTI154490.flags = 2;
T623370228_28[0] = &T623370228_0[5];
T623370228_0[5].kind = 1;
T623370228_0[5].offset = offsetof(TY154490, HEX3Astate);
T623370228_0[5].typ = (&NTI101021);
T623370228_0[5].name = ":state";
T623370228_28[1] = &T623370228_0[6];
T623370228_0[6].kind = 1;
T623370228_0[6].offset = offsetof(TY154490, f154284);
T623370228_0[6].typ = (&NTI12607);
T623370228_0[6].name = "f154284";
T623370228_28[2] = &T623370228_0[7];
T623370228_0[7].kind = 1;
T623370228_0[7].offset = offsetof(TY154490, fb154278);
T623370228_0[7].typ = (&NTI153004);
T623370228_0[7].name = "fb154278";
T623370228_28[3] = &T623370228_0[8];
T623370228_0[8].kind = 1;
T623370228_0[8].offset = offsetof(TY154490, maxval154426);
T623370228_0[8].typ = (&NTI126);
T623370228_0[8].name = "maxval154426";
T623370228_28[4] = &T623370228_0[9];
T623370228_0[9].kind = 1;
T623370228_0[9].offset = offsetof(TY154490, srgb154282);
T623370228_0[9].typ = (&NTI130);
T623370228_0[9].name = "sRGB154282";
T623370228_0[4].len = 5; T623370228_0[4].kind = 2; T623370228_0[4].sons = &T623370228_28[0];
NTI154490.node = &T623370228_0[4];
NTI154489.size = sizeof(TY154490*);
NTI154489.kind = 22;
NTI154489.base = (&NTI154490);
NTI154489.flags = 2;
NTI154489.marker = T623370228_29;
}
