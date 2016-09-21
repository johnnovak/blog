/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, i386, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/john/code/Nim/lib -o /media/sf_D_DRIVE/Work/Code/nim-raytracer/src/src/nimcache/glm_mat_transform.o /media/sf_D_DRIVE/Work/Code/nim-raytracer/src/src/nimcache/glm_mat_transform.c */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <math.h>
#include <stdio.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NF TY129288[4];
typedef TY129288 TY135594[4];
typedef NF TY129056[3];
typedef struct {
N_NIMCALL_PTR(NF, ClPrc) (NF a_145700_2824150814, void* ClEnv);
void* ClEnv;
} TY145698;
typedef struct {
N_NIMCALL_PTR(NF, ClPrc) (NF a_131302_2824150814, NF b_131304_2824150814, void* ClEnv);
void* ClEnv;
} TY131300;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef TY129288 TY148410[4];
N_NIMCALL(void, translate_145615_695648071)(TY135594 m0, TY129056 v0, TY135594 Result);
N_NIMCALL(void, HEX5BHEX5DHEX3D_145935_65709178)(TY129288* m0, NI ix0, TY129288 c0);
N_NIMCALL(void, HEX2B_145778_140325102)(TY129288 v0, TY129288 u0, TY129288 Result);
N_NIMCALL(void, HEX2A_145663_140325102)(TY129288 a0, NF s0, TY129288 Result);
N_NIMCALL(void, HEX5BHEX5D_145632_65709178)(TY135594 m0, NI ix0, TY129288 Result);
N_NIMCALL(NF, HEX5BHEX5D_140781_140325102)(TY129056 v0, NI ix0);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_21201_1689653243)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, map_145691_2824150814)(TY129288 a0, TY145698 f0, TY129288 Result);
N_NIMCALL(void, zipwith_145825_2824150814)(TY129288 a0, TY129288 b0, TY131300 op0, TY129288 Result);
N_NIMCALL(void, rotate_145975_695648071)(TY135594 m0, TY129056 axis0, NF angle0, TY135594 Result);
N_NIMCALL(void, normalize_145992_140325102)(TY129056 v0, TY129056 Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(void, HEX2A_146132_140325102)(NF s0, TY129056 a0, TY129056 Result);
N_NIMCALL(void, mat4_146186_65709178)(NF s0, TY135594 Result);
N_NIMCALL(void, HEX5BHEX5DHEX3D_146338_140325102)(NF* v0, NI ix0, NF c0);
N_NIMCALL(NF*, HEX5BHEX5D_146293_65709178)(TY129288* m0, NI ix0);
N_NIMCALL(void, genericReset)(void* dest0, TNimType* mt0);
N_NIMCALL(NF, HEX5BHEX5D_146829_140325102)(TY129288 v0, NI ix0);
N_NIMCALL(NF, length_146001_140325102)(TY129056 vec0);
N_NIMCALL(NF, length2_146009_140325102)(TY129056 vec0);
N_NIMCALL(void, HEX2F_146047_140325102)(TY129056 a0, NF s0, TY129056 Result);
N_NIMCALL(void, map_146075_2824150814)(TY129056 a0, TY145698 f0, TY129056 Result);
N_NIMCALL(void, scale_147384_695648071)(TY135594 m0, TY129056 v0, TY135594 Result);
N_NIMCALL(void, ortho_147584_695648071)(NF left0, NF right0, NF bottom0, NF top0, NF znear0, NF zfar0, TY135594 Result);
N_NIMCALL(void, lookat_147811_695648071)(TY129056 eye0, TY129056 center0, TY129056 up0, TY135594 Result);
N_NIMCALL(void, lookatrh_147826_695648071)(TY129056 eye0, TY129056 center0, TY129056 up0, TY135594 Result);
N_NIMCALL(void, HEX2D_147841_140325102)(TY129056 v0, TY129056 u0, TY129056 Result);
N_NIMCALL(void, cross_130999_140325102)(TY129056 x0, TY129056 y0, TY129056 Result);
N_NIMCALL(NF, x_131063_140325102)(TY129056 v0);
N_NIMCALL(NF, y_131011_140325102)(TY129056 v0);
N_NIMCALL(NF, z_131025_140325102)(TY129056 v0);
N_NIMCALL(NF, dot_131225_140325102)(TY129056 a0, TY129056 b0);
N_NIMCALL(NimStringDesc*, HEX24_148386_65709178)(TY135594 m0);
N_NIMCALL(NimStringDesc*, HEX24_148405_2824150814)(TY148410 arr0);
N_NIMCALL(void, mat4_135587_65709178)(TY135594 Result);
N_NIMCALL(void, vec3_130965_140325102)(NF a0, NF b0, NF c0, TY129056 Result);
N_NIMCALL(void, vec4_135101_140325102)(NF a0, NF b0, NF c0, NF d0, TY129288 Result);
extern TFrame* frameptr_18436_1689653243;
extern TNimType NTI135594; /* array[0..3, Vec4[system.float]] */
TY135594 m_145601_695648071;
TY135594 nm_145959_695648071;
TY135594 rm_147370_695648071;
TY135594 sm_147565_695648071;
TY129288 v_147580_695648071;
extern TNimType NTI129288; /* array[0..3, float] */
TY135594 o_147773_695648071;
TY135594 la_148384_695648071;

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

N_NIMCALL(void, translate_145615_695648071)(TY135594 m0, TY129056 v0, TY135594 Result) {
	TY129288 LOC1;
	NF LOC2;
	TY129288 LOC3;
	TY129288 LOC4;
	NF LOC5;
	TY129288 LOC6;
	TY129288 LOC7;
	TY129288 LOC8;
	NF LOC9;
	TY129288 LOC10;
	TY129288 LOC11;
	TY129288 LOC12;
	TY129288 LOC13;
	nimfr("translate", "mat_transform.nim")
	nimln(7, "mat_transform.nim");
	memcpy((void*)Result, (NIM_CONST void*)m0, sizeof(TY135594));
	nimln(8, "mat_transform.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 0), LOC1);
	LOC2 = (NF)0;
	LOC2 = HEX5BHEX5D_140781_140325102(v0, ((NI) 0));
	memset((void*)LOC3, 0, sizeof(LOC3));
	HEX2A_145663_140325102(LOC1, LOC2, LOC3);
	memset((void*)LOC4, 0, sizeof(LOC4));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 1), LOC4);
	LOC5 = (NF)0;
	LOC5 = HEX5BHEX5D_140781_140325102(v0, ((NI) 1));
	memset((void*)LOC6, 0, sizeof(LOC6));
	HEX2A_145663_140325102(LOC4, LOC5, LOC6);
	memset((void*)LOC7, 0, sizeof(LOC7));
	HEX2B_145778_140325102(LOC3, LOC6, LOC7);
	memset((void*)LOC8, 0, sizeof(LOC8));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 2), LOC8);
	LOC9 = (NF)0;
	LOC9 = HEX5BHEX5D_140781_140325102(v0, ((NI) 2));
	memset((void*)LOC10, 0, sizeof(LOC10));
	HEX2A_145663_140325102(LOC8, LOC9, LOC10);
	memset((void*)LOC11, 0, sizeof(LOC11));
	HEX2B_145778_140325102(LOC7, LOC10, LOC11);
	memset((void*)LOC12, 0, sizeof(LOC12));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 3), LOC12);
	memset((void*)LOC13, 0, sizeof(LOC13));
	HEX2B_145778_140325102(LOC11, LOC12, LOC13);
	HEX5BHEX5DHEX3D_145935_65709178(Result, ((NI) 3), LOC13);
	popFrame();
}

