#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_831CA128"))) PPC_WEAK_FUNC(sub_831CA128);
PPC_FUNC_IMPL(__imp__sub_831CA128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-11120
	ctx.r10.s64 = ctx.r10.s64 + -11120;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA148"))) PPC_WEAK_FUNC(sub_831CA148);
PPC_FUNC_IMPL(__imp__sub_831CA148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-10800
	ctx.r3.s64 = ctx.r11.s64 + -10800;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA158"))) PPC_WEAK_FUNC(sub_831CA158);
PPC_FUNC_IMPL(__imp__sub_831CA158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14456
	ctx.r3.s64 = ctx.r11.s64 + -14456;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA168"))) PPC_WEAK_FUNC(sub_831CA168);
PPC_FUNC_IMPL(__imp__sub_831CA168) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-13712
	ctx.r3.s64 = ctx.r11.s64 + -13712;
	// bl 0x82df4f88
	ctx.lr = 0x831CA180;
	sub_82DF4F88(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14448
	ctx.r3.s64 = ctx.r11.s64 + -14448;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CA18C;
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

__attribute__((alias("__imp__sub_831CA1A0"))) PPC_WEAK_FUNC(sub_831CA1A0);
PPC_FUNC_IMPL(__imp__sub_831CA1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// lis r4,188
	ctx.r4.s64 = 12320768;
	// addi r3,r11,-13812
	ctx.r3.s64 = ctx.r11.s64 + -13812;
	// ori r4,r4,24910
	ctx.r4.u64 = ctx.r4.u64 | 24910;
	// b 0x82d6adc8
	sub_82D6ADC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA1B8"))) PPC_WEAK_FUNC(sub_831CA1B8);
PPC_FUNC_IMPL(__imp__sub_831CA1B8) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,-11420
	ctx.r3.s64 = ctx.r11.s64 + -11420;
	// bl 0x824683b0
	ctx.lr = 0x831CA1D4;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14488
	ctx.r3.s64 = ctx.r11.s64 + -14488;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CA1E0;
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

__attribute__((alias("__imp__sub_831CA1F0"))) PPC_WEAK_FUNC(sub_831CA1F0);
PPC_FUNC_IMPL(__imp__sub_831CA1F0) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-11088
	ctx.r3.s64 = ctx.r11.s64 + -11088;
	// bl 0x82df5b58
	ctx.lr = 0x831CA208;
	sub_82DF5B58(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14432
	ctx.r3.s64 = ctx.r11.s64 + -14432;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CA214;
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

__attribute__((alias("__imp__sub_831CA228"))) PPC_WEAK_FUNC(sub_831CA228);
PPC_FUNC_IMPL(__imp__sub_831CA228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,16256
	ctx.r11.s64 = ctx.r11.s64 + 16256;
	// addi r10,r10,-13728
	ctx.r10.s64 = ctx.r10.s64 + -13728;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA248"))) PPC_WEAK_FUNC(sub_831CA248);
PPC_FUNC_IMPL(__imp__sub_831CA248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,16272
	ctx.r11.s64 = ctx.r11.s64 + 16272;
	// addi r10,r10,-11232
	ctx.r10.s64 = ctx.r10.s64 + -11232;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA268"))) PPC_WEAK_FUNC(sub_831CA268);
PPC_FUNC_IMPL(__imp__sub_831CA268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,-8768
	ctx.r11.s64 = ctx.r11.s64 + -8768;
	// addi r10,r10,-10816
	ctx.r10.s64 = ctx.r10.s64 + -10816;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA288"))) PPC_WEAK_FUNC(sub_831CA288);
PPC_FUNC_IMPL(__imp__sub_831CA288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4944
	ctx.r11.s64 = ctx.r11.s64 + 4944;
	// addi r10,r10,-11392
	ctx.r10.s64 = ctx.r10.s64 + -11392;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA2A8"))) PPC_WEAK_FUNC(sub_831CA2A8);
PPC_FUNC_IMPL(__imp__sub_831CA2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4944
	ctx.r11.s64 = ctx.r11.s64 + 4944;
	// addi r10,r10,-10720
	ctx.r10.s64 = ctx.r10.s64 + -10720;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA2C8"))) PPC_WEAK_FUNC(sub_831CA2C8);
PPC_FUNC_IMPL(__imp__sub_831CA2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4944
	ctx.r11.s64 = ctx.r11.s64 + 4944;
	// addi r10,r10,-11216
	ctx.r10.s64 = ctx.r10.s64 + -11216;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA2E8"))) PPC_WEAK_FUNC(sub_831CA2E8);
PPC_FUNC_IMPL(__imp__sub_831CA2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,16288
	ctx.r11.s64 = ctx.r11.s64 + 16288;
	// addi r10,r10,-11200
	ctx.r10.s64 = ctx.r10.s64 + -11200;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA308"))) PPC_WEAK_FUNC(sub_831CA308);
PPC_FUNC_IMPL(__imp__sub_831CA308) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r10,-11060
	ctx.r9.s64 = ctx.r10.s64 + -11060;
	// stw r11,-11060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11060, ctx.r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA330"))) PPC_WEAK_FUNC(sub_831CA330);
PPC_FUNC_IMPL(__imp__sub_831CA330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14416
	ctx.r3.s64 = ctx.r11.s64 + -14416;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA340"))) PPC_WEAK_FUNC(sub_831CA340);
PPC_FUNC_IMPL(__imp__sub_831CA340) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,-11264
	ctx.r3.s64 = ctx.r11.s64 + -11264;
	// bl 0x824683b0
	ctx.lr = 0x831CA35C;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14472
	ctx.r3.s64 = ctx.r11.s64 + -14472;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CA368;
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

__attribute__((alias("__imp__sub_831CA378"))) PPC_WEAK_FUNC(sub_831CA378);
PPC_FUNC_IMPL(__imp__sub_831CA378) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-11376
	ctx.r3.s64 = ctx.r11.s64 + -11376;
	// bl 0x82dfd5c8
	ctx.lr = 0x831CA390;
	sub_82DFD5C8(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14408
	ctx.r3.s64 = ctx.r11.s64 + -14408;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CA39C;
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

__attribute__((alias("__imp__sub_831CA3B0"))) PPC_WEAK_FUNC(sub_831CA3B0);
PPC_FUNC_IMPL(__imp__sub_831CA3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r11,r11,4416
	ctx.r11.s64 = ctx.r11.s64 + 4416;
	// addi r10,r10,16336
	ctx.r10.s64 = ctx.r10.s64 + 16336;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lis r7,-31925
	ctx.r7.s64 = -2092236800;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,16320
	ctx.r9.s64 = ctx.r9.s64 + 16320;
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,16304
	ctx.r8.s64 = ctx.r8.s64 + 16304;
	// addi r7,r7,-10704
	ctx.r7.s64 = ctx.r7.s64 + -10704;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA408"))) PPC_WEAK_FUNC(sub_831CA408);
PPC_FUNC_IMPL(__imp__sub_831CA408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x831CA410;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r31,r11,-11040
	ctx.r31.s64 = ctx.r11.s64 + -11040;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_831CA424:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82df8068
	ctx.lr = 0x831CA42C;
	sub_82DF8068(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bge 0x831ca424
	if (!ctx.cr0.lt) goto loc_831CA424;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// addi r3,r11,-14392
	ctx.r3.s64 = ctx.r11.s64 + -14392;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CA454;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA460"))) PPC_WEAK_FUNC(sub_831CA460);
PPC_FUNC_IMPL(__imp__sub_831CA460) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r4,r11,16352
	ctx.r4.s64 = ctx.r11.s64 + 16352;
	// addi r3,r10,-11716
	ctx.r3.s64 = ctx.r10.s64 + -11716;
	// bl 0x82450f48
	ctx.lr = 0x831CA480;
	sub_82450F48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14280
	ctx.r3.s64 = ctx.r11.s64 + -14280;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CA48C;
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

__attribute__((alias("__imp__sub_831CA4A0"))) PPC_WEAK_FUNC(sub_831CA4A0);
PPC_FUNC_IMPL(__imp__sub_831CA4A0) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r31,r11,-11688
	ctx.r31.s64 = ctx.r11.s64 + -11688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0e238
	ctx.lr = 0x831CA4C0;
	sub_82A0E238(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82df5c78
	ctx.lr = 0x831CA4C8;
	sub_82DF5C78(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82df5c78
	ctx.lr = 0x831CA4D0;
	sub_82DF5C78(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82df5c78
	ctx.lr = 0x831CA4D8;
	sub_82DF5C78(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x82df5c78
	ctx.lr = 0x831CA4E0;
	sub_82DF5C78(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x82df5c78
	ctx.lr = 0x831CA4E8;
	sub_82DF5C78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// stb r9,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r9.u8);
	// addi r3,r11,-14312
	ctx.r3.s64 = ctx.r11.s64 + -14312;
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831CA518;
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

__attribute__((alias("__imp__sub_831CA530"))) PPC_WEAK_FUNC(sub_831CA530);
PPC_FUNC_IMPL(__imp__sub_831CA530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r10,-8320
	ctx.r10.s64 = ctx.r10.s64 + -8320;
	// addi r9,r9,25648
	ctx.r9.s64 = ctx.r9.s64 + 25648;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_831CA550:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x831ca550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831CA550;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA560"))) PPC_WEAK_FUNC(sub_831CA560);
PPC_FUNC_IMPL(__imp__sub_831CA560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r10,-8256
	ctx.r10.s64 = ctx.r10.s64 + -8256;
	// addi r9,r9,25648
	ctx.r9.s64 = ctx.r9.s64 + 25648;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_831CA580:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x831ca580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831CA580;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA590"))) PPC_WEAK_FUNC(sub_831CA590);
PPC_FUNC_IMPL(__imp__sub_831CA590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r10,-8192
	ctx.r10.s64 = ctx.r10.s64 + -8192;
	// addi r9,r9,25648
	ctx.r9.s64 = ctx.r9.s64 + 25648;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_831CA5B0:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x831ca5b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831CA5B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA5C0"))) PPC_WEAK_FUNC(sub_831CA5C0);
PPC_FUNC_IMPL(__imp__sub_831CA5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14248
	ctx.r3.s64 = ctx.r11.s64 + -14248;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA5D0"))) PPC_WEAK_FUNC(sub_831CA5D0);
PPC_FUNC_IMPL(__imp__sub_831CA5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14256
	ctx.r3.s64 = ctx.r11.s64 + -14256;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA5E0"))) PPC_WEAK_FUNC(sub_831CA5E0);
PPC_FUNC_IMPL(__imp__sub_831CA5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14136
	ctx.r3.s64 = ctx.r11.s64 + -14136;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA5F0"))) PPC_WEAK_FUNC(sub_831CA5F0);
PPC_FUNC_IMPL(__imp__sub_831CA5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,13936
	ctx.r9.s64 = ctx.r11.s64 + 13936;
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

__attribute__((alias("__imp__sub_831CA620"))) PPC_WEAK_FUNC(sub_831CA620);
PPC_FUNC_IMPL(__imp__sub_831CA620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,13888
	ctx.r9.s64 = ctx.r11.s64 + 13888;
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

__attribute__((alias("__imp__sub_831CA650"))) PPC_WEAK_FUNC(sub_831CA650);
PPC_FUNC_IMPL(__imp__sub_831CA650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,13840
	ctx.r9.s64 = ctx.r11.s64 + 13840;
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

__attribute__((alias("__imp__sub_831CA680"))) PPC_WEAK_FUNC(sub_831CA680);
PPC_FUNC_IMPL(__imp__sub_831CA680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,13872
	ctx.r9.s64 = ctx.r11.s64 + 13872;
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

__attribute__((alias("__imp__sub_831CA6B0"))) PPC_WEAK_FUNC(sub_831CA6B0);
PPC_FUNC_IMPL(__imp__sub_831CA6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,13856
	ctx.r10.s64 = ctx.r10.s64 + 13856;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA6D0"))) PPC_WEAK_FUNC(sub_831CA6D0);
PPC_FUNC_IMPL(__imp__sub_831CA6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,13824
	ctx.r10.s64 = ctx.r10.s64 + 13824;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA6F0"))) PPC_WEAK_FUNC(sub_831CA6F0);
PPC_FUNC_IMPL(__imp__sub_831CA6F0) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,13952
	ctx.r3.s64 = ctx.r11.s64 + 13952;
	// bl 0x824683b0
	ctx.lr = 0x831CA70C;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14232
	ctx.r3.s64 = ctx.r11.s64 + -14232;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CA718;
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

__attribute__((alias("__imp__sub_831CA728"))) PPC_WEAK_FUNC(sub_831CA728);
PPC_FUNC_IMPL(__imp__sub_831CA728) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,13904
	ctx.r3.s64 = ctx.r11.s64 + 13904;
	// bl 0x824683b0
	ctx.lr = 0x831CA744;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14216
	ctx.r3.s64 = ctx.r11.s64 + -14216;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CA750;
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

__attribute__((alias("__imp__sub_831CA760"))) PPC_WEAK_FUNC(sub_831CA760);
PPC_FUNC_IMPL(__imp__sub_831CA760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14184
	ctx.r3.s64 = ctx.r11.s64 + -14184;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA770"))) PPC_WEAK_FUNC(sub_831CA770);
PPC_FUNC_IMPL(__imp__sub_831CA770) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,14104
	ctx.r31.s64 = ctx.r11.s64 + 14104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831CA794;
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
	// addi r3,r10,-14120
	ctx.r3.s64 = ctx.r10.s64 + -14120;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CA7BC;
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

__attribute__((alias("__imp__sub_831CA7D0"))) PPC_WEAK_FUNC(sub_831CA7D0);
PPC_FUNC_IMPL(__imp__sub_831CA7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14176
	ctx.r3.s64 = ctx.r11.s64 + -14176;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA7E0"))) PPC_WEAK_FUNC(sub_831CA7E0);
PPC_FUNC_IMPL(__imp__sub_831CA7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14168
	ctx.r3.s64 = ctx.r11.s64 + -14168;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA7F0"))) PPC_WEAK_FUNC(sub_831CA7F0);
PPC_FUNC_IMPL(__imp__sub_831CA7F0) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,14156
	ctx.r31.s64 = ctx.r11.s64 + 14156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831CA814;
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
	// addi r3,r10,-14104
	ctx.r3.s64 = ctx.r10.s64 + -14104;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CA83C;
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

__attribute__((alias("__imp__sub_831CA850"))) PPC_WEAK_FUNC(sub_831CA850);
PPC_FUNC_IMPL(__imp__sub_831CA850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14160
	ctx.r3.s64 = ctx.r11.s64 + -14160;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA860"))) PPC_WEAK_FUNC(sub_831CA860);
PPC_FUNC_IMPL(__imp__sub_831CA860) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,14208
	ctx.r31.s64 = ctx.r11.s64 + 14208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831CA884;
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
	// addi r3,r10,-14088
	ctx.r3.s64 = ctx.r10.s64 + -14088;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CA8AC;
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

__attribute__((alias("__imp__sub_831CA8C0"))) PPC_WEAK_FUNC(sub_831CA8C0);
PPC_FUNC_IMPL(__imp__sub_831CA8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14152
	ctx.r3.s64 = ctx.r11.s64 + -14152;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA8D0"))) PPC_WEAK_FUNC(sub_831CA8D0);
PPC_FUNC_IMPL(__imp__sub_831CA8D0) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,14056
	ctx.r31.s64 = ctx.r11.s64 + 14056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831CA8F4;
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
	// addi r3,r10,-14072
	ctx.r3.s64 = ctx.r10.s64 + -14072;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CA91C;
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

__attribute__((alias("__imp__sub_831CA930"))) PPC_WEAK_FUNC(sub_831CA930);
PPC_FUNC_IMPL(__imp__sub_831CA930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14144
	ctx.r3.s64 = ctx.r11.s64 + -14144;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA940"))) PPC_WEAK_FUNC(sub_831CA940);
PPC_FUNC_IMPL(__imp__sub_831CA940) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,13996
	ctx.r31.s64 = ctx.r11.s64 + 13996;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831CA964;
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
	// addi r3,r10,-14056
	ctx.r3.s64 = ctx.r10.s64 + -14056;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CA98C;
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

__attribute__((alias("__imp__sub_831CA9A0"))) PPC_WEAK_FUNC(sub_831CA9A0);
PPC_FUNC_IMPL(__imp__sub_831CA9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14032
	ctx.r3.s64 = ctx.r11.s64 + -14032;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA9B0"))) PPC_WEAK_FUNC(sub_831CA9B0);
PPC_FUNC_IMPL(__imp__sub_831CA9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14336
	ctx.r9.s64 = ctx.r11.s64 + 14336;
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

__attribute__((alias("__imp__sub_831CA9E0"))) PPC_WEAK_FUNC(sub_831CA9E0);
PPC_FUNC_IMPL(__imp__sub_831CA9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14320
	ctx.r9.s64 = ctx.r11.s64 + 14320;
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

__attribute__((alias("__imp__sub_831CAA10"))) PPC_WEAK_FUNC(sub_831CAA10);
PPC_FUNC_IMPL(__imp__sub_831CAA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14272
	ctx.r9.s64 = ctx.r11.s64 + 14272;
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

__attribute__((alias("__imp__sub_831CAA40"))) PPC_WEAK_FUNC(sub_831CAA40);
PPC_FUNC_IMPL(__imp__sub_831CAA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14304
	ctx.r9.s64 = ctx.r11.s64 + 14304;
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

__attribute__((alias("__imp__sub_831CAA70"))) PPC_WEAK_FUNC(sub_831CAA70);
PPC_FUNC_IMPL(__imp__sub_831CAA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,14288
	ctx.r10.s64 = ctx.r10.s64 + 14288;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CAA90"))) PPC_WEAK_FUNC(sub_831CAA90);
PPC_FUNC_IMPL(__imp__sub_831CAA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,14256
	ctx.r10.s64 = ctx.r10.s64 + 14256;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CAAB0"))) PPC_WEAK_FUNC(sub_831CAAB0);
PPC_FUNC_IMPL(__imp__sub_831CAAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14040
	ctx.r3.s64 = ctx.r11.s64 + -14040;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CAAC0"))) PPC_WEAK_FUNC(sub_831CAAC0);
PPC_FUNC_IMPL(__imp__sub_831CAAC0) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,14360
	ctx.r31.s64 = ctx.r11.s64 + 14360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831CAAE4;
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
	// addi r3,r10,-14016
	ctx.r3.s64 = ctx.r10.s64 + -14016;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CAB0C;
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

__attribute__((alias("__imp__sub_831CAB20"))) PPC_WEAK_FUNC(sub_831CAB20);
PPC_FUNC_IMPL(__imp__sub_831CAB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14512
	ctx.r9.s64 = ctx.r11.s64 + 14512;
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

__attribute__((alias("__imp__sub_831CAB50"))) PPC_WEAK_FUNC(sub_831CAB50);
PPC_FUNC_IMPL(__imp__sub_831CAB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14496
	ctx.r9.s64 = ctx.r11.s64 + 14496;
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

__attribute__((alias("__imp__sub_831CAB80"))) PPC_WEAK_FUNC(sub_831CAB80);
PPC_FUNC_IMPL(__imp__sub_831CAB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14448
	ctx.r9.s64 = ctx.r11.s64 + 14448;
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

__attribute__((alias("__imp__sub_831CABB0"))) PPC_WEAK_FUNC(sub_831CABB0);
PPC_FUNC_IMPL(__imp__sub_831CABB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14480
	ctx.r9.s64 = ctx.r11.s64 + 14480;
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

__attribute__((alias("__imp__sub_831CABE0"))) PPC_WEAK_FUNC(sub_831CABE0);
PPC_FUNC_IMPL(__imp__sub_831CABE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,14464
	ctx.r10.s64 = ctx.r10.s64 + 14464;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CAC00"))) PPC_WEAK_FUNC(sub_831CAC00);
PPC_FUNC_IMPL(__imp__sub_831CAC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,14432
	ctx.r10.s64 = ctx.r10.s64 + 14432;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CAC20"))) PPC_WEAK_FUNC(sub_831CAC20);
PPC_FUNC_IMPL(__imp__sub_831CAC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13984
	ctx.r3.s64 = ctx.r11.s64 + -13984;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CAC30"))) PPC_WEAK_FUNC(sub_831CAC30);
PPC_FUNC_IMPL(__imp__sub_831CAC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14640
	ctx.r9.s64 = ctx.r11.s64 + 14640;
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

__attribute__((alias("__imp__sub_831CAC60"))) PPC_WEAK_FUNC(sub_831CAC60);
PPC_FUNC_IMPL(__imp__sub_831CAC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14624
	ctx.r9.s64 = ctx.r11.s64 + 14624;
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

__attribute__((alias("__imp__sub_831CAC90"))) PPC_WEAK_FUNC(sub_831CAC90);
PPC_FUNC_IMPL(__imp__sub_831CAC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14576
	ctx.r9.s64 = ctx.r11.s64 + 14576;
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

__attribute__((alias("__imp__sub_831CACC0"))) PPC_WEAK_FUNC(sub_831CACC0);
PPC_FUNC_IMPL(__imp__sub_831CACC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14608
	ctx.r9.s64 = ctx.r11.s64 + 14608;
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

__attribute__((alias("__imp__sub_831CACF0"))) PPC_WEAK_FUNC(sub_831CACF0);
PPC_FUNC_IMPL(__imp__sub_831CACF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,14592
	ctx.r10.s64 = ctx.r10.s64 + 14592;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CAD10"))) PPC_WEAK_FUNC(sub_831CAD10);
PPC_FUNC_IMPL(__imp__sub_831CAD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,14560
	ctx.r10.s64 = ctx.r10.s64 + 14560;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CAD30"))) PPC_WEAK_FUNC(sub_831CAD30);
PPC_FUNC_IMPL(__imp__sub_831CAD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13968
	ctx.r3.s64 = ctx.r11.s64 + -13968;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CAD40"))) PPC_WEAK_FUNC(sub_831CAD40);
PPC_FUNC_IMPL(__imp__sub_831CAD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14752
	ctx.r9.s64 = ctx.r11.s64 + 14752;
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

__attribute__((alias("__imp__sub_831CAD70"))) PPC_WEAK_FUNC(sub_831CAD70);
PPC_FUNC_IMPL(__imp__sub_831CAD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14736
	ctx.r9.s64 = ctx.r11.s64 + 14736;
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

__attribute__((alias("__imp__sub_831CADA0"))) PPC_WEAK_FUNC(sub_831CADA0);
PPC_FUNC_IMPL(__imp__sub_831CADA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14688
	ctx.r9.s64 = ctx.r11.s64 + 14688;
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

__attribute__((alias("__imp__sub_831CADD0"))) PPC_WEAK_FUNC(sub_831CADD0);
PPC_FUNC_IMPL(__imp__sub_831CADD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14720
	ctx.r9.s64 = ctx.r11.s64 + 14720;
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

__attribute__((alias("__imp__sub_831CAE00"))) PPC_WEAK_FUNC(sub_831CAE00);
PPC_FUNC_IMPL(__imp__sub_831CAE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,14704
	ctx.r10.s64 = ctx.r10.s64 + 14704;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CAE20"))) PPC_WEAK_FUNC(sub_831CAE20);
PPC_FUNC_IMPL(__imp__sub_831CAE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,14672
	ctx.r10.s64 = ctx.r10.s64 + 14672;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CAE40"))) PPC_WEAK_FUNC(sub_831CAE40);
PPC_FUNC_IMPL(__imp__sub_831CAE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,14776
	ctx.r3.s64 = ctx.r11.s64 + 14776;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CAE50"))) PPC_WEAK_FUNC(sub_831CAE50);
PPC_FUNC_IMPL(__imp__sub_831CAE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13952
	ctx.r3.s64 = ctx.r11.s64 + -13952;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CAE60"))) PPC_WEAK_FUNC(sub_831CAE60);
PPC_FUNC_IMPL(__imp__sub_831CAE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13928
	ctx.r3.s64 = ctx.r11.s64 + -13928;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CAE70"))) PPC_WEAK_FUNC(sub_831CAE70);
PPC_FUNC_IMPL(__imp__sub_831CAE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14944
	ctx.r9.s64 = ctx.r11.s64 + 14944;
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

__attribute__((alias("__imp__sub_831CAEA0"))) PPC_WEAK_FUNC(sub_831CAEA0);
PPC_FUNC_IMPL(__imp__sub_831CAEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14928
	ctx.r9.s64 = ctx.r11.s64 + 14928;
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

__attribute__((alias("__imp__sub_831CAED0"))) PPC_WEAK_FUNC(sub_831CAED0);
PPC_FUNC_IMPL(__imp__sub_831CAED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14880
	ctx.r9.s64 = ctx.r11.s64 + 14880;
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

__attribute__((alias("__imp__sub_831CAF00"))) PPC_WEAK_FUNC(sub_831CAF00);
PPC_FUNC_IMPL(__imp__sub_831CAF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14912
	ctx.r9.s64 = ctx.r11.s64 + 14912;
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

__attribute__((alias("__imp__sub_831CAF30"))) PPC_WEAK_FUNC(sub_831CAF30);
PPC_FUNC_IMPL(__imp__sub_831CAF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,14896
	ctx.r10.s64 = ctx.r10.s64 + 14896;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CAF50"))) PPC_WEAK_FUNC(sub_831CAF50);
PPC_FUNC_IMPL(__imp__sub_831CAF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,14864
	ctx.r10.s64 = ctx.r10.s64 + 14864;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CAF70"))) PPC_WEAK_FUNC(sub_831CAF70);
PPC_FUNC_IMPL(__imp__sub_831CAF70) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,14976
	ctx.r3.s64 = ctx.r11.s64 + 14976;
	// bl 0x82e57310
	ctx.lr = 0x831CAF88;
	sub_82E57310(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13912
	ctx.r3.s64 = ctx.r11.s64 + -13912;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CAF94;
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

__attribute__((alias("__imp__sub_831CAFA8"))) PPC_WEAK_FUNC(sub_831CAFA8);
PPC_FUNC_IMPL(__imp__sub_831CAFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13936
	ctx.r3.s64 = ctx.r11.s64 + -13936;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CAFB8"))) PPC_WEAK_FUNC(sub_831CAFB8);
PPC_FUNC_IMPL(__imp__sub_831CAFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18176
	ctx.r9.s64 = ctx.r11.s64 + 18176;
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

__attribute__((alias("__imp__sub_831CAFE8"))) PPC_WEAK_FUNC(sub_831CAFE8);
PPC_FUNC_IMPL(__imp__sub_831CAFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18160
	ctx.r9.s64 = ctx.r11.s64 + 18160;
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

__attribute__((alias("__imp__sub_831CB018"))) PPC_WEAK_FUNC(sub_831CB018);
PPC_FUNC_IMPL(__imp__sub_831CB018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18112
	ctx.r9.s64 = ctx.r11.s64 + 18112;
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

__attribute__((alias("__imp__sub_831CB048"))) PPC_WEAK_FUNC(sub_831CB048);
PPC_FUNC_IMPL(__imp__sub_831CB048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18144
	ctx.r9.s64 = ctx.r11.s64 + 18144;
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

__attribute__((alias("__imp__sub_831CB078"))) PPC_WEAK_FUNC(sub_831CB078);
PPC_FUNC_IMPL(__imp__sub_831CB078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,18128
	ctx.r10.s64 = ctx.r10.s64 + 18128;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB098"))) PPC_WEAK_FUNC(sub_831CB098);
PPC_FUNC_IMPL(__imp__sub_831CB098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,18096
	ctx.r10.s64 = ctx.r10.s64 + 18096;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB0B8"))) PPC_WEAK_FUNC(sub_831CB0B8);
PPC_FUNC_IMPL(__imp__sub_831CB0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13888
	ctx.r3.s64 = ctx.r11.s64 + -13888;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CB0C8"))) PPC_WEAK_FUNC(sub_831CB0C8);
PPC_FUNC_IMPL(__imp__sub_831CB0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13896
	ctx.r3.s64 = ctx.r11.s64 + -13896;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CB0D8"))) PPC_WEAK_FUNC(sub_831CB0D8);
PPC_FUNC_IMPL(__imp__sub_831CB0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13872
	ctx.r3.s64 = ctx.r11.s64 + -13872;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CB0E8"))) PPC_WEAK_FUNC(sub_831CB0E8);
PPC_FUNC_IMPL(__imp__sub_831CB0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18288
	ctx.r9.s64 = ctx.r11.s64 + 18288;
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

__attribute__((alias("__imp__sub_831CB118"))) PPC_WEAK_FUNC(sub_831CB118);
PPC_FUNC_IMPL(__imp__sub_831CB118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
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

__attribute__((alias("__imp__sub_831CB148"))) PPC_WEAK_FUNC(sub_831CB148);
PPC_FUNC_IMPL(__imp__sub_831CB148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
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

__attribute__((alias("__imp__sub_831CB178"))) PPC_WEAK_FUNC(sub_831CB178);
PPC_FUNC_IMPL(__imp__sub_831CB178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
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

__attribute__((alias("__imp__sub_831CB1A8"))) PPC_WEAK_FUNC(sub_831CB1A8);
PPC_FUNC_IMPL(__imp__sub_831CB1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
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

__attribute__((alias("__imp__sub_831CB1C8"))) PPC_WEAK_FUNC(sub_831CB1C8);
PPC_FUNC_IMPL(__imp__sub_831CB1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
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

__attribute__((alias("__imp__sub_831CB1E8"))) PPC_WEAK_FUNC(sub_831CB1E8);
PPC_FUNC_IMPL(__imp__sub_831CB1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13608
	ctx.r3.s64 = ctx.r11.s64 + -13608;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CB1F8"))) PPC_WEAK_FUNC(sub_831CB1F8);
PPC_FUNC_IMPL(__imp__sub_831CB1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18576
	ctx.r9.s64 = ctx.r11.s64 + 18576;
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

__attribute__((alias("__imp__sub_831CB228"))) PPC_WEAK_FUNC(sub_831CB228);
PPC_FUNC_IMPL(__imp__sub_831CB228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18448
	ctx.r9.s64 = ctx.r11.s64 + 18448;
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

__attribute__((alias("__imp__sub_831CB258"))) PPC_WEAK_FUNC(sub_831CB258);
PPC_FUNC_IMPL(__imp__sub_831CB258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
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

__attribute__((alias("__imp__sub_831CB288"))) PPC_WEAK_FUNC(sub_831CB288);
PPC_FUNC_IMPL(__imp__sub_831CB288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18432
	ctx.r9.s64 = ctx.r11.s64 + 18432;
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

__attribute__((alias("__imp__sub_831CB2B8"))) PPC_WEAK_FUNC(sub_831CB2B8);
PPC_FUNC_IMPL(__imp__sub_831CB2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
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

__attribute__((alias("__imp__sub_831CB2D8"))) PPC_WEAK_FUNC(sub_831CB2D8);
PPC_FUNC_IMPL(__imp__sub_831CB2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,18384
	ctx.r10.s64 = ctx.r10.s64 + 18384;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB2F8"))) PPC_WEAK_FUNC(sub_831CB2F8);
PPC_FUNC_IMPL(__imp__sub_831CB2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16076
	ctx.r9.s64 = ctx.r10.s64 + -16076;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB30C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb334
	if (!ctx.cr6.lt) goto loc_831CB334;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb30c
	if (!ctx.cr0.eq) goto loc_831CB30C;
loc_831CB334:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18904, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB348"))) PPC_WEAK_FUNC(sub_831CB348);
PPC_FUNC_IMPL(__imp__sub_831CB348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16064
	ctx.r9.s64 = ctx.r10.s64 + -16064;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB35C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb384
	if (!ctx.cr6.lt) goto loc_831CB384;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb35c
	if (!ctx.cr0.eq) goto loc_831CB35C;
loc_831CB384:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB398"))) PPC_WEAK_FUNC(sub_831CB398);
PPC_FUNC_IMPL(__imp__sub_831CB398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16052
	ctx.r9.s64 = ctx.r10.s64 + -16052;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB3AC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb3d4
	if (!ctx.cr6.lt) goto loc_831CB3D4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb3ac
	if (!ctx.cr0.eq) goto loc_831CB3AC;
loc_831CB3D4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18604, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB3E8"))) PPC_WEAK_FUNC(sub_831CB3E8);
PPC_FUNC_IMPL(__imp__sub_831CB3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16032
	ctx.r9.s64 = ctx.r10.s64 + -16032;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB3FC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb424
	if (!ctx.cr6.lt) goto loc_831CB424;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb3fc
	if (!ctx.cr0.eq) goto loc_831CB3FC;
loc_831CB424:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18624, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB438"))) PPC_WEAK_FUNC(sub_831CB438);
PPC_FUNC_IMPL(__imp__sub_831CB438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16012
	ctx.r9.s64 = ctx.r10.s64 + -16012;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB44C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb474
	if (!ctx.cr6.lt) goto loc_831CB474;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb44c
	if (!ctx.cr0.eq) goto loc_831CB44C;
loc_831CB474:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18900(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18900, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB488"))) PPC_WEAK_FUNC(sub_831CB488);
PPC_FUNC_IMPL(__imp__sub_831CB488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16000
	ctx.r9.s64 = ctx.r10.s64 + -16000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB49C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb4c4
	if (!ctx.cr6.lt) goto loc_831CB4C4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb49c
	if (!ctx.cr0.eq) goto loc_831CB49C;
loc_831CB4C4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18644(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18644, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB4D8"))) PPC_WEAK_FUNC(sub_831CB4D8);
PPC_FUNC_IMPL(__imp__sub_831CB4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15988
	ctx.r9.s64 = ctx.r10.s64 + -15988;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB4EC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb514
	if (!ctx.cr6.lt) goto loc_831CB514;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb4ec
	if (!ctx.cr0.eq) goto loc_831CB4EC;
loc_831CB514:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18676, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB528"))) PPC_WEAK_FUNC(sub_831CB528);
PPC_FUNC_IMPL(__imp__sub_831CB528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15972
	ctx.r9.s64 = ctx.r10.s64 + -15972;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB53C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb564
	if (!ctx.cr6.lt) goto loc_831CB564;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb53c
	if (!ctx.cr0.eq) goto loc_831CB53C;
loc_831CB564:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB578"))) PPC_WEAK_FUNC(sub_831CB578);
PPC_FUNC_IMPL(__imp__sub_831CB578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15956
	ctx.r9.s64 = ctx.r10.s64 + -15956;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB58C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb5b4
	if (!ctx.cr6.lt) goto loc_831CB5B4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb58c
	if (!ctx.cr0.eq) goto loc_831CB58C;
loc_831CB5B4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18652, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB5C8"))) PPC_WEAK_FUNC(sub_831CB5C8);
PPC_FUNC_IMPL(__imp__sub_831CB5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15936
	ctx.r9.s64 = ctx.r10.s64 + -15936;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB5DC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb604
	if (!ctx.cr6.lt) goto loc_831CB604;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb5dc
	if (!ctx.cr0.eq) goto loc_831CB5DC;
loc_831CB604:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB618"))) PPC_WEAK_FUNC(sub_831CB618);
PPC_FUNC_IMPL(__imp__sub_831CB618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15920
	ctx.r9.s64 = ctx.r10.s64 + -15920;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB62C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb654
	if (!ctx.cr6.lt) goto loc_831CB654;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb62c
	if (!ctx.cr0.eq) goto loc_831CB62C;
loc_831CB654:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18660(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB668"))) PPC_WEAK_FUNC(sub_831CB668);
PPC_FUNC_IMPL(__imp__sub_831CB668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15900
	ctx.r9.s64 = ctx.r10.s64 + -15900;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB67C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb6a4
	if (!ctx.cr6.lt) goto loc_831CB6A4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb67c
	if (!ctx.cr0.eq) goto loc_831CB67C;
loc_831CB6A4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18620, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB6B8"))) PPC_WEAK_FUNC(sub_831CB6B8);
PPC_FUNC_IMPL(__imp__sub_831CB6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15876
	ctx.r9.s64 = ctx.r10.s64 + -15876;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB6CC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb6f4
	if (!ctx.cr6.lt) goto loc_831CB6F4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb6cc
	if (!ctx.cr0.eq) goto loc_831CB6CC;
loc_831CB6F4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18636, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB708"))) PPC_WEAK_FUNC(sub_831CB708);
PPC_FUNC_IMPL(__imp__sub_831CB708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15856
	ctx.r9.s64 = ctx.r10.s64 + -15856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB71C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb744
	if (!ctx.cr6.lt) goto loc_831CB744;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb71c
	if (!ctx.cr0.eq) goto loc_831CB71C;
loc_831CB744:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18672, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB758"))) PPC_WEAK_FUNC(sub_831CB758);
PPC_FUNC_IMPL(__imp__sub_831CB758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15840
	ctx.r9.s64 = ctx.r10.s64 + -15840;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB76C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb794
	if (!ctx.cr6.lt) goto loc_831CB794;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb76c
	if (!ctx.cr0.eq) goto loc_831CB76C;
loc_831CB794:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB7A8"))) PPC_WEAK_FUNC(sub_831CB7A8);
PPC_FUNC_IMPL(__imp__sub_831CB7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15820
	ctx.r9.s64 = ctx.r10.s64 + -15820;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB7BC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb7e4
	if (!ctx.cr6.lt) goto loc_831CB7E4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb7bc
	if (!ctx.cr0.eq) goto loc_831CB7BC;
loc_831CB7E4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18632, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB7F8"))) PPC_WEAK_FUNC(sub_831CB7F8);
PPC_FUNC_IMPL(__imp__sub_831CB7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15796
	ctx.r9.s64 = ctx.r10.s64 + -15796;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB80C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb834
	if (!ctx.cr6.lt) goto loc_831CB834;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb80c
	if (!ctx.cr0.eq) goto loc_831CB80C;
loc_831CB834:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18616, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB848"))) PPC_WEAK_FUNC(sub_831CB848);
PPC_FUNC_IMPL(__imp__sub_831CB848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15788
	ctx.r9.s64 = ctx.r10.s64 + -15788;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB85C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb884
	if (!ctx.cr6.lt) goto loc_831CB884;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb85c
	if (!ctx.cr0.eq) goto loc_831CB85C;
loc_831CB884:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18648, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB898"))) PPC_WEAK_FUNC(sub_831CB898);
PPC_FUNC_IMPL(__imp__sub_831CB898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15776
	ctx.r9.s64 = ctx.r10.s64 + -15776;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB8AC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb8d4
	if (!ctx.cr6.lt) goto loc_831CB8D4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb8ac
	if (!ctx.cr0.eq) goto loc_831CB8AC;
loc_831CB8D4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18656, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB8E8"))) PPC_WEAK_FUNC(sub_831CB8E8);
PPC_FUNC_IMPL(__imp__sub_831CB8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15768
	ctx.r9.s64 = ctx.r10.s64 + -15768;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB8FC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb924
	if (!ctx.cr6.lt) goto loc_831CB924;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb8fc
	if (!ctx.cr0.eq) goto loc_831CB8FC;
loc_831CB924:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18608, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB938"))) PPC_WEAK_FUNC(sub_831CB938);
PPC_FUNC_IMPL(__imp__sub_831CB938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15760
	ctx.r9.s64 = ctx.r10.s64 + -15760;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB94C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb974
	if (!ctx.cr6.lt) goto loc_831CB974;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb94c
	if (!ctx.cr0.eq) goto loc_831CB94C;
loc_831CB974:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB988"))) PPC_WEAK_FUNC(sub_831CB988);
PPC_FUNC_IMPL(__imp__sub_831CB988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15752
	ctx.r9.s64 = ctx.r10.s64 + -15752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB99C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cb9c4
	if (!ctx.cr6.lt) goto loc_831CB9C4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb99c
	if (!ctx.cr0.eq) goto loc_831CB99C;
loc_831CB9C4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18640, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CB9D8"))) PPC_WEAK_FUNC(sub_831CB9D8);
PPC_FUNC_IMPL(__imp__sub_831CB9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,12988
	ctx.r9.s64 = ctx.r10.s64 + 12988;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CB9EC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cba14
	if (!ctx.cr6.lt) goto loc_831CBA14;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cb9ec
	if (!ctx.cr0.eq) goto loc_831CB9EC;
loc_831CBA14:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18700(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18700, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CBA28"))) PPC_WEAK_FUNC(sub_831CBA28);
PPC_FUNC_IMPL(__imp__sub_831CBA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-27388
	ctx.r9.s64 = ctx.r10.s64 + -27388;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CBA3C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cba64
	if (!ctx.cr6.lt) goto loc_831CBA64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cba3c
	if (!ctx.cr0.eq) goto loc_831CBA3C;
loc_831CBA64:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18664, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CBA78"))) PPC_WEAK_FUNC(sub_831CBA78);
PPC_FUNC_IMPL(__imp__sub_831CBA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13568
	ctx.r3.s64 = ctx.r11.s64 + -13568;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CBA88"))) PPC_WEAK_FUNC(sub_831CBA88);
PPC_FUNC_IMPL(__imp__sub_831CBA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
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

__attribute__((alias("__imp__sub_831CBAA8"))) PPC_WEAK_FUNC(sub_831CBAA8);
PPC_FUNC_IMPL(__imp__sub_831CBAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,18792
	ctx.r3.s64 = ctx.r11.s64 + 18792;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CBAB8"))) PPC_WEAK_FUNC(sub_831CBAB8);
PPC_FUNC_IMPL(__imp__sub_831CBAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13552
	ctx.r3.s64 = ctx.r11.s64 + -13552;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CBAC8"))) PPC_WEAK_FUNC(sub_831CBAC8);
PPC_FUNC_IMPL(__imp__sub_831CBAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13416
	ctx.r3.s64 = ctx.r11.s64 + -13416;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CBAD8"))) PPC_WEAK_FUNC(sub_831CBAD8);
PPC_FUNC_IMPL(__imp__sub_831CBAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13832
	ctx.r3.s64 = ctx.r11.s64 + -13832;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CBAE8"))) PPC_WEAK_FUNC(sub_831CBAE8);
PPC_FUNC_IMPL(__imp__sub_831CBAE8) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,18988
	ctx.r31.s64 = ctx.r11.s64 + 18988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831CBB0C;
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
	// addi r3,r10,-13448
	ctx.r3.s64 = ctx.r10.s64 + -13448;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CBB34;
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

__attribute__((alias("__imp__sub_831CBB48"))) PPC_WEAK_FUNC(sub_831CBB48);
PPC_FUNC_IMPL(__imp__sub_831CBB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13824
	ctx.r3.s64 = ctx.r11.s64 + -13824;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CBB58"))) PPC_WEAK_FUNC(sub_831CBB58);
PPC_FUNC_IMPL(__imp__sub_831CBB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13816
	ctx.r3.s64 = ctx.r11.s64 + -13816;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CBB68"))) PPC_WEAK_FUNC(sub_831CBB68);
PPC_FUNC_IMPL(__imp__sub_831CBB68) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,19052
	ctx.r31.s64 = ctx.r11.s64 + 19052;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831CBB8C;
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
	// addi r3,r10,-13432
	ctx.r3.s64 = ctx.r10.s64 + -13432;
	// bl 0x82a7e6b0
	ctx.lr = 0x831CBBB4;
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

__attribute__((alias("__imp__sub_831CBBC8"))) PPC_WEAK_FUNC(sub_831CBBC8);
PPC_FUNC_IMPL(__imp__sub_831CBBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15744
	ctx.r9.s64 = ctx.r10.s64 + -15744;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CBBDC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cbc04
	if (!ctx.cr6.lt) goto loc_831CBC04;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cbbdc
	if (!ctx.cr0.eq) goto loc_831CBBDC;
loc_831CBC04:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,19036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19036, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CBC18"))) PPC_WEAK_FUNC(sub_831CBC18);
PPC_FUNC_IMPL(__imp__sub_831CBC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-15724
	ctx.r10.s64 = ctx.r11.s64 + -15724;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
loc_831CBC2C:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x831cbc54
	if (!ctx.cr6.lt) goto loc_831CBC54;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne 0x831cbc2c
	if (!ctx.cr0.eq) goto loc_831CBC2C;
loc_831CBC54:
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r9,18380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18380, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CBC60"))) PPC_WEAK_FUNC(sub_831CBC60);
PPC_FUNC_IMPL(__imp__sub_831CBC60) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,-15712
	ctx.r3.s64 = ctx.r11.s64 + -15712;
	// bl 0x82e73ab0
	ctx.lr = 0x831CBC78;
	sub_82E73AB0(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,18480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CBC90"))) PPC_WEAK_FUNC(sub_831CBC90);
PPC_FUNC_IMPL(__imp__sub_831CBC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r30,r31,18532
	ctx.r30.s64 = ctx.r31.s64 + 18532;
	// addi r5,r11,-15692
	ctx.r5.s64 = ctx.r11.s64 + -15692;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x831CBCC0;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-13808
	ctx.r3.s64 = ctx.r10.s64 + -13808;
	// lfs f11,3436(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3436);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,18532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18532, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831CBD08;
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

__attribute__((alias("__imp__sub_831CBD20"))) PPC_WEAK_FUNC(sub_831CBD20);
PPC_FUNC_IMPL(__imp__sub_831CBD20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r30,r31,18708
	ctx.r30.s64 = ctx.r31.s64 + 18708;
	// addi r5,r11,-15668
	ctx.r5.s64 = ctx.r11.s64 + -15668;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x831CBD50;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-13784
	ctx.r3.s64 = ctx.r7.s64 + -13784;
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,18708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18708, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831CBD90;
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

__attribute__((alias("__imp__sub_831CBDA8"))) PPC_WEAK_FUNC(sub_831CBDA8);
PPC_FUNC_IMPL(__imp__sub_831CBDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r30,r31,18356
	ctx.r30.s64 = ctx.r31.s64 + 18356;
	// addi r5,r11,-15644
	ctx.r5.s64 = ctx.r11.s64 + -15644;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x831CBDD8;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-13144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -13144);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-13760
	ctx.r3.s64 = ctx.r10.s64 + -13760;
	// lfs f11,19508(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19508);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,18356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18356, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831CBE20;
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

__attribute__((alias("__imp__sub_831CBE38"))) PPC_WEAK_FUNC(sub_831CBE38);
PPC_FUNC_IMPL(__imp__sub_831CBE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r30,r31,18508
	ctx.r30.s64 = ctx.r31.s64 + 18508;
	// addi r5,r11,-15620
	ctx.r5.s64 = ctx.r11.s64 + -15620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x831CBE68;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-13144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -13144);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-13736
	ctx.r3.s64 = ctx.r10.s64 + -13736;
	// lfs f11,19508(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19508);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,18508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18508, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831CBEB0;
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

__attribute__((alias("__imp__sub_831CBEC8"))) PPC_WEAK_FUNC(sub_831CBEC8);
PPC_FUNC_IMPL(__imp__sub_831CBEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r30,r31,18872
	ctx.r30.s64 = ctx.r31.s64 + 18872;
	// addi r5,r11,-15596
	ctx.r5.s64 = ctx.r11.s64 + -15596;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x831CBEF8;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-13712
	ctx.r3.s64 = ctx.r7.s64 + -13712;
	// lfs f12,19508(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19508);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,18872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18872, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831CBF38;
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

__attribute__((alias("__imp__sub_831CBF50"))) PPC_WEAK_FUNC(sub_831CBF50);
PPC_FUNC_IMPL(__imp__sub_831CBF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13688
	ctx.r3.s64 = ctx.r11.s64 + -13688;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CBF60"))) PPC_WEAK_FUNC(sub_831CBF60);
PPC_FUNC_IMPL(__imp__sub_831CBF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r30,r31,18764
	ctx.r30.s64 = ctx.r31.s64 + 18764;
	// addi r5,r11,-15572
	ctx.r5.s64 = ctx.r11.s64 + -15572;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x831CBF90;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-13680
	ctx.r3.s64 = ctx.r10.s64 + -13680;
	// lfs f11,19508(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19508);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,18764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18764, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831CBFD8;
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

__attribute__((alias("__imp__sub_831CBFF0"))) PPC_WEAK_FUNC(sub_831CBFF0);
PPC_FUNC_IMPL(__imp__sub_831CBFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r30,r31,18484
	ctx.r30.s64 = ctx.r31.s64 + 18484;
	// addi r5,r11,-15544
	ctx.r5.s64 = ctx.r11.s64 + -15544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x831CC020;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r8,-13656
	ctx.r3.s64 = ctx.r8.s64 + -13656;
	// lfs f13,10008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10008);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,18484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18484, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831CC058;
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

__attribute__((alias("__imp__sub_831CC070"))) PPC_WEAK_FUNC(sub_831CC070);
PPC_FUNC_IMPL(__imp__sub_831CC070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r30,r31,18912
	ctx.r30.s64 = ctx.r31.s64 + 18912;
	// addi r5,r11,-15520
	ctx.r5.s64 = ctx.r11.s64 + -15520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x831CC0A0;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-13632
	ctx.r3.s64 = ctx.r7.s64 + -13632;
	// lfs f12,19508(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19508);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,18912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18912, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831CC0E0;
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

__attribute__((alias("__imp__sub_831CC0F8"))) PPC_WEAK_FUNC(sub_831CC0F8);
PPC_FUNC_IMPL(__imp__sub_831CC0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15496
	ctx.r9.s64 = ctx.r10.s64 + -15496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC10C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc134
	if (!ctx.cr6.lt) goto loc_831CC134;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc10c
	if (!ctx.cr0.eq) goto loc_831CC10C;
loc_831CC134:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18696, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC148"))) PPC_WEAK_FUNC(sub_831CC148);
PPC_FUNC_IMPL(__imp__sub_831CC148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15476
	ctx.r9.s64 = ctx.r10.s64 + -15476;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC15C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc184
	if (!ctx.cr6.lt) goto loc_831CC184;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc15c
	if (!ctx.cr0.eq) goto loc_831CC15C;
loc_831CC184:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18596, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC198"))) PPC_WEAK_FUNC(sub_831CC198);
PPC_FUNC_IMPL(__imp__sub_831CC198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15456
	ctx.r9.s64 = ctx.r10.s64 + -15456;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC1AC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc1d4
	if (!ctx.cr6.lt) goto loc_831CC1D4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc1ac
	if (!ctx.cr0.eq) goto loc_831CC1AC;
loc_831CC1D4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18684(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18684, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC1E8"))) PPC_WEAK_FUNC(sub_831CC1E8);
PPC_FUNC_IMPL(__imp__sub_831CC1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15436
	ctx.r9.s64 = ctx.r10.s64 + -15436;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC1FC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc224
	if (!ctx.cr6.lt) goto loc_831CC224;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc1fc
	if (!ctx.cr0.eq) goto loc_831CC1FC;
loc_831CC224:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18612(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18612, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC238"))) PPC_WEAK_FUNC(sub_831CC238);
PPC_FUNC_IMPL(__imp__sub_831CC238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15420
	ctx.r9.s64 = ctx.r10.s64 + -15420;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC24C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc274
	if (!ctx.cr6.lt) goto loc_831CC274;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc24c
	if (!ctx.cr0.eq) goto loc_831CC24C;
loc_831CC274:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18760, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC288"))) PPC_WEAK_FUNC(sub_831CC288);
PPC_FUNC_IMPL(__imp__sub_831CC288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15404
	ctx.r9.s64 = ctx.r10.s64 + -15404;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC29C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc2c4
	if (!ctx.cr6.lt) goto loc_831CC2C4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc29c
	if (!ctx.cr0.eq) goto loc_831CC29C;
loc_831CC2C4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18688, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC2D8"))) PPC_WEAK_FUNC(sub_831CC2D8);
PPC_FUNC_IMPL(__imp__sub_831CC2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15384
	ctx.r9.s64 = ctx.r10.s64 + -15384;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC2EC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc314
	if (!ctx.cr6.lt) goto loc_831CC314;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc2ec
	if (!ctx.cr0.eq) goto loc_831CC2EC;
loc_831CC314:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18704, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC328"))) PPC_WEAK_FUNC(sub_831CC328);
PPC_FUNC_IMPL(__imp__sub_831CC328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15360
	ctx.r9.s64 = ctx.r10.s64 + -15360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC33C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc364
	if (!ctx.cr6.lt) goto loc_831CC364;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc33c
	if (!ctx.cr0.eq) goto loc_831CC33C;
loc_831CC364:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18592, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC378"))) PPC_WEAK_FUNC(sub_831CC378);
PPC_FUNC_IMPL(__imp__sub_831CC378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15340
	ctx.r9.s64 = ctx.r10.s64 + -15340;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC38C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc3b4
	if (!ctx.cr6.lt) goto loc_831CC3B4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc38c
	if (!ctx.cr0.eq) goto loc_831CC38C;
loc_831CC3B4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18680, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC3C8"))) PPC_WEAK_FUNC(sub_831CC3C8);
PPC_FUNC_IMPL(__imp__sub_831CC3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15316
	ctx.r9.s64 = ctx.r10.s64 + -15316;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC3DC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc404
	if (!ctx.cr6.lt) goto loc_831CC404;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc3dc
	if (!ctx.cr0.eq) goto loc_831CC3DC;
loc_831CC404:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18896, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC418"))) PPC_WEAK_FUNC(sub_831CC418);
PPC_FUNC_IMPL(__imp__sub_831CC418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15292
	ctx.r9.s64 = ctx.r10.s64 + -15292;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC42C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc454
	if (!ctx.cr6.lt) goto loc_831CC454;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc42c
	if (!ctx.cr0.eq) goto loc_831CC42C;
loc_831CC454:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18908, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC468"))) PPC_WEAK_FUNC(sub_831CC468);
PPC_FUNC_IMPL(__imp__sub_831CC468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15264
	ctx.r9.s64 = ctx.r10.s64 + -15264;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC47C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc4a4
	if (!ctx.cr6.lt) goto loc_831CC4A4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc47c
	if (!ctx.cr0.eq) goto loc_831CC47C;
loc_831CC4A4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18868, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC4B8"))) PPC_WEAK_FUNC(sub_831CC4B8);
PPC_FUNC_IMPL(__imp__sub_831CC4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15244
	ctx.r9.s64 = ctx.r10.s64 + -15244;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC4CC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc4f4
	if (!ctx.cr6.lt) goto loc_831CC4F4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc4cc
	if (!ctx.cr0.eq) goto loc_831CC4CC;
loc_831CC4F4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18736, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC508"))) PPC_WEAK_FUNC(sub_831CC508);
PPC_FUNC_IMPL(__imp__sub_831CC508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15220
	ctx.r9.s64 = ctx.r10.s64 + -15220;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC51C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc544
	if (!ctx.cr6.lt) goto loc_831CC544;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc51c
	if (!ctx.cr0.eq) goto loc_831CC51C;
loc_831CC544:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18732, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC558"))) PPC_WEAK_FUNC(sub_831CC558);
PPC_FUNC_IMPL(__imp__sub_831CC558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15204
	ctx.r9.s64 = ctx.r10.s64 + -15204;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC56C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc594
	if (!ctx.cr6.lt) goto loc_831CC594;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc56c
	if (!ctx.cr0.eq) goto loc_831CC56C;
loc_831CC594:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,18668(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18668, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC5A8"))) PPC_WEAK_FUNC(sub_831CC5A8);
PPC_FUNC_IMPL(__imp__sub_831CC5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13376
	ctx.r3.s64 = ctx.r11.s64 + -13376;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CC5B8"))) PPC_WEAK_FUNC(sub_831CC5B8);
PPC_FUNC_IMPL(__imp__sub_831CC5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20096
	ctx.r9.s64 = ctx.r11.s64 + 20096;
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

__attribute__((alias("__imp__sub_831CC5E8"))) PPC_WEAK_FUNC(sub_831CC5E8);
PPC_FUNC_IMPL(__imp__sub_831CC5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19520
	ctx.r9.s64 = ctx.r11.s64 + 19520;
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

__attribute__((alias("__imp__sub_831CC618"))) PPC_WEAK_FUNC(sub_831CC618);
PPC_FUNC_IMPL(__imp__sub_831CC618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19184
	ctx.r9.s64 = ctx.r11.s64 + 19184;
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

__attribute__((alias("__imp__sub_831CC648"))) PPC_WEAK_FUNC(sub_831CC648);
PPC_FUNC_IMPL(__imp__sub_831CC648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19488
	ctx.r9.s64 = ctx.r11.s64 + 19488;
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

__attribute__((alias("__imp__sub_831CC678"))) PPC_WEAK_FUNC(sub_831CC678);
PPC_FUNC_IMPL(__imp__sub_831CC678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,19392
	ctx.r10.s64 = ctx.r10.s64 + 19392;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC698"))) PPC_WEAK_FUNC(sub_831CC698);
PPC_FUNC_IMPL(__imp__sub_831CC698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,19152
	ctx.r10.s64 = ctx.r10.s64 + 19152;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC6B8"))) PPC_WEAK_FUNC(sub_831CC6B8);
PPC_FUNC_IMPL(__imp__sub_831CC6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,776
	ctx.r9.s64 = ctx.r10.s64 + 776;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC6CC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc6f4
	if (!ctx.cr6.lt) goto loc_831CC6F4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc6cc
	if (!ctx.cr0.eq) goto loc_831CC6CC;
loc_831CC6F4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19252, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC708"))) PPC_WEAK_FUNC(sub_831CC708);
PPC_FUNC_IMPL(__imp__sub_831CC708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-12912
	ctx.r9.s64 = ctx.r10.s64 + -12912;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC71C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc744
	if (!ctx.cr6.lt) goto loc_831CC744;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc71c
	if (!ctx.cr0.eq) goto loc_831CC71C;
loc_831CC744:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20712, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC758"))) PPC_WEAK_FUNC(sub_831CC758);
PPC_FUNC_IMPL(__imp__sub_831CC758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1480
	ctx.r9.s64 = ctx.r10.s64 + 1480;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC76C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc794
	if (!ctx.cr6.lt) goto loc_831CC794;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc76c
	if (!ctx.cr0.eq) goto loc_831CC76C;
loc_831CC794:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20668(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20668, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC7A8"))) PPC_WEAK_FUNC(sub_831CC7A8);
PPC_FUNC_IMPL(__imp__sub_831CC7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1492
	ctx.r9.s64 = ctx.r10.s64 + 1492;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC7BC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc7e4
	if (!ctx.cr6.lt) goto loc_831CC7E4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc7bc
	if (!ctx.cr0.eq) goto loc_831CC7BC;
loc_831CC7E4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20180, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC7F8"))) PPC_WEAK_FUNC(sub_831CC7F8);
PPC_FUNC_IMPL(__imp__sub_831CC7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1468
	ctx.r9.s64 = ctx.r10.s64 + 1468;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC80C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc834
	if (!ctx.cr6.lt) goto loc_831CC834;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc80c
	if (!ctx.cr0.eq) goto loc_831CC80C;
loc_831CC834:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC848"))) PPC_WEAK_FUNC(sub_831CC848);
PPC_FUNC_IMPL(__imp__sub_831CC848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1508
	ctx.r9.s64 = ctx.r10.s64 + 1508;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC85C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc884
	if (!ctx.cr6.lt) goto loc_831CC884;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc85c
	if (!ctx.cr0.eq) goto loc_831CC85C;
loc_831CC884:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19940, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC898"))) PPC_WEAK_FUNC(sub_831CC898);
PPC_FUNC_IMPL(__imp__sub_831CC898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1520
	ctx.r9.s64 = ctx.r10.s64 + 1520;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC8AC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc8d4
	if (!ctx.cr6.lt) goto loc_831CC8D4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc8ac
	if (!ctx.cr0.eq) goto loc_831CC8AC;
loc_831CC8D4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20592, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC8E8"))) PPC_WEAK_FUNC(sub_831CC8E8);
PPC_FUNC_IMPL(__imp__sub_831CC8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1536
	ctx.r9.s64 = ctx.r10.s64 + 1536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC8FC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc924
	if (!ctx.cr6.lt) goto loc_831CC924;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc8fc
	if (!ctx.cr0.eq) goto loc_831CC8FC;
loc_831CC924:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,21076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21076, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC938"))) PPC_WEAK_FUNC(sub_831CC938);
PPC_FUNC_IMPL(__imp__sub_831CC938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1548
	ctx.r9.s64 = ctx.r10.s64 + 1548;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC94C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc974
	if (!ctx.cr6.lt) goto loc_831CC974;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc94c
	if (!ctx.cr0.eq) goto loc_831CC94C;
loc_831CC974:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC988"))) PPC_WEAK_FUNC(sub_831CC988);
PPC_FUNC_IMPL(__imp__sub_831CC988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1560
	ctx.r9.s64 = ctx.r10.s64 + 1560;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC99C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cc9c4
	if (!ctx.cr6.lt) goto loc_831CC9C4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc99c
	if (!ctx.cr0.eq) goto loc_831CC99C;
loc_831CC9C4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC9D8"))) PPC_WEAK_FUNC(sub_831CC9D8);
PPC_FUNC_IMPL(__imp__sub_831CC9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1572
	ctx.r9.s64 = ctx.r10.s64 + 1572;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CC9EC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cca14
	if (!ctx.cr6.lt) goto loc_831CCA14;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cc9ec
	if (!ctx.cr0.eq) goto loc_831CC9EC;
loc_831CCA14:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19544, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCA28"))) PPC_WEAK_FUNC(sub_831CCA28);
PPC_FUNC_IMPL(__imp__sub_831CCA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1588
	ctx.r9.s64 = ctx.r10.s64 + 1588;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCA3C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cca64
	if (!ctx.cr6.lt) goto loc_831CCA64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cca3c
	if (!ctx.cr0.eq) goto loc_831CCA3C;
loc_831CCA64:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,21392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21392, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCA78"))) PPC_WEAK_FUNC(sub_831CCA78);
PPC_FUNC_IMPL(__imp__sub_831CCA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1640
	ctx.r9.s64 = ctx.r10.s64 + 1640;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCA8C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831ccab4
	if (!ctx.cr6.lt) goto loc_831CCAB4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cca8c
	if (!ctx.cr0.eq) goto loc_831CCA8C;
loc_831CCAB4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,21300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21300, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCAC8"))) PPC_WEAK_FUNC(sub_831CCAC8);
PPC_FUNC_IMPL(__imp__sub_831CCAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1604
	ctx.r9.s64 = ctx.r10.s64 + 1604;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCADC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831ccb04
	if (!ctx.cr6.lt) goto loc_831CCB04;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831ccadc
	if (!ctx.cr0.eq) goto loc_831CCADC;
loc_831CCB04:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19740(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19740, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCB18"))) PPC_WEAK_FUNC(sub_831CCB18);
PPC_FUNC_IMPL(__imp__sub_831CCB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1148
	ctx.r9.s64 = ctx.r10.s64 + 1148;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCB2C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831ccb54
	if (!ctx.cr6.lt) goto loc_831CCB54;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831ccb2c
	if (!ctx.cr0.eq) goto loc_831CCB2C;
loc_831CCB54:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20552, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCB68"))) PPC_WEAK_FUNC(sub_831CCB68);
PPC_FUNC_IMPL(__imp__sub_831CCB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,4780
	ctx.r9.s64 = ctx.r10.s64 + 4780;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCB7C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831ccba4
	if (!ctx.cr6.lt) goto loc_831CCBA4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831ccb7c
	if (!ctx.cr0.eq) goto loc_831CCB7C;
loc_831CCBA4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19992, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCBB8"))) PPC_WEAK_FUNC(sub_831CCBB8);
PPC_FUNC_IMPL(__imp__sub_831CCBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-12900
	ctx.r9.s64 = ctx.r10.s64 + -12900;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCBCC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831ccbf4
	if (!ctx.cr6.lt) goto loc_831CCBF4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831ccbcc
	if (!ctx.cr0.eq) goto loc_831CCBCC;
loc_831CCBF4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20820, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCC08"))) PPC_WEAK_FUNC(sub_831CCC08);
PPC_FUNC_IMPL(__imp__sub_831CCC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-12884
	ctx.r9.s64 = ctx.r10.s64 + -12884;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCC1C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831ccc44
	if (!ctx.cr6.lt) goto loc_831CCC44;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831ccc1c
	if (!ctx.cr0.eq) goto loc_831CCC1C;
loc_831CCC44:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20304, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCC58"))) PPC_WEAK_FUNC(sub_831CCC58);
PPC_FUNC_IMPL(__imp__sub_831CCC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1136
	ctx.r9.s64 = ctx.r10.s64 + 1136;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCC6C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831ccc94
	if (!ctx.cr6.lt) goto loc_831CCC94;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831ccc6c
	if (!ctx.cr0.eq) goto loc_831CCC6C;
loc_831CCC94:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19868, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCCA8"))) PPC_WEAK_FUNC(sub_831CCCA8);
PPC_FUNC_IMPL(__imp__sub_831CCCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1124
	ctx.r9.s64 = ctx.r10.s64 + 1124;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCCBC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831ccce4
	if (!ctx.cr6.lt) goto loc_831CCCE4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cccbc
	if (!ctx.cr0.eq) goto loc_831CCCBC;
loc_831CCCE4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19516, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCCF8"))) PPC_WEAK_FUNC(sub_831CCCF8);
PPC_FUNC_IMPL(__imp__sub_831CCCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1112
	ctx.r9.s64 = ctx.r10.s64 + 1112;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCD0C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831ccd34
	if (!ctx.cr6.lt) goto loc_831CCD34;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831ccd0c
	if (!ctx.cr0.eq) goto loc_831CCD0C;
loc_831CCD34:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20876, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCD48"))) PPC_WEAK_FUNC(sub_831CCD48);
PPC_FUNC_IMPL(__imp__sub_831CCD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1100
	ctx.r9.s64 = ctx.r10.s64 + 1100;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCD5C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831ccd84
	if (!ctx.cr6.lt) goto loc_831CCD84;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831ccd5c
	if (!ctx.cr0.eq) goto loc_831CCD5C;
loc_831CCD84:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCD98"))) PPC_WEAK_FUNC(sub_831CCD98);
PPC_FUNC_IMPL(__imp__sub_831CCD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1188
	ctx.r9.s64 = ctx.r10.s64 + 1188;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCDAC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831ccdd4
	if (!ctx.cr6.lt) goto loc_831CCDD4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831ccdac
	if (!ctx.cr0.eq) goto loc_831CCDAC;
loc_831CCDD4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20720, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCDE8"))) PPC_WEAK_FUNC(sub_831CCDE8);
PPC_FUNC_IMPL(__imp__sub_831CCDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1176
	ctx.r9.s64 = ctx.r10.s64 + 1176;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCDFC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cce24
	if (!ctx.cr6.lt) goto loc_831CCE24;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831ccdfc
	if (!ctx.cr0.eq) goto loc_831CCDFC;
loc_831CCE24:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,21228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21228, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCE38"))) PPC_WEAK_FUNC(sub_831CCE38);
PPC_FUNC_IMPL(__imp__sub_831CCE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,23472
	ctx.r9.s64 = ctx.r10.s64 + 23472;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCE4C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cce74
	if (!ctx.cr6.lt) goto loc_831CCE74;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cce4c
	if (!ctx.cr0.eq) goto loc_831CCE4C;
loc_831CCE74:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20004, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCE88"))) PPC_WEAK_FUNC(sub_831CCE88);
PPC_FUNC_IMPL(__imp__sub_831CCE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,23464
	ctx.r9.s64 = ctx.r10.s64 + 23464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCE9C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831ccec4
	if (!ctx.cr6.lt) goto loc_831CCEC4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cce9c
	if (!ctx.cr0.eq) goto loc_831CCE9C;
loc_831CCEC4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,21120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCED8"))) PPC_WEAK_FUNC(sub_831CCED8);
PPC_FUNC_IMPL(__imp__sub_831CCED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,23456
	ctx.r9.s64 = ctx.r10.s64 + 23456;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCEEC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831ccf14
	if (!ctx.cr6.lt) goto loc_831CCF14;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cceec
	if (!ctx.cr0.eq) goto loc_831CCEEC;
loc_831CCF14:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20192, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCF28"))) PPC_WEAK_FUNC(sub_831CCF28);
PPC_FUNC_IMPL(__imp__sub_831CCF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,23448
	ctx.r9.s64 = ctx.r10.s64 + 23448;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCF3C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831ccf64
	if (!ctx.cr6.lt) goto loc_831CCF64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831ccf3c
	if (!ctx.cr0.eq) goto loc_831CCF3C;
loc_831CCF64:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20840, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCF78"))) PPC_WEAK_FUNC(sub_831CCF78);
PPC_FUNC_IMPL(__imp__sub_831CCF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,23440
	ctx.r9.s64 = ctx.r10.s64 + 23440;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCF8C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831ccfb4
	if (!ctx.cr6.lt) goto loc_831CCFB4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831ccf8c
	if (!ctx.cr0.eq) goto loc_831CCF8C;
loc_831CCFB4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,21456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21456, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCFC8"))) PPC_WEAK_FUNC(sub_831CCFC8);
PPC_FUNC_IMPL(__imp__sub_831CCFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,23432
	ctx.r9.s64 = ctx.r10.s64 + 23432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CCFDC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd004
	if (!ctx.cr6.lt) goto loc_831CD004;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831ccfdc
	if (!ctx.cr0.eq) goto loc_831CCFDC;
loc_831CD004:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20572, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD018"))) PPC_WEAK_FUNC(sub_831CD018);
PPC_FUNC_IMPL(__imp__sub_831CD018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,23424
	ctx.r9.s64 = ctx.r10.s64 + 23424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD02C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd054
	if (!ctx.cr6.lt) goto loc_831CD054;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd02c
	if (!ctx.cr0.eq) goto loc_831CD02C;
loc_831CD054:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD068"))) PPC_WEAK_FUNC(sub_831CD068);
PPC_FUNC_IMPL(__imp__sub_831CD068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1276
	ctx.r9.s64 = ctx.r10.s64 + 1276;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD07C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd0a4
	if (!ctx.cr6.lt) goto loc_831CD0A4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd07c
	if (!ctx.cr0.eq) goto loc_831CD07C;
loc_831CD0A4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,21152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD0B8"))) PPC_WEAK_FUNC(sub_831CD0B8);
PPC_FUNC_IMPL(__imp__sub_831CD0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1264
	ctx.r9.s64 = ctx.r10.s64 + 1264;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD0CC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd0f4
	if (!ctx.cr6.lt) goto loc_831CD0F4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd0cc
	if (!ctx.cr0.eq) goto loc_831CD0CC;
loc_831CD0F4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19724, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD108"))) PPC_WEAK_FUNC(sub_831CD108);
PPC_FUNC_IMPL(__imp__sub_831CD108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1252
	ctx.r9.s64 = ctx.r10.s64 + 1252;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD11C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd144
	if (!ctx.cr6.lt) goto loc_831CD144;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd11c
	if (!ctx.cr0.eq) goto loc_831CD11C;
loc_831CD144:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD158"))) PPC_WEAK_FUNC(sub_831CD158);
PPC_FUNC_IMPL(__imp__sub_831CD158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1284
	ctx.r9.s64 = ctx.r10.s64 + 1284;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD16C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd194
	if (!ctx.cr6.lt) goto loc_831CD194;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd16c
	if (!ctx.cr0.eq) goto loc_831CD16C;
loc_831CD194:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20672, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD1A8"))) PPC_WEAK_FUNC(sub_831CD1A8);
PPC_FUNC_IMPL(__imp__sub_831CD1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1240
	ctx.r9.s64 = ctx.r10.s64 + 1240;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD1BC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd1e4
	if (!ctx.cr6.lt) goto loc_831CD1E4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd1bc
	if (!ctx.cr0.eq) goto loc_831CD1BC;
loc_831CD1E4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD1F8"))) PPC_WEAK_FUNC(sub_831CD1F8);
PPC_FUNC_IMPL(__imp__sub_831CD1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1220
	ctx.r9.s64 = ctx.r10.s64 + 1220;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD20C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd234
	if (!ctx.cr6.lt) goto loc_831CD234;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd20c
	if (!ctx.cr0.eq) goto loc_831CD20C;
loc_831CD234:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,21056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21056, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD248"))) PPC_WEAK_FUNC(sub_831CD248);
PPC_FUNC_IMPL(__imp__sub_831CD248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1204
	ctx.r9.s64 = ctx.r10.s64 + 1204;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD25C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd284
	if (!ctx.cr6.lt) goto loc_831CD284;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd25c
	if (!ctx.cr0.eq) goto loc_831CD25C;
loc_831CD284:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD298"))) PPC_WEAK_FUNC(sub_831CD298);
PPC_FUNC_IMPL(__imp__sub_831CD298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,856
	ctx.r9.s64 = ctx.r10.s64 + 856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD2AC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd2d4
	if (!ctx.cr6.lt) goto loc_831CD2D4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd2ac
	if (!ctx.cr0.eq) goto loc_831CD2AC;
loc_831CD2D4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19584, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD2E8"))) PPC_WEAK_FUNC(sub_831CD2E8);
PPC_FUNC_IMPL(__imp__sub_831CD2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-23600
	ctx.r9.s64 = ctx.r10.s64 + -23600;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD2FC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd324
	if (!ctx.cr6.lt) goto loc_831CD324;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd2fc
	if (!ctx.cr0.eq) goto loc_831CD2FC;
loc_831CD324:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19476, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD338"))) PPC_WEAK_FUNC(sub_831CD338);
PPC_FUNC_IMPL(__imp__sub_831CD338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1380
	ctx.r9.s64 = ctx.r10.s64 + 1380;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD34C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd374
	if (!ctx.cr6.lt) goto loc_831CD374;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd34c
	if (!ctx.cr0.eq) goto loc_831CD34C;
loc_831CD374:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20308, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD388"))) PPC_WEAK_FUNC(sub_831CD388);
PPC_FUNC_IMPL(__imp__sub_831CD388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,544
	ctx.r9.s64 = ctx.r10.s64 + 544;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD39C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd3c4
	if (!ctx.cr6.lt) goto loc_831CD3C4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd39c
	if (!ctx.cr0.eq) goto loc_831CD39C;
loc_831CD3C4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,21348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD3D8"))) PPC_WEAK_FUNC(sub_831CD3D8);
PPC_FUNC_IMPL(__imp__sub_831CD3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,516
	ctx.r9.s64 = ctx.r10.s64 + 516;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD3EC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd414
	if (!ctx.cr6.lt) goto loc_831CD414;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd3ec
	if (!ctx.cr0.eq) goto loc_831CD3EC;
loc_831CD414:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20008, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD428"))) PPC_WEAK_FUNC(sub_831CD428);
PPC_FUNC_IMPL(__imp__sub_831CD428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,488
	ctx.r9.s64 = ctx.r10.s64 + 488;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD43C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd464
	if (!ctx.cr6.lt) goto loc_831CD464;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd43c
	if (!ctx.cr0.eq) goto loc_831CD43C;
loc_831CD464:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20952, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD478"))) PPC_WEAK_FUNC(sub_831CD478);
PPC_FUNC_IMPL(__imp__sub_831CD478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,460
	ctx.r9.s64 = ctx.r10.s64 + 460;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD48C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd4b4
	if (!ctx.cr6.lt) goto loc_831CD4B4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd48c
	if (!ctx.cr0.eq) goto loc_831CD48C;
loc_831CD4B4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20792, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD4C8"))) PPC_WEAK_FUNC(sub_831CD4C8);
PPC_FUNC_IMPL(__imp__sub_831CD4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,432
	ctx.r9.s64 = ctx.r10.s64 + 432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD4DC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd504
	if (!ctx.cr6.lt) goto loc_831CD504;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd4dc
	if (!ctx.cr0.eq) goto loc_831CD4DC;
loc_831CD504:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,21240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21240, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD518"))) PPC_WEAK_FUNC(sub_831CD518);
PPC_FUNC_IMPL(__imp__sub_831CD518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,404
	ctx.r9.s64 = ctx.r10.s64 + 404;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD52C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd554
	if (!ctx.cr6.lt) goto loc_831CD554;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd52c
	if (!ctx.cr0.eq) goto loc_831CD52C;
loc_831CD554:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD568"))) PPC_WEAK_FUNC(sub_831CD568);
PPC_FUNC_IMPL(__imp__sub_831CD568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,396
	ctx.r9.s64 = ctx.r10.s64 + 396;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD57C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd5a4
	if (!ctx.cr6.lt) goto loc_831CD5A4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd57c
	if (!ctx.cr0.eq) goto loc_831CD57C;
loc_831CD5A4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20392, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD5B8"))) PPC_WEAK_FUNC(sub_831CD5B8);
PPC_FUNC_IMPL(__imp__sub_831CD5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,360
	ctx.r9.s64 = ctx.r10.s64 + 360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD5CC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd5f4
	if (!ctx.cr6.lt) goto loc_831CD5F4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd5cc
	if (!ctx.cr0.eq) goto loc_831CD5CC;
loc_831CD5F4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20640, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD608"))) PPC_WEAK_FUNC(sub_831CD608);
PPC_FUNC_IMPL(__imp__sub_831CD608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,392
	ctx.r9.s64 = ctx.r10.s64 + 392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD61C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd644
	if (!ctx.cr6.lt) goto loc_831CD644;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd61c
	if (!ctx.cr0.eq) goto loc_831CD61C;
loc_831CD644:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19708, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD658"))) PPC_WEAK_FUNC(sub_831CD658);
PPC_FUNC_IMPL(__imp__sub_831CD658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,388
	ctx.r9.s64 = ctx.r10.s64 + 388;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD66C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd694
	if (!ctx.cr6.lt) goto loc_831CD694;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd66c
	if (!ctx.cr0.eq) goto loc_831CD66C;
loc_831CD694:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD6A8"))) PPC_WEAK_FUNC(sub_831CD6A8);
PPC_FUNC_IMPL(__imp__sub_831CD6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,372
	ctx.r9.s64 = ctx.r10.s64 + 372;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD6BC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd6e4
	if (!ctx.cr6.lt) goto loc_831CD6E4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd6bc
	if (!ctx.cr0.eq) goto loc_831CD6BC;
loc_831CD6E4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD6F8"))) PPC_WEAK_FUNC(sub_831CD6F8);
PPC_FUNC_IMPL(__imp__sub_831CD6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,348
	ctx.r9.s64 = ctx.r10.s64 + 348;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD70C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd734
	if (!ctx.cr6.lt) goto loc_831CD734;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd70c
	if (!ctx.cr0.eq) goto loc_831CD70C;
loc_831CD734:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19624, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD748"))) PPC_WEAK_FUNC(sub_831CD748);
PPC_FUNC_IMPL(__imp__sub_831CD748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,336
	ctx.r9.s64 = ctx.r10.s64 + 336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD75C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd784
	if (!ctx.cr6.lt) goto loc_831CD784;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd75c
	if (!ctx.cr0.eq) goto loc_831CD75C;
loc_831CD784:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19232, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD798"))) PPC_WEAK_FUNC(sub_831CD798);
PPC_FUNC_IMPL(__imp__sub_831CD798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-12868
	ctx.r9.s64 = ctx.r10.s64 + -12868;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD7AC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd7d4
	if (!ctx.cr6.lt) goto loc_831CD7D4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd7ac
	if (!ctx.cr0.eq) goto loc_831CD7AC;
loc_831CD7D4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD7E8"))) PPC_WEAK_FUNC(sub_831CD7E8);
PPC_FUNC_IMPL(__imp__sub_831CD7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,8284
	ctx.r9.s64 = ctx.r10.s64 + 8284;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD7FC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd824
	if (!ctx.cr6.lt) goto loc_831CD824;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd7fc
	if (!ctx.cr0.eq) goto loc_831CD7FC;
loc_831CD824:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,21388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21388, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD838"))) PPC_WEAK_FUNC(sub_831CD838);
PPC_FUNC_IMPL(__imp__sub_831CD838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,8268
	ctx.r9.s64 = ctx.r10.s64 + 8268;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD84C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd874
	if (!ctx.cr6.lt) goto loc_831CD874;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd84c
	if (!ctx.cr0.eq) goto loc_831CD84C;
loc_831CD874:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19620, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD888"))) PPC_WEAK_FUNC(sub_831CD888);
PPC_FUNC_IMPL(__imp__sub_831CD888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,8252
	ctx.r9.s64 = ctx.r10.s64 + 8252;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD89C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd8c4
	if (!ctx.cr6.lt) goto loc_831CD8C4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd89c
	if (!ctx.cr0.eq) goto loc_831CD89C;
loc_831CD8C4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,19484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19484, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD8D8"))) PPC_WEAK_FUNC(sub_831CD8D8);
PPC_FUNC_IMPL(__imp__sub_831CD8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,8236
	ctx.r9.s64 = ctx.r10.s64 + 8236;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831CD8EC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831cd914
	if (!ctx.cr6.lt) goto loc_831CD914;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831cd8ec
	if (!ctx.cr0.eq) goto loc_831CD8EC;
loc_831CD914:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,21104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD928"))) PPC_WEAK_FUNC(sub_831CD928);
PPC_FUNC_IMPL(__imp__sub_831CD928) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12848
	ctx.r3.s64 = ctx.r11.s64 + -12848;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CD948;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD960"))) PPC_WEAK_FUNC(sub_831CD960);
PPC_FUNC_IMPL(__imp__sub_831CD960) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12828
	ctx.r3.s64 = ctx.r11.s64 + -12828;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CD980;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD998"))) PPC_WEAK_FUNC(sub_831CD998);
PPC_FUNC_IMPL(__imp__sub_831CD998) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12812
	ctx.r3.s64 = ctx.r11.s64 + -12812;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CD9B8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD9D0"))) PPC_WEAK_FUNC(sub_831CD9D0);
PPC_FUNC_IMPL(__imp__sub_831CD9D0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12796
	ctx.r3.s64 = ctx.r11.s64 + -12796;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CD9F0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDA08"))) PPC_WEAK_FUNC(sub_831CDA08);
PPC_FUNC_IMPL(__imp__sub_831CDA08) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12784
	ctx.r3.s64 = ctx.r11.s64 + -12784;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDA28;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21020(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21020, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDA40"))) PPC_WEAK_FUNC(sub_831CDA40);
PPC_FUNC_IMPL(__imp__sub_831CDA40) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12776
	ctx.r3.s64 = ctx.r11.s64 + -12776;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDA60;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDA78"))) PPC_WEAK_FUNC(sub_831CDA78);
PPC_FUNC_IMPL(__imp__sub_831CDA78) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12764
	ctx.r3.s64 = ctx.r11.s64 + -12764;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDA98;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDAB0"))) PPC_WEAK_FUNC(sub_831CDAB0);
PPC_FUNC_IMPL(__imp__sub_831CDAB0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12752
	ctx.r3.s64 = ctx.r11.s64 + -12752;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDAD0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDAE8"))) PPC_WEAK_FUNC(sub_831CDAE8);
PPC_FUNC_IMPL(__imp__sub_831CDAE8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12740
	ctx.r3.s64 = ctx.r11.s64 + -12740;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDB08;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19700, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDB20"))) PPC_WEAK_FUNC(sub_831CDB20);
PPC_FUNC_IMPL(__imp__sub_831CDB20) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12724
	ctx.r3.s64 = ctx.r11.s64 + -12724;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDB40;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21004, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDB58"))) PPC_WEAK_FUNC(sub_831CDB58);
PPC_FUNC_IMPL(__imp__sub_831CDB58) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12712
	ctx.r3.s64 = ctx.r11.s64 + -12712;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDB78;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDB90"))) PPC_WEAK_FUNC(sub_831CDB90);
PPC_FUNC_IMPL(__imp__sub_831CDB90) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12696
	ctx.r3.s64 = ctx.r11.s64 + -12696;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDBB0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDBC8"))) PPC_WEAK_FUNC(sub_831CDBC8);
PPC_FUNC_IMPL(__imp__sub_831CDBC8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12680
	ctx.r3.s64 = ctx.r11.s64 + -12680;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDBE8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDC00"))) PPC_WEAK_FUNC(sub_831CDC00);
PPC_FUNC_IMPL(__imp__sub_831CDC00) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12664
	ctx.r3.s64 = ctx.r11.s64 + -12664;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDC20;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDC38"))) PPC_WEAK_FUNC(sub_831CDC38);
PPC_FUNC_IMPL(__imp__sub_831CDC38) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12652
	ctx.r3.s64 = ctx.r11.s64 + -12652;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDC58;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDC70"))) PPC_WEAK_FUNC(sub_831CDC70);
PPC_FUNC_IMPL(__imp__sub_831CDC70) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12636
	ctx.r3.s64 = ctx.r11.s64 + -12636;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDC90;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDCA8"))) PPC_WEAK_FUNC(sub_831CDCA8);
PPC_FUNC_IMPL(__imp__sub_831CDCA8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12620
	ctx.r3.s64 = ctx.r11.s64 + -12620;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDCC8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDCE0"))) PPC_WEAK_FUNC(sub_831CDCE0);
PPC_FUNC_IMPL(__imp__sub_831CDCE0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12604
	ctx.r3.s64 = ctx.r11.s64 + -12604;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDD00;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDD18"))) PPC_WEAK_FUNC(sub_831CDD18);
PPC_FUNC_IMPL(__imp__sub_831CDD18) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12584
	ctx.r3.s64 = ctx.r11.s64 + -12584;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDD38;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19836(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19836, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDD50"))) PPC_WEAK_FUNC(sub_831CDD50);
PPC_FUNC_IMPL(__imp__sub_831CDD50) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12568
	ctx.r3.s64 = ctx.r11.s64 + -12568;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDD70;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDD88"))) PPC_WEAK_FUNC(sub_831CDD88);
PPC_FUNC_IMPL(__imp__sub_831CDD88) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12548
	ctx.r3.s64 = ctx.r11.s64 + -12548;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDDA8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDDC0"))) PPC_WEAK_FUNC(sub_831CDDC0);
PPC_FUNC_IMPL(__imp__sub_831CDDC0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12528
	ctx.r3.s64 = ctx.r11.s64 + -12528;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDDE0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDDF8"))) PPC_WEAK_FUNC(sub_831CDDF8);
PPC_FUNC_IMPL(__imp__sub_831CDDF8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12508
	ctx.r3.s64 = ctx.r11.s64 + -12508;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDE18;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDE30"))) PPC_WEAK_FUNC(sub_831CDE30);
PPC_FUNC_IMPL(__imp__sub_831CDE30) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12492
	ctx.r3.s64 = ctx.r11.s64 + -12492;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDE50;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19588, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDE68"))) PPC_WEAK_FUNC(sub_831CDE68);
PPC_FUNC_IMPL(__imp__sub_831CDE68) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12480
	ctx.r3.s64 = ctx.r11.s64 + -12480;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDE88;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDEA0"))) PPC_WEAK_FUNC(sub_831CDEA0);
PPC_FUNC_IMPL(__imp__sub_831CDEA0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12464
	ctx.r3.s64 = ctx.r11.s64 + -12464;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDEC0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDED8"))) PPC_WEAK_FUNC(sub_831CDED8);
PPC_FUNC_IMPL(__imp__sub_831CDED8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12448
	ctx.r3.s64 = ctx.r11.s64 + -12448;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDEF8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDF10"))) PPC_WEAK_FUNC(sub_831CDF10);
PPC_FUNC_IMPL(__imp__sub_831CDF10) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12428
	ctx.r3.s64 = ctx.r11.s64 + -12428;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDF30;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDF48"))) PPC_WEAK_FUNC(sub_831CDF48);
PPC_FUNC_IMPL(__imp__sub_831CDF48) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12408
	ctx.r3.s64 = ctx.r11.s64 + -12408;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDF68;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDF80"))) PPC_WEAK_FUNC(sub_831CDF80);
PPC_FUNC_IMPL(__imp__sub_831CDF80) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12388
	ctx.r3.s64 = ctx.r11.s64 + -12388;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDFA0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19948, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDFB8"))) PPC_WEAK_FUNC(sub_831CDFB8);
PPC_FUNC_IMPL(__imp__sub_831CDFB8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12368
	ctx.r3.s64 = ctx.r11.s64 + -12368;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CDFD8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDFF0"))) PPC_WEAK_FUNC(sub_831CDFF0);
PPC_FUNC_IMPL(__imp__sub_831CDFF0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12344
	ctx.r3.s64 = ctx.r11.s64 + -12344;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE010;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE028"))) PPC_WEAK_FUNC(sub_831CE028);
PPC_FUNC_IMPL(__imp__sub_831CE028) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12320
	ctx.r3.s64 = ctx.r11.s64 + -12320;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE048;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE060"))) PPC_WEAK_FUNC(sub_831CE060);
PPC_FUNC_IMPL(__imp__sub_831CE060) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12296
	ctx.r3.s64 = ctx.r11.s64 + -12296;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE080;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE098"))) PPC_WEAK_FUNC(sub_831CE098);
PPC_FUNC_IMPL(__imp__sub_831CE098) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12272
	ctx.r3.s64 = ctx.r11.s64 + -12272;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE0B8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE0D0"))) PPC_WEAK_FUNC(sub_831CE0D0);
PPC_FUNC_IMPL(__imp__sub_831CE0D0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12248
	ctx.r3.s64 = ctx.r11.s64 + -12248;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE0F0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE108"))) PPC_WEAK_FUNC(sub_831CE108);
PPC_FUNC_IMPL(__imp__sub_831CE108) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12224
	ctx.r3.s64 = ctx.r11.s64 + -12224;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE128;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20504, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE140"))) PPC_WEAK_FUNC(sub_831CE140);
PPC_FUNC_IMPL(__imp__sub_831CE140) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12196
	ctx.r3.s64 = ctx.r11.s64 + -12196;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE160;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE178"))) PPC_WEAK_FUNC(sub_831CE178);
PPC_FUNC_IMPL(__imp__sub_831CE178) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12180
	ctx.r3.s64 = ctx.r11.s64 + -12180;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE198;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE1B0"))) PPC_WEAK_FUNC(sub_831CE1B0);
PPC_FUNC_IMPL(__imp__sub_831CE1B0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12172
	ctx.r3.s64 = ctx.r11.s64 + -12172;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE1D0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20704, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE1E8"))) PPC_WEAK_FUNC(sub_831CE1E8);
PPC_FUNC_IMPL(__imp__sub_831CE1E8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12164
	ctx.r3.s64 = ctx.r11.s64 + -12164;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE208;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE220"))) PPC_WEAK_FUNC(sub_831CE220);
PPC_FUNC_IMPL(__imp__sub_831CE220) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12148
	ctx.r3.s64 = ctx.r11.s64 + -12148;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE240;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20824, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE258"))) PPC_WEAK_FUNC(sub_831CE258);
PPC_FUNC_IMPL(__imp__sub_831CE258) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12132
	ctx.r3.s64 = ctx.r11.s64 + -12132;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE278;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE290"))) PPC_WEAK_FUNC(sub_831CE290);
PPC_FUNC_IMPL(__imp__sub_831CE290) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12120
	ctx.r3.s64 = ctx.r11.s64 + -12120;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE2B0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE2C8"))) PPC_WEAK_FUNC(sub_831CE2C8);
PPC_FUNC_IMPL(__imp__sub_831CE2C8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12108
	ctx.r3.s64 = ctx.r11.s64 + -12108;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE2E8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE300"))) PPC_WEAK_FUNC(sub_831CE300);
PPC_FUNC_IMPL(__imp__sub_831CE300) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12088
	ctx.r3.s64 = ctx.r11.s64 + -12088;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE320;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE338"))) PPC_WEAK_FUNC(sub_831CE338);
PPC_FUNC_IMPL(__imp__sub_831CE338) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4380
	ctx.r3.s64 = ctx.r11.s64 + -4380;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE358;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE370"))) PPC_WEAK_FUNC(sub_831CE370);
PPC_FUNC_IMPL(__imp__sub_831CE370) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12076
	ctx.r3.s64 = ctx.r11.s64 + -12076;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE390;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE3A8"))) PPC_WEAK_FUNC(sub_831CE3A8);
PPC_FUNC_IMPL(__imp__sub_831CE3A8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12064
	ctx.r3.s64 = ctx.r11.s64 + -12064;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE3C8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21236, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE3E0"))) PPC_WEAK_FUNC(sub_831CE3E0);
PPC_FUNC_IMPL(__imp__sub_831CE3E0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12052
	ctx.r3.s64 = ctx.r11.s64 + -12052;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE400;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE418"))) PPC_WEAK_FUNC(sub_831CE418);
PPC_FUNC_IMPL(__imp__sub_831CE418) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12024
	ctx.r3.s64 = ctx.r11.s64 + -12024;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE438;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE450"))) PPC_WEAK_FUNC(sub_831CE450);
PPC_FUNC_IMPL(__imp__sub_831CE450) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11996
	ctx.r3.s64 = ctx.r11.s64 + -11996;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE470;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE488"))) PPC_WEAK_FUNC(sub_831CE488);
PPC_FUNC_IMPL(__imp__sub_831CE488) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11972
	ctx.r3.s64 = ctx.r11.s64 + -11972;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE4A8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE4C0"))) PPC_WEAK_FUNC(sub_831CE4C0);
PPC_FUNC_IMPL(__imp__sub_831CE4C0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11948
	ctx.r3.s64 = ctx.r11.s64 + -11948;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE4E0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE4F8"))) PPC_WEAK_FUNC(sub_831CE4F8);
PPC_FUNC_IMPL(__imp__sub_831CE4F8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11932
	ctx.r3.s64 = ctx.r11.s64 + -11932;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE518;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE530"))) PPC_WEAK_FUNC(sub_831CE530);
PPC_FUNC_IMPL(__imp__sub_831CE530) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11904
	ctx.r3.s64 = ctx.r11.s64 + -11904;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE550;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21068, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE568"))) PPC_WEAK_FUNC(sub_831CE568);
PPC_FUNC_IMPL(__imp__sub_831CE568) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11876
	ctx.r3.s64 = ctx.r11.s64 + -11876;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE588;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19816, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE5A0"))) PPC_WEAK_FUNC(sub_831CE5A0);
PPC_FUNC_IMPL(__imp__sub_831CE5A0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11848
	ctx.r3.s64 = ctx.r11.s64 + -11848;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE5C0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE5D8"))) PPC_WEAK_FUNC(sub_831CE5D8);
PPC_FUNC_IMPL(__imp__sub_831CE5D8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11820
	ctx.r3.s64 = ctx.r11.s64 + -11820;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE5F8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20116, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE610"))) PPC_WEAK_FUNC(sub_831CE610);
PPC_FUNC_IMPL(__imp__sub_831CE610) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11804
	ctx.r3.s64 = ctx.r11.s64 + -11804;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE630;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20868, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE648"))) PPC_WEAK_FUNC(sub_831CE648);
PPC_FUNC_IMPL(__imp__sub_831CE648) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11788
	ctx.r3.s64 = ctx.r11.s64 + -11788;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE668;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE680"))) PPC_WEAK_FUNC(sub_831CE680);
PPC_FUNC_IMPL(__imp__sub_831CE680) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7448
	ctx.r3.s64 = ctx.r11.s64 + -7448;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE6A0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE6B8"))) PPC_WEAK_FUNC(sub_831CE6B8);
PPC_FUNC_IMPL(__imp__sub_831CE6B8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11780
	ctx.r3.s64 = ctx.r11.s64 + -11780;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE6D8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20860(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20860, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE6F0"))) PPC_WEAK_FUNC(sub_831CE6F0);
PPC_FUNC_IMPL(__imp__sub_831CE6F0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11768
	ctx.r3.s64 = ctx.r11.s64 + -11768;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE710;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20848, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE728"))) PPC_WEAK_FUNC(sub_831CE728);
PPC_FUNC_IMPL(__imp__sub_831CE728) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11752
	ctx.r3.s64 = ctx.r11.s64 + -11752;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE748;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE760"))) PPC_WEAK_FUNC(sub_831CE760);
PPC_FUNC_IMPL(__imp__sub_831CE760) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11736
	ctx.r3.s64 = ctx.r11.s64 + -11736;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE780;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE798"))) PPC_WEAK_FUNC(sub_831CE798);
PPC_FUNC_IMPL(__imp__sub_831CE798) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11720
	ctx.r3.s64 = ctx.r11.s64 + -11720;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE7B8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE7D0"))) PPC_WEAK_FUNC(sub_831CE7D0);
PPC_FUNC_IMPL(__imp__sub_831CE7D0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11708
	ctx.r3.s64 = ctx.r11.s64 + -11708;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE7F0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20068, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE808"))) PPC_WEAK_FUNC(sub_831CE808);
PPC_FUNC_IMPL(__imp__sub_831CE808) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11688
	ctx.r3.s64 = ctx.r11.s64 + -11688;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE828;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE840"))) PPC_WEAK_FUNC(sub_831CE840);
PPC_FUNC_IMPL(__imp__sub_831CE840) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11672
	ctx.r3.s64 = ctx.r11.s64 + -11672;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE860;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE878"))) PPC_WEAK_FUNC(sub_831CE878);
PPC_FUNC_IMPL(__imp__sub_831CE878) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11656
	ctx.r3.s64 = ctx.r11.s64 + -11656;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE898;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE8B0"))) PPC_WEAK_FUNC(sub_831CE8B0);
PPC_FUNC_IMPL(__imp__sub_831CE8B0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11644
	ctx.r3.s64 = ctx.r11.s64 + -11644;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE8D0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19944, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE8E8"))) PPC_WEAK_FUNC(sub_831CE8E8);
PPC_FUNC_IMPL(__imp__sub_831CE8E8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11632
	ctx.r3.s64 = ctx.r11.s64 + -11632;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE908;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE920"))) PPC_WEAK_FUNC(sub_831CE920);
PPC_FUNC_IMPL(__imp__sub_831CE920) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11620
	ctx.r3.s64 = ctx.r11.s64 + -11620;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE940;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE958"))) PPC_WEAK_FUNC(sub_831CE958);
PPC_FUNC_IMPL(__imp__sub_831CE958) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11604
	ctx.r3.s64 = ctx.r11.s64 + -11604;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE978;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE990"))) PPC_WEAK_FUNC(sub_831CE990);
PPC_FUNC_IMPL(__imp__sub_831CE990) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11592
	ctx.r3.s64 = ctx.r11.s64 + -11592;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE9B0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE9C8"))) PPC_WEAK_FUNC(sub_831CE9C8);
PPC_FUNC_IMPL(__imp__sub_831CE9C8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11584
	ctx.r3.s64 = ctx.r11.s64 + -11584;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CE9E8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEA00"))) PPC_WEAK_FUNC(sub_831CEA00);
PPC_FUNC_IMPL(__imp__sub_831CEA00) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11576
	ctx.r3.s64 = ctx.r11.s64 + -11576;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEA20;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEA38"))) PPC_WEAK_FUNC(sub_831CEA38);
PPC_FUNC_IMPL(__imp__sub_831CEA38) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11564
	ctx.r3.s64 = ctx.r11.s64 + -11564;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEA58;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEA70"))) PPC_WEAK_FUNC(sub_831CEA70);
PPC_FUNC_IMPL(__imp__sub_831CEA70) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11544
	ctx.r3.s64 = ctx.r11.s64 + -11544;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEA90;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEAA8"))) PPC_WEAK_FUNC(sub_831CEAA8);
PPC_FUNC_IMPL(__imp__sub_831CEAA8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11524
	ctx.r3.s64 = ctx.r11.s64 + -11524;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEAC8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19804, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEAE0"))) PPC_WEAK_FUNC(sub_831CEAE0);
PPC_FUNC_IMPL(__imp__sub_831CEAE0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11508
	ctx.r3.s64 = ctx.r11.s64 + -11508;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEB00;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEB18"))) PPC_WEAK_FUNC(sub_831CEB18);
PPC_FUNC_IMPL(__imp__sub_831CEB18) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11492
	ctx.r3.s64 = ctx.r11.s64 + -11492;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEB38;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEB50"))) PPC_WEAK_FUNC(sub_831CEB50);
PPC_FUNC_IMPL(__imp__sub_831CEB50) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11468
	ctx.r3.s64 = ctx.r11.s64 + -11468;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEB70;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEB88"))) PPC_WEAK_FUNC(sub_831CEB88);
PPC_FUNC_IMPL(__imp__sub_831CEB88) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11444
	ctx.r3.s64 = ctx.r11.s64 + -11444;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEBA8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEBC0"))) PPC_WEAK_FUNC(sub_831CEBC0);
PPC_FUNC_IMPL(__imp__sub_831CEBC0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11424
	ctx.r3.s64 = ctx.r11.s64 + -11424;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEBE0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20864, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEBF8"))) PPC_WEAK_FUNC(sub_831CEBF8);
PPC_FUNC_IMPL(__imp__sub_831CEBF8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11404
	ctx.r3.s64 = ctx.r11.s64 + -11404;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEC18;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEC30"))) PPC_WEAK_FUNC(sub_831CEC30);
PPC_FUNC_IMPL(__imp__sub_831CEC30) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11388
	ctx.r3.s64 = ctx.r11.s64 + -11388;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEC50;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEC68"))) PPC_WEAK_FUNC(sub_831CEC68);
PPC_FUNC_IMPL(__imp__sub_831CEC68) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11368
	ctx.r3.s64 = ctx.r11.s64 + -11368;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEC88;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CECA0"))) PPC_WEAK_FUNC(sub_831CECA0);
PPC_FUNC_IMPL(__imp__sub_831CECA0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11348
	ctx.r3.s64 = ctx.r11.s64 + -11348;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CECC0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CECD8"))) PPC_WEAK_FUNC(sub_831CECD8);
PPC_FUNC_IMPL(__imp__sub_831CECD8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11328
	ctx.r3.s64 = ctx.r11.s64 + -11328;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CECF8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CED10"))) PPC_WEAK_FUNC(sub_831CED10);
PPC_FUNC_IMPL(__imp__sub_831CED10) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11312
	ctx.r3.s64 = ctx.r11.s64 + -11312;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CED30;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21324, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CED48"))) PPC_WEAK_FUNC(sub_831CED48);
PPC_FUNC_IMPL(__imp__sub_831CED48) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11296
	ctx.r3.s64 = ctx.r11.s64 + -11296;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CED68;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20052(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20052, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CED80"))) PPC_WEAK_FUNC(sub_831CED80);
PPC_FUNC_IMPL(__imp__sub_831CED80) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-31884
	ctx.r3.s64 = ctx.r11.s64 + -31884;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEDA0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20328, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEDB8"))) PPC_WEAK_FUNC(sub_831CEDB8);
PPC_FUNC_IMPL(__imp__sub_831CEDB8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11284
	ctx.r3.s64 = ctx.r11.s64 + -11284;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEDD8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21040(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21040, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEDF0"))) PPC_WEAK_FUNC(sub_831CEDF0);
PPC_FUNC_IMPL(__imp__sub_831CEDF0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11272
	ctx.r3.s64 = ctx.r11.s64 + -11272;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEE10;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEE28"))) PPC_WEAK_FUNC(sub_831CEE28);
PPC_FUNC_IMPL(__imp__sub_831CEE28) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11256
	ctx.r3.s64 = ctx.r11.s64 + -11256;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEE48;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEE60"))) PPC_WEAK_FUNC(sub_831CEE60);
PPC_FUNC_IMPL(__imp__sub_831CEE60) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11244
	ctx.r3.s64 = ctx.r11.s64 + -11244;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEE80;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19580, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEE98"))) PPC_WEAK_FUNC(sub_831CEE98);
PPC_FUNC_IMPL(__imp__sub_831CEE98) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11228
	ctx.r3.s64 = ctx.r11.s64 + -11228;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEEB8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEED0"))) PPC_WEAK_FUNC(sub_831CEED0);
PPC_FUNC_IMPL(__imp__sub_831CEED0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11212
	ctx.r3.s64 = ctx.r11.s64 + -11212;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEEF0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEF08"))) PPC_WEAK_FUNC(sub_831CEF08);
PPC_FUNC_IMPL(__imp__sub_831CEF08) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11192
	ctx.r3.s64 = ctx.r11.s64 + -11192;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEF28;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20084, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEF40"))) PPC_WEAK_FUNC(sub_831CEF40);
PPC_FUNC_IMPL(__imp__sub_831CEF40) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11180
	ctx.r3.s64 = ctx.r11.s64 + -11180;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEF60;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEF78"))) PPC_WEAK_FUNC(sub_831CEF78);
PPC_FUNC_IMPL(__imp__sub_831CEF78) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11160
	ctx.r3.s64 = ctx.r11.s64 + -11160;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEF98;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21072, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEFB0"))) PPC_WEAK_FUNC(sub_831CEFB0);
PPC_FUNC_IMPL(__imp__sub_831CEFB0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11148
	ctx.r3.s64 = ctx.r11.s64 + -11148;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CEFD0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CEFE8"))) PPC_WEAK_FUNC(sub_831CEFE8);
PPC_FUNC_IMPL(__imp__sub_831CEFE8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11128
	ctx.r3.s64 = ctx.r11.s64 + -11128;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF008;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF020"))) PPC_WEAK_FUNC(sub_831CF020);
PPC_FUNC_IMPL(__imp__sub_831CF020) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11112
	ctx.r3.s64 = ctx.r11.s64 + -11112;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF040;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF058"))) PPC_WEAK_FUNC(sub_831CF058);
PPC_FUNC_IMPL(__imp__sub_831CF058) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11100
	ctx.r3.s64 = ctx.r11.s64 + -11100;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF078;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF090"))) PPC_WEAK_FUNC(sub_831CF090);
PPC_FUNC_IMPL(__imp__sub_831CF090) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11088
	ctx.r3.s64 = ctx.r11.s64 + -11088;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF0B0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF0C8"))) PPC_WEAK_FUNC(sub_831CF0C8);
PPC_FUNC_IMPL(__imp__sub_831CF0C8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11076
	ctx.r3.s64 = ctx.r11.s64 + -11076;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF0E8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19952, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF100"))) PPC_WEAK_FUNC(sub_831CF100);
PPC_FUNC_IMPL(__imp__sub_831CF100) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11064
	ctx.r3.s64 = ctx.r11.s64 + -11064;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF120;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF138"))) PPC_WEAK_FUNC(sub_831CF138);
PPC_FUNC_IMPL(__imp__sub_831CF138) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11052
	ctx.r3.s64 = ctx.r11.s64 + -11052;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF158;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19888(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19888, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF170"))) PPC_WEAK_FUNC(sub_831CF170);
PPC_FUNC_IMPL(__imp__sub_831CF170) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11036
	ctx.r3.s64 = ctx.r11.s64 + -11036;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF190;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF1A8"))) PPC_WEAK_FUNC(sub_831CF1A8);
PPC_FUNC_IMPL(__imp__sub_831CF1A8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11032
	ctx.r3.s64 = ctx.r11.s64 + -11032;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF1C8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19796, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF1E0"))) PPC_WEAK_FUNC(sub_831CF1E0);
PPC_FUNC_IMPL(__imp__sub_831CF1E0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11024
	ctx.r3.s64 = ctx.r11.s64 + -11024;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF200;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF218"))) PPC_WEAK_FUNC(sub_831CF218);
PPC_FUNC_IMPL(__imp__sub_831CF218) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11016
	ctx.r3.s64 = ctx.r11.s64 + -11016;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF238;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF250"))) PPC_WEAK_FUNC(sub_831CF250);
PPC_FUNC_IMPL(__imp__sub_831CF250) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11004
	ctx.r3.s64 = ctx.r11.s64 + -11004;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF270;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF288"))) PPC_WEAK_FUNC(sub_831CF288);
PPC_FUNC_IMPL(__imp__sub_831CF288) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10992
	ctx.r3.s64 = ctx.r11.s64 + -10992;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF2A8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF2C0"))) PPC_WEAK_FUNC(sub_831CF2C0);
PPC_FUNC_IMPL(__imp__sub_831CF2C0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10984
	ctx.r3.s64 = ctx.r11.s64 + -10984;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF2E0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF2F8"))) PPC_WEAK_FUNC(sub_831CF2F8);
PPC_FUNC_IMPL(__imp__sub_831CF2F8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-19852
	ctx.r3.s64 = ctx.r11.s64 + -19852;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF318;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF330"))) PPC_WEAK_FUNC(sub_831CF330);
PPC_FUNC_IMPL(__imp__sub_831CF330) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10976
	ctx.r3.s64 = ctx.r11.s64 + -10976;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF350;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19324, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF368"))) PPC_WEAK_FUNC(sub_831CF368);
PPC_FUNC_IMPL(__imp__sub_831CF368) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10968
	ctx.r3.s64 = ctx.r11.s64 + -10968;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF388;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20836(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20836, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF3A0"))) PPC_WEAK_FUNC(sub_831CF3A0);
PPC_FUNC_IMPL(__imp__sub_831CF3A0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10956
	ctx.r3.s64 = ctx.r11.s64 + -10956;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF3C0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF3D8"))) PPC_WEAK_FUNC(sub_831CF3D8);
PPC_FUNC_IMPL(__imp__sub_831CF3D8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-25908
	ctx.r3.s64 = ctx.r11.s64 + -25908;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF3F8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20596, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF410"))) PPC_WEAK_FUNC(sub_831CF410);
PPC_FUNC_IMPL(__imp__sub_831CF410) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10944
	ctx.r3.s64 = ctx.r11.s64 + -10944;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF430;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF448"))) PPC_WEAK_FUNC(sub_831CF448);
PPC_FUNC_IMPL(__imp__sub_831CF448) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10928
	ctx.r3.s64 = ctx.r11.s64 + -10928;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF468;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF480"))) PPC_WEAK_FUNC(sub_831CF480);
PPC_FUNC_IMPL(__imp__sub_831CF480) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10904
	ctx.r3.s64 = ctx.r11.s64 + -10904;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF4A0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF4B8"))) PPC_WEAK_FUNC(sub_831CF4B8);
PPC_FUNC_IMPL(__imp__sub_831CF4B8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10880
	ctx.r3.s64 = ctx.r11.s64 + -10880;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF4D8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF4F0"))) PPC_WEAK_FUNC(sub_831CF4F0);
PPC_FUNC_IMPL(__imp__sub_831CF4F0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10856
	ctx.r3.s64 = ctx.r11.s64 + -10856;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF510;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20080, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF528"))) PPC_WEAK_FUNC(sub_831CF528);
PPC_FUNC_IMPL(__imp__sub_831CF528) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10832
	ctx.r3.s64 = ctx.r11.s64 + -10832;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF548;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF560"))) PPC_WEAK_FUNC(sub_831CF560);
PPC_FUNC_IMPL(__imp__sub_831CF560) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10808
	ctx.r3.s64 = ctx.r11.s64 + -10808;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF580;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19504, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF598"))) PPC_WEAK_FUNC(sub_831CF598);
PPC_FUNC_IMPL(__imp__sub_831CF598) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10784
	ctx.r3.s64 = ctx.r11.s64 + -10784;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF5B8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF5D0"))) PPC_WEAK_FUNC(sub_831CF5D0);
PPC_FUNC_IMPL(__imp__sub_831CF5D0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10760
	ctx.r3.s64 = ctx.r11.s64 + -10760;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF5F0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF608"))) PPC_WEAK_FUNC(sub_831CF608);
PPC_FUNC_IMPL(__imp__sub_831CF608) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10736
	ctx.r3.s64 = ctx.r11.s64 + -10736;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF628;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF640"))) PPC_WEAK_FUNC(sub_831CF640);
PPC_FUNC_IMPL(__imp__sub_831CF640) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10712
	ctx.r3.s64 = ctx.r11.s64 + -10712;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF660;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF678"))) PPC_WEAK_FUNC(sub_831CF678);
PPC_FUNC_IMPL(__imp__sub_831CF678) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10688
	ctx.r3.s64 = ctx.r11.s64 + -10688;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF698;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF6B0"))) PPC_WEAK_FUNC(sub_831CF6B0);
PPC_FUNC_IMPL(__imp__sub_831CF6B0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF6D0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF6E8"))) PPC_WEAK_FUNC(sub_831CF6E8);
PPC_FUNC_IMPL(__imp__sub_831CF6E8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10640
	ctx.r3.s64 = ctx.r11.s64 + -10640;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF708;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF720"))) PPC_WEAK_FUNC(sub_831CF720);
PPC_FUNC_IMPL(__imp__sub_831CF720) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10616
	ctx.r3.s64 = ctx.r11.s64 + -10616;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF740;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19920, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF758"))) PPC_WEAK_FUNC(sub_831CF758);
PPC_FUNC_IMPL(__imp__sub_831CF758) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10592
	ctx.r3.s64 = ctx.r11.s64 + -10592;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF778;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19704, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF790"))) PPC_WEAK_FUNC(sub_831CF790);
PPC_FUNC_IMPL(__imp__sub_831CF790) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10568
	ctx.r3.s64 = ctx.r11.s64 + -10568;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF7B0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF7C8"))) PPC_WEAK_FUNC(sub_831CF7C8);
PPC_FUNC_IMPL(__imp__sub_831CF7C8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10544
	ctx.r3.s64 = ctx.r11.s64 + -10544;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF7E8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21084, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF800"))) PPC_WEAK_FUNC(sub_831CF800);
PPC_FUNC_IMPL(__imp__sub_831CF800) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10520
	ctx.r3.s64 = ctx.r11.s64 + -10520;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF820;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF838"))) PPC_WEAK_FUNC(sub_831CF838);
PPC_FUNC_IMPL(__imp__sub_831CF838) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10496
	ctx.r3.s64 = ctx.r11.s64 + -10496;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF858;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF870"))) PPC_WEAK_FUNC(sub_831CF870);
PPC_FUNC_IMPL(__imp__sub_831CF870) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10472
	ctx.r3.s64 = ctx.r11.s64 + -10472;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF890;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF8A8"))) PPC_WEAK_FUNC(sub_831CF8A8);
PPC_FUNC_IMPL(__imp__sub_831CF8A8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7572
	ctx.r3.s64 = ctx.r11.s64 + -7572;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF8C8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF8E0"))) PPC_WEAK_FUNC(sub_831CF8E0);
PPC_FUNC_IMPL(__imp__sub_831CF8E0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10448
	ctx.r3.s64 = ctx.r11.s64 + -10448;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF900;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF918"))) PPC_WEAK_FUNC(sub_831CF918);
PPC_FUNC_IMPL(__imp__sub_831CF918) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10436
	ctx.r3.s64 = ctx.r11.s64 + -10436;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF938;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20000, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF950"))) PPC_WEAK_FUNC(sub_831CF950);
PPC_FUNC_IMPL(__imp__sub_831CF950) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10424
	ctx.r3.s64 = ctx.r11.s64 + -10424;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF970;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF988"))) PPC_WEAK_FUNC(sub_831CF988);
PPC_FUNC_IMPL(__imp__sub_831CF988) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10416
	ctx.r3.s64 = ctx.r11.s64 + -10416;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF9A8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF9C0"))) PPC_WEAK_FUNC(sub_831CF9C0);
PPC_FUNC_IMPL(__imp__sub_831CF9C0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10408
	ctx.r3.s64 = ctx.r11.s64 + -10408;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CF9E0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CF9F8"))) PPC_WEAK_FUNC(sub_831CF9F8);
PPC_FUNC_IMPL(__imp__sub_831CF9F8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10396
	ctx.r3.s64 = ctx.r11.s64 + -10396;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFA18;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFA30"))) PPC_WEAK_FUNC(sub_831CFA30);
PPC_FUNC_IMPL(__imp__sub_831CFA30) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10388
	ctx.r3.s64 = ctx.r11.s64 + -10388;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFA50;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21080, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFA68"))) PPC_WEAK_FUNC(sub_831CFA68);
PPC_FUNC_IMPL(__imp__sub_831CFA68) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10360
	ctx.r3.s64 = ctx.r11.s64 + -10360;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFA88;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFAA0"))) PPC_WEAK_FUNC(sub_831CFAA0);
PPC_FUNC_IMPL(__imp__sub_831CFAA0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10332
	ctx.r3.s64 = ctx.r11.s64 + -10332;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFAC0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFAD8"))) PPC_WEAK_FUNC(sub_831CFAD8);
PPC_FUNC_IMPL(__imp__sub_831CFAD8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10320
	ctx.r3.s64 = ctx.r11.s64 + -10320;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFAF8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFB10"))) PPC_WEAK_FUNC(sub_831CFB10);
PPC_FUNC_IMPL(__imp__sub_831CFB10) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10296
	ctx.r3.s64 = ctx.r11.s64 + -10296;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFB30;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFB48"))) PPC_WEAK_FUNC(sub_831CFB48);
PPC_FUNC_IMPL(__imp__sub_831CFB48) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10272
	ctx.r3.s64 = ctx.r11.s64 + -10272;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFB68;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFB80"))) PPC_WEAK_FUNC(sub_831CFB80);
PPC_FUNC_IMPL(__imp__sub_831CFB80) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10264
	ctx.r3.s64 = ctx.r11.s64 + -10264;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFBA0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFBB8"))) PPC_WEAK_FUNC(sub_831CFBB8);
PPC_FUNC_IMPL(__imp__sub_831CFBB8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10256
	ctx.r3.s64 = ctx.r11.s64 + -10256;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFBD8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20828(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20828, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFBF0"))) PPC_WEAK_FUNC(sub_831CFBF0);
PPC_FUNC_IMPL(__imp__sub_831CFBF0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10244
	ctx.r3.s64 = ctx.r11.s64 + -10244;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFC10;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20500, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFC28"))) PPC_WEAK_FUNC(sub_831CFC28);
PPC_FUNC_IMPL(__imp__sub_831CFC28) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10240
	ctx.r3.s64 = ctx.r11.s64 + -10240;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFC48;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFC60"))) PPC_WEAK_FUNC(sub_831CFC60);
PPC_FUNC_IMPL(__imp__sub_831CFC60) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10232
	ctx.r3.s64 = ctx.r11.s64 + -10232;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFC80;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFC98"))) PPC_WEAK_FUNC(sub_831CFC98);
PPC_FUNC_IMPL(__imp__sub_831CFC98) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10224
	ctx.r3.s64 = ctx.r11.s64 + -10224;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFCB8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20324, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFCD0"))) PPC_WEAK_FUNC(sub_831CFCD0);
PPC_FUNC_IMPL(__imp__sub_831CFCD0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10212
	ctx.r3.s64 = ctx.r11.s64 + -10212;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFCF0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20916, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFD08"))) PPC_WEAK_FUNC(sub_831CFD08);
PPC_FUNC_IMPL(__imp__sub_831CFD08) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10196
	ctx.r3.s64 = ctx.r11.s64 + -10196;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFD28;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFD40"))) PPC_WEAK_FUNC(sub_831CFD40);
PPC_FUNC_IMPL(__imp__sub_831CFD40) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10180
	ctx.r3.s64 = ctx.r11.s64 + -10180;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFD60;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20948, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFD78"))) PPC_WEAK_FUNC(sub_831CFD78);
PPC_FUNC_IMPL(__imp__sub_831CFD78) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10156
	ctx.r3.s64 = ctx.r11.s64 + -10156;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFD98;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFDB0"))) PPC_WEAK_FUNC(sub_831CFDB0);
PPC_FUNC_IMPL(__imp__sub_831CFDB0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10132
	ctx.r3.s64 = ctx.r11.s64 + -10132;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFDD0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFDE8"))) PPC_WEAK_FUNC(sub_831CFDE8);
PPC_FUNC_IMPL(__imp__sub_831CFDE8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-22152
	ctx.r3.s64 = ctx.r11.s64 + -22152;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFE08;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFE20"))) PPC_WEAK_FUNC(sub_831CFE20);
PPC_FUNC_IMPL(__imp__sub_831CFE20) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10120
	ctx.r3.s64 = ctx.r11.s64 + -10120;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFE40;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFE58"))) PPC_WEAK_FUNC(sub_831CFE58);
PPC_FUNC_IMPL(__imp__sub_831CFE58) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10108
	ctx.r3.s64 = ctx.r11.s64 + -10108;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFE78;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21024, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFE90"))) PPC_WEAK_FUNC(sub_831CFE90);
PPC_FUNC_IMPL(__imp__sub_831CFE90) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10092
	ctx.r3.s64 = ctx.r11.s64 + -10092;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFEB0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFEC8"))) PPC_WEAK_FUNC(sub_831CFEC8);
PPC_FUNC_IMPL(__imp__sub_831CFEC8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10076
	ctx.r3.s64 = ctx.r11.s64 + -10076;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFEE8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21328, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFF00"))) PPC_WEAK_FUNC(sub_831CFF00);
PPC_FUNC_IMPL(__imp__sub_831CFF00) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10060
	ctx.r3.s64 = ctx.r11.s64 + -10060;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFF20;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFF38"))) PPC_WEAK_FUNC(sub_831CFF38);
PPC_FUNC_IMPL(__imp__sub_831CFF38) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10044
	ctx.r3.s64 = ctx.r11.s64 + -10044;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFF58;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFF70"))) PPC_WEAK_FUNC(sub_831CFF70);
PPC_FUNC_IMPL(__imp__sub_831CFF70) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10028
	ctx.r3.s64 = ctx.r11.s64 + -10028;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFF90;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFFA8"))) PPC_WEAK_FUNC(sub_831CFFA8);
PPC_FUNC_IMPL(__imp__sub_831CFFA8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10020
	ctx.r3.s64 = ctx.r11.s64 + -10020;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831CFFC8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CFFE0"))) PPC_WEAK_FUNC(sub_831CFFE0);
PPC_FUNC_IMPL(__imp__sub_831CFFE0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10012
	ctx.r3.s64 = ctx.r11.s64 + -10012;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0000;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21400, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0018"))) PPC_WEAK_FUNC(sub_831D0018);
PPC_FUNC_IMPL(__imp__sub_831D0018) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9996
	ctx.r3.s64 = ctx.r11.s64 + -9996;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0038;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19600, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0050"))) PPC_WEAK_FUNC(sub_831D0050);
PPC_FUNC_IMPL(__imp__sub_831D0050) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9984
	ctx.r3.s64 = ctx.r11.s64 + -9984;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0070;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0088"))) PPC_WEAK_FUNC(sub_831D0088);
PPC_FUNC_IMPL(__imp__sub_831D0088) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9976
	ctx.r3.s64 = ctx.r11.s64 + -9976;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D00A8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19824, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D00C0"))) PPC_WEAK_FUNC(sub_831D00C0);
PPC_FUNC_IMPL(__imp__sub_831D00C0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9952
	ctx.r3.s64 = ctx.r11.s64 + -9952;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D00E0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D00F8"))) PPC_WEAK_FUNC(sub_831D00F8);
PPC_FUNC_IMPL(__imp__sub_831D00F8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9932
	ctx.r3.s64 = ctx.r11.s64 + -9932;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0118;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0130"))) PPC_WEAK_FUNC(sub_831D0130);
PPC_FUNC_IMPL(__imp__sub_831D0130) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9916
	ctx.r3.s64 = ctx.r11.s64 + -9916;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0150;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0168"))) PPC_WEAK_FUNC(sub_831D0168);
PPC_FUNC_IMPL(__imp__sub_831D0168) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9892
	ctx.r3.s64 = ctx.r11.s64 + -9892;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0188;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20896, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D01A0"))) PPC_WEAK_FUNC(sub_831D01A0);
PPC_FUNC_IMPL(__imp__sub_831D01A0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9872
	ctx.r3.s64 = ctx.r11.s64 + -9872;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D01C0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D01D8"))) PPC_WEAK_FUNC(sub_831D01D8);
PPC_FUNC_IMPL(__imp__sub_831D01D8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9856
	ctx.r3.s64 = ctx.r11.s64 + -9856;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D01F8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20888(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20888, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0210"))) PPC_WEAK_FUNC(sub_831D0210);
PPC_FUNC_IMPL(__imp__sub_831D0210) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9832
	ctx.r3.s64 = ctx.r11.s64 + -9832;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0230;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0248"))) PPC_WEAK_FUNC(sub_831D0248);
PPC_FUNC_IMPL(__imp__sub_831D0248) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9816
	ctx.r3.s64 = ctx.r11.s64 + -9816;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0268;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0280"))) PPC_WEAK_FUNC(sub_831D0280);
PPC_FUNC_IMPL(__imp__sub_831D0280) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9804
	ctx.r3.s64 = ctx.r11.s64 + -9804;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D02A0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20044(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20044, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D02B8"))) PPC_WEAK_FUNC(sub_831D02B8);
PPC_FUNC_IMPL(__imp__sub_831D02B8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9792
	ctx.r3.s64 = ctx.r11.s64 + -9792;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D02D8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D02F0"))) PPC_WEAK_FUNC(sub_831D02F0);
PPC_FUNC_IMPL(__imp__sub_831D02F0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9780
	ctx.r3.s64 = ctx.r11.s64 + -9780;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0310;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21124, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0328"))) PPC_WEAK_FUNC(sub_831D0328);
PPC_FUNC_IMPL(__imp__sub_831D0328) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9756
	ctx.r3.s64 = ctx.r11.s64 + -9756;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0348;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19832(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0360"))) PPC_WEAK_FUNC(sub_831D0360);
PPC_FUNC_IMPL(__imp__sub_831D0360) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9736
	ctx.r3.s64 = ctx.r11.s64 + -9736;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0380;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0398"))) PPC_WEAK_FUNC(sub_831D0398);
PPC_FUNC_IMPL(__imp__sub_831D0398) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9720
	ctx.r3.s64 = ctx.r11.s64 + -9720;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D03B8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D03D0"))) PPC_WEAK_FUNC(sub_831D03D0);
PPC_FUNC_IMPL(__imp__sub_831D03D0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9704
	ctx.r3.s64 = ctx.r11.s64 + -9704;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D03F0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0408"))) PPC_WEAK_FUNC(sub_831D0408);
PPC_FUNC_IMPL(__imp__sub_831D0408) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9684
	ctx.r3.s64 = ctx.r11.s64 + -9684;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0428;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0440"))) PPC_WEAK_FUNC(sub_831D0440);
PPC_FUNC_IMPL(__imp__sub_831D0440) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9664
	ctx.r3.s64 = ctx.r11.s64 + -9664;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0460;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19808, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0478"))) PPC_WEAK_FUNC(sub_831D0478);
PPC_FUNC_IMPL(__imp__sub_831D0478) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9644
	ctx.r3.s64 = ctx.r11.s64 + -9644;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0498;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D04B0"))) PPC_WEAK_FUNC(sub_831D04B0);
PPC_FUNC_IMPL(__imp__sub_831D04B0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9624
	ctx.r3.s64 = ctx.r11.s64 + -9624;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D04D0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D04E8"))) PPC_WEAK_FUNC(sub_831D04E8);
PPC_FUNC_IMPL(__imp__sub_831D04E8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9604
	ctx.r3.s64 = ctx.r11.s64 + -9604;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0508;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0520"))) PPC_WEAK_FUNC(sub_831D0520);
PPC_FUNC_IMPL(__imp__sub_831D0520) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-1712
	ctx.r3.s64 = ctx.r11.s64 + -1712;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0540;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0558"))) PPC_WEAK_FUNC(sub_831D0558);
PPC_FUNC_IMPL(__imp__sub_831D0558) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9592
	ctx.r3.s64 = ctx.r11.s64 + -9592;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0578;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0590"))) PPC_WEAK_FUNC(sub_831D0590);
PPC_FUNC_IMPL(__imp__sub_831D0590) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9584
	ctx.r3.s64 = ctx.r11.s64 + -9584;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D05B0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D05C8"))) PPC_WEAK_FUNC(sub_831D05C8);
PPC_FUNC_IMPL(__imp__sub_831D05C8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9568
	ctx.r3.s64 = ctx.r11.s64 + -9568;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D05E8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19924(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19924, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0600"))) PPC_WEAK_FUNC(sub_831D0600);
PPC_FUNC_IMPL(__imp__sub_831D0600) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9552
	ctx.r3.s64 = ctx.r11.s64 + -9552;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0620;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0638"))) PPC_WEAK_FUNC(sub_831D0638);
PPC_FUNC_IMPL(__imp__sub_831D0638) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9536
	ctx.r3.s64 = ctx.r11.s64 + -9536;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0658;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0670"))) PPC_WEAK_FUNC(sub_831D0670);
PPC_FUNC_IMPL(__imp__sub_831D0670) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9520
	ctx.r3.s64 = ctx.r11.s64 + -9520;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0690;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D06A8"))) PPC_WEAK_FUNC(sub_831D06A8);
PPC_FUNC_IMPL(__imp__sub_831D06A8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9504
	ctx.r3.s64 = ctx.r11.s64 + -9504;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D06C8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19336, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D06E0"))) PPC_WEAK_FUNC(sub_831D06E0);
PPC_FUNC_IMPL(__imp__sub_831D06E0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9492
	ctx.r3.s64 = ctx.r11.s64 + -9492;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0700;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0718"))) PPC_WEAK_FUNC(sub_831D0718);
PPC_FUNC_IMPL(__imp__sub_831D0718) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9480
	ctx.r3.s64 = ctx.r11.s64 + -9480;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0738;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0750"))) PPC_WEAK_FUNC(sub_831D0750);
PPC_FUNC_IMPL(__imp__sub_831D0750) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9464
	ctx.r3.s64 = ctx.r11.s64 + -9464;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0770;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0788"))) PPC_WEAK_FUNC(sub_831D0788);
PPC_FUNC_IMPL(__imp__sub_831D0788) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9448
	ctx.r3.s64 = ctx.r11.s64 + -9448;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D07A8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20624, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D07C0"))) PPC_WEAK_FUNC(sub_831D07C0);
PPC_FUNC_IMPL(__imp__sub_831D07C0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9428
	ctx.r3.s64 = ctx.r11.s64 + -9428;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D07E0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D07F8"))) PPC_WEAK_FUNC(sub_831D07F8);
PPC_FUNC_IMPL(__imp__sub_831D07F8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9404
	ctx.r3.s64 = ctx.r11.s64 + -9404;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0818;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0830"))) PPC_WEAK_FUNC(sub_831D0830);
PPC_FUNC_IMPL(__imp__sub_831D0830) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9388
	ctx.r3.s64 = ctx.r11.s64 + -9388;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0850;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0868"))) PPC_WEAK_FUNC(sub_831D0868);
PPC_FUNC_IMPL(__imp__sub_831D0868) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9368
	ctx.r3.s64 = ctx.r11.s64 + -9368;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0888;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D08A0"))) PPC_WEAK_FUNC(sub_831D08A0);
PPC_FUNC_IMPL(__imp__sub_831D08A0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9348
	ctx.r3.s64 = ctx.r11.s64 + -9348;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D08C0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19896, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D08D8"))) PPC_WEAK_FUNC(sub_831D08D8);
PPC_FUNC_IMPL(__imp__sub_831D08D8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9328
	ctx.r3.s64 = ctx.r11.s64 + -9328;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D08F8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0910"))) PPC_WEAK_FUNC(sub_831D0910);
PPC_FUNC_IMPL(__imp__sub_831D0910) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9308
	ctx.r3.s64 = ctx.r11.s64 + -9308;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0930;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20880(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0948"))) PPC_WEAK_FUNC(sub_831D0948);
PPC_FUNC_IMPL(__imp__sub_831D0948) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9288
	ctx.r3.s64 = ctx.r11.s64 + -9288;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0968;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0980"))) PPC_WEAK_FUNC(sub_831D0980);
PPC_FUNC_IMPL(__imp__sub_831D0980) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9268
	ctx.r3.s64 = ctx.r11.s64 + -9268;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D09A0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D09B8"))) PPC_WEAK_FUNC(sub_831D09B8);
PPC_FUNC_IMPL(__imp__sub_831D09B8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9248
	ctx.r3.s64 = ctx.r11.s64 + -9248;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D09D8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D09F0"))) PPC_WEAK_FUNC(sub_831D09F0);
PPC_FUNC_IMPL(__imp__sub_831D09F0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9228
	ctx.r3.s64 = ctx.r11.s64 + -9228;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0A10;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0A28"))) PPC_WEAK_FUNC(sub_831D0A28);
PPC_FUNC_IMPL(__imp__sub_831D0A28) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9216
	ctx.r3.s64 = ctx.r11.s64 + -9216;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0A48;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0A60"))) PPC_WEAK_FUNC(sub_831D0A60);
PPC_FUNC_IMPL(__imp__sub_831D0A60) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9200
	ctx.r3.s64 = ctx.r11.s64 + -9200;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0A80;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0A98"))) PPC_WEAK_FUNC(sub_831D0A98);
PPC_FUNC_IMPL(__imp__sub_831D0A98) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9188
	ctx.r3.s64 = ctx.r11.s64 + -9188;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0AB8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19996, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0AD0"))) PPC_WEAK_FUNC(sub_831D0AD0);
PPC_FUNC_IMPL(__imp__sub_831D0AD0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9172
	ctx.r3.s64 = ctx.r11.s64 + -9172;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0AF0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0B08"))) PPC_WEAK_FUNC(sub_831D0B08);
PPC_FUNC_IMPL(__imp__sub_831D0B08) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9156
	ctx.r3.s64 = ctx.r11.s64 + -9156;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0B28;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0B40"))) PPC_WEAK_FUNC(sub_831D0B40);
PPC_FUNC_IMPL(__imp__sub_831D0B40) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9144
	ctx.r3.s64 = ctx.r11.s64 + -9144;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0B60;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19596, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0B78"))) PPC_WEAK_FUNC(sub_831D0B78);
PPC_FUNC_IMPL(__imp__sub_831D0B78) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9128
	ctx.r3.s64 = ctx.r11.s64 + -9128;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0B98;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0BB0"))) PPC_WEAK_FUNC(sub_831D0BB0);
PPC_FUNC_IMPL(__imp__sub_831D0BB0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9108
	ctx.r3.s64 = ctx.r11.s64 + -9108;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0BD0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20580, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0BE8"))) PPC_WEAK_FUNC(sub_831D0BE8);
PPC_FUNC_IMPL(__imp__sub_831D0BE8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9088
	ctx.r3.s64 = ctx.r11.s64 + -9088;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0C08;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0C20"))) PPC_WEAK_FUNC(sub_831D0C20);
PPC_FUNC_IMPL(__imp__sub_831D0C20) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9072
	ctx.r3.s64 = ctx.r11.s64 + -9072;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0C40;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0C58"))) PPC_WEAK_FUNC(sub_831D0C58);
PPC_FUNC_IMPL(__imp__sub_831D0C58) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9056
	ctx.r3.s64 = ctx.r11.s64 + -9056;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0C78;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0C90"))) PPC_WEAK_FUNC(sub_831D0C90);
PPC_FUNC_IMPL(__imp__sub_831D0C90) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9036
	ctx.r3.s64 = ctx.r11.s64 + -9036;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0CB0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0CC8"))) PPC_WEAK_FUNC(sub_831D0CC8);
PPC_FUNC_IMPL(__imp__sub_831D0CC8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-9012
	ctx.r3.s64 = ctx.r11.s64 + -9012;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0CE8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0D00"))) PPC_WEAK_FUNC(sub_831D0D00);
PPC_FUNC_IMPL(__imp__sub_831D0D00) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8988
	ctx.r3.s64 = ctx.r11.s64 + -8988;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0D20;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0D38"))) PPC_WEAK_FUNC(sub_831D0D38);
PPC_FUNC_IMPL(__imp__sub_831D0D38) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8968
	ctx.r3.s64 = ctx.r11.s64 + -8968;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0D58;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0D70"))) PPC_WEAK_FUNC(sub_831D0D70);
PPC_FUNC_IMPL(__imp__sub_831D0D70) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8948
	ctx.r3.s64 = ctx.r11.s64 + -8948;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0D90;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21116, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0DA8"))) PPC_WEAK_FUNC(sub_831D0DA8);
PPC_FUNC_IMPL(__imp__sub_831D0DA8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8924
	ctx.r3.s64 = ctx.r11.s64 + -8924;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0DC8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0DE0"))) PPC_WEAK_FUNC(sub_831D0DE0);
PPC_FUNC_IMPL(__imp__sub_831D0DE0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8904
	ctx.r3.s64 = ctx.r11.s64 + -8904;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0E00;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19856, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0E18"))) PPC_WEAK_FUNC(sub_831D0E18);
PPC_FUNC_IMPL(__imp__sub_831D0E18) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8884
	ctx.r3.s64 = ctx.r11.s64 + -8884;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0E38;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0E50"))) PPC_WEAK_FUNC(sub_831D0E50);
PPC_FUNC_IMPL(__imp__sub_831D0E50) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8864
	ctx.r3.s64 = ctx.r11.s64 + -8864;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0E70;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20600, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0E88"))) PPC_WEAK_FUNC(sub_831D0E88);
PPC_FUNC_IMPL(__imp__sub_831D0E88) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8844
	ctx.r3.s64 = ctx.r11.s64 + -8844;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0EA8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20396, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0EC0"))) PPC_WEAK_FUNC(sub_831D0EC0);
PPC_FUNC_IMPL(__imp__sub_831D0EC0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8824
	ctx.r3.s64 = ctx.r11.s64 + -8824;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0EE0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0EF8"))) PPC_WEAK_FUNC(sub_831D0EF8);
PPC_FUNC_IMPL(__imp__sub_831D0EF8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8804
	ctx.r3.s64 = ctx.r11.s64 + -8804;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0F18;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0F30"))) PPC_WEAK_FUNC(sub_831D0F30);
PPC_FUNC_IMPL(__imp__sub_831D0F30) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8784
	ctx.r3.s64 = ctx.r11.s64 + -8784;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0F50;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0F68"))) PPC_WEAK_FUNC(sub_831D0F68);
PPC_FUNC_IMPL(__imp__sub_831D0F68) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8764
	ctx.r3.s64 = ctx.r11.s64 + -8764;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0F88;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0FA0"))) PPC_WEAK_FUNC(sub_831D0FA0);
PPC_FUNC_IMPL(__imp__sub_831D0FA0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8744
	ctx.r3.s64 = ctx.r11.s64 + -8744;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0FC0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20816, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D0FD8"))) PPC_WEAK_FUNC(sub_831D0FD8);
PPC_FUNC_IMPL(__imp__sub_831D0FD8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8728
	ctx.r3.s64 = ctx.r11.s64 + -8728;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D0FF8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21036, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1010"))) PPC_WEAK_FUNC(sub_831D1010);
PPC_FUNC_IMPL(__imp__sub_831D1010) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8708
	ctx.r3.s64 = ctx.r11.s64 + -8708;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1030;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1048"))) PPC_WEAK_FUNC(sub_831D1048);
PPC_FUNC_IMPL(__imp__sub_831D1048) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8684
	ctx.r3.s64 = ctx.r11.s64 + -8684;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1068;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1080"))) PPC_WEAK_FUNC(sub_831D1080);
PPC_FUNC_IMPL(__imp__sub_831D1080) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8664
	ctx.r3.s64 = ctx.r11.s64 + -8664;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D10A0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D10B8"))) PPC_WEAK_FUNC(sub_831D10B8);
PPC_FUNC_IMPL(__imp__sub_831D10B8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8644
	ctx.r3.s64 = ctx.r11.s64 + -8644;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D10D8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20796, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D10F0"))) PPC_WEAK_FUNC(sub_831D10F0);
PPC_FUNC_IMPL(__imp__sub_831D10F0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8624
	ctx.r3.s64 = ctx.r11.s64 + -8624;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1110;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1128"))) PPC_WEAK_FUNC(sub_831D1128);
PPC_FUNC_IMPL(__imp__sub_831D1128) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8604
	ctx.r3.s64 = ctx.r11.s64 + -8604;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1148;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1160"))) PPC_WEAK_FUNC(sub_831D1160);
PPC_FUNC_IMPL(__imp__sub_831D1160) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8584
	ctx.r3.s64 = ctx.r11.s64 + -8584;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1180;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1198"))) PPC_WEAK_FUNC(sub_831D1198);
PPC_FUNC_IMPL(__imp__sub_831D1198) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8564
	ctx.r3.s64 = ctx.r11.s64 + -8564;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D11B8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D11D0"))) PPC_WEAK_FUNC(sub_831D11D0);
PPC_FUNC_IMPL(__imp__sub_831D11D0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8544
	ctx.r3.s64 = ctx.r11.s64 + -8544;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D11F0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1208"))) PPC_WEAK_FUNC(sub_831D1208);
PPC_FUNC_IMPL(__imp__sub_831D1208) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8524
	ctx.r3.s64 = ctx.r11.s64 + -8524;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1228;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21000, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1240"))) PPC_WEAK_FUNC(sub_831D1240);
PPC_FUNC_IMPL(__imp__sub_831D1240) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8504
	ctx.r3.s64 = ctx.r11.s64 + -8504;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1260;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1278"))) PPC_WEAK_FUNC(sub_831D1278);
PPC_FUNC_IMPL(__imp__sub_831D1278) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8484
	ctx.r3.s64 = ctx.r11.s64 + -8484;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1298;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D12B0"))) PPC_WEAK_FUNC(sub_831D12B0);
PPC_FUNC_IMPL(__imp__sub_831D12B0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8464
	ctx.r3.s64 = ctx.r11.s64 + -8464;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D12D0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

