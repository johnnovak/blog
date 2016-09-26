/* Generated by Nim Compiler v0.14.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, i386, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/john/code/Nim/lib -o /media/sf_D_DRIVE/Work/Code/nim-raytracer/src/src/nimcache/stdlib_endians.o /media/sf_D_DRIVE/Work/Code/nim-raytracer/src/src/nimcache/stdlib_endians.c */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
N_NIMCALL(void, swapendian64_150005_837545836)(void* outp0, void* inp0);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_21201_1689653243)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, swapendian32_150013_837545836)(void* outp0, void* inp0);
N_NIMCALL(void, swapendian16_150021_837545836)(void* outp0, void* inp0);
static N_INLINE(void, littleendian64_150038_837545836)(void* outp0, void* inp0);
static N_INLINE(void, copymem_7285_1689653243)(void* dest0, void* source0, NI size0);
static N_INLINE(void, littleendian32_150042_837545836)(void* outp0, void* inp0);
static N_INLINE(void, littleendian16_150046_837545836)(void* outp0, void* inp0);
static N_INLINE(void, bigendian64_150050_837545836)(void* outp0, void* inp0);
static N_INLINE(void, bigendian32_150054_837545836)(void* outp0, void* inp0);
static N_INLINE(void, bigendian16_150058_837545836)(void* outp0, void* inp0);
extern TFrame* frameptr_18436_1689653243;

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

N_NIMCALL(void, swapendian64_150005_837545836)(void* outp0, void* inp0) {
	NCSTRING i0;
	NCSTRING o0;
	nimfr("swapEndian64", "endians.nim")
	nimln(16, "endians.nim");
	i0 = ((NCSTRING) (inp0));
	nimln(17, "endians.nim");
	o0 = ((NCSTRING) (outp0));
	nimln(18, "endians.nim");
	o0[((NI) 0)] = i0[((NI) 7)];
	nimln(19, "endians.nim");
	o0[((NI) 1)] = i0[((NI) 6)];
	nimln(20, "endians.nim");
	o0[((NI) 2)] = i0[((NI) 5)];
	nimln(21, "endians.nim");
	o0[((NI) 3)] = i0[((NI) 4)];
	nimln(22, "endians.nim");
	o0[((NI) 4)] = i0[((NI) 3)];
	nimln(23, "endians.nim");
	o0[((NI) 5)] = i0[((NI) 2)];
	nimln(24, "endians.nim");
	o0[((NI) 6)] = i0[((NI) 1)];
	nimln(25, "endians.nim");
	o0[((NI) 7)] = i0[((NI) 0)];
	popFrame();
}

N_NIMCALL(void, swapendian32_150013_837545836)(void* outp0, void* inp0) {
	NCSTRING i0;
	NCSTRING o0;
	nimfr("swapEndian32", "endians.nim")
	nimln(30, "endians.nim");
	i0 = ((NCSTRING) (inp0));
	nimln(31, "endians.nim");
	o0 = ((NCSTRING) (outp0));
	nimln(32, "endians.nim");
	o0[((NI) 0)] = i0[((NI) 3)];
	nimln(33, "endians.nim");
	o0[((NI) 1)] = i0[((NI) 2)];
	nimln(34, "endians.nim");
	o0[((NI) 2)] = i0[((NI) 1)];
	nimln(35, "endians.nim");
	o0[((NI) 3)] = i0[((NI) 0)];
	popFrame();
}

N_NIMCALL(void, swapendian16_150021_837545836)(void* outp0, void* inp0) {
	NCSTRING i0;
	NCSTRING o0;
	nimfr("swapEndian16", "endians.nim")
	nimln(41, "endians.nim");
	i0 = ((NCSTRING) (inp0));
	nimln(42, "endians.nim");
	o0 = ((NCSTRING) (outp0));
	nimln(43, "endians.nim");
	o0[((NI) 0)] = i0[((NI) 1)];
	nimln(44, "endians.nim");
	o0[((NI) 1)] = i0[((NI) 0)];
	popFrame();
}

static N_INLINE(void, copymem_7285_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, littleendian64_150038_837545836)(void* outp0, void* inp0) {
	nimfr("littleEndian64", "endians.nim")
	nimln(54, "endians.nim");
	copymem_7285_1689653243(outp0, inp0, ((NI) 8));
	popFrame();
}

static N_INLINE(void, littleendian32_150042_837545836)(void* outp0, void* inp0) {
	nimfr("littleEndian32", "endians.nim")
	nimln(55, "endians.nim");
	copymem_7285_1689653243(outp0, inp0, ((NI) 4));
	popFrame();
}

static N_INLINE(void, littleendian16_150046_837545836)(void* outp0, void* inp0) {
	nimfr("littleEndian16", "endians.nim")
	nimln(56, "endians.nim");
	copymem_7285_1689653243(outp0, inp0, ((NI) 2));
	popFrame();
}

static N_INLINE(void, bigendian64_150050_837545836)(void* outp0, void* inp0) {
	nimfr("bigEndian64", "endians.nim")
	nimln(57, "endians.nim");
	swapendian64_150005_837545836(outp0, inp0);
	popFrame();
}

static N_INLINE(void, bigendian32_150054_837545836)(void* outp0, void* inp0) {
	nimfr("bigEndian32", "endians.nim")
	nimln(58, "endians.nim");
	swapendian32_150013_837545836(outp0, inp0);
	popFrame();
}

static N_INLINE(void, bigendian16_150058_837545836)(void* outp0, void* inp0) {
	nimfr("bigEndian16", "endians.nim")
	nimln(59, "endians.nim");
	swapendian16_150021_837545836(outp0, inp0);
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_endiansInit000)(void) {
	nimfr("endians", "endians.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_endiansDatInit000)(void) {
}