N_NIMCALL(void, rotate_145975_695648071)(TY135594 m0, TY129056 axis0, NF angle0, TY135594 Result) {
	NF a0;
	NF c0;
	NF s0;
	TY129056 naxis0;
	TY129056 temp0;
	TY135594 Rotate0;
	NF* LOC1;
	NF LOC2;
	NF LOC3;
	NF* LOC4;
	NF LOC5;
	NF LOC6;
	NF LOC7;
	NF* LOC8;
	NF LOC9;
	NF LOC10;
	NF LOC11;
	NF* LOC12;
	NF LOC13;
	NF LOC14;
	NF LOC15;
	NF* LOC16;
	NF LOC17;
	NF LOC18;
	NF* LOC19;
	NF LOC20;
	NF LOC21;
	NF LOC22;
	NF* LOC23;
	NF LOC24;
	NF LOC25;
	NF LOC26;
	NF* LOC27;
	NF LOC28;
	NF LOC29;
	NF LOC30;
	NF* LOC31;
	NF LOC32;
	NF LOC33;
	TY129288 LOC34;
	NF* LOC35;
	NF LOC36;
	TY129288 LOC37;
	TY129288 LOC38;
	NF* LOC39;
	NF LOC40;
	TY129288 LOC41;
	TY129288 LOC42;
	TY129288 LOC43;
	NF* LOC44;
	NF LOC45;
	TY129288 LOC46;
	TY129288 LOC47;
	TY129288 LOC48;
	NF* LOC49;
	NF LOC50;
	TY129288 LOC51;
	TY129288 LOC52;
	NF* LOC53;
	NF LOC54;
	TY129288 LOC55;
	TY129288 LOC56;
	TY129288 LOC57;
	NF* LOC58;
	NF LOC59;
	TY129288 LOC60;
	TY129288 LOC61;
	TY129288 LOC62;
	NF* LOC63;
	NF LOC64;
	TY129288 LOC65;
	TY129288 LOC66;
	NF* LOC67;
	NF LOC68;
	TY129288 LOC69;
	TY129288 LOC70;
	TY129288 LOC71;
	NF* LOC72;
	NF LOC73;
	TY129288 LOC74;
	TY129288 LOC75;
	TY129288 LOC76;
	nimfr("rotate", "mat_transform.nim")
	nimln(13, "mat_transform.nim");
	a0 = angle0;
	nimln(14, "mat_transform.nim");
	c0 = cos(a0);
	nimln(15, "mat_transform.nim");
	s0 = sin(a0);
	memset((void*)naxis0, 0, sizeof(naxis0));
	nimln(17, "mat_transform.nim");
	chckNil((void*)naxis0);
	memset((void*)naxis0, 0, sizeof(naxis0));
	normalize_145992_140325102(axis0, naxis0);
	memset((void*)temp0, 0, sizeof(temp0));
	nimln(18, "mat_transform.nim");
	chckNil((void*)temp0);
	memset((void*)temp0, 0, sizeof(temp0));
	HEX2A_146132_140325102(((NF)(1.0000000000000000e+00) - (NF)(c0)), naxis0, temp0);
	memset((void*)Rotate0, 0, sizeof(Rotate0));
	nimln(19, "mat_transform.nim");
	chckNil((void*)Rotate0);
	memset((void*)Rotate0, 0, sizeof(Rotate0));
	mat4_146186_65709178(0.0, Rotate0);
	nimln(21, "mat_transform.nim");
	LOC1 = (NF*)0;
	LOC1 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 0));
	LOC2 = (NF)0;
	LOC2 = HEX5BHEX5D_140781_140325102(temp0, ((NI) 0));
	LOC3 = (NF)0;
	LOC3 = HEX5BHEX5D_140781_140325102(axis0, ((NI) 0));
	HEX5BHEX5DHEX3D_146338_140325102(LOC1, ((NI) 0), ((NF)(c0) + (NF)(((NF)(LOC2) * (NF)(LOC3)))));
	nimln(22, "mat_transform.nim");
	LOC4 = (NF*)0;
	LOC4 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 0));
	LOC5 = (NF)0;
	LOC5 = HEX5BHEX5D_140781_140325102(temp0, ((NI) 0));
	LOC6 = (NF)0;
	LOC6 = HEX5BHEX5D_140781_140325102(axis0, ((NI) 1));
	LOC7 = (NF)0;
	LOC7 = HEX5BHEX5D_140781_140325102(axis0, ((NI) 2));
	HEX5BHEX5DHEX3D_146338_140325102(LOC4, ((NI) 1), ((NF)(((NF)(0.0) + (NF)(((NF)(LOC5) * (NF)(LOC6))))) + (NF)(((NF)(s0) * (NF)(LOC7)))));
	nimln(23, "mat_transform.nim");
	LOC8 = (NF*)0;
	LOC8 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 0));
	LOC9 = (NF)0;
	LOC9 = HEX5BHEX5D_140781_140325102(temp0, ((NI) 0));
	LOC10 = (NF)0;
	LOC10 = HEX5BHEX5D_140781_140325102(axis0, ((NI) 2));
	LOC11 = (NF)0;
	LOC11 = HEX5BHEX5D_140781_140325102(axis0, ((NI) 1));
	HEX5BHEX5DHEX3D_146338_140325102(LOC8, ((NI) 2), ((NF)(((NF)(0.0) + (NF)(((NF)(LOC9) * (NF)(LOC10))))) - (NF)(((NF)(s0) * (NF)(LOC11)))));
	nimln(25, "mat_transform.nim");
	LOC12 = (NF*)0;
	LOC12 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 1));
	LOC13 = (NF)0;
	LOC13 = HEX5BHEX5D_140781_140325102(temp0, ((NI) 1));
	LOC14 = (NF)0;
	LOC14 = HEX5BHEX5D_140781_140325102(axis0, ((NI) 0));
	LOC15 = (NF)0;
	LOC15 = HEX5BHEX5D_140781_140325102(axis0, ((NI) 2));
	HEX5BHEX5DHEX3D_146338_140325102(LOC12, ((NI) 0), ((NF)(((NF)(0.0) + (NF)(((NF)(LOC13) * (NF)(LOC14))))) - (NF)(((NF)(s0) * (NF)(LOC15)))));
	nimln(26, "mat_transform.nim");
	LOC16 = (NF*)0;
	LOC16 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 1));
	LOC17 = (NF)0;
	LOC17 = HEX5BHEX5D_140781_140325102(temp0, ((NI) 1));
	LOC18 = (NF)0;
	LOC18 = HEX5BHEX5D_140781_140325102(axis0, ((NI) 1));
	HEX5BHEX5DHEX3D_146338_140325102(LOC16, ((NI) 1), ((NF)(c0) + (NF)(((NF)(LOC17) * (NF)(LOC18)))));
	nimln(27, "mat_transform.nim");
	LOC19 = (NF*)0;
	LOC19 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 1));
	LOC20 = (NF)0;
	LOC20 = HEX5BHEX5D_140781_140325102(temp0, ((NI) 1));
	LOC21 = (NF)0;
	LOC21 = HEX5BHEX5D_140781_140325102(axis0, ((NI) 2));
	LOC22 = (NF)0;
	LOC22 = HEX5BHEX5D_140781_140325102(axis0, ((NI) 0));
	HEX5BHEX5DHEX3D_146338_140325102(LOC19, ((NI) 2), ((NF)(((NF)(0.0) + (NF)(((NF)(LOC20) * (NF)(LOC21))))) + (NF)(((NF)(s0) * (NF)(LOC22)))));
	nimln(29, "mat_transform.nim");
	LOC23 = (NF*)0;
	LOC23 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 2));
	LOC24 = (NF)0;
	LOC24 = HEX5BHEX5D_140781_140325102(temp0, ((NI) 2));
	LOC25 = (NF)0;
	LOC25 = HEX5BHEX5D_140781_140325102(axis0, ((NI) 0));
	LOC26 = (NF)0;
	LOC26 = HEX5BHEX5D_140781_140325102(axis0, ((NI) 1));
	HEX5BHEX5DHEX3D_146338_140325102(LOC23, ((NI) 0), ((NF)(((NF)(0.0) + (NF)(((NF)(LOC24) * (NF)(LOC25))))) + (NF)(((NF)(s0) * (NF)(LOC26)))));
	nimln(30, "mat_transform.nim");
	LOC27 = (NF*)0;
	LOC27 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 2));
	LOC28 = (NF)0;
	LOC28 = HEX5BHEX5D_140781_140325102(temp0, ((NI) 2));
	LOC29 = (NF)0;
	LOC29 = HEX5BHEX5D_140781_140325102(axis0, ((NI) 1));
	LOC30 = (NF)0;
	LOC30 = HEX5BHEX5D_140781_140325102(axis0, ((NI) 0));
	HEX5BHEX5DHEX3D_146338_140325102(LOC27, ((NI) 1), ((NF)(((NF)(0.0) + (NF)(((NF)(LOC28) * (NF)(LOC29))))) - (NF)(((NF)(s0) * (NF)(LOC30)))));
	nimln(31, "mat_transform.nim");
	LOC31 = (NF*)0;
	LOC31 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 2));
	LOC32 = (NF)0;
	LOC32 = HEX5BHEX5D_140781_140325102(temp0, ((NI) 2));
	LOC33 = (NF)0;
	LOC33 = HEX5BHEX5D_140781_140325102(axis0, ((NI) 2));
	HEX5BHEX5DHEX3D_146338_140325102(LOC31, ((NI) 2), ((NF)(c0) + (NF)(((NF)(LOC32) * (NF)(LOC33)))));
	nimln(33, "mat_transform.nim");
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI135594));
	mat4_146186_65709178(0.0, Result);
	nimln(34, "mat_transform.nim");
	memset((void*)LOC34, 0, sizeof(LOC34));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 0), LOC34);
	LOC35 = (NF*)0;
	LOC35 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 0));
	LOC36 = (NF)0;
	LOC36 = HEX5BHEX5D_146829_140325102(LOC35, ((NI) 0));
	memset((void*)LOC37, 0, sizeof(LOC37));
	HEX2A_145663_140325102(LOC34, LOC36, LOC37);
	memset((void*)LOC38, 0, sizeof(LOC38));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 1), LOC38);
	LOC39 = (NF*)0;
	LOC39 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 0));
	LOC40 = (NF)0;
	LOC40 = HEX5BHEX5D_146829_140325102(LOC39, ((NI) 1));
	memset((void*)LOC41, 0, sizeof(LOC41));
	HEX2A_145663_140325102(LOC38, LOC40, LOC41);
	memset((void*)LOC42, 0, sizeof(LOC42));
	HEX2B_145778_140325102(LOC37, LOC41, LOC42);
	memset((void*)LOC43, 0, sizeof(LOC43));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 2), LOC43);
	LOC44 = (NF*)0;
	LOC44 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 0));
	LOC45 = (NF)0;
	LOC45 = HEX5BHEX5D_146829_140325102(LOC44, ((NI) 2));
	memset((void*)LOC46, 0, sizeof(LOC46));
	HEX2A_145663_140325102(LOC43, LOC45, LOC46);
	memset((void*)LOC47, 0, sizeof(LOC47));
	HEX2B_145778_140325102(LOC42, LOC46, LOC47);
	HEX5BHEX5DHEX3D_145935_65709178(Result, ((NI) 0), LOC47);
	nimln(35, "mat_transform.nim");
	memset((void*)LOC48, 0, sizeof(LOC48));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 0), LOC48);
	LOC49 = (NF*)0;
	LOC49 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 1));
	LOC50 = (NF)0;
	LOC50 = HEX5BHEX5D_146829_140325102(LOC49, ((NI) 0));
	memset((void*)LOC51, 0, sizeof(LOC51));
	HEX2A_145663_140325102(LOC48, LOC50, LOC51);
	memset((void*)LOC52, 0, sizeof(LOC52));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 1), LOC52);
	LOC53 = (NF*)0;
	LOC53 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 1));
	LOC54 = (NF)0;
	LOC54 = HEX5BHEX5D_146829_140325102(LOC53, ((NI) 1));
	memset((void*)LOC55, 0, sizeof(LOC55));
	HEX2A_145663_140325102(LOC52, LOC54, LOC55);
	memset((void*)LOC56, 0, sizeof(LOC56));
	HEX2B_145778_140325102(LOC51, LOC55, LOC56);
	memset((void*)LOC57, 0, sizeof(LOC57));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 2), LOC57);
	LOC58 = (NF*)0;
	LOC58 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 1));
	LOC59 = (NF)0;
	LOC59 = HEX5BHEX5D_146829_140325102(LOC58, ((NI) 2));
	memset((void*)LOC60, 0, sizeof(LOC60));
	HEX2A_145663_140325102(LOC57, LOC59, LOC60);
	memset((void*)LOC61, 0, sizeof(LOC61));
	HEX2B_145778_140325102(LOC56, LOC60, LOC61);
	HEX5BHEX5DHEX3D_145935_65709178(Result, ((NI) 1), LOC61);
	nimln(36, "mat_transform.nim");
	memset((void*)LOC62, 0, sizeof(LOC62));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 0), LOC62);
	LOC63 = (NF*)0;
	LOC63 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 2));
	LOC64 = (NF)0;
	LOC64 = HEX5BHEX5D_146829_140325102(LOC63, ((NI) 0));
	memset((void*)LOC65, 0, sizeof(LOC65));
	HEX2A_145663_140325102(LOC62, LOC64, LOC65);
	memset((void*)LOC66, 0, sizeof(LOC66));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 1), LOC66);
	LOC67 = (NF*)0;
	LOC67 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 2));
	LOC68 = (NF)0;
	LOC68 = HEX5BHEX5D_146829_140325102(LOC67, ((NI) 1));
	memset((void*)LOC69, 0, sizeof(LOC69));
	HEX2A_145663_140325102(LOC66, LOC68, LOC69);
	memset((void*)LOC70, 0, sizeof(LOC70));
	HEX2B_145778_140325102(LOC65, LOC69, LOC70);
	memset((void*)LOC71, 0, sizeof(LOC71));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 2), LOC71);
	LOC72 = (NF*)0;
	LOC72 = HEX5BHEX5D_146293_65709178(Rotate0, ((NI) 2));
	LOC73 = (NF)0;
	LOC73 = HEX5BHEX5D_146829_140325102(LOC72, ((NI) 2));
	memset((void*)LOC74, 0, sizeof(LOC74));
	HEX2A_145663_140325102(LOC71, LOC73, LOC74);
	memset((void*)LOC75, 0, sizeof(LOC75));
	HEX2B_145778_140325102(LOC70, LOC74, LOC75);
	HEX5BHEX5DHEX3D_145935_65709178(Result, ((NI) 2), LOC75);
	nimln(37, "mat_transform.nim");
	memset((void*)LOC76, 0, sizeof(LOC76));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 3), LOC76);
	HEX5BHEX5DHEX3D_145935_65709178(Result, ((NI) 3), LOC76);
	popFrame();
}

