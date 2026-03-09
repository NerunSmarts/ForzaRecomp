#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_831BD718"))) PPC_WEAK_FUNC(sub_831BD718);
PPC_FUNC_IMPL(__imp__sub_831BD718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,13440
	ctx.r9.s64 = ctx.r11.s64 + 13440;
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

__attribute__((alias("__imp__sub_831BD748"))) PPC_WEAK_FUNC(sub_831BD748);
PPC_FUNC_IMPL(__imp__sub_831BD748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,13392
	ctx.r9.s64 = ctx.r11.s64 + 13392;
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

__attribute__((alias("__imp__sub_831BD778"))) PPC_WEAK_FUNC(sub_831BD778);
PPC_FUNC_IMPL(__imp__sub_831BD778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,13424
	ctx.r9.s64 = ctx.r11.s64 + 13424;
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

__attribute__((alias("__imp__sub_831BD7A8"))) PPC_WEAK_FUNC(sub_831BD7A8);
PPC_FUNC_IMPL(__imp__sub_831BD7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,13408
	ctx.r10.s64 = ctx.r10.s64 + 13408;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD7C8"))) PPC_WEAK_FUNC(sub_831BD7C8);
PPC_FUNC_IMPL(__imp__sub_831BD7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,13376
	ctx.r10.s64 = ctx.r10.s64 + 13376;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD7E8"))) PPC_WEAK_FUNC(sub_831BD7E8);
PPC_FUNC_IMPL(__imp__sub_831BD7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24496
	ctx.r3.s64 = ctx.r11.s64 + -24496;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BD7F8"))) PPC_WEAK_FUNC(sub_831BD7F8);
PPC_FUNC_IMPL(__imp__sub_831BD7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,13456
	ctx.r10.s64 = ctx.r10.s64 + 13456;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD818"))) PPC_WEAK_FUNC(sub_831BD818);
PPC_FUNC_IMPL(__imp__sub_831BD818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24504
	ctx.r3.s64 = ctx.r11.s64 + -24504;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BD828"))) PPC_WEAK_FUNC(sub_831BD828);
PPC_FUNC_IMPL(__imp__sub_831BD828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24464
	ctx.r3.s64 = ctx.r11.s64 + -24464;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BD838"))) PPC_WEAK_FUNC(sub_831BD838);
PPC_FUNC_IMPL(__imp__sub_831BD838) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,13488
	ctx.r3.s64 = ctx.r11.s64 + 13488;
	// bl 0x824683b0
	ctx.lr = 0x831BD854;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24520
	ctx.r3.s64 = ctx.r11.s64 + -24520;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BD860;
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

__attribute__((alias("__imp__sub_831BD870"))) PPC_WEAK_FUNC(sub_831BD870);
PPC_FUNC_IMPL(__imp__sub_831BD870) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,13540
	ctx.r31.s64 = ctx.r11.s64 + 13540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BD894;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-24480
	ctx.r3.s64 = ctx.r10.s64 + -24480;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BD8BC;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831BD8D0"))) PPC_WEAK_FUNC(sub_831BD8D0);
PPC_FUNC_IMPL(__imp__sub_831BD8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24352
	ctx.r3.s64 = ctx.r11.s64 + -24352;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BD8E0"))) PPC_WEAK_FUNC(sub_831BD8E0);
PPC_FUNC_IMPL(__imp__sub_831BD8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,17824
	ctx.r9.s64 = ctx.r11.s64 + 17824;
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

__attribute__((alias("__imp__sub_831BD910"))) PPC_WEAK_FUNC(sub_831BD910);
PPC_FUNC_IMPL(__imp__sub_831BD910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,17792
	ctx.r9.s64 = ctx.r11.s64 + 17792;
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

__attribute__((alias("__imp__sub_831BD940"))) PPC_WEAK_FUNC(sub_831BD940);
PPC_FUNC_IMPL(__imp__sub_831BD940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,17744
	ctx.r9.s64 = ctx.r11.s64 + 17744;
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

__attribute__((alias("__imp__sub_831BD970"))) PPC_WEAK_FUNC(sub_831BD970);
PPC_FUNC_IMPL(__imp__sub_831BD970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,17776
	ctx.r9.s64 = ctx.r11.s64 + 17776;
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

__attribute__((alias("__imp__sub_831BD9A0"))) PPC_WEAK_FUNC(sub_831BD9A0);
PPC_FUNC_IMPL(__imp__sub_831BD9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,17760
	ctx.r10.s64 = ctx.r10.s64 + 17760;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD9C0"))) PPC_WEAK_FUNC(sub_831BD9C0);
PPC_FUNC_IMPL(__imp__sub_831BD9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,17728
	ctx.r10.s64 = ctx.r10.s64 + 17728;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD9E0"))) PPC_WEAK_FUNC(sub_831BD9E0);
PPC_FUNC_IMPL(__imp__sub_831BD9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,17808
	ctx.r10.s64 = ctx.r10.s64 + 17808;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDA00"))) PPC_WEAK_FUNC(sub_831BDA00);
PPC_FUNC_IMPL(__imp__sub_831BDA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,17840
	ctx.r3.s64 = ctx.r11.s64 + 17840;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BDA10"))) PPC_WEAK_FUNC(sub_831BDA10);
PPC_FUNC_IMPL(__imp__sub_831BDA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24360
	ctx.r3.s64 = ctx.r11.s64 + -24360;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BDA20"))) PPC_WEAK_FUNC(sub_831BDA20);
PPC_FUNC_IMPL(__imp__sub_831BDA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24320
	ctx.r3.s64 = ctx.r11.s64 + -24320;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BDA30"))) PPC_WEAK_FUNC(sub_831BDA30);
PPC_FUNC_IMPL(__imp__sub_831BDA30) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,17912
	ctx.r3.s64 = ctx.r11.s64 + 17912;
	// bl 0x824683b0
	ctx.lr = 0x831BDA4C;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24376
	ctx.r3.s64 = ctx.r11.s64 + -24376;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BDA58;
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

__attribute__((alias("__imp__sub_831BDA68"))) PPC_WEAK_FUNC(sub_831BDA68);
PPC_FUNC_IMPL(__imp__sub_831BDA68) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,17940
	ctx.r31.s64 = ctx.r11.s64 + 17940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BDA8C;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-24336
	ctx.r3.s64 = ctx.r10.s64 + -24336;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BDAB4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831BDAC8"))) PPC_WEAK_FUNC(sub_831BDAC8);
PPC_FUNC_IMPL(__imp__sub_831BDAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24224
	ctx.r3.s64 = ctx.r11.s64 + -24224;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BDAD8"))) PPC_WEAK_FUNC(sub_831BDAD8);
PPC_FUNC_IMPL(__imp__sub_831BDAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18096
	ctx.r9.s64 = ctx.r11.s64 + 18096;
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

__attribute__((alias("__imp__sub_831BDB08"))) PPC_WEAK_FUNC(sub_831BDB08);
PPC_FUNC_IMPL(__imp__sub_831BDB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18080
	ctx.r9.s64 = ctx.r11.s64 + 18080;
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

__attribute__((alias("__imp__sub_831BDB38"))) PPC_WEAK_FUNC(sub_831BDB38);
PPC_FUNC_IMPL(__imp__sub_831BDB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18032
	ctx.r9.s64 = ctx.r11.s64 + 18032;
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

__attribute__((alias("__imp__sub_831BDB68"))) PPC_WEAK_FUNC(sub_831BDB68);
PPC_FUNC_IMPL(__imp__sub_831BDB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18064
	ctx.r9.s64 = ctx.r11.s64 + 18064;
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

__attribute__((alias("__imp__sub_831BDB98"))) PPC_WEAK_FUNC(sub_831BDB98);
PPC_FUNC_IMPL(__imp__sub_831BDB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,18048
	ctx.r10.s64 = ctx.r10.s64 + 18048;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDBB8"))) PPC_WEAK_FUNC(sub_831BDBB8);
PPC_FUNC_IMPL(__imp__sub_831BDBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,18016
	ctx.r10.s64 = ctx.r10.s64 + 18016;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDBD8"))) PPC_WEAK_FUNC(sub_831BDBD8);
PPC_FUNC_IMPL(__imp__sub_831BDBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24232
	ctx.r3.s64 = ctx.r11.s64 + -24232;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BDBE8"))) PPC_WEAK_FUNC(sub_831BDBE8);
PPC_FUNC_IMPL(__imp__sub_831BDBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24208
	ctx.r3.s64 = ctx.r11.s64 + -24208;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BDBF8"))) PPC_WEAK_FUNC(sub_831BDBF8);
PPC_FUNC_IMPL(__imp__sub_831BDBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18304
	ctx.r9.s64 = ctx.r11.s64 + 18304;
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

__attribute__((alias("__imp__sub_831BDC28"))) PPC_WEAK_FUNC(sub_831BDC28);
PPC_FUNC_IMPL(__imp__sub_831BDC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18272
	ctx.r9.s64 = ctx.r11.s64 + 18272;
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

__attribute__((alias("__imp__sub_831BDC58"))) PPC_WEAK_FUNC(sub_831BDC58);
PPC_FUNC_IMPL(__imp__sub_831BDC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18224
	ctx.r9.s64 = ctx.r11.s64 + 18224;
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

__attribute__((alias("__imp__sub_831BDC88"))) PPC_WEAK_FUNC(sub_831BDC88);
PPC_FUNC_IMPL(__imp__sub_831BDC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18256
	ctx.r9.s64 = ctx.r11.s64 + 18256;
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

__attribute__((alias("__imp__sub_831BDCB8"))) PPC_WEAK_FUNC(sub_831BDCB8);
PPC_FUNC_IMPL(__imp__sub_831BDCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,18240
	ctx.r10.s64 = ctx.r10.s64 + 18240;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDCD8"))) PPC_WEAK_FUNC(sub_831BDCD8);
PPC_FUNC_IMPL(__imp__sub_831BDCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,18208
	ctx.r10.s64 = ctx.r10.s64 + 18208;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDCF8"))) PPC_WEAK_FUNC(sub_831BDCF8);
PPC_FUNC_IMPL(__imp__sub_831BDCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,18288
	ctx.r10.s64 = ctx.r10.s64 + 18288;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDD18"))) PPC_WEAK_FUNC(sub_831BDD18);
PPC_FUNC_IMPL(__imp__sub_831BDD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,18136
	ctx.r3.s64 = ctx.r11.s64 + 18136;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BDD28"))) PPC_WEAK_FUNC(sub_831BDD28);
PPC_FUNC_IMPL(__imp__sub_831BDD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24192
	ctx.r3.s64 = ctx.r11.s64 + -24192;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BDD38"))) PPC_WEAK_FUNC(sub_831BDD38);
PPC_FUNC_IMPL(__imp__sub_831BDD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18432
	ctx.r9.s64 = ctx.r11.s64 + 18432;
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

__attribute__((alias("__imp__sub_831BDD68"))) PPC_WEAK_FUNC(sub_831BDD68);
PPC_FUNC_IMPL(__imp__sub_831BDD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18400
	ctx.r9.s64 = ctx.r11.s64 + 18400;
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

__attribute__((alias("__imp__sub_831BDD98"))) PPC_WEAK_FUNC(sub_831BDD98);
PPC_FUNC_IMPL(__imp__sub_831BDD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18352
	ctx.r9.s64 = ctx.r11.s64 + 18352;
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

__attribute__((alias("__imp__sub_831BDDC8"))) PPC_WEAK_FUNC(sub_831BDDC8);
PPC_FUNC_IMPL(__imp__sub_831BDDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18384
	ctx.r9.s64 = ctx.r11.s64 + 18384;
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

__attribute__((alias("__imp__sub_831BDDF8"))) PPC_WEAK_FUNC(sub_831BDDF8);
PPC_FUNC_IMPL(__imp__sub_831BDDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,18368
	ctx.r10.s64 = ctx.r10.s64 + 18368;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDE18"))) PPC_WEAK_FUNC(sub_831BDE18);
PPC_FUNC_IMPL(__imp__sub_831BDE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,18336
	ctx.r10.s64 = ctx.r10.s64 + 18336;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDE38"))) PPC_WEAK_FUNC(sub_831BDE38);
PPC_FUNC_IMPL(__imp__sub_831BDE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,18416
	ctx.r10.s64 = ctx.r10.s64 + 18416;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDE58"))) PPC_WEAK_FUNC(sub_831BDE58);
PPC_FUNC_IMPL(__imp__sub_831BDE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,18456
	ctx.r3.s64 = ctx.r11.s64 + 18456;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BDE68"))) PPC_WEAK_FUNC(sub_831BDE68);
PPC_FUNC_IMPL(__imp__sub_831BDE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24176
	ctx.r3.s64 = ctx.r11.s64 + -24176;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BDE78"))) PPC_WEAK_FUNC(sub_831BDE78);
PPC_FUNC_IMPL(__imp__sub_831BDE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18640
	ctx.r9.s64 = ctx.r11.s64 + 18640;
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

__attribute__((alias("__imp__sub_831BDEA8"))) PPC_WEAK_FUNC(sub_831BDEA8);
PPC_FUNC_IMPL(__imp__sub_831BDEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18624
	ctx.r9.s64 = ctx.r11.s64 + 18624;
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

__attribute__((alias("__imp__sub_831BDED8"))) PPC_WEAK_FUNC(sub_831BDED8);
PPC_FUNC_IMPL(__imp__sub_831BDED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18576
	ctx.r9.s64 = ctx.r11.s64 + 18576;
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

__attribute__((alias("__imp__sub_831BDF08"))) PPC_WEAK_FUNC(sub_831BDF08);
PPC_FUNC_IMPL(__imp__sub_831BDF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18608
	ctx.r9.s64 = ctx.r11.s64 + 18608;
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

__attribute__((alias("__imp__sub_831BDF38"))) PPC_WEAK_FUNC(sub_831BDF38);
PPC_FUNC_IMPL(__imp__sub_831BDF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,18592
	ctx.r10.s64 = ctx.r10.s64 + 18592;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDF58"))) PPC_WEAK_FUNC(sub_831BDF58);
PPC_FUNC_IMPL(__imp__sub_831BDF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,18560
	ctx.r10.s64 = ctx.r10.s64 + 18560;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BDF78"))) PPC_WEAK_FUNC(sub_831BDF78);
PPC_FUNC_IMPL(__imp__sub_831BDF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24088
	ctx.r3.s64 = ctx.r11.s64 + -24088;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BDF88"))) PPC_WEAK_FUNC(sub_831BDF88);
PPC_FUNC_IMPL(__imp__sub_831BDF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19328
	ctx.r9.s64 = ctx.r11.s64 + 19328;
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

__attribute__((alias("__imp__sub_831BDFB8"))) PPC_WEAK_FUNC(sub_831BDFB8);
PPC_FUNC_IMPL(__imp__sub_831BDFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19312
	ctx.r9.s64 = ctx.r11.s64 + 19312;
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

__attribute__((alias("__imp__sub_831BDFE8"))) PPC_WEAK_FUNC(sub_831BDFE8);
PPC_FUNC_IMPL(__imp__sub_831BDFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19264
	ctx.r9.s64 = ctx.r11.s64 + 19264;
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

__attribute__((alias("__imp__sub_831BE018"))) PPC_WEAK_FUNC(sub_831BE018);
PPC_FUNC_IMPL(__imp__sub_831BE018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19296
	ctx.r9.s64 = ctx.r11.s64 + 19296;
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

__attribute__((alias("__imp__sub_831BE048"))) PPC_WEAK_FUNC(sub_831BE048);
PPC_FUNC_IMPL(__imp__sub_831BE048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,19280
	ctx.r10.s64 = ctx.r10.s64 + 19280;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BE068"))) PPC_WEAK_FUNC(sub_831BE068);
PPC_FUNC_IMPL(__imp__sub_831BE068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,19248
	ctx.r10.s64 = ctx.r10.s64 + 19248;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BE088"))) PPC_WEAK_FUNC(sub_831BE088);
PPC_FUNC_IMPL(__imp__sub_831BE088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19456
	ctx.r9.s64 = ctx.r11.s64 + 19456;
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

__attribute__((alias("__imp__sub_831BE0B8"))) PPC_WEAK_FUNC(sub_831BE0B8);
PPC_FUNC_IMPL(__imp__sub_831BE0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19440
	ctx.r9.s64 = ctx.r11.s64 + 19440;
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

__attribute__((alias("__imp__sub_831BE0E8"))) PPC_WEAK_FUNC(sub_831BE0E8);
PPC_FUNC_IMPL(__imp__sub_831BE0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19392
	ctx.r9.s64 = ctx.r11.s64 + 19392;
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

__attribute__((alias("__imp__sub_831BE118"))) PPC_WEAK_FUNC(sub_831BE118);
PPC_FUNC_IMPL(__imp__sub_831BE118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19424
	ctx.r9.s64 = ctx.r11.s64 + 19424;
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

__attribute__((alias("__imp__sub_831BE148"))) PPC_WEAK_FUNC(sub_831BE148);
PPC_FUNC_IMPL(__imp__sub_831BE148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,19408
	ctx.r10.s64 = ctx.r10.s64 + 19408;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BE168"))) PPC_WEAK_FUNC(sub_831BE168);
PPC_FUNC_IMPL(__imp__sub_831BE168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,19376
	ctx.r10.s64 = ctx.r10.s64 + 19376;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BE188"))) PPC_WEAK_FUNC(sub_831BE188);
PPC_FUNC_IMPL(__imp__sub_831BE188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23968
	ctx.r3.s64 = ctx.r11.s64 + -23968;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BE198"))) PPC_WEAK_FUNC(sub_831BE198);
PPC_FUNC_IMPL(__imp__sub_831BE198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19776
	ctx.r9.s64 = ctx.r11.s64 + 19776;
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

__attribute__((alias("__imp__sub_831BE1C8"))) PPC_WEAK_FUNC(sub_831BE1C8);
PPC_FUNC_IMPL(__imp__sub_831BE1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19760
	ctx.r9.s64 = ctx.r11.s64 + 19760;
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

__attribute__((alias("__imp__sub_831BE1F8"))) PPC_WEAK_FUNC(sub_831BE1F8);
PPC_FUNC_IMPL(__imp__sub_831BE1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19712
	ctx.r9.s64 = ctx.r11.s64 + 19712;
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

__attribute__((alias("__imp__sub_831BE228"))) PPC_WEAK_FUNC(sub_831BE228);
PPC_FUNC_IMPL(__imp__sub_831BE228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19744
	ctx.r9.s64 = ctx.r11.s64 + 19744;
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

__attribute__((alias("__imp__sub_831BE258"))) PPC_WEAK_FUNC(sub_831BE258);
PPC_FUNC_IMPL(__imp__sub_831BE258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,19728
	ctx.r10.s64 = ctx.r10.s64 + 19728;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BE278"))) PPC_WEAK_FUNC(sub_831BE278);
PPC_FUNC_IMPL(__imp__sub_831BE278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,19696
	ctx.r10.s64 = ctx.r10.s64 + 19696;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BE298"))) PPC_WEAK_FUNC(sub_831BE298);
PPC_FUNC_IMPL(__imp__sub_831BE298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24072
	ctx.r3.s64 = ctx.r11.s64 + -24072;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BE2A8"))) PPC_WEAK_FUNC(sub_831BE2A8);
PPC_FUNC_IMPL(__imp__sub_831BE2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24048
	ctx.r3.s64 = ctx.r11.s64 + -24048;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BE2B8"))) PPC_WEAK_FUNC(sub_831BE2B8);
PPC_FUNC_IMPL(__imp__sub_831BE2B8) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,19796
	ctx.r31.s64 = ctx.r11.s64 + 19796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BE2DC;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-23952
	ctx.r3.s64 = ctx.r10.s64 + -23952;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BE304;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831BE318"))) PPC_WEAK_FUNC(sub_831BE318);
PPC_FUNC_IMPL(__imp__sub_831BE318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24040
	ctx.r3.s64 = ctx.r11.s64 + -24040;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BE328"))) PPC_WEAK_FUNC(sub_831BE328);
PPC_FUNC_IMPL(__imp__sub_831BE328) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,20052
	ctx.r31.s64 = ctx.r11.s64 + 20052;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BE34C;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-23936
	ctx.r3.s64 = ctx.r10.s64 + -23936;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BE374;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831BE388"))) PPC_WEAK_FUNC(sub_831BE388);
PPC_FUNC_IMPL(__imp__sub_831BE388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24032
	ctx.r3.s64 = ctx.r11.s64 + -24032;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BE398"))) PPC_WEAK_FUNC(sub_831BE398);
PPC_FUNC_IMPL(__imp__sub_831BE398) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,19580
	ctx.r31.s64 = ctx.r11.s64 + 19580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BE3BC;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-23920
	ctx.r3.s64 = ctx.r10.s64 + -23920;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BE3E4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831BE3F8"))) PPC_WEAK_FUNC(sub_831BE3F8);
PPC_FUNC_IMPL(__imp__sub_831BE3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24024
	ctx.r3.s64 = ctx.r11.s64 + -24024;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BE408"))) PPC_WEAK_FUNC(sub_831BE408);
PPC_FUNC_IMPL(__imp__sub_831BE408) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,19472
	ctx.r31.s64 = ctx.r11.s64 + 19472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BE42C;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-23904
	ctx.r3.s64 = ctx.r10.s64 + -23904;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BE454;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831BE468"))) PPC_WEAK_FUNC(sub_831BE468);
PPC_FUNC_IMPL(__imp__sub_831BE468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24016
	ctx.r3.s64 = ctx.r11.s64 + -24016;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BE478"))) PPC_WEAK_FUNC(sub_831BE478);
PPC_FUNC_IMPL(__imp__sub_831BE478) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,19952
	ctx.r31.s64 = ctx.r11.s64 + 19952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BE49C;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-23888
	ctx.r3.s64 = ctx.r10.s64 + -23888;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BE4C4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831BE4D8"))) PPC_WEAK_FUNC(sub_831BE4D8);
PPC_FUNC_IMPL(__imp__sub_831BE4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24008
	ctx.r3.s64 = ctx.r11.s64 + -24008;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BE4E8"))) PPC_WEAK_FUNC(sub_831BE4E8);
PPC_FUNC_IMPL(__imp__sub_831BE4E8) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,20000
	ctx.r31.s64 = ctx.r11.s64 + 20000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BE50C;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-23872
	ctx.r3.s64 = ctx.r10.s64 + -23872;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BE534;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831BE548"))) PPC_WEAK_FUNC(sub_831BE548);
PPC_FUNC_IMPL(__imp__sub_831BE548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24000
	ctx.r3.s64 = ctx.r11.s64 + -24000;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BE558"))) PPC_WEAK_FUNC(sub_831BE558);
PPC_FUNC_IMPL(__imp__sub_831BE558) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,19628
	ctx.r31.s64 = ctx.r11.s64 + 19628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BE57C;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-23856
	ctx.r3.s64 = ctx.r10.s64 + -23856;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BE5A4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831BE5B8"))) PPC_WEAK_FUNC(sub_831BE5B8);
PPC_FUNC_IMPL(__imp__sub_831BE5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23992
	ctx.r3.s64 = ctx.r11.s64 + -23992;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BE5C8"))) PPC_WEAK_FUNC(sub_831BE5C8);
PPC_FUNC_IMPL(__imp__sub_831BE5C8) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,19896
	ctx.r31.s64 = ctx.r11.s64 + 19896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BE5EC;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-23840
	ctx.r3.s64 = ctx.r10.s64 + -23840;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BE614;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831BE628"))) PPC_WEAK_FUNC(sub_831BE628);
PPC_FUNC_IMPL(__imp__sub_831BE628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23984
	ctx.r3.s64 = ctx.r11.s64 + -23984;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BE638"))) PPC_WEAK_FUNC(sub_831BE638);
PPC_FUNC_IMPL(__imp__sub_831BE638) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,19520
	ctx.r31.s64 = ctx.r11.s64 + 19520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BE65C;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-23824
	ctx.r3.s64 = ctx.r10.s64 + -23824;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BE684;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831BE698"))) PPC_WEAK_FUNC(sub_831BE698);
PPC_FUNC_IMPL(__imp__sub_831BE698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23976
	ctx.r3.s64 = ctx.r11.s64 + -23976;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BE6A8"))) PPC_WEAK_FUNC(sub_831BE6A8);
PPC_FUNC_IMPL(__imp__sub_831BE6A8) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,19844
	ctx.r31.s64 = ctx.r11.s64 + 19844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BE6CC;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-23808
	ctx.r3.s64 = ctx.r10.s64 + -23808;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BE6F4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831BE708"))) PPC_WEAK_FUNC(sub_831BE708);
PPC_FUNC_IMPL(__imp__sub_831BE708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23792
	ctx.r3.s64 = ctx.r11.s64 + -23792;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BE718"))) PPC_WEAK_FUNC(sub_831BE718);
PPC_FUNC_IMPL(__imp__sub_831BE718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20320
	ctx.r9.s64 = ctx.r11.s64 + 20320;
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

__attribute__((alias("__imp__sub_831BE748"))) PPC_WEAK_FUNC(sub_831BE748);
PPC_FUNC_IMPL(__imp__sub_831BE748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20288
	ctx.r9.s64 = ctx.r11.s64 + 20288;
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

__attribute__((alias("__imp__sub_831BE778"))) PPC_WEAK_FUNC(sub_831BE778);
PPC_FUNC_IMPL(__imp__sub_831BE778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20240
	ctx.r9.s64 = ctx.r11.s64 + 20240;
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

__attribute__((alias("__imp__sub_831BE7A8"))) PPC_WEAK_FUNC(sub_831BE7A8);
PPC_FUNC_IMPL(__imp__sub_831BE7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20272
	ctx.r9.s64 = ctx.r11.s64 + 20272;
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

__attribute__((alias("__imp__sub_831BE7D8"))) PPC_WEAK_FUNC(sub_831BE7D8);
PPC_FUNC_IMPL(__imp__sub_831BE7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,20256
	ctx.r10.s64 = ctx.r10.s64 + 20256;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BE7F8"))) PPC_WEAK_FUNC(sub_831BE7F8);
PPC_FUNC_IMPL(__imp__sub_831BE7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,20224
	ctx.r10.s64 = ctx.r10.s64 + 20224;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BE818"))) PPC_WEAK_FUNC(sub_831BE818);
PPC_FUNC_IMPL(__imp__sub_831BE818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,20304
	ctx.r10.s64 = ctx.r10.s64 + 20304;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BE838"))) PPC_WEAK_FUNC(sub_831BE838);
PPC_FUNC_IMPL(__imp__sub_831BE838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,20344
	ctx.r3.s64 = ctx.r11.s64 + 20344;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BE848"))) PPC_WEAK_FUNC(sub_831BE848);
PPC_FUNC_IMPL(__imp__sub_831BE848) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,16992
	ctx.r31.s64 = ctx.r11.s64 + 16992;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82d82238
	ctx.lr = 0x831BE870;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29116
	ctx.r10.s64 = ctx.r10.s64 + -29116;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BE8A4;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29140
	ctx.r10.s64 = ctx.r10.s64 + -29140;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BE8D8;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29152
	ctx.r10.s64 = ctx.r10.s64 + -29152;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BE90C;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29164
	ctx.r10.s64 = ctx.r10.s64 + -29164;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BE940;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29188
	ctx.r10.s64 = ctx.r10.s64 + -29188;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BE974;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29204
	ctx.r10.s64 = ctx.r10.s64 + -29204;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x82d82238
	ctx.lr = 0x831BE9A8;
	sub_82D82238(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29220
	ctx.r11.s64 = ctx.r11.s64 + -29220;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BE9DC;
	sub_82D82238(ctx, base);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r9,-29240
	ctx.r30.s64 = ctx.r9.s64 + -29240;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x82d82238
	ctx.lr = 0x831BEA14;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29260
	ctx.r10.s64 = ctx.r10.s64 + -29260;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEA48;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29276
	ctx.r10.s64 = ctx.r10.s64 + -29276;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEA7C;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29300
	ctx.r10.s64 = ctx.r10.s64 + -29300;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEAB0;
	sub_82D82238(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-29316
	ctx.r10.s64 = ctx.r11.s64 + -29316;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r9.u32);
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEAE4;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29336
	ctx.r10.s64 = ctx.r10.s64 + -29336;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEB18;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29348
	ctx.r10.s64 = ctx.r10.s64 + -29348;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEB4C;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29368
	ctx.r10.s64 = ctx.r10.s64 + -29368;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r10,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEB80;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29388
	ctx.r10.s64 = ctx.r10.s64 + -29388;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r10,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// stw r10,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEBB4;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29416
	ctx.r10.s64 = ctx.r10.s64 + -29416;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r10,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// stw r10,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEBE8;
	sub_82D82238(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-6772
	ctx.r10.s64 = ctx.r10.s64 + -6772;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// stw r10,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// stw r10,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEC1C;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29436
	ctx.r10.s64 = ctx.r10.s64 + -29436;
	// stw r10,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// stw r9,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// stw r10,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEC50;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29448
	ctx.r10.s64 = ctx.r10.s64 + -29448;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// stw r10,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// stw r10,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEC84;
	sub_82D82238(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,6784
	ctx.r10.s64 = ctx.r10.s64 + 6784;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r10,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// stw r10,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BECB8;
	sub_82D82238(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-6276
	ctx.r10.s64 = ctx.r10.s64 + -6276;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
	// stw r10,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BECEC;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29464
	ctx.r10.s64 = ctx.r10.s64 + -29464;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stw r9,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r9.u32);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BED1C;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29476
	ctx.r10.s64 = ctx.r10.s64 + -29476;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// stw r10,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BED50;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29496
	ctx.r10.s64 = ctx.r10.s64 + -29496;
	// stw r11,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r11.u32);
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// stw r10,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BED84;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29516
	ctx.r10.s64 = ctx.r10.s64 + -29516;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// stw r10,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// addi r3,r31,632
	ctx.r3.s64 = ctx.r31.s64 + 632;
	// stw r10,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEDB8;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29540
	ctx.r10.s64 = ctx.r10.s64 + -29540;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// stw r10,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r11.u32);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEDEC;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29564
	ctx.r10.s64 = ctx.r10.s64 + -29564;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
	// addi r3,r31,680
	ctx.r3.s64 = ctx.r31.s64 + 680;
	// stw r10,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEE20;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29584
	ctx.r10.s64 = ctx.r10.s64 + -29584;
	// stw r11,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// stw r10,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r10.u32);
	// stw r11,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r11.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEE50;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// stw r10,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r11.u32);
	// addi r3,r31,728
	ctx.r3.s64 = ctx.r31.s64 + 728;
	// stw r10,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEE84;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29616
	ctx.r10.s64 = ctx.r10.s64 + -29616;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r11.u32);
	// stw r10,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
	// stw r10,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r10.u32);
	// addi r3,r31,752
	ctx.r3.s64 = ctx.r31.s64 + 752;
	// bl 0x82d82238
	ctx.lr = 0x831BEEB8;
	sub_82D82238(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r11.u32);
	// stw r9,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r10.u32);
	// addi r3,r31,776
	ctx.r3.s64 = ctx.r31.s64 + 776;
	// stw r11,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r11.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEEE8;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29640
	ctx.r10.s64 = ctx.r10.s64 + -29640;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r11.u32);
	// stw r10,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r11.u32);
	// addi r3,r31,800
	ctx.r3.s64 = ctx.r31.s64 + 800;
	// stw r10,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEF1C;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29672
	ctx.r10.s64 = ctx.r10.s64 + -29672;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r11.u32);
	// stw r10,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// addi r3,r31,824
	ctx.r3.s64 = ctx.r31.s64 + 824;
	// stw r10,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEF50;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29688
	ctx.r10.s64 = ctx.r10.s64 + -29688;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r11.u32);
	// stw r10,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r10.u32);
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// stw r9,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r9.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEF84;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29704
	ctx.r10.s64 = ctx.r10.s64 + -29704;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r11.u32);
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r11.u32);
	// addi r3,r31,872
	ctx.r3.s64 = ctx.r31.s64 + 872;
	// stw r10,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEFB8;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29720
	ctx.r10.s64 = ctx.r10.s64 + -29720;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r11.u32);
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// stw r10,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BEFEC;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29740
	ctx.r10.s64 = ctx.r10.s64 + -29740;
	// stw r11,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// stw r10,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r10.u32);
	// addi r3,r31,920
	ctx.r3.s64 = ctx.r31.s64 + 920;
	// bl 0x82d82238
	ctx.lr = 0x831BF020;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29756
	ctx.r10.s64 = ctx.r10.s64 + -29756;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r11.u32);
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r11.u32);
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// stw r10,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF054;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29772
	ctx.r10.s64 = ctx.r10.s64 + -29772;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r11.u32);
	// stw r10,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r11.u32);
	// addi r3,r31,968
	ctx.r3.s64 = ctx.r31.s64 + 968;
	// stw r10,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF088;
	sub_82D82238(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-29788
	ctx.r10.s64 = ctx.r11.s64 + -29788;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r9.u32);
	// stw r10,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r10.u32);
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF0BC;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29800
	ctx.r10.s64 = ctx.r10.s64 + -29800;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r11.u32);
	// stw r10,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r11.u32);
	// addi r3,r31,1016
	ctx.r3.s64 = ctx.r31.s64 + 1016;
	// stw r10,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF0F0;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29816
	ctx.r10.s64 = ctx.r10.s64 + -29816;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r11.u32);
	// stw r10,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r11.u32);
	// addi r3,r31,1040
	ctx.r3.s64 = ctx.r31.s64 + 1040;
	// stw r10,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF124;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29832
	ctx.r10.s64 = ctx.r10.s64 + -29832;
	// stw r11,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r11.u32);
	// addi r3,r31,1064
	ctx.r3.s64 = ctx.r31.s64 + 1064;
	// stw r10,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF158;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29848
	ctx.r10.s64 = ctx.r10.s64 + -29848;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r11.u32);
	// stw r10,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r11.u32);
	// addi r3,r31,1088
	ctx.r3.s64 = ctx.r31.s64 + 1088;
	// stw r10,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF18C;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29868
	ctx.r10.s64 = ctx.r10.s64 + -29868;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r11.u32);
	// stw r10,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// addi r3,r31,1112
	ctx.r3.s64 = ctx.r31.s64 + 1112;
	// stw r10,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF1C0;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29896
	ctx.r10.s64 = ctx.r10.s64 + -29896;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r11.u32);
	// stw r10,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r11.u32);
	// addi r3,r31,1136
	ctx.r3.s64 = ctx.r31.s64 + 1136;
	// stw r10,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF1F4;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29924
	ctx.r10.s64 = ctx.r10.s64 + -29924;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r11.u32);
	// stw r10,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// addi r3,r31,1160
	ctx.r3.s64 = ctx.r31.s64 + 1160;
	// stw r10,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF228;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29972
	ctx.r10.s64 = ctx.r10.s64 + -29972;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r11.u32);
	// stw r10,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r11.u32);
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// stw r10,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF25C;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-30004
	ctx.r10.s64 = ctx.r10.s64 + -30004;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r11.u32);
	// stw r10,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1208, ctx.r9.u32);
	// stw r11,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r10.u32);
	// addi r3,r31,1208
	ctx.r3.s64 = ctx.r31.s64 + 1208;
	// bl 0x82d82238
	ctx.lr = 0x831BF290;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-32500
	ctx.r10.s64 = ctx.r10.s64 + -32500;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r11.u32);
	// stw r10,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r11.u32);
	// addi r3,r31,1232
	ctx.r3.s64 = ctx.r31.s64 + 1232;
	// stw r10,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF2C4;
	sub_82D82238(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-30016
	ctx.r11.s64 = ctx.r11.s64 + -30016;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r10.u32);
	// stw r11,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r10.u32);
	// addi r3,r31,1256
	ctx.r3.s64 = ctx.r31.s64 + 1256;
	// stw r11,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r11.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF2F8;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-30028
	ctx.r10.s64 = ctx.r10.s64 + -30028;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r11.u32);
	// stw r10,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r11.u32);
	// addi r3,r31,1280
	ctx.r3.s64 = ctx.r31.s64 + 1280;
	// stw r10,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF32C;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-30048
	ctx.r10.s64 = ctx.r10.s64 + -30048;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r11.u32);
	// stw r10,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r11.u32);
	// addi r3,r31,1304
	ctx.r3.s64 = ctx.r31.s64 + 1304;
	// stw r10,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF360;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-30064
	ctx.r10.s64 = ctx.r10.s64 + -30064;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1324, ctx.r11.u32);
	// stw r10,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1328, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r11.u32);
	// addi r3,r31,1328
	ctx.r3.s64 = ctx.r31.s64 + 1328;
	// stw r10,1336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1336, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF394;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-30076
	ctx.r10.s64 = ctx.r10.s64 + -30076;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r11.u32);
	// stw r10,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1352, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r11.u32);
	// stw r10,1360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1360, ctx.r10.u32);
	// addi r3,r31,1352
	ctx.r3.s64 = ctx.r31.s64 + 1352;
	// bl 0x82d82238
	ctx.lr = 0x831BF3C8;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-30088
	ctx.r10.s64 = ctx.r10.s64 + -30088;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r11.u32);
	// stw r10,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r11.u32);
	// addi r3,r31,1376
	ctx.r3.s64 = ctx.r31.s64 + 1376;
	// stw r10,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF3FC;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-30100
	ctx.r10.s64 = ctx.r10.s64 + -30100;
	// stw r11,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// addi r3,r31,1400
	ctx.r3.s64 = ctx.r31.s64 + 1400;
	// stw r10,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r10.u32);
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF42C;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-30112
	ctx.r10.s64 = ctx.r10.s64 + -30112;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// stw r10,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// addi r3,r31,1424
	ctx.r3.s64 = ctx.r31.s64 + 1424;
	// stw r10,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831BF460;
	sub_82D82238(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23776
	ctx.r3.s64 = ctx.r11.s64 + -23776;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BF46C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831BF488"))) PPC_WEAK_FUNC(sub_831BF488);
PPC_FUNC_IMPL(__imp__sub_831BF488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23696
	ctx.r3.s64 = ctx.r11.s64 + -23696;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BF498"))) PPC_WEAK_FUNC(sub_831BF498);
PPC_FUNC_IMPL(__imp__sub_831BF498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21744
	ctx.r9.s64 = ctx.r11.s64 + 21744;
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

__attribute__((alias("__imp__sub_831BF4C8"))) PPC_WEAK_FUNC(sub_831BF4C8);
PPC_FUNC_IMPL(__imp__sub_831BF4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21728
	ctx.r9.s64 = ctx.r11.s64 + 21728;
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

__attribute__((alias("__imp__sub_831BF4F8"))) PPC_WEAK_FUNC(sub_831BF4F8);
PPC_FUNC_IMPL(__imp__sub_831BF4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21680
	ctx.r9.s64 = ctx.r11.s64 + 21680;
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

__attribute__((alias("__imp__sub_831BF528"))) PPC_WEAK_FUNC(sub_831BF528);
PPC_FUNC_IMPL(__imp__sub_831BF528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21712
	ctx.r9.s64 = ctx.r11.s64 + 21712;
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

__attribute__((alias("__imp__sub_831BF558"))) PPC_WEAK_FUNC(sub_831BF558);
PPC_FUNC_IMPL(__imp__sub_831BF558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,21696
	ctx.r10.s64 = ctx.r10.s64 + 21696;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF578"))) PPC_WEAK_FUNC(sub_831BF578);
PPC_FUNC_IMPL(__imp__sub_831BF578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,21664
	ctx.r10.s64 = ctx.r10.s64 + 21664;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF598"))) PPC_WEAK_FUNC(sub_831BF598);
PPC_FUNC_IMPL(__imp__sub_831BF598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23680
	ctx.r3.s64 = ctx.r11.s64 + -23680;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BF5A8"))) PPC_WEAK_FUNC(sub_831BF5A8);
PPC_FUNC_IMPL(__imp__sub_831BF5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21856
	ctx.r9.s64 = ctx.r11.s64 + 21856;
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

__attribute__((alias("__imp__sub_831BF5D8"))) PPC_WEAK_FUNC(sub_831BF5D8);
PPC_FUNC_IMPL(__imp__sub_831BF5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21840
	ctx.r9.s64 = ctx.r11.s64 + 21840;
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

__attribute__((alias("__imp__sub_831BF608"))) PPC_WEAK_FUNC(sub_831BF608);
PPC_FUNC_IMPL(__imp__sub_831BF608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21792
	ctx.r9.s64 = ctx.r11.s64 + 21792;
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

__attribute__((alias("__imp__sub_831BF638"))) PPC_WEAK_FUNC(sub_831BF638);
PPC_FUNC_IMPL(__imp__sub_831BF638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21824
	ctx.r9.s64 = ctx.r11.s64 + 21824;
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

__attribute__((alias("__imp__sub_831BF668"))) PPC_WEAK_FUNC(sub_831BF668);
PPC_FUNC_IMPL(__imp__sub_831BF668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,21808
	ctx.r10.s64 = ctx.r10.s64 + 21808;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF688"))) PPC_WEAK_FUNC(sub_831BF688);
PPC_FUNC_IMPL(__imp__sub_831BF688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,21776
	ctx.r10.s64 = ctx.r10.s64 + 21776;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF6A8"))) PPC_WEAK_FUNC(sub_831BF6A8);
PPC_FUNC_IMPL(__imp__sub_831BF6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23656
	ctx.r3.s64 = ctx.r11.s64 + -23656;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BF6B8"))) PPC_WEAK_FUNC(sub_831BF6B8);
PPC_FUNC_IMPL(__imp__sub_831BF6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22016
	ctx.r9.s64 = ctx.r11.s64 + 22016;
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

__attribute__((alias("__imp__sub_831BF6E8"))) PPC_WEAK_FUNC(sub_831BF6E8);
PPC_FUNC_IMPL(__imp__sub_831BF6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21968
	ctx.r9.s64 = ctx.r11.s64 + 21968;
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

__attribute__((alias("__imp__sub_831BF718"))) PPC_WEAK_FUNC(sub_831BF718);
PPC_FUNC_IMPL(__imp__sub_831BF718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21920
	ctx.r9.s64 = ctx.r11.s64 + 21920;
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

__attribute__((alias("__imp__sub_831BF748"))) PPC_WEAK_FUNC(sub_831BF748);
PPC_FUNC_IMPL(__imp__sub_831BF748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21952
	ctx.r9.s64 = ctx.r11.s64 + 21952;
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

__attribute__((alias("__imp__sub_831BF778"))) PPC_WEAK_FUNC(sub_831BF778);
PPC_FUNC_IMPL(__imp__sub_831BF778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,21936
	ctx.r10.s64 = ctx.r10.s64 + 21936;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF798"))) PPC_WEAK_FUNC(sub_831BF798);
PPC_FUNC_IMPL(__imp__sub_831BF798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,21904
	ctx.r10.s64 = ctx.r10.s64 + 21904;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF7B8"))) PPC_WEAK_FUNC(sub_831BF7B8);
PPC_FUNC_IMPL(__imp__sub_831BF7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,22000
	ctx.r10.s64 = ctx.r10.s64 + 22000;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF7D8"))) PPC_WEAK_FUNC(sub_831BF7D8);
PPC_FUNC_IMPL(__imp__sub_831BF7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,22040
	ctx.r3.s64 = ctx.r11.s64 + 22040;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BF7E8"))) PPC_WEAK_FUNC(sub_831BF7E8);
PPC_FUNC_IMPL(__imp__sub_831BF7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23592
	ctx.r3.s64 = ctx.r11.s64 + -23592;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BF7F8"))) PPC_WEAK_FUNC(sub_831BF7F8);
PPC_FUNC_IMPL(__imp__sub_831BF7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23664
	ctx.r3.s64 = ctx.r11.s64 + -23664;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BF808"))) PPC_WEAK_FUNC(sub_831BF808);
PPC_FUNC_IMPL(__imp__sub_831BF808) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,22116
	ctx.r31.s64 = ctx.r11.s64 + 22116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BF82C;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-23608
	ctx.r3.s64 = ctx.r10.s64 + -23608;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BF854;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831BF868"))) PPC_WEAK_FUNC(sub_831BF868);
PPC_FUNC_IMPL(__imp__sub_831BF868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23640
	ctx.r3.s64 = ctx.r11.s64 + -23640;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BF878"))) PPC_WEAK_FUNC(sub_831BF878);
PPC_FUNC_IMPL(__imp__sub_831BF878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23624
	ctx.r3.s64 = ctx.r11.s64 + -23624;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BF888"))) PPC_WEAK_FUNC(sub_831BF888);
PPC_FUNC_IMPL(__imp__sub_831BF888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23568
	ctx.r3.s64 = ctx.r11.s64 + -23568;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BF898"))) PPC_WEAK_FUNC(sub_831BF898);
PPC_FUNC_IMPL(__imp__sub_831BF898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22272
	ctx.r9.s64 = ctx.r11.s64 + 22272;
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

__attribute__((alias("__imp__sub_831BF8C8"))) PPC_WEAK_FUNC(sub_831BF8C8);
PPC_FUNC_IMPL(__imp__sub_831BF8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22240
	ctx.r9.s64 = ctx.r11.s64 + 22240;
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

__attribute__((alias("__imp__sub_831BF8F8"))) PPC_WEAK_FUNC(sub_831BF8F8);
PPC_FUNC_IMPL(__imp__sub_831BF8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22192
	ctx.r9.s64 = ctx.r11.s64 + 22192;
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

__attribute__((alias("__imp__sub_831BF928"))) PPC_WEAK_FUNC(sub_831BF928);
PPC_FUNC_IMPL(__imp__sub_831BF928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22224
	ctx.r9.s64 = ctx.r11.s64 + 22224;
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

__attribute__((alias("__imp__sub_831BF958"))) PPC_WEAK_FUNC(sub_831BF958);
PPC_FUNC_IMPL(__imp__sub_831BF958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,22208
	ctx.r10.s64 = ctx.r10.s64 + 22208;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF978"))) PPC_WEAK_FUNC(sub_831BF978);
PPC_FUNC_IMPL(__imp__sub_831BF978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,22176
	ctx.r10.s64 = ctx.r10.s64 + 22176;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF998"))) PPC_WEAK_FUNC(sub_831BF998);
PPC_FUNC_IMPL(__imp__sub_831BF998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,22256
	ctx.r10.s64 = ctx.r10.s64 + 22256;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BF9B8"))) PPC_WEAK_FUNC(sub_831BF9B8);
PPC_FUNC_IMPL(__imp__sub_831BF9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,22296
	ctx.r3.s64 = ctx.r11.s64 + 22296;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BF9C8"))) PPC_WEAK_FUNC(sub_831BF9C8);
PPC_FUNC_IMPL(__imp__sub_831BF9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23576
	ctx.r3.s64 = ctx.r11.s64 + -23576;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BF9D8"))) PPC_WEAK_FUNC(sub_831BF9D8);
PPC_FUNC_IMPL(__imp__sub_831BF9D8) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,22372
	ctx.r31.s64 = ctx.r11.s64 + 22372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BF9FC;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-23552
	ctx.r3.s64 = ctx.r10.s64 + -23552;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BFA24;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831BFA38"))) PPC_WEAK_FUNC(sub_831BFA38);
PPC_FUNC_IMPL(__imp__sub_831BFA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23536
	ctx.r3.s64 = ctx.r11.s64 + -23536;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BFA48"))) PPC_WEAK_FUNC(sub_831BFA48);
PPC_FUNC_IMPL(__imp__sub_831BFA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22512
	ctx.r9.s64 = ctx.r11.s64 + 22512;
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

__attribute__((alias("__imp__sub_831BFA78"))) PPC_WEAK_FUNC(sub_831BFA78);
PPC_FUNC_IMPL(__imp__sub_831BFA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22496
	ctx.r9.s64 = ctx.r11.s64 + 22496;
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

__attribute__((alias("__imp__sub_831BFAA8"))) PPC_WEAK_FUNC(sub_831BFAA8);
PPC_FUNC_IMPL(__imp__sub_831BFAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22448
	ctx.r9.s64 = ctx.r11.s64 + 22448;
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

__attribute__((alias("__imp__sub_831BFAD8"))) PPC_WEAK_FUNC(sub_831BFAD8);
PPC_FUNC_IMPL(__imp__sub_831BFAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22480
	ctx.r9.s64 = ctx.r11.s64 + 22480;
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

__attribute__((alias("__imp__sub_831BFB08"))) PPC_WEAK_FUNC(sub_831BFB08);
PPC_FUNC_IMPL(__imp__sub_831BFB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,22464
	ctx.r10.s64 = ctx.r10.s64 + 22464;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BFB28"))) PPC_WEAK_FUNC(sub_831BFB28);
PPC_FUNC_IMPL(__imp__sub_831BFB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,22432
	ctx.r10.s64 = ctx.r10.s64 + 22432;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BFB48"))) PPC_WEAK_FUNC(sub_831BFB48);
PPC_FUNC_IMPL(__imp__sub_831BFB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23520
	ctx.r3.s64 = ctx.r11.s64 + -23520;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BFB58"))) PPC_WEAK_FUNC(sub_831BFB58);
PPC_FUNC_IMPL(__imp__sub_831BFB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22640
	ctx.r9.s64 = ctx.r11.s64 + 22640;
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

__attribute__((alias("__imp__sub_831BFB88"))) PPC_WEAK_FUNC(sub_831BFB88);
PPC_FUNC_IMPL(__imp__sub_831BFB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22624
	ctx.r9.s64 = ctx.r11.s64 + 22624;
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

__attribute__((alias("__imp__sub_831BFBB8"))) PPC_WEAK_FUNC(sub_831BFBB8);
PPC_FUNC_IMPL(__imp__sub_831BFBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22576
	ctx.r9.s64 = ctx.r11.s64 + 22576;
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

__attribute__((alias("__imp__sub_831BFBE8"))) PPC_WEAK_FUNC(sub_831BFBE8);
PPC_FUNC_IMPL(__imp__sub_831BFBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22608
	ctx.r9.s64 = ctx.r11.s64 + 22608;
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

__attribute__((alias("__imp__sub_831BFC18"))) PPC_WEAK_FUNC(sub_831BFC18);
PPC_FUNC_IMPL(__imp__sub_831BFC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,22592
	ctx.r10.s64 = ctx.r10.s64 + 22592;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BFC38"))) PPC_WEAK_FUNC(sub_831BFC38);
PPC_FUNC_IMPL(__imp__sub_831BFC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,22560
	ctx.r10.s64 = ctx.r10.s64 + 22560;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BFC58"))) PPC_WEAK_FUNC(sub_831BFC58);
PPC_FUNC_IMPL(__imp__sub_831BFC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23504
	ctx.r3.s64 = ctx.r11.s64 + -23504;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BFC68"))) PPC_WEAK_FUNC(sub_831BFC68);
PPC_FUNC_IMPL(__imp__sub_831BFC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23480
	ctx.r3.s64 = ctx.r11.s64 + -23480;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BFC78"))) PPC_WEAK_FUNC(sub_831BFC78);
PPC_FUNC_IMPL(__imp__sub_831BFC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22832
	ctx.r9.s64 = ctx.r11.s64 + 22832;
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

__attribute__((alias("__imp__sub_831BFCA8"))) PPC_WEAK_FUNC(sub_831BFCA8);
PPC_FUNC_IMPL(__imp__sub_831BFCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22816
	ctx.r9.s64 = ctx.r11.s64 + 22816;
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

__attribute__((alias("__imp__sub_831BFCD8"))) PPC_WEAK_FUNC(sub_831BFCD8);
PPC_FUNC_IMPL(__imp__sub_831BFCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22768
	ctx.r9.s64 = ctx.r11.s64 + 22768;
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

__attribute__((alias("__imp__sub_831BFD08"))) PPC_WEAK_FUNC(sub_831BFD08);
PPC_FUNC_IMPL(__imp__sub_831BFD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22800
	ctx.r9.s64 = ctx.r11.s64 + 22800;
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

__attribute__((alias("__imp__sub_831BFD38"))) PPC_WEAK_FUNC(sub_831BFD38);
PPC_FUNC_IMPL(__imp__sub_831BFD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,22784
	ctx.r10.s64 = ctx.r10.s64 + 22784;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BFD58"))) PPC_WEAK_FUNC(sub_831BFD58);
PPC_FUNC_IMPL(__imp__sub_831BFD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,22752
	ctx.r10.s64 = ctx.r10.s64 + 22752;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BFD78"))) PPC_WEAK_FUNC(sub_831BFD78);
PPC_FUNC_IMPL(__imp__sub_831BFD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23488
	ctx.r3.s64 = ctx.r11.s64 + -23488;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BFD88"))) PPC_WEAK_FUNC(sub_831BFD88);
PPC_FUNC_IMPL(__imp__sub_831BFD88) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,22692
	ctx.r31.s64 = ctx.r11.s64 + 22692;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BFDAC;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-23464
	ctx.r3.s64 = ctx.r10.s64 + -23464;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BFDD4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831BFDE8"))) PPC_WEAK_FUNC(sub_831BFDE8);
PPC_FUNC_IMPL(__imp__sub_831BFDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23448
	ctx.r3.s64 = ctx.r11.s64 + -23448;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BFDF8"))) PPC_WEAK_FUNC(sub_831BFDF8);
PPC_FUNC_IMPL(__imp__sub_831BFDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22944
	ctx.r9.s64 = ctx.r11.s64 + 22944;
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

__attribute__((alias("__imp__sub_831BFE28"))) PPC_WEAK_FUNC(sub_831BFE28);
PPC_FUNC_IMPL(__imp__sub_831BFE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22928
	ctx.r9.s64 = ctx.r11.s64 + 22928;
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

__attribute__((alias("__imp__sub_831BFE58"))) PPC_WEAK_FUNC(sub_831BFE58);
PPC_FUNC_IMPL(__imp__sub_831BFE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22880
	ctx.r9.s64 = ctx.r11.s64 + 22880;
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

__attribute__((alias("__imp__sub_831BFE88"))) PPC_WEAK_FUNC(sub_831BFE88);
PPC_FUNC_IMPL(__imp__sub_831BFE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22912
	ctx.r9.s64 = ctx.r11.s64 + 22912;
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

__attribute__((alias("__imp__sub_831BFEB8"))) PPC_WEAK_FUNC(sub_831BFEB8);
PPC_FUNC_IMPL(__imp__sub_831BFEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,22896
	ctx.r10.s64 = ctx.r10.s64 + 22896;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BFED8"))) PPC_WEAK_FUNC(sub_831BFED8);
PPC_FUNC_IMPL(__imp__sub_831BFED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,22864
	ctx.r10.s64 = ctx.r10.s64 + 22864;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BFEF8"))) PPC_WEAK_FUNC(sub_831BFEF8);
PPC_FUNC_IMPL(__imp__sub_831BFEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23360
	ctx.r3.s64 = ctx.r11.s64 + -23360;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BFF08"))) PPC_WEAK_FUNC(sub_831BFF08);
PPC_FUNC_IMPL(__imp__sub_831BFF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23088
	ctx.r9.s64 = ctx.r11.s64 + 23088;
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

__attribute__((alias("__imp__sub_831BFF38"))) PPC_WEAK_FUNC(sub_831BFF38);
PPC_FUNC_IMPL(__imp__sub_831BFF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23072
	ctx.r9.s64 = ctx.r11.s64 + 23072;
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

__attribute__((alias("__imp__sub_831BFF68"))) PPC_WEAK_FUNC(sub_831BFF68);
PPC_FUNC_IMPL(__imp__sub_831BFF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23024
	ctx.r9.s64 = ctx.r11.s64 + 23024;
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

__attribute__((alias("__imp__sub_831BFF98"))) PPC_WEAK_FUNC(sub_831BFF98);
PPC_FUNC_IMPL(__imp__sub_831BFF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23056
	ctx.r9.s64 = ctx.r11.s64 + 23056;
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

__attribute__((alias("__imp__sub_831BFFC8"))) PPC_WEAK_FUNC(sub_831BFFC8);
PPC_FUNC_IMPL(__imp__sub_831BFFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,23040
	ctx.r10.s64 = ctx.r10.s64 + 23040;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BFFE8"))) PPC_WEAK_FUNC(sub_831BFFE8);
PPC_FUNC_IMPL(__imp__sub_831BFFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,23008
	ctx.r10.s64 = ctx.r10.s64 + 23008;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0008"))) PPC_WEAK_FUNC(sub_831C0008);
PPC_FUNC_IMPL(__imp__sub_831C0008) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,23104
	ctx.r3.s64 = ctx.r11.s64 + 23104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824aff50
	ctx.lr = 0x831C0028;
	sub_824AFF50(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23344
	ctx.r3.s64 = ctx.r11.s64 + -23344;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C0034;
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

__attribute__((alias("__imp__sub_831C0048"))) PPC_WEAK_FUNC(sub_831C0048);
PPC_FUNC_IMPL(__imp__sub_831C0048) {
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
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,23120
	ctx.r3.s64 = ctx.r11.s64 + 23120;
	// bl 0x82c4aba8
	ctx.lr = 0x831C0060;
	sub_82C4ABA8(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23432
	ctx.r3.s64 = ctx.r11.s64 + -23432;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C006C;
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

__attribute__((alias("__imp__sub_831C0080"))) PPC_WEAK_FUNC(sub_831C0080);
PPC_FUNC_IMPL(__imp__sub_831C0080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23272
	ctx.r3.s64 = ctx.r11.s64 + -23272;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C0090"))) PPC_WEAK_FUNC(sub_831C0090);
PPC_FUNC_IMPL(__imp__sub_831C0090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23312
	ctx.r9.s64 = ctx.r11.s64 + 23312;
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

__attribute__((alias("__imp__sub_831C00C0"))) PPC_WEAK_FUNC(sub_831C00C0);
PPC_FUNC_IMPL(__imp__sub_831C00C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23280
	ctx.r9.s64 = ctx.r11.s64 + 23280;
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

__attribute__((alias("__imp__sub_831C00F0"))) PPC_WEAK_FUNC(sub_831C00F0);
PPC_FUNC_IMPL(__imp__sub_831C00F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23232
	ctx.r9.s64 = ctx.r11.s64 + 23232;
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

__attribute__((alias("__imp__sub_831C0120"))) PPC_WEAK_FUNC(sub_831C0120);
PPC_FUNC_IMPL(__imp__sub_831C0120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23264
	ctx.r9.s64 = ctx.r11.s64 + 23264;
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

__attribute__((alias("__imp__sub_831C0150"))) PPC_WEAK_FUNC(sub_831C0150);
PPC_FUNC_IMPL(__imp__sub_831C0150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,23248
	ctx.r10.s64 = ctx.r10.s64 + 23248;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0170"))) PPC_WEAK_FUNC(sub_831C0170);
PPC_FUNC_IMPL(__imp__sub_831C0170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,23216
	ctx.r10.s64 = ctx.r10.s64 + 23216;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0190"))) PPC_WEAK_FUNC(sub_831C0190);
PPC_FUNC_IMPL(__imp__sub_831C0190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,23296
	ctx.r10.s64 = ctx.r10.s64 + 23296;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C01B0"))) PPC_WEAK_FUNC(sub_831C01B0);
PPC_FUNC_IMPL(__imp__sub_831C01B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,23336
	ctx.r3.s64 = ctx.r11.s64 + 23336;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C01C0"))) PPC_WEAK_FUNC(sub_831C01C0);
PPC_FUNC_IMPL(__imp__sub_831C01C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23256
	ctx.r3.s64 = ctx.r11.s64 + -23256;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C01D0"))) PPC_WEAK_FUNC(sub_831C01D0);
PPC_FUNC_IMPL(__imp__sub_831C01D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23488
	ctx.r9.s64 = ctx.r11.s64 + 23488;
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

__attribute__((alias("__imp__sub_831C0200"))) PPC_WEAK_FUNC(sub_831C0200);
PPC_FUNC_IMPL(__imp__sub_831C0200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23472
	ctx.r9.s64 = ctx.r11.s64 + 23472;
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

__attribute__((alias("__imp__sub_831C0230"))) PPC_WEAK_FUNC(sub_831C0230);
PPC_FUNC_IMPL(__imp__sub_831C0230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23424
	ctx.r9.s64 = ctx.r11.s64 + 23424;
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

__attribute__((alias("__imp__sub_831C0260"))) PPC_WEAK_FUNC(sub_831C0260);
PPC_FUNC_IMPL(__imp__sub_831C0260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23456
	ctx.r9.s64 = ctx.r11.s64 + 23456;
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

__attribute__((alias("__imp__sub_831C0290"))) PPC_WEAK_FUNC(sub_831C0290);
PPC_FUNC_IMPL(__imp__sub_831C0290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,23440
	ctx.r10.s64 = ctx.r10.s64 + 23440;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C02B0"))) PPC_WEAK_FUNC(sub_831C02B0);
PPC_FUNC_IMPL(__imp__sub_831C02B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,23408
	ctx.r10.s64 = ctx.r10.s64 + 23408;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C02D0"))) PPC_WEAK_FUNC(sub_831C02D0);
PPC_FUNC_IMPL(__imp__sub_831C02D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23216
	ctx.r3.s64 = ctx.r11.s64 + -23216;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C02E0"))) PPC_WEAK_FUNC(sub_831C02E0);
PPC_FUNC_IMPL(__imp__sub_831C02E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23632
	ctx.r9.s64 = ctx.r11.s64 + 23632;
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

__attribute__((alias("__imp__sub_831C0310"))) PPC_WEAK_FUNC(sub_831C0310);
PPC_FUNC_IMPL(__imp__sub_831C0310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23616
	ctx.r9.s64 = ctx.r11.s64 + 23616;
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

__attribute__((alias("__imp__sub_831C0340"))) PPC_WEAK_FUNC(sub_831C0340);
PPC_FUNC_IMPL(__imp__sub_831C0340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23568
	ctx.r9.s64 = ctx.r11.s64 + 23568;
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

__attribute__((alias("__imp__sub_831C0370"))) PPC_WEAK_FUNC(sub_831C0370);
PPC_FUNC_IMPL(__imp__sub_831C0370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23600
	ctx.r9.s64 = ctx.r11.s64 + 23600;
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

__attribute__((alias("__imp__sub_831C03A0"))) PPC_WEAK_FUNC(sub_831C03A0);
PPC_FUNC_IMPL(__imp__sub_831C03A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,23584
	ctx.r10.s64 = ctx.r10.s64 + 23584;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C03C0"))) PPC_WEAK_FUNC(sub_831C03C0);
PPC_FUNC_IMPL(__imp__sub_831C03C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,23552
	ctx.r10.s64 = ctx.r10.s64 + 23552;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C03E0"))) PPC_WEAK_FUNC(sub_831C03E0);
PPC_FUNC_IMPL(__imp__sub_831C03E0) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,26488
	ctx.r31.s64 = ctx.r11.s64 + 26488;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82d82238
	ctx.lr = 0x831C0404;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-26184
	ctx.r10.s64 = ctx.r10.s64 + -26184;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831C0438;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-26204
	ctx.r10.s64 = ctx.r10.s64 + -26204;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831C046C;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-26224
	ctx.r10.s64 = ctx.r10.s64 + -26224;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831C04A0;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-26248
	ctx.r10.s64 = ctx.r10.s64 + -26248;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831C04D4;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-26276
	ctx.r10.s64 = ctx.r10.s64 + -26276;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831C0508;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-26296
	ctx.r10.s64 = ctx.r10.s64 + -26296;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x82d82238
	ctx.lr = 0x831C053C;
	sub_82D82238(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-26320
	ctx.r11.s64 = ctx.r11.s64 + -26320;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// bl 0x82d82238
	ctx.lr = 0x831C0570;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-26344
	ctx.r10.s64 = ctx.r10.s64 + -26344;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831C05A4;
	sub_82D82238(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-26364
	ctx.r10.s64 = ctx.r10.s64 + -26364;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// bl 0x82d82238
	ctx.lr = 0x831C05D8;
	sub_82D82238(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23200
	ctx.r3.s64 = ctx.r11.s64 + -23200;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C05E4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C05F8"))) PPC_WEAK_FUNC(sub_831C05F8);
PPC_FUNC_IMPL(__imp__sub_831C05F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23240
	ctx.r3.s64 = ctx.r11.s64 + -23240;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C0608"))) PPC_WEAK_FUNC(sub_831C0608);
PPC_FUNC_IMPL(__imp__sub_831C0608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23120
	ctx.r3.s64 = ctx.r11.s64 + -23120;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C0618"))) PPC_WEAK_FUNC(sub_831C0618);
PPC_FUNC_IMPL(__imp__sub_831C0618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23744
	ctx.r9.s64 = ctx.r11.s64 + 23744;
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

__attribute__((alias("__imp__sub_831C0648"))) PPC_WEAK_FUNC(sub_831C0648);
PPC_FUNC_IMPL(__imp__sub_831C0648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23728
	ctx.r9.s64 = ctx.r11.s64 + 23728;
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

__attribute__((alias("__imp__sub_831C0678"))) PPC_WEAK_FUNC(sub_831C0678);
PPC_FUNC_IMPL(__imp__sub_831C0678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23680
	ctx.r9.s64 = ctx.r11.s64 + 23680;
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

__attribute__((alias("__imp__sub_831C06A8"))) PPC_WEAK_FUNC(sub_831C06A8);
PPC_FUNC_IMPL(__imp__sub_831C06A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23712
	ctx.r9.s64 = ctx.r11.s64 + 23712;
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

__attribute__((alias("__imp__sub_831C06D8"))) PPC_WEAK_FUNC(sub_831C06D8);
PPC_FUNC_IMPL(__imp__sub_831C06D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,23696
	ctx.r10.s64 = ctx.r10.s64 + 23696;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C06F8"))) PPC_WEAK_FUNC(sub_831C06F8);
PPC_FUNC_IMPL(__imp__sub_831C06F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,23664
	ctx.r10.s64 = ctx.r10.s64 + 23664;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0718"))) PPC_WEAK_FUNC(sub_831C0718);
PPC_FUNC_IMPL(__imp__sub_831C0718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23104
	ctx.r3.s64 = ctx.r11.s64 + -23104;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C0728"))) PPC_WEAK_FUNC(sub_831C0728);
PPC_FUNC_IMPL(__imp__sub_831C0728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23904
	ctx.r9.s64 = ctx.r11.s64 + 23904;
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

__attribute__((alias("__imp__sub_831C0758"))) PPC_WEAK_FUNC(sub_831C0758);
PPC_FUNC_IMPL(__imp__sub_831C0758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23888
	ctx.r9.s64 = ctx.r11.s64 + 23888;
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

__attribute__((alias("__imp__sub_831C0788"))) PPC_WEAK_FUNC(sub_831C0788);
PPC_FUNC_IMPL(__imp__sub_831C0788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23840
	ctx.r9.s64 = ctx.r11.s64 + 23840;
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

__attribute__((alias("__imp__sub_831C07B8"))) PPC_WEAK_FUNC(sub_831C07B8);
PPC_FUNC_IMPL(__imp__sub_831C07B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23872
	ctx.r9.s64 = ctx.r11.s64 + 23872;
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

__attribute__((alias("__imp__sub_831C07E8"))) PPC_WEAK_FUNC(sub_831C07E8);
PPC_FUNC_IMPL(__imp__sub_831C07E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,23856
	ctx.r10.s64 = ctx.r10.s64 + 23856;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0808"))) PPC_WEAK_FUNC(sub_831C0808);
PPC_FUNC_IMPL(__imp__sub_831C0808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,23824
	ctx.r10.s64 = ctx.r10.s64 + 23824;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0828"))) PPC_WEAK_FUNC(sub_831C0828);
PPC_FUNC_IMPL(__imp__sub_831C0828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23072
	ctx.r3.s64 = ctx.r11.s64 + -23072;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C0838"))) PPC_WEAK_FUNC(sub_831C0838);
PPC_FUNC_IMPL(__imp__sub_831C0838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24016
	ctx.r9.s64 = ctx.r11.s64 + 24016;
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

__attribute__((alias("__imp__sub_831C0868"))) PPC_WEAK_FUNC(sub_831C0868);
PPC_FUNC_IMPL(__imp__sub_831C0868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24000
	ctx.r9.s64 = ctx.r11.s64 + 24000;
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

__attribute__((alias("__imp__sub_831C0898"))) PPC_WEAK_FUNC(sub_831C0898);
PPC_FUNC_IMPL(__imp__sub_831C0898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23952
	ctx.r9.s64 = ctx.r11.s64 + 23952;
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

__attribute__((alias("__imp__sub_831C08C8"))) PPC_WEAK_FUNC(sub_831C08C8);
PPC_FUNC_IMPL(__imp__sub_831C08C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23984
	ctx.r9.s64 = ctx.r11.s64 + 23984;
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

__attribute__((alias("__imp__sub_831C08F8"))) PPC_WEAK_FUNC(sub_831C08F8);
PPC_FUNC_IMPL(__imp__sub_831C08F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,23968
	ctx.r10.s64 = ctx.r10.s64 + 23968;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0918"))) PPC_WEAK_FUNC(sub_831C0918);
PPC_FUNC_IMPL(__imp__sub_831C0918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,23936
	ctx.r10.s64 = ctx.r10.s64 + 23936;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0938"))) PPC_WEAK_FUNC(sub_831C0938);
PPC_FUNC_IMPL(__imp__sub_831C0938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23056
	ctx.r3.s64 = ctx.r11.s64 + -23056;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C0948"))) PPC_WEAK_FUNC(sub_831C0948);
PPC_FUNC_IMPL(__imp__sub_831C0948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24128
	ctx.r9.s64 = ctx.r11.s64 + 24128;
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

__attribute__((alias("__imp__sub_831C0978"))) PPC_WEAK_FUNC(sub_831C0978);
PPC_FUNC_IMPL(__imp__sub_831C0978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24112
	ctx.r9.s64 = ctx.r11.s64 + 24112;
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

__attribute__((alias("__imp__sub_831C09A8"))) PPC_WEAK_FUNC(sub_831C09A8);
PPC_FUNC_IMPL(__imp__sub_831C09A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24064
	ctx.r9.s64 = ctx.r11.s64 + 24064;
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

__attribute__((alias("__imp__sub_831C09D8"))) PPC_WEAK_FUNC(sub_831C09D8);
PPC_FUNC_IMPL(__imp__sub_831C09D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24096
	ctx.r9.s64 = ctx.r11.s64 + 24096;
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

__attribute__((alias("__imp__sub_831C0A08"))) PPC_WEAK_FUNC(sub_831C0A08);
PPC_FUNC_IMPL(__imp__sub_831C0A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,24080
	ctx.r10.s64 = ctx.r10.s64 + 24080;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0A28"))) PPC_WEAK_FUNC(sub_831C0A28);
PPC_FUNC_IMPL(__imp__sub_831C0A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,24048
	ctx.r10.s64 = ctx.r10.s64 + 24048;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0A48"))) PPC_WEAK_FUNC(sub_831C0A48);
PPC_FUNC_IMPL(__imp__sub_831C0A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23040
	ctx.r3.s64 = ctx.r11.s64 + -23040;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C0A58"))) PPC_WEAK_FUNC(sub_831C0A58);
PPC_FUNC_IMPL(__imp__sub_831C0A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24272
	ctx.r9.s64 = ctx.r11.s64 + 24272;
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

__attribute__((alias("__imp__sub_831C0A88"))) PPC_WEAK_FUNC(sub_831C0A88);
PPC_FUNC_IMPL(__imp__sub_831C0A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24240
	ctx.r9.s64 = ctx.r11.s64 + 24240;
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

__attribute__((alias("__imp__sub_831C0AB8"))) PPC_WEAK_FUNC(sub_831C0AB8);
PPC_FUNC_IMPL(__imp__sub_831C0AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24192
	ctx.r9.s64 = ctx.r11.s64 + 24192;
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

__attribute__((alias("__imp__sub_831C0AE8"))) PPC_WEAK_FUNC(sub_831C0AE8);
PPC_FUNC_IMPL(__imp__sub_831C0AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24224
	ctx.r9.s64 = ctx.r11.s64 + 24224;
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

__attribute__((alias("__imp__sub_831C0B18"))) PPC_WEAK_FUNC(sub_831C0B18);
PPC_FUNC_IMPL(__imp__sub_831C0B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,24208
	ctx.r10.s64 = ctx.r10.s64 + 24208;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0B38"))) PPC_WEAK_FUNC(sub_831C0B38);
PPC_FUNC_IMPL(__imp__sub_831C0B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,24176
	ctx.r10.s64 = ctx.r10.s64 + 24176;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0B58"))) PPC_WEAK_FUNC(sub_831C0B58);
PPC_FUNC_IMPL(__imp__sub_831C0B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,24256
	ctx.r10.s64 = ctx.r10.s64 + 24256;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0B78"))) PPC_WEAK_FUNC(sub_831C0B78);
PPC_FUNC_IMPL(__imp__sub_831C0B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,24296
	ctx.r3.s64 = ctx.r11.s64 + 24296;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C0B88"))) PPC_WEAK_FUNC(sub_831C0B88);
PPC_FUNC_IMPL(__imp__sub_831C0B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23000
	ctx.r3.s64 = ctx.r11.s64 + -23000;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C0B98"))) PPC_WEAK_FUNC(sub_831C0B98);
PPC_FUNC_IMPL(__imp__sub_831C0B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24448
	ctx.r9.s64 = ctx.r11.s64 + 24448;
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

__attribute__((alias("__imp__sub_831C0BC8"))) PPC_WEAK_FUNC(sub_831C0BC8);
PPC_FUNC_IMPL(__imp__sub_831C0BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24432
	ctx.r9.s64 = ctx.r11.s64 + 24432;
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

__attribute__((alias("__imp__sub_831C0BF8"))) PPC_WEAK_FUNC(sub_831C0BF8);
PPC_FUNC_IMPL(__imp__sub_831C0BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24384
	ctx.r9.s64 = ctx.r11.s64 + 24384;
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

__attribute__((alias("__imp__sub_831C0C28"))) PPC_WEAK_FUNC(sub_831C0C28);
PPC_FUNC_IMPL(__imp__sub_831C0C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24416
	ctx.r9.s64 = ctx.r11.s64 + 24416;
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

__attribute__((alias("__imp__sub_831C0C58"))) PPC_WEAK_FUNC(sub_831C0C58);
PPC_FUNC_IMPL(__imp__sub_831C0C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,24400
	ctx.r10.s64 = ctx.r10.s64 + 24400;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0C78"))) PPC_WEAK_FUNC(sub_831C0C78);
PPC_FUNC_IMPL(__imp__sub_831C0C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,24368
	ctx.r10.s64 = ctx.r10.s64 + 24368;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0C98"))) PPC_WEAK_FUNC(sub_831C0C98);
PPC_FUNC_IMPL(__imp__sub_831C0C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-23024
	ctx.r3.s64 = ctx.r11.s64 + -23024;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C0CA8"))) PPC_WEAK_FUNC(sub_831C0CA8);
PPC_FUNC_IMPL(__imp__sub_831C0CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22984
	ctx.r3.s64 = ctx.r11.s64 + -22984;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C0CB8"))) PPC_WEAK_FUNC(sub_831C0CB8);
PPC_FUNC_IMPL(__imp__sub_831C0CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24592
	ctx.r9.s64 = ctx.r11.s64 + 24592;
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

__attribute__((alias("__imp__sub_831C0CE8"))) PPC_WEAK_FUNC(sub_831C0CE8);
PPC_FUNC_IMPL(__imp__sub_831C0CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24560
	ctx.r9.s64 = ctx.r11.s64 + 24560;
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

__attribute__((alias("__imp__sub_831C0D18"))) PPC_WEAK_FUNC(sub_831C0D18);
PPC_FUNC_IMPL(__imp__sub_831C0D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24496
	ctx.r9.s64 = ctx.r11.s64 + 24496;
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

__attribute__((alias("__imp__sub_831C0D48"))) PPC_WEAK_FUNC(sub_831C0D48);
PPC_FUNC_IMPL(__imp__sub_831C0D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24544
	ctx.r9.s64 = ctx.r11.s64 + 24544;
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

__attribute__((alias("__imp__sub_831C0D78"))) PPC_WEAK_FUNC(sub_831C0D78);
PPC_FUNC_IMPL(__imp__sub_831C0D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,24528
	ctx.r10.s64 = ctx.r10.s64 + 24528;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0D98"))) PPC_WEAK_FUNC(sub_831C0D98);
PPC_FUNC_IMPL(__imp__sub_831C0D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,24480
	ctx.r10.s64 = ctx.r10.s64 + 24480;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0DB8"))) PPC_WEAK_FUNC(sub_831C0DB8);
PPC_FUNC_IMPL(__imp__sub_831C0DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,24576
	ctx.r10.s64 = ctx.r10.s64 + 24576;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0DD8"))) PPC_WEAK_FUNC(sub_831C0DD8);
PPC_FUNC_IMPL(__imp__sub_831C0DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,24632
	ctx.r3.s64 = ctx.r11.s64 + 24632;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C0DE8"))) PPC_WEAK_FUNC(sub_831C0DE8);
PPC_FUNC_IMPL(__imp__sub_831C0DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,-24144
	ctx.r11.s64 = ctx.r11.s64 + -24144;
	// addi r10,r10,24608
	ctx.r10.s64 = ctx.r10.s64 + 24608;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0E08"))) PPC_WEAK_FUNC(sub_831C0E08);
PPC_FUNC_IMPL(__imp__sub_831C0E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,24512
	ctx.r10.s64 = ctx.r10.s64 + 24512;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0E28"))) PPC_WEAK_FUNC(sub_831C0E28);
PPC_FUNC_IMPL(__imp__sub_831C0E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22968
	ctx.r3.s64 = ctx.r11.s64 + -22968;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C0E38"))) PPC_WEAK_FUNC(sub_831C0E38);
PPC_FUNC_IMPL(__imp__sub_831C0E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24784
	ctx.r9.s64 = ctx.r11.s64 + 24784;
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

__attribute__((alias("__imp__sub_831C0E68"))) PPC_WEAK_FUNC(sub_831C0E68);
PPC_FUNC_IMPL(__imp__sub_831C0E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24768
	ctx.r9.s64 = ctx.r11.s64 + 24768;
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

__attribute__((alias("__imp__sub_831C0E98"))) PPC_WEAK_FUNC(sub_831C0E98);
PPC_FUNC_IMPL(__imp__sub_831C0E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24720
	ctx.r9.s64 = ctx.r11.s64 + 24720;
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

__attribute__((alias("__imp__sub_831C0EC8"))) PPC_WEAK_FUNC(sub_831C0EC8);
PPC_FUNC_IMPL(__imp__sub_831C0EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24752
	ctx.r9.s64 = ctx.r11.s64 + 24752;
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

__attribute__((alias("__imp__sub_831C0EF8"))) PPC_WEAK_FUNC(sub_831C0EF8);
PPC_FUNC_IMPL(__imp__sub_831C0EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,24736
	ctx.r10.s64 = ctx.r10.s64 + 24736;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0F18"))) PPC_WEAK_FUNC(sub_831C0F18);
PPC_FUNC_IMPL(__imp__sub_831C0F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,24704
	ctx.r10.s64 = ctx.r10.s64 + 24704;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C0F38"))) PPC_WEAK_FUNC(sub_831C0F38);
PPC_FUNC_IMPL(__imp__sub_831C0F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22944
	ctx.r3.s64 = ctx.r11.s64 + -22944;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C0F48"))) PPC_WEAK_FUNC(sub_831C0F48);
PPC_FUNC_IMPL(__imp__sub_831C0F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24992
	ctx.r9.s64 = ctx.r11.s64 + 24992;
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

__attribute__((alias("__imp__sub_831C0F78"))) PPC_WEAK_FUNC(sub_831C0F78);
PPC_FUNC_IMPL(__imp__sub_831C0F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24944
	ctx.r9.s64 = ctx.r11.s64 + 24944;
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

__attribute__((alias("__imp__sub_831C0FA8"))) PPC_WEAK_FUNC(sub_831C0FA8);
PPC_FUNC_IMPL(__imp__sub_831C0FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24896
	ctx.r9.s64 = ctx.r11.s64 + 24896;
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

__attribute__((alias("__imp__sub_831C0FD8"))) PPC_WEAK_FUNC(sub_831C0FD8);
PPC_FUNC_IMPL(__imp__sub_831C0FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24928
	ctx.r9.s64 = ctx.r11.s64 + 24928;
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

__attribute__((alias("__imp__sub_831C1008"))) PPC_WEAK_FUNC(sub_831C1008);
PPC_FUNC_IMPL(__imp__sub_831C1008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,24912
	ctx.r10.s64 = ctx.r10.s64 + 24912;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1028"))) PPC_WEAK_FUNC(sub_831C1028);
PPC_FUNC_IMPL(__imp__sub_831C1028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,24880
	ctx.r10.s64 = ctx.r10.s64 + 24880;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1048"))) PPC_WEAK_FUNC(sub_831C1048);
PPC_FUNC_IMPL(__imp__sub_831C1048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22856
	ctx.r3.s64 = ctx.r11.s64 + -22856;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1058"))) PPC_WEAK_FUNC(sub_831C1058);
PPC_FUNC_IMPL(__imp__sub_831C1058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22896
	ctx.r3.s64 = ctx.r11.s64 + -22896;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1068"))) PPC_WEAK_FUNC(sub_831C1068);
PPC_FUNC_IMPL(__imp__sub_831C1068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22952
	ctx.r3.s64 = ctx.r11.s64 + -22952;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1078"))) PPC_WEAK_FUNC(sub_831C1078);
PPC_FUNC_IMPL(__imp__sub_831C1078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22928
	ctx.r3.s64 = ctx.r11.s64 + -22928;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1088"))) PPC_WEAK_FUNC(sub_831C1088);
PPC_FUNC_IMPL(__imp__sub_831C1088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22912
	ctx.r3.s64 = ctx.r11.s64 + -22912;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1098"))) PPC_WEAK_FUNC(sub_831C1098);
PPC_FUNC_IMPL(__imp__sub_831C1098) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a6f530
	ctx.lr = 0x831C10AC;
	sub_82A6F530(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,10000
	ctx.r9.s64 = 10000;
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lis r8,-31932
	ctx.r8.s64 = -2092695552;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divdu r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 ? ctx.r11.u64 / ctx.r9.u64 : 0;
	// std r11,24960(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24960, ctx.r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C10E0"))) PPC_WEAK_FUNC(sub_831C10E0);
PPC_FUNC_IMPL(__imp__sub_831C10E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22800
	ctx.r3.s64 = ctx.r11.s64 + -22800;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C10F0"))) PPC_WEAK_FUNC(sub_831C10F0);
PPC_FUNC_IMPL(__imp__sub_831C10F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22808
	ctx.r3.s64 = ctx.r11.s64 + -22808;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1100"))) PPC_WEAK_FUNC(sub_831C1100);
PPC_FUNC_IMPL(__imp__sub_831C1100) {
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
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,25272
	ctx.r3.s64 = ctx.r11.s64 + 25272;
	// bl 0x82c00f20
	ctx.lr = 0x831C1118;
	sub_82C00F20(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22840
	ctx.r3.s64 = ctx.r11.s64 + -22840;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C1124;
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

__attribute__((alias("__imp__sub_831C1138"))) PPC_WEAK_FUNC(sub_831C1138);
PPC_FUNC_IMPL(__imp__sub_831C1138) {
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
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,25244
	ctx.r3.s64 = ctx.r11.s64 + 25244;
	// bl 0x825e79f0
	ctx.lr = 0x831C1154;
	sub_825E79F0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22696
	ctx.r3.s64 = ctx.r11.s64 + -22696;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C1160;
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

__attribute__((alias("__imp__sub_831C1170"))) PPC_WEAK_FUNC(sub_831C1170);
PPC_FUNC_IMPL(__imp__sub_831C1170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,25424
	ctx.r9.s64 = ctx.r11.s64 + 25424;
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

__attribute__((alias("__imp__sub_831C11A0"))) PPC_WEAK_FUNC(sub_831C11A0);
PPC_FUNC_IMPL(__imp__sub_831C11A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,25200
	ctx.r9.s64 = ctx.r11.s64 + 25200;
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

__attribute__((alias("__imp__sub_831C11D0"))) PPC_WEAK_FUNC(sub_831C11D0);
PPC_FUNC_IMPL(__imp__sub_831C11D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,25152
	ctx.r9.s64 = ctx.r11.s64 + 25152;
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

__attribute__((alias("__imp__sub_831C1200"))) PPC_WEAK_FUNC(sub_831C1200);
PPC_FUNC_IMPL(__imp__sub_831C1200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,25184
	ctx.r9.s64 = ctx.r11.s64 + 25184;
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

__attribute__((alias("__imp__sub_831C1230"))) PPC_WEAK_FUNC(sub_831C1230);
PPC_FUNC_IMPL(__imp__sub_831C1230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,25168
	ctx.r10.s64 = ctx.r10.s64 + 25168;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1250"))) PPC_WEAK_FUNC(sub_831C1250);
PPC_FUNC_IMPL(__imp__sub_831C1250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,25136
	ctx.r10.s64 = ctx.r10.s64 + 25136;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1270"))) PPC_WEAK_FUNC(sub_831C1270);
PPC_FUNC_IMPL(__imp__sub_831C1270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22784
	ctx.r3.s64 = ctx.r11.s64 + -22784;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1280"))) PPC_WEAK_FUNC(sub_831C1280);
PPC_FUNC_IMPL(__imp__sub_831C1280) {
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
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,25216
	ctx.r3.s64 = ctx.r11.s64 + 25216;
	// bl 0x824683b0
	ctx.lr = 0x831C129C;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22824
	ctx.r3.s64 = ctx.r11.s64 + -22824;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C12A8;
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

__attribute__((alias("__imp__sub_831C12B8"))) PPC_WEAK_FUNC(sub_831C12B8);
PPC_FUNC_IMPL(__imp__sub_831C12B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22600
	ctx.r3.s64 = ctx.r11.s64 + -22600;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C12C8"))) PPC_WEAK_FUNC(sub_831C12C8);
PPC_FUNC_IMPL(__imp__sub_831C12C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26640
	ctx.r9.s64 = ctx.r11.s64 + 26640;
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

__attribute__((alias("__imp__sub_831C12F8"))) PPC_WEAK_FUNC(sub_831C12F8);
PPC_FUNC_IMPL(__imp__sub_831C12F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26608
	ctx.r9.s64 = ctx.r11.s64 + 26608;
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

__attribute__((alias("__imp__sub_831C1328"))) PPC_WEAK_FUNC(sub_831C1328);
PPC_FUNC_IMPL(__imp__sub_831C1328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,25520
	ctx.r9.s64 = ctx.r11.s64 + 25520;
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

__attribute__((alias("__imp__sub_831C1358"))) PPC_WEAK_FUNC(sub_831C1358);
PPC_FUNC_IMPL(__imp__sub_831C1358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26592
	ctx.r9.s64 = ctx.r11.s64 + 26592;
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

__attribute__((alias("__imp__sub_831C1388"))) PPC_WEAK_FUNC(sub_831C1388);
PPC_FUNC_IMPL(__imp__sub_831C1388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,25600
	ctx.r10.s64 = ctx.r10.s64 + 25600;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C13A8"))) PPC_WEAK_FUNC(sub_831C13A8);
PPC_FUNC_IMPL(__imp__sub_831C13A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,25504
	ctx.r10.s64 = ctx.r10.s64 + 25504;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C13C8"))) PPC_WEAK_FUNC(sub_831C13C8);
PPC_FUNC_IMPL(__imp__sub_831C13C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// li r10,233
	ctx.r10.s64 = 233;
	// addi r11,r11,25616
	ctx.r11.s64 = ctx.r11.s64 + 25616;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_831C13E0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x831c13e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831C13E0;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22408
	ctx.r3.s64 = ctx.r11.s64 + -22408;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C13F8"))) PPC_WEAK_FUNC(sub_831C13F8);
PPC_FUNC_IMPL(__imp__sub_831C13F8) {
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
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// li r31,14
	ctx.r31.s64 = 14;
	// addi r30,r11,25536
	ctx.r30.s64 = ctx.r11.s64 + 25536;
loc_831C1418:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0e238
	ctx.lr = 0x831C1420;
	sub_82A0E238(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bge 0x831c1418
	if (!ctx.cr0.lt) goto loc_831C1418;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22328
	ctx.r3.s64 = ctx.r11.s64 + -22328;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C1438;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C1450"))) PPC_WEAK_FUNC(sub_831C1450);
PPC_FUNC_IMPL(__imp__sub_831C1450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r11,26548
	ctx.r11.s64 = ctx.r11.s64 + 26548;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_831C1468:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x831c1468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831C1468;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22248
	ctx.r3.s64 = ctx.r11.s64 + -22248;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1480"))) PPC_WEAK_FUNC(sub_831C1480);
PPC_FUNC_IMPL(__imp__sub_831C1480) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,26624
	ctx.r9.s64 = ctx.r10.s64 + 26624;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// stw r11,26624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26624, ctx.r11.u32);
	// addi r3,r8,-22584
	ctx.r3.s64 = ctx.r8.s64 + -22584;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C14A8"))) PPC_WEAK_FUNC(sub_831C14A8);
PPC_FUNC_IMPL(__imp__sub_831C14A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22168
	ctx.r3.s64 = ctx.r11.s64 + -22168;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C14B8"))) PPC_WEAK_FUNC(sub_831C14B8);
PPC_FUNC_IMPL(__imp__sub_831C14B8) {
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
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,26656
	ctx.r3.s64 = ctx.r11.s64 + 26656;
	// bl 0x824683b0
	ctx.lr = 0x831C14D4;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22632
	ctx.r3.s64 = ctx.r11.s64 + -22632;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C14E0;
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

__attribute__((alias("__imp__sub_831C14F0"))) PPC_WEAK_FUNC(sub_831C14F0);
PPC_FUNC_IMPL(__imp__sub_831C14F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22096
	ctx.r3.s64 = ctx.r11.s64 + -22096;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1500"))) PPC_WEAK_FUNC(sub_831C1500);
PPC_FUNC_IMPL(__imp__sub_831C1500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22504
	ctx.r3.s64 = ctx.r11.s64 + -22504;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1510"))) PPC_WEAK_FUNC(sub_831C1510);
PPC_FUNC_IMPL(__imp__sub_831C1510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22480
	ctx.r3.s64 = ctx.r11.s64 + -22480;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1520"))) PPC_WEAK_FUNC(sub_831C1520);
PPC_FUNC_IMPL(__imp__sub_831C1520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22456
	ctx.r3.s64 = ctx.r11.s64 + -22456;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1530"))) PPC_WEAK_FUNC(sub_831C1530);
PPC_FUNC_IMPL(__imp__sub_831C1530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22432
	ctx.r3.s64 = ctx.r11.s64 + -22432;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1540"))) PPC_WEAK_FUNC(sub_831C1540);
PPC_FUNC_IMPL(__imp__sub_831C1540) {
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
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,26684
	ctx.r3.s64 = ctx.r11.s64 + 26684;
	// bl 0x824683b0
	ctx.lr = 0x831C155C;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-22616
	ctx.r3.s64 = ctx.r11.s64 + -22616;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C1568;
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

__attribute__((alias("__imp__sub_831C1578"))) PPC_WEAK_FUNC(sub_831C1578);
PPC_FUNC_IMPL(__imp__sub_831C1578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21960
	ctx.r3.s64 = ctx.r11.s64 + -21960;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1588"))) PPC_WEAK_FUNC(sub_831C1588);
PPC_FUNC_IMPL(__imp__sub_831C1588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26880
	ctx.r9.s64 = ctx.r11.s64 + 26880;
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

__attribute__((alias("__imp__sub_831C15B8"))) PPC_WEAK_FUNC(sub_831C15B8);
PPC_FUNC_IMPL(__imp__sub_831C15B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26848
	ctx.r9.s64 = ctx.r11.s64 + 26848;
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

__attribute__((alias("__imp__sub_831C15E8"))) PPC_WEAK_FUNC(sub_831C15E8);
PPC_FUNC_IMPL(__imp__sub_831C15E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26800
	ctx.r9.s64 = ctx.r11.s64 + 26800;
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

__attribute__((alias("__imp__sub_831C1618"))) PPC_WEAK_FUNC(sub_831C1618);
PPC_FUNC_IMPL(__imp__sub_831C1618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26832
	ctx.r9.s64 = ctx.r11.s64 + 26832;
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

__attribute__((alias("__imp__sub_831C1648"))) PPC_WEAK_FUNC(sub_831C1648);
PPC_FUNC_IMPL(__imp__sub_831C1648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,26816
	ctx.r10.s64 = ctx.r10.s64 + 26816;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1668"))) PPC_WEAK_FUNC(sub_831C1668);
PPC_FUNC_IMPL(__imp__sub_831C1668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,26784
	ctx.r10.s64 = ctx.r10.s64 + 26784;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1688"))) PPC_WEAK_FUNC(sub_831C1688);
PPC_FUNC_IMPL(__imp__sub_831C1688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,26864
	ctx.r10.s64 = ctx.r10.s64 + 26864;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C16A8"))) PPC_WEAK_FUNC(sub_831C16A8);
PPC_FUNC_IMPL(__imp__sub_831C16A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,26896
	ctx.r3.s64 = ctx.r11.s64 + 26896;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C16B8"))) PPC_WEAK_FUNC(sub_831C16B8);
PPC_FUNC_IMPL(__imp__sub_831C16B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21984
	ctx.r3.s64 = ctx.r11.s64 + -21984;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C16C8"))) PPC_WEAK_FUNC(sub_831C16C8);
PPC_FUNC_IMPL(__imp__sub_831C16C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21976
	ctx.r3.s64 = ctx.r11.s64 + -21976;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C16D8"))) PPC_WEAK_FUNC(sub_831C16D8);
PPC_FUNC_IMPL(__imp__sub_831C16D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21968
	ctx.r3.s64 = ctx.r11.s64 + -21968;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C16E8"))) PPC_WEAK_FUNC(sub_831C16E8);
PPC_FUNC_IMPL(__imp__sub_831C16E8) {
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
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,26972
	ctx.r31.s64 = ctx.r11.s64 + 26972;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831C170C;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-21928
	ctx.r3.s64 = ctx.r10.s64 + -21928;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C1734;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C1748"))) PPC_WEAK_FUNC(sub_831C1748);
PPC_FUNC_IMPL(__imp__sub_831C1748) {
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
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r11,26772
	ctx.r3.s64 = ctx.r11.s64 + 26772;
	// bl 0x82a0e238
	ctx.lr = 0x831C1760;
	sub_82A0E238(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21944
	ctx.r3.s64 = ctx.r11.s64 + -21944;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C176C;
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

__attribute__((alias("__imp__sub_831C1780"))) PPC_WEAK_FUNC(sub_831C1780);
PPC_FUNC_IMPL(__imp__sub_831C1780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21904
	ctx.r3.s64 = ctx.r11.s64 + -21904;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1790"))) PPC_WEAK_FUNC(sub_831C1790);
PPC_FUNC_IMPL(__imp__sub_831C1790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27120
	ctx.r9.s64 = ctx.r11.s64 + 27120;
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

__attribute__((alias("__imp__sub_831C17C0"))) PPC_WEAK_FUNC(sub_831C17C0);
PPC_FUNC_IMPL(__imp__sub_831C17C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27104
	ctx.r9.s64 = ctx.r11.s64 + 27104;
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

__attribute__((alias("__imp__sub_831C17F0"))) PPC_WEAK_FUNC(sub_831C17F0);
PPC_FUNC_IMPL(__imp__sub_831C17F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27056
	ctx.r9.s64 = ctx.r11.s64 + 27056;
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

__attribute__((alias("__imp__sub_831C1820"))) PPC_WEAK_FUNC(sub_831C1820);
PPC_FUNC_IMPL(__imp__sub_831C1820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27088
	ctx.r9.s64 = ctx.r11.s64 + 27088;
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

__attribute__((alias("__imp__sub_831C1850"))) PPC_WEAK_FUNC(sub_831C1850);
PPC_FUNC_IMPL(__imp__sub_831C1850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,27072
	ctx.r10.s64 = ctx.r10.s64 + 27072;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1870"))) PPC_WEAK_FUNC(sub_831C1870);
PPC_FUNC_IMPL(__imp__sub_831C1870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,27040
	ctx.r10.s64 = ctx.r10.s64 + 27040;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1890"))) PPC_WEAK_FUNC(sub_831C1890);
PPC_FUNC_IMPL(__imp__sub_831C1890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21912
	ctx.r3.s64 = ctx.r11.s64 + -21912;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C18A0"))) PPC_WEAK_FUNC(sub_831C18A0);
PPC_FUNC_IMPL(__imp__sub_831C18A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21888
	ctx.r3.s64 = ctx.r11.s64 + -21888;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C18B0"))) PPC_WEAK_FUNC(sub_831C18B0);
PPC_FUNC_IMPL(__imp__sub_831C18B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27280
	ctx.r9.s64 = ctx.r11.s64 + 27280;
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

__attribute__((alias("__imp__sub_831C18E0"))) PPC_WEAK_FUNC(sub_831C18E0);
PPC_FUNC_IMPL(__imp__sub_831C18E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27264
	ctx.r9.s64 = ctx.r11.s64 + 27264;
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

__attribute__((alias("__imp__sub_831C1910"))) PPC_WEAK_FUNC(sub_831C1910);
PPC_FUNC_IMPL(__imp__sub_831C1910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27216
	ctx.r9.s64 = ctx.r11.s64 + 27216;
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

__attribute__((alias("__imp__sub_831C1940"))) PPC_WEAK_FUNC(sub_831C1940);
PPC_FUNC_IMPL(__imp__sub_831C1940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27248
	ctx.r9.s64 = ctx.r11.s64 + 27248;
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

__attribute__((alias("__imp__sub_831C1970"))) PPC_WEAK_FUNC(sub_831C1970);
PPC_FUNC_IMPL(__imp__sub_831C1970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,27232
	ctx.r10.s64 = ctx.r10.s64 + 27232;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1990"))) PPC_WEAK_FUNC(sub_831C1990);
PPC_FUNC_IMPL(__imp__sub_831C1990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,27200
	ctx.r10.s64 = ctx.r10.s64 + 27200;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C19B0"))) PPC_WEAK_FUNC(sub_831C19B0);
PPC_FUNC_IMPL(__imp__sub_831C19B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21856
	ctx.r3.s64 = ctx.r11.s64 + -21856;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C19C0"))) PPC_WEAK_FUNC(sub_831C19C0);
PPC_FUNC_IMPL(__imp__sub_831C19C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27392
	ctx.r9.s64 = ctx.r11.s64 + 27392;
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

__attribute__((alias("__imp__sub_831C19F0"))) PPC_WEAK_FUNC(sub_831C19F0);
PPC_FUNC_IMPL(__imp__sub_831C19F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27376
	ctx.r9.s64 = ctx.r11.s64 + 27376;
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

__attribute__((alias("__imp__sub_831C1A20"))) PPC_WEAK_FUNC(sub_831C1A20);
PPC_FUNC_IMPL(__imp__sub_831C1A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27328
	ctx.r9.s64 = ctx.r11.s64 + 27328;
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

__attribute__((alias("__imp__sub_831C1A50"))) PPC_WEAK_FUNC(sub_831C1A50);
PPC_FUNC_IMPL(__imp__sub_831C1A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27360
	ctx.r9.s64 = ctx.r11.s64 + 27360;
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

__attribute__((alias("__imp__sub_831C1A80"))) PPC_WEAK_FUNC(sub_831C1A80);
PPC_FUNC_IMPL(__imp__sub_831C1A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,27344
	ctx.r10.s64 = ctx.r10.s64 + 27344;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1AA0"))) PPC_WEAK_FUNC(sub_831C1AA0);
PPC_FUNC_IMPL(__imp__sub_831C1AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,27312
	ctx.r10.s64 = ctx.r10.s64 + 27312;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1AC0"))) PPC_WEAK_FUNC(sub_831C1AC0);
PPC_FUNC_IMPL(__imp__sub_831C1AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21840
	ctx.r3.s64 = ctx.r11.s64 + -21840;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1AD0"))) PPC_WEAK_FUNC(sub_831C1AD0);
PPC_FUNC_IMPL(__imp__sub_831C1AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27504
	ctx.r9.s64 = ctx.r11.s64 + 27504;
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

__attribute__((alias("__imp__sub_831C1B00"))) PPC_WEAK_FUNC(sub_831C1B00);
PPC_FUNC_IMPL(__imp__sub_831C1B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27488
	ctx.r9.s64 = ctx.r11.s64 + 27488;
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

__attribute__((alias("__imp__sub_831C1B30"))) PPC_WEAK_FUNC(sub_831C1B30);
PPC_FUNC_IMPL(__imp__sub_831C1B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27440
	ctx.r9.s64 = ctx.r11.s64 + 27440;
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

__attribute__((alias("__imp__sub_831C1B60"))) PPC_WEAK_FUNC(sub_831C1B60);
PPC_FUNC_IMPL(__imp__sub_831C1B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27472
	ctx.r9.s64 = ctx.r11.s64 + 27472;
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

__attribute__((alias("__imp__sub_831C1B90"))) PPC_WEAK_FUNC(sub_831C1B90);
PPC_FUNC_IMPL(__imp__sub_831C1B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,27456
	ctx.r10.s64 = ctx.r10.s64 + 27456;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1BB0"))) PPC_WEAK_FUNC(sub_831C1BB0);
PPC_FUNC_IMPL(__imp__sub_831C1BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,27424
	ctx.r10.s64 = ctx.r10.s64 + 27424;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1BD0"))) PPC_WEAK_FUNC(sub_831C1BD0);
PPC_FUNC_IMPL(__imp__sub_831C1BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21824
	ctx.r3.s64 = ctx.r11.s64 + -21824;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1BE0"))) PPC_WEAK_FUNC(sub_831C1BE0);
PPC_FUNC_IMPL(__imp__sub_831C1BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27616
	ctx.r9.s64 = ctx.r11.s64 + 27616;
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

__attribute__((alias("__imp__sub_831C1C10"))) PPC_WEAK_FUNC(sub_831C1C10);
PPC_FUNC_IMPL(__imp__sub_831C1C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27600
	ctx.r9.s64 = ctx.r11.s64 + 27600;
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

__attribute__((alias("__imp__sub_831C1C40"))) PPC_WEAK_FUNC(sub_831C1C40);
PPC_FUNC_IMPL(__imp__sub_831C1C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27552
	ctx.r9.s64 = ctx.r11.s64 + 27552;
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

__attribute__((alias("__imp__sub_831C1C70"))) PPC_WEAK_FUNC(sub_831C1C70);
PPC_FUNC_IMPL(__imp__sub_831C1C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27584
	ctx.r9.s64 = ctx.r11.s64 + 27584;
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

__attribute__((alias("__imp__sub_831C1CA0"))) PPC_WEAK_FUNC(sub_831C1CA0);
PPC_FUNC_IMPL(__imp__sub_831C1CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,27568
	ctx.r10.s64 = ctx.r10.s64 + 27568;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1CC0"))) PPC_WEAK_FUNC(sub_831C1CC0);
PPC_FUNC_IMPL(__imp__sub_831C1CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,27536
	ctx.r10.s64 = ctx.r10.s64 + 27536;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1CE0"))) PPC_WEAK_FUNC(sub_831C1CE0);
PPC_FUNC_IMPL(__imp__sub_831C1CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21808
	ctx.r3.s64 = ctx.r11.s64 + -21808;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1CF0"))) PPC_WEAK_FUNC(sub_831C1CF0);
PPC_FUNC_IMPL(__imp__sub_831C1CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27728
	ctx.r9.s64 = ctx.r11.s64 + 27728;
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

__attribute__((alias("__imp__sub_831C1D20"))) PPC_WEAK_FUNC(sub_831C1D20);
PPC_FUNC_IMPL(__imp__sub_831C1D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27712
	ctx.r9.s64 = ctx.r11.s64 + 27712;
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

__attribute__((alias("__imp__sub_831C1D50"))) PPC_WEAK_FUNC(sub_831C1D50);
PPC_FUNC_IMPL(__imp__sub_831C1D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27664
	ctx.r9.s64 = ctx.r11.s64 + 27664;
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

__attribute__((alias("__imp__sub_831C1D80"))) PPC_WEAK_FUNC(sub_831C1D80);
PPC_FUNC_IMPL(__imp__sub_831C1D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27696
	ctx.r9.s64 = ctx.r11.s64 + 27696;
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

__attribute__((alias("__imp__sub_831C1DB0"))) PPC_WEAK_FUNC(sub_831C1DB0);
PPC_FUNC_IMPL(__imp__sub_831C1DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,27680
	ctx.r10.s64 = ctx.r10.s64 + 27680;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1DD0"))) PPC_WEAK_FUNC(sub_831C1DD0);
PPC_FUNC_IMPL(__imp__sub_831C1DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,27648
	ctx.r10.s64 = ctx.r10.s64 + 27648;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1DF0"))) PPC_WEAK_FUNC(sub_831C1DF0);
PPC_FUNC_IMPL(__imp__sub_831C1DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21792
	ctx.r3.s64 = ctx.r11.s64 + -21792;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1E00"))) PPC_WEAK_FUNC(sub_831C1E00);
PPC_FUNC_IMPL(__imp__sub_831C1E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27840
	ctx.r9.s64 = ctx.r11.s64 + 27840;
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

__attribute__((alias("__imp__sub_831C1E30"))) PPC_WEAK_FUNC(sub_831C1E30);
PPC_FUNC_IMPL(__imp__sub_831C1E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27824
	ctx.r9.s64 = ctx.r11.s64 + 27824;
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

__attribute__((alias("__imp__sub_831C1E60"))) PPC_WEAK_FUNC(sub_831C1E60);
PPC_FUNC_IMPL(__imp__sub_831C1E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27776
	ctx.r9.s64 = ctx.r11.s64 + 27776;
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

__attribute__((alias("__imp__sub_831C1E90"))) PPC_WEAK_FUNC(sub_831C1E90);
PPC_FUNC_IMPL(__imp__sub_831C1E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27808
	ctx.r9.s64 = ctx.r11.s64 + 27808;
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

__attribute__((alias("__imp__sub_831C1EC0"))) PPC_WEAK_FUNC(sub_831C1EC0);
PPC_FUNC_IMPL(__imp__sub_831C1EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,27792
	ctx.r10.s64 = ctx.r10.s64 + 27792;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1EE0"))) PPC_WEAK_FUNC(sub_831C1EE0);
PPC_FUNC_IMPL(__imp__sub_831C1EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,27760
	ctx.r10.s64 = ctx.r10.s64 + 27760;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1F00"))) PPC_WEAK_FUNC(sub_831C1F00);
PPC_FUNC_IMPL(__imp__sub_831C1F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21776
	ctx.r3.s64 = ctx.r11.s64 + -21776;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C1F10"))) PPC_WEAK_FUNC(sub_831C1F10);
PPC_FUNC_IMPL(__imp__sub_831C1F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27952
	ctx.r9.s64 = ctx.r11.s64 + 27952;
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

__attribute__((alias("__imp__sub_831C1F40"))) PPC_WEAK_FUNC(sub_831C1F40);
PPC_FUNC_IMPL(__imp__sub_831C1F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27936
	ctx.r9.s64 = ctx.r11.s64 + 27936;
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

__attribute__((alias("__imp__sub_831C1F70"))) PPC_WEAK_FUNC(sub_831C1F70);
PPC_FUNC_IMPL(__imp__sub_831C1F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27888
	ctx.r9.s64 = ctx.r11.s64 + 27888;
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

__attribute__((alias("__imp__sub_831C1FA0"))) PPC_WEAK_FUNC(sub_831C1FA0);
PPC_FUNC_IMPL(__imp__sub_831C1FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,27920
	ctx.r9.s64 = ctx.r11.s64 + 27920;
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

__attribute__((alias("__imp__sub_831C1FD0"))) PPC_WEAK_FUNC(sub_831C1FD0);
PPC_FUNC_IMPL(__imp__sub_831C1FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,27904
	ctx.r10.s64 = ctx.r10.s64 + 27904;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C1FF0"))) PPC_WEAK_FUNC(sub_831C1FF0);
PPC_FUNC_IMPL(__imp__sub_831C1FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,27872
	ctx.r10.s64 = ctx.r10.s64 + 27872;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2010"))) PPC_WEAK_FUNC(sub_831C2010);
PPC_FUNC_IMPL(__imp__sub_831C2010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21760
	ctx.r3.s64 = ctx.r11.s64 + -21760;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C2020"))) PPC_WEAK_FUNC(sub_831C2020);
PPC_FUNC_IMPL(__imp__sub_831C2020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,28064
	ctx.r9.s64 = ctx.r11.s64 + 28064;
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

__attribute__((alias("__imp__sub_831C2050"))) PPC_WEAK_FUNC(sub_831C2050);
PPC_FUNC_IMPL(__imp__sub_831C2050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,28048
	ctx.r9.s64 = ctx.r11.s64 + 28048;
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

__attribute__((alias("__imp__sub_831C2080"))) PPC_WEAK_FUNC(sub_831C2080);
PPC_FUNC_IMPL(__imp__sub_831C2080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,28000
	ctx.r9.s64 = ctx.r11.s64 + 28000;
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

__attribute__((alias("__imp__sub_831C20B0"))) PPC_WEAK_FUNC(sub_831C20B0);
PPC_FUNC_IMPL(__imp__sub_831C20B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,28032
	ctx.r9.s64 = ctx.r11.s64 + 28032;
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

__attribute__((alias("__imp__sub_831C20E0"))) PPC_WEAK_FUNC(sub_831C20E0);
PPC_FUNC_IMPL(__imp__sub_831C20E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,28016
	ctx.r10.s64 = ctx.r10.s64 + 28016;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2100"))) PPC_WEAK_FUNC(sub_831C2100);
PPC_FUNC_IMPL(__imp__sub_831C2100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2120"))) PPC_WEAK_FUNC(sub_831C2120);
PPC_FUNC_IMPL(__imp__sub_831C2120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21744
	ctx.r3.s64 = ctx.r11.s64 + -21744;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C2130"))) PPC_WEAK_FUNC(sub_831C2130);
PPC_FUNC_IMPL(__imp__sub_831C2130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,28176
	ctx.r9.s64 = ctx.r11.s64 + 28176;
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

__attribute__((alias("__imp__sub_831C2160"))) PPC_WEAK_FUNC(sub_831C2160);
PPC_FUNC_IMPL(__imp__sub_831C2160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,28160
	ctx.r9.s64 = ctx.r11.s64 + 28160;
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

__attribute__((alias("__imp__sub_831C2190"))) PPC_WEAK_FUNC(sub_831C2190);
PPC_FUNC_IMPL(__imp__sub_831C2190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,28112
	ctx.r9.s64 = ctx.r11.s64 + 28112;
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

__attribute__((alias("__imp__sub_831C21C0"))) PPC_WEAK_FUNC(sub_831C21C0);
PPC_FUNC_IMPL(__imp__sub_831C21C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,28144
	ctx.r9.s64 = ctx.r11.s64 + 28144;
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

__attribute__((alias("__imp__sub_831C21F0"))) PPC_WEAK_FUNC(sub_831C21F0);
PPC_FUNC_IMPL(__imp__sub_831C21F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,28128
	ctx.r10.s64 = ctx.r10.s64 + 28128;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2210"))) PPC_WEAK_FUNC(sub_831C2210);
PPC_FUNC_IMPL(__imp__sub_831C2210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,28096
	ctx.r10.s64 = ctx.r10.s64 + 28096;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2230"))) PPC_WEAK_FUNC(sub_831C2230);
PPC_FUNC_IMPL(__imp__sub_831C2230) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,504
	ctx.r3.s64 = ctx.r11.s64 + 504;
	// bl 0x82ca7538
	ctx.lr = 0x831C2248;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,28196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2260"))) PPC_WEAK_FUNC(sub_831C2260);
PPC_FUNC_IMPL(__imp__sub_831C2260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21704
	ctx.r3.s64 = ctx.r11.s64 + -21704;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C2270"))) PPC_WEAK_FUNC(sub_831C2270);
PPC_FUNC_IMPL(__imp__sub_831C2270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,30688
	ctx.r9.s64 = ctx.r11.s64 + 30688;
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

__attribute__((alias("__imp__sub_831C22A0"))) PPC_WEAK_FUNC(sub_831C22A0);
PPC_FUNC_IMPL(__imp__sub_831C22A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,30576
	ctx.r9.s64 = ctx.r11.s64 + 30576;
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

__attribute__((alias("__imp__sub_831C22D0"))) PPC_WEAK_FUNC(sub_831C22D0);
PPC_FUNC_IMPL(__imp__sub_831C22D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,30432
	ctx.r9.s64 = ctx.r11.s64 + 30432;
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

__attribute__((alias("__imp__sub_831C2300"))) PPC_WEAK_FUNC(sub_831C2300);
PPC_FUNC_IMPL(__imp__sub_831C2300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,30544
	ctx.r9.s64 = ctx.r11.s64 + 30544;
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

__attribute__((alias("__imp__sub_831C2330"))) PPC_WEAK_FUNC(sub_831C2330);
PPC_FUNC_IMPL(__imp__sub_831C2330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,30528
	ctx.r10.s64 = ctx.r10.s64 + 30528;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2350"))) PPC_WEAK_FUNC(sub_831C2350);
PPC_FUNC_IMPL(__imp__sub_831C2350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,30400
	ctx.r10.s64 = ctx.r10.s64 + 30400;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2370"))) PPC_WEAK_FUNC(sub_831C2370);
PPC_FUNC_IMPL(__imp__sub_831C2370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21728
	ctx.r3.s64 = ctx.r11.s64 + -21728;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C2380"))) PPC_WEAK_FUNC(sub_831C2380);
PPC_FUNC_IMPL(__imp__sub_831C2380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21720
	ctx.r3.s64 = ctx.r11.s64 + -21720;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C2390"))) PPC_WEAK_FUNC(sub_831C2390);
PPC_FUNC_IMPL(__imp__sub_831C2390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21712
	ctx.r3.s64 = ctx.r11.s64 + -21712;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C23A0"))) PPC_WEAK_FUNC(sub_831C23A0);
PPC_FUNC_IMPL(__imp__sub_831C23A0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2040
	ctx.r3.s64 = ctx.r11.s64 + 2040;
	// bl 0x82ca7538
	ctx.lr = 0x831C23B8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C23D0"))) PPC_WEAK_FUNC(sub_831C23D0);
PPC_FUNC_IMPL(__imp__sub_831C23D0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2060
	ctx.r3.s64 = ctx.r11.s64 + 2060;
	// bl 0x82ca7538
	ctx.lr = 0x831C23E8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2400"))) PPC_WEAK_FUNC(sub_831C2400);
PPC_FUNC_IMPL(__imp__sub_831C2400) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2084
	ctx.r3.s64 = ctx.r11.s64 + 2084;
	// bl 0x82ca7538
	ctx.lr = 0x831C2418;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2430"))) PPC_WEAK_FUNC(sub_831C2430);
PPC_FUNC_IMPL(__imp__sub_831C2430) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2116
	ctx.r3.s64 = ctx.r11.s64 + 2116;
	// bl 0x82ca7538
	ctx.lr = 0x831C2448;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2460"))) PPC_WEAK_FUNC(sub_831C2460);
PPC_FUNC_IMPL(__imp__sub_831C2460) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2136
	ctx.r3.s64 = ctx.r11.s64 + 2136;
	// bl 0x82ca7538
	ctx.lr = 0x831C2478;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2490"))) PPC_WEAK_FUNC(sub_831C2490);
PPC_FUNC_IMPL(__imp__sub_831C2490) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2156
	ctx.r3.s64 = ctx.r11.s64 + 2156;
	// bl 0x82ca7538
	ctx.lr = 0x831C24A8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C24C0"))) PPC_WEAK_FUNC(sub_831C24C0);
PPC_FUNC_IMPL(__imp__sub_831C24C0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2172
	ctx.r3.s64 = ctx.r11.s64 + 2172;
	// bl 0x82ca7538
	ctx.lr = 0x831C24D8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C24F0"))) PPC_WEAK_FUNC(sub_831C24F0);
PPC_FUNC_IMPL(__imp__sub_831C24F0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2188
	ctx.r3.s64 = ctx.r11.s64 + 2188;
	// bl 0x82ca7538
	ctx.lr = 0x831C2508;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2520"))) PPC_WEAK_FUNC(sub_831C2520);
PPC_FUNC_IMPL(__imp__sub_831C2520) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2208
	ctx.r3.s64 = ctx.r11.s64 + 2208;
	// bl 0x82ca7538
	ctx.lr = 0x831C2538;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2550"))) PPC_WEAK_FUNC(sub_831C2550);
PPC_FUNC_IMPL(__imp__sub_831C2550) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2232
	ctx.r3.s64 = ctx.r11.s64 + 2232;
	// bl 0x82ca7538
	ctx.lr = 0x831C2568;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2580"))) PPC_WEAK_FUNC(sub_831C2580);
PPC_FUNC_IMPL(__imp__sub_831C2580) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2256
	ctx.r3.s64 = ctx.r11.s64 + 2256;
	// bl 0x82ca7538
	ctx.lr = 0x831C2598;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30808, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C25B0"))) PPC_WEAK_FUNC(sub_831C25B0);
PPC_FUNC_IMPL(__imp__sub_831C25B0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2272
	ctx.r3.s64 = ctx.r11.s64 + 2272;
	// bl 0x82ca7538
	ctx.lr = 0x831C25C8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C25E0"))) PPC_WEAK_FUNC(sub_831C25E0);
PPC_FUNC_IMPL(__imp__sub_831C25E0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2292
	ctx.r3.s64 = ctx.r11.s64 + 2292;
	// bl 0x82ca7538
	ctx.lr = 0x831C25F8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2610"))) PPC_WEAK_FUNC(sub_831C2610);
PPC_FUNC_IMPL(__imp__sub_831C2610) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2308
	ctx.r3.s64 = ctx.r11.s64 + 2308;
	// bl 0x82ca7538
	ctx.lr = 0x831C2628;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2640"))) PPC_WEAK_FUNC(sub_831C2640);
PPC_FUNC_IMPL(__imp__sub_831C2640) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2332
	ctx.r3.s64 = ctx.r11.s64 + 2332;
	// bl 0x82ca7538
	ctx.lr = 0x831C2658;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2670"))) PPC_WEAK_FUNC(sub_831C2670);
PPC_FUNC_IMPL(__imp__sub_831C2670) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2356
	ctx.r3.s64 = ctx.r11.s64 + 2356;
	// bl 0x82ca7538
	ctx.lr = 0x831C2688;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C26A0"))) PPC_WEAK_FUNC(sub_831C26A0);
PPC_FUNC_IMPL(__imp__sub_831C26A0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2376
	ctx.r3.s64 = ctx.r11.s64 + 2376;
	// bl 0x82ca7538
	ctx.lr = 0x831C26B8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C26D0"))) PPC_WEAK_FUNC(sub_831C26D0);
PPC_FUNC_IMPL(__imp__sub_831C26D0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2392
	ctx.r3.s64 = ctx.r11.s64 + 2392;
	// bl 0x82ca7538
	ctx.lr = 0x831C26E8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2700"))) PPC_WEAK_FUNC(sub_831C2700);
PPC_FUNC_IMPL(__imp__sub_831C2700) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2412
	ctx.r3.s64 = ctx.r11.s64 + 2412;
	// bl 0x82ca7538
	ctx.lr = 0x831C2718;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2730"))) PPC_WEAK_FUNC(sub_831C2730);
PPC_FUNC_IMPL(__imp__sub_831C2730) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2428
	ctx.r3.s64 = ctx.r11.s64 + 2428;
	// bl 0x82ca7538
	ctx.lr = 0x831C2748;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30812, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2760"))) PPC_WEAK_FUNC(sub_831C2760);
PPC_FUNC_IMPL(__imp__sub_831C2760) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2448
	ctx.r3.s64 = ctx.r11.s64 + 2448;
	// bl 0x82ca7538
	ctx.lr = 0x831C2778;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2790"))) PPC_WEAK_FUNC(sub_831C2790);
PPC_FUNC_IMPL(__imp__sub_831C2790) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2464
	ctx.r3.s64 = ctx.r11.s64 + 2464;
	// bl 0x82ca7538
	ctx.lr = 0x831C27A8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C27C0"))) PPC_WEAK_FUNC(sub_831C27C0);
PPC_FUNC_IMPL(__imp__sub_831C27C0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2480
	ctx.r3.s64 = ctx.r11.s64 + 2480;
	// bl 0x82ca7538
	ctx.lr = 0x831C27D8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C27F0"))) PPC_WEAK_FUNC(sub_831C27F0);
PPC_FUNC_IMPL(__imp__sub_831C27F0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2500
	ctx.r3.s64 = ctx.r11.s64 + 2500;
	// bl 0x82ca7538
	ctx.lr = 0x831C2808;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2820"))) PPC_WEAK_FUNC(sub_831C2820);
PPC_FUNC_IMPL(__imp__sub_831C2820) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2528
	ctx.r3.s64 = ctx.r11.s64 + 2528;
	// bl 0x82ca7538
	ctx.lr = 0x831C2838;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30596, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2850"))) PPC_WEAK_FUNC(sub_831C2850);
PPC_FUNC_IMPL(__imp__sub_831C2850) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2552
	ctx.r3.s64 = ctx.r11.s64 + 2552;
	// bl 0x82ca7538
	ctx.lr = 0x831C2868;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2880"))) PPC_WEAK_FUNC(sub_831C2880);
PPC_FUNC_IMPL(__imp__sub_831C2880) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2568
	ctx.r3.s64 = ctx.r11.s64 + 2568;
	// bl 0x82ca7538
	ctx.lr = 0x831C2898;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C28B0"))) PPC_WEAK_FUNC(sub_831C28B0);
PPC_FUNC_IMPL(__imp__sub_831C28B0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2588
	ctx.r3.s64 = ctx.r11.s64 + 2588;
	// bl 0x82ca7538
	ctx.lr = 0x831C28C8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C28E0"))) PPC_WEAK_FUNC(sub_831C28E0);
PPC_FUNC_IMPL(__imp__sub_831C28E0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2604
	ctx.r3.s64 = ctx.r11.s64 + 2604;
	// bl 0x82ca7538
	ctx.lr = 0x831C28F8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2910"))) PPC_WEAK_FUNC(sub_831C2910);
PPC_FUNC_IMPL(__imp__sub_831C2910) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2624
	ctx.r3.s64 = ctx.r11.s64 + 2624;
	// bl 0x82ca7538
	ctx.lr = 0x831C2928;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2940"))) PPC_WEAK_FUNC(sub_831C2940);
PPC_FUNC_IMPL(__imp__sub_831C2940) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2648
	ctx.r3.s64 = ctx.r11.s64 + 2648;
	// bl 0x82ca7538
	ctx.lr = 0x831C2958;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2970"))) PPC_WEAK_FUNC(sub_831C2970);
PPC_FUNC_IMPL(__imp__sub_831C2970) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2668
	ctx.r3.s64 = ctx.r11.s64 + 2668;
	// bl 0x82ca7538
	ctx.lr = 0x831C2988;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C29A0"))) PPC_WEAK_FUNC(sub_831C29A0);
PPC_FUNC_IMPL(__imp__sub_831C29A0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2688
	ctx.r3.s64 = ctx.r11.s64 + 2688;
	// bl 0x82ca7538
	ctx.lr = 0x831C29B8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C29D0"))) PPC_WEAK_FUNC(sub_831C29D0);
PPC_FUNC_IMPL(__imp__sub_831C29D0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2708
	ctx.r3.s64 = ctx.r11.s64 + 2708;
	// bl 0x82ca7538
	ctx.lr = 0x831C29E8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2A00"))) PPC_WEAK_FUNC(sub_831C2A00);
PPC_FUNC_IMPL(__imp__sub_831C2A00) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2728
	ctx.r3.s64 = ctx.r11.s64 + 2728;
	// bl 0x82ca7538
	ctx.lr = 0x831C2A18;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2A30"))) PPC_WEAK_FUNC(sub_831C2A30);
PPC_FUNC_IMPL(__imp__sub_831C2A30) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2748
	ctx.r3.s64 = ctx.r11.s64 + 2748;
	// bl 0x82ca7538
	ctx.lr = 0x831C2A48;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2A60"))) PPC_WEAK_FUNC(sub_831C2A60);
PPC_FUNC_IMPL(__imp__sub_831C2A60) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2764
	ctx.r3.s64 = ctx.r11.s64 + 2764;
	// bl 0x82ca7538
	ctx.lr = 0x831C2A78;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2A90"))) PPC_WEAK_FUNC(sub_831C2A90);
PPC_FUNC_IMPL(__imp__sub_831C2A90) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2780
	ctx.r3.s64 = ctx.r11.s64 + 2780;
	// bl 0x82ca7538
	ctx.lr = 0x831C2AA8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2AC0"))) PPC_WEAK_FUNC(sub_831C2AC0);
PPC_FUNC_IMPL(__imp__sub_831C2AC0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2796
	ctx.r3.s64 = ctx.r11.s64 + 2796;
	// bl 0x82ca7538
	ctx.lr = 0x831C2AD8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30804, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2AF0"))) PPC_WEAK_FUNC(sub_831C2AF0);
PPC_FUNC_IMPL(__imp__sub_831C2AF0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2816
	ctx.r3.s64 = ctx.r11.s64 + 2816;
	// bl 0x82ca7538
	ctx.lr = 0x831C2B08;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2B20"))) PPC_WEAK_FUNC(sub_831C2B20);
PPC_FUNC_IMPL(__imp__sub_831C2B20) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// bl 0x82ca7538
	ctx.lr = 0x831C2B38;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2B50"))) PPC_WEAK_FUNC(sub_831C2B50);
PPC_FUNC_IMPL(__imp__sub_831C2B50) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2852
	ctx.r3.s64 = ctx.r11.s64 + 2852;
	// bl 0x82ca7538
	ctx.lr = 0x831C2B68;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2B80"))) PPC_WEAK_FUNC(sub_831C2B80);
PPC_FUNC_IMPL(__imp__sub_831C2B80) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2888
	ctx.r3.s64 = ctx.r11.s64 + 2888;
	// bl 0x82ca7538
	ctx.lr = 0x831C2B98;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30704, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2BB0"))) PPC_WEAK_FUNC(sub_831C2BB0);
PPC_FUNC_IMPL(__imp__sub_831C2BB0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x82ca7538
	ctx.lr = 0x831C2BC8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2BE0"))) PPC_WEAK_FUNC(sub_831C2BE0);
PPC_FUNC_IMPL(__imp__sub_831C2BE0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2960
	ctx.r3.s64 = ctx.r11.s64 + 2960;
	// bl 0x82ca7538
	ctx.lr = 0x831C2BF8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2C10"))) PPC_WEAK_FUNC(sub_831C2C10);
PPC_FUNC_IMPL(__imp__sub_831C2C10) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,2996
	ctx.r3.s64 = ctx.r11.s64 + 2996;
	// bl 0x82ca7538
	ctx.lr = 0x831C2C28;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2C40"))) PPC_WEAK_FUNC(sub_831C2C40);
PPC_FUNC_IMPL(__imp__sub_831C2C40) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3016
	ctx.r3.s64 = ctx.r11.s64 + 3016;
	// bl 0x82ca7538
	ctx.lr = 0x831C2C58;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2C70"))) PPC_WEAK_FUNC(sub_831C2C70);
PPC_FUNC_IMPL(__imp__sub_831C2C70) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3044
	ctx.r3.s64 = ctx.r11.s64 + 3044;
	// bl 0x82ca7538
	ctx.lr = 0x831C2C88;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2CA0"))) PPC_WEAK_FUNC(sub_831C2CA0);
PPC_FUNC_IMPL(__imp__sub_831C2CA0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3076
	ctx.r3.s64 = ctx.r11.s64 + 3076;
	// bl 0x82ca7538
	ctx.lr = 0x831C2CB8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2CD0"))) PPC_WEAK_FUNC(sub_831C2CD0);
PPC_FUNC_IMPL(__imp__sub_831C2CD0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3096
	ctx.r3.s64 = ctx.r11.s64 + 3096;
	// bl 0x82ca7538
	ctx.lr = 0x831C2CE8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2D00"))) PPC_WEAK_FUNC(sub_831C2D00);
PPC_FUNC_IMPL(__imp__sub_831C2D00) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3116
	ctx.r3.s64 = ctx.r11.s64 + 3116;
	// bl 0x82ca7538
	ctx.lr = 0x831C2D18;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2D30"))) PPC_WEAK_FUNC(sub_831C2D30);
PPC_FUNC_IMPL(__imp__sub_831C2D30) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3140
	ctx.r3.s64 = ctx.r11.s64 + 3140;
	// bl 0x82ca7538
	ctx.lr = 0x831C2D48;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30396, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2D60"))) PPC_WEAK_FUNC(sub_831C2D60);
PPC_FUNC_IMPL(__imp__sub_831C2D60) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3160
	ctx.r3.s64 = ctx.r11.s64 + 3160;
	// bl 0x82ca7538
	ctx.lr = 0x831C2D78;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2D90"))) PPC_WEAK_FUNC(sub_831C2D90);
PPC_FUNC_IMPL(__imp__sub_831C2D90) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3176
	ctx.r3.s64 = ctx.r11.s64 + 3176;
	// bl 0x82ca7538
	ctx.lr = 0x831C2DA8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2DC0"))) PPC_WEAK_FUNC(sub_831C2DC0);
PPC_FUNC_IMPL(__imp__sub_831C2DC0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3192
	ctx.r3.s64 = ctx.r11.s64 + 3192;
	// bl 0x82ca7538
	ctx.lr = 0x831C2DD8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2DF0"))) PPC_WEAK_FUNC(sub_831C2DF0);
PPC_FUNC_IMPL(__imp__sub_831C2DF0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3208
	ctx.r3.s64 = ctx.r11.s64 + 3208;
	// bl 0x82ca7538
	ctx.lr = 0x831C2E08;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2E20"))) PPC_WEAK_FUNC(sub_831C2E20);
PPC_FUNC_IMPL(__imp__sub_831C2E20) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3224
	ctx.r3.s64 = ctx.r11.s64 + 3224;
	// bl 0x82ca7538
	ctx.lr = 0x831C2E38;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2E50"))) PPC_WEAK_FUNC(sub_831C2E50);
PPC_FUNC_IMPL(__imp__sub_831C2E50) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3240
	ctx.r3.s64 = ctx.r11.s64 + 3240;
	// bl 0x82ca7538
	ctx.lr = 0x831C2E68;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2E80"))) PPC_WEAK_FUNC(sub_831C2E80);
PPC_FUNC_IMPL(__imp__sub_831C2E80) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3256
	ctx.r3.s64 = ctx.r11.s64 + 3256;
	// bl 0x82ca7538
	ctx.lr = 0x831C2E98;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2EB0"))) PPC_WEAK_FUNC(sub_831C2EB0);
PPC_FUNC_IMPL(__imp__sub_831C2EB0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3272
	ctx.r3.s64 = ctx.r11.s64 + 3272;
	// bl 0x82ca7538
	ctx.lr = 0x831C2EC8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2EE0"))) PPC_WEAK_FUNC(sub_831C2EE0);
PPC_FUNC_IMPL(__imp__sub_831C2EE0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,19960
	ctx.r3.s64 = ctx.r11.s64 + 19960;
	// bl 0x82ca7538
	ctx.lr = 0x831C2EF8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2F10"))) PPC_WEAK_FUNC(sub_831C2F10);
PPC_FUNC_IMPL(__imp__sub_831C2F10) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3288
	ctx.r3.s64 = ctx.r11.s64 + 3288;
	// bl 0x82ca7538
	ctx.lr = 0x831C2F28;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2F40"))) PPC_WEAK_FUNC(sub_831C2F40);
PPC_FUNC_IMPL(__imp__sub_831C2F40) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3320
	ctx.r3.s64 = ctx.r11.s64 + 3320;
	// bl 0x82ca7538
	ctx.lr = 0x831C2F58;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2F70"))) PPC_WEAK_FUNC(sub_831C2F70);
PPC_FUNC_IMPL(__imp__sub_831C2F70) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3352
	ctx.r3.s64 = ctx.r11.s64 + 3352;
	// bl 0x82ca7538
	ctx.lr = 0x831C2F88;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30600, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2FA0"))) PPC_WEAK_FUNC(sub_831C2FA0);
PPC_FUNC_IMPL(__imp__sub_831C2FA0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3388
	ctx.r3.s64 = ctx.r11.s64 + 3388;
	// bl 0x82ca7538
	ctx.lr = 0x831C2FB8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C2FD0"))) PPC_WEAK_FUNC(sub_831C2FD0);
PPC_FUNC_IMPL(__imp__sub_831C2FD0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3432
	ctx.r3.s64 = ctx.r11.s64 + 3432;
	// bl 0x82ca7538
	ctx.lr = 0x831C2FE8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3000"))) PPC_WEAK_FUNC(sub_831C3000);
PPC_FUNC_IMPL(__imp__sub_831C3000) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3476
	ctx.r3.s64 = ctx.r11.s64 + 3476;
	// bl 0x82ca7538
	ctx.lr = 0x831C3018;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3030"))) PPC_WEAK_FUNC(sub_831C3030);
PPC_FUNC_IMPL(__imp__sub_831C3030) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3512
	ctx.r3.s64 = ctx.r11.s64 + 3512;
	// bl 0x82ca7538
	ctx.lr = 0x831C3048;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30592, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3060"))) PPC_WEAK_FUNC(sub_831C3060);
PPC_FUNC_IMPL(__imp__sub_831C3060) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3552
	ctx.r3.s64 = ctx.r11.s64 + 3552;
	// bl 0x82ca7538
	ctx.lr = 0x831C3078;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3090"))) PPC_WEAK_FUNC(sub_831C3090);
PPC_FUNC_IMPL(__imp__sub_831C3090) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3592
	ctx.r3.s64 = ctx.r11.s64 + 3592;
	// bl 0x82ca7538
	ctx.lr = 0x831C30A8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C30C0"))) PPC_WEAK_FUNC(sub_831C30C0);
PPC_FUNC_IMPL(__imp__sub_831C30C0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3628
	ctx.r3.s64 = ctx.r11.s64 + 3628;
	// bl 0x82ca7538
	ctx.lr = 0x831C30D8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C30F0"))) PPC_WEAK_FUNC(sub_831C30F0);
PPC_FUNC_IMPL(__imp__sub_831C30F0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3672
	ctx.r3.s64 = ctx.r11.s64 + 3672;
	// bl 0x82ca7538
	ctx.lr = 0x831C3108;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30504, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3120"))) PPC_WEAK_FUNC(sub_831C3120);
PPC_FUNC_IMPL(__imp__sub_831C3120) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3716
	ctx.r3.s64 = ctx.r11.s64 + 3716;
	// bl 0x82ca7538
	ctx.lr = 0x831C3138;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3150"))) PPC_WEAK_FUNC(sub_831C3150);
PPC_FUNC_IMPL(__imp__sub_831C3150) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3760
	ctx.r3.s64 = ctx.r11.s64 + 3760;
	// bl 0x82ca7538
	ctx.lr = 0x831C3168;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3180"))) PPC_WEAK_FUNC(sub_831C3180);
PPC_FUNC_IMPL(__imp__sub_831C3180) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3792
	ctx.r3.s64 = ctx.r11.s64 + 3792;
	// bl 0x82ca7538
	ctx.lr = 0x831C3198;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C31B0"))) PPC_WEAK_FUNC(sub_831C31B0);
PPC_FUNC_IMPL(__imp__sub_831C31B0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3832
	ctx.r3.s64 = ctx.r11.s64 + 3832;
	// bl 0x82ca7538
	ctx.lr = 0x831C31C8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C31E0"))) PPC_WEAK_FUNC(sub_831C31E0);
PPC_FUNC_IMPL(__imp__sub_831C31E0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3872
	ctx.r3.s64 = ctx.r11.s64 + 3872;
	// bl 0x82ca7538
	ctx.lr = 0x831C31F8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3210"))) PPC_WEAK_FUNC(sub_831C3210);
PPC_FUNC_IMPL(__imp__sub_831C3210) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3912
	ctx.r3.s64 = ctx.r11.s64 + 3912;
	// bl 0x82ca7538
	ctx.lr = 0x831C3228;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3240"))) PPC_WEAK_FUNC(sub_831C3240);
PPC_FUNC_IMPL(__imp__sub_831C3240) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3948
	ctx.r3.s64 = ctx.r11.s64 + 3948;
	// bl 0x82ca7538
	ctx.lr = 0x831C3258;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3270"))) PPC_WEAK_FUNC(sub_831C3270);
PPC_FUNC_IMPL(__imp__sub_831C3270) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,3980
	ctx.r3.s64 = ctx.r11.s64 + 3980;
	// bl 0x82ca7538
	ctx.lr = 0x831C3288;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C32A0"))) PPC_WEAK_FUNC(sub_831C32A0);
PPC_FUNC_IMPL(__imp__sub_831C32A0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,4004
	ctx.r3.s64 = ctx.r11.s64 + 4004;
	// bl 0x82ca7538
	ctx.lr = 0x831C32B8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C32D0"))) PPC_WEAK_FUNC(sub_831C32D0);
PPC_FUNC_IMPL(__imp__sub_831C32D0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,4028
	ctx.r3.s64 = ctx.r11.s64 + 4028;
	// bl 0x82ca7538
	ctx.lr = 0x831C32E8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3300"))) PPC_WEAK_FUNC(sub_831C3300);
PPC_FUNC_IMPL(__imp__sub_831C3300) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,4056
	ctx.r3.s64 = ctx.r11.s64 + 4056;
	// bl 0x82ca7538
	ctx.lr = 0x831C3318;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30796, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3330"))) PPC_WEAK_FUNC(sub_831C3330);
PPC_FUNC_IMPL(__imp__sub_831C3330) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,4084
	ctx.r3.s64 = ctx.r11.s64 + 4084;
	// bl 0x82ca7538
	ctx.lr = 0x831C3348;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3360"))) PPC_WEAK_FUNC(sub_831C3360);
PPC_FUNC_IMPL(__imp__sub_831C3360) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,4120
	ctx.r3.s64 = ctx.r11.s64 + 4120;
	// bl 0x82ca7538
	ctx.lr = 0x831C3378;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

