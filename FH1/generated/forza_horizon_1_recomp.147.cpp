#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_831D99D0"))) PPC_WEAK_FUNC(sub_831D99D0);
PPC_FUNC_IMPL(__imp__sub_831D99D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-12928
	ctx.r3.s64 = ctx.r11.s64 + -12928;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D99E0"))) PPC_WEAK_FUNC(sub_831D99E0);
PPC_FUNC_IMPL(__imp__sub_831D99E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9808
	ctx.r9.s64 = ctx.r11.s64 + -9808;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9A10"))) PPC_WEAK_FUNC(sub_831D9A10);
PPC_FUNC_IMPL(__imp__sub_831D9A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9840
	ctx.r9.s64 = ctx.r11.s64 + -9840;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9A40"))) PPC_WEAK_FUNC(sub_831D9A40);
PPC_FUNC_IMPL(__imp__sub_831D9A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9888
	ctx.r9.s64 = ctx.r11.s64 + -9888;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9A70"))) PPC_WEAK_FUNC(sub_831D9A70);
PPC_FUNC_IMPL(__imp__sub_831D9A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9856
	ctx.r9.s64 = ctx.r11.s64 + -9856;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9AA0"))) PPC_WEAK_FUNC(sub_831D9AA0);
PPC_FUNC_IMPL(__imp__sub_831D9AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-9872
	ctx.r10.s64 = ctx.r10.s64 + -9872;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9AC0"))) PPC_WEAK_FUNC(sub_831D9AC0);
PPC_FUNC_IMPL(__imp__sub_831D9AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-9904
	ctx.r10.s64 = ctx.r10.s64 + -9904;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9AE0"))) PPC_WEAK_FUNC(sub_831D9AE0);
PPC_FUNC_IMPL(__imp__sub_831D9AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-9824
	ctx.r10.s64 = ctx.r10.s64 + -9824;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9B00"))) PPC_WEAK_FUNC(sub_831D9B00);
PPC_FUNC_IMPL(__imp__sub_831D9B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r3,r11,-9768
	ctx.r3.s64 = ctx.r11.s64 + -9768;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9B10"))) PPC_WEAK_FUNC(sub_831D9B10);
PPC_FUNC_IMPL(__imp__sub_831D9B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r3,r11,-9792
	ctx.r3.s64 = ctx.r11.s64 + -9792;
	// bl 0x82c28ca8
	ctx.lr = 0x831D9B28;
	sub_82C28CA8(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-12976
	ctx.r3.s64 = ctx.r11.s64 + -12976;
	// bl 0x82a7e6b0
	ctx.lr = 0x831D9B34;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9B48"))) PPC_WEAK_FUNC(sub_831D9B48);
PPC_FUNC_IMPL(__imp__sub_831D9B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r3,r11,-9944
	ctx.r3.s64 = ctx.r11.s64 + -9944;
	// bl 0x82c28f08
	ctx.lr = 0x831D9B60;
	sub_82C28F08(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-12960
	ctx.r3.s64 = ctx.r11.s64 + -12960;
	// bl 0x82a7e6b0
	ctx.lr = 0x831D9B6C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9B80"))) PPC_WEAK_FUNC(sub_831D9B80);
PPC_FUNC_IMPL(__imp__sub_831D9B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r3,r11,-9924
	ctx.r3.s64 = ctx.r11.s64 + -9924;
	// bl 0x82c28f08
	ctx.lr = 0x831D9B98;
	sub_82C28F08(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-12944
	ctx.r3.s64 = ctx.r11.s64 + -12944;
	// bl 0x82a7e6b0
	ctx.lr = 0x831D9BA4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9BB8"))) PPC_WEAK_FUNC(sub_831D9BB8);
PPC_FUNC_IMPL(__imp__sub_831D9BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9552
	ctx.r9.s64 = ctx.r11.s64 + -9552;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9BE8"))) PPC_WEAK_FUNC(sub_831D9BE8);
PPC_FUNC_IMPL(__imp__sub_831D9BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9632
	ctx.r9.s64 = ctx.r11.s64 + -9632;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9C18"))) PPC_WEAK_FUNC(sub_831D9C18);
PPC_FUNC_IMPL(__imp__sub_831D9C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9680
	ctx.r9.s64 = ctx.r11.s64 + -9680;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9C48"))) PPC_WEAK_FUNC(sub_831D9C48);
PPC_FUNC_IMPL(__imp__sub_831D9C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9648
	ctx.r9.s64 = ctx.r11.s64 + -9648;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9C78"))) PPC_WEAK_FUNC(sub_831D9C78);
PPC_FUNC_IMPL(__imp__sub_831D9C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-9664
	ctx.r10.s64 = ctx.r10.s64 + -9664;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9C98"))) PPC_WEAK_FUNC(sub_831D9C98);
PPC_FUNC_IMPL(__imp__sub_831D9C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-9696
	ctx.r10.s64 = ctx.r10.s64 + -9696;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9CB8"))) PPC_WEAK_FUNC(sub_831D9CB8);
PPC_FUNC_IMPL(__imp__sub_831D9CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-12912
	ctx.r3.s64 = ctx.r11.s64 + -12912;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9CC8"))) PPC_WEAK_FUNC(sub_831D9CC8);
PPC_FUNC_IMPL(__imp__sub_831D9CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,-9616
	ctx.r11.s64 = ctx.r11.s64 + -9616;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v60,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v60 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x15));
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x45));
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x51));
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x54));
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9D08"))) PPC_WEAK_FUNC(sub_831D9D08);
PPC_FUNC_IMPL(__imp__sub_831D9D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-12896
	ctx.r3.s64 = ctx.r11.s64 + -12896;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9D18"))) PPC_WEAK_FUNC(sub_831D9D18);
PPC_FUNC_IMPL(__imp__sub_831D9D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9424
	ctx.r9.s64 = ctx.r11.s64 + -9424;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9D48"))) PPC_WEAK_FUNC(sub_831D9D48);
PPC_FUNC_IMPL(__imp__sub_831D9D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9456
	ctx.r9.s64 = ctx.r11.s64 + -9456;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9D78"))) PPC_WEAK_FUNC(sub_831D9D78);
PPC_FUNC_IMPL(__imp__sub_831D9D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9504
	ctx.r9.s64 = ctx.r11.s64 + -9504;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9DA8"))) PPC_WEAK_FUNC(sub_831D9DA8);
PPC_FUNC_IMPL(__imp__sub_831D9DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9472
	ctx.r9.s64 = ctx.r11.s64 + -9472;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9DD8"))) PPC_WEAK_FUNC(sub_831D9DD8);
PPC_FUNC_IMPL(__imp__sub_831D9DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-9488
	ctx.r10.s64 = ctx.r10.s64 + -9488;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9DF8"))) PPC_WEAK_FUNC(sub_831D9DF8);
PPC_FUNC_IMPL(__imp__sub_831D9DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-9520
	ctx.r10.s64 = ctx.r10.s64 + -9520;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9E18"))) PPC_WEAK_FUNC(sub_831D9E18);
PPC_FUNC_IMPL(__imp__sub_831D9E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-9440
	ctx.r10.s64 = ctx.r10.s64 + -9440;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9E38"))) PPC_WEAK_FUNC(sub_831D9E38);
PPC_FUNC_IMPL(__imp__sub_831D9E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-12880
	ctx.r3.s64 = ctx.r11.s64 + -12880;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9E48"))) PPC_WEAK_FUNC(sub_831D9E48);
PPC_FUNC_IMPL(__imp__sub_831D9E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9312
	ctx.r9.s64 = ctx.r11.s64 + -9312;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9E78"))) PPC_WEAK_FUNC(sub_831D9E78);
PPC_FUNC_IMPL(__imp__sub_831D9E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9328
	ctx.r9.s64 = ctx.r11.s64 + -9328;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9EA8"))) PPC_WEAK_FUNC(sub_831D9EA8);
PPC_FUNC_IMPL(__imp__sub_831D9EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9376
	ctx.r9.s64 = ctx.r11.s64 + -9376;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9ED8"))) PPC_WEAK_FUNC(sub_831D9ED8);
PPC_FUNC_IMPL(__imp__sub_831D9ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9344
	ctx.r9.s64 = ctx.r11.s64 + -9344;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9F08"))) PPC_WEAK_FUNC(sub_831D9F08);
PPC_FUNC_IMPL(__imp__sub_831D9F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-9360
	ctx.r10.s64 = ctx.r10.s64 + -9360;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9F28"))) PPC_WEAK_FUNC(sub_831D9F28);
PPC_FUNC_IMPL(__imp__sub_831D9F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-9392
	ctx.r10.s64 = ctx.r10.s64 + -9392;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9F48"))) PPC_WEAK_FUNC(sub_831D9F48);
PPC_FUNC_IMPL(__imp__sub_831D9F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9200
	ctx.r9.s64 = ctx.r11.s64 + -9200;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9F78"))) PPC_WEAK_FUNC(sub_831D9F78);
PPC_FUNC_IMPL(__imp__sub_831D9F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9216
	ctx.r9.s64 = ctx.r11.s64 + -9216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9FA8"))) PPC_WEAK_FUNC(sub_831D9FA8);
PPC_FUNC_IMPL(__imp__sub_831D9FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9264
	ctx.r9.s64 = ctx.r11.s64 + -9264;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9FD8"))) PPC_WEAK_FUNC(sub_831D9FD8);
PPC_FUNC_IMPL(__imp__sub_831D9FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9232
	ctx.r9.s64 = ctx.r11.s64 + -9232;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA008"))) PPC_WEAK_FUNC(sub_831DA008);
PPC_FUNC_IMPL(__imp__sub_831DA008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-9248
	ctx.r10.s64 = ctx.r10.s64 + -9248;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA028"))) PPC_WEAK_FUNC(sub_831DA028);
PPC_FUNC_IMPL(__imp__sub_831DA028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-9280
	ctx.r10.s64 = ctx.r10.s64 + -9280;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA048"))) PPC_WEAK_FUNC(sub_831DA048);
PPC_FUNC_IMPL(__imp__sub_831DA048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r11,r11,-4220
	ctx.r11.s64 = ctx.r11.s64 + -4220;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x831ecf1c
	ctx.lr = 0x831DA068;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r3,r10,-12864
	ctx.r3.s64 = ctx.r10.s64 + -12864;
	// bl 0x82a7e6b0
	ctx.lr = 0x831DA074;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA088"))) PPC_WEAK_FUNC(sub_831DA088);
PPC_FUNC_IMPL(__imp__sub_831DA088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-9184
	ctx.r3.s64 = ctx.r11.s64 + -9184;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82aa3e48
	ctx.lr = 0x831DA0A8;
	sub_82AA3E48(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r3,r10,-12840
	ctx.r3.s64 = ctx.r10.s64 + -12840;
	// bl 0x82a7e6b0
	ctx.lr = 0x831DA0B4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA0C8"))) PPC_WEAK_FUNC(sub_831DA0C8);
PPC_FUNC_IMPL(__imp__sub_831DA0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r11,r11,-4176
	ctx.r11.s64 = ctx.r11.s64 + -4176;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x831ecf1c
	ctx.lr = 0x831DA0E8;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r3,r10,-12824
	ctx.r3.s64 = ctx.r10.s64 + -12824;
	// bl 0x82a7e6b0
	ctx.lr = 0x831DA0F4;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA108"))) PPC_WEAK_FUNC(sub_831DA108);
PPC_FUNC_IMPL(__imp__sub_831DA108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,8447
	ctx.r4.s64 = 553582592;
	// li r3,24
	ctx.r3.s64 = 24;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x825576a8
	ctx.lr = 0x831DA124;
	sub_825576A8(ctx, base);
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-9168
	ctx.r9.s64 = ctx.r10.s64 + -9168;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// addi r3,r8,-12800
	ctx.r3.s64 = ctx.r8.s64 + -12800;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// bl 0x82a7e6b0
	ctx.lr = 0x831DA168;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA178"))) PPC_WEAK_FUNC(sub_831DA178);
PPC_FUNC_IMPL(__imp__sub_831DA178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA180"))) PPC_WEAK_FUNC(sub_831DA180);
PPC_FUNC_IMPL(__imp__sub_831DA180) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA188"))) PPC_WEAK_FUNC(sub_831DA188);
PPC_FUNC_IMPL(__imp__sub_831DA188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA190"))) PPC_WEAK_FUNC(sub_831DA190);
PPC_FUNC_IMPL(__imp__sub_831DA190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,4752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4752, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA1A8"))) PPC_WEAK_FUNC(sub_831DA1A8);
PPC_FUNC_IMPL(__imp__sub_831DA1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,4936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4936, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA1C0"))) PPC_WEAK_FUNC(sub_831DA1C0);
PPC_FUNC_IMPL(__imp__sub_831DA1C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA1C8"))) PPC_WEAK_FUNC(sub_831DA1C8);
PPC_FUNC_IMPL(__imp__sub_831DA1C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA1D0"))) PPC_WEAK_FUNC(sub_831DA1D0);
PPC_FUNC_IMPL(__imp__sub_831DA1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,4776
	ctx.r3.s64 = ctx.r11.s64 + 4776;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA1E0"))) PPC_WEAK_FUNC(sub_831DA1E0);
PPC_FUNC_IMPL(__imp__sub_831DA1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,5084
	ctx.r3.s64 = ctx.r11.s64 + 5084;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA1F0"))) PPC_WEAK_FUNC(sub_831DA1F0);
PPC_FUNC_IMPL(__imp__sub_831DA1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,5180
	ctx.r3.s64 = ctx.r11.s64 + 5180;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA200"))) PPC_WEAK_FUNC(sub_831DA200);
PPC_FUNC_IMPL(__imp__sub_831DA200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,5092
	ctx.r3.s64 = ctx.r11.s64 + 5092;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA210"))) PPC_WEAK_FUNC(sub_831DA210);
PPC_FUNC_IMPL(__imp__sub_831DA210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,5372
	ctx.r3.s64 = ctx.r11.s64 + 5372;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA220"))) PPC_WEAK_FUNC(sub_831DA220);
PPC_FUNC_IMPL(__imp__sub_831DA220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,5576
	ctx.r3.s64 = ctx.r11.s64 + 5576;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA230"))) PPC_WEAK_FUNC(sub_831DA230);
PPC_FUNC_IMPL(__imp__sub_831DA230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,5584
	ctx.r3.s64 = ctx.r11.s64 + 5584;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA240"))) PPC_WEAK_FUNC(sub_831DA240);
PPC_FUNC_IMPL(__imp__sub_831DA240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,5368
	ctx.r3.s64 = ctx.r11.s64 + 5368;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA250"))) PPC_WEAK_FUNC(sub_831DA250);
PPC_FUNC_IMPL(__imp__sub_831DA250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,5704
	ctx.r3.s64 = ctx.r11.s64 + 5704;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA260"))) PPC_WEAK_FUNC(sub_831DA260);
PPC_FUNC_IMPL(__imp__sub_831DA260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,5680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5680, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA278"))) PPC_WEAK_FUNC(sub_831DA278);
PPC_FUNC_IMPL(__imp__sub_831DA278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,5744
	ctx.r31.s64 = ctx.r11.s64 + 5744;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82496628
	ctx.lr = 0x831DA2A4;
	sub_82496628(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x831DA2AC;
	sub_823FD208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA2C0"))) PPC_WEAK_FUNC(sub_831DA2C0);
PPC_FUNC_IMPL(__imp__sub_831DA2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,6080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6080, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA2D8"))) PPC_WEAK_FUNC(sub_831DA2D8);
PPC_FUNC_IMPL(__imp__sub_831DA2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,5984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5984, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA2F0"))) PPC_WEAK_FUNC(sub_831DA2F0);
PPC_FUNC_IMPL(__imp__sub_831DA2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,5868
	ctx.r3.s64 = ctx.r11.s64 + 5868;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA300"))) PPC_WEAK_FUNC(sub_831DA300);
PPC_FUNC_IMPL(__imp__sub_831DA300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,5844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5844, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA318"))) PPC_WEAK_FUNC(sub_831DA318);
PPC_FUNC_IMPL(__imp__sub_831DA318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,6552
	ctx.r3.s64 = ctx.r11.s64 + 6552;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA328"))) PPC_WEAK_FUNC(sub_831DA328);
PPC_FUNC_IMPL(__imp__sub_831DA328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,6568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA340"))) PPC_WEAK_FUNC(sub_831DA340);
PPC_FUNC_IMPL(__imp__sub_831DA340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,6164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6164, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA358"))) PPC_WEAK_FUNC(sub_831DA358);
PPC_FUNC_IMPL(__imp__sub_831DA358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,6332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA370"))) PPC_WEAK_FUNC(sub_831DA370);
PPC_FUNC_IMPL(__imp__sub_831DA370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,6232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6232, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA388"))) PPC_WEAK_FUNC(sub_831DA388);
PPC_FUNC_IMPL(__imp__sub_831DA388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,6208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA3A0"))) PPC_WEAK_FUNC(sub_831DA3A0);
PPC_FUNC_IMPL(__imp__sub_831DA3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,6244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6244, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA3B8"))) PPC_WEAK_FUNC(sub_831DA3B8);
PPC_FUNC_IMPL(__imp__sub_831DA3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,6320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA3D0"))) PPC_WEAK_FUNC(sub_831DA3D0);
PPC_FUNC_IMPL(__imp__sub_831DA3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,6580
	ctx.r3.s64 = ctx.r11.s64 + 6580;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA3E0"))) PPC_WEAK_FUNC(sub_831DA3E0);
PPC_FUNC_IMPL(__imp__sub_831DA3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,6596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6596, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA3F8"))) PPC_WEAK_FUNC(sub_831DA3F8);
PPC_FUNC_IMPL(__imp__sub_831DA3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,6344
	ctx.r3.s64 = ctx.r11.s64 + 6344;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA408"))) PPC_WEAK_FUNC(sub_831DA408);
PPC_FUNC_IMPL(__imp__sub_831DA408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,6720
	ctx.r3.s64 = ctx.r11.s64 + 6720;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA418"))) PPC_WEAK_FUNC(sub_831DA418);
PPC_FUNC_IMPL(__imp__sub_831DA418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,6832
	ctx.r3.s64 = ctx.r11.s64 + 6832;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA428"))) PPC_WEAK_FUNC(sub_831DA428);
PPC_FUNC_IMPL(__imp__sub_831DA428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,6848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6848, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA440"))) PPC_WEAK_FUNC(sub_831DA440);
PPC_FUNC_IMPL(__imp__sub_831DA440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,6992
	ctx.r3.s64 = ctx.r11.s64 + 6992;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA450"))) PPC_WEAK_FUNC(sub_831DA450);
PPC_FUNC_IMPL(__imp__sub_831DA450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA458"))) PPC_WEAK_FUNC(sub_831DA458);
PPC_FUNC_IMPL(__imp__sub_831DA458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,9616
	ctx.r3.s64 = ctx.r11.s64 + 9616;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA468"))) PPC_WEAK_FUNC(sub_831DA468);
PPC_FUNC_IMPL(__imp__sub_831DA468) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA470"))) PPC_WEAK_FUNC(sub_831DA470);
PPC_FUNC_IMPL(__imp__sub_831DA470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA478"))) PPC_WEAK_FUNC(sub_831DA478);
PPC_FUNC_IMPL(__imp__sub_831DA478) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA480"))) PPC_WEAK_FUNC(sub_831DA480);
PPC_FUNC_IMPL(__imp__sub_831DA480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA498"))) PPC_WEAK_FUNC(sub_831DA498);
PPC_FUNC_IMPL(__imp__sub_831DA498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,9304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9304, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA4B0"))) PPC_WEAK_FUNC(sub_831DA4B0);
PPC_FUNC_IMPL(__imp__sub_831DA4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA4C8"))) PPC_WEAK_FUNC(sub_831DA4C8);
PPC_FUNC_IMPL(__imp__sub_831DA4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA4E0"))) PPC_WEAK_FUNC(sub_831DA4E0);
PPC_FUNC_IMPL(__imp__sub_831DA4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,9516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9516, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA4F8"))) PPC_WEAK_FUNC(sub_831DA4F8);
PPC_FUNC_IMPL(__imp__sub_831DA4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,9280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA510"))) PPC_WEAK_FUNC(sub_831DA510);
PPC_FUNC_IMPL(__imp__sub_831DA510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7420(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7420, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA528"))) PPC_WEAK_FUNC(sub_831DA528);
PPC_FUNC_IMPL(__imp__sub_831DA528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA540"))) PPC_WEAK_FUNC(sub_831DA540);
PPC_FUNC_IMPL(__imp__sub_831DA540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,9388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9388, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA558"))) PPC_WEAK_FUNC(sub_831DA558);
PPC_FUNC_IMPL(__imp__sub_831DA558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8304, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA570"))) PPC_WEAK_FUNC(sub_831DA570);
PPC_FUNC_IMPL(__imp__sub_831DA570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA588"))) PPC_WEAK_FUNC(sub_831DA588);
PPC_FUNC_IMPL(__imp__sub_831DA588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8496, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA5A0"))) PPC_WEAK_FUNC(sub_831DA5A0);
PPC_FUNC_IMPL(__imp__sub_831DA5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA5B8"))) PPC_WEAK_FUNC(sub_831DA5B8);
PPC_FUNC_IMPL(__imp__sub_831DA5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7820, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA5D0"))) PPC_WEAK_FUNC(sub_831DA5D0);
PPC_FUNC_IMPL(__imp__sub_831DA5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7516, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA5E8"))) PPC_WEAK_FUNC(sub_831DA5E8);
PPC_FUNC_IMPL(__imp__sub_831DA5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7636, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA600"))) PPC_WEAK_FUNC(sub_831DA600);
PPC_FUNC_IMPL(__imp__sub_831DA600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7492, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA618"))) PPC_WEAK_FUNC(sub_831DA618);
PPC_FUNC_IMPL(__imp__sub_831DA618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7468, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA630"))) PPC_WEAK_FUNC(sub_831DA630);
PPC_FUNC_IMPL(__imp__sub_831DA630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,9316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA648"))) PPC_WEAK_FUNC(sub_831DA648);
PPC_FUNC_IMPL(__imp__sub_831DA648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,9340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA660"))) PPC_WEAK_FUNC(sub_831DA660);
PPC_FUNC_IMPL(__imp__sub_831DA660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8388, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA678"))) PPC_WEAK_FUNC(sub_831DA678);
PPC_FUNC_IMPL(__imp__sub_831DA678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA690"))) PPC_WEAK_FUNC(sub_831DA690);
PPC_FUNC_IMPL(__imp__sub_831DA690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7680, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA6A8"))) PPC_WEAK_FUNC(sub_831DA6A8);
PPC_FUNC_IMPL(__imp__sub_831DA6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,9364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9364, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA6C0"))) PPC_WEAK_FUNC(sub_831DA6C0);
PPC_FUNC_IMPL(__imp__sub_831DA6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,9256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9256, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA6D8"))) PPC_WEAK_FUNC(sub_831DA6D8);
PPC_FUNC_IMPL(__imp__sub_831DA6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7248, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA6F0"))) PPC_WEAK_FUNC(sub_831DA6F0);
PPC_FUNC_IMPL(__imp__sub_831DA6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA708"))) PPC_WEAK_FUNC(sub_831DA708);
PPC_FUNC_IMPL(__imp__sub_831DA708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA720"))) PPC_WEAK_FUNC(sub_831DA720);
PPC_FUNC_IMPL(__imp__sub_831DA720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8572, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA738"))) PPC_WEAK_FUNC(sub_831DA738);
PPC_FUNC_IMPL(__imp__sub_831DA738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA750"))) PPC_WEAK_FUNC(sub_831DA750);
PPC_FUNC_IMPL(__imp__sub_831DA750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8424, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA768"))) PPC_WEAK_FUNC(sub_831DA768);
PPC_FUNC_IMPL(__imp__sub_831DA768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,9064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9064, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA780"))) PPC_WEAK_FUNC(sub_831DA780);
PPC_FUNC_IMPL(__imp__sub_831DA780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8544, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA798"))) PPC_WEAK_FUNC(sub_831DA798);
PPC_FUNC_IMPL(__imp__sub_831DA798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,9232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9232, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA7B0"))) PPC_WEAK_FUNC(sub_831DA7B0);
PPC_FUNC_IMPL(__imp__sub_831DA7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8620, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA7C8"))) PPC_WEAK_FUNC(sub_831DA7C8);
PPC_FUNC_IMPL(__imp__sub_831DA7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7772, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA7E0"))) PPC_WEAK_FUNC(sub_831DA7E0);
PPC_FUNC_IMPL(__imp__sub_831DA7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7748, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA7F8"))) PPC_WEAK_FUNC(sub_831DA7F8);
PPC_FUNC_IMPL(__imp__sub_831DA7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7888, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA810"))) PPC_WEAK_FUNC(sub_831DA810);
PPC_FUNC_IMPL(__imp__sub_831DA810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7796, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA828"))) PPC_WEAK_FUNC(sub_831DA828);
PPC_FUNC_IMPL(__imp__sub_831DA828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7612(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7612, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA840"))) PPC_WEAK_FUNC(sub_831DA840);
PPC_FUNC_IMPL(__imp__sub_831DA840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7844, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA858"))) PPC_WEAK_FUNC(sub_831DA858);
PPC_FUNC_IMPL(__imp__sub_831DA858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA870"))) PPC_WEAK_FUNC(sub_831DA870);
PPC_FUNC_IMPL(__imp__sub_831DA870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8448, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA888"))) PPC_WEAK_FUNC(sub_831DA888);
PPC_FUNC_IMPL(__imp__sub_831DA888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8596, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA8A0"))) PPC_WEAK_FUNC(sub_831DA8A0);
PPC_FUNC_IMPL(__imp__sub_831DA8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7912, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA8B8"))) PPC_WEAK_FUNC(sub_831DA8B8);
PPC_FUNC_IMPL(__imp__sub_831DA8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA8D0"))) PPC_WEAK_FUNC(sub_831DA8D0);
PPC_FUNC_IMPL(__imp__sub_831DA8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,9444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA8E8"))) PPC_WEAK_FUNC(sub_831DA8E8);
PPC_FUNC_IMPL(__imp__sub_831DA8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8644(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8644, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA900"))) PPC_WEAK_FUNC(sub_831DA900);
PPC_FUNC_IMPL(__imp__sub_831DA900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA918"))) PPC_WEAK_FUNC(sub_831DA918);
PPC_FUNC_IMPL(__imp__sub_831DA918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,9492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9492, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA930"))) PPC_WEAK_FUNC(sub_831DA930);
PPC_FUNC_IMPL(__imp__sub_831DA930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,9468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9468, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA948"))) PPC_WEAK_FUNC(sub_831DA948);
PPC_FUNC_IMPL(__imp__sub_831DA948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA960"))) PPC_WEAK_FUNC(sub_831DA960);
PPC_FUNC_IMPL(__imp__sub_831DA960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8204, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA978"))) PPC_WEAK_FUNC(sub_831DA978);
PPC_FUNC_IMPL(__imp__sub_831DA978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA980"))) PPC_WEAK_FUNC(sub_831DA980);
PPC_FUNC_IMPL(__imp__sub_831DA980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA988"))) PPC_WEAK_FUNC(sub_831DA988);
PPC_FUNC_IMPL(__imp__sub_831DA988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,8472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8472, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA9A0"))) PPC_WEAK_FUNC(sub_831DA9A0);
PPC_FUNC_IMPL(__imp__sub_831DA9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,7140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7140, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA9B8"))) PPC_WEAK_FUNC(sub_831DA9B8);
PPC_FUNC_IMPL(__imp__sub_831DA9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,8568
	ctx.r3.s64 = ctx.r11.s64 + 8568;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA9C8"))) PPC_WEAK_FUNC(sub_831DA9C8);
PPC_FUNC_IMPL(__imp__sub_831DA9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,7704
	ctx.r3.s64 = ctx.r11.s64 + 7704;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA9E0"))) PPC_WEAK_FUNC(sub_831DA9E0);
PPC_FUNC_IMPL(__imp__sub_831DA9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,7540
	ctx.r3.s64 = ctx.r11.s64 + 7540;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA9F8"))) PPC_WEAK_FUNC(sub_831DA9F8);
PPC_FUNC_IMPL(__imp__sub_831DA9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,8176
	ctx.r3.s64 = ctx.r11.s64 + 8176;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAA10"))) PPC_WEAK_FUNC(sub_831DAA10);
PPC_FUNC_IMPL(__imp__sub_831DAA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r30,7
	ctx.r30.s64 = 7;
	// addi r11,r11,7952
	ctx.r11.s64 = ctx.r11.s64 + 7952;
	// addi r31,r11,224
	ctx.r31.s64 = ctx.r11.s64 + 224;
loc_831DAA34:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82411478
	ctx.lr = 0x831DAA48;
	sub_82411478(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831daa34
	if (!ctx.cr0.lt) goto loc_831DAA34;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAA68"))) PPC_WEAK_FUNC(sub_831DAA68);
PPC_FUNC_IMPL(__imp__sub_831DAA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,7392
	ctx.r3.s64 = ctx.r11.s64 + 7392;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAA80"))) PPC_WEAK_FUNC(sub_831DAA80);
PPC_FUNC_IMPL(__imp__sub_831DAA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,9416
	ctx.r3.s64 = ctx.r11.s64 + 9416;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAA98"))) PPC_WEAK_FUNC(sub_831DAA98);
PPC_FUNC_IMPL(__imp__sub_831DAA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,7112
	ctx.r3.s64 = ctx.r11.s64 + 7112;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAAB0"))) PPC_WEAK_FUNC(sub_831DAAB0);
PPC_FUNC_IMPL(__imp__sub_831DAAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,7320
	ctx.r3.s64 = ctx.r11.s64 + 7320;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAAC8"))) PPC_WEAK_FUNC(sub_831DAAC8);
PPC_FUNC_IMPL(__imp__sub_831DAAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,7584
	ctx.r3.s64 = ctx.r11.s64 + 7584;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAAE0"))) PPC_WEAK_FUNC(sub_831DAAE0);
PPC_FUNC_IMPL(__imp__sub_831DAAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,8240
	ctx.r3.s64 = ctx.r11.s64 + 8240;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAAF8"))) PPC_WEAK_FUNC(sub_831DAAF8);
PPC_FUNC_IMPL(__imp__sub_831DAAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,9808
	ctx.r3.s64 = ctx.r11.s64 + 9808;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAB08"))) PPC_WEAK_FUNC(sub_831DAB08);
PPC_FUNC_IMPL(__imp__sub_831DAB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,7732
	ctx.r31.s64 = ctx.r11.s64 + 7732;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d9c2d8
	ctx.lr = 0x831DAB34;
	sub_82D9C2D8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x831DAB3C;
	sub_823FD208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAB50"))) PPC_WEAK_FUNC(sub_831DAB50);
PPC_FUNC_IMPL(__imp__sub_831DAB50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAB58"))) PPC_WEAK_FUNC(sub_831DAB58);
PPC_FUNC_IMPL(__imp__sub_831DAB58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAB60"))) PPC_WEAK_FUNC(sub_831DAB60);
PPC_FUNC_IMPL(__imp__sub_831DAB60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAB68"))) PPC_WEAK_FUNC(sub_831DAB68);
PPC_FUNC_IMPL(__imp__sub_831DAB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,10088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10088, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAB80"))) PPC_WEAK_FUNC(sub_831DAB80);
PPC_FUNC_IMPL(__imp__sub_831DAB80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAB88"))) PPC_WEAK_FUNC(sub_831DAB88);
PPC_FUNC_IMPL(__imp__sub_831DAB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,10340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DABA0"))) PPC_WEAK_FUNC(sub_831DABA0);
PPC_FUNC_IMPL(__imp__sub_831DABA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,10180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10180, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DABB8"))) PPC_WEAK_FUNC(sub_831DABB8);
PPC_FUNC_IMPL(__imp__sub_831DABB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,10316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DABD0"))) PPC_WEAK_FUNC(sub_831DABD0);
PPC_FUNC_IMPL(__imp__sub_831DABD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,10452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10452, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DABE8"))) PPC_WEAK_FUNC(sub_831DABE8);
PPC_FUNC_IMPL(__imp__sub_831DABE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,10328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAC00"))) PPC_WEAK_FUNC(sub_831DAC00);
PPC_FUNC_IMPL(__imp__sub_831DAC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,10128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAC18"))) PPC_WEAK_FUNC(sub_831DAC18);
PPC_FUNC_IMPL(__imp__sub_831DAC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,10168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10168, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAC30"))) PPC_WEAK_FUNC(sub_831DAC30);
PPC_FUNC_IMPL(__imp__sub_831DAC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,9936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9936, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAC48"))) PPC_WEAK_FUNC(sub_831DAC48);
PPC_FUNC_IMPL(__imp__sub_831DAC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,9924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9924, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAC60"))) PPC_WEAK_FUNC(sub_831DAC60);
PPC_FUNC_IMPL(__imp__sub_831DAC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,10076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10076, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAC78"))) PPC_WEAK_FUNC(sub_831DAC78);
PPC_FUNC_IMPL(__imp__sub_831DAC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,10380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10380, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAC90"))) PPC_WEAK_FUNC(sub_831DAC90);
PPC_FUNC_IMPL(__imp__sub_831DAC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,10620
	ctx.r3.s64 = ctx.r11.s64 + 10620;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DACA0"))) PPC_WEAK_FUNC(sub_831DACA0);
PPC_FUNC_IMPL(__imp__sub_831DACA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,10636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10636, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DACB8"))) PPC_WEAK_FUNC(sub_831DACB8);
PPC_FUNC_IMPL(__imp__sub_831DACB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DACC0"))) PPC_WEAK_FUNC(sub_831DACC0);
PPC_FUNC_IMPL(__imp__sub_831DACC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,10392
	ctx.r3.s64 = ctx.r11.s64 + 10392;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DACD0"))) PPC_WEAK_FUNC(sub_831DACD0);
PPC_FUNC_IMPL(__imp__sub_831DACD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,19064
	ctx.r3.s64 = ctx.r11.s64 + 19064;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DACE0"))) PPC_WEAK_FUNC(sub_831DACE0);
PPC_FUNC_IMPL(__imp__sub_831DACE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,10044
	ctx.r3.s64 = ctx.r11.s64 + 10044;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DACF0"))) PPC_WEAK_FUNC(sub_831DACF0);
PPC_FUNC_IMPL(__imp__sub_831DACF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,9860
	ctx.r3.s64 = ctx.r11.s64 + 9860;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAD08"))) PPC_WEAK_FUNC(sub_831DAD08);
PPC_FUNC_IMPL(__imp__sub_831DAD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10208
	ctx.r3.s64 = ctx.r11.s64 + 10208;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAD20"))) PPC_WEAK_FUNC(sub_831DAD20);
PPC_FUNC_IMPL(__imp__sub_831DAD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10352
	ctx.r3.s64 = ctx.r11.s64 + 10352;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAD38"))) PPC_WEAK_FUNC(sub_831DAD38);
PPC_FUNC_IMPL(__imp__sub_831DAD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10424
	ctx.r3.s64 = ctx.r11.s64 + 10424;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAD50"))) PPC_WEAK_FUNC(sub_831DAD50);
PPC_FUNC_IMPL(__imp__sub_831DAD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10000
	ctx.r3.s64 = ctx.r11.s64 + 10000;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAD68"))) PPC_WEAK_FUNC(sub_831DAD68);
PPC_FUNC_IMPL(__imp__sub_831DAD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10048
	ctx.r3.s64 = ctx.r11.s64 + 10048;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAD80"))) PPC_WEAK_FUNC(sub_831DAD80);
PPC_FUNC_IMPL(__imp__sub_831DAD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10140
	ctx.r3.s64 = ctx.r11.s64 + 10140;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAD98"))) PPC_WEAK_FUNC(sub_831DAD98);
PPC_FUNC_IMPL(__imp__sub_831DAD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10536
	ctx.r3.s64 = ctx.r11.s64 + 10536;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DADB0"))) PPC_WEAK_FUNC(sub_831DADB0);
PPC_FUNC_IMPL(__imp__sub_831DADB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10396
	ctx.r3.s64 = ctx.r11.s64 + 10396;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DADC8"))) PPC_WEAK_FUNC(sub_831DADC8);
PPC_FUNC_IMPL(__imp__sub_831DADC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,10656
	ctx.r31.s64 = ctx.r11.s64 + 10656;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,3172
	ctx.r3.s64 = ctx.r31.s64 + 3172;
	// bl 0x82411478
	ctx.lr = 0x831DADF0;
	sub_82411478(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,3084
	ctx.r3.s64 = ctx.r31.s64 + 3084;
	// bl 0x82411478
	ctx.lr = 0x831DAE00;
	sub_82411478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAE18"))) PPC_WEAK_FUNC(sub_831DAE18);
PPC_FUNC_IMPL(__imp__sub_831DAE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,10236
	ctx.r3.s64 = ctx.r11.s64 + 10236;
	// b 0x825091f0
	sub_825091F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAE28"))) PPC_WEAK_FUNC(sub_831DAE28);
PPC_FUNC_IMPL(__imp__sub_831DAE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,10028
	ctx.r31.s64 = ctx.r11.s64 + 10028;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x825019a0
	ctx.lr = 0x831DAE54;
	sub_825019A0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x831DAE5C;
	sub_823FD208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAE70"))) PPC_WEAK_FUNC(sub_831DAE70);
PPC_FUNC_IMPL(__imp__sub_831DAE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19456, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAE88"))) PPC_WEAK_FUNC(sub_831DAE88);
PPC_FUNC_IMPL(__imp__sub_831DAE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAEA0"))) PPC_WEAK_FUNC(sub_831DAEA0);
PPC_FUNC_IMPL(__imp__sub_831DAEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19960, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAEB8"))) PPC_WEAK_FUNC(sub_831DAEB8);
PPC_FUNC_IMPL(__imp__sub_831DAEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19400, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAED0"))) PPC_WEAK_FUNC(sub_831DAED0);
PPC_FUNC_IMPL(__imp__sub_831DAED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAEE8"))) PPC_WEAK_FUNC(sub_831DAEE8);
PPC_FUNC_IMPL(__imp__sub_831DAEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAF00"))) PPC_WEAK_FUNC(sub_831DAF00);
PPC_FUNC_IMPL(__imp__sub_831DAF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAF18"))) PPC_WEAK_FUNC(sub_831DAF18);
PPC_FUNC_IMPL(__imp__sub_831DAF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19984, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAF30"))) PPC_WEAK_FUNC(sub_831DAF30);
PPC_FUNC_IMPL(__imp__sub_831DAF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19480, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAF48"))) PPC_WEAK_FUNC(sub_831DAF48);
PPC_FUNC_IMPL(__imp__sub_831DAF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19792, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAF60"))) PPC_WEAK_FUNC(sub_831DAF60);
PPC_FUNC_IMPL(__imp__sub_831DAF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,20032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20032, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAF78"))) PPC_WEAK_FUNC(sub_831DAF78);
PPC_FUNC_IMPL(__imp__sub_831DAF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,20176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAF90"))) PPC_WEAK_FUNC(sub_831DAF90);
PPC_FUNC_IMPL(__imp__sub_831DAF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,20152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAFA8"))) PPC_WEAK_FUNC(sub_831DAFA8);
PPC_FUNC_IMPL(__imp__sub_831DAFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,20224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAFC0"))) PPC_WEAK_FUNC(sub_831DAFC0);
PPC_FUNC_IMPL(__imp__sub_831DAFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19768, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAFD8"))) PPC_WEAK_FUNC(sub_831DAFD8);
PPC_FUNC_IMPL(__imp__sub_831DAFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,20056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20056, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DAFF0"))) PPC_WEAK_FUNC(sub_831DAFF0);
PPC_FUNC_IMPL(__imp__sub_831DAFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19192, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB008"))) PPC_WEAK_FUNC(sub_831DB008);
PPC_FUNC_IMPL(__imp__sub_831DB008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19840, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB020"))) PPC_WEAK_FUNC(sub_831DB020);
PPC_FUNC_IMPL(__imp__sub_831DB020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19720, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB038"))) PPC_WEAK_FUNC(sub_831DB038);
PPC_FUNC_IMPL(__imp__sub_831DB038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19168, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB050"))) PPC_WEAK_FUNC(sub_831DB050);
PPC_FUNC_IMPL(__imp__sub_831DB050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB068"))) PPC_WEAK_FUNC(sub_831DB068);
PPC_FUNC_IMPL(__imp__sub_831DB068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,20128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB080"))) PPC_WEAK_FUNC(sub_831DB080);
PPC_FUNC_IMPL(__imp__sub_831DB080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB098"))) PPC_WEAK_FUNC(sub_831DB098);
PPC_FUNC_IMPL(__imp__sub_831DB098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19624, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB0B0"))) PPC_WEAK_FUNC(sub_831DB0B0);
PPC_FUNC_IMPL(__imp__sub_831DB0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB0C8"))) PPC_WEAK_FUNC(sub_831DB0C8);
PPC_FUNC_IMPL(__imp__sub_831DB0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB0E0"))) PPC_WEAK_FUNC(sub_831DB0E0);
PPC_FUNC_IMPL(__imp__sub_831DB0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19504, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB0F8"))) PPC_WEAK_FUNC(sub_831DB0F8);
PPC_FUNC_IMPL(__imp__sub_831DB0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19648, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB110"))) PPC_WEAK_FUNC(sub_831DB110);
PPC_FUNC_IMPL(__imp__sub_831DB110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,20080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20080, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB128"))) PPC_WEAK_FUNC(sub_831DB128);
PPC_FUNC_IMPL(__imp__sub_831DB128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,20200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB140"))) PPC_WEAK_FUNC(sub_831DB140);
PPC_FUNC_IMPL(__imp__sub_831DB140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19528, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB158"))) PPC_WEAK_FUNC(sub_831DB158);
PPC_FUNC_IMPL(__imp__sub_831DB158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19552, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB170"))) PPC_WEAK_FUNC(sub_831DB170);
PPC_FUNC_IMPL(__imp__sub_831DB170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19696, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB188"))) PPC_WEAK_FUNC(sub_831DB188);
PPC_FUNC_IMPL(__imp__sub_831DB188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,20008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20008, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB1A0"))) PPC_WEAK_FUNC(sub_831DB1A0);
PPC_FUNC_IMPL(__imp__sub_831DB1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19304, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB1B8"))) PPC_WEAK_FUNC(sub_831DB1B8);
PPC_FUNC_IMPL(__imp__sub_831DB1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19744, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB1D0"))) PPC_WEAK_FUNC(sub_831DB1D0);
PPC_FUNC_IMPL(__imp__sub_831DB1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,20104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB1E8"))) PPC_WEAK_FUNC(sub_831DB1E8);
PPC_FUNC_IMPL(__imp__sub_831DB1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19672, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB200"))) PPC_WEAK_FUNC(sub_831DB200);
PPC_FUNC_IMPL(__imp__sub_831DB200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,19816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19816, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB218"))) PPC_WEAK_FUNC(sub_831DB218);
PPC_FUNC_IMPL(__imp__sub_831DB218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,19148
	ctx.r3.s64 = ctx.r11.s64 + 19148;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB228"))) PPC_WEAK_FUNC(sub_831DB228);
PPC_FUNC_IMPL(__imp__sub_831DB228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,20296
	ctx.r3.s64 = ctx.r11.s64 + 20296;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB238"))) PPC_WEAK_FUNC(sub_831DB238);
PPC_FUNC_IMPL(__imp__sub_831DB238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,20312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20312, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB250"))) PPC_WEAK_FUNC(sub_831DB250);
PPC_FUNC_IMPL(__imp__sub_831DB250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,20324
	ctx.r3.s64 = ctx.r11.s64 + 20324;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB260"))) PPC_WEAK_FUNC(sub_831DB260);
PPC_FUNC_IMPL(__imp__sub_831DB260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,20340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB278"))) PPC_WEAK_FUNC(sub_831DB278);
PPC_FUNC_IMPL(__imp__sub_831DB278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,20352
	ctx.r3.s64 = ctx.r11.s64 + 20352;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB288"))) PPC_WEAK_FUNC(sub_831DB288);
PPC_FUNC_IMPL(__imp__sub_831DB288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,20368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20368, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB2A0"))) PPC_WEAK_FUNC(sub_831DB2A0);
PPC_FUNC_IMPL(__imp__sub_831DB2A0) {
	PPC_FUNC_PROLOGUE();
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r11,r11,20480
	ctx.r11.s64 = ctx.r11.s64 + 20480;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// addi r10,r10,18812
	ctx.r10.s64 = ctx.r10.s64 + 18812;
loc_831DB2BC:
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r10.u32);
	// bdnz 0x831db2bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831DB2BC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB2D8"))) PPC_WEAK_FUNC(sub_831DB2D8);
PPC_FUNC_IMPL(__imp__sub_831DB2D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB2E0"))) PPC_WEAK_FUNC(sub_831DB2E0);
PPC_FUNC_IMPL(__imp__sub_831DB2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,20912
	ctx.r3.s64 = ctx.r11.s64 + 20912;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB2F0"))) PPC_WEAK_FUNC(sub_831DB2F0);
PPC_FUNC_IMPL(__imp__sub_831DB2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21336
	ctx.r3.s64 = ctx.r11.s64 + 21336;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB300"))) PPC_WEAK_FUNC(sub_831DB300);
PPC_FUNC_IMPL(__imp__sub_831DB300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,21072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21072, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB318"))) PPC_WEAK_FUNC(sub_831DB318);
PPC_FUNC_IMPL(__imp__sub_831DB318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,21224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB330"))) PPC_WEAK_FUNC(sub_831DB330);
PPC_FUNC_IMPL(__imp__sub_831DB330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,21148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21148, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB348"))) PPC_WEAK_FUNC(sub_831DB348);
PPC_FUNC_IMPL(__imp__sub_831DB348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,21124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB360"))) PPC_WEAK_FUNC(sub_831DB360);
PPC_FUNC_IMPL(__imp__sub_831DB360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,21340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB378"))) PPC_WEAK_FUNC(sub_831DB378);
PPC_FUNC_IMPL(__imp__sub_831DB378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,21200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB390"))) PPC_WEAK_FUNC(sub_831DB390);
PPC_FUNC_IMPL(__imp__sub_831DB390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,21308
	ctx.r3.s64 = ctx.r11.s64 + 21308;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB3A8"))) PPC_WEAK_FUNC(sub_831DB3A8);
PPC_FUNC_IMPL(__imp__sub_831DB3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,21172
	ctx.r3.s64 = ctx.r11.s64 + 21172;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB3C0"))) PPC_WEAK_FUNC(sub_831DB3C0);
PPC_FUNC_IMPL(__imp__sub_831DB3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,21096
	ctx.r3.s64 = ctx.r11.s64 + 21096;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB3D8"))) PPC_WEAK_FUNC(sub_831DB3D8);
PPC_FUNC_IMPL(__imp__sub_831DB3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,21464
	ctx.r3.s64 = ctx.r11.s64 + 21464;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB3F0"))) PPC_WEAK_FUNC(sub_831DB3F0);
PPC_FUNC_IMPL(__imp__sub_831DB3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,21364
	ctx.r3.s64 = ctx.r11.s64 + 21364;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB408"))) PPC_WEAK_FUNC(sub_831DB408);
PPC_FUNC_IMPL(__imp__sub_831DB408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,21280
	ctx.r3.s64 = ctx.r11.s64 + 21280;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB420"))) PPC_WEAK_FUNC(sub_831DB420);
PPC_FUNC_IMPL(__imp__sub_831DB420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,21804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21804, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB438"))) PPC_WEAK_FUNC(sub_831DB438);
PPC_FUNC_IMPL(__imp__sub_831DB438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22300
	ctx.r3.s64 = ctx.r11.s64 + 22300;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB448"))) PPC_WEAK_FUNC(sub_831DB448);
PPC_FUNC_IMPL(__imp__sub_831DB448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB460"))) PPC_WEAK_FUNC(sub_831DB460);
PPC_FUNC_IMPL(__imp__sub_831DB460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22328
	ctx.r3.s64 = ctx.r11.s64 + 22328;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB470"))) PPC_WEAK_FUNC(sub_831DB470);
PPC_FUNC_IMPL(__imp__sub_831DB470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22344, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB488"))) PPC_WEAK_FUNC(sub_831DB488);
PPC_FUNC_IMPL(__imp__sub_831DB488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22356
	ctx.r3.s64 = ctx.r11.s64 + 22356;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB498"))) PPC_WEAK_FUNC(sub_831DB498);
PPC_FUNC_IMPL(__imp__sub_831DB498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22372, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB4B0"))) PPC_WEAK_FUNC(sub_831DB4B0);
PPC_FUNC_IMPL(__imp__sub_831DB4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22384
	ctx.r3.s64 = ctx.r11.s64 + 22384;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB4C0"))) PPC_WEAK_FUNC(sub_831DB4C0);
PPC_FUNC_IMPL(__imp__sub_831DB4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22400, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB4D8"))) PPC_WEAK_FUNC(sub_831DB4D8);
PPC_FUNC_IMPL(__imp__sub_831DB4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22412
	ctx.r3.s64 = ctx.r11.s64 + 22412;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB4E8"))) PPC_WEAK_FUNC(sub_831DB4E8);
PPC_FUNC_IMPL(__imp__sub_831DB4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB500"))) PPC_WEAK_FUNC(sub_831DB500);
PPC_FUNC_IMPL(__imp__sub_831DB500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22440
	ctx.r3.s64 = ctx.r11.s64 + 22440;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB510"))) PPC_WEAK_FUNC(sub_831DB510);
PPC_FUNC_IMPL(__imp__sub_831DB510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22456, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB528"))) PPC_WEAK_FUNC(sub_831DB528);
PPC_FUNC_IMPL(__imp__sub_831DB528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22468
	ctx.r3.s64 = ctx.r11.s64 + 22468;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB538"))) PPC_WEAK_FUNC(sub_831DB538);
PPC_FUNC_IMPL(__imp__sub_831DB538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22484, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB550"))) PPC_WEAK_FUNC(sub_831DB550);
PPC_FUNC_IMPL(__imp__sub_831DB550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22496
	ctx.r3.s64 = ctx.r11.s64 + 22496;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB560"))) PPC_WEAK_FUNC(sub_831DB560);
PPC_FUNC_IMPL(__imp__sub_831DB560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22512, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB578"))) PPC_WEAK_FUNC(sub_831DB578);
PPC_FUNC_IMPL(__imp__sub_831DB578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22524
	ctx.r3.s64 = ctx.r11.s64 + 22524;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB588"))) PPC_WEAK_FUNC(sub_831DB588);
PPC_FUNC_IMPL(__imp__sub_831DB588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22540, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB5A0"))) PPC_WEAK_FUNC(sub_831DB5A0);
PPC_FUNC_IMPL(__imp__sub_831DB5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22552
	ctx.r3.s64 = ctx.r11.s64 + 22552;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB5B0"))) PPC_WEAK_FUNC(sub_831DB5B0);
PPC_FUNC_IMPL(__imp__sub_831DB5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB5C8"))) PPC_WEAK_FUNC(sub_831DB5C8);
PPC_FUNC_IMPL(__imp__sub_831DB5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22580
	ctx.r3.s64 = ctx.r11.s64 + 22580;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB5D8"))) PPC_WEAK_FUNC(sub_831DB5D8);
PPC_FUNC_IMPL(__imp__sub_831DB5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22596, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB5F0"))) PPC_WEAK_FUNC(sub_831DB5F0);
PPC_FUNC_IMPL(__imp__sub_831DB5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22608
	ctx.r3.s64 = ctx.r11.s64 + 22608;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB600"))) PPC_WEAK_FUNC(sub_831DB600);
PPC_FUNC_IMPL(__imp__sub_831DB600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22624, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB618"))) PPC_WEAK_FUNC(sub_831DB618);
PPC_FUNC_IMPL(__imp__sub_831DB618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22636
	ctx.r3.s64 = ctx.r11.s64 + 22636;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB628"))) PPC_WEAK_FUNC(sub_831DB628);
PPC_FUNC_IMPL(__imp__sub_831DB628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22652, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB640"))) PPC_WEAK_FUNC(sub_831DB640);
PPC_FUNC_IMPL(__imp__sub_831DB640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22664
	ctx.r3.s64 = ctx.r11.s64 + 22664;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB650"))) PPC_WEAK_FUNC(sub_831DB650);
PPC_FUNC_IMPL(__imp__sub_831DB650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22680, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB668"))) PPC_WEAK_FUNC(sub_831DB668);
PPC_FUNC_IMPL(__imp__sub_831DB668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22692
	ctx.r3.s64 = ctx.r11.s64 + 22692;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB678"))) PPC_WEAK_FUNC(sub_831DB678);
PPC_FUNC_IMPL(__imp__sub_831DB678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22708, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB690"))) PPC_WEAK_FUNC(sub_831DB690);
PPC_FUNC_IMPL(__imp__sub_831DB690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22720
	ctx.r3.s64 = ctx.r11.s64 + 22720;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB6A0"))) PPC_WEAK_FUNC(sub_831DB6A0);
PPC_FUNC_IMPL(__imp__sub_831DB6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22736, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB6B8"))) PPC_WEAK_FUNC(sub_831DB6B8);
PPC_FUNC_IMPL(__imp__sub_831DB6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,23056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23056, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB6D0"))) PPC_WEAK_FUNC(sub_831DB6D0);
PPC_FUNC_IMPL(__imp__sub_831DB6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22748
	ctx.r3.s64 = ctx.r11.s64 + 22748;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB6E0"))) PPC_WEAK_FUNC(sub_831DB6E0);
PPC_FUNC_IMPL(__imp__sub_831DB6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22764, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB6F8"))) PPC_WEAK_FUNC(sub_831DB6F8);
PPC_FUNC_IMPL(__imp__sub_831DB6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22776
	ctx.r3.s64 = ctx.r11.s64 + 22776;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB708"))) PPC_WEAK_FUNC(sub_831DB708);
PPC_FUNC_IMPL(__imp__sub_831DB708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22792, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB720"))) PPC_WEAK_FUNC(sub_831DB720);
PPC_FUNC_IMPL(__imp__sub_831DB720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22804
	ctx.r3.s64 = ctx.r11.s64 + 22804;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB730"))) PPC_WEAK_FUNC(sub_831DB730);
PPC_FUNC_IMPL(__imp__sub_831DB730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22820, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB748"))) PPC_WEAK_FUNC(sub_831DB748);
PPC_FUNC_IMPL(__imp__sub_831DB748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22832
	ctx.r3.s64 = ctx.r11.s64 + 22832;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB758"))) PPC_WEAK_FUNC(sub_831DB758);
PPC_FUNC_IMPL(__imp__sub_831DB758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22848, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB770"))) PPC_WEAK_FUNC(sub_831DB770);
PPC_FUNC_IMPL(__imp__sub_831DB770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22860
	ctx.r3.s64 = ctx.r11.s64 + 22860;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB780"))) PPC_WEAK_FUNC(sub_831DB780);
PPC_FUNC_IMPL(__imp__sub_831DB780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22876, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB798"))) PPC_WEAK_FUNC(sub_831DB798);
PPC_FUNC_IMPL(__imp__sub_831DB798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22888
	ctx.r3.s64 = ctx.r11.s64 + 22888;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB7A8"))) PPC_WEAK_FUNC(sub_831DB7A8);
PPC_FUNC_IMPL(__imp__sub_831DB7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22904, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB7C0"))) PPC_WEAK_FUNC(sub_831DB7C0);
PPC_FUNC_IMPL(__imp__sub_831DB7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22916
	ctx.r3.s64 = ctx.r11.s64 + 22916;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB7D0"))) PPC_WEAK_FUNC(sub_831DB7D0);
PPC_FUNC_IMPL(__imp__sub_831DB7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22932(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22932, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB7E8"))) PPC_WEAK_FUNC(sub_831DB7E8);
PPC_FUNC_IMPL(__imp__sub_831DB7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22944
	ctx.r3.s64 = ctx.r11.s64 + 22944;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB7F8"))) PPC_WEAK_FUNC(sub_831DB7F8);
PPC_FUNC_IMPL(__imp__sub_831DB7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22960, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB810"))) PPC_WEAK_FUNC(sub_831DB810);
PPC_FUNC_IMPL(__imp__sub_831DB810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,22972
	ctx.r3.s64 = ctx.r11.s64 + 22972;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB820"))) PPC_WEAK_FUNC(sub_831DB820);
PPC_FUNC_IMPL(__imp__sub_831DB820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,22988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22988, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB838"))) PPC_WEAK_FUNC(sub_831DB838);
PPC_FUNC_IMPL(__imp__sub_831DB838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,23000
	ctx.r3.s64 = ctx.r11.s64 + 23000;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB848"))) PPC_WEAK_FUNC(sub_831DB848);
PPC_FUNC_IMPL(__imp__sub_831DB848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,23016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23016, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB860"))) PPC_WEAK_FUNC(sub_831DB860);
PPC_FUNC_IMPL(__imp__sub_831DB860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,23028
	ctx.r3.s64 = ctx.r11.s64 + 23028;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB870"))) PPC_WEAK_FUNC(sub_831DB870);
PPC_FUNC_IMPL(__imp__sub_831DB870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,23044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23044, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB888"))) PPC_WEAK_FUNC(sub_831DB888);
PPC_FUNC_IMPL(__imp__sub_831DB888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,21780(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21780, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB8A0"))) PPC_WEAK_FUNC(sub_831DB8A0);
PPC_FUNC_IMPL(__imp__sub_831DB8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,21676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21676, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB8B8"))) PPC_WEAK_FUNC(sub_831DB8B8);
PPC_FUNC_IMPL(__imp__sub_831DB8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,21632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21632, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB8D0"))) PPC_WEAK_FUNC(sub_831DB8D0);
PPC_FUNC_IMPL(__imp__sub_831DB8D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB8D8"))) PPC_WEAK_FUNC(sub_831DB8D8);
PPC_FUNC_IMPL(__imp__sub_831DB8D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB8E0"))) PPC_WEAK_FUNC(sub_831DB8E0);
PPC_FUNC_IMPL(__imp__sub_831DB8E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB8E8"))) PPC_WEAK_FUNC(sub_831DB8E8);
PPC_FUNC_IMPL(__imp__sub_831DB8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21700
	ctx.r3.s64 = ctx.r11.s64 + 21700;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB8F8"))) PPC_WEAK_FUNC(sub_831DB8F8);
PPC_FUNC_IMPL(__imp__sub_831DB8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,21776
	ctx.r3.s64 = ctx.r11.s64 + 21776;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB908"))) PPC_WEAK_FUNC(sub_831DB908);
PPC_FUNC_IMPL(__imp__sub_831DB908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,25680
	ctx.r3.s64 = ctx.r11.s64 + 25680;
	// b 0x82c00f48
	sub_82C00F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB918"))) PPC_WEAK_FUNC(sub_831DB918);
PPC_FUNC_IMPL(__imp__sub_831DB918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,25604
	ctx.r3.s64 = ctx.r11.s64 + 25604;
	// b 0x82c00e48
	sub_82C00E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB928"))) PPC_WEAK_FUNC(sub_831DB928);
PPC_FUNC_IMPL(__imp__sub_831DB928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,-11224
	ctx.r11.s64 = ctx.r11.s64 + -11224;
	// stw r11,25828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25828, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB940"))) PPC_WEAK_FUNC(sub_831DB940);
PPC_FUNC_IMPL(__imp__sub_831DB940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,25600
	ctx.r3.s64 = ctx.r11.s64 + 25600;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB950"))) PPC_WEAK_FUNC(sub_831DB950);
PPC_FUNC_IMPL(__imp__sub_831DB950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,25848
	ctx.r11.s64 = ctx.r11.s64 + 25848;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x823fd218
	sub_823FD218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB968"))) PPC_WEAK_FUNC(sub_831DB968);
PPC_FUNC_IMPL(__imp__sub_831DB968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,25904
	ctx.r3.s64 = ctx.r11.s64 + 25904;
	// b 0x8255dca8
	sub_8255DCA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB978"))) PPC_WEAK_FUNC(sub_831DB978);
PPC_FUNC_IMPL(__imp__sub_831DB978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,26624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26624, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB990"))) PPC_WEAK_FUNC(sub_831DB990);
PPC_FUNC_IMPL(__imp__sub_831DB990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26168
	ctx.r3.s64 = ctx.r11.s64 + 26168;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB9A0"))) PPC_WEAK_FUNC(sub_831DB9A0);
PPC_FUNC_IMPL(__imp__sub_831DB9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,26184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB9B8"))) PPC_WEAK_FUNC(sub_831DB9B8);
PPC_FUNC_IMPL(__imp__sub_831DB9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26196
	ctx.r3.s64 = ctx.r11.s64 + 26196;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB9C8"))) PPC_WEAK_FUNC(sub_831DB9C8);
PPC_FUNC_IMPL(__imp__sub_831DB9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,26212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26212, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB9E0"))) PPC_WEAK_FUNC(sub_831DB9E0);
PPC_FUNC_IMPL(__imp__sub_831DB9E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB9E8"))) PPC_WEAK_FUNC(sub_831DB9E8);
PPC_FUNC_IMPL(__imp__sub_831DB9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,26488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26488, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBA00"))) PPC_WEAK_FUNC(sub_831DBA00);
PPC_FUNC_IMPL(__imp__sub_831DBA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26288
	ctx.r3.s64 = ctx.r11.s64 + 26288;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBA10"))) PPC_WEAK_FUNC(sub_831DBA10);
PPC_FUNC_IMPL(__imp__sub_831DBA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,26304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26304, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBA28"))) PPC_WEAK_FUNC(sub_831DBA28);
PPC_FUNC_IMPL(__imp__sub_831DBA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26316
	ctx.r3.s64 = ctx.r11.s64 + 26316;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBA38"))) PPC_WEAK_FUNC(sub_831DBA38);
PPC_FUNC_IMPL(__imp__sub_831DBA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,26332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBA50"))) PPC_WEAK_FUNC(sub_831DBA50);
PPC_FUNC_IMPL(__imp__sub_831DBA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26344
	ctx.r3.s64 = ctx.r11.s64 + 26344;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBA60"))) PPC_WEAK_FUNC(sub_831DBA60);
PPC_FUNC_IMPL(__imp__sub_831DBA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,26360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26360, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBA78"))) PPC_WEAK_FUNC(sub_831DBA78);
PPC_FUNC_IMPL(__imp__sub_831DBA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26372
	ctx.r3.s64 = ctx.r11.s64 + 26372;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBA88"))) PPC_WEAK_FUNC(sub_831DBA88);
PPC_FUNC_IMPL(__imp__sub_831DBA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,26388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26388, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBAA0"))) PPC_WEAK_FUNC(sub_831DBAA0);
PPC_FUNC_IMPL(__imp__sub_831DBAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26224
	ctx.r3.s64 = ctx.r11.s64 + 26224;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBAB0"))) PPC_WEAK_FUNC(sub_831DBAB0);
PPC_FUNC_IMPL(__imp__sub_831DBAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,26240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26240, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBAC8"))) PPC_WEAK_FUNC(sub_831DBAC8);
PPC_FUNC_IMPL(__imp__sub_831DBAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26252
	ctx.r3.s64 = ctx.r11.s64 + 26252;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBAD8"))) PPC_WEAK_FUNC(sub_831DBAD8);
PPC_FUNC_IMPL(__imp__sub_831DBAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,26268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBAF0"))) PPC_WEAK_FUNC(sub_831DBAF0);
PPC_FUNC_IMPL(__imp__sub_831DBAF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBAF8"))) PPC_WEAK_FUNC(sub_831DBAF8);
PPC_FUNC_IMPL(__imp__sub_831DBAF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBB00"))) PPC_WEAK_FUNC(sub_831DBB00);
PPC_FUNC_IMPL(__imp__sub_831DBB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26544
	ctx.r3.s64 = ctx.r11.s64 + 26544;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBB10"))) PPC_WEAK_FUNC(sub_831DBB10);
PPC_FUNC_IMPL(__imp__sub_831DBB10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBB18"))) PPC_WEAK_FUNC(sub_831DBB18);
PPC_FUNC_IMPL(__imp__sub_831DBB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,26800(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26800, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBB30"))) PPC_WEAK_FUNC(sub_831DBB30);
PPC_FUNC_IMPL(__imp__sub_831DBB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26824
	ctx.r3.s64 = ctx.r11.s64 + 26824;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBB40"))) PPC_WEAK_FUNC(sub_831DBB40);
PPC_FUNC_IMPL(__imp__sub_831DBB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,26652
	ctx.r3.s64 = ctx.r11.s64 + 26652;
	// b 0x82576038
	sub_82576038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBB50"))) PPC_WEAK_FUNC(sub_831DBB50);
PPC_FUNC_IMPL(__imp__sub_831DBB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,32356
	ctx.r3.s64 = ctx.r11.s64 + 32356;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBB60"))) PPC_WEAK_FUNC(sub_831DBB60);
PPC_FUNC_IMPL(__imp__sub_831DBB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,32388
	ctx.r3.s64 = ctx.r11.s64 + 32388;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBB70"))) PPC_WEAK_FUNC(sub_831DBB70);
PPC_FUNC_IMPL(__imp__sub_831DBB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,27344
	ctx.r3.s64 = ctx.r11.s64 + 27344;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBB80"))) PPC_WEAK_FUNC(sub_831DBB80);
PPC_FUNC_IMPL(__imp__sub_831DBB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,32248
	ctx.r3.s64 = ctx.r11.s64 + 32248;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBB90"))) PPC_WEAK_FUNC(sub_831DBB90);
PPC_FUNC_IMPL(__imp__sub_831DBB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,32520
	ctx.r3.s64 = ctx.r11.s64 + 32520;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBBA0"))) PPC_WEAK_FUNC(sub_831DBBA0);
PPC_FUNC_IMPL(__imp__sub_831DBBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,32536(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32536, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBBB8"))) PPC_WEAK_FUNC(sub_831DBBB8);
PPC_FUNC_IMPL(__imp__sub_831DBBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,32548
	ctx.r3.s64 = ctx.r11.s64 + 32548;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBBC8"))) PPC_WEAK_FUNC(sub_831DBBC8);
PPC_FUNC_IMPL(__imp__sub_831DBBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,32564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32564, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBBE0"))) PPC_WEAK_FUNC(sub_831DBBE0);
PPC_FUNC_IMPL(__imp__sub_831DBBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,32576
	ctx.r3.s64 = ctx.r11.s64 + 32576;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBBF0"))) PPC_WEAK_FUNC(sub_831DBBF0);
PPC_FUNC_IMPL(__imp__sub_831DBBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,32592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32592, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBC08"))) PPC_WEAK_FUNC(sub_831DBC08);
PPC_FUNC_IMPL(__imp__sub_831DBC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,27304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27304, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBC20"))) PPC_WEAK_FUNC(sub_831DBC20);
PPC_FUNC_IMPL(__imp__sub_831DBC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,27280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBC38"))) PPC_WEAK_FUNC(sub_831DBC38);
PPC_FUNC_IMPL(__imp__sub_831DBC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBC50"))) PPC_WEAK_FUNC(sub_831DBC50);
PPC_FUNC_IMPL(__imp__sub_831DBC50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBC58"))) PPC_WEAK_FUNC(sub_831DBC58);
PPC_FUNC_IMPL(__imp__sub_831DBC58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBC60"))) PPC_WEAK_FUNC(sub_831DBC60);
PPC_FUNC_IMPL(__imp__sub_831DBC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,27408
	ctx.r3.s64 = ctx.r11.s64 + 27408;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBC70"))) PPC_WEAK_FUNC(sub_831DBC70);
PPC_FUNC_IMPL(__imp__sub_831DBC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,32604
	ctx.r3.s64 = ctx.r11.s64 + 32604;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBC80"))) PPC_WEAK_FUNC(sub_831DBC80);
PPC_FUNC_IMPL(__imp__sub_831DBC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,32280
	ctx.r3.s64 = ctx.r11.s64 + 32280;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBC90"))) PPC_WEAK_FUNC(sub_831DBC90);
PPC_FUNC_IMPL(__imp__sub_831DBC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27292
	ctx.r3.s64 = ctx.r11.s64 + -27292;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBCA8"))) PPC_WEAK_FUNC(sub_831DBCA8);
PPC_FUNC_IMPL(__imp__sub_831DBCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,32612
	ctx.r31.s64 = ctx.r11.s64 + 32612;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82c84f20
	ctx.lr = 0x831DBCD4;
	sub_82C84F20(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x823fd208
	ctx.lr = 0x831DBCDC;
	sub_823FD208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBCF0"))) PPC_WEAK_FUNC(sub_831DBCF0);
PPC_FUNC_IMPL(__imp__sub_831DBCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32584, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBD08"))) PPC_WEAK_FUNC(sub_831DBD08);
PPC_FUNC_IMPL(__imp__sub_831DBD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBD20"))) PPC_WEAK_FUNC(sub_831DBD20);
PPC_FUNC_IMPL(__imp__sub_831DBD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32668, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBD38"))) PPC_WEAK_FUNC(sub_831DBD38);
PPC_FUNC_IMPL(__imp__sub_831DBD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBD50"))) PPC_WEAK_FUNC(sub_831DBD50);
PPC_FUNC_IMPL(__imp__sub_831DBD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,32720
	ctx.r3.s64 = ctx.r11.s64 + 32720;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBD60"))) PPC_WEAK_FUNC(sub_831DBD60);
PPC_FUNC_IMPL(__imp__sub_831DBD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,32736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32736, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBD78"))) PPC_WEAK_FUNC(sub_831DBD78);
PPC_FUNC_IMPL(__imp__sub_831DBD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r3,r11,-32672
	ctx.r3.s64 = ctx.r11.s64 + -32672;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBD88"))) PPC_WEAK_FUNC(sub_831DBD88);
PPC_FUNC_IMPL(__imp__sub_831DBD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-10448
	ctx.r3.s64 = ctx.r11.s64 + -10448;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBD98"))) PPC_WEAK_FUNC(sub_831DBD98);
PPC_FUNC_IMPL(__imp__sub_831DBD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r3,r11,-32512
	ctx.r3.s64 = ctx.r11.s64 + -32512;
	// b 0x825aa728
	sub_825AA728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBDA8"))) PPC_WEAK_FUNC(sub_831DBDA8);
PPC_FUNC_IMPL(__imp__sub_831DBDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9652
	ctx.r3.s64 = ctx.r11.s64 + -9652;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBDB8"))) PPC_WEAK_FUNC(sub_831DBDB8);
PPC_FUNC_IMPL(__imp__sub_831DBDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9636, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBDD0"))) PPC_WEAK_FUNC(sub_831DBDD0);
PPC_FUNC_IMPL(__imp__sub_831DBDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9624
	ctx.r3.s64 = ctx.r11.s64 + -9624;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBDE0"))) PPC_WEAK_FUNC(sub_831DBDE0);
PPC_FUNC_IMPL(__imp__sub_831DBDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9608, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBDF8"))) PPC_WEAK_FUNC(sub_831DBDF8);
PPC_FUNC_IMPL(__imp__sub_831DBDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9596
	ctx.r3.s64 = ctx.r11.s64 + -9596;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBE08"))) PPC_WEAK_FUNC(sub_831DBE08);
PPC_FUNC_IMPL(__imp__sub_831DBE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9580(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9580, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBE20"))) PPC_WEAK_FUNC(sub_831DBE20);
PPC_FUNC_IMPL(__imp__sub_831DBE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9568
	ctx.r3.s64 = ctx.r11.s64 + -9568;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBE30"))) PPC_WEAK_FUNC(sub_831DBE30);
PPC_FUNC_IMPL(__imp__sub_831DBE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9552, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBE48"))) PPC_WEAK_FUNC(sub_831DBE48);
PPC_FUNC_IMPL(__imp__sub_831DBE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9540
	ctx.r3.s64 = ctx.r11.s64 + -9540;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBE58"))) PPC_WEAK_FUNC(sub_831DBE58);
PPC_FUNC_IMPL(__imp__sub_831DBE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9524, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBE70"))) PPC_WEAK_FUNC(sub_831DBE70);
PPC_FUNC_IMPL(__imp__sub_831DBE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9512
	ctx.r3.s64 = ctx.r11.s64 + -9512;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBE80"))) PPC_WEAK_FUNC(sub_831DBE80);
PPC_FUNC_IMPL(__imp__sub_831DBE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9496, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBE98"))) PPC_WEAK_FUNC(sub_831DBE98);
PPC_FUNC_IMPL(__imp__sub_831DBE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9484
	ctx.r3.s64 = ctx.r11.s64 + -9484;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBEA8"))) PPC_WEAK_FUNC(sub_831DBEA8);
PPC_FUNC_IMPL(__imp__sub_831DBEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9468, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBEC0"))) PPC_WEAK_FUNC(sub_831DBEC0);
PPC_FUNC_IMPL(__imp__sub_831DBEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9456
	ctx.r3.s64 = ctx.r11.s64 + -9456;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBED0"))) PPC_WEAK_FUNC(sub_831DBED0);
PPC_FUNC_IMPL(__imp__sub_831DBED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9440, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBEE8"))) PPC_WEAK_FUNC(sub_831DBEE8);
PPC_FUNC_IMPL(__imp__sub_831DBEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9428
	ctx.r3.s64 = ctx.r11.s64 + -9428;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBEF8"))) PPC_WEAK_FUNC(sub_831DBEF8);
PPC_FUNC_IMPL(__imp__sub_831DBEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBF10"))) PPC_WEAK_FUNC(sub_831DBF10);
PPC_FUNC_IMPL(__imp__sub_831DBF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9400
	ctx.r3.s64 = ctx.r11.s64 + -9400;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBF20"))) PPC_WEAK_FUNC(sub_831DBF20);
PPC_FUNC_IMPL(__imp__sub_831DBF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBF38"))) PPC_WEAK_FUNC(sub_831DBF38);
PPC_FUNC_IMPL(__imp__sub_831DBF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9372
	ctx.r3.s64 = ctx.r11.s64 + -9372;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBF48"))) PPC_WEAK_FUNC(sub_831DBF48);
PPC_FUNC_IMPL(__imp__sub_831DBF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9356(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9356, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBF60"))) PPC_WEAK_FUNC(sub_831DBF60);
PPC_FUNC_IMPL(__imp__sub_831DBF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9344
	ctx.r3.s64 = ctx.r11.s64 + -9344;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBF70"))) PPC_WEAK_FUNC(sub_831DBF70);
PPC_FUNC_IMPL(__imp__sub_831DBF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBF88"))) PPC_WEAK_FUNC(sub_831DBF88);
PPC_FUNC_IMPL(__imp__sub_831DBF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9316
	ctx.r3.s64 = ctx.r11.s64 + -9316;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBF98"))) PPC_WEAK_FUNC(sub_831DBF98);
PPC_FUNC_IMPL(__imp__sub_831DBF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9300(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9300, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBFB0"))) PPC_WEAK_FUNC(sub_831DBFB0);
PPC_FUNC_IMPL(__imp__sub_831DBFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9288
	ctx.r3.s64 = ctx.r11.s64 + -9288;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBFC0"))) PPC_WEAK_FUNC(sub_831DBFC0);
PPC_FUNC_IMPL(__imp__sub_831DBFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9272(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBFD8"))) PPC_WEAK_FUNC(sub_831DBFD8);
PPC_FUNC_IMPL(__imp__sub_831DBFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9260
	ctx.r3.s64 = ctx.r11.s64 + -9260;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBFE8"))) PPC_WEAK_FUNC(sub_831DBFE8);
PPC_FUNC_IMPL(__imp__sub_831DBFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9244, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC000"))) PPC_WEAK_FUNC(sub_831DC000);
PPC_FUNC_IMPL(__imp__sub_831DC000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9232
	ctx.r3.s64 = ctx.r11.s64 + -9232;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC010"))) PPC_WEAK_FUNC(sub_831DC010);
PPC_FUNC_IMPL(__imp__sub_831DC010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9216(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC028"))) PPC_WEAK_FUNC(sub_831DC028);
PPC_FUNC_IMPL(__imp__sub_831DC028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9204
	ctx.r3.s64 = ctx.r11.s64 + -9204;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC038"))) PPC_WEAK_FUNC(sub_831DC038);
PPC_FUNC_IMPL(__imp__sub_831DC038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9188(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9188, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC050"))) PPC_WEAK_FUNC(sub_831DC050);
PPC_FUNC_IMPL(__imp__sub_831DC050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9176
	ctx.r3.s64 = ctx.r11.s64 + -9176;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC060"))) PPC_WEAK_FUNC(sub_831DC060);
PPC_FUNC_IMPL(__imp__sub_831DC060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9160(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9160, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC078"))) PPC_WEAK_FUNC(sub_831DC078);
PPC_FUNC_IMPL(__imp__sub_831DC078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9148
	ctx.r3.s64 = ctx.r11.s64 + -9148;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC088"))) PPC_WEAK_FUNC(sub_831DC088);
PPC_FUNC_IMPL(__imp__sub_831DC088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9132, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC0A0"))) PPC_WEAK_FUNC(sub_831DC0A0);
PPC_FUNC_IMPL(__imp__sub_831DC0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9120
	ctx.r3.s64 = ctx.r11.s64 + -9120;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC0B0"))) PPC_WEAK_FUNC(sub_831DC0B0);
PPC_FUNC_IMPL(__imp__sub_831DC0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC0C8"))) PPC_WEAK_FUNC(sub_831DC0C8);
PPC_FUNC_IMPL(__imp__sub_831DC0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9092
	ctx.r3.s64 = ctx.r11.s64 + -9092;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC0D8"))) PPC_WEAK_FUNC(sub_831DC0D8);
PPC_FUNC_IMPL(__imp__sub_831DC0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9076(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9076, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC0F0"))) PPC_WEAK_FUNC(sub_831DC0F0);
PPC_FUNC_IMPL(__imp__sub_831DC0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9064
	ctx.r3.s64 = ctx.r11.s64 + -9064;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC100"))) PPC_WEAK_FUNC(sub_831DC100);
PPC_FUNC_IMPL(__imp__sub_831DC100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9048, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC118"))) PPC_WEAK_FUNC(sub_831DC118);
PPC_FUNC_IMPL(__imp__sub_831DC118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9036
	ctx.r3.s64 = ctx.r11.s64 + -9036;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC128"))) PPC_WEAK_FUNC(sub_831DC128);
PPC_FUNC_IMPL(__imp__sub_831DC128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-9020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9020, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC140"))) PPC_WEAK_FUNC(sub_831DC140);
PPC_FUNC_IMPL(__imp__sub_831DC140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-9008
	ctx.r3.s64 = ctx.r11.s64 + -9008;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC150"))) PPC_WEAK_FUNC(sub_831DC150);
PPC_FUNC_IMPL(__imp__sub_831DC150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-8992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8992, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC168"))) PPC_WEAK_FUNC(sub_831DC168);
PPC_FUNC_IMPL(__imp__sub_831DC168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-8980
	ctx.r3.s64 = ctx.r11.s64 + -8980;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC178"))) PPC_WEAK_FUNC(sub_831DC178);
PPC_FUNC_IMPL(__imp__sub_831DC178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-8964(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8964, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC190"))) PPC_WEAK_FUNC(sub_831DC190);
PPC_FUNC_IMPL(__imp__sub_831DC190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-8952
	ctx.r3.s64 = ctx.r11.s64 + -8952;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC1A0"))) PPC_WEAK_FUNC(sub_831DC1A0);
PPC_FUNC_IMPL(__imp__sub_831DC1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-8936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8936, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC1B8"))) PPC_WEAK_FUNC(sub_831DC1B8);
PPC_FUNC_IMPL(__imp__sub_831DC1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-8924
	ctx.r3.s64 = ctx.r11.s64 + -8924;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC1C8"))) PPC_WEAK_FUNC(sub_831DC1C8);
PPC_FUNC_IMPL(__imp__sub_831DC1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-8908(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8908, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC1E0"))) PPC_WEAK_FUNC(sub_831DC1E0);
PPC_FUNC_IMPL(__imp__sub_831DC1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-8896
	ctx.r3.s64 = ctx.r11.s64 + -8896;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC1F0"))) PPC_WEAK_FUNC(sub_831DC1F0);
PPC_FUNC_IMPL(__imp__sub_831DC1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-8880(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8880, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC208"))) PPC_WEAK_FUNC(sub_831DC208);
PPC_FUNC_IMPL(__imp__sub_831DC208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-8868
	ctx.r3.s64 = ctx.r11.s64 + -8868;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC218"))) PPC_WEAK_FUNC(sub_831DC218);
PPC_FUNC_IMPL(__imp__sub_831DC218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-8852(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8852, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC230"))) PPC_WEAK_FUNC(sub_831DC230);
PPC_FUNC_IMPL(__imp__sub_831DC230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-8840
	ctx.r3.s64 = ctx.r11.s64 + -8840;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC240"))) PPC_WEAK_FUNC(sub_831DC240);
PPC_FUNC_IMPL(__imp__sub_831DC240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-8824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8824, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC258"))) PPC_WEAK_FUNC(sub_831DC258);
PPC_FUNC_IMPL(__imp__sub_831DC258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-10308
	ctx.r3.s64 = ctx.r11.s64 + -10308;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC268"))) PPC_WEAK_FUNC(sub_831DC268);
PPC_FUNC_IMPL(__imp__sub_831DC268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-8068
	ctx.r3.s64 = ctx.r11.s64 + -8068;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC278"))) PPC_WEAK_FUNC(sub_831DC278);
PPC_FUNC_IMPL(__imp__sub_831DC278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-8052(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8052, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC290"))) PPC_WEAK_FUNC(sub_831DC290);
PPC_FUNC_IMPL(__imp__sub_831DC290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-8040
	ctx.r3.s64 = ctx.r11.s64 + -8040;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC2A0"))) PPC_WEAK_FUNC(sub_831DC2A0);
PPC_FUNC_IMPL(__imp__sub_831DC2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-8024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8024, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC2B8"))) PPC_WEAK_FUNC(sub_831DC2B8);
PPC_FUNC_IMPL(__imp__sub_831DC2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-8012
	ctx.r3.s64 = ctx.r11.s64 + -8012;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC2C8"))) PPC_WEAK_FUNC(sub_831DC2C8);
PPC_FUNC_IMPL(__imp__sub_831DC2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7996(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7996, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC2E0"))) PPC_WEAK_FUNC(sub_831DC2E0);
PPC_FUNC_IMPL(__imp__sub_831DC2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7984
	ctx.r3.s64 = ctx.r11.s64 + -7984;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC2F0"))) PPC_WEAK_FUNC(sub_831DC2F0);
PPC_FUNC_IMPL(__imp__sub_831DC2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7968, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC308"))) PPC_WEAK_FUNC(sub_831DC308);
PPC_FUNC_IMPL(__imp__sub_831DC308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7956
	ctx.r3.s64 = ctx.r11.s64 + -7956;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC318"))) PPC_WEAK_FUNC(sub_831DC318);
PPC_FUNC_IMPL(__imp__sub_831DC318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7940, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC330"))) PPC_WEAK_FUNC(sub_831DC330);
PPC_FUNC_IMPL(__imp__sub_831DC330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7928
	ctx.r3.s64 = ctx.r11.s64 + -7928;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC340"))) PPC_WEAK_FUNC(sub_831DC340);
PPC_FUNC_IMPL(__imp__sub_831DC340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7912, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC358"))) PPC_WEAK_FUNC(sub_831DC358);
PPC_FUNC_IMPL(__imp__sub_831DC358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7900
	ctx.r3.s64 = ctx.r11.s64 + -7900;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC368"))) PPC_WEAK_FUNC(sub_831DC368);
PPC_FUNC_IMPL(__imp__sub_831DC368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7884(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7884, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC380"))) PPC_WEAK_FUNC(sub_831DC380);
PPC_FUNC_IMPL(__imp__sub_831DC380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7872
	ctx.r3.s64 = ctx.r11.s64 + -7872;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC390"))) PPC_WEAK_FUNC(sub_831DC390);
PPC_FUNC_IMPL(__imp__sub_831DC390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7856(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7856, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC3A8"))) PPC_WEAK_FUNC(sub_831DC3A8);
PPC_FUNC_IMPL(__imp__sub_831DC3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7844
	ctx.r3.s64 = ctx.r11.s64 + -7844;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC3B8"))) PPC_WEAK_FUNC(sub_831DC3B8);
PPC_FUNC_IMPL(__imp__sub_831DC3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7828(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7828, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC3D0"))) PPC_WEAK_FUNC(sub_831DC3D0);
PPC_FUNC_IMPL(__imp__sub_831DC3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7816
	ctx.r3.s64 = ctx.r11.s64 + -7816;
	// bl 0x82e4ddd0
	ctx.lr = 0x831DC3E8;
	sub_82E4DDD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC3F8"))) PPC_WEAK_FUNC(sub_831DC3F8);
PPC_FUNC_IMPL(__imp__sub_831DC3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7800
	ctx.r3.s64 = ctx.r11.s64 + -7800;
	// bl 0x825b7900
	ctx.lr = 0x831DC410;
	sub_825B7900(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC420"))) PPC_WEAK_FUNC(sub_831DC420);
PPC_FUNC_IMPL(__imp__sub_831DC420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7784
	ctx.r3.s64 = ctx.r11.s64 + -7784;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC430"))) PPC_WEAK_FUNC(sub_831DC430);
PPC_FUNC_IMPL(__imp__sub_831DC430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7768, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC448"))) PPC_WEAK_FUNC(sub_831DC448);
PPC_FUNC_IMPL(__imp__sub_831DC448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7756
	ctx.r3.s64 = ctx.r11.s64 + -7756;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC458"))) PPC_WEAK_FUNC(sub_831DC458);
PPC_FUNC_IMPL(__imp__sub_831DC458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7740, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC470"))) PPC_WEAK_FUNC(sub_831DC470);
PPC_FUNC_IMPL(__imp__sub_831DC470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7728
	ctx.r3.s64 = ctx.r11.s64 + -7728;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC480"))) PPC_WEAK_FUNC(sub_831DC480);
PPC_FUNC_IMPL(__imp__sub_831DC480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7712, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC498"))) PPC_WEAK_FUNC(sub_831DC498);
PPC_FUNC_IMPL(__imp__sub_831DC498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7700
	ctx.r3.s64 = ctx.r11.s64 + -7700;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC4A8"))) PPC_WEAK_FUNC(sub_831DC4A8);
PPC_FUNC_IMPL(__imp__sub_831DC4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7684, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC4C0"))) PPC_WEAK_FUNC(sub_831DC4C0);
PPC_FUNC_IMPL(__imp__sub_831DC4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7672
	ctx.r3.s64 = ctx.r11.s64 + -7672;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC4D0"))) PPC_WEAK_FUNC(sub_831DC4D0);
PPC_FUNC_IMPL(__imp__sub_831DC4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7656, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC4E8"))) PPC_WEAK_FUNC(sub_831DC4E8);
PPC_FUNC_IMPL(__imp__sub_831DC4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7644
	ctx.r3.s64 = ctx.r11.s64 + -7644;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC4F8"))) PPC_WEAK_FUNC(sub_831DC4F8);
PPC_FUNC_IMPL(__imp__sub_831DC4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC510"))) PPC_WEAK_FUNC(sub_831DC510);
PPC_FUNC_IMPL(__imp__sub_831DC510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7616
	ctx.r3.s64 = ctx.r11.s64 + -7616;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC520"))) PPC_WEAK_FUNC(sub_831DC520);
PPC_FUNC_IMPL(__imp__sub_831DC520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC538"))) PPC_WEAK_FUNC(sub_831DC538);
PPC_FUNC_IMPL(__imp__sub_831DC538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7588
	ctx.r3.s64 = ctx.r11.s64 + -7588;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC548"))) PPC_WEAK_FUNC(sub_831DC548);
PPC_FUNC_IMPL(__imp__sub_831DC548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7572, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC560"))) PPC_WEAK_FUNC(sub_831DC560);
PPC_FUNC_IMPL(__imp__sub_831DC560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7560
	ctx.r3.s64 = ctx.r11.s64 + -7560;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC570"))) PPC_WEAK_FUNC(sub_831DC570);
PPC_FUNC_IMPL(__imp__sub_831DC570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7544, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC588"))) PPC_WEAK_FUNC(sub_831DC588);
PPC_FUNC_IMPL(__imp__sub_831DC588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7532
	ctx.r3.s64 = ctx.r11.s64 + -7532;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC598"))) PPC_WEAK_FUNC(sub_831DC598);
PPC_FUNC_IMPL(__imp__sub_831DC598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7516(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7516, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC5B0"))) PPC_WEAK_FUNC(sub_831DC5B0);
PPC_FUNC_IMPL(__imp__sub_831DC5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7504
	ctx.r3.s64 = ctx.r11.s64 + -7504;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC5C0"))) PPC_WEAK_FUNC(sub_831DC5C0);
PPC_FUNC_IMPL(__imp__sub_831DC5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7488, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC5D8"))) PPC_WEAK_FUNC(sub_831DC5D8);
PPC_FUNC_IMPL(__imp__sub_831DC5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7476
	ctx.r3.s64 = ctx.r11.s64 + -7476;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC5E8"))) PPC_WEAK_FUNC(sub_831DC5E8);
PPC_FUNC_IMPL(__imp__sub_831DC5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7460(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7460, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC600"))) PPC_WEAK_FUNC(sub_831DC600);
PPC_FUNC_IMPL(__imp__sub_831DC600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7448
	ctx.r3.s64 = ctx.r11.s64 + -7448;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC610"))) PPC_WEAK_FUNC(sub_831DC610);
PPC_FUNC_IMPL(__imp__sub_831DC610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7432, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC628"))) PPC_WEAK_FUNC(sub_831DC628);
PPC_FUNC_IMPL(__imp__sub_831DC628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7420
	ctx.r3.s64 = ctx.r11.s64 + -7420;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC638"))) PPC_WEAK_FUNC(sub_831DC638);
PPC_FUNC_IMPL(__imp__sub_831DC638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7404, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC650"))) PPC_WEAK_FUNC(sub_831DC650);
PPC_FUNC_IMPL(__imp__sub_831DC650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7392
	ctx.r3.s64 = ctx.r11.s64 + -7392;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC660"))) PPC_WEAK_FUNC(sub_831DC660);
PPC_FUNC_IMPL(__imp__sub_831DC660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC678"))) PPC_WEAK_FUNC(sub_831DC678);
PPC_FUNC_IMPL(__imp__sub_831DC678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7364
	ctx.r3.s64 = ctx.r11.s64 + -7364;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC688"))) PPC_WEAK_FUNC(sub_831DC688);
PPC_FUNC_IMPL(__imp__sub_831DC688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC6A0"))) PPC_WEAK_FUNC(sub_831DC6A0);
PPC_FUNC_IMPL(__imp__sub_831DC6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7336
	ctx.r3.s64 = ctx.r11.s64 + -7336;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC6B0"))) PPC_WEAK_FUNC(sub_831DC6B0);
PPC_FUNC_IMPL(__imp__sub_831DC6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7320(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC6C8"))) PPC_WEAK_FUNC(sub_831DC6C8);
PPC_FUNC_IMPL(__imp__sub_831DC6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7308
	ctx.r3.s64 = ctx.r11.s64 + -7308;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC6D8"))) PPC_WEAK_FUNC(sub_831DC6D8);
PPC_FUNC_IMPL(__imp__sub_831DC6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7292(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC6F0"))) PPC_WEAK_FUNC(sub_831DC6F0);
PPC_FUNC_IMPL(__imp__sub_831DC6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7280
	ctx.r3.s64 = ctx.r11.s64 + -7280;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC700"))) PPC_WEAK_FUNC(sub_831DC700);
PPC_FUNC_IMPL(__imp__sub_831DC700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC718"))) PPC_WEAK_FUNC(sub_831DC718);
PPC_FUNC_IMPL(__imp__sub_831DC718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7252
	ctx.r3.s64 = ctx.r11.s64 + -7252;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC728"))) PPC_WEAK_FUNC(sub_831DC728);
PPC_FUNC_IMPL(__imp__sub_831DC728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,-7236(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7236, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC740"))) PPC_WEAK_FUNC(sub_831DC740);
PPC_FUNC_IMPL(__imp__sub_831DC740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,-7224
	ctx.r3.s64 = ctx.r11.s64 + -7224;
	// b 0x82e4ddd0
	sub_82E4DDD0(ctx, base);
	return;
}