N_NIMCALL(void, scale_147384_695648071)(TY135594 m0, TY129056 v0, TY135594 Result) {
	TY129288 LOC1;
	NF LOC2;
	TY129288 LOC3;
	TY129288 LOC4;
	NF LOC5;
	TY129288 LOC6;
	TY129288 LOC7;
	NF LOC8;
	TY129288 LOC9;
	TY129288 LOC10;
	nimfr("scale", "mat_transform.nim")
	nimln(40, "mat_transform.nim");
	memcpy((void*)Result, (NIM_CONST void*)m0, sizeof(TY135594));
	nimln(41, "mat_transform.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 0), LOC1);
	LOC2 = (NF)0;
	LOC2 = HEX5BHEX5D_140781_140325102(v0, ((NI) 0));
	memset((void*)LOC3, 0, sizeof(LOC3));
	HEX2A_145663_140325102(LOC1, LOC2, LOC3);
	HEX5BHEX5DHEX3D_145935_65709178(Result, ((NI) 0), LOC3);
	nimln(42, "mat_transform.nim");
	memset((void*)LOC4, 0, sizeof(LOC4));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 1), LOC4);
	LOC5 = (NF)0;
	LOC5 = HEX5BHEX5D_140781_140325102(v0, ((NI) 1));
	memset((void*)LOC6, 0, sizeof(LOC6));
	HEX2A_145663_140325102(LOC4, LOC5, LOC6);
	HEX5BHEX5DHEX3D_145935_65709178(Result, ((NI) 1), LOC6);
	nimln(43, "mat_transform.nim");
	memset((void*)LOC7, 0, sizeof(LOC7));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 2), LOC7);
	LOC8 = (NF)0;
	LOC8 = HEX5BHEX5D_140781_140325102(v0, ((NI) 2));
	memset((void*)LOC9, 0, sizeof(LOC9));
	HEX2A_145663_140325102(LOC7, LOC8, LOC9);
	HEX5BHEX5DHEX3D_145935_65709178(Result, ((NI) 2), LOC9);
	nimln(44, "mat_transform.nim");
	memset((void*)LOC10, 0, sizeof(LOC10));
	HEX5BHEX5D_145632_65709178(m0, ((NI) 3), LOC10);
	HEX5BHEX5DHEX3D_145935_65709178(Result, ((NI) 3), LOC10);
	popFrame();
}

N_NIMCALL(void, ortho_147584_695648071)(NF left0, NF right0, NF bottom0, NF top0, NF znear0, NF zfar0, TY135594 Result) {
	NF* LOC1;
	NF* LOC2;
	NF* LOC3;
	NF* LOC4;
	NF* LOC5;
	NF* LOC6;
	nimfr("ortho", "mat_transform.nim")
	nimln(47, "mat_transform.nim");
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI135594));
	mat4_146186_65709178(1.0000000000000000e+00, Result);
	nimln(48, "mat_transform.nim");
	LOC1 = (NF*)0;
	LOC1 = HEX5BHEX5D_146293_65709178(Result, ((NI) 0));
	HEX5BHEX5DHEX3D_146338_140325102(LOC1, ((NI) 0), ((NF)(2.0000000000000000e+00) / (NF)(((NF)(right0) - (NF)(left0)))));
	nimln(49, "mat_transform.nim");
	LOC2 = (NF*)0;
	LOC2 = HEX5BHEX5D_146293_65709178(Result, ((NI) 1));
	HEX5BHEX5DHEX3D_146338_140325102(LOC2, ((NI) 1), ((NF)(2.0000000000000000e+00) / (NF)(((NF)(top0) - (NF)(bottom0)))));
	nimln(50, "mat_transform.nim");
	LOC3 = (NF*)0;
	LOC3 = HEX5BHEX5D_146293_65709178(Result, ((NI) 2));
	HEX5BHEX5DHEX3D_146338_140325102(LOC3, ((NI) 2), ((NF)(-2.0000000000000000e+00) / (NF)(((NF)(zfar0) - (NF)(znear0)))));
	nimln(51, "mat_transform.nim");
	LOC4 = (NF*)0;
	LOC4 = HEX5BHEX5D_146293_65709178(Result, ((NI) 3));
	HEX5BHEX5DHEX3D_146338_140325102(LOC4, ((NI) 0), ((NF)(-(((NF)(right0) + (NF)(left0)))) / (NF)(((NF)(right0) - (NF)(left0)))));
	nimln(52, "mat_transform.nim");
	LOC5 = (NF*)0;
	LOC5 = HEX5BHEX5D_146293_65709178(Result, ((NI) 3));
	HEX5BHEX5DHEX3D_146338_140325102(LOC5, ((NI) 1), ((NF)(-(((NF)(top0) + (NF)(bottom0)))) / (NF)(((NF)(top0) - (NF)(bottom0)))));
	nimln(53, "mat_transform.nim");
	LOC6 = (NF*)0;
	LOC6 = HEX5BHEX5D_146293_65709178(Result, ((NI) 3));
	HEX5BHEX5DHEX3D_146338_140325102(LOC6, ((NI) 2), ((NF)(-(((NF)(zfar0) + (NF)(znear0)))) / (NF)(((NF)(zfar0) - (NF)(znear0)))));
	popFrame();
}

N_NIMCALL(void, lookatrh_147826_695648071)(TY129056 eye0, TY129056 center0, TY129056 up0, TY135594 Result) {
	TY129056 f0;
	TY129056 LOC1;
	TY129056 s0;
	TY129056 LOC2;
	TY129056 u0;
	TY129056 LOC3;
	NF* LOC4;
	NF LOC5;
	NF* LOC6;
	NF LOC7;
	NF* LOC8;
	NF LOC9;
	NF* LOC10;
	NF LOC11;
	NF* LOC12;
	NF LOC13;
	NF* LOC14;
	NF LOC15;
	NF* LOC16;
	NF LOC17;
	NF* LOC18;
	NF LOC19;
	NF* LOC20;
	NF LOC21;
	NF* LOC22;
	NF LOC23;
	NF* LOC24;
	NF LOC25;
	NF* LOC26;
	NF LOC27;
	nimfr("lookAtRH", "mat_transform.nim")
	memset((void*)f0, 0, sizeof(f0));
	nimln(78, "mat_transform.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	HEX2D_147841_140325102(center0, eye0, LOC1);
	chckNil((void*)f0);
	memset((void*)f0, 0, sizeof(f0));
	normalize_145992_140325102(LOC1, f0);
	memset((void*)s0, 0, sizeof(s0));
	nimln(79, "mat_transform.nim");
	memset((void*)LOC2, 0, sizeof(LOC2));
	cross_130999_140325102(f0, up0, LOC2);
	chckNil((void*)s0);
	memset((void*)s0, 0, sizeof(s0));
	normalize_145992_140325102(LOC2, s0);
	memset((void*)u0, 0, sizeof(u0));
	nimln(80, "mat_transform.nim");
	memset((void*)LOC3, 0, sizeof(LOC3));
	cross_130999_140325102(s0, f0, LOC3);
	memcpy((void*)u0, (NIM_CONST void*)LOC3, sizeof(TY129056));
	nimln(81, "mat_transform.nim");
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI135594));
	mat4_146186_65709178(1.0000000000000000e+00, Result);
	nimln(82, "mat_transform.nim");
	LOC4 = (NF*)0;
	LOC4 = HEX5BHEX5D_146293_65709178(Result, ((NI) 0));
	LOC5 = (NF)0;
	LOC5 = x_131063_140325102(s0);
	HEX5BHEX5DHEX3D_146338_140325102(LOC4, ((NI) 0), LOC5);
	nimln(83, "mat_transform.nim");
	LOC6 = (NF*)0;
	LOC6 = HEX5BHEX5D_146293_65709178(Result, ((NI) 1));
	LOC7 = (NF)0;
	LOC7 = y_131011_140325102(s0);
	HEX5BHEX5DHEX3D_146338_140325102(LOC6, ((NI) 0), LOC7);
	nimln(84, "mat_transform.nim");
	LOC8 = (NF*)0;
	LOC8 = HEX5BHEX5D_146293_65709178(Result, ((NI) 2));
	LOC9 = (NF)0;
	LOC9 = z_131025_140325102(s0);
	HEX5BHEX5DHEX3D_146338_140325102(LOC8, ((NI) 0), LOC9);
	nimln(85, "mat_transform.nim");
	LOC10 = (NF*)0;
	LOC10 = HEX5BHEX5D_146293_65709178(Result, ((NI) 0));
	LOC11 = (NF)0;
	LOC11 = x_131063_140325102(u0);
	HEX5BHEX5DHEX3D_146338_140325102(LOC10, ((NI) 1), LOC11);
	nimln(86, "mat_transform.nim");
	LOC12 = (NF*)0;
	LOC12 = HEX5BHEX5D_146293_65709178(Result, ((NI) 1));
	LOC13 = (NF)0;
	LOC13 = y_131011_140325102(u0);
	HEX5BHEX5DHEX3D_146338_140325102(LOC12, ((NI) 1), LOC13);
	nimln(87, "mat_transform.nim");
	LOC14 = (NF*)0;
	LOC14 = HEX5BHEX5D_146293_65709178(Result, ((NI) 2));
	LOC15 = (NF)0;
	LOC15 = z_131025_140325102(u0);
	HEX5BHEX5DHEX3D_146338_140325102(LOC14, ((NI) 1), LOC15);
	nimln(88, "mat_transform.nim");
	LOC16 = (NF*)0;
	LOC16 = HEX5BHEX5D_146293_65709178(Result, ((NI) 0));
	LOC17 = (NF)0;
	LOC17 = x_131063_140325102(f0);
	HEX5BHEX5DHEX3D_146338_140325102(LOC16, ((NI) 2), -(LOC17));
	nimln(89, "mat_transform.nim");
	LOC18 = (NF*)0;
	LOC18 = HEX5BHEX5D_146293_65709178(Result, ((NI) 1));
	LOC19 = (NF)0;
	LOC19 = y_131011_140325102(f0);
	HEX5BHEX5DHEX3D_146338_140325102(LOC18, ((NI) 2), -(LOC19));
	nimln(90, "mat_transform.nim");
	LOC20 = (NF*)0;
	LOC20 = HEX5BHEX5D_146293_65709178(Result, ((NI) 2));
	LOC21 = (NF)0;
	LOC21 = z_131025_140325102(f0);
	HEX5BHEX5DHEX3D_146338_140325102(LOC20, ((NI) 2), -(LOC21));
	nimln(91, "mat_transform.nim");
	LOC22 = (NF*)0;
	LOC22 = HEX5BHEX5D_146293_65709178(Result, ((NI) 3));
	LOC23 = (NF)0;
	LOC23 = dot_131225_140325102(s0, eye0);
	HEX5BHEX5DHEX3D_146338_140325102(LOC22, ((NI) 0), -(LOC23));
	nimln(92, "mat_transform.nim");
	LOC24 = (NF*)0;
	LOC24 = HEX5BHEX5D_146293_65709178(Result, ((NI) 3));
	LOC25 = (NF)0;
	LOC25 = dot_131225_140325102(u0, eye0);
	HEX5BHEX5DHEX3D_146338_140325102(LOC24, ((NI) 1), -(LOC25));
	nimln(93, "mat_transform.nim");
	LOC26 = (NF*)0;
	LOC26 = HEX5BHEX5D_146293_65709178(Result, ((NI) 3));
	LOC27 = (NF)0;
	LOC27 = dot_131225_140325102(f0, eye0);
	HEX5BHEX5DHEX3D_146338_140325102(LOC26, ((NI) 2), LOC27);
	popFrame();
}

N_NIMCALL(void, lookat_147811_695648071)(TY129056 eye0, TY129056 center0, TY129056 up0, TY135594 Result) {
	nimfr("lookAt", "mat_transform.nim")
	nimln(124, "mat_transform.nim");
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI135594));
	lookatrh_147826_695648071(eye0, center0, up0, Result);
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, glm_mat_transformInit000)(void) {
	nimfr("mat_transform", "mat_transform.nim")
	nimln(126, "mat_transform.nim");
	{
		TY129056 LOC5;
		TY129056 LOC6;
		TY129056 LOC7;
		TY129056 LOC8;
		TY129056 LOC9;
		TY129056 LOC10;
		NimStringDesc* LOC11;
		if (!NIM_FALSE) goto LA3;
		nimln(127, "mat_transform.nim");
		chckNil((void*)m_145601_695648071);
		genericReset((void*)m_145601_695648071, (&NTI135594));
		mat4_135587_65709178(m_145601_695648071);
		nimln(128, "mat_transform.nim");
		memset((void*)LOC5, 0, sizeof(LOC5));
		vec3_130965_140325102(5.0000000000000000e+00, 5.0000000000000000e+00, 5.0000000000000000e+00, LOC5);
		chckNil((void*)nm_145959_695648071);
		genericReset((void*)nm_145959_695648071, (&NTI135594));
		translate_145615_695648071(m_145601_695648071, LOC5, nm_145959_695648071);
		nimln(129, "mat_transform.nim");
		memset((void*)LOC6, 0, sizeof(LOC6));
		vec3_130965_140325102(0.0, 1.0000000000000000e+00, 0.0, LOC6);
		chckNil((void*)rm_147370_695648071);
		genericReset((void*)rm_147370_695648071, (&NTI135594));
		rotate_145975_695648071(m_145601_695648071, LOC6, 7.8539816339744828e-01, rm_147370_695648071);
		nimln(130, "mat_transform.nim");
		memset((void*)LOC7, 0, sizeof(LOC7));
		vec3_130965_140325102(1.5000000000000000e+00, 5.0000000000000000e+00, 8.0000000000000000e+00, LOC7);
		chckNil((void*)sm_147565_695648071);
		genericReset((void*)sm_147565_695648071, (&NTI135594));
		scale_147384_695648071(m_145601_695648071, LOC7, sm_147565_695648071);
		nimln(131, "mat_transform.nim");
		chckNil((void*)v_147580_695648071);
		genericReset((void*)v_147580_695648071, (&NTI129288));
		vec4_135101_140325102(1.0000000000000000e+00, 0.0, 0.0, 1.0000000000000000e+00, v_147580_695648071);
		nimln(132, "mat_transform.nim");
		chckNil((void*)o_147773_695648071);
		genericReset((void*)o_147773_695648071, (&NTI135594));
		ortho_147584_695648071(-5.0000000000000000e+00, 5.0000000000000000e+00, -5.0000000000000000e+00, 5.0000000000000000e+00, 1.0000000000000000e-02, 1.0000000000000000e+02, o_147773_695648071);
		nimln(133, "mat_transform.nim");
		memset((void*)LOC8, 0, sizeof(LOC8));
		vec3_130965_140325102(0.0, 0.0, 0.0, LOC8);
		memset((void*)LOC9, 0, sizeof(LOC9));
		vec3_130965_140325102(5.0000000000000000e+01, 5.0000000000000000e+01, 0.0, LOC9);
		memset((void*)LOC10, 0, sizeof(LOC10));
		vec3_130965_140325102(0.0, 1.0000000000000000e+00, 0.0, LOC10);
		chckNil((void*)la_148384_695648071);
		genericReset((void*)la_148384_695648071, (&NTI135594));
		lookat_147811_695648071(LOC8, LOC9, LOC10, la_148384_695648071);
		nimln(134, "mat_transform.nim");
		LOC11 = (NimStringDesc*)0;
		LOC11 = HEX24_148386_65709178(la_148384_695648071);
		printf("%s\012", LOC11? (LOC11)->data:"nil");
		fflush(stdout);
	}
	LA3: ;
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, glm_mat_transformDatInit000)(void) {
}

