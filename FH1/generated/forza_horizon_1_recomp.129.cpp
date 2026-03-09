#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_83164EE8"))) PPC_WEAK_FUNC(sub_83164EE8);
PPC_FUNC_IMPL(__imp__sub_83164EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,2668
	ctx.r3.s64 = ctx.r11.s64 + 2668;
	// bl 0x82e73af8
	ctx.lr = 0x83164F00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,7452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83164F18"))) PPC_WEAK_FUNC(sub_83164F18);
PPC_FUNC_IMPL(__imp__sub_83164F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,2680
	ctx.r3.s64 = ctx.r11.s64 + 2680;
	// bl 0x82e73af8
	ctx.lr = 0x83164F30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,7344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83164F48"))) PPC_WEAK_FUNC(sub_83164F48);
PPC_FUNC_IMPL(__imp__sub_83164F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,2692
	ctx.r3.s64 = ctx.r11.s64 + 2692;
	// bl 0x82e73af8
	ctx.lr = 0x83164F60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,7372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83164F78"))) PPC_WEAK_FUNC(sub_83164F78);
PPC_FUNC_IMPL(__imp__sub_83164F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,2704
	ctx.r3.s64 = ctx.r11.s64 + 2704;
	// bl 0x82e73af8
	ctx.lr = 0x83164F90;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,7728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83164FA8"))) PPC_WEAK_FUNC(sub_83164FA8);
PPC_FUNC_IMPL(__imp__sub_83164FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,2716
	ctx.r3.s64 = ctx.r11.s64 + 2716;
	// bl 0x82e73af8
	ctx.lr = 0x83164FC0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,7736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83164FD8"))) PPC_WEAK_FUNC(sub_83164FD8);
PPC_FUNC_IMPL(__imp__sub_83164FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,2736
	ctx.r3.s64 = ctx.r11.s64 + 2736;
	// bl 0x82e73af8
	ctx.lr = 0x83164FF0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,7424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165008"))) PPC_WEAK_FUNC(sub_83165008);
PPC_FUNC_IMPL(__imp__sub_83165008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,2752
	ctx.r3.s64 = ctx.r11.s64 + 2752;
	// bl 0x82e73af8
	ctx.lr = 0x83165020;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,7540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165038"))) PPC_WEAK_FUNC(sub_83165038);
PPC_FUNC_IMPL(__imp__sub_83165038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,2772
	ctx.r3.s64 = ctx.r11.s64 + 2772;
	// bl 0x82e73af8
	ctx.lr = 0x83165050;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,7440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165068"))) PPC_WEAK_FUNC(sub_83165068);
PPC_FUNC_IMPL(__imp__sub_83165068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-12408
	ctx.r3.s64 = ctx.r11.s64 + -12408;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83165078"))) PPC_WEAK_FUNC(sub_83165078);
PPC_FUNC_IMPL(__imp__sub_83165078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,8096
	ctx.r9.s64 = ctx.r11.s64 + 8096;
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

__attribute__((alias("__imp__sub_831650A8"))) PPC_WEAK_FUNC(sub_831650A8);
PPC_FUNC_IMPL(__imp__sub_831650A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,8048
	ctx.r9.s64 = ctx.r11.s64 + 8048;
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

__attribute__((alias("__imp__sub_831650D8"))) PPC_WEAK_FUNC(sub_831650D8);
PPC_FUNC_IMPL(__imp__sub_831650D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,8000
	ctx.r9.s64 = ctx.r11.s64 + 8000;
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

__attribute__((alias("__imp__sub_83165108"))) PPC_WEAK_FUNC(sub_83165108);
PPC_FUNC_IMPL(__imp__sub_83165108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,8032
	ctx.r9.s64 = ctx.r11.s64 + 8032;
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

__attribute__((alias("__imp__sub_83165138"))) PPC_WEAK_FUNC(sub_83165138);
PPC_FUNC_IMPL(__imp__sub_83165138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,8016
	ctx.r10.s64 = ctx.r10.s64 + 8016;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165158"))) PPC_WEAK_FUNC(sub_83165158);
PPC_FUNC_IMPL(__imp__sub_83165158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,7984
	ctx.r10.s64 = ctx.r10.s64 + 7984;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165178"))) PPC_WEAK_FUNC(sub_83165178);
PPC_FUNC_IMPL(__imp__sub_83165178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,8080
	ctx.r10.s64 = ctx.r10.s64 + 8080;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165198"))) PPC_WEAK_FUNC(sub_83165198);
PPC_FUNC_IMPL(__imp__sub_83165198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,8112
	ctx.r3.s64 = ctx.r11.s64 + 8112;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831651A8"))) PPC_WEAK_FUNC(sub_831651A8);
PPC_FUNC_IMPL(__imp__sub_831651A8) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r31,8064
	ctx.r30.s64 = ctx.r31.s64 + 8064;
	// addi r4,r11,3088
	ctx.r4.s64 = ctx.r11.s64 + 3088;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831651D4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,30
	ctx.r11.s64 = 30;
	// addi r10,r10,25528
	ctx.r10.s64 = ctx.r10.s64 + 25528;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,8064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8064, ctx.r10.u32);
	// addi r3,r11,-12432
	ctx.r3.s64 = ctx.r11.s64 + -12432;
	// bl 0x82a7e6b0
	ctx.lr = 0x831651F4;
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

__attribute__((alias("__imp__sub_83165210"))) PPC_WEAK_FUNC(sub_83165210);
PPC_FUNC_IMPL(__imp__sub_83165210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-12392
	ctx.r3.s64 = ctx.r11.s64 + -12392;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83165220"))) PPC_WEAK_FUNC(sub_83165220);
PPC_FUNC_IMPL(__imp__sub_83165220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,8288
	ctx.r9.s64 = ctx.r11.s64 + 8288;
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

__attribute__((alias("__imp__sub_83165250"))) PPC_WEAK_FUNC(sub_83165250);
PPC_FUNC_IMPL(__imp__sub_83165250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,8256
	ctx.r9.s64 = ctx.r11.s64 + 8256;
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

__attribute__((alias("__imp__sub_83165280"))) PPC_WEAK_FUNC(sub_83165280);
PPC_FUNC_IMPL(__imp__sub_83165280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,8208
	ctx.r9.s64 = ctx.r11.s64 + 8208;
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

__attribute__((alias("__imp__sub_831652B0"))) PPC_WEAK_FUNC(sub_831652B0);
PPC_FUNC_IMPL(__imp__sub_831652B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,8240
	ctx.r9.s64 = ctx.r11.s64 + 8240;
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

__attribute__((alias("__imp__sub_831652E0"))) PPC_WEAK_FUNC(sub_831652E0);
PPC_FUNC_IMPL(__imp__sub_831652E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,8224
	ctx.r10.s64 = ctx.r10.s64 + 8224;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165300"))) PPC_WEAK_FUNC(sub_83165300);
PPC_FUNC_IMPL(__imp__sub_83165300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,8192
	ctx.r10.s64 = ctx.r10.s64 + 8192;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165320"))) PPC_WEAK_FUNC(sub_83165320);
PPC_FUNC_IMPL(__imp__sub_83165320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,8272
	ctx.r10.s64 = ctx.r10.s64 + 8272;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165340"))) PPC_WEAK_FUNC(sub_83165340);
PPC_FUNC_IMPL(__imp__sub_83165340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,8312
	ctx.r3.s64 = ctx.r11.s64 + 8312;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83165350"))) PPC_WEAK_FUNC(sub_83165350);
PPC_FUNC_IMPL(__imp__sub_83165350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-12304
	ctx.r3.s64 = ctx.r11.s64 + -12304;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83165360"))) PPC_WEAK_FUNC(sub_83165360);
PPC_FUNC_IMPL(__imp__sub_83165360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,8880
	ctx.r9.s64 = ctx.r11.s64 + 8880;
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

__attribute__((alias("__imp__sub_83165390"))) PPC_WEAK_FUNC(sub_83165390);
PPC_FUNC_IMPL(__imp__sub_83165390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,8752
	ctx.r9.s64 = ctx.r11.s64 + 8752;
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

__attribute__((alias("__imp__sub_831653C0"))) PPC_WEAK_FUNC(sub_831653C0);
PPC_FUNC_IMPL(__imp__sub_831653C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,8656
	ctx.r9.s64 = ctx.r11.s64 + 8656;
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

__attribute__((alias("__imp__sub_831653F0"))) PPC_WEAK_FUNC(sub_831653F0);
PPC_FUNC_IMPL(__imp__sub_831653F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,8736
	ctx.r9.s64 = ctx.r11.s64 + 8736;
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

__attribute__((alias("__imp__sub_83165420"))) PPC_WEAK_FUNC(sub_83165420);
PPC_FUNC_IMPL(__imp__sub_83165420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,8720
	ctx.r10.s64 = ctx.r10.s64 + 8720;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165440"))) PPC_WEAK_FUNC(sub_83165440);
PPC_FUNC_IMPL(__imp__sub_83165440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,8624
	ctx.r10.s64 = ctx.r10.s64 + 8624;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165460"))) PPC_WEAK_FUNC(sub_83165460);
PPC_FUNC_IMPL(__imp__sub_83165460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,8864
	ctx.r10.s64 = ctx.r10.s64 + 8864;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165480"))) PPC_WEAK_FUNC(sub_83165480);
PPC_FUNC_IMPL(__imp__sub_83165480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,9016
	ctx.r3.s64 = ctx.r11.s64 + 9016;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83165490"))) PPC_WEAK_FUNC(sub_83165490);
PPC_FUNC_IMPL(__imp__sub_83165490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,25716
	ctx.r3.s64 = ctx.r11.s64 + 25716;
	// bl 0x82e73af8
	ctx.lr = 0x831654A8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8804, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831654C0"))) PPC_WEAK_FUNC(sub_831654C0);
PPC_FUNC_IMPL(__imp__sub_831654C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20480
	ctx.r3.s64 = ctx.r11.s64 + 20480;
	// bl 0x82e73af8
	ctx.lr = 0x831654D8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831654F0"))) PPC_WEAK_FUNC(sub_831654F0);
PPC_FUNC_IMPL(__imp__sub_831654F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20500
	ctx.r3.s64 = ctx.r11.s64 + 20500;
	// bl 0x82e73af8
	ctx.lr = 0x83165508;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165520"))) PPC_WEAK_FUNC(sub_83165520);
PPC_FUNC_IMPL(__imp__sub_83165520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20516
	ctx.r3.s64 = ctx.r11.s64 + 20516;
	// bl 0x82e73af8
	ctx.lr = 0x83165538;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165550"))) PPC_WEAK_FUNC(sub_83165550);
PPC_FUNC_IMPL(__imp__sub_83165550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21344
	ctx.r3.s64 = ctx.r11.s64 + 21344;
	// bl 0x82e73af8
	ctx.lr = 0x83165568;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165580"))) PPC_WEAK_FUNC(sub_83165580);
PPC_FUNC_IMPL(__imp__sub_83165580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20528
	ctx.r3.s64 = ctx.r11.s64 + 20528;
	// bl 0x82e73af8
	ctx.lr = 0x83165598;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831655B0"))) PPC_WEAK_FUNC(sub_831655B0);
PPC_FUNC_IMPL(__imp__sub_831655B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20544
	ctx.r3.s64 = ctx.r11.s64 + 20544;
	// bl 0x82e73af8
	ctx.lr = 0x831655C8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831655E0"))) PPC_WEAK_FUNC(sub_831655E0);
PPC_FUNC_IMPL(__imp__sub_831655E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,5260
	ctx.r3.s64 = ctx.r11.s64 + 5260;
	// bl 0x82e73af8
	ctx.lr = 0x831655F8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165610"))) PPC_WEAK_FUNC(sub_83165610);
PPC_FUNC_IMPL(__imp__sub_83165610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,5280
	ctx.r3.s64 = ctx.r11.s64 + 5280;
	// bl 0x82e73af8
	ctx.lr = 0x83165628;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8896, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165640"))) PPC_WEAK_FUNC(sub_83165640);
PPC_FUNC_IMPL(__imp__sub_83165640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20560
	ctx.r3.s64 = ctx.r11.s64 + 20560;
	// bl 0x82e73ab0
	ctx.lr = 0x83165658;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8700, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165670"))) PPC_WEAK_FUNC(sub_83165670);
PPC_FUNC_IMPL(__imp__sub_83165670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// bl 0x82e73ab0
	ctx.lr = 0x83165688;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8952, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831656A0"))) PPC_WEAK_FUNC(sub_831656A0);
PPC_FUNC_IMPL(__imp__sub_831656A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20592
	ctx.r3.s64 = ctx.r11.s64 + 20592;
	// bl 0x82e73ab0
	ctx.lr = 0x831656B8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9004, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831656D0"))) PPC_WEAK_FUNC(sub_831656D0);
PPC_FUNC_IMPL(__imp__sub_831656D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20608
	ctx.r3.s64 = ctx.r11.s64 + 20608;
	// bl 0x82e73ab0
	ctx.lr = 0x831656E8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8948, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165700"))) PPC_WEAK_FUNC(sub_83165700);
PPC_FUNC_IMPL(__imp__sub_83165700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,26092
	ctx.r3.s64 = ctx.r11.s64 + 26092;
	// bl 0x82e73ab0
	ctx.lr = 0x83165718;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165730"))) PPC_WEAK_FUNC(sub_83165730);
PPC_FUNC_IMPL(__imp__sub_83165730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20624
	ctx.r3.s64 = ctx.r11.s64 + 20624;
	// bl 0x82e73ab0
	ctx.lr = 0x83165748;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8832(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165760"))) PPC_WEAK_FUNC(sub_83165760);
PPC_FUNC_IMPL(__imp__sub_83165760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,25868
	ctx.r3.s64 = ctx.r11.s64 + 25868;
	// bl 0x82e73ab0
	ctx.lr = 0x83165778;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165790"))) PPC_WEAK_FUNC(sub_83165790);
PPC_FUNC_IMPL(__imp__sub_83165790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20636
	ctx.r3.s64 = ctx.r11.s64 + 20636;
	// bl 0x82e73ab0
	ctx.lr = 0x831657A8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831657C0"))) PPC_WEAK_FUNC(sub_831657C0);
PPC_FUNC_IMPL(__imp__sub_831657C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20652
	ctx.r3.s64 = ctx.r11.s64 + 20652;
	// bl 0x82e73ab0
	ctx.lr = 0x831657D8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831657F0"))) PPC_WEAK_FUNC(sub_831657F0);
PPC_FUNC_IMPL(__imp__sub_831657F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20668
	ctx.r3.s64 = ctx.r11.s64 + 20668;
	// bl 0x82e73ab0
	ctx.lr = 0x83165808;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8836(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8836, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165820"))) PPC_WEAK_FUNC(sub_83165820);
PPC_FUNC_IMPL(__imp__sub_83165820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20688
	ctx.r3.s64 = ctx.r11.s64 + 20688;
	// bl 0x82e73ab0
	ctx.lr = 0x83165838;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8940, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165850"))) PPC_WEAK_FUNC(sub_83165850);
PPC_FUNC_IMPL(__imp__sub_83165850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20708
	ctx.r3.s64 = ctx.r11.s64 + 20708;
	// bl 0x82ca7538
	ctx.lr = 0x83165868;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8984, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165880"))) PPC_WEAK_FUNC(sub_83165880);
PPC_FUNC_IMPL(__imp__sub_83165880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20732
	ctx.r3.s64 = ctx.r11.s64 + 20732;
	// bl 0x82ca7538
	ctx.lr = 0x83165898;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831658B0"))) PPC_WEAK_FUNC(sub_831658B0);
PPC_FUNC_IMPL(__imp__sub_831658B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20752
	ctx.r3.s64 = ctx.r11.s64 + 20752;
	// bl 0x82ca7538
	ctx.lr = 0x831658C8;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831658E0"))) PPC_WEAK_FUNC(sub_831658E0);
PPC_FUNC_IMPL(__imp__sub_831658E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20768
	ctx.r3.s64 = ctx.r11.s64 + 20768;
	// bl 0x82ca7538
	ctx.lr = 0x831658F8;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165910"))) PPC_WEAK_FUNC(sub_83165910);
PPC_FUNC_IMPL(__imp__sub_83165910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20784
	ctx.r3.s64 = ctx.r11.s64 + 20784;
	// bl 0x82ca7538
	ctx.lr = 0x83165928;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165940"))) PPC_WEAK_FUNC(sub_83165940);
PPC_FUNC_IMPL(__imp__sub_83165940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20796
	ctx.r3.s64 = ctx.r11.s64 + 20796;
	// bl 0x82ca7538
	ctx.lr = 0x83165958;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8992(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8992, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165970"))) PPC_WEAK_FUNC(sub_83165970);
PPC_FUNC_IMPL(__imp__sub_83165970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20808
	ctx.r3.s64 = ctx.r11.s64 + 20808;
	// bl 0x82ca7538
	ctx.lr = 0x83165988;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831659A0"))) PPC_WEAK_FUNC(sub_831659A0);
PPC_FUNC_IMPL(__imp__sub_831659A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20824
	ctx.r3.s64 = ctx.r11.s64 + 20824;
	// bl 0x82ca7538
	ctx.lr = 0x831659B8;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831659D0"))) PPC_WEAK_FUNC(sub_831659D0);
PPC_FUNC_IMPL(__imp__sub_831659D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20840
	ctx.r3.s64 = ctx.r11.s64 + 20840;
	// bl 0x82ca7538
	ctx.lr = 0x831659E8;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165A00"))) PPC_WEAK_FUNC(sub_83165A00);
PPC_FUNC_IMPL(__imp__sub_83165A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20864
	ctx.r3.s64 = ctx.r11.s64 + 20864;
	// bl 0x82e73af8
	ctx.lr = 0x83165A18;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165A30"))) PPC_WEAK_FUNC(sub_83165A30);
PPC_FUNC_IMPL(__imp__sub_83165A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20884
	ctx.r3.s64 = ctx.r11.s64 + 20884;
	// bl 0x82e73af8
	ctx.lr = 0x83165A48;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165A60"))) PPC_WEAK_FUNC(sub_83165A60);
PPC_FUNC_IMPL(__imp__sub_83165A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20904
	ctx.r3.s64 = ctx.r11.s64 + 20904;
	// bl 0x82e73af8
	ctx.lr = 0x83165A78;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165A90"))) PPC_WEAK_FUNC(sub_83165A90);
PPC_FUNC_IMPL(__imp__sub_83165A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20924
	ctx.r3.s64 = ctx.r11.s64 + 20924;
	// bl 0x82e73af8
	ctx.lr = 0x83165AA8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165AC0"))) PPC_WEAK_FUNC(sub_83165AC0);
PPC_FUNC_IMPL(__imp__sub_83165AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20944
	ctx.r3.s64 = ctx.r11.s64 + 20944;
	// bl 0x82e73af8
	ctx.lr = 0x83165AD8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165AF0"))) PPC_WEAK_FUNC(sub_83165AF0);
PPC_FUNC_IMPL(__imp__sub_83165AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20960
	ctx.r3.s64 = ctx.r11.s64 + 20960;
	// bl 0x82e73af8
	ctx.lr = 0x83165B08;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165B20"))) PPC_WEAK_FUNC(sub_83165B20);
PPC_FUNC_IMPL(__imp__sub_83165B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20976
	ctx.r3.s64 = ctx.r11.s64 + 20976;
	// bl 0x82e73af8
	ctx.lr = 0x83165B38;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165B50"))) PPC_WEAK_FUNC(sub_83165B50);
PPC_FUNC_IMPL(__imp__sub_83165B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20992
	ctx.r3.s64 = ctx.r11.s64 + 20992;
	// bl 0x82e73af8
	ctx.lr = 0x83165B68;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165B80"))) PPC_WEAK_FUNC(sub_83165B80);
PPC_FUNC_IMPL(__imp__sub_83165B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21008
	ctx.r3.s64 = ctx.r11.s64 + 21008;
	// bl 0x82e73af8
	ctx.lr = 0x83165B98;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165BB0"))) PPC_WEAK_FUNC(sub_83165BB0);
PPC_FUNC_IMPL(__imp__sub_83165BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21024
	ctx.r3.s64 = ctx.r11.s64 + 21024;
	// bl 0x82e73af8
	ctx.lr = 0x83165BC8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165BE0"))) PPC_WEAK_FUNC(sub_83165BE0);
PPC_FUNC_IMPL(__imp__sub_83165BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21040
	ctx.r3.s64 = ctx.r11.s64 + 21040;
	// bl 0x82e73af8
	ctx.lr = 0x83165BF8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8944, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165C10"))) PPC_WEAK_FUNC(sub_83165C10);
PPC_FUNC_IMPL(__imp__sub_83165C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21056
	ctx.r3.s64 = ctx.r11.s64 + 21056;
	// bl 0x82e73af8
	ctx.lr = 0x83165C28;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165C40"))) PPC_WEAK_FUNC(sub_83165C40);
PPC_FUNC_IMPL(__imp__sub_83165C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21344
	ctx.r3.s64 = ctx.r11.s64 + 21344;
	// bl 0x82e73af8
	ctx.lr = 0x83165C58;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165C70"))) PPC_WEAK_FUNC(sub_83165C70);
PPC_FUNC_IMPL(__imp__sub_83165C70) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r31,8924
	ctx.r30.s64 = ctx.r31.s64 + 8924;
	// addi r5,r11,21072
	ctx.r5.s64 = ctx.r11.s64 + 21072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x83165CA0;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,8924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8924, ctx.r10.u32);
	// addi r3,r11,-12376
	ctx.r3.s64 = ctx.r11.s64 + -12376;
	// bl 0x82a7e6b0
	ctx.lr = 0x83165CC0;
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

__attribute__((alias("__imp__sub_83165CD8"))) PPC_WEAK_FUNC(sub_83165CD8);
PPC_FUNC_IMPL(__imp__sub_83165CD8) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r31,8808
	ctx.r30.s64 = ctx.r31.s64 + 8808;
	// addi r4,r11,21104
	ctx.r4.s64 = ctx.r11.s64 + 21104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83165D04;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,8808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8808, ctx.r10.u32);
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-12352
	ctx.r3.s64 = ctx.r11.s64 + -12352;
	// bl 0x82a7e6b0
	ctx.lr = 0x83165D38;
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

__attribute__((alias("__imp__sub_83165D50"))) PPC_WEAK_FUNC(sub_83165D50);
PPC_FUNC_IMPL(__imp__sub_83165D50) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r31,8840
	ctx.r30.s64 = ctx.r31.s64 + 8840;
	// addi r4,r11,21136
	ctx.r4.s64 = ctx.r11.s64 + 21136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83165D7C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,8840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8840, ctx.r10.u32);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-12328
	ctx.r3.s64 = ctx.r11.s64 + -12328;
	// bl 0x82a7e6b0
	ctx.lr = 0x83165DB0;
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

__attribute__((alias("__imp__sub_83165DC8"))) PPC_WEAK_FUNC(sub_83165DC8);
PPC_FUNC_IMPL(__imp__sub_83165DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21800
	ctx.r3.s64 = ctx.r11.s64 + 21800;
	// bl 0x82e73af8
	ctx.lr = 0x83165DE0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165DF8"))) PPC_WEAK_FUNC(sub_83165DF8);
PPC_FUNC_IMPL(__imp__sub_83165DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21168
	ctx.r3.s64 = ctx.r11.s64 + 21168;
	// bl 0x82ca7538
	ctx.lr = 0x83165E10;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9096, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165E28"))) PPC_WEAK_FUNC(sub_83165E28);
PPC_FUNC_IMPL(__imp__sub_83165E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21188
	ctx.r3.s64 = ctx.r11.s64 + 21188;
	// bl 0x82ca7538
	ctx.lr = 0x83165E40;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165E58"))) PPC_WEAK_FUNC(sub_83165E58);
PPC_FUNC_IMPL(__imp__sub_83165E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21204
	ctx.r3.s64 = ctx.r11.s64 + 21204;
	// bl 0x82e73af8
	ctx.lr = 0x83165E70;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8704, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165E88"))) PPC_WEAK_FUNC(sub_83165E88);
PPC_FUNC_IMPL(__imp__sub_83165E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,5260
	ctx.r3.s64 = ctx.r11.s64 + 5260;
	// bl 0x82e73af8
	ctx.lr = 0x83165EA0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165EB8"))) PPC_WEAK_FUNC(sub_83165EB8);
PPC_FUNC_IMPL(__imp__sub_83165EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,5280
	ctx.r3.s64 = ctx.r11.s64 + 5280;
	// bl 0x82e73af8
	ctx.lr = 0x83165ED0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165EE8"))) PPC_WEAK_FUNC(sub_83165EE8);
PPC_FUNC_IMPL(__imp__sub_83165EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21224
	ctx.r3.s64 = ctx.r11.s64 + 21224;
	// bl 0x82e73af8
	ctx.lr = 0x83165F00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165F18"))) PPC_WEAK_FUNC(sub_83165F18);
PPC_FUNC_IMPL(__imp__sub_83165F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21240
	ctx.r3.s64 = ctx.r11.s64 + 21240;
	// bl 0x82e73af8
	ctx.lr = 0x83165F30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165F48"))) PPC_WEAK_FUNC(sub_83165F48);
PPC_FUNC_IMPL(__imp__sub_83165F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21256
	ctx.r3.s64 = ctx.r11.s64 + 21256;
	// bl 0x82e73af8
	ctx.lr = 0x83165F60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165F78"))) PPC_WEAK_FUNC(sub_83165F78);
PPC_FUNC_IMPL(__imp__sub_83165F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21272
	ctx.r3.s64 = ctx.r11.s64 + 21272;
	// bl 0x82e73af8
	ctx.lr = 0x83165F90;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8996, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165FA8"))) PPC_WEAK_FUNC(sub_83165FA8);
PPC_FUNC_IMPL(__imp__sub_83165FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21288
	ctx.r3.s64 = ctx.r11.s64 + 21288;
	// bl 0x82e73af8
	ctx.lr = 0x83165FC0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8916, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83165FD8"))) PPC_WEAK_FUNC(sub_83165FD8);
PPC_FUNC_IMPL(__imp__sub_83165FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21300
	ctx.r3.s64 = ctx.r11.s64 + 21300;
	// bl 0x82e73af8
	ctx.lr = 0x83165FF0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166008"))) PPC_WEAK_FUNC(sub_83166008);
PPC_FUNC_IMPL(__imp__sub_83166008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21316
	ctx.r3.s64 = ctx.r11.s64 + 21316;
	// bl 0x82e73af8
	ctx.lr = 0x83166020;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166038"))) PPC_WEAK_FUNC(sub_83166038);
PPC_FUNC_IMPL(__imp__sub_83166038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21328
	ctx.r3.s64 = ctx.r11.s64 + 21328;
	// bl 0x82e73af8
	ctx.lr = 0x83166050;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166068"))) PPC_WEAK_FUNC(sub_83166068);
PPC_FUNC_IMPL(__imp__sub_83166068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21344
	ctx.r3.s64 = ctx.r11.s64 + 21344;
	// bl 0x82e73af8
	ctx.lr = 0x83166080;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166098"))) PPC_WEAK_FUNC(sub_83166098);
PPC_FUNC_IMPL(__imp__sub_83166098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21356
	ctx.r3.s64 = ctx.r11.s64 + 21356;
	// bl 0x82e73af8
	ctx.lr = 0x831660B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8920, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831660C8"))) PPC_WEAK_FUNC(sub_831660C8);
PPC_FUNC_IMPL(__imp__sub_831660C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-14008
	ctx.r3.s64 = ctx.r11.s64 + -14008;
	// bl 0x82e73ab0
	ctx.lr = 0x831660E0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8796, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831660F8"))) PPC_WEAK_FUNC(sub_831660F8);
PPC_FUNC_IMPL(__imp__sub_831660F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21344
	ctx.r3.s64 = ctx.r11.s64 + 21344;
	// bl 0x82e73af8
	ctx.lr = 0x83166110;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,8776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166128"))) PPC_WEAK_FUNC(sub_83166128);
PPC_FUNC_IMPL(__imp__sub_83166128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21372
	ctx.r3.s64 = ctx.r11.s64 + 21372;
	// bl 0x82e73af8
	ctx.lr = 0x83166140;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9000, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166158"))) PPC_WEAK_FUNC(sub_83166158);
PPC_FUNC_IMPL(__imp__sub_83166158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x83166160;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// lis r9,-32149
	ctx.r9.s64 = -2106916864;
	// addi r30,r11,13920
	ctx.r30.s64 = ctx.r11.s64 + 13920;
	// addi r11,r10,-15000
	ctx.r11.s64 = ctx.r10.s64 + -15000;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r9,-26800
	ctx.r10.s64 = ctx.r9.s64 + -26800;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83166198;
	sub_82CA7538(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,21492
	ctx.r3.s64 = ctx.r11.s64 + 21492;
	// bl 0x82ca7538
	ctx.lr = 0x831661A8;
	sub_82CA7538(ctx, base);
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r29,r7,8488
	ctx.r29.s64 = ctx.r7.s64 + 8488;
	// lis r6,-32149
	ctx.r6.s64 = -2106916864;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,8488(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8488, ctx.r31.u32);
	// addi r10,r6,-26504
	ctx.r10.s64 = ctx.r6.s64 + -26504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// std r9,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r9.u64);
	// std r8,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r8.u64);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831661F0;
	sub_82CA7538(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r28,r3,16,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,21464
	ctx.r3.s64 = ctx.r11.s64 + 21464;
	// bl 0x82ca7538
	ctx.lr = 0x83166200;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 | ctx.r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// stw r10,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r9,32(r29)
	PPC_STORE_U64(ctx.r29.u32 + 32, ctx.r9.u64);
	// addi r11,r11,-26400
	ctx.r11.s64 = ctx.r11.s64 + -26400;
	// std r8,40(r29)
	PPC_STORE_U64(ctx.r29.u32 + 40, ctx.r8.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83166240;
	sub_82CA7538(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r28,r3,16,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,21440
	ctx.r3.s64 = ctx.r11.s64 + 21440;
	// bl 0x82ca7538
	ctx.lr = 0x83166250;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 | ctx.r28.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// stw r10,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r9,56(r29)
	PPC_STORE_U64(ctx.r29.u32 + 56, ctx.r9.u64);
	// addi r11,r11,-26296
	ctx.r11.s64 = ctx.r11.s64 + -26296;
	// std r8,64(r29)
	PPC_STORE_U64(ctx.r29.u32 + 64, ctx.r8.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83166290;
	sub_82CA7538(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r28,r3,16,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,21420
	ctx.r3.s64 = ctx.r11.s64 + 21420;
	// bl 0x82ca7538
	ctx.lr = 0x831662A0;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 | ctx.r28.u64;
	// std r9,80(r29)
	PPC_STORE_U64(ctx.r29.u32 + 80, ctx.r9.u64);
	// li r10,3
	ctx.r10.s64 = 3;
	// std r8,88(r29)
	PPC_STORE_U64(ctx.r29.u32 + 88, ctx.r8.u64);
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// stw r10,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-26192
	ctx.r11.s64 = ctx.r11.s64 + -26192;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831662E0;
	sub_82CA7538(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r31,r3,16,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,21392
	ctx.r3.s64 = ctx.r11.s64 + 21392;
	// bl 0x82ca7538
	ctx.lr = 0x831662F0;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 | ctx.r31.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
	// stw r10,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r10.u32);
	// std r9,104(r29)
	PPC_STORE_U64(ctx.r29.u32 + 104, ctx.r9.u64);
	// std r8,112(r29)
	PPC_STORE_U64(ctx.r29.u32 + 112, ctx.r8.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83166318"))) PPC_WEAK_FUNC(sub_83166318);
PPC_FUNC_IMPL(__imp__sub_83166318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x83166320;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-20904
	ctx.r11.s64 = ctx.r11.s64 + -20904;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r10,13920
	ctx.r3.s64 = ctx.r10.s64 + 13920;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83166344;
	sub_82CA7538(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,21576
	ctx.r3.s64 = ctx.r11.s64 + 21576;
	// bl 0x82ca7538
	ctx.lr = 0x83166354;
	sub_82CA7538(ctx, base);
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | ctx.r30.u64;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r30,r8,8432
	ctx.r30.s64 = ctx.r8.s64 + 8432;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r7,-32149
	ctx.r7.s64 = -2106916864;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8432(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8432, ctx.r31.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r7,-25416
	ctx.r8.s64 = ctx.r7.s64 + -25416;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r3,r10,-6244
	ctx.r3.s64 = ctx.r10.s64 + -6244;
	// std r9,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r9.u64);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83166390;
	sub_82CA7538(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,21540
	ctx.r3.s64 = ctx.r11.s64 + 21540;
	// bl 0x82ca7538
	ctx.lr = 0x831663A0;
	sub_82CA7538(ctx, base);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// std r9,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r9.u64);
	// addi r3,r11,19688
	ctx.r3.s64 = ctx.r11.s64 + 19688;
	// bl 0x82ca7538
	ctx.lr = 0x831663CC;
	sub_82CA7538(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,21516
	ctx.r3.s64 = ctx.r11.s64 + 21516;
	// bl 0x82ca7538
	ctx.lr = 0x831663DC;
	sub_82CA7538(ctx, base);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// std r10,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r10.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831663F8"))) PPC_WEAK_FUNC(sub_831663F8);
PPC_FUNC_IMPL(__imp__sub_831663F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-11888
	ctx.r3.s64 = ctx.r11.s64 + -11888;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83166408"))) PPC_WEAK_FUNC(sub_83166408);
PPC_FUNC_IMPL(__imp__sub_83166408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,9600
	ctx.r9.s64 = ctx.r11.s64 + 9600;
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

__attribute__((alias("__imp__sub_83166438"))) PPC_WEAK_FUNC(sub_83166438);
PPC_FUNC_IMPL(__imp__sub_83166438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,9456
	ctx.r9.s64 = ctx.r11.s64 + 9456;
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

__attribute__((alias("__imp__sub_83166468"))) PPC_WEAK_FUNC(sub_83166468);
PPC_FUNC_IMPL(__imp__sub_83166468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,9264
	ctx.r9.s64 = ctx.r11.s64 + 9264;
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

__attribute__((alias("__imp__sub_83166498"))) PPC_WEAK_FUNC(sub_83166498);
PPC_FUNC_IMPL(__imp__sub_83166498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,9424
	ctx.r9.s64 = ctx.r11.s64 + 9424;
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

__attribute__((alias("__imp__sub_831664C8"))) PPC_WEAK_FUNC(sub_831664C8);
PPC_FUNC_IMPL(__imp__sub_831664C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,9392
	ctx.r10.s64 = ctx.r10.s64 + 9392;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831664E8"))) PPC_WEAK_FUNC(sub_831664E8);
PPC_FUNC_IMPL(__imp__sub_831664E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,9200
	ctx.r10.s64 = ctx.r10.s64 + 9200;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166508"))) PPC_WEAK_FUNC(sub_83166508);
PPC_FUNC_IMPL(__imp__sub_83166508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,9568
	ctx.r10.s64 = ctx.r10.s64 + 9568;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166528"))) PPC_WEAK_FUNC(sub_83166528);
PPC_FUNC_IMPL(__imp__sub_83166528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,9768
	ctx.r3.s64 = ctx.r11.s64 + 9768;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83166538"))) PPC_WEAK_FUNC(sub_83166538);
PPC_FUNC_IMPL(__imp__sub_83166538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,32380
	ctx.r3.s64 = ctx.r11.s64 + 32380;
	// bl 0x82e73af8
	ctx.lr = 0x83166550;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9888(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9888, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166568"))) PPC_WEAK_FUNC(sub_83166568);
PPC_FUNC_IMPL(__imp__sub_83166568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,32400
	ctx.r3.s64 = ctx.r11.s64 + 32400;
	// bl 0x82e73af8
	ctx.lr = 0x83166580;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166598"))) PPC_WEAK_FUNC(sub_83166598);
PPC_FUNC_IMPL(__imp__sub_83166598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,32420
	ctx.r3.s64 = ctx.r11.s64 + 32420;
	// bl 0x82e73af8
	ctx.lr = 0x831665B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831665C8"))) PPC_WEAK_FUNC(sub_831665C8);
PPC_FUNC_IMPL(__imp__sub_831665C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,32440
	ctx.r3.s64 = ctx.r11.s64 + 32440;
	// bl 0x82e73af8
	ctx.lr = 0x831665E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831665F8"))) PPC_WEAK_FUNC(sub_831665F8);
PPC_FUNC_IMPL(__imp__sub_831665F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,32452
	ctx.r3.s64 = ctx.r11.s64 + 32452;
	// bl 0x82ca7538
	ctx.lr = 0x83166610;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166628"))) PPC_WEAK_FUNC(sub_83166628);
PPC_FUNC_IMPL(__imp__sub_83166628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,32476
	ctx.r3.s64 = ctx.r11.s64 + 32476;
	// bl 0x82ca7538
	ctx.lr = 0x83166640;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166658"))) PPC_WEAK_FUNC(sub_83166658);
PPC_FUNC_IMPL(__imp__sub_83166658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,32504
	ctx.r3.s64 = ctx.r11.s64 + 32504;
	// bl 0x82ca7538
	ctx.lr = 0x83166670;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166688"))) PPC_WEAK_FUNC(sub_83166688);
PPC_FUNC_IMPL(__imp__sub_83166688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,32532
	ctx.r3.s64 = ctx.r11.s64 + 32532;
	// bl 0x82ca7538
	ctx.lr = 0x831666A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831666B8"))) PPC_WEAK_FUNC(sub_831666B8);
PPC_FUNC_IMPL(__imp__sub_831666B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,32568
	ctx.r3.s64 = ctx.r11.s64 + 32568;
	// bl 0x82ca7538
	ctx.lr = 0x831666D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831666E8"))) PPC_WEAK_FUNC(sub_831666E8);
PPC_FUNC_IMPL(__imp__sub_831666E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,32592
	ctx.r3.s64 = ctx.r11.s64 + 32592;
	// bl 0x82ca7538
	ctx.lr = 0x83166700;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166718"))) PPC_WEAK_FUNC(sub_83166718);
PPC_FUNC_IMPL(__imp__sub_83166718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,32620
	ctx.r3.s64 = ctx.r11.s64 + 32620;
	// bl 0x82ca7538
	ctx.lr = 0x83166730;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166748"))) PPC_WEAK_FUNC(sub_83166748);
PPC_FUNC_IMPL(__imp__sub_83166748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,32640
	ctx.r3.s64 = ctx.r11.s64 + 32640;
	// bl 0x82ca7538
	ctx.lr = 0x83166760;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166778"))) PPC_WEAK_FUNC(sub_83166778);
PPC_FUNC_IMPL(__imp__sub_83166778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,32664
	ctx.r3.s64 = ctx.r11.s64 + 32664;
	// bl 0x82ca7538
	ctx.lr = 0x83166790;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831667A8"))) PPC_WEAK_FUNC(sub_831667A8);
PPC_FUNC_IMPL(__imp__sub_831667A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,32688
	ctx.r3.s64 = ctx.r11.s64 + 32688;
	// bl 0x82ca7538
	ctx.lr = 0x831667C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9844(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9844, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831667D8"))) PPC_WEAK_FUNC(sub_831667D8);
PPC_FUNC_IMPL(__imp__sub_831667D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,32716
	ctx.r3.s64 = ctx.r11.s64 + 32716;
	// bl 0x82ca7538
	ctx.lr = 0x831667F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9504, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166808"))) PPC_WEAK_FUNC(sub_83166808);
PPC_FUNC_IMPL(__imp__sub_83166808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,32740
	ctx.r3.s64 = ctx.r11.s64 + 32740;
	// bl 0x82ca7538
	ctx.lr = 0x83166820;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166838"))) PPC_WEAK_FUNC(sub_83166838);
PPC_FUNC_IMPL(__imp__sub_83166838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32768
	ctx.r3.s64 = ctx.r11.s64 + -32768;
	// bl 0x82ca7538
	ctx.lr = 0x83166850;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166868"))) PPC_WEAK_FUNC(sub_83166868);
PPC_FUNC_IMPL(__imp__sub_83166868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32744
	ctx.r3.s64 = ctx.r11.s64 + -32744;
	// bl 0x82ca7538
	ctx.lr = 0x83166880;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166898"))) PPC_WEAK_FUNC(sub_83166898);
PPC_FUNC_IMPL(__imp__sub_83166898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32716
	ctx.r3.s64 = ctx.r11.s64 + -32716;
	// bl 0x82ca7538
	ctx.lr = 0x831668B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831668C8"))) PPC_WEAK_FUNC(sub_831668C8);
PPC_FUNC_IMPL(__imp__sub_831668C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32696
	ctx.r3.s64 = ctx.r11.s64 + -32696;
	// bl 0x82ca7538
	ctx.lr = 0x831668E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831668F8"))) PPC_WEAK_FUNC(sub_831668F8);
PPC_FUNC_IMPL(__imp__sub_831668F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32668
	ctx.r3.s64 = ctx.r11.s64 + -32668;
	// bl 0x82ca7538
	ctx.lr = 0x83166910;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166928"))) PPC_WEAK_FUNC(sub_83166928);
PPC_FUNC_IMPL(__imp__sub_83166928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32640
	ctx.r3.s64 = ctx.r11.s64 + -32640;
	// bl 0x82ca7538
	ctx.lr = 0x83166940;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166958"))) PPC_WEAK_FUNC(sub_83166958);
PPC_FUNC_IMPL(__imp__sub_83166958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32608
	ctx.r3.s64 = ctx.r11.s64 + -32608;
	// bl 0x82ca7538
	ctx.lr = 0x83166970;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166988"))) PPC_WEAK_FUNC(sub_83166988);
PPC_FUNC_IMPL(__imp__sub_83166988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32584
	ctx.r3.s64 = ctx.r11.s64 + -32584;
	// bl 0x82ca7538
	ctx.lr = 0x831669A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831669B8"))) PPC_WEAK_FUNC(sub_831669B8);
PPC_FUNC_IMPL(__imp__sub_831669B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32556
	ctx.r3.s64 = ctx.r11.s64 + -32556;
	// bl 0x82ca7538
	ctx.lr = 0x831669D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831669E8"))) PPC_WEAK_FUNC(sub_831669E8);
PPC_FUNC_IMPL(__imp__sub_831669E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32528
	ctx.r3.s64 = ctx.r11.s64 + -32528;
	// bl 0x82ca7538
	ctx.lr = 0x83166A00;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166A18"))) PPC_WEAK_FUNC(sub_83166A18);
PPC_FUNC_IMPL(__imp__sub_83166A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32492
	ctx.r3.s64 = ctx.r11.s64 + -32492;
	// bl 0x82ca7538
	ctx.lr = 0x83166A30;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166A48"))) PPC_WEAK_FUNC(sub_83166A48);
PPC_FUNC_IMPL(__imp__sub_83166A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32472
	ctx.r3.s64 = ctx.r11.s64 + -32472;
	// bl 0x82ca7538
	ctx.lr = 0x83166A60;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166A78"))) PPC_WEAK_FUNC(sub_83166A78);
PPC_FUNC_IMPL(__imp__sub_83166A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32444
	ctx.r3.s64 = ctx.r11.s64 + -32444;
	// bl 0x82ca7538
	ctx.lr = 0x83166A90;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166AA8"))) PPC_WEAK_FUNC(sub_83166AA8);
PPC_FUNC_IMPL(__imp__sub_83166AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32420
	ctx.r3.s64 = ctx.r11.s64 + -32420;
	// bl 0x82ca7538
	ctx.lr = 0x83166AC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166AD8"))) PPC_WEAK_FUNC(sub_83166AD8);
PPC_FUNC_IMPL(__imp__sub_83166AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32392
	ctx.r3.s64 = ctx.r11.s64 + -32392;
	// bl 0x82ca7538
	ctx.lr = 0x83166AF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166B08"))) PPC_WEAK_FUNC(sub_83166B08);
PPC_FUNC_IMPL(__imp__sub_83166B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32368
	ctx.r3.s64 = ctx.r11.s64 + -32368;
	// bl 0x82ca7538
	ctx.lr = 0x83166B20;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166B38"))) PPC_WEAK_FUNC(sub_83166B38);
PPC_FUNC_IMPL(__imp__sub_83166B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32340
	ctx.r3.s64 = ctx.r11.s64 + -32340;
	// bl 0x82ca7538
	ctx.lr = 0x83166B50;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166B68"))) PPC_WEAK_FUNC(sub_83166B68);
PPC_FUNC_IMPL(__imp__sub_83166B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32316
	ctx.r3.s64 = ctx.r11.s64 + -32316;
	// bl 0x82ca7538
	ctx.lr = 0x83166B80;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166B98"))) PPC_WEAK_FUNC(sub_83166B98);
PPC_FUNC_IMPL(__imp__sub_83166B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32284
	ctx.r3.s64 = ctx.r11.s64 + -32284;
	// bl 0x82ca7538
	ctx.lr = 0x83166BB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9840(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9840, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166BC8"))) PPC_WEAK_FUNC(sub_83166BC8);
PPC_FUNC_IMPL(__imp__sub_83166BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32260
	ctx.r3.s64 = ctx.r11.s64 + -32260;
	// bl 0x82ca7538
	ctx.lr = 0x83166BE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166BF8"))) PPC_WEAK_FUNC(sub_83166BF8);
PPC_FUNC_IMPL(__imp__sub_83166BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32232
	ctx.r3.s64 = ctx.r11.s64 + -32232;
	// bl 0x82ca7538
	ctx.lr = 0x83166C10;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166C28"))) PPC_WEAK_FUNC(sub_83166C28);
PPC_FUNC_IMPL(__imp__sub_83166C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32200
	ctx.r3.s64 = ctx.r11.s64 + -32200;
	// bl 0x82ca7538
	ctx.lr = 0x83166C40;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166C58"))) PPC_WEAK_FUNC(sub_83166C58);
PPC_FUNC_IMPL(__imp__sub_83166C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32164
	ctx.r3.s64 = ctx.r11.s64 + -32164;
	// bl 0x82ca7538
	ctx.lr = 0x83166C70;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166C88"))) PPC_WEAK_FUNC(sub_83166C88);
PPC_FUNC_IMPL(__imp__sub_83166C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32136
	ctx.r3.s64 = ctx.r11.s64 + -32136;
	// bl 0x82ca7538
	ctx.lr = 0x83166CA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166CB8"))) PPC_WEAK_FUNC(sub_83166CB8);
PPC_FUNC_IMPL(__imp__sub_83166CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32108
	ctx.r3.s64 = ctx.r11.s64 + -32108;
	// bl 0x82ca7538
	ctx.lr = 0x83166CD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9592, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166CE8"))) PPC_WEAK_FUNC(sub_83166CE8);
PPC_FUNC_IMPL(__imp__sub_83166CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32080
	ctx.r3.s64 = ctx.r11.s64 + -32080;
	// bl 0x82ca7538
	ctx.lr = 0x83166D00;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166D18"))) PPC_WEAK_FUNC(sub_83166D18);
PPC_FUNC_IMPL(__imp__sub_83166D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32052
	ctx.r3.s64 = ctx.r11.s64 + -32052;
	// bl 0x82ca7538
	ctx.lr = 0x83166D30;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166D48"))) PPC_WEAK_FUNC(sub_83166D48);
PPC_FUNC_IMPL(__imp__sub_83166D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-32024
	ctx.r3.s64 = ctx.r11.s64 + -32024;
	// bl 0x82ca7538
	ctx.lr = 0x83166D60;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166D78"))) PPC_WEAK_FUNC(sub_83166D78);
PPC_FUNC_IMPL(__imp__sub_83166D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31996
	ctx.r3.s64 = ctx.r11.s64 + -31996;
	// bl 0x82ca7538
	ctx.lr = 0x83166D90;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166DA8"))) PPC_WEAK_FUNC(sub_83166DA8);
PPC_FUNC_IMPL(__imp__sub_83166DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,1612
	ctx.r3.s64 = ctx.r11.s64 + 1612;
	// bl 0x82e73af8
	ctx.lr = 0x83166DC0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9556, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166DD8"))) PPC_WEAK_FUNC(sub_83166DD8);
PPC_FUNC_IMPL(__imp__sub_83166DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,1632
	ctx.r3.s64 = ctx.r11.s64 + 1632;
	// bl 0x82e73af8
	ctx.lr = 0x83166DF0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166E08"))) PPC_WEAK_FUNC(sub_83166E08);
PPC_FUNC_IMPL(__imp__sub_83166E08) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r31,9684
	ctx.r30.s64 = ctx.r31.s64 + 9684;
	// addi r5,r11,-31968
	ctx.r5.s64 = ctx.r11.s64 + -31968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x83166E38;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,9684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9684, ctx.r10.u32);
	// addi r3,r11,-12200
	ctx.r3.s64 = ctx.r11.s64 + -12200;
	// bl 0x82a7e6b0
	ctx.lr = 0x83166E58;
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

__attribute__((alias("__imp__sub_83166E70"))) PPC_WEAK_FUNC(sub_83166E70);
PPC_FUNC_IMPL(__imp__sub_83166E70) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r31,9616
	ctx.r30.s64 = ctx.r31.s64 + 9616;
	// addi r5,r11,-31932
	ctx.r5.s64 = ctx.r11.s64 + -31932;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x83166EA0;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,9616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9616, ctx.r10.u32);
	// addi r3,r11,-12176
	ctx.r3.s64 = ctx.r11.s64 + -12176;
	// bl 0x82a7e6b0
	ctx.lr = 0x83166EC0;
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

__attribute__((alias("__imp__sub_83166ED8"))) PPC_WEAK_FUNC(sub_83166ED8);
PPC_FUNC_IMPL(__imp__sub_83166ED8) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r31,9848
	ctx.r30.s64 = ctx.r31.s64 + 9848;
	// addi r5,r11,-31908
	ctx.r5.s64 = ctx.r11.s64 + -31908;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x83166F08;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,9848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9848, ctx.r10.u32);
	// addi r3,r11,-12152
	ctx.r3.s64 = ctx.r11.s64 + -12152;
	// bl 0x82a7e6b0
	ctx.lr = 0x83166F28;
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

__attribute__((alias("__imp__sub_83166F40"))) PPC_WEAK_FUNC(sub_83166F40);
PPC_FUNC_IMPL(__imp__sub_83166F40) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r31,9536
	ctx.r30.s64 = ctx.r31.s64 + 9536;
	// addi r5,r11,-31884
	ctx.r5.s64 = ctx.r11.s64 + -31884;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x83166F70;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,9536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9536, ctx.r10.u32);
	// addi r3,r11,-12128
	ctx.r3.s64 = ctx.r11.s64 + -12128;
	// bl 0x82a7e6b0
	ctx.lr = 0x83166F90;
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

__attribute__((alias("__imp__sub_83166FA8"))) PPC_WEAK_FUNC(sub_83166FA8);
PPC_FUNC_IMPL(__imp__sub_83166FA8) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r31,9280
	ctx.r30.s64 = ctx.r31.s64 + 9280;
	// addi r5,r11,-31856
	ctx.r5.s64 = ctx.r11.s64 + -31856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x83166FD8;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,9280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9280, ctx.r10.u32);
	// addi r3,r11,-12104
	ctx.r3.s64 = ctx.r11.s64 + -12104;
	// bl 0x82a7e6b0
	ctx.lr = 0x83166FF8;
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

__attribute__((alias("__imp__sub_83167010"))) PPC_WEAK_FUNC(sub_83167010);
PPC_FUNC_IMPL(__imp__sub_83167010) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r31,9896
	ctx.r30.s64 = ctx.r31.s64 + 9896;
	// addi r5,r11,-31832
	ctx.r5.s64 = ctx.r11.s64 + -31832;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x83167040;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,9896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9896, ctx.r10.u32);
	// addi r3,r11,-12080
	ctx.r3.s64 = ctx.r11.s64 + -12080;
	// bl 0x82a7e6b0
	ctx.lr = 0x83167060;
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

__attribute__((alias("__imp__sub_83167078"))) PPC_WEAK_FUNC(sub_83167078);
PPC_FUNC_IMPL(__imp__sub_83167078) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r31,9860
	ctx.r30.s64 = ctx.r31.s64 + 9860;
	// addi r5,r11,-31804
	ctx.r5.s64 = ctx.r11.s64 + -31804;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x831670A8;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,9860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9860, ctx.r10.u32);
	// addi r3,r11,-12056
	ctx.r3.s64 = ctx.r11.s64 + -12056;
	// bl 0x82a7e6b0
	ctx.lr = 0x831670C8;
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

__attribute__((alias("__imp__sub_831670E0"))) PPC_WEAK_FUNC(sub_831670E0);
PPC_FUNC_IMPL(__imp__sub_831670E0) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r31,9344
	ctx.r30.s64 = ctx.r31.s64 + 9344;
	// addi r5,r11,-31780
	ctx.r5.s64 = ctx.r11.s64 + -31780;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x83167110;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,9344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9344, ctx.r10.u32);
	// addi r3,r11,-12032
	ctx.r3.s64 = ctx.r11.s64 + -12032;
	// bl 0x82a7e6b0
	ctx.lr = 0x83167130;
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

__attribute__((alias("__imp__sub_83167148"))) PPC_WEAK_FUNC(sub_83167148);
PPC_FUNC_IMPL(__imp__sub_83167148) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r31,9368
	ctx.r30.s64 = ctx.r31.s64 + 9368;
	// addi r5,r11,-31756
	ctx.r5.s64 = ctx.r11.s64 + -31756;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x83167178;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,9368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9368, ctx.r10.u32);
	// addi r3,r11,-12008
	ctx.r3.s64 = ctx.r11.s64 + -12008;
	// bl 0x82a7e6b0
	ctx.lr = 0x83167198;
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

__attribute__((alias("__imp__sub_831671B0"))) PPC_WEAK_FUNC(sub_831671B0);
PPC_FUNC_IMPL(__imp__sub_831671B0) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r31,9412
	ctx.r30.s64 = ctx.r31.s64 + 9412;
	// addi r5,r11,-31732
	ctx.r5.s64 = ctx.r11.s64 + -31732;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x831671E0;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,9412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9412, ctx.r10.u32);
	// addi r3,r11,-11984
	ctx.r3.s64 = ctx.r11.s64 + -11984;
	// bl 0x82a7e6b0
	ctx.lr = 0x83167200;
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

__attribute__((alias("__imp__sub_83167218"))) PPC_WEAK_FUNC(sub_83167218);
PPC_FUNC_IMPL(__imp__sub_83167218) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r31,9484
	ctx.r30.s64 = ctx.r31.s64 + 9484;
	// addi r5,r11,-31708
	ctx.r5.s64 = ctx.r11.s64 + -31708;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x83167248;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,9484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9484, ctx.r10.u32);
	// addi r3,r11,-11960
	ctx.r3.s64 = ctx.r11.s64 + -11960;
	// bl 0x82a7e6b0
	ctx.lr = 0x83167268;
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

__attribute__((alias("__imp__sub_83167280"))) PPC_WEAK_FUNC(sub_83167280);
PPC_FUNC_IMPL(__imp__sub_83167280) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r31,9696
	ctx.r30.s64 = ctx.r31.s64 + 9696;
	// addi r5,r11,-31680
	ctx.r5.s64 = ctx.r11.s64 + -31680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x831672B0;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,9696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9696, ctx.r10.u32);
	// addi r3,r11,-11936
	ctx.r3.s64 = ctx.r11.s64 + -11936;
	// bl 0x82a7e6b0
	ctx.lr = 0x831672D0;
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

__attribute__((alias("__imp__sub_831672E8"))) PPC_WEAK_FUNC(sub_831672E8);
PPC_FUNC_IMPL(__imp__sub_831672E8) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r31,9744
	ctx.r30.s64 = ctx.r31.s64 + 9744;
	// addi r5,r11,-31660
	ctx.r5.s64 = ctx.r11.s64 + -31660;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x83167318;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,9744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9744, ctx.r10.u32);
	// addi r3,r11,-11912
	ctx.r3.s64 = ctx.r11.s64 + -11912;
	// bl 0x82a7e6b0
	ctx.lr = 0x83167338;
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

__attribute__((alias("__imp__sub_83167350"))) PPC_WEAK_FUNC(sub_83167350);
PPC_FUNC_IMPL(__imp__sub_83167350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-11872
	ctx.r3.s64 = ctx.r11.s64 + -11872;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83167360"))) PPC_WEAK_FUNC(sub_83167360);
PPC_FUNC_IMPL(__imp__sub_83167360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,15916
	ctx.r3.s64 = ctx.r11.s64 + 15916;
	// bl 0x82e73af8
	ctx.lr = 0x83167378;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167390"))) PPC_WEAK_FUNC(sub_83167390);
PPC_FUNC_IMPL(__imp__sub_83167390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31628
	ctx.r3.s64 = ctx.r11.s64 + -31628;
	// bl 0x82e73af8
	ctx.lr = 0x831673A8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831673C0"))) PPC_WEAK_FUNC(sub_831673C0);
PPC_FUNC_IMPL(__imp__sub_831673C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31604
	ctx.r3.s64 = ctx.r11.s64 + -31604;
	// bl 0x82e73af8
	ctx.lr = 0x831673D8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831673F0"))) PPC_WEAK_FUNC(sub_831673F0);
PPC_FUNC_IMPL(__imp__sub_831673F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31584
	ctx.r3.s64 = ctx.r11.s64 + -31584;
	// bl 0x82e73af8
	ctx.lr = 0x83167408;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167420"))) PPC_WEAK_FUNC(sub_83167420);
PPC_FUNC_IMPL(__imp__sub_83167420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31564
	ctx.r3.s64 = ctx.r11.s64 + -31564;
	// bl 0x82e73af8
	ctx.lr = 0x83167438;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167450"))) PPC_WEAK_FUNC(sub_83167450);
PPC_FUNC_IMPL(__imp__sub_83167450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31544
	ctx.r3.s64 = ctx.r11.s64 + -31544;
	// bl 0x82e73af8
	ctx.lr = 0x83167468;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167480"))) PPC_WEAK_FUNC(sub_83167480);
PPC_FUNC_IMPL(__imp__sub_83167480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31536
	ctx.r3.s64 = ctx.r11.s64 + -31536;
	// bl 0x82e73af8
	ctx.lr = 0x83167498;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831674B0"))) PPC_WEAK_FUNC(sub_831674B0);
PPC_FUNC_IMPL(__imp__sub_831674B0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31496
	ctx.r3.s64 = ctx.r11.s64 + -31496;
	// bl 0x82e73af8
	ctx.lr = 0x831674CC;
	sub_82E73AF8(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r31,r10,9908
	ctx.r31.s64 = ctx.r10.s64 + 9908;
	// addi r3,r9,-31516
	ctx.r3.s64 = ctx.r9.s64 + -31516;
	// stw r11,9908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9908, ctx.r11.u32);
	// bl 0x82e73af8
	ctx.lr = 0x831674E8;
	sub_82E73AF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83167500"))) PPC_WEAK_FUNC(sub_83167500);
PPC_FUNC_IMPL(__imp__sub_83167500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31476
	ctx.r3.s64 = ctx.r11.s64 + -31476;
	// bl 0x82e73af8
	ctx.lr = 0x83167518;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9880(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167530"))) PPC_WEAK_FUNC(sub_83167530);
PPC_FUNC_IMPL(__imp__sub_83167530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31464
	ctx.r3.s64 = ctx.r11.s64 + -31464;
	// bl 0x82e73af8
	ctx.lr = 0x83167548;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167560"))) PPC_WEAK_FUNC(sub_83167560);
PPC_FUNC_IMPL(__imp__sub_83167560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31452
	ctx.r3.s64 = ctx.r11.s64 + -31452;
	// bl 0x82e73af8
	ctx.lr = 0x83167578;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167590"))) PPC_WEAK_FUNC(sub_83167590);
PPC_FUNC_IMPL(__imp__sub_83167590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31428
	ctx.r3.s64 = ctx.r11.s64 + -31428;
	// bl 0x82e73af8
	ctx.lr = 0x831675A8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831675C0"))) PPC_WEAK_FUNC(sub_831675C0);
PPC_FUNC_IMPL(__imp__sub_831675C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,-31404
	ctx.r4.s64 = ctx.r11.s64 + -31404;
	// addi r3,r10,9224
	ctx.r3.s64 = ctx.r10.s64 + 9224;
	// bl 0x82450f48
	ctx.lr = 0x831675E0;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-11856
	ctx.r3.s64 = ctx.r11.s64 + -11856;
	// bl 0x82a7e6b0
	ctx.lr = 0x831675EC;
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

__attribute__((alias("__imp__sub_83167600"))) PPC_WEAK_FUNC(sub_83167600);
PPC_FUNC_IMPL(__imp__sub_83167600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31396
	ctx.r3.s64 = ctx.r11.s64 + -31396;
	// bl 0x82e73af8
	ctx.lr = 0x83167618;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167630"))) PPC_WEAK_FUNC(sub_83167630);
PPC_FUNC_IMPL(__imp__sub_83167630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31380
	ctx.r3.s64 = ctx.r11.s64 + -31380;
	// bl 0x82e73af8
	ctx.lr = 0x83167648;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167660"))) PPC_WEAK_FUNC(sub_83167660);
PPC_FUNC_IMPL(__imp__sub_83167660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31364
	ctx.r3.s64 = ctx.r11.s64 + -31364;
	// bl 0x82e73af8
	ctx.lr = 0x83167678;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167690"))) PPC_WEAK_FUNC(sub_83167690);
PPC_FUNC_IMPL(__imp__sub_83167690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31352
	ctx.r3.s64 = ctx.r11.s64 + -31352;
	// bl 0x82e73af8
	ctx.lr = 0x831676A8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831676C0"))) PPC_WEAK_FUNC(sub_831676C0);
PPC_FUNC_IMPL(__imp__sub_831676C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31332
	ctx.r3.s64 = ctx.r11.s64 + -31332;
	// bl 0x82e73af8
	ctx.lr = 0x831676D8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831676F0"))) PPC_WEAK_FUNC(sub_831676F0);
PPC_FUNC_IMPL(__imp__sub_831676F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31312
	ctx.r3.s64 = ctx.r11.s64 + -31312;
	// bl 0x82e73af8
	ctx.lr = 0x83167708;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167720"))) PPC_WEAK_FUNC(sub_83167720);
PPC_FUNC_IMPL(__imp__sub_83167720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31300
	ctx.r3.s64 = ctx.r11.s64 + -31300;
	// bl 0x82e73af8
	ctx.lr = 0x83167738;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167750"))) PPC_WEAK_FUNC(sub_83167750);
PPC_FUNC_IMPL(__imp__sub_83167750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31288
	ctx.r3.s64 = ctx.r11.s64 + -31288;
	// bl 0x82e73af8
	ctx.lr = 0x83167768;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167780"))) PPC_WEAK_FUNC(sub_83167780);
PPC_FUNC_IMPL(__imp__sub_83167780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31276
	ctx.r3.s64 = ctx.r11.s64 + -31276;
	// bl 0x82e73af8
	ctx.lr = 0x83167798;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831677B0"))) PPC_WEAK_FUNC(sub_831677B0);
PPC_FUNC_IMPL(__imp__sub_831677B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31264
	ctx.r3.s64 = ctx.r11.s64 + -31264;
	// bl 0x82e73af8
	ctx.lr = 0x831677C8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9876(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831677E0"))) PPC_WEAK_FUNC(sub_831677E0);
PPC_FUNC_IMPL(__imp__sub_831677E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31252
	ctx.r3.s64 = ctx.r11.s64 + -31252;
	// bl 0x82e73af8
	ctx.lr = 0x831677F8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167810"))) PPC_WEAK_FUNC(sub_83167810);
PPC_FUNC_IMPL(__imp__sub_83167810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31240
	ctx.r3.s64 = ctx.r11.s64 + -31240;
	// bl 0x82e73af8
	ctx.lr = 0x83167828;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9588, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167840"))) PPC_WEAK_FUNC(sub_83167840);
PPC_FUNC_IMPL(__imp__sub_83167840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31224
	ctx.r3.s64 = ctx.r11.s64 + -31224;
	// bl 0x82e73af8
	ctx.lr = 0x83167858;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167870"))) PPC_WEAK_FUNC(sub_83167870);
PPC_FUNC_IMPL(__imp__sub_83167870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31212
	ctx.r3.s64 = ctx.r11.s64 + -31212;
	// bl 0x82e73af8
	ctx.lr = 0x83167888;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9596, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831678A0"))) PPC_WEAK_FUNC(sub_831678A0);
PPC_FUNC_IMPL(__imp__sub_831678A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31196
	ctx.r3.s64 = ctx.r11.s64 + -31196;
	// bl 0x82e73af8
	ctx.lr = 0x831678B8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831678D0"))) PPC_WEAK_FUNC(sub_831678D0);
PPC_FUNC_IMPL(__imp__sub_831678D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31180
	ctx.r3.s64 = ctx.r11.s64 + -31180;
	// bl 0x82e73af8
	ctx.lr = 0x831678E8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167900"))) PPC_WEAK_FUNC(sub_83167900);
PPC_FUNC_IMPL(__imp__sub_83167900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31160
	ctx.r3.s64 = ctx.r11.s64 + -31160;
	// bl 0x82e73af8
	ctx.lr = 0x83167918;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9584, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167930"))) PPC_WEAK_FUNC(sub_83167930);
PPC_FUNC_IMPL(__imp__sub_83167930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21800
	ctx.r3.s64 = ctx.r11.s64 + 21800;
	// bl 0x82e73af8
	ctx.lr = 0x83167948;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167960"))) PPC_WEAK_FUNC(sub_83167960);
PPC_FUNC_IMPL(__imp__sub_83167960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21808
	ctx.r3.s64 = ctx.r11.s64 + 21808;
	// bl 0x82e73af8
	ctx.lr = 0x83167978;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167990"))) PPC_WEAK_FUNC(sub_83167990);
PPC_FUNC_IMPL(__imp__sub_83167990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31140
	ctx.r3.s64 = ctx.r11.s64 + -31140;
	// bl 0x82e73af8
	ctx.lr = 0x831679A8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9500, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831679C0"))) PPC_WEAK_FUNC(sub_831679C0);
PPC_FUNC_IMPL(__imp__sub_831679C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,-30900
	ctx.r4.s64 = ctx.r11.s64 + -30900;
	// addi r3,r10,9312
	ctx.r3.s64 = ctx.r10.s64 + 9312;
	// bl 0x82450f48
	ctx.lr = 0x831679E0;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-11832
	ctx.r3.s64 = ctx.r11.s64 + -11832;
	// bl 0x82a7e6b0
	ctx.lr = 0x831679EC;
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

__attribute__((alias("__imp__sub_83167A00"))) PPC_WEAK_FUNC(sub_83167A00);
PPC_FUNC_IMPL(__imp__sub_83167A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,-31404
	ctx.r4.s64 = ctx.r11.s64 + -31404;
	// addi r3,r10,9712
	ctx.r3.s64 = ctx.r10.s64 + 9712;
	// bl 0x82450f48
	ctx.lr = 0x83167A20;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-11808
	ctx.r3.s64 = ctx.r11.s64 + -11808;
	// bl 0x82a7e6b0
	ctx.lr = 0x83167A2C;
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

__attribute__((alias("__imp__sub_83167A40"))) PPC_WEAK_FUNC(sub_83167A40);
PPC_FUNC_IMPL(__imp__sub_83167A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-11760
	ctx.r3.s64 = ctx.r11.s64 + -11760;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83167A50"))) PPC_WEAK_FUNC(sub_83167A50);
PPC_FUNC_IMPL(__imp__sub_83167A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,10512
	ctx.r9.s64 = ctx.r11.s64 + 10512;
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

__attribute__((alias("__imp__sub_83167A80"))) PPC_WEAK_FUNC(sub_83167A80);
PPC_FUNC_IMPL(__imp__sub_83167A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,10416
	ctx.r9.s64 = ctx.r11.s64 + 10416;
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

__attribute__((alias("__imp__sub_83167AB0"))) PPC_WEAK_FUNC(sub_83167AB0);
PPC_FUNC_IMPL(__imp__sub_83167AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,10256
	ctx.r9.s64 = ctx.r11.s64 + 10256;
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

__attribute__((alias("__imp__sub_83167AE0"))) PPC_WEAK_FUNC(sub_83167AE0);
PPC_FUNC_IMPL(__imp__sub_83167AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,10400
	ctx.r9.s64 = ctx.r11.s64 + 10400;
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

__attribute__((alias("__imp__sub_83167B10"))) PPC_WEAK_FUNC(sub_83167B10);
PPC_FUNC_IMPL(__imp__sub_83167B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,10352
	ctx.r10.s64 = ctx.r10.s64 + 10352;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167B30"))) PPC_WEAK_FUNC(sub_83167B30);
PPC_FUNC_IMPL(__imp__sub_83167B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,10208
	ctx.r10.s64 = ctx.r10.s64 + 10208;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167B50"))) PPC_WEAK_FUNC(sub_83167B50);
PPC_FUNC_IMPL(__imp__sub_83167B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,10480
	ctx.r10.s64 = ctx.r10.s64 + 10480;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167B70"))) PPC_WEAK_FUNC(sub_83167B70);
PPC_FUNC_IMPL(__imp__sub_83167B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,10584
	ctx.r3.s64 = ctx.r11.s64 + 10584;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83167B80"))) PPC_WEAK_FUNC(sub_83167B80);
PPC_FUNC_IMPL(__imp__sub_83167B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,1840
	ctx.r3.s64 = ctx.r11.s64 + 1840;
	// bl 0x82e73af8
	ctx.lr = 0x83167B98;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10396, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167BB0"))) PPC_WEAK_FUNC(sub_83167BB0);
PPC_FUNC_IMPL(__imp__sub_83167BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,1828
	ctx.r3.s64 = ctx.r11.s64 + 1828;
	// bl 0x82e73af8
	ctx.lr = 0x83167BC8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167BE0"))) PPC_WEAK_FUNC(sub_83167BE0);
PPC_FUNC_IMPL(__imp__sub_83167BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5384
	ctx.r3.s64 = ctx.r11.s64 + -5384;
	// bl 0x82e73af8
	ctx.lr = 0x83167BF8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167C10"))) PPC_WEAK_FUNC(sub_83167C10);
PPC_FUNC_IMPL(__imp__sub_83167C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5372
	ctx.r3.s64 = ctx.r11.s64 + -5372;
	// bl 0x82e73af8
	ctx.lr = 0x83167C28;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10324, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167C40"))) PPC_WEAK_FUNC(sub_83167C40);
PPC_FUNC_IMPL(__imp__sub_83167C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21344
	ctx.r3.s64 = ctx.r11.s64 + 21344;
	// bl 0x82e73af8
	ctx.lr = 0x83167C58;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167C70"))) PPC_WEAK_FUNC(sub_83167C70);
PPC_FUNC_IMPL(__imp__sub_83167C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21356
	ctx.r3.s64 = ctx.r11.s64 + 21356;
	// bl 0x82e73af8
	ctx.lr = 0x83167C88;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167CA0"))) PPC_WEAK_FUNC(sub_83167CA0);
PPC_FUNC_IMPL(__imp__sub_83167CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5360
	ctx.r3.s64 = ctx.r11.s64 + -5360;
	// bl 0x82e73af8
	ctx.lr = 0x83167CB8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167CD0"))) PPC_WEAK_FUNC(sub_83167CD0);
PPC_FUNC_IMPL(__imp__sub_83167CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31464
	ctx.r3.s64 = ctx.r11.s64 + -31464;
	// bl 0x82e73af8
	ctx.lr = 0x83167CE8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167D00"))) PPC_WEAK_FUNC(sub_83167D00);
PPC_FUNC_IMPL(__imp__sub_83167D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5348
	ctx.r3.s64 = ctx.r11.s64 + -5348;
	// bl 0x82e73af8
	ctx.lr = 0x83167D18;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167D30"))) PPC_WEAK_FUNC(sub_83167D30);
PPC_FUNC_IMPL(__imp__sub_83167D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,11660
	ctx.r4.s64 = ctx.r11.s64 + 11660;
	// addi r3,r10,10240
	ctx.r3.s64 = ctx.r10.s64 + 10240;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// bl 0x824d85b8
	ctx.lr = 0x83167D54;
	sub_824D85B8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-11728
	ctx.r3.s64 = ctx.r11.s64 + -11728;
	// bl 0x82a7e6b0
	ctx.lr = 0x83167D60;
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

__attribute__((alias("__imp__sub_83167D70"))) PPC_WEAK_FUNC(sub_83167D70);
PPC_FUNC_IMPL(__imp__sub_83167D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5060
	ctx.r3.s64 = ctx.r11.s64 + -5060;
	// bl 0x82e73af8
	ctx.lr = 0x83167D88;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167DA0"))) PPC_WEAK_FUNC(sub_83167DA0);
PPC_FUNC_IMPL(__imp__sub_83167DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5044
	ctx.r3.s64 = ctx.r11.s64 + -5044;
	// bl 0x82e73af8
	ctx.lr = 0x83167DB8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167DD0"))) PPC_WEAK_FUNC(sub_83167DD0);
PPC_FUNC_IMPL(__imp__sub_83167DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5028
	ctx.r3.s64 = ctx.r11.s64 + -5028;
	// bl 0x82e73af8
	ctx.lr = 0x83167DE8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167E00"))) PPC_WEAK_FUNC(sub_83167E00);
PPC_FUNC_IMPL(__imp__sub_83167E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5012
	ctx.r3.s64 = ctx.r11.s64 + -5012;
	// bl 0x82e73af8
	ctx.lr = 0x83167E18;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167E30"))) PPC_WEAK_FUNC(sub_83167E30);
PPC_FUNC_IMPL(__imp__sub_83167E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-4996
	ctx.r3.s64 = ctx.r11.s64 + -4996;
	// bl 0x82e73af8
	ctx.lr = 0x83167E48;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167E60"))) PPC_WEAK_FUNC(sub_83167E60);
PPC_FUNC_IMPL(__imp__sub_83167E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-4980
	ctx.r3.s64 = ctx.r11.s64 + -4980;
	// bl 0x82e73af8
	ctx.lr = 0x83167E78;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167E90"))) PPC_WEAK_FUNC(sub_83167E90);
PPC_FUNC_IMPL(__imp__sub_83167E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-4964
	ctx.r3.s64 = ctx.r11.s64 + -4964;
	// bl 0x82e73af8
	ctx.lr = 0x83167EA8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167EC0"))) PPC_WEAK_FUNC(sub_83167EC0);
PPC_FUNC_IMPL(__imp__sub_83167EC0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,26036
	ctx.r3.s64 = ctx.r11.s64 + 26036;
	// bl 0x82e73ab0
	ctx.lr = 0x83167EDC;
	sub_82E73AB0(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,9936
	ctx.r31.s64 = ctx.r10.s64 + 9936;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r3,9936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9936, ctx.r3.u32);
	// addi r3,r9,-6932
	ctx.r3.s64 = ctx.r9.s64 + -6932;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82e73ab0
	ctx.lr = 0x83167EFC;
	sub_82E73AB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r3,r10,-4380
	ctx.r3.s64 = ctx.r10.s64 + -4380;
	// bl 0x82e73ab0
	ctx.lr = 0x83167F14;
	sub_82E73AB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r3,r10,-4400
	ctx.r3.s64 = ctx.r10.s64 + -4400;
	// bl 0x82e73ab0
	ctx.lr = 0x83167F2C;
	sub_82E73AB0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r3,r10,-4416
	ctx.r3.s64 = ctx.r10.s64 + -4416;
	// bl 0x82e73ab0
	ctx.lr = 0x83167F44;
	sub_82E73AB0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r3,r10,-4436
	ctx.r3.s64 = ctx.r10.s64 + -4436;
	// bl 0x82e73ab0
	ctx.lr = 0x83167F5C;
	sub_82E73AB0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-4464
	ctx.r3.s64 = ctx.r10.s64 + -4464;
	// bl 0x82e73ab0
	ctx.lr = 0x83167F74;
	sub_82E73AB0(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r3,r10,-4484
	ctx.r3.s64 = ctx.r10.s64 + -4484;
	// bl 0x82e73ab0
	ctx.lr = 0x83167F8C;
	sub_82E73AB0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r3,r10,-17112
	ctx.r3.s64 = ctx.r10.s64 + -17112;
	// bl 0x82e73ab0
	ctx.lr = 0x83167FA4;
	sub_82E73AB0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r3,r10,-17136
	ctx.r3.s64 = ctx.r10.s64 + -17136;
	// bl 0x82e73ab0
	ctx.lr = 0x83167FBC;
	sub_82E73AB0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r10,-4504
	ctx.r3.s64 = ctx.r10.s64 + -4504;
	// bl 0x82e73ab0
	ctx.lr = 0x83167FD4;
	sub_82E73AB0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r3,r10,-4528
	ctx.r3.s64 = ctx.r10.s64 + -4528;
	// bl 0x82e73ab0
	ctx.lr = 0x83167FEC;
	sub_82E73AB0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-4552
	ctx.r3.s64 = ctx.r10.s64 + -4552;
	// bl 0x82e73ab0
	ctx.lr = 0x83168004;
	sub_82E73AB0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r3,r10,-4576
	ctx.r3.s64 = ctx.r10.s64 + -4576;
	// bl 0x82e73ab0
	ctx.lr = 0x8316801C;
	sub_82E73AB0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-4600
	ctx.r3.s64 = ctx.r10.s64 + -4600;
	// bl 0x82e73ab0
	ctx.lr = 0x83168034;
	sub_82E73AB0(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// addi r3,r10,-4624
	ctx.r3.s64 = ctx.r10.s64 + -4624;
	// bl 0x82e73ab0
	ctx.lr = 0x8316804C;
	sub_82E73AB0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// addi r3,r10,-4644
	ctx.r3.s64 = ctx.r10.s64 + -4644;
	// bl 0x82e73ab0
	ctx.lr = 0x83168064;
	sub_82E73AB0(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r3,r10,14048
	ctx.r3.s64 = ctx.r10.s64 + 14048;
	// bl 0x82e73ab0
	ctx.lr = 0x8316807C;
	sub_82E73AB0(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r3,r10,-4668
	ctx.r3.s64 = ctx.r10.s64 + -4668;
	// bl 0x82e73ab0
	ctx.lr = 0x83168094;
	sub_82E73AB0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// addi r3,r10,-4696
	ctx.r3.s64 = ctx.r10.s64 + -4696;
	// bl 0x82e73ab0
	ctx.lr = 0x831680AC;
	sub_82E73AB0(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// addi r3,r10,-4728
	ctx.r3.s64 = ctx.r10.s64 + -4728;
	// bl 0x82e73ab0
	ctx.lr = 0x831680C4;
	sub_82E73AB0(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// addi r3,r10,-4744
	ctx.r3.s64 = ctx.r10.s64 + -4744;
	// bl 0x82e73ab0
	ctx.lr = 0x831680DC;
	sub_82E73AB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// addi r3,r10,-4768
	ctx.r3.s64 = ctx.r10.s64 + -4768;
	// bl 0x82e73ab0
	ctx.lr = 0x831680F4;
	sub_82E73AB0(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-4792
	ctx.r3.s64 = ctx.r11.s64 + -4792;
	// bl 0x82e73ab0
	ctx.lr = 0x8316810C;
	sub_82E73AB0(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// addi r3,r10,-4820
	ctx.r3.s64 = ctx.r10.s64 + -4820;
	// bl 0x82e73ab0
	ctx.lr = 0x83168124;
	sub_82E73AB0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r3,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// addi r3,r10,-4848
	ctx.r3.s64 = ctx.r10.s64 + -4848;
	// bl 0x82e73ab0
	ctx.lr = 0x8316813C;
	sub_82E73AB0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// addi r3,r10,-4872
	ctx.r3.s64 = ctx.r10.s64 + -4872;
	// bl 0x82e73ab0
	ctx.lr = 0x83168154;
	sub_82E73AB0(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// addi r3,r10,-4896
	ctx.r3.s64 = ctx.r10.s64 + -4896;
	// bl 0x82e73ab0
	ctx.lr = 0x8316816C;
	sub_82E73AB0(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// addi r3,r10,-4920
	ctx.r3.s64 = ctx.r10.s64 + -4920;
	// bl 0x82e73ab0
	ctx.lr = 0x83168184;
	sub_82E73AB0(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// addi r3,r10,-4944
	ctx.r3.s64 = ctx.r10.s64 + -4944;
	// bl 0x82e73ab0
	ctx.lr = 0x8316819C;
	sub_82E73AB0(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r3,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831681C0"))) PPC_WEAK_FUNC(sub_831681C0);
PPC_FUNC_IMPL(__imp__sub_831681C0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-4016
	ctx.r3.s64 = ctx.r11.s64 + -4016;
	// bl 0x82e73ab0
	ctx.lr = 0x831681DC;
	sub_82E73AB0(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,11208
	ctx.r31.s64 = ctx.r10.s64 + 11208;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r3,11208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11208, ctx.r3.u32);
	// addi r3,r9,-4040
	ctx.r3.s64 = ctx.r9.s64 + -4040;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82e73ab0
	ctx.lr = 0x831681FC;
	sub_82E73AB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r3,r10,-4064
	ctx.r3.s64 = ctx.r10.s64 + -4064;
	// bl 0x82e73ab0
	ctx.lr = 0x83168214;
	sub_82E73AB0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r3,r10,-4092
	ctx.r3.s64 = ctx.r10.s64 + -4092;
	// bl 0x82e73ab0
	ctx.lr = 0x8316822C;
	sub_82E73AB0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r3,r10,-4116
	ctx.r3.s64 = ctx.r10.s64 + -4116;
	// bl 0x82e73ab0
	ctx.lr = 0x83168244;
	sub_82E73AB0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r3,r10,-4144
	ctx.r3.s64 = ctx.r10.s64 + -4144;
	// bl 0x82e73ab0
	ctx.lr = 0x8316825C;
	sub_82E73AB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-11992
	ctx.r3.s64 = ctx.r10.s64 + -11992;
	// bl 0x82e73ab0
	ctx.lr = 0x83168274;
	sub_82E73AB0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r3,r10,-4164
	ctx.r3.s64 = ctx.r10.s64 + -4164;
	// bl 0x82e73ab0
	ctx.lr = 0x8316828C;
	sub_82E73AB0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r3,r10,7908
	ctx.r3.s64 = ctx.r10.s64 + 7908;
	// bl 0x82e73ab0
	ctx.lr = 0x831682A4;
	sub_82E73AB0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r3,r10,-4192
	ctx.r3.s64 = ctx.r10.s64 + -4192;
	// bl 0x82e73ab0
	ctx.lr = 0x831682BC;
	sub_82E73AB0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r10,-4216
	ctx.r3.s64 = ctx.r10.s64 + -4216;
	// bl 0x82e73ab0
	ctx.lr = 0x831682D4;
	sub_82E73AB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r3,r10,-4244
	ctx.r3.s64 = ctx.r10.s64 + -4244;
	// bl 0x82e73ab0
	ctx.lr = 0x831682EC;
	sub_82E73AB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-17260
	ctx.r3.s64 = ctx.r10.s64 + -17260;
	// bl 0x82e73ab0
	ctx.lr = 0x83168304;
	sub_82E73AB0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r3,r10,-4276
	ctx.r3.s64 = ctx.r10.s64 + -4276;
	// bl 0x82e73ab0
	ctx.lr = 0x8316831C;
	sub_82E73AB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-4300
	ctx.r3.s64 = ctx.r10.s64 + -4300;
	// bl 0x82e73ab0
	ctx.lr = 0x83168334;
	sub_82E73AB0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// addi r3,r10,-4324
	ctx.r3.s64 = ctx.r10.s64 + -4324;
	// bl 0x82e73ab0
	ctx.lr = 0x8316834C;
	sub_82E73AB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// addi r3,r10,-4344
	ctx.r3.s64 = ctx.r10.s64 + -4344;
	// bl 0x82e73ab0
	ctx.lr = 0x83168364;
	sub_82E73AB0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r3,r10,-4368
	ctx.r3.s64 = ctx.r10.s64 + -4368;
	// bl 0x82e73ab0
	ctx.lr = 0x8316837C;
	sub_82E73AB0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831683A0"))) PPC_WEAK_FUNC(sub_831683A0);
PPC_FUNC_IMPL(__imp__sub_831683A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3988
	ctx.r3.s64 = ctx.r11.s64 + -3988;
	// bl 0x82e73af8
	ctx.lr = 0x831683B8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10500, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831683D0"))) PPC_WEAK_FUNC(sub_831683D0);
PPC_FUNC_IMPL(__imp__sub_831683D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3972
	ctx.r3.s64 = ctx.r11.s64 + -3972;
	// bl 0x82e73af8
	ctx.lr = 0x831683E8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168400"))) PPC_WEAK_FUNC(sub_83168400);
PPC_FUNC_IMPL(__imp__sub_83168400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3956
	ctx.r3.s64 = ctx.r11.s64 + -3956;
	// bl 0x82e73af8
	ctx.lr = 0x83168418;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168430"))) PPC_WEAK_FUNC(sub_83168430);
PPC_FUNC_IMPL(__imp__sub_83168430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-18968
	ctx.r3.s64 = ctx.r11.s64 + -18968;
	// bl 0x82e73af8
	ctx.lr = 0x83168448;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10580, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168460"))) PPC_WEAK_FUNC(sub_83168460);
PPC_FUNC_IMPL(__imp__sub_83168460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3940
	ctx.r3.s64 = ctx.r11.s64 + -3940;
	// bl 0x82e73af8
	ctx.lr = 0x83168478;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168490"))) PPC_WEAK_FUNC(sub_83168490);
PPC_FUNC_IMPL(__imp__sub_83168490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3924
	ctx.r3.s64 = ctx.r11.s64 + -3924;
	// bl 0x82e73af8
	ctx.lr = 0x831684A8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831684C0"))) PPC_WEAK_FUNC(sub_831684C0);
PPC_FUNC_IMPL(__imp__sub_831684C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3912
	ctx.r3.s64 = ctx.r11.s64 + -3912;
	// bl 0x82e73af8
	ctx.lr = 0x831684D8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831684F0"))) PPC_WEAK_FUNC(sub_831684F0);
PPC_FUNC_IMPL(__imp__sub_831684F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3896
	ctx.r3.s64 = ctx.r11.s64 + -3896;
	// bl 0x82e73af8
	ctx.lr = 0x83168508;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168520"))) PPC_WEAK_FUNC(sub_83168520);
PPC_FUNC_IMPL(__imp__sub_83168520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3880
	ctx.r3.s64 = ctx.r11.s64 + -3880;
	// bl 0x82e73af8
	ctx.lr = 0x83168538;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168550"))) PPC_WEAK_FUNC(sub_83168550);
PPC_FUNC_IMPL(__imp__sub_83168550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3868
	ctx.r3.s64 = ctx.r11.s64 + -3868;
	// bl 0x82e73af8
	ctx.lr = 0x83168568;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168580"))) PPC_WEAK_FUNC(sub_83168580);
PPC_FUNC_IMPL(__imp__sub_83168580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3852
	ctx.r3.s64 = ctx.r11.s64 + -3852;
	// bl 0x82e73af8
	ctx.lr = 0x83168598;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831685B0"))) PPC_WEAK_FUNC(sub_831685B0);
PPC_FUNC_IMPL(__imp__sub_831685B0) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r31,10376
	ctx.r30.s64 = ctx.r31.s64 + 10376;
	// addi r4,r11,-3836
	ctx.r4.s64 = ctx.r11.s64 + -3836;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831685DC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-11784
	ctx.r3.s64 = ctx.r9.s64 + -11784;
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,10376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10376, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83168600;
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

__attribute__((alias("__imp__sub_83168618"))) PPC_WEAK_FUNC(sub_83168618);
PPC_FUNC_IMPL(__imp__sub_83168618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x83168620;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32145
	ctx.r10.s64 = -2106654720;
	// addi r30,r11,-12656
	ctx.r30.s64 = ctx.r11.s64 + -12656;
	// addi r11,r10,9376
	ctx.r11.s64 = ctx.r10.s64 + 9376;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83168648;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3432
	ctx.r3.s64 = ctx.r11.s64 + -3432;
	// bl 0x82ca7538
	ctx.lr = 0x83168658;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r28,r11,10664
	ctx.r28.s64 = ctx.r11.s64 + 10664;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r31,10664(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10664, ctx.r31.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r10,3(r28)
	PPC_STORE_U8(ctx.r28.u32 + 3, ctx.r10.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,7(r28)
	PPC_STORE_U8(ctx.r28.u32 + 7, ctx.r10.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r7,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r7.u8);
	// stb r9,5(r28)
	PPC_STORE_U8(ctx.r28.u32 + 5, ctx.r9.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r10,11(r28)
	PPC_STORE_U8(ctx.r28.u32 + 11, ctx.r10.u8);
	// lis r9,-32145
	ctx.r9.s64 = -2106654720;
	// stb r10,15(r28)
	PPC_STORE_U8(ctx.r28.u32 + 15, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r31.u8);
	// addi r10,r9,9376
	ctx.r10.s64 = ctx.r9.s64 + 9376;
	// stb r31,2(r28)
	PPC_STORE_U8(ctx.r28.u32 + 2, ctx.r31.u8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stb r31,6(r28)
	PPC_STORE_U8(ctx.r28.u32 + 6, ctx.r31.u8);
	// stb r31,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r31.u8);
	// stb r31,9(r28)
	PPC_STORE_U8(ctx.r28.u32 + 9, ctx.r31.u8);
	// stb r31,10(r28)
	PPC_STORE_U8(ctx.r28.u32 + 10, ctx.r31.u8);
	// stb r31,12(r28)
	PPC_STORE_U8(ctx.r28.u32 + 12, ctx.r31.u8);
	// stb r31,13(r28)
	PPC_STORE_U8(ctx.r28.u32 + 13, ctx.r31.u8);
	// stb r8,14(r28)
	PPC_STORE_U8(ctx.r28.u32 + 14, ctx.r8.u8);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// std r6,24(r28)
	PPC_STORE_U64(ctx.r28.u32 + 24, ctx.r6.u64);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831686EC;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3460
	ctx.r3.s64 = ctx.r11.s64 + -3460;
	// bl 0x82ca7538
	ctx.lr = 0x831686FC;
	sub_82CA7538(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,33(r28)
	PPC_STORE_U8(ctx.r28.u32 + 33, ctx.r31.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r10,36(r28)
	PPC_STORE_U8(ctx.r28.u32 + 36, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,38(r28)
	PPC_STORE_U8(ctx.r28.u32 + 38, ctx.r10.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,32(r28)
	PPC_STORE_U8(ctx.r28.u32 + 32, ctx.r31.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r11,35(r28)
	PPC_STORE_U8(ctx.r28.u32 + 35, ctx.r11.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r9,39(r28)
	PPC_STORE_U8(ctx.r28.u32 + 39, ctx.r9.u8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,34(r28)
	PPC_STORE_U8(ctx.r28.u32 + 34, ctx.r31.u8);
	// stb r31,37(r28)
	PPC_STORE_U8(ctx.r28.u32 + 37, ctx.r31.u8);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// stb r31,40(r28)
	PPC_STORE_U8(ctx.r28.u32 + 40, ctx.r31.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,41(r28)
	PPC_STORE_U8(ctx.r28.u32 + 41, ctx.r31.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,42(r28)
	PPC_STORE_U8(ctx.r28.u32 + 42, ctx.r31.u8);
	// stb r31,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r31.u8);
	// stb r8,43(r28)
	PPC_STORE_U8(ctx.r28.u32 + 43, ctx.r8.u8);
	// stb r31,45(r28)
	PPC_STORE_U8(ctx.r28.u32 + 45, ctx.r31.u8);
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// stb r8,46(r28)
	PPC_STORE_U8(ctx.r28.u32 + 46, ctx.r8.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,47(r28)
	PPC_STORE_U8(ctx.r28.u32 + 47, ctx.r10.u8);
	// addi r11,r9,-21712
	ctx.r11.s64 = ctx.r9.s64 + -21712;
	// std r7,56(r28)
	PPC_STORE_U64(ctx.r28.u32 + 56, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83168790;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3484
	ctx.r3.s64 = ctx.r11.s64 + -3484;
	// bl 0x82ca7538
	ctx.lr = 0x831687A0;
	sub_82CA7538(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,64(r28)
	PPC_STORE_U8(ctx.r28.u32 + 64, ctx.r31.u8);
	// stb r10,67(r28)
	PPC_STORE_U8(ctx.r28.u32 + 67, ctx.r10.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,65(r28)
	PPC_STORE_U8(ctx.r28.u32 + 65, ctx.r31.u8);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// stb r31,66(r28)
	PPC_STORE_U8(ctx.r28.u32 + 66, ctx.r31.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,69(r28)
	PPC_STORE_U8(ctx.r28.u32 + 69, ctx.r31.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,68(r28)
	PPC_STORE_U8(ctx.r28.u32 + 68, ctx.r9.u8);
	// stb r9,71(r28)
	PPC_STORE_U8(ctx.r28.u32 + 71, ctx.r9.u8);
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// stb r31,70(r28)
	PPC_STORE_U8(ctx.r28.u32 + 70, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,72(r28)
	PPC_STORE_U8(ctx.r28.u32 + 72, ctx.r31.u8);
	// addi r11,r11,-7936
	ctx.r11.s64 = ctx.r11.s64 + -7936;
	// stb r31,73(r28)
	PPC_STORE_U8(ctx.r28.u32 + 73, ctx.r31.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r8,75(r28)
	PPC_STORE_U8(ctx.r28.u32 + 75, ctx.r8.u8);
	// stb r31,74(r28)
	PPC_STORE_U8(ctx.r28.u32 + 74, ctx.r31.u8);
	// stb r10,76(r28)
	PPC_STORE_U8(ctx.r28.u32 + 76, ctx.r10.u8);
	// stb r31,77(r28)
	PPC_STORE_U8(ctx.r28.u32 + 77, ctx.r31.u8);
	// stb r8,78(r28)
	PPC_STORE_U8(ctx.r28.u32 + 78, ctx.r8.u8);
	// stb r10,79(r28)
	PPC_STORE_U8(ctx.r28.u32 + 79, ctx.r10.u8);
	// std r7,88(r28)
	PPC_STORE_U64(ctx.r28.u32 + 88, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316882C;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3500
	ctx.r3.s64 = ctx.r11.s64 + -3500;
	// bl 0x82ca7538
	ctx.lr = 0x8316883C;
	sub_82CA7538(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r8,98(r28)
	PPC_STORE_U8(ctx.r28.u32 + 98, ctx.r8.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,97(r28)
	PPC_STORE_U8(ctx.r28.u32 + 97, ctx.r31.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r9,100(r28)
	PPC_STORE_U8(ctx.r28.u32 + 100, ctx.r9.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r10,96(r28)
	PPC_STORE_U8(ctx.r28.u32 + 96, ctx.r10.u8);
	// stb r9,103(r28)
	PPC_STORE_U8(ctx.r28.u32 + 103, ctx.r9.u8);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,99(r28)
	PPC_STORE_U8(ctx.r28.u32 + 99, ctx.r31.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,101(r28)
	PPC_STORE_U8(ctx.r28.u32 + 101, ctx.r31.u8);
	// stb r31,102(r28)
	PPC_STORE_U8(ctx.r28.u32 + 102, ctx.r31.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,104(r28)
	PPC_STORE_U8(ctx.r28.u32 + 104, ctx.r31.u8);
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// stb r31,105(r28)
	PPC_STORE_U8(ctx.r28.u32 + 105, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,106(r28)
	PPC_STORE_U8(ctx.r28.u32 + 106, ctx.r31.u8);
	// stb r8,107(r28)
	PPC_STORE_U8(ctx.r28.u32 + 107, ctx.r8.u8);
	// stb r31,108(r28)
	PPC_STORE_U8(ctx.r28.u32 + 108, ctx.r31.u8);
	// stb r31,109(r28)
	PPC_STORE_U8(ctx.r28.u32 + 109, ctx.r31.u8);
	// stb r8,110(r28)
	PPC_STORE_U8(ctx.r28.u32 + 110, ctx.r8.u8);
	// stb r10,111(r28)
	PPC_STORE_U8(ctx.r28.u32 + 111, ctx.r10.u8);
	// addi r10,r9,-21648
	ctx.r10.s64 = ctx.r9.s64 + -21648;
	// stw r11,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r11.u32);
	// std r7,120(r28)
	PPC_STORE_U64(ctx.r28.u32 + 120, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831688C8;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3520
	ctx.r3.s64 = ctx.r11.s64 + -3520;
	// bl 0x82ca7538
	ctx.lr = 0x831688D8;
	sub_82CA7538(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,128(r28)
	PPC_STORE_U8(ctx.r28.u32 + 128, ctx.r31.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stb r10,129(r28)
	PPC_STORE_U8(ctx.r28.u32 + 129, ctx.r10.u8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r9,130(r28)
	PPC_STORE_U8(ctx.r28.u32 + 130, ctx.r9.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r10,132(r28)
	PPC_STORE_U8(ctx.r28.u32 + 132, ctx.r10.u8);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// stb r10,135(r28)
	PPC_STORE_U8(ctx.r28.u32 + 135, ctx.r10.u8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,144(r28)
	PPC_STORE_U32(ctx.r28.u32 + 144, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,131(r28)
	PPC_STORE_U8(ctx.r28.u32 + 131, ctx.r31.u8);
	// stb r31,133(r28)
	PPC_STORE_U8(ctx.r28.u32 + 133, ctx.r31.u8);
	// lis r7,-32145
	ctx.r7.s64 = -2106654720;
	// stb r31,134(r28)
	PPC_STORE_U8(ctx.r28.u32 + 134, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,136(r28)
	PPC_STORE_U8(ctx.r28.u32 + 136, ctx.r31.u8);
	// addi r11,r7,-7840
	ctx.r11.s64 = ctx.r7.s64 + -7840;
	// stb r31,138(r28)
	PPC_STORE_U8(ctx.r28.u32 + 138, ctx.r31.u8);
	// stb r31,140(r28)
	PPC_STORE_U8(ctx.r28.u32 + 140, ctx.r31.u8);
	// stb r31,137(r28)
	PPC_STORE_U8(ctx.r28.u32 + 137, ctx.r31.u8);
	// stb r9,139(r28)
	PPC_STORE_U8(ctx.r28.u32 + 139, ctx.r9.u8);
	// stb r31,141(r28)
	PPC_STORE_U8(ctx.r28.u32 + 141, ctx.r31.u8);
	// stb r9,143(r28)
	PPC_STORE_U8(ctx.r28.u32 + 143, ctx.r9.u8);
	// stb r10,142(r28)
	PPC_STORE_U8(ctx.r28.u32 + 142, ctx.r10.u8);
	// std r8,152(r28)
	PPC_STORE_U64(ctx.r28.u32 + 152, ctx.r8.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83168960;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3540
	ctx.r3.s64 = ctx.r11.s64 + -3540;
	// bl 0x82ca7538
	ctx.lr = 0x83168970;
	sub_82CA7538(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// stb r9,161(r28)
	PPC_STORE_U8(ctx.r28.u32 + 161, ctx.r9.u8);
	// stb r10,160(r28)
	PPC_STORE_U8(ctx.r28.u32 + 160, ctx.r10.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r9,164(r28)
	PPC_STORE_U8(ctx.r28.u32 + 164, ctx.r9.u8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r11,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r11.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,162(r28)
	PPC_STORE_U8(ctx.r28.u32 + 162, ctx.r31.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r31,163(r28)
	PPC_STORE_U8(ctx.r28.u32 + 163, ctx.r31.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,165(r28)
	PPC_STORE_U8(ctx.r28.u32 + 165, ctx.r31.u8);
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// stb r31,166(r28)
	PPC_STORE_U8(ctx.r28.u32 + 166, ctx.r31.u8);
	// stb r31,168(r28)
	PPC_STORE_U8(ctx.r28.u32 + 168, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,167(r28)
	PPC_STORE_U8(ctx.r28.u32 + 167, ctx.r31.u8);
	// addi r11,r11,-7728
	ctx.r11.s64 = ctx.r11.s64 + -7728;
	// stb r31,169(r28)
	PPC_STORE_U8(ctx.r28.u32 + 169, ctx.r31.u8);
	// stb r31,170(r28)
	PPC_STORE_U8(ctx.r28.u32 + 170, ctx.r31.u8);
	// stb r31,171(r28)
	PPC_STORE_U8(ctx.r28.u32 + 171, ctx.r31.u8);
	// stb r31,172(r28)
	PPC_STORE_U8(ctx.r28.u32 + 172, ctx.r31.u8);
	// stb r9,173(r28)
	PPC_STORE_U8(ctx.r28.u32 + 173, ctx.r9.u8);
	// stb r8,174(r28)
	PPC_STORE_U8(ctx.r28.u32 + 174, ctx.r8.u8);
	// stb r10,175(r28)
	PPC_STORE_U8(ctx.r28.u32 + 175, ctx.r10.u8);
	// std r7,184(r28)
	PPC_STORE_U64(ctx.r28.u32 + 184, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831689F8;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3556
	ctx.r3.s64 = ctx.r11.s64 + -3556;
	// bl 0x82ca7538
	ctx.lr = 0x83168A08;
	sub_82CA7538(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,193(r28)
	PPC_STORE_U8(ctx.r28.u32 + 193, ctx.r31.u8);
	// stb r10,196(r28)
	PPC_STORE_U8(ctx.r28.u32 + 196, ctx.r10.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,194(r28)
	PPC_STORE_U8(ctx.r28.u32 + 194, ctx.r31.u8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,195(r28)
	PPC_STORE_U8(ctx.r28.u32 + 195, ctx.r31.u8);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// stb r31,197(r28)
	PPC_STORE_U8(ctx.r28.u32 + 197, ctx.r31.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,199(r28)
	PPC_STORE_U8(ctx.r28.u32 + 199, ctx.r31.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,208(r28)
	PPC_STORE_U32(ctx.r28.u32 + 208, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,198(r28)
	PPC_STORE_U8(ctx.r28.u32 + 198, ctx.r9.u8);
	// stb r31,200(r28)
	PPC_STORE_U8(ctx.r28.u32 + 200, ctx.r31.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,192(r28)
	PPC_STORE_U8(ctx.r28.u32 + 192, ctx.r31.u8);
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// stb r31,201(r28)
	PPC_STORE_U8(ctx.r28.u32 + 201, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,202(r28)
	PPC_STORE_U8(ctx.r28.u32 + 202, ctx.r31.u8);
	// addi r11,r9,-21552
	ctx.r11.s64 = ctx.r9.s64 + -21552;
	// stb r31,203(r28)
	PPC_STORE_U8(ctx.r28.u32 + 203, ctx.r31.u8);
	// stb r31,204(r28)
	PPC_STORE_U8(ctx.r28.u32 + 204, ctx.r31.u8);
	// stb r8,205(r28)
	PPC_STORE_U8(ctx.r28.u32 + 205, ctx.r8.u8);
	// stb r31,207(r28)
	PPC_STORE_U8(ctx.r28.u32 + 207, ctx.r31.u8);
	// stb r10,206(r28)
	PPC_STORE_U8(ctx.r28.u32 + 206, ctx.r10.u8);
	// std r7,216(r28)
	PPC_STORE_U64(ctx.r28.u32 + 216, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83168A98;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3576
	ctx.r3.s64 = ctx.r11.s64 + -3576;
	// bl 0x82ca7538
	ctx.lr = 0x83168AA8;
	sub_82CA7538(ctx, base);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,240(r28)
	PPC_STORE_U32(ctx.r28.u32 + 240, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,224(r28)
	PPC_STORE_U8(ctx.r28.u32 + 224, ctx.r31.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,225(r28)
	PPC_STORE_U8(ctx.r28.u32 + 225, ctx.r31.u8);
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// stb r9,228(r28)
	PPC_STORE_U8(ctx.r28.u32 + 228, ctx.r9.u8);
	// stb r10,227(r28)
	PPC_STORE_U8(ctx.r28.u32 + 227, ctx.r10.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r9,231(r28)
	PPC_STORE_U8(ctx.r28.u32 + 231, ctx.r9.u8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,226(r28)
	PPC_STORE_U8(ctx.r28.u32 + 226, ctx.r31.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r31,229(r28)
	PPC_STORE_U8(ctx.r28.u32 + 229, ctx.r31.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,230(r28)
	PPC_STORE_U8(ctx.r28.u32 + 230, ctx.r31.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,232(r28)
	PPC_STORE_U8(ctx.r28.u32 + 232, ctx.r31.u8);
	// addi r11,r11,-21472
	ctx.r11.s64 = ctx.r11.s64 + -21472;
	// stb r31,233(r28)
	PPC_STORE_U8(ctx.r28.u32 + 233, ctx.r31.u8);
	// stb r31,236(r28)
	PPC_STORE_U8(ctx.r28.u32 + 236, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,234(r28)
	PPC_STORE_U8(ctx.r28.u32 + 234, ctx.r31.u8);
	// stb r8,235(r28)
	PPC_STORE_U8(ctx.r28.u32 + 235, ctx.r8.u8);
	// stb r9,237(r28)
	PPC_STORE_U8(ctx.r28.u32 + 237, ctx.r9.u8);
	// stb r8,238(r28)
	PPC_STORE_U8(ctx.r28.u32 + 238, ctx.r8.u8);
	// stb r10,239(r28)
	PPC_STORE_U8(ctx.r28.u32 + 239, ctx.r10.u8);
	// std r7,248(r28)
	PPC_STORE_U64(ctx.r28.u32 + 248, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83168B38;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3600
	ctx.r3.s64 = ctx.r11.s64 + -3600;
	// bl 0x82ca7538
	ctx.lr = 0x83168B48;
	sub_82CA7538(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,256(r28)
	PPC_STORE_U8(ctx.r28.u32 + 256, ctx.r31.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,257(r28)
	PPC_STORE_U8(ctx.r28.u32 + 257, ctx.r31.u8);
	// stb r10,259(r28)
	PPC_STORE_U8(ctx.r28.u32 + 259, ctx.r10.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r9,263(r28)
	PPC_STORE_U8(ctx.r28.u32 + 263, ctx.r9.u8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,258(r28)
	PPC_STORE_U8(ctx.r28.u32 + 258, ctx.r31.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r31,260(r28)
	PPC_STORE_U8(ctx.r28.u32 + 260, ctx.r31.u8);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// stb r31,261(r28)
	PPC_STORE_U8(ctx.r28.u32 + 261, ctx.r31.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,262(r28)
	PPC_STORE_U8(ctx.r28.u32 + 262, ctx.r31.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r8,264(r28)
	PPC_STORE_U8(ctx.r28.u32 + 264, ctx.r8.u8);
	// stb r9,269(r28)
	PPC_STORE_U8(ctx.r28.u32 + 269, ctx.r9.u8);
	// lis r9,-32144
	ctx.r9.s64 = -2106589184;
	// stb r10,271(r28)
	PPC_STORE_U8(ctx.r28.u32 + 271, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,265(r28)
	PPC_STORE_U8(ctx.r28.u32 + 265, ctx.r31.u8);
	// addi r10,r9,4232
	ctx.r10.s64 = ctx.r9.s64 + 4232;
	// stb r31,266(r28)
	PPC_STORE_U8(ctx.r28.u32 + 266, ctx.r31.u8);
	// stb r8,267(r28)
	PPC_STORE_U8(ctx.r28.u32 + 267, ctx.r8.u8);
	// stb r31,268(r28)
	PPC_STORE_U8(ctx.r28.u32 + 268, ctx.r31.u8);
	// stb r8,270(r28)
	PPC_STORE_U8(ctx.r28.u32 + 270, ctx.r8.u8);
	// stw r11,272(r28)
	PPC_STORE_U32(ctx.r28.u32 + 272, ctx.r11.u32);
	// std r7,280(r28)
	PPC_STORE_U64(ctx.r28.u32 + 280, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83168BD8;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3620
	ctx.r3.s64 = ctx.r11.s64 + -3620;
	// bl 0x82ca7538
	ctx.lr = 0x83168BE8;
	sub_82CA7538(ctx, base);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,288(r28)
	PPC_STORE_U8(ctx.r28.u32 + 288, ctx.r31.u8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,289(r28)
	PPC_STORE_U8(ctx.r28.u32 + 289, ctx.r31.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,290(r28)
	PPC_STORE_U8(ctx.r28.u32 + 290, ctx.r31.u8);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// stb r31,291(r28)
	PPC_STORE_U8(ctx.r28.u32 + 291, ctx.r31.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,292(r28)
	PPC_STORE_U8(ctx.r28.u32 + 292, ctx.r31.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,304(r28)
	PPC_STORE_U32(ctx.r28.u32 + 304, ctx.r11.u32);
	// stb r9,299(r28)
	PPC_STORE_U8(ctx.r28.u32 + 299, ctx.r9.u8);
	// lis r11,-32144
	ctx.r11.s64 = -2106589184;
	// stb r10,301(r28)
	PPC_STORE_U8(ctx.r28.u32 + 301, ctx.r10.u8);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stb r31,293(r28)
	PPC_STORE_U8(ctx.r28.u32 + 293, ctx.r31.u8);
	// addi r11,r11,4376
	ctx.r11.s64 = ctx.r11.s64 + 4376;
	// stb r31,294(r28)
	PPC_STORE_U8(ctx.r28.u32 + 294, ctx.r31.u8);
	// addi r3,r10,-6876
	ctx.r3.s64 = ctx.r10.s64 + -6876;
	// stb r31,295(r28)
	PPC_STORE_U8(ctx.r28.u32 + 295, ctx.r31.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r31,296(r28)
	PPC_STORE_U8(ctx.r28.u32 + 296, ctx.r31.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,297(r28)
	PPC_STORE_U8(ctx.r28.u32 + 297, ctx.r31.u8);
	// stb r31,298(r28)
	PPC_STORE_U8(ctx.r28.u32 + 298, ctx.r31.u8);
	// stb r31,300(r28)
	PPC_STORE_U8(ctx.r28.u32 + 300, ctx.r31.u8);
	// stb r31,302(r28)
	PPC_STORE_U8(ctx.r28.u32 + 302, ctx.r31.u8);
	// stb r31,303(r28)
	PPC_STORE_U8(ctx.r28.u32 + 303, ctx.r31.u8);
	// std r7,312(r28)
	PPC_STORE_U64(ctx.r28.u32 + 312, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83168C70;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3648
	ctx.r3.s64 = ctx.r11.s64 + -3648;
	// bl 0x82ca7538
	ctx.lr = 0x83168C80;
	sub_82CA7538(ctx, base);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,320(r28)
	PPC_STORE_U8(ctx.r28.u32 + 320, ctx.r31.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r31,321(r28)
	PPC_STORE_U8(ctx.r28.u32 + 321, ctx.r31.u8);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// stb r31,322(r28)
	PPC_STORE_U8(ctx.r28.u32 + 322, ctx.r31.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r31,323(r28)
	PPC_STORE_U8(ctx.r28.u32 + 323, ctx.r31.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,336(r28)
	PPC_STORE_U32(ctx.r28.u32 + 336, ctx.r11.u32);
	// stb r8,331(r28)
	PPC_STORE_U8(ctx.r28.u32 + 331, ctx.r8.u8);
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// stb r31,324(r28)
	PPC_STORE_U8(ctx.r28.u32 + 324, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,325(r28)
	PPC_STORE_U8(ctx.r28.u32 + 325, ctx.r31.u8);
	// addi r11,r11,-21552
	ctx.r11.s64 = ctx.r11.s64 + -21552;
	// stb r31,326(r28)
	PPC_STORE_U8(ctx.r28.u32 + 326, ctx.r31.u8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,327(r28)
	PPC_STORE_U8(ctx.r28.u32 + 327, ctx.r31.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r31,328(r28)
	PPC_STORE_U8(ctx.r28.u32 + 328, ctx.r31.u8);
	// stb r31,329(r28)
	PPC_STORE_U8(ctx.r28.u32 + 329, ctx.r31.u8);
	// stb r31,330(r28)
	PPC_STORE_U8(ctx.r28.u32 + 330, ctx.r31.u8);
	// stb r31,332(r28)
	PPC_STORE_U8(ctx.r28.u32 + 332, ctx.r31.u8);
	// stb r31,334(r28)
	PPC_STORE_U8(ctx.r28.u32 + 334, ctx.r31.u8);
	// stb r31,335(r28)
	PPC_STORE_U8(ctx.r28.u32 + 335, ctx.r31.u8);
	// stb r9,333(r28)
	PPC_STORE_U8(ctx.r28.u32 + 333, ctx.r9.u8);
	// std r7,344(r28)
	PPC_STORE_U64(ctx.r28.u32 + 344, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83168D00;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3668
	ctx.r3.s64 = ctx.r11.s64 + -3668;
	// bl 0x82ca7538
	ctx.lr = 0x83168D10;
	sub_82CA7538(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,353(r28)
	PPC_STORE_U8(ctx.r28.u32 + 353, ctx.r31.u8);
	// stb r9,354(r28)
	PPC_STORE_U8(ctx.r28.u32 + 354, ctx.r9.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r10,356(r28)
	PPC_STORE_U8(ctx.r28.u32 + 356, ctx.r10.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,355(r28)
	PPC_STORE_U8(ctx.r28.u32 + 355, ctx.r31.u8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,357(r28)
	PPC_STORE_U8(ctx.r28.u32 + 357, ctx.r31.u8);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// stb r31,358(r28)
	PPC_STORE_U8(ctx.r28.u32 + 358, ctx.r31.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,359(r28)
	PPC_STORE_U8(ctx.r28.u32 + 359, ctx.r31.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,368(r28)
	PPC_STORE_U32(ctx.r28.u32 + 368, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r31,360(r28)
	PPC_STORE_U8(ctx.r28.u32 + 360, ctx.r31.u8);
	// stb r10,365(r28)
	PPC_STORE_U8(ctx.r28.u32 + 365, ctx.r10.u8);
	// lis r10,-32145
	ctx.r10.s64 = -2106654720;
	// stb r31,361(r28)
	PPC_STORE_U8(ctx.r28.u32 + 361, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,362(r28)
	PPC_STORE_U8(ctx.r28.u32 + 362, ctx.r31.u8);
	// addi r11,r10,-7624
	ctx.r11.s64 = ctx.r10.s64 + -7624;
	// stb r9,363(r28)
	PPC_STORE_U8(ctx.r28.u32 + 363, ctx.r9.u8);
	// stb r31,352(r28)
	PPC_STORE_U8(ctx.r28.u32 + 352, ctx.r31.u8);
	// stb r31,364(r28)
	PPC_STORE_U8(ctx.r28.u32 + 364, ctx.r31.u8);
	// stb r9,366(r28)
	PPC_STORE_U8(ctx.r28.u32 + 366, ctx.r9.u8);
	// stb r8,367(r28)
	PPC_STORE_U8(ctx.r28.u32 + 367, ctx.r8.u8);
	// std r7,376(r28)
	PPC_STORE_U64(ctx.r28.u32 + 376, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83168DA0;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3688
	ctx.r3.s64 = ctx.r11.s64 + -3688;
	// bl 0x82ca7538
	ctx.lr = 0x83168DB0;
	sub_82CA7538(ctx, base);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,384(r28)
	PPC_STORE_U8(ctx.r28.u32 + 384, ctx.r31.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r31,385(r28)
	PPC_STORE_U8(ctx.r28.u32 + 385, ctx.r31.u8);
	// stb r9,388(r28)
	PPC_STORE_U8(ctx.r28.u32 + 388, ctx.r9.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// stb r31,386(r28)
	PPC_STORE_U8(ctx.r28.u32 + 386, ctx.r31.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r31,387(r28)
	PPC_STORE_U8(ctx.r28.u32 + 387, ctx.r31.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,400(r28)
	PPC_STORE_U32(ctx.r28.u32 + 400, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,389(r28)
	PPC_STORE_U8(ctx.r28.u32 + 389, ctx.r31.u8);
	// stb r9,394(r28)
	PPC_STORE_U8(ctx.r28.u32 + 394, ctx.r9.u8);
	// lis r11,-32144
	ctx.r11.s64 = -2106589184;
	// stb r31,390(r28)
	PPC_STORE_U8(ctx.r28.u32 + 390, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,392(r28)
	PPC_STORE_U8(ctx.r28.u32 + 392, ctx.r31.u8);
	// addi r11,r11,22424
	ctx.r11.s64 = ctx.r11.s64 + 22424;
	// stb r31,391(r28)
	PPC_STORE_U8(ctx.r28.u32 + 391, ctx.r31.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,393(r28)
	PPC_STORE_U8(ctx.r28.u32 + 393, ctx.r31.u8);
	// stb r31,396(r28)
	PPC_STORE_U8(ctx.r28.u32 + 396, ctx.r31.u8);
	// stb r8,395(r28)
	PPC_STORE_U8(ctx.r28.u32 + 395, ctx.r8.u8);
	// stb r31,397(r28)
	PPC_STORE_U8(ctx.r28.u32 + 397, ctx.r31.u8);
	// stb r8,398(r28)
	PPC_STORE_U8(ctx.r28.u32 + 398, ctx.r8.u8);
	// stb r10,399(r28)
	PPC_STORE_U8(ctx.r28.u32 + 399, ctx.r10.u8);
	// std r7,408(r28)
	PPC_STORE_U64(ctx.r28.u32 + 408, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83168E3C;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3716
	ctx.r3.s64 = ctx.r11.s64 + -3716;
	// bl 0x82ca7538
	ctx.lr = 0x83168E4C;
	sub_82CA7538(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,416(r28)
	PPC_STORE_U8(ctx.r28.u32 + 416, ctx.r31.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,417(r28)
	PPC_STORE_U8(ctx.r28.u32 + 417, ctx.r31.u8);
	// stb r10,419(r28)
	PPC_STORE_U8(ctx.r28.u32 + 419, ctx.r10.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r9,423(r28)
	PPC_STORE_U8(ctx.r28.u32 + 423, ctx.r9.u8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,418(r28)
	PPC_STORE_U8(ctx.r28.u32 + 418, ctx.r31.u8);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// stb r31,420(r28)
	PPC_STORE_U8(ctx.r28.u32 + 420, ctx.r31.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r31,421(r28)
	PPC_STORE_U8(ctx.r28.u32 + 421, ctx.r31.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,432(r28)
	PPC_STORE_U32(ctx.r28.u32 + 432, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,422(r28)
	PPC_STORE_U8(ctx.r28.u32 + 422, ctx.r31.u8);
	// stb r9,429(r28)
	PPC_STORE_U8(ctx.r28.u32 + 429, ctx.r9.u8);
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// stb r31,424(r28)
	PPC_STORE_U8(ctx.r28.u32 + 424, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,425(r28)
	PPC_STORE_U8(ctx.r28.u32 + 425, ctx.r31.u8);
	// addi r11,r9,-8208
	ctx.r11.s64 = ctx.r9.s64 + -8208;
	// stb r31,426(r28)
	PPC_STORE_U8(ctx.r28.u32 + 426, ctx.r31.u8);
	// stb r31,428(r28)
	PPC_STORE_U8(ctx.r28.u32 + 428, ctx.r31.u8);
	// stb r8,427(r28)
	PPC_STORE_U8(ctx.r28.u32 + 427, ctx.r8.u8);
	// stb r8,430(r28)
	PPC_STORE_U8(ctx.r28.u32 + 430, ctx.r8.u8);
	// stb r10,431(r28)
	PPC_STORE_U8(ctx.r28.u32 + 431, ctx.r10.u8);
	// std r7,440(r28)
	PPC_STORE_U64(ctx.r28.u32 + 440, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83168EDC;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3740
	ctx.r3.s64 = ctx.r11.s64 + -3740;
	// bl 0x82ca7538
	ctx.lr = 0x83168EEC;
	sub_82CA7538(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,449(r28)
	PPC_STORE_U8(ctx.r28.u32 + 449, ctx.r31.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,452(r28)
	PPC_STORE_U8(ctx.r28.u32 + 452, ctx.r10.u8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,450(r28)
	PPC_STORE_U8(ctx.r28.u32 + 450, ctx.r31.u8);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// stb r31,448(r28)
	PPC_STORE_U8(ctx.r28.u32 + 448, ctx.r31.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r31,453(r28)
	PPC_STORE_U8(ctx.r28.u32 + 453, ctx.r31.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,464(r28)
	PPC_STORE_U32(ctx.r28.u32 + 464, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,455(r28)
	PPC_STORE_U8(ctx.r28.u32 + 455, ctx.r31.u8);
	// stb r31,451(r28)
	PPC_STORE_U8(ctx.r28.u32 + 451, ctx.r31.u8);
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// stb r31,456(r28)
	PPC_STORE_U8(ctx.r28.u32 + 456, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,458(r28)
	PPC_STORE_U8(ctx.r28.u32 + 458, ctx.r31.u8);
	// addi r11,r11,-7544
	ctx.r11.s64 = ctx.r11.s64 + -7544;
	// stb r31,454(r28)
	PPC_STORE_U8(ctx.r28.u32 + 454, ctx.r31.u8);
	// stb r31,460(r28)
	PPC_STORE_U8(ctx.r28.u32 + 460, ctx.r31.u8);
	// stb r8,457(r28)
	PPC_STORE_U8(ctx.r28.u32 + 457, ctx.r8.u8);
	// stb r10,459(r28)
	PPC_STORE_U8(ctx.r28.u32 + 459, ctx.r10.u8);
	// stb r8,461(r28)
	PPC_STORE_U8(ctx.r28.u32 + 461, ctx.r8.u8);
	// stb r10,462(r28)
	PPC_STORE_U8(ctx.r28.u32 + 462, ctx.r10.u8);
	// stb r9,463(r28)
	PPC_STORE_U8(ctx.r28.u32 + 463, ctx.r9.u8);
	// std r7,472(r28)
	PPC_STORE_U64(ctx.r28.u32 + 472, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83168F74;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3760
	ctx.r3.s64 = ctx.r11.s64 + -3760;
	// bl 0x82ca7538
	ctx.lr = 0x83168F84;
	sub_82CA7538(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,480(r28)
	PPC_STORE_U8(ctx.r28.u32 + 480, ctx.r31.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,481(r28)
	PPC_STORE_U8(ctx.r28.u32 + 481, ctx.r31.u8);
	// stb r9,484(r28)
	PPC_STORE_U8(ctx.r28.u32 + 484, ctx.r9.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r10,489(r28)
	PPC_STORE_U8(ctx.r28.u32 + 489, ctx.r10.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,482(r28)
	PPC_STORE_U8(ctx.r28.u32 + 482, ctx.r31.u8);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// stb r31,483(r28)
	PPC_STORE_U8(ctx.r28.u32 + 483, ctx.r31.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r31,485(r28)
	PPC_STORE_U8(ctx.r28.u32 + 485, ctx.r31.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,486(r28)
	PPC_STORE_U8(ctx.r28.u32 + 486, ctx.r31.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,487(r28)
	PPC_STORE_U8(ctx.r28.u32 + 487, ctx.r31.u8);
	// stb r31,488(r28)
	PPC_STORE_U8(ctx.r28.u32 + 488, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,490(r28)
	PPC_STORE_U8(ctx.r28.u32 + 490, ctx.r31.u8);
	// stb r8,491(r28)
	PPC_STORE_U8(ctx.r28.u32 + 491, ctx.r8.u8);
	// stb r31,492(r28)
	PPC_STORE_U8(ctx.r28.u32 + 492, ctx.r31.u8);
	// stb r9,493(r28)
	PPC_STORE_U8(ctx.r28.u32 + 493, ctx.r9.u8);
	// stb r8,494(r28)
	PPC_STORE_U8(ctx.r28.u32 + 494, ctx.r8.u8);
	// stb r10,495(r28)
	PPC_STORE_U8(ctx.r28.u32 + 495, ctx.r10.u8);
	// stw r11,496(r28)
	PPC_STORE_U32(ctx.r28.u32 + 496, ctx.r11.u32);
	// std r7,504(r28)
	PPC_STORE_U64(ctx.r28.u32 + 504, ctx.r7.u64);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316900C;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3784
	ctx.r3.s64 = ctx.r11.s64 + -3784;
	// bl 0x82ca7538
	ctx.lr = 0x8316901C;
	sub_82CA7538(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r9,514(r28)
	PPC_STORE_U8(ctx.r28.u32 + 514, ctx.r9.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r9,516(r28)
	PPC_STORE_U8(ctx.r28.u32 + 516, ctx.r9.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,513(r28)
	PPC_STORE_U8(ctx.r28.u32 + 513, ctx.r31.u8);
	// stb r31,515(r28)
	PPC_STORE_U8(ctx.r28.u32 + 515, ctx.r31.u8);
	// stb r31,518(r28)
	PPC_STORE_U8(ctx.r28.u32 + 518, ctx.r31.u8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,517(r28)
	PPC_STORE_U8(ctx.r28.u32 + 517, ctx.r31.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,519(r28)
	PPC_STORE_U8(ctx.r28.u32 + 519, ctx.r31.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,521(r28)
	PPC_STORE_U8(ctx.r28.u32 + 521, ctx.r31.u8);
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | ctx.r30.u64;
	// stb r31,512(r28)
	PPC_STORE_U8(ctx.r28.u32 + 512, ctx.r31.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r31,520(r28)
	PPC_STORE_U8(ctx.r28.u32 + 520, ctx.r31.u8);
	// stb r9,523(r28)
	PPC_STORE_U8(ctx.r28.u32 + 523, ctx.r9.u8);
	// stb r10,524(r28)
	PPC_STORE_U8(ctx.r28.u32 + 524, ctx.r10.u8);
	// stw r11,528(r28)
	PPC_STORE_U32(ctx.r28.u32 + 528, ctx.r11.u32);
	// stb r31,522(r28)
	PPC_STORE_U8(ctx.r28.u32 + 522, ctx.r31.u8);
	// stb r8,525(r28)
	PPC_STORE_U8(ctx.r28.u32 + 525, ctx.r8.u8);
	// stb r9,526(r28)
	PPC_STORE_U8(ctx.r28.u32 + 526, ctx.r9.u8);
	// stb r10,527(r28)
	PPC_STORE_U8(ctx.r28.u32 + 527, ctx.r10.u8);
	// std r7,536(r28)
	PPC_STORE_U64(ctx.r28.u32 + 536, ctx.r7.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83169098"))) PPC_WEAK_FUNC(sub_83169098);
PPC_FUNC_IMPL(__imp__sub_83169098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x831690A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32144
	ctx.r10.s64 = -2106589184;
	// addi r29,r11,-12656
	ctx.r29.s64 = ctx.r11.s64 + -12656;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r10,22416
	ctx.r11.s64 = ctx.r10.s64 + 22416;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831690D0;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2200
	ctx.r3.s64 = ctx.r11.s64 + -2200;
	// bl 0x82ca7538
	ctx.lr = 0x831690E0;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x831690EC;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r28,r3,16,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2216
	ctx.r3.s64 = ctx.r11.s64 + -2216;
	// bl 0x82ca7538
	ctx.lr = 0x831690FC;
	sub_82CA7538(ctx, base);
	// lis r6,-31952
	ctx.r6.s64 = -2094006272;
	// or r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 | ctx.r28.u64;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r28,r6,11352
	ctx.r28.s64 = ctx.r6.s64 + 11352;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r10,-32146
	ctx.r10.s64 = -2106720256;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,11352(r6)
	PPC_STORE_U32(ctx.r6.u32 + 11352, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r10,-22064
	ctx.r10.s64 = ctx.r10.s64 + -22064;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stb r31,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r31.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// std r8,16(r28)
	PPC_STORE_U64(ctx.r28.u32 + 16, ctx.r8.u64);
	// std r7,24(r28)
	PPC_STORE_U64(ctx.r28.u32 + 24, ctx.r7.u64);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169150;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r27,r11,-2248
	ctx.r27.s64 = ctx.r11.s64 + -2248;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169164;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169170;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r26,r3,16,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2276
	ctx.r3.s64 = ctx.r11.s64 + -2276;
	// bl 0x82ca7538
	ctx.lr = 0x83169180;
	sub_82CA7538(ctx, base);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 | ctx.r26.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r30.u32);
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// stw r10,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r31,36(r28)
	PPC_STORE_U8(ctx.r28.u32 + 36, ctx.r31.u8);
	// addi r11,r11,-22064
	ctx.r11.s64 = ctx.r11.s64 + -22064;
	// std r8,48(r28)
	PPC_STORE_U64(ctx.r28.u32 + 48, ctx.r8.u64);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// std r7,56(r28)
	PPC_STORE_U64(ctx.r28.u32 + 56, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831691CC;
	sub_82CA7538(ctx, base);
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca7538
	ctx.lr = 0x831691D8;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x831691E4;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2300
	ctx.r3.s64 = ctx.r11.s64 + -2300;
	// bl 0x82ca7538
	ctx.lr = 0x831691F4;
	sub_82CA7538(ctx, base);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r30.u32);
	// stw r11,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r11.u32);
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// stb r31,68(r28)
	PPC_STORE_U8(ctx.r28.u32 + 68, ctx.r31.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r10.u32);
	// addi r11,r11,9264
	ctx.r11.s64 = ctx.r11.s64 + 9264;
	// std r8,80(r28)
	PPC_STORE_U64(ctx.r28.u32 + 80, ctx.r8.u64);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// std r7,88(r28)
	PPC_STORE_U64(ctx.r28.u32 + 88, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169240;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2328
	ctx.r3.s64 = ctx.r11.s64 + -2328;
	// bl 0x82ca7538
	ctx.lr = 0x83169250;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x8316925C;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2348
	ctx.r3.s64 = ctx.r11.s64 + -2348;
	// bl 0x82ca7538
	ctx.lr = 0x8316926C;
	sub_82CA7538(ctx, base);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r30,108(r28)
	PPC_STORE_U32(ctx.r28.u32 + 108, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r11.u32);
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// stw r31,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r31.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,100(r28)
	PPC_STORE_U8(ctx.r28.u32 + 100, ctx.r31.u8);
	// addi r11,r11,9264
	ctx.r11.s64 = ctx.r11.s64 + 9264;
	// std r8,112(r28)
	PPC_STORE_U64(ctx.r28.u32 + 112, ctx.r8.u64);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// std r7,120(r28)
	PPC_STORE_U64(ctx.r28.u32 + 120, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831692B8;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2372
	ctx.r3.s64 = ctx.r11.s64 + -2372;
	// bl 0x82ca7538
	ctx.lr = 0x831692C8;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x831692D4;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2388
	ctx.r3.s64 = ctx.r11.s64 + -2388;
	// bl 0x82ca7538
	ctx.lr = 0x831692E4;
	sub_82CA7538(ctx, base);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r10,-32145
	ctx.r10.s64 = -2106654720;
	// stw r11,136(r28)
	PPC_STORE_U32(ctx.r28.u32 + 136, ctx.r11.u32);
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// addi r10,r10,9272
	ctx.r10.s64 = ctx.r10.s64 + 9272;
	// stw r31,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r31.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,132(r28)
	PPC_STORE_U8(ctx.r28.u32 + 132, ctx.r31.u8);
	// stw r30,140(r28)
	PPC_STORE_U32(ctx.r28.u32 + 140, ctx.r30.u32);
	// addi r11,r11,-21960
	ctx.r11.s64 = ctx.r11.s64 + -21960;
	// std r8,144(r28)
	PPC_STORE_U64(ctx.r28.u32 + 144, ctx.r8.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r7,152(r28)
	PPC_STORE_U64(ctx.r28.u32 + 152, ctx.r7.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169338;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r27,r11,-2412
	ctx.r27.s64 = ctx.r11.s64 + -2412;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca7538
	ctx.lr = 0x8316934C;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169358;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r26,r3,16,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r25,r11,-2424
	ctx.r25.s64 = ctx.r11.s64 + -2424;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ca7538
	ctx.lr = 0x8316936C;
	sub_82CA7538(ctx, base);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 | ctx.r26.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,172(r28)
	PPC_STORE_U32(ctx.r28.u32 + 172, ctx.r30.u32);
	// stw r11,168(r28)
	PPC_STORE_U32(ctx.r28.u32 + 168, ctx.r11.u32);
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// stw r31,160(r28)
	PPC_STORE_U32(ctx.r28.u32 + 160, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r9,164(r28)
	PPC_STORE_U8(ctx.r28.u32 + 164, ctx.r9.u8);
	// addi r11,r11,9264
	ctx.r11.s64 = ctx.r11.s64 + 9264;
	// std r8,176(r28)
	PPC_STORE_U64(ctx.r28.u32 + 176, ctx.r8.u64);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// std r7,184(r28)
	PPC_STORE_U64(ctx.r28.u32 + 184, ctx.r7.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831693B8;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2452
	ctx.r3.s64 = ctx.r11.s64 + -2452;
	// bl 0x82ca7538
	ctx.lr = 0x831693C8;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x831693D4;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r26,r3,16,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2468
	ctx.r3.s64 = ctx.r11.s64 + -2468;
	// bl 0x82ca7538
	ctx.lr = 0x831693E4;
	sub_82CA7538(ctx, base);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 | ctx.r26.u64;
	// stw r30,204(r28)
	PPC_STORE_U32(ctx.r28.u32 + 204, ctx.r30.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r11,200(r28)
	PPC_STORE_U32(ctx.r28.u32 + 200, ctx.r11.u32);
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// stw r31,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r31.u32);
	// lis r10,-32146
	ctx.r10.s64 = -2106720256;
	// stb r31,196(r28)
	PPC_STORE_U8(ctx.r28.u32 + 196, ctx.r31.u8);
	// addi r11,r11,-22040
	ctx.r11.s64 = ctx.r11.s64 + -22040;
	// std r8,208(r28)
	PPC_STORE_U64(ctx.r28.u32 + 208, ctx.r8.u64);
	// addi r10,r10,-21912
	ctx.r10.s64 = ctx.r10.s64 + -21912;
	// std r7,216(r28)
	PPC_STORE_U64(ctx.r28.u32 + 216, ctx.r7.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169438;
	sub_82CA7538(ctx, base);
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169444;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169450;
	sub_82CA7538(ctx, base);
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ca7538
	ctx.lr = 0x8316945C;
	sub_82CA7538(ctx, base);
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r8,r11,-22024
	ctx.r8.s64 = ctx.r11.s64 + -22024;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lis r4,-32146
	ctx.r4.s64 = -2106720256;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r27,r4,-3744
	ctx.r27.s64 = ctx.r4.s64 + -3744;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lis r3,-32150
	ctx.r3.s64 = -2106982400;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r26,r3,3608
	ctx.r26.s64 = ctx.r3.s64 + 3608;
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,236(r28)
	PPC_STORE_U32(ctx.r28.u32 + 236, ctx.r30.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,232(r28)
	PPC_STORE_U32(ctx.r28.u32 + 232, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// std r7,248(r28)
	PPC_STORE_U64(ctx.r28.u32 + 248, ctx.r7.u64);
	// stb r31,228(r28)
	PPC_STORE_U8(ctx.r28.u32 + 228, ctx.r31.u8);
	// std r8,240(r28)
	PPC_STORE_U64(ctx.r28.u32 + 240, ctx.r8.u64);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r31,224(r28)
	PPC_STORE_U32(ctx.r28.u32 + 224, ctx.r31.u32);
	// stw r31,264(r28)
	PPC_STORE_U32(ctx.r28.u32 + 264, ctx.r31.u32);
	// stw r31,256(r28)
	PPC_STORE_U32(ctx.r28.u32 + 256, ctx.r31.u32);
	// stb r31,260(r28)
	PPC_STORE_U8(ctx.r28.u32 + 260, ctx.r31.u8);
	// stw r31,268(r28)
	PPC_STORE_U32(ctx.r28.u32 + 268, ctx.r31.u32);
	// stw r31,288(r28)
	PPC_STORE_U32(ctx.r28.u32 + 288, ctx.r31.u32);
	// stb r31,292(r28)
	PPC_STORE_U8(ctx.r28.u32 + 292, ctx.r31.u8);
	// ld r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stw r31,296(r28)
	PPC_STORE_U32(ctx.r28.u32 + 296, ctx.r31.u32);
	// ld r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stw r31,300(r28)
	PPC_STORE_U32(ctx.r28.u32 + 300, ctx.r31.u32);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,280(r28)
	PPC_STORE_U64(ctx.r28.u32 + 280, ctx.r9.u64);
	// std r4,312(r28)
	PPC_STORE_U64(ctx.r28.u32 + 312, ctx.r4.u64);
	// std r30,304(r28)
	PPC_STORE_U64(ctx.r28.u32 + 304, ctx.r30.u64);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// std r7,272(r28)
	PPC_STORE_U64(ctx.r28.u32 + 272, ctx.r7.u64);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169528;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2492
	ctx.r3.s64 = ctx.r11.s64 + -2492;
	// bl 0x82ca7538
	ctx.lr = 0x83169538;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169544;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2516
	ctx.r3.s64 = ctx.r11.s64 + -2516;
	// bl 0x82ca7538
	ctx.lr = 0x83169554;
	sub_82CA7538(ctx, base);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r31,320(r28)
	PPC_STORE_U32(ctx.r28.u32 + 320, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r31,324(r28)
	PPC_STORE_U8(ctx.r28.u32 + 324, ctx.r31.u8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r11,328(r28)
	PPC_STORE_U32(ctx.r28.u32 + 328, ctx.r11.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r30,332(r28)
	PPC_STORE_U32(ctx.r28.u32 + 332, ctx.r30.u32);
	// std r8,336(r28)
	PPC_STORE_U64(ctx.r28.u32 + 336, ctx.r8.u64);
	// std r7,344(r28)
	PPC_STORE_U64(ctx.r28.u32 + 344, ctx.r7.u64);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169598;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2544
	ctx.r3.s64 = ctx.r11.s64 + -2544;
	// bl 0x82ca7538
	ctx.lr = 0x831695A8;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x831695B4;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2568
	ctx.r3.s64 = ctx.r11.s64 + -2568;
	// bl 0x82ca7538
	ctx.lr = 0x831695C4;
	sub_82CA7538(ctx, base);
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r31,352(r28)
	PPC_STORE_U32(ctx.r28.u32 + 352, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,360(r28)
	PPC_STORE_U32(ctx.r28.u32 + 360, ctx.r11.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,356(r28)
	PPC_STORE_U8(ctx.r28.u32 + 356, ctx.r31.u8);
	// stw r30,364(r28)
	PPC_STORE_U32(ctx.r28.u32 + 364, ctx.r30.u32);
	// std r9,368(r28)
	PPC_STORE_U64(ctx.r28.u32 + 368, ctx.r9.u64);
	// std r8,376(r28)
	PPC_STORE_U64(ctx.r28.u32 + 376, ctx.r8.u64);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169604;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2592
	ctx.r3.s64 = ctx.r11.s64 + -2592;
	// bl 0x82ca7538
	ctx.lr = 0x83169614;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169620;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2608
	ctx.r3.s64 = ctx.r11.s64 + -2608;
	// bl 0x82ca7538
	ctx.lr = 0x83169630;
	sub_82CA7538(ctx, base);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r30,396(r28)
	PPC_STORE_U32(ctx.r28.u32 + 396, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,392(r28)
	PPC_STORE_U32(ctx.r28.u32 + 392, ctx.r11.u32);
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// stw r31,384(r28)
	PPC_STORE_U32(ctx.r28.u32 + 384, ctx.r31.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,388(r28)
	PPC_STORE_U8(ctx.r28.u32 + 388, ctx.r31.u8);
	// addi r11,r11,-3728
	ctx.r11.s64 = ctx.r11.s64 + -3728;
	// std r8,400(r28)
	PPC_STORE_U64(ctx.r28.u32 + 400, ctx.r8.u64);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// std r7,408(r28)
	PPC_STORE_U64(ctx.r28.u32 + 408, ctx.r7.u64);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316967C;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r27,r11,-2652
	ctx.r27.s64 = ctx.r11.s64 + -2652;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169690;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x8316969C;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r26,r3,16,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2692
	ctx.r3.s64 = ctx.r11.s64 + -2692;
	// bl 0x82ca7538
	ctx.lr = 0x831696AC;
	sub_82CA7538(ctx, base);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// or r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 | ctx.r26.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,428(r28)
	PPC_STORE_U32(ctx.r28.u32 + 428, ctx.r30.u32);
	// stw r11,424(r28)
	PPC_STORE_U32(ctx.r28.u32 + 424, ctx.r11.u32);
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// stw r10,416(r28)
	PPC_STORE_U32(ctx.r28.u32 + 416, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r31,420(r28)
	PPC_STORE_U8(ctx.r28.u32 + 420, ctx.r31.u8);
	// addi r11,r11,-3728
	ctx.r11.s64 = ctx.r11.s64 + -3728;
	// std r8,432(r28)
	PPC_STORE_U64(ctx.r28.u32 + 432, ctx.r8.u64);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// std r7,440(r28)
	PPC_STORE_U64(ctx.r28.u32 + 440, ctx.r7.u64);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831696F8;
	sub_82CA7538(ctx, base);
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169704;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169710;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r26,r3,16,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2728
	ctx.r3.s64 = ctx.r11.s64 + -2728;
	// bl 0x82ca7538
	ctx.lr = 0x83169720;
	sub_82CA7538(ctx, base);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// or r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 | ctx.r26.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,460(r28)
	PPC_STORE_U32(ctx.r28.u32 + 460, ctx.r30.u32);
	// stw r11,456(r28)
	PPC_STORE_U32(ctx.r28.u32 + 456, ctx.r11.u32);
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// stw r10,448(r28)
	PPC_STORE_U32(ctx.r28.u32 + 448, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r31,452(r28)
	PPC_STORE_U8(ctx.r28.u32 + 452, ctx.r31.u8);
	// addi r11,r11,-3728
	ctx.r11.s64 = ctx.r11.s64 + -3728;
	// std r8,464(r28)
	PPC_STORE_U64(ctx.r28.u32 + 464, ctx.r8.u64);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// std r7,472(r28)
	PPC_STORE_U64(ctx.r28.u32 + 472, ctx.r7.u64);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316976C;
	sub_82CA7538(ctx, base);
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169778;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169784;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r26,r3,16,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2768
	ctx.r3.s64 = ctx.r11.s64 + -2768;
	// bl 0x82ca7538
	ctx.lr = 0x83169794;
	sub_82CA7538(ctx, base);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// or r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 | ctx.r26.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,492(r28)
	PPC_STORE_U32(ctx.r28.u32 + 492, ctx.r30.u32);
	// stw r11,488(r28)
	PPC_STORE_U32(ctx.r28.u32 + 488, ctx.r11.u32);
	// lis r6,-32146
	ctx.r6.s64 = -2106720256;
	// stw r10,480(r28)
	PPC_STORE_U32(ctx.r28.u32 + 480, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r31,484(r28)
	PPC_STORE_U8(ctx.r28.u32 + 484, ctx.r31.u8);
	// addi r11,r6,-3656
	ctx.r11.s64 = ctx.r6.s64 + -3656;
	// std r8,496(r28)
	PPC_STORE_U64(ctx.r28.u32 + 496, ctx.r8.u64);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// std r7,504(r28)
	PPC_STORE_U64(ctx.r28.u32 + 504, ctx.r7.u64);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831697E0;
	sub_82CA7538(ctx, base);
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca7538
	ctx.lr = 0x831697EC;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x831697F8;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2792
	ctx.r3.s64 = ctx.r11.s64 + -2792;
	// bl 0x82ca7538
	ctx.lr = 0x83169808;
	sub_82CA7538(ctx, base);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stw r11,520(r28)
	PPC_STORE_U32(ctx.r28.u32 + 520, ctx.r11.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r10,512(r28)
	PPC_STORE_U32(ctx.r28.u32 + 512, ctx.r10.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stb r31,516(r28)
	PPC_STORE_U8(ctx.r28.u32 + 516, ctx.r31.u8);
	// stw r31,552(r28)
	PPC_STORE_U32(ctx.r28.u32 + 552, ctx.r31.u32);
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,9232
	ctx.r4.s64 = ctx.r11.s64 + 9232;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stw r30,524(r28)
	PPC_STORE_U32(ctx.r28.u32 + 524, ctx.r30.u32);
	// std r8,528(r28)
	PPC_STORE_U64(ctx.r28.u32 + 528, ctx.r8.u64);
	// std r7,536(r28)
	PPC_STORE_U64(ctx.r28.u32 + 536, ctx.r7.u64);
	// stw r10,544(r28)
	PPC_STORE_U32(ctx.r28.u32 + 544, ctx.r10.u32);
	// stb r31,548(r28)
	PPC_STORE_U8(ctx.r28.u32 + 548, ctx.r31.u8);
	// stw r31,556(r28)
	PPC_STORE_U32(ctx.r28.u32 + 556, ctx.r31.u32);
	// std r5,560(r28)
	PPC_STORE_U64(ctx.r28.u32 + 560, ctx.r5.u64);
	// std r11,568(r28)
	PPC_STORE_U64(ctx.r28.u32 + 568, ctx.r11.u64);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169890;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2824
	ctx.r3.s64 = ctx.r11.s64 + -2824;
	// bl 0x82ca7538
	ctx.lr = 0x831698A0;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x831698AC;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2856
	ctx.r3.s64 = ctx.r11.s64 + -2856;
	// bl 0x82ca7538
	ctx.lr = 0x831698BC;
	sub_82CA7538(ctx, base);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,584(r28)
	PPC_STORE_U32(ctx.r28.u32 + 584, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lis r7,-32146
	ctx.r7.s64 = -2106720256;
	// stw r10,576(r28)
	PPC_STORE_U32(ctx.r28.u32 + 576, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r9,580(r28)
	PPC_STORE_U8(ctx.r28.u32 + 580, ctx.r9.u8);
	// addi r10,r7,-22080
	ctx.r10.s64 = ctx.r7.s64 + -22080;
	// stw r30,588(r28)
	PPC_STORE_U32(ctx.r28.u32 + 588, ctx.r30.u32);
	// std r8,592(r28)
	PPC_STORE_U64(ctx.r28.u32 + 592, ctx.r8.u64);
	// std r11,600(r28)
	PPC_STORE_U64(ctx.r28.u32 + 600, ctx.r11.u64);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169908;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2896
	ctx.r3.s64 = ctx.r11.s64 + -2896;
	// bl 0x82ca7538
	ctx.lr = 0x83169918;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169924;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2928
	ctx.r3.s64 = ctx.r11.s64 + -2928;
	// bl 0x82ca7538
	ctx.lr = 0x83169934;
	sub_82CA7538(ctx, base);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r30,620(r28)
	PPC_STORE_U32(ctx.r28.u32 + 620, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,616(r28)
	PPC_STORE_U32(ctx.r28.u32 + 616, ctx.r11.u32);
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// stw r31,608(r28)
	PPC_STORE_U32(ctx.r28.u32 + 608, ctx.r31.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,612(r28)
	PPC_STORE_U8(ctx.r28.u32 + 612, ctx.r31.u8);
	// addi r11,r11,-22080
	ctx.r11.s64 = ctx.r11.s64 + -22080;
	// std r8,624(r28)
	PPC_STORE_U64(ctx.r28.u32 + 624, ctx.r8.u64);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// std r7,632(r28)
	PPC_STORE_U64(ctx.r28.u32 + 632, ctx.r7.u64);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169980;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2972
	ctx.r3.s64 = ctx.r11.s64 + -2972;
	// bl 0x82ca7538
	ctx.lr = 0x83169990;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x8316999C;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3004
	ctx.r3.s64 = ctx.r11.s64 + -3004;
	// bl 0x82ca7538
	ctx.lr = 0x831699AC;
	sub_82CA7538(ctx, base);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r30,652(r28)
	PPC_STORE_U32(ctx.r28.u32 + 652, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,648(r28)
	PPC_STORE_U32(ctx.r28.u32 + 648, ctx.r11.u32);
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// stw r31,640(r28)
	PPC_STORE_U32(ctx.r28.u32 + 640, ctx.r31.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,644(r28)
	PPC_STORE_U8(ctx.r28.u32 + 644, ctx.r31.u8);
	// addi r11,r11,-22080
	ctx.r11.s64 = ctx.r11.s64 + -22080;
	// std r8,656(r28)
	PPC_STORE_U64(ctx.r28.u32 + 656, ctx.r8.u64);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// std r7,664(r28)
	PPC_STORE_U64(ctx.r28.u32 + 664, ctx.r7.u64);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831699F8;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3052
	ctx.r3.s64 = ctx.r11.s64 + -3052;
	// bl 0x82ca7538
	ctx.lr = 0x83169A08;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169A14;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3088
	ctx.r3.s64 = ctx.r11.s64 + -3088;
	// bl 0x82ca7538
	ctx.lr = 0x83169A24;
	sub_82CA7538(ctx, base);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r30,684(r28)
	PPC_STORE_U32(ctx.r28.u32 + 684, ctx.r30.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r11,680(r28)
	PPC_STORE_U32(ctx.r28.u32 + 680, ctx.r11.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r31,672(r28)
	PPC_STORE_U32(ctx.r28.u32 + 672, ctx.r31.u32);
	// lis r11,-32144
	ctx.r11.s64 = -2106589184;
	// stb r31,676(r28)
	PPC_STORE_U8(ctx.r28.u32 + 676, ctx.r31.u8);
	// addi r30,r10,-6876
	ctx.r30.s64 = ctx.r10.s64 + -6876;
	// std r8,688(r28)
	PPC_STORE_U64(ctx.r28.u32 + 688, ctx.r8.u64);
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// std r7,696(r28)
	PPC_STORE_U64(ctx.r28.u32 + 696, ctx.r7.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169A78;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3116
	ctx.r3.s64 = ctx.r11.s64 + -3116;
	// bl 0x82ca7538
	ctx.lr = 0x83169A88;
	sub_82CA7538(ctx, base);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// li r10,12
	ctx.r10.s64 = 12;
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stb r31,708(r28)
	PPC_STORE_U8(ctx.r28.u32 + 708, ctx.r31.u8);
	// stw r10,704(r28)
	PPC_STORE_U32(ctx.r28.u32 + 704, ctx.r10.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r11,712(r28)
	PPC_STORE_U32(ctx.r28.u32 + 712, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,716(r28)
	PPC_STORE_U32(ctx.r28.u32 + 716, ctx.r31.u32);
	// std r8,720(r28)
	PPC_STORE_U64(ctx.r28.u32 + 720, ctx.r8.u64);
	// std r7,728(r28)
	PPC_STORE_U64(ctx.r28.u32 + 728, ctx.r7.u64);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169AD0;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3136
	ctx.r3.s64 = ctx.r11.s64 + -3136;
	// bl 0x82ca7538
	ctx.lr = 0x83169AE0;
	sub_82CA7538(ctx, base);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | ctx.r30.u64;
	// stw r31,736(r28)
	PPC_STORE_U32(ctx.r28.u32 + 736, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,744(r28)
	PPC_STORE_U32(ctx.r28.u32 + 744, ctx.r11.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,740(r28)
	PPC_STORE_U8(ctx.r28.u32 + 740, ctx.r31.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r31,748(r28)
	PPC_STORE_U32(ctx.r28.u32 + 748, ctx.r31.u32);
	// std r8,752(r28)
	PPC_STORE_U64(ctx.r28.u32 + 752, ctx.r8.u64);
	// std r7,760(r28)
	PPC_STORE_U64(ctx.r28.u32 + 760, ctx.r7.u64);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169B24;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3164
	ctx.r3.s64 = ctx.r11.s64 + -3164;
	// bl 0x82ca7538
	ctx.lr = 0x83169B34;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169B40;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3180
	ctx.r3.s64 = ctx.r11.s64 + -3180;
	// bl 0x82ca7538
	ctx.lr = 0x83169B50;
	sub_82CA7538(ctx, base);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r31,768(r28)
	PPC_STORE_U32(ctx.r28.u32 + 768, ctx.r31.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r11,776(r28)
	PPC_STORE_U32(ctx.r28.u32 + 776, ctx.r11.u32);
	// lis r11,-32144
	ctx.r11.s64 = -2106589184;
	// stb r31,772(r28)
	PPC_STORE_U8(ctx.r28.u32 + 772, ctx.r31.u8);
	// lis r10,-32146
	ctx.r10.s64 = -2106720256;
	// stw r30,780(r28)
	PPC_STORE_U32(ctx.r28.u32 + 780, ctx.r30.u32);
	// addi r11,r11,-32192
	ctx.r11.s64 = ctx.r11.s64 + -32192;
	// std r8,784(r28)
	PPC_STORE_U64(ctx.r28.u32 + 784, ctx.r8.u64);
	// addi r10,r10,-21864
	ctx.r10.s64 = ctx.r10.s64 + -21864;
	// std r7,792(r28)
	PPC_STORE_U64(ctx.r28.u32 + 792, ctx.r7.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169BA4;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3204
	ctx.r3.s64 = ctx.r11.s64 + -3204;
	// bl 0x82ca7538
	ctx.lr = 0x83169BB4;
	sub_82CA7538(ctx, base);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | ctx.r30.u64;
	// stw r31,800(r28)
	PPC_STORE_U32(ctx.r28.u32 + 800, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r31,804(r28)
	PPC_STORE_U8(ctx.r28.u32 + 804, ctx.r31.u8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r11,808(r28)
	PPC_STORE_U32(ctx.r28.u32 + 808, ctx.r11.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r31,812(r28)
	PPC_STORE_U32(ctx.r28.u32 + 812, ctx.r31.u32);
	// std r8,816(r28)
	PPC_STORE_U64(ctx.r28.u32 + 816, ctx.r8.u64);
	// std r7,824(r28)
	PPC_STORE_U64(ctx.r28.u32 + 824, ctx.r7.u64);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169BF8;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3228
	ctx.r3.s64 = ctx.r11.s64 + -3228;
	// bl 0x82ca7538
	ctx.lr = 0x83169C08;
	sub_82CA7538(ctx, base);
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | ctx.r30.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lis r4,-32146
	ctx.r4.s64 = -2106720256;
	// stw r11,840(r28)
	PPC_STORE_U32(ctx.r28.u32 + 840, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lis r11,-32144
	ctx.r11.s64 = -2106589184;
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r11,-32016
	ctx.r30.s64 = ctx.r11.s64 + -32016;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// std r7,848(r28)
	PPC_STORE_U64(ctx.r28.u32 + 848, ctx.r7.u64);
	// addi r7,r4,-23928
	ctx.r7.s64 = ctx.r4.s64 + -23928;
	// stw r31,832(r28)
	PPC_STORE_U32(ctx.r28.u32 + 832, ctx.r31.u32);
	// stb r31,836(r28)
	PPC_STORE_U8(ctx.r28.u32 + 836, ctx.r31.u8);
	// stw r31,844(r28)
	PPC_STORE_U32(ctx.r28.u32 + 844, ctx.r31.u32);
	// stw r31,872(r28)
	PPC_STORE_U32(ctx.r28.u32 + 872, ctx.r31.u32);
	// std r6,856(r28)
	PPC_STORE_U64(ctx.r28.u32 + 856, ctx.r6.u64);
	// stw r31,864(r28)
	PPC_STORE_U32(ctx.r28.u32 + 864, ctx.r31.u32);
	// stb r31,868(r28)
	PPC_STORE_U8(ctx.r28.u32 + 868, ctx.r31.u8);
	// stw r31,876(r28)
	PPC_STORE_U32(ctx.r28.u32 + 876, ctx.r31.u32);
	// std r5,880(r28)
	PPC_STORE_U64(ctx.r28.u32 + 880, ctx.r5.u64);
	// std r11,888(r28)
	PPC_STORE_U64(ctx.r28.u32 + 888, ctx.r11.u64);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169C94;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3256
	ctx.r3.s64 = ctx.r11.s64 + -3256;
	// bl 0x82ca7538
	ctx.lr = 0x83169CA4;
	sub_82CA7538(ctx, base);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | ctx.r30.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r31,908(r28)
	PPC_STORE_U32(ctx.r28.u32 + 908, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,904(r28)
	PPC_STORE_U32(ctx.r28.u32 + 904, ctx.r11.u32);
	// stw r10,896(r28)
	PPC_STORE_U32(ctx.r28.u32 + 896, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r9,900(r28)
	PPC_STORE_U8(ctx.r28.u32 + 900, ctx.r9.u8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// std r8,912(r28)
	PPC_STORE_U64(ctx.r28.u32 + 912, ctx.r8.u64);
	// std r7,920(r28)
	PPC_STORE_U64(ctx.r28.u32 + 920, ctx.r7.u64);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169CEC;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3288
	ctx.r3.s64 = ctx.r11.s64 + -3288;
	// bl 0x82ca7538
	ctx.lr = 0x83169CFC;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169D08;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3316
	ctx.r3.s64 = ctx.r11.s64 + -3316;
	// bl 0x82ca7538
	ctx.lr = 0x83169D18;
	sub_82CA7538(ctx, base);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r30,940(r28)
	PPC_STORE_U32(ctx.r28.u32 + 940, ctx.r30.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,936(r28)
	PPC_STORE_U32(ctx.r28.u32 + 936, ctx.r11.u32);
	// stw r31,928(r28)
	PPC_STORE_U32(ctx.r28.u32 + 928, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r31,932(r28)
	PPC_STORE_U8(ctx.r28.u32 + 932, ctx.r31.u8);
	// std r8,944(r28)
	PPC_STORE_U64(ctx.r28.u32 + 944, ctx.r8.u64);
	// std r7,952(r28)
	PPC_STORE_U64(ctx.r28.u32 + 952, ctx.r7.u64);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169D5C;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3340
	ctx.r3.s64 = ctx.r11.s64 + -3340;
	// bl 0x82ca7538
	ctx.lr = 0x83169D6C;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169D78;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3360
	ctx.r3.s64 = ctx.r11.s64 + -3360;
	// bl 0x82ca7538
	ctx.lr = 0x83169D88;
	sub_82CA7538(ctx, base);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r11,968(r28)
	PPC_STORE_U32(ctx.r28.u32 + 968, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r8,976(r28)
	PPC_STORE_U64(ctx.r28.u32 + 976, ctx.r8.u64);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r31,960(r28)
	PPC_STORE_U32(ctx.r28.u32 + 960, ctx.r31.u32);
	// stb r31,964(r28)
	PPC_STORE_U8(ctx.r28.u32 + 964, ctx.r31.u8);
	// stw r30,972(r28)
	PPC_STORE_U32(ctx.r28.u32 + 972, ctx.r30.u32);
	// std r7,984(r28)
	PPC_STORE_U64(ctx.r28.u32 + 984, ctx.r7.u64);
	// stw r31,992(r28)
	PPC_STORE_U32(ctx.r28.u32 + 992, ctx.r31.u32);
	// stb r31,996(r28)
	PPC_STORE_U8(ctx.r28.u32 + 996, ctx.r31.u8);
	// stw r31,1000(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1000, ctx.r31.u32);
	// stw r31,1004(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1004, ctx.r31.u32);
	// std r11,1016(r28)
	PPC_STORE_U64(ctx.r28.u32 + 1016, ctx.r11.u64);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// std r10,1008(r28)
	PPC_STORE_U64(ctx.r28.u32 + 1008, ctx.r10.u64);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169E04;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3388
	ctx.r3.s64 = ctx.r11.s64 + -3388;
	// bl 0x82ca7538
	ctx.lr = 0x83169E14;
	sub_82CA7538(ctx, base);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169E20;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-3412
	ctx.r3.s64 = ctx.r11.s64 + -3412;
	// bl 0x82ca7538
	ctx.lr = 0x83169E30;
	sub_82CA7538(ctx, base);
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r30,1036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1036, ctx.r30.u32);
	// stw r31,1024(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1024, ctx.r31.u32);
	// stw r11,1032(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1032, ctx.r11.u32);
	// stb r31,1028(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1028, ctx.r31.u8);
	// std r9,1040(r28)
	PPC_STORE_U64(ctx.r28.u32 + 1040, ctx.r9.u64);
	// std r8,1048(r28)
	PPC_STORE_U64(ctx.r28.u32 + 1048, ctx.r8.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83169E60"))) PPC_WEAK_FUNC(sub_83169E60);
PPC_FUNC_IMPL(__imp__sub_83169E60) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82cad4d8
	ctx.lr = 0x83169E74;
	sub_82CAD4D8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,9928
	ctx.r3.s64 = ctx.r11.s64 + 9928;
	// bl 0x824afb20
	ctx.lr = 0x83169E84;
	sub_824AFB20(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83169ea0
	if (ctx.cr6.eq) goto loc_83169EA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83169EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83169EA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r10,-11744
	ctx.r3.s64 = ctx.r10.s64 + -11744;
	// bl 0x82a7e6b0
	ctx.lr = 0x83169EB4;
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

__attribute__((alias("__imp__sub_83169EC8"))) PPC_WEAK_FUNC(sub_83169EC8);
PPC_FUNC_IMPL(__imp__sub_83169EC8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32145
	ctx.r10.s64 = -2106654720;
	// addi r30,r11,-12656
	ctx.r30.s64 = ctx.r11.s64 + -12656;
	// addi r11,r10,-8896
	ctx.r11.s64 = ctx.r10.s64 + -8896;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83169F00;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r31,r3,16,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2148
	ctx.r3.s64 = ctx.r11.s64 + -2148;
	// bl 0x82ca7538
	ctx.lr = 0x83169F10;
	sub_82CA7538(ctx, base);
	// or r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 | ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83169F1C;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,-2176
	ctx.r3.s64 = ctx.r11.s64 + -2176;
	// bl 0x82ca7538
	ctx.lr = 0x83169F2C;
	sub_82CA7538(ctx, base);
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// li r9,1
	ctx.r9.s64 = 1;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r6,r7,12424
	ctx.r6.s64 = ctx.r7.s64 + 12424;
	// li r10,7
	ctx.r10.s64 = 7;
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | ctx.r30.u64;
	// stw r10,12424(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12424, ctx.r10.u32);
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// stw r31,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r31.u32);
	// stw r10,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r10.u32);
	// stw r9,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// std r8,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r8.u64);
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

__attribute__((alias("__imp__sub_83169F88"))) PPC_WEAK_FUNC(sub_83169F88);
PPC_FUNC_IMPL(__imp__sub_83169F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-2120
	ctx.r3.s64 = ctx.r11.s64 + -2120;
	// bl 0x82e73af8
	ctx.lr = 0x83169FA0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169FB8"))) PPC_WEAK_FUNC(sub_83169FB8);
PPC_FUNC_IMPL(__imp__sub_83169FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,1612
	ctx.r3.s64 = ctx.r11.s64 + 1612;
	// bl 0x82e73af8
	ctx.lr = 0x83169FD0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169FE8"))) PPC_WEAK_FUNC(sub_83169FE8);
PPC_FUNC_IMPL(__imp__sub_83169FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,28032
	ctx.r3.s64 = ctx.r11.s64 + 28032;
	// bl 0x82e73af8
	ctx.lr = 0x8316A000;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A018"))) PPC_WEAK_FUNC(sub_8316A018);
PPC_FUNC_IMPL(__imp__sub_8316A018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,28016
	ctx.r3.s64 = ctx.r11.s64 + 28016;
	// bl 0x82e73af8
	ctx.lr = 0x8316A030;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A048"))) PPC_WEAK_FUNC(sub_8316A048);
PPC_FUNC_IMPL(__imp__sub_8316A048) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,26640
	ctx.r3.s64 = ctx.r11.s64 + 26640;
	// bl 0x82e73ab0
	ctx.lr = 0x8316A060;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A078"))) PPC_WEAK_FUNC(sub_8316A078);
PPC_FUNC_IMPL(__imp__sub_8316A078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,31944
	ctx.r3.s64 = ctx.r11.s64 + 31944;
	// bl 0x82e73ab0
	ctx.lr = 0x8316A090;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A0A8"))) PPC_WEAK_FUNC(sub_8316A0A8);
PPC_FUNC_IMPL(__imp__sub_8316A0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-2100
	ctx.r3.s64 = ctx.r11.s64 + -2100;
	// bl 0x82e73ab0
	ctx.lr = 0x8316A0C0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A0D8"))) PPC_WEAK_FUNC(sub_8316A0D8);
PPC_FUNC_IMPL(__imp__sub_8316A0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-2076
	ctx.r3.s64 = ctx.r11.s64 + -2076;
	// bl 0x82e73ab0
	ctx.lr = 0x8316A0F0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,9924(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9924, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A108"))) PPC_WEAK_FUNC(sub_8316A108);
PPC_FUNC_IMPL(__imp__sub_8316A108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,7844
	ctx.r3.s64 = ctx.r11.s64 + 7844;
	// bl 0x82e73ab0
	ctx.lr = 0x8316A120;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A138"))) PPC_WEAK_FUNC(sub_8316A138);
PPC_FUNC_IMPL(__imp__sub_8316A138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-2040
	ctx.r3.s64 = ctx.r11.s64 + -2040;
	// bl 0x82e73af8
	ctx.lr = 0x8316A150;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10328, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A168"))) PPC_WEAK_FUNC(sub_8316A168);
PPC_FUNC_IMPL(__imp__sub_8316A168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-2016
	ctx.r3.s64 = ctx.r11.s64 + -2016;
	// bl 0x82e73af8
	ctx.lr = 0x8316A180;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A198"))) PPC_WEAK_FUNC(sub_8316A198);
PPC_FUNC_IMPL(__imp__sub_8316A198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20528
	ctx.r3.s64 = ctx.r11.s64 + 20528;
	// bl 0x82e73af8
	ctx.lr = 0x8316A1B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A1C8"))) PPC_WEAK_FUNC(sub_8316A1C8);
PPC_FUNC_IMPL(__imp__sub_8316A1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20544
	ctx.r3.s64 = ctx.r11.s64 + 20544;
	// bl 0x82e73af8
	ctx.lr = 0x8316A1E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A1F8"))) PPC_WEAK_FUNC(sub_8316A1F8);
PPC_FUNC_IMPL(__imp__sub_8316A1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1992
	ctx.r3.s64 = ctx.r11.s64 + -1992;
	// bl 0x82e73af8
	ctx.lr = 0x8316A210;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10336, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A228"))) PPC_WEAK_FUNC(sub_8316A228);
PPC_FUNC_IMPL(__imp__sub_8316A228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1972
	ctx.r3.s64 = ctx.r11.s64 + -1972;
	// bl 0x82e73af8
	ctx.lr = 0x8316A240;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A258"))) PPC_WEAK_FUNC(sub_8316A258);
PPC_FUNC_IMPL(__imp__sub_8316A258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1952
	ctx.r3.s64 = ctx.r11.s64 + -1952;
	// bl 0x82e73af8
	ctx.lr = 0x8316A270;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A288"))) PPC_WEAK_FUNC(sub_8316A288);
PPC_FUNC_IMPL(__imp__sub_8316A288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21344
	ctx.r3.s64 = ctx.r11.s64 + 21344;
	// bl 0x82e73af8
	ctx.lr = 0x8316A2A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A2B8"))) PPC_WEAK_FUNC(sub_8316A2B8);
PPC_FUNC_IMPL(__imp__sub_8316A2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21356
	ctx.r3.s64 = ctx.r11.s64 + 21356;
	// bl 0x82e73af8
	ctx.lr = 0x8316A2D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A2E8"))) PPC_WEAK_FUNC(sub_8316A2E8);
PPC_FUNC_IMPL(__imp__sub_8316A2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1932
	ctx.r3.s64 = ctx.r11.s64 + -1932;
	// bl 0x82e73af8
	ctx.lr = 0x8316A300;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A318"))) PPC_WEAK_FUNC(sub_8316A318);
PPC_FUNC_IMPL(__imp__sub_8316A318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1912
	ctx.r3.s64 = ctx.r11.s64 + -1912;
	// bl 0x82e73af8
	ctx.lr = 0x8316A330;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A348"))) PPC_WEAK_FUNC(sub_8316A348);
PPC_FUNC_IMPL(__imp__sub_8316A348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,5260
	ctx.r3.s64 = ctx.r11.s64 + 5260;
	// bl 0x82e73af8
	ctx.lr = 0x8316A360;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A378"))) PPC_WEAK_FUNC(sub_8316A378);
PPC_FUNC_IMPL(__imp__sub_8316A378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,5280
	ctx.r3.s64 = ctx.r11.s64 + 5280;
	// bl 0x82e73af8
	ctx.lr = 0x8316A390;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A3A8"))) PPC_WEAK_FUNC(sub_8316A3A8);
PPC_FUNC_IMPL(__imp__sub_8316A3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1900
	ctx.r3.s64 = ctx.r11.s64 + -1900;
	// bl 0x82e73af8
	ctx.lr = 0x8316A3C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A3D8"))) PPC_WEAK_FUNC(sub_8316A3D8);
PPC_FUNC_IMPL(__imp__sub_8316A3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1880
	ctx.r3.s64 = ctx.r11.s64 + -1880;
	// bl 0x82e73af8
	ctx.lr = 0x8316A3F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A408"))) PPC_WEAK_FUNC(sub_8316A408);
PPC_FUNC_IMPL(__imp__sub_8316A408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1860
	ctx.r3.s64 = ctx.r11.s64 + -1860;
	// bl 0x82e73af8
	ctx.lr = 0x8316A420;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A438"))) PPC_WEAK_FUNC(sub_8316A438);
PPC_FUNC_IMPL(__imp__sub_8316A438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1832
	ctx.r3.s64 = ctx.r11.s64 + -1832;
	// bl 0x82e73af8
	ctx.lr = 0x8316A450;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A468"))) PPC_WEAK_FUNC(sub_8316A468);
PPC_FUNC_IMPL(__imp__sub_8316A468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20516
	ctx.r3.s64 = ctx.r11.s64 + 20516;
	// bl 0x82e73af8
	ctx.lr = 0x8316A480;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A498"))) PPC_WEAK_FUNC(sub_8316A498);
PPC_FUNC_IMPL(__imp__sub_8316A498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,30084
	ctx.r3.s64 = ctx.r11.s64 + 30084;
	// bl 0x82e73af8
	ctx.lr = 0x8316A4B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A4C8"))) PPC_WEAK_FUNC(sub_8316A4C8);
PPC_FUNC_IMPL(__imp__sub_8316A4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1804
	ctx.r3.s64 = ctx.r11.s64 + -1804;
	// bl 0x82e73af8
	ctx.lr = 0x8316A4E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A4F8"))) PPC_WEAK_FUNC(sub_8316A4F8);
PPC_FUNC_IMPL(__imp__sub_8316A4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1792
	ctx.r3.s64 = ctx.r11.s64 + -1792;
	// bl 0x82e73af8
	ctx.lr = 0x8316A510;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10236, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A528"))) PPC_WEAK_FUNC(sub_8316A528);
PPC_FUNC_IMPL(__imp__sub_8316A528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1780
	ctx.r3.s64 = ctx.r11.s64 + -1780;
	// bl 0x82e73ab0
	ctx.lr = 0x8316A540;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A558"))) PPC_WEAK_FUNC(sub_8316A558);
PPC_FUNC_IMPL(__imp__sub_8316A558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1756
	ctx.r3.s64 = ctx.r11.s64 + -1756;
	// bl 0x82e73ab0
	ctx.lr = 0x8316A570;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A588"))) PPC_WEAK_FUNC(sub_8316A588);
PPC_FUNC_IMPL(__imp__sub_8316A588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-17136
	ctx.r3.s64 = ctx.r11.s64 + -17136;
	// bl 0x82e73ab0
	ctx.lr = 0x8316A5A0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A5B8"))) PPC_WEAK_FUNC(sub_8316A5B8);
PPC_FUNC_IMPL(__imp__sub_8316A5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,25868
	ctx.r3.s64 = ctx.r11.s64 + 25868;
	// bl 0x82e73ab0
	ctx.lr = 0x8316A5D0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A5E8"))) PPC_WEAK_FUNC(sub_8316A5E8);
PPC_FUNC_IMPL(__imp__sub_8316A5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1724
	ctx.r3.s64 = ctx.r11.s64 + -1724;
	// bl 0x82e73af8
	ctx.lr = 0x8316A600;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A618"))) PPC_WEAK_FUNC(sub_8316A618);
PPC_FUNC_IMPL(__imp__sub_8316A618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1712
	ctx.r3.s64 = ctx.r11.s64 + -1712;
	// bl 0x82e73af8
	ctx.lr = 0x8316A630;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A648"))) PPC_WEAK_FUNC(sub_8316A648);
PPC_FUNC_IMPL(__imp__sub_8316A648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1704
	ctx.r3.s64 = ctx.r11.s64 + -1704;
	// bl 0x82e73af8
	ctx.lr = 0x8316A660;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A678"))) PPC_WEAK_FUNC(sub_8316A678);
PPC_FUNC_IMPL(__imp__sub_8316A678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1692
	ctx.r3.s64 = ctx.r11.s64 + -1692;
	// bl 0x82e73b40
	ctx.lr = 0x8316A690;
	sub_82E73B40(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A6A8"))) PPC_WEAK_FUNC(sub_8316A6A8);
PPC_FUNC_IMPL(__imp__sub_8316A6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,15644
	ctx.r3.s64 = ctx.r11.s64 + 15644;
	// bl 0x82e73b40
	ctx.lr = 0x8316A6C0;
	sub_82E73B40(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A6D8"))) PPC_WEAK_FUNC(sub_8316A6D8);
PPC_FUNC_IMPL(__imp__sub_8316A6D8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8316A6E0;
	__savegprlr_29(ctx, base);
	// lis r10,-32145
	ctx.r10.s64 = -2106654720;
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// addi r10,r10,-28976
	ctx.r10.s64 = ctx.r10.s64 + -28976;
	// addi r29,r9,11704
	ctx.r29.s64 = ctx.r9.s64 + 11704;
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// lis r7,-32145
	ctx.r7.s64 = -2106654720;
	// addi r10,r10,-15000
	ctx.r10.s64 = ctx.r10.s64 + -15000;
	// lis r9,-32145
	ctx.r9.s64 = -2106654720;
	// stw r10,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r10.u32);
	// addi r10,r7,-28464
	ctx.r10.s64 = ctx.r7.s64 + -28464;
	// addi r9,r9,-28696
	ctx.r9.s64 = ctx.r9.s64 + -28696;
	// lis r6,-32150
	ctx.r6.s64 = -2106982400;
	// stw r10,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r10.u32);
	// lis r4,-32145
	ctx.r4.s64 = -2106654720;
	// stw r9,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r6,-15000
	ctx.r9.s64 = ctx.r6.s64 + -15000;
	// addi r10,r4,-28128
	ctx.r10.s64 = ctx.r4.s64 + -28128;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r9,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r9.u32);
	// lis r3,-32145
	ctx.r3.s64 = -2106654720;
	// stw r10,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// lis r8,-32150
	ctx.r8.s64 = -2106982400;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r9,r3,-28008
	ctx.r9.s64 = ctx.r3.s64 + -28008;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r8,r8,-15000
	ctx.r8.s64 = ctx.r8.s64 + -15000;
	// lis r5,-32145
	ctx.r5.s64 = -2106654720;
	// stw r9,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r9.u32);
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// stw r8,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r8.u32);
	// addi r8,r5,-28352
	ctx.r8.s64 = ctx.r5.s64 + -28352;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// addi r9,r10,-15000
	ctx.r9.s64 = ctx.r10.s64 + -15000;
	// ld r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// stw r8,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r8.u32);
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// stw r9,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r9.u32);
	// ld r7,-112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r6,-104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r5,-96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r4,-88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r3,-80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r30,-72(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r11,-64(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r31,-48(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r9,-40(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r8,-120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r8,40(r29)
	PPC_STORE_U64(ctx.r29.u32 + 40, ctx.r8.u64);
	// std r10,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r9,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r9.u64);
	// std r7,32(r29)
	PPC_STORE_U64(ctx.r29.u32 + 32, ctx.r7.u64);
	// std r6,64(r29)
	PPC_STORE_U64(ctx.r29.u32 + 64, ctx.r6.u64);
	// std r5,56(r29)
	PPC_STORE_U64(ctx.r29.u32 + 56, ctx.r5.u64);
	// std r4,88(r29)
	PPC_STORE_U64(ctx.r29.u32 + 88, ctx.r4.u64);
	// std r3,80(r29)
	PPC_STORE_U64(ctx.r29.u32 + 80, ctx.r3.u64);
	// std r31,112(r29)
	PPC_STORE_U64(ctx.r29.u32 + 112, ctx.r31.u64);
	// std r30,104(r29)
	PPC_STORE_U64(ctx.r29.u32 + 104, ctx.r30.u64);
	// std r11,136(r29)
	PPC_STORE_U64(ctx.r29.u32 + 136, ctx.r11.u64);
	// std r10,128(r29)
	PPC_STORE_U64(ctx.r29.u32 + 128, ctx.r10.u64);
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316A800"))) PPC_WEAK_FUNC(sub_8316A800);
PPC_FUNC_IMPL(__imp__sub_8316A800) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// lis r10,-32145
	ctx.r10.s64 = -2106654720;
	// lis r7,-32146
	ctx.r7.s64 = -2106720256;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,2616
	ctx.r9.s64 = ctx.r9.s64 + 2616;
	// lis r8,-31964
	ctx.r8.s64 = -2094792704;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// addi r7,r7,-20904
	ctx.r7.s64 = ctx.r7.s64 + -20904;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// addi r6,r8,11880
	ctx.r6.s64 = ctx.r8.s64 + 11880;
	// ld r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r10,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r9,-24(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,88(r6)
	PPC_STORE_U64(ctx.r6.u32 + 88, ctx.r8.u64);
	// std r10,40(r6)
	PPC_STORE_U64(ctx.r6.u32 + 40, ctx.r10.u64);
	// std r9,64(r6)
	PPC_STORE_U64(ctx.r6.u32 + 64, ctx.r9.u64);
	// std r11,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A868"))) PPC_WEAK_FUNC(sub_8316A868);
PPC_FUNC_IMPL(__imp__sub_8316A868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1684
	ctx.r3.s64 = ctx.r11.s64 + -1684;
	// bl 0x82e73af8
	ctx.lr = 0x8316A880;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A898"))) PPC_WEAK_FUNC(sub_8316A898);
PPC_FUNC_IMPL(__imp__sub_8316A898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1660
	ctx.r3.s64 = ctx.r11.s64 + -1660;
	// bl 0x82e73af8
	ctx.lr = 0x8316A8B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A8C8"))) PPC_WEAK_FUNC(sub_8316A8C8);
PPC_FUNC_IMPL(__imp__sub_8316A8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1636
	ctx.r3.s64 = ctx.r11.s64 + -1636;
	// bl 0x82e73af8
	ctx.lr = 0x8316A8E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A8F8"))) PPC_WEAK_FUNC(sub_8316A8F8);
PPC_FUNC_IMPL(__imp__sub_8316A8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1620
	ctx.r3.s64 = ctx.r11.s64 + -1620;
	// bl 0x82e73af8
	ctx.lr = 0x8316A910;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10556, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A928"))) PPC_WEAK_FUNC(sub_8316A928);
PPC_FUNC_IMPL(__imp__sub_8316A928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1604
	ctx.r3.s64 = ctx.r11.s64 + -1604;
	// bl 0x82e73af8
	ctx.lr = 0x8316A940;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10504, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A958"))) PPC_WEAK_FUNC(sub_8316A958);
PPC_FUNC_IMPL(__imp__sub_8316A958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1592
	ctx.r3.s64 = ctx.r11.s64 + -1592;
	// bl 0x82e73af8
	ctx.lr = 0x8316A970;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A988"))) PPC_WEAK_FUNC(sub_8316A988);
PPC_FUNC_IMPL(__imp__sub_8316A988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-29340
	ctx.r3.s64 = ctx.r11.s64 + -29340;
	// bl 0x82e73af8
	ctx.lr = 0x8316A9A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A9B8"))) PPC_WEAK_FUNC(sub_8316A9B8);
PPC_FUNC_IMPL(__imp__sub_8316A9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-1572
	ctx.r3.s64 = ctx.r11.s64 + -1572;
	// bl 0x82e73af8
	ctx.lr = 0x8316A9D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,10460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A9E8"))) PPC_WEAK_FUNC(sub_8316A9E8);
PPC_FUNC_IMPL(__imp__sub_8316A9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-11656
	ctx.r3.s64 = ctx.r11.s64 + -11656;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316A9F8"))) PPC_WEAK_FUNC(sub_8316A9F8);
PPC_FUNC_IMPL(__imp__sub_8316A9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12720
	ctx.r9.s64 = ctx.r11.s64 + 12720;
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

__attribute__((alias("__imp__sub_8316AA28"))) PPC_WEAK_FUNC(sub_8316AA28);
PPC_FUNC_IMPL(__imp__sub_8316AA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12624
	ctx.r9.s64 = ctx.r11.s64 + 12624;
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

__attribute__((alias("__imp__sub_8316AA58"))) PPC_WEAK_FUNC(sub_8316AA58);
PPC_FUNC_IMPL(__imp__sub_8316AA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12512
	ctx.r9.s64 = ctx.r11.s64 + 12512;
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

__attribute__((alias("__imp__sub_8316AA88"))) PPC_WEAK_FUNC(sub_8316AA88);
PPC_FUNC_IMPL(__imp__sub_8316AA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12592
	ctx.r9.s64 = ctx.r11.s64 + 12592;
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

__attribute__((alias("__imp__sub_8316AAB8"))) PPC_WEAK_FUNC(sub_8316AAB8);
PPC_FUNC_IMPL(__imp__sub_8316AAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,12560
	ctx.r10.s64 = ctx.r10.s64 + 12560;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AAD8"))) PPC_WEAK_FUNC(sub_8316AAD8);
PPC_FUNC_IMPL(__imp__sub_8316AAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,12496
	ctx.r10.s64 = ctx.r10.s64 + 12496;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AAF8"))) PPC_WEAK_FUNC(sub_8316AAF8);
PPC_FUNC_IMPL(__imp__sub_8316AAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,12888
	ctx.r3.s64 = ctx.r11.s64 + 12888;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316AB08"))) PPC_WEAK_FUNC(sub_8316AB08);
PPC_FUNC_IMPL(__imp__sub_8316AB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,12704
	ctx.r10.s64 = ctx.r10.s64 + 12704;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AB28"))) PPC_WEAK_FUNC(sub_8316AB28);
PPC_FUNC_IMPL(__imp__sub_8316AB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13148
	ctx.r3.s64 = ctx.r11.s64 + 13148;
	// bl 0x82e73af8
	ctx.lr = 0x8316AB40;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AB58"))) PPC_WEAK_FUNC(sub_8316AB58);
PPC_FUNC_IMPL(__imp__sub_8316AB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13164
	ctx.r3.s64 = ctx.r11.s64 + 13164;
	// bl 0x82e73af8
	ctx.lr = 0x8316AB70;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AB88"))) PPC_WEAK_FUNC(sub_8316AB88);
PPC_FUNC_IMPL(__imp__sub_8316AB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13176
	ctx.r3.s64 = ctx.r11.s64 + 13176;
	// bl 0x82e73af8
	ctx.lr = 0x8316ABA0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ABB8"))) PPC_WEAK_FUNC(sub_8316ABB8);
PPC_FUNC_IMPL(__imp__sub_8316ABB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21224
	ctx.r3.s64 = ctx.r11.s64 + 21224;
	// bl 0x82e73af8
	ctx.lr = 0x8316ABD0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ABE8"))) PPC_WEAK_FUNC(sub_8316ABE8);
PPC_FUNC_IMPL(__imp__sub_8316ABE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21240
	ctx.r3.s64 = ctx.r11.s64 + 21240;
	// bl 0x82e73af8
	ctx.lr = 0x8316AC00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AC18"))) PPC_WEAK_FUNC(sub_8316AC18);
PPC_FUNC_IMPL(__imp__sub_8316AC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-31536
	ctx.r3.s64 = ctx.r11.s64 + -31536;
	// bl 0x82e73af8
	ctx.lr = 0x8316AC30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AC48"))) PPC_WEAK_FUNC(sub_8316AC48);
PPC_FUNC_IMPL(__imp__sub_8316AC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13188
	ctx.r3.s64 = ctx.r11.s64 + 13188;
	// bl 0x82e73af8
	ctx.lr = 0x8316AC60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AC78"))) PPC_WEAK_FUNC(sub_8316AC78);
PPC_FUNC_IMPL(__imp__sub_8316AC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13208
	ctx.r3.s64 = ctx.r11.s64 + 13208;
	// bl 0x82e73af8
	ctx.lr = 0x8316AC90;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ACA8"))) PPC_WEAK_FUNC(sub_8316ACA8);
PPC_FUNC_IMPL(__imp__sub_8316ACA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13224
	ctx.r3.s64 = ctx.r11.s64 + 13224;
	// bl 0x82e73af8
	ctx.lr = 0x8316ACC0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ACD8"))) PPC_WEAK_FUNC(sub_8316ACD8);
PPC_FUNC_IMPL(__imp__sub_8316ACD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13240
	ctx.r3.s64 = ctx.r11.s64 + 13240;
	// bl 0x82e73af8
	ctx.lr = 0x8316ACF0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AD08"))) PPC_WEAK_FUNC(sub_8316AD08);
PPC_FUNC_IMPL(__imp__sub_8316AD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13252
	ctx.r3.s64 = ctx.r11.s64 + 13252;
	// bl 0x82e73af8
	ctx.lr = 0x8316AD20;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AD38"))) PPC_WEAK_FUNC(sub_8316AD38);
PPC_FUNC_IMPL(__imp__sub_8316AD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13264
	ctx.r3.s64 = ctx.r11.s64 + 13264;
	// bl 0x82e73af8
	ctx.lr = 0x8316AD50;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AD68"))) PPC_WEAK_FUNC(sub_8316AD68);
PPC_FUNC_IMPL(__imp__sub_8316AD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// bl 0x82e73af8
	ctx.lr = 0x8316AD80;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AD98"))) PPC_WEAK_FUNC(sub_8316AD98);
PPC_FUNC_IMPL(__imp__sub_8316AD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13296
	ctx.r3.s64 = ctx.r11.s64 + 13296;
	// bl 0x82e73af8
	ctx.lr = 0x8316ADB0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ADC8"))) PPC_WEAK_FUNC(sub_8316ADC8);
PPC_FUNC_IMPL(__imp__sub_8316ADC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13312
	ctx.r3.s64 = ctx.r11.s64 + 13312;
	// bl 0x82e73af8
	ctx.lr = 0x8316ADE0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ADF8"))) PPC_WEAK_FUNC(sub_8316ADF8);
PPC_FUNC_IMPL(__imp__sub_8316ADF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13328
	ctx.r3.s64 = ctx.r11.s64 + 13328;
	// bl 0x82e73af8
	ctx.lr = 0x8316AE10;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AE28"))) PPC_WEAK_FUNC(sub_8316AE28);
PPC_FUNC_IMPL(__imp__sub_8316AE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13344
	ctx.r3.s64 = ctx.r11.s64 + 13344;
	// bl 0x82e73af8
	ctx.lr = 0x8316AE40;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AE58"))) PPC_WEAK_FUNC(sub_8316AE58);
PPC_FUNC_IMPL(__imp__sub_8316AE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13364
	ctx.r3.s64 = ctx.r11.s64 + 13364;
	// bl 0x82e73af8
	ctx.lr = 0x8316AE70;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AE88"))) PPC_WEAK_FUNC(sub_8316AE88);
PPC_FUNC_IMPL(__imp__sub_8316AE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13384
	ctx.r3.s64 = ctx.r11.s64 + 13384;
	// bl 0x82e73af8
	ctx.lr = 0x8316AEA0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AEB8"))) PPC_WEAK_FUNC(sub_8316AEB8);
PPC_FUNC_IMPL(__imp__sub_8316AEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13404
	ctx.r3.s64 = ctx.r11.s64 + 13404;
	// bl 0x82e73af8
	ctx.lr = 0x8316AED0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AEE8"))) PPC_WEAK_FUNC(sub_8316AEE8);
PPC_FUNC_IMPL(__imp__sub_8316AEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13428
	ctx.r3.s64 = ctx.r11.s64 + 13428;
	// bl 0x82e73af8
	ctx.lr = 0x8316AF00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AF18"))) PPC_WEAK_FUNC(sub_8316AF18);
PPC_FUNC_IMPL(__imp__sub_8316AF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13452
	ctx.r3.s64 = ctx.r11.s64 + 13452;
	// bl 0x82e73af8
	ctx.lr = 0x8316AF30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AF48"))) PPC_WEAK_FUNC(sub_8316AF48);
PPC_FUNC_IMPL(__imp__sub_8316AF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13476
	ctx.r3.s64 = ctx.r11.s64 + 13476;
	// bl 0x82e73af8
	ctx.lr = 0x8316AF60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12880(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AF78"))) PPC_WEAK_FUNC(sub_8316AF78);
PPC_FUNC_IMPL(__imp__sub_8316AF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13492
	ctx.r3.s64 = ctx.r11.s64 + 13492;
	// bl 0x82e73af8
	ctx.lr = 0x8316AF90;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AFA8"))) PPC_WEAK_FUNC(sub_8316AFA8);
PPC_FUNC_IMPL(__imp__sub_8316AFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13508
	ctx.r3.s64 = ctx.r11.s64 + 13508;
	// bl 0x82e73af8
	ctx.lr = 0x8316AFC0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AFD8"))) PPC_WEAK_FUNC(sub_8316AFD8);
PPC_FUNC_IMPL(__imp__sub_8316AFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f1,13528(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 13528);
	// bl 0x823fec10
	ctx.lr = 0x8316AFF0;
	sub_823FEC10(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,12680(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12680, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B010"))) PPC_WEAK_FUNC(sub_8316B010);
PPC_FUNC_IMPL(__imp__sub_8316B010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13536
	ctx.r3.s64 = ctx.r11.s64 + 13536;
	// bl 0x82e73af8
	ctx.lr = 0x8316B028;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B040"))) PPC_WEAK_FUNC(sub_8316B040);
PPC_FUNC_IMPL(__imp__sub_8316B040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13552
	ctx.r3.s64 = ctx.r11.s64 + 13552;
	// bl 0x82e73af8
	ctx.lr = 0x8316B058;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B070"))) PPC_WEAK_FUNC(sub_8316B070);
PPC_FUNC_IMPL(__imp__sub_8316B070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13564
	ctx.r3.s64 = ctx.r11.s64 + 13564;
	// bl 0x82e73af8
	ctx.lr = 0x8316B088;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B0A0"))) PPC_WEAK_FUNC(sub_8316B0A0);
PPC_FUNC_IMPL(__imp__sub_8316B0A0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x8316B0A8;
	__savegprlr_25(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r26,-31964
	ctx.r26.s64 = -2094792704;
	// addi r28,r11,16252
	ctx.r28.s64 = ctx.r11.s64 + 16252;
	// addi r25,r26,17328
	ctx.r25.s64 = ctx.r26.s64 + 17328;
	// lwz r27,16252(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16252);
	// lwz r11,-56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -56);
	// lwz r10,-32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32);
	// lwz r9,-28(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28);
	// lwz r8,-52(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + -52);
	// lwz r7,-48(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + -48);
	// lwz r6,-44(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + -44);
	// lwz r5,-40(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -40);
	// lwz r4,-36(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -36);
	// lwz r3,-24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -24);
	// lwz r31,-16(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + -16);
	// lwz r30,-12(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12);
	// lwz r29,-8(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// lwz r28,-4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// stw r11,17328(r26)
	PPC_STORE_U32(ctx.r26.u32 + 17328, ctx.r11.u32);
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// stw r9,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r9.u32);
	// stw r8,24(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24, ctx.r8.u32);
	// stw r7,32(r25)
	PPC_STORE_U32(ctx.r25.u32 + 32, ctx.r7.u32);
	// stw r6,40(r25)
	PPC_STORE_U32(ctx.r25.u32 + 40, ctx.r6.u32);
	// stw r5,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r5.u32);
	// stw r4,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r4.u32);
	// stw r3,64(r25)
	PPC_STORE_U32(ctx.r25.u32 + 64, ctx.r3.u32);
	// stw r31,72(r25)
	PPC_STORE_U32(ctx.r25.u32 + 72, ctx.r31.u32);
	// stw r30,80(r25)
	PPC_STORE_U32(ctx.r25.u32 + 80, ctx.r30.u32);
	// stw r29,88(r25)
	PPC_STORE_U32(ctx.r25.u32 + 88, ctx.r29.u32);
	// stw r28,96(r25)
	PPC_STORE_U32(ctx.r25.u32 + 96, ctx.r28.u32);
	// stw r27,104(r25)
	PPC_STORE_U32(ctx.r25.u32 + 104, ctx.r27.u32);
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316B130"))) PPC_WEAK_FUNC(sub_8316B130);
PPC_FUNC_IMPL(__imp__sub_8316B130) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddfc
	ctx.lr = 0x8316B138;
	__savegprlr_25(ctx, base);
	// lis r27,-31964
	ctx.r27.s64 = -2094792704;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r26,r27,16232
	ctx.r26.s64 = ctx.r27.s64 + 16232;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// addi r25,r10,12992
	ctx.r25.s64 = ctx.r10.s64 + 12992;
	// lwz r8,12748(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12748);
	// lwz r9,-28(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -28);
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,12476(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12476);
	// stw r8,12992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12992, ctx.r8.u32);
	// stw r8,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r8.u32);
	// stw r8,32(r25)
	PPC_STORE_U32(ctx.r25.u32 + 32, ctx.r8.u32);
	// stw r8,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r8.u32);
	// stw r9,72(r25)
	PPC_STORE_U32(ctx.r25.u32 + 72, ctx.r9.u32);
	// stw r9,104(r25)
	PPC_STORE_U32(ctx.r25.u32 + 104, ctx.r9.u32);
	// stw r6,116(r25)
	PPC_STORE_U32(ctx.r25.u32 + 116, ctx.r6.u32);
	// stw r5,120(r25)
	PPC_STORE_U32(ctx.r25.u32 + 120, ctx.r5.u32);
	// stw r6,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r6.u32);
	// stw r5,136(r25)
	PPC_STORE_U32(ctx.r25.u32 + 136, ctx.r5.u32);
	// stw r9,140(r25)
	PPC_STORE_U32(ctx.r25.u32 + 140, ctx.r9.u32);
	// stw r9,152(r25)
	PPC_STORE_U32(ctx.r25.u32 + 152, ctx.r9.u32);
	// stw r9,168(r25)
	PPC_STORE_U32(ctx.r25.u32 + 168, ctx.r9.u32);
	// lwz r10,-36(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -36);
	// lwz r7,-24(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24);
	// lwz r9,-12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	// lwz r4,-32(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32);
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r31,-20(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20);
	// lwz r30,-16(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16);
	// lwz r29,20(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r28,12(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r8,-4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// lwz r6,-8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
	// lwz r5,16232(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16232);
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// stw r7,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r7.u32);
	// stw r31,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r31.u32);
	// stw r30,52(r25)
	PPC_STORE_U32(ctx.r25.u32 + 52, ctx.r30.u32);
	// stw r11,64(r25)
	PPC_STORE_U32(ctx.r25.u32 + 64, ctx.r11.u32);
	// stw r10,68(r25)
	PPC_STORE_U32(ctx.r25.u32 + 68, ctx.r10.u32);
	// stw r11,80(r25)
	PPC_STORE_U32(ctx.r25.u32 + 80, ctx.r11.u32);
	// stw r10,84(r25)
	PPC_STORE_U32(ctx.r25.u32 + 84, ctx.r10.u32);
	// stw r7,88(r25)
	PPC_STORE_U32(ctx.r25.u32 + 88, ctx.r7.u32);
	// stw r10,100(r25)
	PPC_STORE_U32(ctx.r25.u32 + 100, ctx.r10.u32);
	// stw r29,108(r25)
	PPC_STORE_U32(ctx.r25.u32 + 108, ctx.r29.u32);
	// stw r11,112(r25)
	PPC_STORE_U32(ctx.r25.u32 + 112, ctx.r11.u32);
	// stw r11,144(r25)
	PPC_STORE_U32(ctx.r25.u32 + 144, ctx.r11.u32);
	// stw r4,148(r25)
	PPC_STORE_U32(ctx.r25.u32 + 148, ctx.r4.u32);
	// stw r4,164(r25)
	PPC_STORE_U32(ctx.r25.u32 + 164, ctx.r4.u32);
	// stw r28,172(r25)
	PPC_STORE_U32(ctx.r25.u32 + 172, ctx.r28.u32);
	// stw r11,176(r25)
	PPC_STORE_U32(ctx.r25.u32 + 176, ctx.r11.u32);
	// stw r10,180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 180, ctx.r10.u32);
	// stw r3,184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 184, ctx.r3.u32);
	// stw r11,192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 192, ctx.r11.u32);
	// stw r10,196(r25)
	PPC_STORE_U32(ctx.r25.u32 + 196, ctx.r10.u32);
	// stw r3,200(r25)
	PPC_STORE_U32(ctx.r25.u32 + 200, ctx.r3.u32);
	// stw r9,212(r25)
	PPC_STORE_U32(ctx.r25.u32 + 212, ctx.r9.u32);
	// stw r7,216(r25)
	PPC_STORE_U32(ctx.r25.u32 + 216, ctx.r7.u32);
	// stw r8,220(r25)
	PPC_STORE_U32(ctx.r25.u32 + 220, ctx.r8.u32);
	// stw r11,224(r25)
	PPC_STORE_U32(ctx.r25.u32 + 224, ctx.r11.u32);
	// stw r9,228(r25)
	PPC_STORE_U32(ctx.r25.u32 + 228, ctx.r9.u32);
	// stw r6,232(r25)
	PPC_STORE_U32(ctx.r25.u32 + 232, ctx.r6.u32);
	// stw r11,240(r25)
	PPC_STORE_U32(ctx.r25.u32 + 240, ctx.r11.u32);
	// stw r9,244(r25)
	PPC_STORE_U32(ctx.r25.u32 + 244, ctx.r9.u32);
	// stw r5,248(r25)
	PPC_STORE_U32(ctx.r25.u32 + 248, ctx.r5.u32);
	// b 0x82a7de4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316B248"))) PPC_WEAK_FUNC(sub_8316B248);
PPC_FUNC_IMPL(__imp__sub_8316B248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,1612
	ctx.r3.s64 = ctx.r11.s64 + 1612;
	// bl 0x82e73af8
	ctx.lr = 0x8316B260;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B278"))) PPC_WEAK_FUNC(sub_8316B278);
PPC_FUNC_IMPL(__imp__sub_8316B278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,1632
	ctx.r3.s64 = ctx.r11.s64 + 1632;
	// bl 0x82e73af8
	ctx.lr = 0x8316B290;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B2A8"))) PPC_WEAK_FUNC(sub_8316B2A8);
PPC_FUNC_IMPL(__imp__sub_8316B2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13576
	ctx.r3.s64 = ctx.r11.s64 + 13576;
	// bl 0x82e73af8
	ctx.lr = 0x8316B2C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B2D8"))) PPC_WEAK_FUNC(sub_8316B2D8);
PPC_FUNC_IMPL(__imp__sub_8316B2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13596
	ctx.r3.s64 = ctx.r11.s64 + 13596;
	// bl 0x82e73af8
	ctx.lr = 0x8316B2F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B308"))) PPC_WEAK_FUNC(sub_8316B308);
PPC_FUNC_IMPL(__imp__sub_8316B308) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12576
	ctx.r3.s64 = ctx.r11.s64 + 12576;
	// bl 0x8271fbf0
	ctx.lr = 0x8316B320;
	sub_8271FBF0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-11640
	ctx.r3.s64 = ctx.r11.s64 + -11640;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316B32C;
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

__attribute__((alias("__imp__sub_8316B340"))) PPC_WEAK_FUNC(sub_8316B340);
PPC_FUNC_IMPL(__imp__sub_8316B340) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r4,-32142
	ctx.r4.s64 = -2106458112;
	// addi r10,r10,24440
	ctx.r10.s64 = ctx.r10.s64 + 24440;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// lis r7,-32142
	ctx.r7.s64 = -2106458112;
	// lis r6,-32146
	ctx.r6.s64 = -2106720256;
	// lis r5,-32142
	ctx.r5.s64 = -2106458112;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r4,24800
	ctx.r4.s64 = ctx.r4.s64 + 24800;
	// addi r9,r9,24568
	ctx.r9.s64 = ctx.r9.s64 + 24568;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r8,r8,24720
	ctx.r8.s64 = ctx.r8.s64 + 24720;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// addi r7,r7,-20328
	ctx.r7.s64 = ctx.r7.s64 + -20328;
	// ld r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// addi r6,r6,-8208
	ctx.r6.s64 = ctx.r6.s64 + -8208;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r5,r5,24648
	ctx.r5.s64 = ctx.r5.s64 + 24648;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r31,r10,10504
	ctx.r31.s64 = ctx.r10.s64 + 10504;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lis r3,-31964
	ctx.r3.s64 = -2094792704;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// addi r3,r3,16368
	ctx.r3.s64 = ctx.r3.s64 + 16368;
	// stw r9,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r9.u32);
	// stw r8,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r8.u32);
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// stw r6,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r6.u32);
	// stw r5,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r5.u32);
	// stw r31,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r31.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r9,-56(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r8,-48(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r7,-40(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r5,-24(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r4,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, ctx.r4.u64);
	// std r10,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r10.u64);
	// std r9,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r9.u64);
	// std r8,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r8.u64);
	// std r7,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.r7.u64);
	// std r6,136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 136, ctx.r6.u64);
	// std r5,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, ctx.r5.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B418"))) PPC_WEAK_FUNC(sub_8316B418);
PPC_FUNC_IMPL(__imp__sub_8316B418) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddd0
	ctx.lr = 0x8316B420;
	__savegprlr_14(ctx, base);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-20104
	ctx.r9.s64 = ctx.r9.s64 + -20104;
	// addi r10,r10,-28752
	ctx.r10.s64 = ctx.r10.s64 + -28752;
	// stw r11,-372(r1)
	PPC_STORE_U32(ctx.r1.u32 + -372, ctx.r11.u32);
	// addi r8,r8,-20104
	ctx.r8.s64 = ctx.r8.s64 + -20104;
	// stw r9,-376(r1)
	PPC_STORE_U32(ctx.r1.u32 + -376, ctx.r9.u32);
	// stw r10,-384(r1)
	PPC_STORE_U32(ctx.r1.u32 + -384, ctx.r10.u32);
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// stw r8,-368(r1)
	PPC_STORE_U32(ctx.r1.u32 + -368, ctx.r8.u32);
	// lis r7,-32141
	ctx.r7.s64 = -2106392576;
	// stw r11,-380(r1)
	PPC_STORE_U32(ctx.r1.u32 + -380, ctx.r11.u32);
	// addi r10,r10,-28728
	ctx.r10.s64 = ctx.r10.s64 + -28728;
	// stw r11,-364(r1)
	PPC_STORE_U32(ctx.r1.u32 + -364, ctx.r11.u32);
	// lis r6,-32142
	ctx.r6.s64 = -2106458112;
	// lis r5,-32142
	ctx.r5.s64 = -2106458112;
	// stw r10,-304(r1)
	PPC_STORE_U32(ctx.r1.u32 + -304, ctx.r10.u32);
	// addi r10,r7,-28704
	ctx.r10.s64 = ctx.r7.s64 + -28704;
	// stw r11,-300(r1)
	PPC_STORE_U32(ctx.r1.u32 + -300, ctx.r11.u32);
	// lis r4,-32142
	ctx.r4.s64 = -2106458112;
	// stw r11,-332(r1)
	PPC_STORE_U32(ctx.r1.u32 + -332, ctx.r11.u32);
	// addi r7,r6,-19880
	ctx.r7.s64 = ctx.r6.s64 + -19880;
	// stw r10,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r10.u32);
	// lis r3,-32142
	ctx.r3.s64 = -2106458112;
	// stw r11,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r11.u32);
	// addi r6,r5,-20104
	ctx.r6.s64 = ctx.r5.s64 + -20104;
	// stw r7,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r7.u32);
	// lis r31,-32141
	ctx.r31.s64 = -2106392576;
	// stw r11,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r11.u32);
	// addi r5,r4,-19816
	ctx.r5.s64 = ctx.r4.s64 + -19816;
	// stw r6,-312(r1)
	PPC_STORE_U32(ctx.r1.u32 + -312, ctx.r6.u32);
	// addi r4,r3,-20104
	ctx.r4.s64 = ctx.r3.s64 + -20104;
	// stw r11,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r11.u32);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// stw r5,-328(r1)
	PPC_STORE_U32(ctx.r1.u32 + -328, ctx.r5.u32);
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// stw r4,-296(r1)
	PPC_STORE_U32(ctx.r1.u32 + -296, ctx.r4.u32);
	// addi r3,r31,1136
	ctx.r3.s64 = ctx.r31.s64 + 1136;
	// stw r11,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r11.u32);
	// lis r29,-32141
	ctx.r29.s64 = -2106392576;
	// stw r11,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r11.u32);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// stw r3,-360(r1)
	PPC_STORE_U32(ctx.r1.u32 + -360, ctx.r3.u32);
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// stw r11,-308(r1)
	PPC_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// ld r10,-376(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -376);
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// stw r11,-324(r1)
	PPC_STORE_U32(ctx.r1.u32 + -324, ctx.r11.u32);
	// addi r9,r9,-19864
	ctx.r9.s64 = ctx.r9.s64 + -19864;
	// stw r11,-292(r1)
	PPC_STORE_U32(ctx.r1.u32 + -292, ctx.r11.u32);
	// addi r8,r8,-20104
	ctx.r8.s64 = ctx.r8.s64 + -20104;
	// stw r11,-356(r1)
	PPC_STORE_U32(ctx.r1.u32 + -356, ctx.r11.u32);
	// addi r31,r29,-12440
	ctx.r31.s64 = ctx.r29.s64 + -12440;
	// stw r9,-336(r1)
	PPC_STORE_U32(ctx.r1.u32 + -336, ctx.r9.u32);
	// addi r7,r30,-20056
	ctx.r7.s64 = ctx.r30.s64 + -20056;
	// stw r8,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r8.u32);
	// addi r6,r28,-20104
	ctx.r6.s64 = ctx.r28.s64 + -20104;
	// ld r9,-384(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -384);
	// addi r5,r27,2784
	ctx.r5.s64 = ctx.r27.s64 + 2784;
	// ld r8,-368(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -368);
	// addi r4,r26,-20104
	ctx.r4.s64 = ctx.r26.s64 + -20104;
	// stw r31,-376(r1)
	PPC_STORE_U32(ctx.r1.u32 + -376, ctx.r31.u32);
	// lis r3,-31964
	ctx.r3.s64 = -2094792704;
	// stw r11,-316(r1)
	PPC_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// stw r7,-320(r1)
	PPC_STORE_U32(ctx.r1.u32 + -320, ctx.r7.u32);
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// stw r11,-372(r1)
	PPC_STORE_U32(ctx.r1.u32 + -372, ctx.r11.u32);
	// addi r14,r3,16560
	ctx.r14.s64 = ctx.r3.s64 + 16560;
	// stw r11,-368(r1)
	PPC_STORE_U32(ctx.r1.u32 + -368, ctx.r11.u32);
	// stw r11,-364(r1)
	PPC_STORE_U32(ctx.r1.u32 + -364, ctx.r11.u32);
	// stw r11,-344(r1)
	PPC_STORE_U32(ctx.r1.u32 + -344, ctx.r11.u32);
	// stw r11,-340(r1)
	PPC_STORE_U32(ctx.r1.u32 + -340, ctx.r11.u32);
	// stw r6,-384(r1)
	PPC_STORE_U32(ctx.r1.u32 + -384, ctx.r6.u32);
	// stw r11,-380(r1)
	PPC_STORE_U32(ctx.r1.u32 + -380, ctx.r11.u32);
	// stw r5,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r5.u32);
	// stw r11,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r11.u32);
	// stw r4,-352(r1)
	PPC_STORE_U32(ctx.r1.u32 + -352, ctx.r4.u32);
	// stw r11,-348(r1)
	PPC_STORE_U32(ctx.r1.u32 + -348, ctx.r11.u32);
	// std r10,16(r14)
	PPC_STORE_U64(ctx.r14.u32 + 16, ctx.r10.u64);
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// ld r10,-368(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -368);
	// lis r3,-32141
	ctx.r3.s64 = -2106392576;
	// addi r18,r27,-19664
	ctx.r18.s64 = ctx.r27.s64 + -19664;
	// ld r7,-304(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -304);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// ld r6,-272(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// ld r5,-336(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -336);
	// lis r28,-32146
	ctx.r28.s64 = -2106720256;
	// ld r4,-256(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r10,240(r14)
	PPC_STORE_U64(ctx.r14.u32 + 240, ctx.r10.u64);
	// lis r27,-32141
	ctx.r27.s64 = -2106392576;
	// ld r10,-376(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -376);
	// addi r23,r31,-19984
	ctx.r23.s64 = ctx.r31.s64 + -19984;
	// addi r22,r3,-28824
	ctx.r22.s64 = ctx.r3.s64 + -28824;
	// ld r3,-264(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// addi r21,r30,-19880
	ctx.r21.s64 = ctx.r30.s64 + -19880;
	// ld r31,-312(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -312);
	// addi r20,r29,24808
	ctx.r20.s64 = ctx.r29.s64 + 24808;
	// ld r30,-280(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// addi r19,r28,-23928
	ctx.r19.s64 = ctx.r28.s64 + -23928;
	// ld r29,-296(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -296);
	// std r10,248(r14)
	PPC_STORE_U64(ctx.r14.u32 + 248, ctx.r10.u64);
	// lis r17,-32142
	ctx.r17.s64 = -2106458112;
	// ld r10,-384(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -384);
	// lis r16,-32142
	ctx.r16.s64 = -2106458112;
	// stw r27,-384(r1)
	PPC_STORE_U32(ctx.r1.u32 + -384, ctx.r27.u32);
	// lis r15,-32141
	ctx.r15.s64 = -2106392576;
	// ld r28,-328(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -328);
	// ld r27,-320(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -320);
	// ld r26,-360(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -360);
	// std r10,272(r14)
	PPC_STORE_U64(ctx.r14.u32 + 272, ctx.r10.u64);
	// ld r24,-288(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// ld r25,-352(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -352);
	// ld r10,-344(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -344);
	// std r9,24(r14)
	PPC_STORE_U64(ctx.r14.u32 + 24, ctx.r9.u64);
	// std r8,48(r14)
	PPC_STORE_U64(ctx.r14.u32 + 48, ctx.r8.u64);
	// std r7,56(r14)
	PPC_STORE_U64(ctx.r14.u32 + 56, ctx.r7.u64);
	// std r6,80(r14)
	PPC_STORE_U64(ctx.r14.u32 + 80, ctx.r6.u64);
	// std r5,88(r14)
	PPC_STORE_U64(ctx.r14.u32 + 88, ctx.r5.u64);
	// std r4,112(r14)
	PPC_STORE_U64(ctx.r14.u32 + 112, ctx.r4.u64);
	// std r3,120(r14)
	PPC_STORE_U64(ctx.r14.u32 + 120, ctx.r3.u64);
	// std r31,144(r14)
	PPC_STORE_U64(ctx.r14.u32 + 144, ctx.r31.u64);
	// std r30,152(r14)
	PPC_STORE_U64(ctx.r14.u32 + 152, ctx.r30.u64);
	// std r29,176(r14)
	PPC_STORE_U64(ctx.r14.u32 + 176, ctx.r29.u64);
	// std r28,184(r14)
	PPC_STORE_U64(ctx.r14.u32 + 184, ctx.r28.u64);
	// std r27,208(r14)
	PPC_STORE_U64(ctx.r14.u32 + 208, ctx.r27.u64);
	// std r26,216(r14)
	PPC_STORE_U64(ctx.r14.u32 + 216, ctx.r26.u64);
	// std r10,280(r14)
	PPC_STORE_U64(ctx.r14.u32 + 280, ctx.r10.u64);
	// std r25,304(r14)
	PPC_STORE_U64(ctx.r14.u32 + 304, ctx.r25.u64);
	// std r24,312(r14)
	PPC_STORE_U64(ctx.r14.u32 + 312, ctx.r24.u64);
	// stw r23,-352(r1)
	PPC_STORE_U32(ctx.r1.u32 + -352, ctx.r23.u32);
	// stw r11,-348(r1)
	PPC_STORE_U32(ctx.r1.u32 + -348, ctx.r11.u32);
	// stw r11,-344(r1)
	PPC_STORE_U32(ctx.r1.u32 + -344, ctx.r11.u32);
	// stw r11,-340(r1)
	PPC_STORE_U32(ctx.r1.u32 + -340, ctx.r11.u32);
	// stw r22,-360(r1)
	PPC_STORE_U32(ctx.r1.u32 + -360, ctx.r22.u32);
	// stw r11,-356(r1)
	PPC_STORE_U32(ctx.r1.u32 + -356, ctx.r11.u32);
	// stw r11,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r11.u32);
	// stw r11,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r11.u32);
	// stw r21,-328(r1)
	PPC_STORE_U32(ctx.r1.u32 + -328, ctx.r21.u32);
	// stw r11,-324(r1)
	PPC_STORE_U32(ctx.r1.u32 + -324, ctx.r11.u32);
	// stw r11,-320(r1)
	PPC_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// stw r11,-316(r1)
	PPC_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// stw r11,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r11.u32);
	// stw r11,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r11.u32);
	// stw r11,-296(r1)
	PPC_STORE_U32(ctx.r1.u32 + -296, ctx.r11.u32);
	// stw r11,-292(r1)
	PPC_STORE_U32(ctx.r1.u32 + -292, ctx.r11.u32);
	// stw r20,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r20.u32);
	// stw r11,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r11.u32);
	// stw r19,-312(r1)
	PPC_STORE_U32(ctx.r1.u32 + -312, ctx.r19.u32);
	// stw r11,-308(r1)
	PPC_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// stw r11,-336(r1)
	PPC_STORE_U32(ctx.r1.u32 + -336, ctx.r11.u32);
	// stw r11,-332(r1)
	PPC_STORE_U32(ctx.r1.u32 + -332, ctx.r11.u32);
	// stw r11,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r11.u32);
	// stw r11,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r11.u32);
	// stw r11,-304(r1)
	PPC_STORE_U32(ctx.r1.u32 + -304, ctx.r11.u32);
	// stw r11,-300(r1)
	PPC_STORE_U32(ctx.r1.u32 + -300, ctx.r11.u32);
	// stw r11,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r11.u32);
	// stw r11,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r11.u32);
	// addi r10,r17,-19688
	ctx.r10.s64 = ctx.r17.s64 + -19688;
	// lwz r23,-384(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -384);
	// addi r9,r16,-20040
	ctx.r9.s64 = ctx.r16.s64 + -20040;
	// stw r18,-376(r1)
	PPC_STORE_U32(ctx.r1.u32 + -376, ctx.r18.u32);
	// addi r8,r15,1208
	ctx.r8.s64 = ctx.r15.s64 + 1208;
	// stw r11,-372(r1)
	PPC_STORE_U32(ctx.r1.u32 + -372, ctx.r11.u32);
	// stw r11,-368(r1)
	PPC_STORE_U32(ctx.r1.u32 + -368, ctx.r11.u32);
	// addi r7,r23,-28824
	ctx.r7.s64 = ctx.r23.s64 + -28824;
	// stw r11,-364(r1)
	PPC_STORE_U32(ctx.r1.u32 + -364, ctx.r11.u32);
	// stw r11,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r11.u32);
	// stw r11,-380(r1)
	PPC_STORE_U32(ctx.r1.u32 + -380, ctx.r11.u32);
	// stw r11,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r11.u32);
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// stw r10,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r10.u32);
	// stw r9,-384(r1)
	PPC_STORE_U32(ctx.r1.u32 + -384, ctx.r9.u32);
	// stw r8,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r8.u32);
	// stw r11,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r11.u32);
	// stw r11,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r11.u32);
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r11.u32);
	// stw r7,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r7.u32);
	// stw r11,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r11.u32);
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// stw r11,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r11.u32);
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// stw r11,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r11.u32);
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// ld r10,-344(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -344);
	// ld r11,-352(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -352);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// ld r8,-360(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -360);
	// ld r7,-320(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -320);
	// ld r6,-328(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -328);
	// ld r5,-296(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -296);
	// ld r4,-280(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// ld r3,-312(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -312);
	// ld r31,-264(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// ld r30,-256(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// ld r29,-336(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -336);
	// ld r28,-272(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// ld r27,-304(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -304);
	// ld r26,-368(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -368);
	// ld r25,-376(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -376);
	// ld r24,-384(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -384);
	// ld r23,-248(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// ld r22,-176(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// ld r21,-224(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// ld r20,-192(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// ld r19,-208(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// ld r18,-240(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// ld r17,-232(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// ld r16,-216(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// ld r15,-200(r1)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r10,336(r14)
	PPC_STORE_U64(ctx.r14.u32 + 336, ctx.r10.u64);
	// std r11,344(r14)
	PPC_STORE_U64(ctx.r14.u32 + 344, ctx.r11.u64);
	// std r9,368(r14)
	PPC_STORE_U64(ctx.r14.u32 + 368, ctx.r9.u64);
	// std r8,376(r14)
	PPC_STORE_U64(ctx.r14.u32 + 376, ctx.r8.u64);
	// std r7,400(r14)
	PPC_STORE_U64(ctx.r14.u32 + 400, ctx.r7.u64);
	// std r6,408(r14)
	PPC_STORE_U64(ctx.r14.u32 + 408, ctx.r6.u64);
	// std r5,432(r14)
	PPC_STORE_U64(ctx.r14.u32 + 432, ctx.r5.u64);
	// std r4,440(r14)
	PPC_STORE_U64(ctx.r14.u32 + 440, ctx.r4.u64);
	// std r3,464(r14)
	PPC_STORE_U64(ctx.r14.u32 + 464, ctx.r3.u64);
	// std r31,472(r14)
	PPC_STORE_U64(ctx.r14.u32 + 472, ctx.r31.u64);
	// std r30,496(r14)
	PPC_STORE_U64(ctx.r14.u32 + 496, ctx.r30.u64);
	// std r29,504(r14)
	PPC_STORE_U64(ctx.r14.u32 + 504, ctx.r29.u64);
	// std r28,528(r14)
	PPC_STORE_U64(ctx.r14.u32 + 528, ctx.r28.u64);
	// std r27,536(r14)
	PPC_STORE_U64(ctx.r14.u32 + 536, ctx.r27.u64);
	// std r26,560(r14)
	PPC_STORE_U64(ctx.r14.u32 + 560, ctx.r26.u64);
	// std r25,568(r14)
	PPC_STORE_U64(ctx.r14.u32 + 568, ctx.r25.u64);
	// std r24,592(r14)
	PPC_STORE_U64(ctx.r14.u32 + 592, ctx.r24.u64);
	// std r23,600(r14)
	PPC_STORE_U64(ctx.r14.u32 + 600, ctx.r23.u64);
	// std r22,624(r14)
	PPC_STORE_U64(ctx.r14.u32 + 624, ctx.r22.u64);
	// std r21,632(r14)
	PPC_STORE_U64(ctx.r14.u32 + 632, ctx.r21.u64);
	// std r20,656(r14)
	PPC_STORE_U64(ctx.r14.u32 + 656, ctx.r20.u64);
	// std r19,664(r14)
	PPC_STORE_U64(ctx.r14.u32 + 664, ctx.r19.u64);
	// ld r11,-184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r18,688(r14)
	PPC_STORE_U64(ctx.r14.u32 + 688, ctx.r18.u64);
	// std r17,696(r14)
	PPC_STORE_U64(ctx.r14.u32 + 696, ctx.r17.u64);
	// std r16,720(r14)
	PPC_STORE_U64(ctx.r14.u32 + 720, ctx.r16.u64);
	// std r15,752(r14)
	PPC_STORE_U64(ctx.r14.u32 + 752, ctx.r15.u64);
	// std r11,728(r14)
	PPC_STORE_U64(ctx.r14.u32 + 728, ctx.r11.u64);
	// ld r11,-168(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r11,760(r14)
	PPC_STORE_U64(ctx.r14.u32 + 760, ctx.r11.u64);
	// b 0x82a7de20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316B810"))) PPC_WEAK_FUNC(sub_8316B810);
PPC_FUNC_IMPL(__imp__sub_8316B810) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3988
	ctx.r3.s64 = ctx.r11.s64 + -3988;
	// bl 0x82e73af8
	ctx.lr = 0x8316B82C;
	sub_82E73AF8(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r31,r10,12980
	ctx.r31.s64 = ctx.r10.s64 + 12980;
	// addi r3,r9,-3972
	ctx.r3.s64 = ctx.r9.s64 + -3972;
	// stw r11,12980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12980, ctx.r11.u32);
	// bl 0x82e73af8
	ctx.lr = 0x8316B848;
	sub_82E73AF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8316B860"))) PPC_WEAK_FUNC(sub_8316B860);
PPC_FUNC_IMPL(__imp__sub_8316B860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13616
	ctx.r3.s64 = ctx.r11.s64 + 13616;
	// bl 0x82ca7538
	ctx.lr = 0x8316B878;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B890"))) PPC_WEAK_FUNC(sub_8316B890);
PPC_FUNC_IMPL(__imp__sub_8316B890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13656
	ctx.r3.s64 = ctx.r11.s64 + 13656;
	// bl 0x82e73af8
	ctx.lr = 0x8316B8A8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B8C0"))) PPC_WEAK_FUNC(sub_8316B8C0);
PPC_FUNC_IMPL(__imp__sub_8316B8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13668
	ctx.r3.s64 = ctx.r11.s64 + 13668;
	// bl 0x82e73af8
	ctx.lr = 0x8316B8D8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B8F0"))) PPC_WEAK_FUNC(sub_8316B8F0);
PPC_FUNC_IMPL(__imp__sub_8316B8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,1612
	ctx.r3.s64 = ctx.r11.s64 + 1612;
	// bl 0x82e73af8
	ctx.lr = 0x8316B908;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B920"))) PPC_WEAK_FUNC(sub_8316B920);
PPC_FUNC_IMPL(__imp__sub_8316B920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,1632
	ctx.r3.s64 = ctx.r11.s64 + 1632;
	// bl 0x82e73af8
	ctx.lr = 0x8316B938;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B950"))) PPC_WEAK_FUNC(sub_8316B950);
PPC_FUNC_IMPL(__imp__sub_8316B950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,1652
	ctx.r3.s64 = ctx.r11.s64 + 1652;
	// bl 0x82e73ab0
	ctx.lr = 0x8316B968;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B980"))) PPC_WEAK_FUNC(sub_8316B980);
PPC_FUNC_IMPL(__imp__sub_8316B980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13656
	ctx.r3.s64 = ctx.r11.s64 + 13656;
	// bl 0x82e73af8
	ctx.lr = 0x8316B998;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B9B0"))) PPC_WEAK_FUNC(sub_8316B9B0);
PPC_FUNC_IMPL(__imp__sub_8316B9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13692
	ctx.r3.s64 = ctx.r11.s64 + 13692;
	// bl 0x82e73af8
	ctx.lr = 0x8316B9C8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B9E0"))) PPC_WEAK_FUNC(sub_8316B9E0);
PPC_FUNC_IMPL(__imp__sub_8316B9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,1612
	ctx.r3.s64 = ctx.r11.s64 + 1612;
	// bl 0x82e73af8
	ctx.lr = 0x8316B9F8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BA10"))) PPC_WEAK_FUNC(sub_8316BA10);
PPC_FUNC_IMPL(__imp__sub_8316BA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,1632
	ctx.r3.s64 = ctx.r11.s64 + 1632;
	// bl 0x82e73af8
	ctx.lr = 0x8316BA28;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BA40"))) PPC_WEAK_FUNC(sub_8316BA40);
PPC_FUNC_IMPL(__imp__sub_8316BA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,12776
	ctx.r3.s64 = ctx.r11.s64 + 12776;
	// b 0x82462098
	sub_82462098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316BA50"))) PPC_WEAK_FUNC(sub_8316BA50);
PPC_FUNC_IMPL(__imp__sub_8316BA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13704
	ctx.r3.s64 = ctx.r11.s64 + 13704;
	// bl 0x82e73af8
	ctx.lr = 0x8316BA68;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BA80"))) PPC_WEAK_FUNC(sub_8316BA80);
PPC_FUNC_IMPL(__imp__sub_8316BA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13720
	ctx.r3.s64 = ctx.r11.s64 + 13720;
	// bl 0x82e73af8
	ctx.lr = 0x8316BA98;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BAB0"))) PPC_WEAK_FUNC(sub_8316BAB0);
PPC_FUNC_IMPL(__imp__sub_8316BAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13744
	ctx.r3.s64 = ctx.r11.s64 + 13744;
	// bl 0x82e73af8
	ctx.lr = 0x8316BAC8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BAE0"))) PPC_WEAK_FUNC(sub_8316BAE0);
PPC_FUNC_IMPL(__imp__sub_8316BAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13760
	ctx.r3.s64 = ctx.r11.s64 + 13760;
	// bl 0x82e73af8
	ctx.lr = 0x8316BAF8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BB10"))) PPC_WEAK_FUNC(sub_8316BB10);
PPC_FUNC_IMPL(__imp__sub_8316BB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13776
	ctx.r3.s64 = ctx.r11.s64 + 13776;
	// bl 0x82e73af8
	ctx.lr = 0x8316BB28;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BB40"))) PPC_WEAK_FUNC(sub_8316BB40);
PPC_FUNC_IMPL(__imp__sub_8316BB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13792
	ctx.r3.s64 = ctx.r11.s64 + 13792;
	// bl 0x82e73af8
	ctx.lr = 0x8316BB58;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,12752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BB70"))) PPC_WEAK_FUNC(sub_8316BB70);
PPC_FUNC_IMPL(__imp__sub_8316BB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-11576
	ctx.r3.s64 = ctx.r11.s64 + -11576;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316BB80"))) PPC_WEAK_FUNC(sub_8316BB80);
PPC_FUNC_IMPL(__imp__sub_8316BB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,13808
	ctx.r9.s64 = ctx.r11.s64 + 13808;
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

__attribute__((alias("__imp__sub_8316BBB0"))) PPC_WEAK_FUNC(sub_8316BBB0);
PPC_FUNC_IMPL(__imp__sub_8316BBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,13744
	ctx.r9.s64 = ctx.r11.s64 + 13744;
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

__attribute__((alias("__imp__sub_8316BBE0"))) PPC_WEAK_FUNC(sub_8316BBE0);
PPC_FUNC_IMPL(__imp__sub_8316BBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,13328
	ctx.r9.s64 = ctx.r11.s64 + 13328;
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

__attribute__((alias("__imp__sub_8316BC10"))) PPC_WEAK_FUNC(sub_8316BC10);
PPC_FUNC_IMPL(__imp__sub_8316BC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,13728
	ctx.r9.s64 = ctx.r11.s64 + 13728;
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

__attribute__((alias("__imp__sub_8316BC40"))) PPC_WEAK_FUNC(sub_8316BC40);
PPC_FUNC_IMPL(__imp__sub_8316BC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,13680
	ctx.r10.s64 = ctx.r10.s64 + 13680;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BC60"))) PPC_WEAK_FUNC(sub_8316BC60);
PPC_FUNC_IMPL(__imp__sub_8316BC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,13312
	ctx.r10.s64 = ctx.r10.s64 + 13312;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BC80"))) PPC_WEAK_FUNC(sub_8316BC80);
PPC_FUNC_IMPL(__imp__sub_8316BC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,13760
	ctx.r10.s64 = ctx.r10.s64 + 13760;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BCA0"))) PPC_WEAK_FUNC(sub_8316BCA0);
PPC_FUNC_IMPL(__imp__sub_8316BCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,13872
	ctx.r3.s64 = ctx.r11.s64 + 13872;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316BCB0"))) PPC_WEAK_FUNC(sub_8316BCB0);
PPC_FUNC_IMPL(__imp__sub_8316BCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13776
	ctx.r3.s64 = ctx.r11.s64 + 13776;
	// bl 0x82e73af8
	ctx.lr = 0x8316BCC8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BCE0"))) PPC_WEAK_FUNC(sub_8316BCE0);
PPC_FUNC_IMPL(__imp__sub_8316BCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,13792
	ctx.r3.s64 = ctx.r11.s64 + 13792;
	// bl 0x82e73af8
	ctx.lr = 0x8316BCF8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BD10"))) PPC_WEAK_FUNC(sub_8316BD10);
PPC_FUNC_IMPL(__imp__sub_8316BD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,22604
	ctx.r3.s64 = ctx.r11.s64 + 22604;
	// bl 0x82e73af8
	ctx.lr = 0x8316BD28;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13804, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BD40"))) PPC_WEAK_FUNC(sub_8316BD40);
PPC_FUNC_IMPL(__imp__sub_8316BD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,22620
	ctx.r3.s64 = ctx.r11.s64 + 22620;
	// bl 0x82e73af8
	ctx.lr = 0x8316BD58;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13704, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BD70"))) PPC_WEAK_FUNC(sub_8316BD70);
PPC_FUNC_IMPL(__imp__sub_8316BD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,22640
	ctx.r3.s64 = ctx.r11.s64 + 22640;
	// bl 0x82e73af8
	ctx.lr = 0x8316BD88;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BDA0"))) PPC_WEAK_FUNC(sub_8316BDA0);
PPC_FUNC_IMPL(__imp__sub_8316BDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,22664
	ctx.r3.s64 = ctx.r11.s64 + 22664;
	// bl 0x82e73af8
	ctx.lr = 0x8316BDB8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13856, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BDD0"))) PPC_WEAK_FUNC(sub_8316BDD0);
PPC_FUNC_IMPL(__imp__sub_8316BDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,22680
	ctx.r4.s64 = ctx.r11.s64 + 22680;
	// addi r3,r10,13776
	ctx.r3.s64 = ctx.r10.s64 + 13776;
	// bl 0x82450f48
	ctx.lr = 0x8316BDF0;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-11480
	ctx.r3.s64 = ctx.r11.s64 + -11480;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316BDFC;
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

__attribute__((alias("__imp__sub_8316BE10"))) PPC_WEAK_FUNC(sub_8316BE10);
PPC_FUNC_IMPL(__imp__sub_8316BE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,22700
	ctx.r4.s64 = ctx.r11.s64 + 22700;
	// addi r3,r10,13824
	ctx.r3.s64 = ctx.r10.s64 + 13824;
	// bl 0x82450f48
	ctx.lr = 0x8316BE30;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-11456
	ctx.r3.s64 = ctx.r11.s64 + -11456;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316BE3C;
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

__attribute__((alias("__imp__sub_8316BE50"))) PPC_WEAK_FUNC(sub_8316BE50);
PPC_FUNC_IMPL(__imp__sub_8316BE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,-13984
	ctx.r4.s64 = ctx.r11.s64 + -13984;
	// addi r3,r10,13344
	ctx.r3.s64 = ctx.r10.s64 + 13344;
	// bl 0x82450f48
	ctx.lr = 0x8316BE70;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-11432
	ctx.r3.s64 = ctx.r11.s64 + -11432;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316BE7C;
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

__attribute__((alias("__imp__sub_8316BE90"))) PPC_WEAK_FUNC(sub_8316BE90);
PPC_FUNC_IMPL(__imp__sub_8316BE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21224
	ctx.r3.s64 = ctx.r11.s64 + 21224;
	// bl 0x82e73af8
	ctx.lr = 0x8316BEA8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BEC0"))) PPC_WEAK_FUNC(sub_8316BEC0);
PPC_FUNC_IMPL(__imp__sub_8316BEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21240
	ctx.r3.s64 = ctx.r11.s64 + 21240;
	// bl 0x82e73af8
	ctx.lr = 0x8316BED8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13860(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13860, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BEF0"))) PPC_WEAK_FUNC(sub_8316BEF0);
PPC_FUNC_IMPL(__imp__sub_8316BEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,22756
	ctx.r3.s64 = ctx.r11.s64 + 22756;
	// bl 0x82e73af8
	ctx.lr = 0x8316BF08;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13852(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BF20"))) PPC_WEAK_FUNC(sub_8316BF20);
PPC_FUNC_IMPL(__imp__sub_8316BF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,1612
	ctx.r3.s64 = ctx.r11.s64 + 1612;
	// bl 0x82e73af8
	ctx.lr = 0x8316BF38;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13700, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BF50"))) PPC_WEAK_FUNC(sub_8316BF50);
PPC_FUNC_IMPL(__imp__sub_8316BF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,1632
	ctx.r3.s64 = ctx.r11.s64 + 1632;
	// bl 0x82e73af8
	ctx.lr = 0x8316BF68;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BF80"))) PPC_WEAK_FUNC(sub_8316BF80);
PPC_FUNC_IMPL(__imp__sub_8316BF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,22764
	ctx.r3.s64 = ctx.r11.s64 + 22764;
	// bl 0x82e73af8
	ctx.lr = 0x8316BF98;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13868, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BFB0"))) PPC_WEAK_FUNC(sub_8316BFB0);
PPC_FUNC_IMPL(__imp__sub_8316BFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x8316BFB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r30,r11,-12656
	ctx.r30.s64 = ctx.r11.s64 + -12656;
	// addi r11,r10,13592
	ctx.r11.s64 = ctx.r10.s64 + 13592;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316BFE0;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,23112
	ctx.r3.s64 = ctx.r11.s64 + 23112;
	// bl 0x82ca7538
	ctx.lr = 0x8316BFF0;
	sub_82CA7538(ctx, base);
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r29,r8,13376
	ctx.r29.s64 = ctx.r8.s64 + 13376;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,13376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13376, ctx.r31.u32);
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r28,r7,8460
	ctx.r28.s64 = ctx.r7.s64 + 8460;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r11,r10,-7888
	ctx.r11.s64 = ctx.r10.s64 + -7888;
	// std r9,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r9.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C030;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,23092
	ctx.r3.s64 = ctx.r11.s64 + 23092;
	// bl 0x82ca7538
	ctx.lr = 0x8316C040;
	sub_82CA7538(ctx, base);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r9,24(r29)
	PPC_STORE_U64(ctx.r29.u32 + 24, ctx.r9.u64);
	// addi r11,r11,-7800
	ctx.r11.s64 = ctx.r11.s64 + -7800;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C070;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,23068
	ctx.r3.s64 = ctx.r11.s64 + 23068;
	// bl 0x82ca7538
	ctx.lr = 0x8316C080;
	sub_82CA7538(ctx, base);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// stw r10,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r9,40(r29)
	PPC_STORE_U64(ctx.r29.u32 + 40, ctx.r9.u64);
	// addi r11,r11,-20808
	ctx.r11.s64 = ctx.r11.s64 + -20808;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C0B0;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,23048
	ctx.r3.s64 = ctx.r11.s64 + 23048;
	// bl 0x82ca7538
	ctx.lr = 0x8316C0C0;
	sub_82CA7538(ctx, base);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r10.u32);
	// addi r10,r9,-20720
	ctx.r10.s64 = ctx.r9.s64 + -20720;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// std r11,56(r29)
	PPC_STORE_U64(ctx.r29.u32 + 56, ctx.r11.u64);
	// bl 0x82ca7538
	ctx.lr = 0x8316C0F0;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,23028
	ctx.r3.s64 = ctx.r11.s64 + 23028;
	// bl 0x82ca7538
	ctx.lr = 0x8316C100;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r11.u32);
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// stw r10,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-20808
	ctx.r11.s64 = ctx.r11.s64 + -20808;
	// std r9,72(r29)
	PPC_STORE_U64(ctx.r29.u32 + 72, ctx.r9.u64);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C130;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,23004
	ctx.r3.s64 = ctx.r11.s64 + 23004;
	// bl 0x82ca7538
	ctx.lr = 0x8316C140;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r11.u32);
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// stw r10,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r9,88(r29)
	PPC_STORE_U64(ctx.r29.u32 + 88, ctx.r9.u64);
	// addi r11,r11,-20720
	ctx.r11.s64 = ctx.r11.s64 + -20720;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C170;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,22980
	ctx.r3.s64 = ctx.r11.s64 + 22980;
	// bl 0x82ca7538
	ctx.lr = 0x8316C180;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// stw r10,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r9,104(r29)
	PPC_STORE_U64(ctx.r29.u32 + 104, ctx.r9.u64);
	// addi r11,r11,-20632
	ctx.r11.s64 = ctx.r11.s64 + -20632;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C1B0;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r28,r3,16,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,22968
	ctx.r3.s64 = ctx.r11.s64 + 22968;
	// bl 0x82ca7538
	ctx.lr = 0x8316C1C0;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 | ctx.r28.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r10,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r10.u32);
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// std r9,120(r29)
	PPC_STORE_U64(ctx.r29.u32 + 120, ctx.r9.u64);
	// addi r28,r11,30652
	ctx.r28.s64 = ctx.r11.s64 + 30652;
	// addi r11,r10,-32
	ctx.r11.s64 = ctx.r10.s64 + -32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C1F8;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,22948
	ctx.r3.s64 = ctx.r11.s64 + 22948;
	// bl 0x82ca7538
	ctx.lr = 0x8316C208;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r11.u32);
	// lis r8,-32138
	ctx.r8.s64 = -2106195968;
	// stw r10,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r9,136(r29)
	PPC_STORE_U64(ctx.r29.u32 + 136, ctx.r9.u64);
	// addi r11,r8,-848
	ctx.r11.s64 = ctx.r8.s64 + -848;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C238;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,22932
	ctx.r3.s64 = ctx.r11.s64 + 22932;
	// bl 0x82ca7538
	ctx.lr = 0x8316C248;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r11.u32);
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// stw r10,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r9,152(r29)
	PPC_STORE_U64(ctx.r29.u32 + 152, ctx.r9.u64);
	// addi r11,r11,-736
	ctx.r11.s64 = ctx.r11.s64 + -736;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C278;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,22916
	ctx.r3.s64 = ctx.r11.s64 + 22916;
	// bl 0x82ca7538
	ctx.lr = 0x8316C288;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 164, ctx.r11.u32);
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// stw r10,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r9,168(r29)
	PPC_STORE_U64(ctx.r29.u32 + 168, ctx.r9.u64);
	// addi r11,r11,-208
	ctx.r11.s64 = ctx.r11.s64 + -208;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C2B8;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,22900
	ctx.r3.s64 = ctx.r11.s64 + 22900;
	// bl 0x82ca7538
	ctx.lr = 0x8316C2C8;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r11,180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 180, ctx.r11.u32);
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// stw r10,176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 176, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r9,184(r29)
	PPC_STORE_U64(ctx.r29.u32 + 184, ctx.r9.u64);
	// addi r11,r11,-384
	ctx.r11.s64 = ctx.r11.s64 + -384;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C2F8;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,22888
	ctx.r3.s64 = ctx.r11.s64 + 22888;
	// bl 0x82ca7538
	ctx.lr = 0x8316C308;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,196(r29)
	PPC_STORE_U32(ctx.r29.u32 + 196, ctx.r11.u32);
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// stw r10,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r9,200(r29)
	PPC_STORE_U64(ctx.r29.u32 + 200, ctx.r9.u64);
	// addi r11,r11,-560
	ctx.r11.s64 = ctx.r11.s64 + -560;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C338;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,22876
	ctx.r3.s64 = ctx.r11.s64 + 22876;
	// bl 0x82ca7538
	ctx.lr = 0x8316C348;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r11,212(r29)
	PPC_STORE_U32(ctx.r29.u32 + 212, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r10.u32);
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// std r9,216(r29)
	PPC_STORE_U64(ctx.r29.u32 + 216, ctx.r9.u64);
	// addi r11,r10,-7976
	ctx.r11.s64 = ctx.r10.s64 + -7976;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C378;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r27,r3,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,22856
	ctx.r3.s64 = ctx.r11.s64 + 22856;
	// bl 0x82ca7538
	ctx.lr = 0x8316C388;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 | ctx.r27.u64;
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,228(r29)
	PPC_STORE_U32(ctx.r29.u32 + 228, ctx.r11.u32);
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// stw r10,224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 224, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,13888
	ctx.r11.s64 = ctx.r11.s64 + 13888;
	// std r9,232(r29)
	PPC_STORE_U64(ctx.r29.u32 + 232, ctx.r9.u64);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C3B8;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r28,r3,16,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,22832
	ctx.r3.s64 = ctx.r11.s64 + 22832;
	// bl 0x82ca7538
	ctx.lr = 0x8316C3C8;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 | ctx.r28.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 244, ctx.r11.u32);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// stw r10,240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 240, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r9,248(r29)
	PPC_STORE_U64(ctx.r29.u32 + 248, ctx.r9.u64);
	// addi r11,r11,13720
	ctx.r11.s64 = ctx.r11.s64 + 13720;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C3F8;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r28,r3,16,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,22816
	ctx.r3.s64 = ctx.r11.s64 + 22816;
	// bl 0x82ca7538
	ctx.lr = 0x8316C408;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 | ctx.r28.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,260(r29)
	PPC_STORE_U32(ctx.r29.u32 + 260, ctx.r11.u32);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// stw r10,256(r29)
	PPC_STORE_U32(ctx.r29.u32 + 256, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r9,264(r29)
	PPC_STORE_U64(ctx.r29.u32 + 264, ctx.r9.u64);
	// addi r11,r11,13848
	ctx.r11.s64 = ctx.r11.s64 + 13848;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C438;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r28,r3,16,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,22796
	ctx.r3.s64 = ctx.r11.s64 + 22796;
	// bl 0x82ca7538
	ctx.lr = 0x8316C448;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 | ctx.r28.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r11,276(r29)
	PPC_STORE_U32(ctx.r29.u32 + 276, ctx.r11.u32);
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// stw r10,272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 272, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r9,280(r29)
	PPC_STORE_U64(ctx.r29.u32 + 280, ctx.r9.u64);
	// addi r11,r11,-2936
	ctx.r11.s64 = ctx.r11.s64 + -2936;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8316C478;
	sub_82CA7538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r31,r3,16,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,22776
	ctx.r3.s64 = ctx.r11.s64 + 22776;
	// bl 0x82ca7538
	ctx.lr = 0x8316C488;
	sub_82CA7538(ctx, base);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 | ctx.r31.u64;
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r11,292(r29)
	PPC_STORE_U32(ctx.r29.u32 + 292, ctx.r11.u32);
	// stw r10,288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 288, ctx.r10.u32);
	// std r9,296(r29)
	PPC_STORE_U64(ctx.r29.u32 + 296, ctx.r9.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316C4A8"))) PPC_WEAK_FUNC(sub_8316C4A8);
PPC_FUNC_IMPL(__imp__sub_8316C4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21344
	ctx.r3.s64 = ctx.r11.s64 + 21344;
	// bl 0x82e73af8
	ctx.lr = 0x8316C4C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C4D8"))) PPC_WEAK_FUNC(sub_8316C4D8);
PPC_FUNC_IMPL(__imp__sub_8316C4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,21372
	ctx.r3.s64 = ctx.r11.s64 + 21372;
	// bl 0x82e73af8
	ctx.lr = 0x8316C4F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C508"))) PPC_WEAK_FUNC(sub_8316C508);
PPC_FUNC_IMPL(__imp__sub_8316C508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-10688
	ctx.r3.s64 = ctx.r11.s64 + -10688;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316C518"))) PPC_WEAK_FUNC(sub_8316C518);
PPC_FUNC_IMPL(__imp__sub_8316C518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14880
	ctx.r9.s64 = ctx.r11.s64 + 14880;
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

__attribute__((alias("__imp__sub_8316C548"))) PPC_WEAK_FUNC(sub_8316C548);
PPC_FUNC_IMPL(__imp__sub_8316C548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14512
	ctx.r9.s64 = ctx.r11.s64 + 14512;
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

__attribute__((alias("__imp__sub_8316C578"))) PPC_WEAK_FUNC(sub_8316C578);
PPC_FUNC_IMPL(__imp__sub_8316C578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,14112
	ctx.r9.s64 = ctx.r11.s64 + 14112;
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

__attribute__((alias("__imp__sub_8316C5A8"))) PPC_WEAK_FUNC(sub_8316C5A8);
PPC_FUNC_IMPL(__imp__sub_8316C5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_8316C5D8"))) PPC_WEAK_FUNC(sub_8316C5D8);
PPC_FUNC_IMPL(__imp__sub_8316C5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
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

__attribute__((alias("__imp__sub_8316C5F8"))) PPC_WEAK_FUNC(sub_8316C5F8);
PPC_FUNC_IMPL(__imp__sub_8316C5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,14096
	ctx.r10.s64 = ctx.r10.s64 + 14096;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C618"))) PPC_WEAK_FUNC(sub_8316C618);
PPC_FUNC_IMPL(__imp__sub_8316C618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,14832
	ctx.r10.s64 = ctx.r10.s64 + 14832;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C638"))) PPC_WEAK_FUNC(sub_8316C638);
PPC_FUNC_IMPL(__imp__sub_8316C638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,15104
	ctx.r3.s64 = ctx.r11.s64 + 15104;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316C648"))) PPC_WEAK_FUNC(sub_8316C648);
PPC_FUNC_IMPL(__imp__sub_8316C648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,32676
	ctx.r3.s64 = ctx.r11.s64 + 32676;
	// bl 0x82ca7538
	ctx.lr = 0x8316C660;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C678"))) PPC_WEAK_FUNC(sub_8316C678);
PPC_FUNC_IMPL(__imp__sub_8316C678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,32696
	ctx.r3.s64 = ctx.r11.s64 + 32696;
	// bl 0x82ca7538
	ctx.lr = 0x8316C690;
	sub_82CA7538(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C6A8"))) PPC_WEAK_FUNC(sub_8316C6A8);
PPC_FUNC_IMPL(__imp__sub_8316C6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,32708
	ctx.r3.s64 = ctx.r11.s64 + 32708;
	// bl 0x82e73af8
	ctx.lr = 0x8316C6C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C6D8"))) PPC_WEAK_FUNC(sub_8316C6D8);
PPC_FUNC_IMPL(__imp__sub_8316C6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,32724
	ctx.r3.s64 = ctx.r11.s64 + 32724;
	// bl 0x82e73af8
	ctx.lr = 0x8316C6F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14072, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C708"))) PPC_WEAK_FUNC(sub_8316C708);
PPC_FUNC_IMPL(__imp__sub_8316C708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,32740
	ctx.r3.s64 = ctx.r11.s64 + 32740;
	// bl 0x82e73af8
	ctx.lr = 0x8316C720;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C738"))) PPC_WEAK_FUNC(sub_8316C738);
PPC_FUNC_IMPL(__imp__sub_8316C738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,32752
	ctx.r3.s64 = ctx.r11.s64 + 32752;
	// bl 0x82e73af8
	ctx.lr = 0x8316C750;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C768"))) PPC_WEAK_FUNC(sub_8316C768);
PPC_FUNC_IMPL(__imp__sub_8316C768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,32764
	ctx.r3.s64 = ctx.r11.s64 + 32764;
	// bl 0x82e73af8
	ctx.lr = 0x8316C780;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C798"))) PPC_WEAK_FUNC(sub_8316C798);
PPC_FUNC_IMPL(__imp__sub_8316C798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32752
	ctx.r3.s64 = ctx.r11.s64 + -32752;
	// bl 0x82e73af8
	ctx.lr = 0x8316C7B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C7C8"))) PPC_WEAK_FUNC(sub_8316C7C8);
PPC_FUNC_IMPL(__imp__sub_8316C7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,32740
	ctx.r3.s64 = ctx.r11.s64 + 32740;
	// bl 0x82e73af8
	ctx.lr = 0x8316C7E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14400, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C7F8"))) PPC_WEAK_FUNC(sub_8316C7F8);
PPC_FUNC_IMPL(__imp__sub_8316C7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,32752
	ctx.r3.s64 = ctx.r11.s64 + 32752;
	// bl 0x82e73af8
	ctx.lr = 0x8316C810;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C828"))) PPC_WEAK_FUNC(sub_8316C828);
PPC_FUNC_IMPL(__imp__sub_8316C828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,6908
	ctx.r3.s64 = ctx.r11.s64 + 6908;
	// bl 0x82e73af8
	ctx.lr = 0x8316C840;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C858"))) PPC_WEAK_FUNC(sub_8316C858);
PPC_FUNC_IMPL(__imp__sub_8316C858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,6908
	ctx.r3.s64 = ctx.r11.s64 + 6908;
	// bl 0x82e73af8
	ctx.lr = 0x8316C870;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14060, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C888"))) PPC_WEAK_FUNC(sub_8316C888);
PPC_FUNC_IMPL(__imp__sub_8316C888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,6908
	ctx.r3.s64 = ctx.r11.s64 + 6908;
	// bl 0x82e73af8
	ctx.lr = 0x8316C8A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C8B8"))) PPC_WEAK_FUNC(sub_8316C8B8);
PPC_FUNC_IMPL(__imp__sub_8316C8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,6908
	ctx.r3.s64 = ctx.r11.s64 + 6908;
	// bl 0x82e73af8
	ctx.lr = 0x8316C8D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C8E8"))) PPC_WEAK_FUNC(sub_8316C8E8);
PPC_FUNC_IMPL(__imp__sub_8316C8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32732
	ctx.r3.s64 = ctx.r11.s64 + -32732;
	// bl 0x82e73af8
	ctx.lr = 0x8316C900;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C918"))) PPC_WEAK_FUNC(sub_8316C918);
PPC_FUNC_IMPL(__imp__sub_8316C918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32720
	ctx.r3.s64 = ctx.r11.s64 + -32720;
	// bl 0x82e73af8
	ctx.lr = 0x8316C930;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C948"))) PPC_WEAK_FUNC(sub_8316C948);
PPC_FUNC_IMPL(__imp__sub_8316C948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,20320
	ctx.r3.s64 = ctx.r11.s64 + 20320;
	// bl 0x82e73af8
	ctx.lr = 0x8316C960;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C978"))) PPC_WEAK_FUNC(sub_8316C978);
PPC_FUNC_IMPL(__imp__sub_8316C978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32700
	ctx.r3.s64 = ctx.r11.s64 + -32700;
	// bl 0x82e73af8
	ctx.lr = 0x8316C990;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14068, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C9A8"))) PPC_WEAK_FUNC(sub_8316C9A8);
PPC_FUNC_IMPL(__imp__sub_8316C9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32684
	ctx.r3.s64 = ctx.r11.s64 + -32684;
	// bl 0x82e73af8
	ctx.lr = 0x8316C9C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C9D8"))) PPC_WEAK_FUNC(sub_8316C9D8);
PPC_FUNC_IMPL(__imp__sub_8316C9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32672
	ctx.r3.s64 = ctx.r11.s64 + -32672;
	// bl 0x82e73af8
	ctx.lr = 0x8316C9F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CA08"))) PPC_WEAK_FUNC(sub_8316CA08);
PPC_FUNC_IMPL(__imp__sub_8316CA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32660
	ctx.r3.s64 = ctx.r11.s64 + -32660;
	// bl 0x82e73af8
	ctx.lr = 0x8316CA20;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CA38"))) PPC_WEAK_FUNC(sub_8316CA38);
PPC_FUNC_IMPL(__imp__sub_8316CA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32636
	ctx.r3.s64 = ctx.r11.s64 + -32636;
	// bl 0x82e73af8
	ctx.lr = 0x8316CA50;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CA68"))) PPC_WEAK_FUNC(sub_8316CA68);
PPC_FUNC_IMPL(__imp__sub_8316CA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32616
	ctx.r3.s64 = ctx.r11.s64 + -32616;
	// bl 0x82e73af8
	ctx.lr = 0x8316CA80;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CA98"))) PPC_WEAK_FUNC(sub_8316CA98);
PPC_FUNC_IMPL(__imp__sub_8316CA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32596
	ctx.r3.s64 = ctx.r11.s64 + -32596;
	// bl 0x82e73af8
	ctx.lr = 0x8316CAB0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14896, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CAC8"))) PPC_WEAK_FUNC(sub_8316CAC8);
PPC_FUNC_IMPL(__imp__sub_8316CAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32572
	ctx.r3.s64 = ctx.r11.s64 + -32572;
	// bl 0x82e73af8
	ctx.lr = 0x8316CAE0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CAF8"))) PPC_WEAK_FUNC(sub_8316CAF8);
PPC_FUNC_IMPL(__imp__sub_8316CAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32560
	ctx.r3.s64 = ctx.r11.s64 + -32560;
	// bl 0x82e73af8
	ctx.lr = 0x8316CB10;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CB28"))) PPC_WEAK_FUNC(sub_8316CB28);
PPC_FUNC_IMPL(__imp__sub_8316CB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32544
	ctx.r3.s64 = ctx.r11.s64 + -32544;
	// bl 0x82e73af8
	ctx.lr = 0x8316CB40;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15044(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15044, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CB58"))) PPC_WEAK_FUNC(sub_8316CB58);
PPC_FUNC_IMPL(__imp__sub_8316CB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32528
	ctx.r3.s64 = ctx.r11.s64 + -32528;
	// bl 0x82e73af8
	ctx.lr = 0x8316CB70;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CB88"))) PPC_WEAK_FUNC(sub_8316CB88);
PPC_FUNC_IMPL(__imp__sub_8316CB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,25868
	ctx.r3.s64 = ctx.r11.s64 + 25868;
	// bl 0x82e73ab0
	ctx.lr = 0x8316CBA0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CBB8"))) PPC_WEAK_FUNC(sub_8316CBB8);
PPC_FUNC_IMPL(__imp__sub_8316CBB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,26624
	ctx.r3.s64 = ctx.r11.s64 + 26624;
	// bl 0x82e73ab0
	ctx.lr = 0x8316CBD0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CBE8"))) PPC_WEAK_FUNC(sub_8316CBE8);
PPC_FUNC_IMPL(__imp__sub_8316CBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-13980
	ctx.r3.s64 = ctx.r11.s64 + -13980;
	// bl 0x82e73ab0
	ctx.lr = 0x8316CC00;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CC18"))) PPC_WEAK_FUNC(sub_8316CC18);
PPC_FUNC_IMPL(__imp__sub_8316CC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32508
	ctx.r3.s64 = ctx.r11.s64 + -32508;
	// bl 0x82e73ab0
	ctx.lr = 0x8316CC30;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CC48"))) PPC_WEAK_FUNC(sub_8316CC48);
PPC_FUNC_IMPL(__imp__sub_8316CC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32480
	ctx.r3.s64 = ctx.r11.s64 + -32480;
	// bl 0x82e73ab0
	ctx.lr = 0x8316CC60;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CC78"))) PPC_WEAK_FUNC(sub_8316CC78);
PPC_FUNC_IMPL(__imp__sub_8316CC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32456
	ctx.r3.s64 = ctx.r11.s64 + -32456;
	// bl 0x82e73ab0
	ctx.lr = 0x8316CC90;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CCA8"))) PPC_WEAK_FUNC(sub_8316CCA8);
PPC_FUNC_IMPL(__imp__sub_8316CCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32432
	ctx.r3.s64 = ctx.r11.s64 + -32432;
	// bl 0x82e73ab0
	ctx.lr = 0x8316CCC0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CCD8"))) PPC_WEAK_FUNC(sub_8316CCD8);
PPC_FUNC_IMPL(__imp__sub_8316CCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32416
	ctx.r3.s64 = ctx.r11.s64 + -32416;
	// bl 0x82e73ab0
	ctx.lr = 0x8316CCF0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CD08"))) PPC_WEAK_FUNC(sub_8316CD08);
PPC_FUNC_IMPL(__imp__sub_8316CD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32396
	ctx.r3.s64 = ctx.r11.s64 + -32396;
	// bl 0x82e73ab0
	ctx.lr = 0x8316CD20;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CD38"))) PPC_WEAK_FUNC(sub_8316CD38);
PPC_FUNC_IMPL(__imp__sub_8316CD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32376
	ctx.r3.s64 = ctx.r11.s64 + -32376;
	// bl 0x82e73ab0
	ctx.lr = 0x8316CD50;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CD68"))) PPC_WEAK_FUNC(sub_8316CD68);
PPC_FUNC_IMPL(__imp__sub_8316CD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32348
	ctx.r3.s64 = ctx.r11.s64 + -32348;
	// bl 0x82e73ab0
	ctx.lr = 0x8316CD80;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CD98"))) PPC_WEAK_FUNC(sub_8316CD98);
PPC_FUNC_IMPL(__imp__sub_8316CD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32324
	ctx.r3.s64 = ctx.r11.s64 + -32324;
	// bl 0x82e73af8
	ctx.lr = 0x8316CDB0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CDC8"))) PPC_WEAK_FUNC(sub_8316CDC8);
PPC_FUNC_IMPL(__imp__sub_8316CDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32300
	ctx.r3.s64 = ctx.r11.s64 + -32300;
	// bl 0x82e73af8
	ctx.lr = 0x8316CDE0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CDF8"))) PPC_WEAK_FUNC(sub_8316CDF8);
PPC_FUNC_IMPL(__imp__sub_8316CDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32284
	ctx.r3.s64 = ctx.r11.s64 + -32284;
	// bl 0x82e73af8
	ctx.lr = 0x8316CE10;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CE28"))) PPC_WEAK_FUNC(sub_8316CE28);
PPC_FUNC_IMPL(__imp__sub_8316CE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32260
	ctx.r3.s64 = ctx.r11.s64 + -32260;
	// bl 0x82e73af8
	ctx.lr = 0x8316CE40;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CE58"))) PPC_WEAK_FUNC(sub_8316CE58);
PPC_FUNC_IMPL(__imp__sub_8316CE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32236
	ctx.r3.s64 = ctx.r11.s64 + -32236;
	// bl 0x82e73af8
	ctx.lr = 0x8316CE70;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CE88"))) PPC_WEAK_FUNC(sub_8316CE88);
PPC_FUNC_IMPL(__imp__sub_8316CE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32196
	ctx.r3.s64 = ctx.r11.s64 + -32196;
	// bl 0x82e73af8
	ctx.lr = 0x8316CEA0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CEB8"))) PPC_WEAK_FUNC(sub_8316CEB8);
PPC_FUNC_IMPL(__imp__sub_8316CEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32180
	ctx.r3.s64 = ctx.r11.s64 + -32180;
	// bl 0x82e73af8
	ctx.lr = 0x8316CED0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CEE8"))) PPC_WEAK_FUNC(sub_8316CEE8);
PPC_FUNC_IMPL(__imp__sub_8316CEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32164
	ctx.r3.s64 = ctx.r11.s64 + -32164;
	// bl 0x82e73af8
	ctx.lr = 0x8316CF00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14404, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CF18"))) PPC_WEAK_FUNC(sub_8316CF18);
PPC_FUNC_IMPL(__imp__sub_8316CF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32140
	ctx.r3.s64 = ctx.r11.s64 + -32140;
	// bl 0x82e73af8
	ctx.lr = 0x8316CF30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14848, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CF48"))) PPC_WEAK_FUNC(sub_8316CF48);
PPC_FUNC_IMPL(__imp__sub_8316CF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32116
	ctx.r3.s64 = ctx.r11.s64 + -32116;
	// bl 0x82e73af8
	ctx.lr = 0x8316CF60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CF78"))) PPC_WEAK_FUNC(sub_8316CF78);
PPC_FUNC_IMPL(__imp__sub_8316CF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32080
	ctx.r3.s64 = ctx.r11.s64 + -32080;
	// bl 0x82e73af8
	ctx.lr = 0x8316CF90;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CFA8"))) PPC_WEAK_FUNC(sub_8316CFA8);
PPC_FUNC_IMPL(__imp__sub_8316CFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32056
	ctx.r3.s64 = ctx.r11.s64 + -32056;
	// bl 0x82e73af8
	ctx.lr = 0x8316CFC0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CFD8"))) PPC_WEAK_FUNC(sub_8316CFD8);
PPC_FUNC_IMPL(__imp__sub_8316CFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32020
	ctx.r3.s64 = ctx.r11.s64 + -32020;
	// bl 0x82e73af8
	ctx.lr = 0x8316CFF0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15236, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D008"))) PPC_WEAK_FUNC(sub_8316D008);
PPC_FUNC_IMPL(__imp__sub_8316D008) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14012
	ctx.r30.s64 = ctx.r31.s64 + 14012;
	// addi r4,r11,-32000
	ctx.r4.s64 = ctx.r11.s64 + -32000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D034;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-11408
	ctx.r3.s64 = ctx.r7.s64 + -11408;
	// lfs f12,19696(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19696);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,14012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14012, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8316D074;
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

__attribute__((alias("__imp__sub_8316D090"))) PPC_WEAK_FUNC(sub_8316D090);
PPC_FUNC_IMPL(__imp__sub_8316D090) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14668
	ctx.r30.s64 = ctx.r31.s64 + 14668;
	// addi r4,r11,-31964
	ctx.r4.s64 = ctx.r11.s64 + -31964;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D0BC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-11384
	ctx.r3.s64 = ctx.r7.s64 + -11384;
	// lfs f12,19696(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19696);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,14668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14668, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8316D0FC;
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

__attribute__((alias("__imp__sub_8316D118"))) PPC_WEAK_FUNC(sub_8316D118);
PPC_FUNC_IMPL(__imp__sub_8316D118) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14036
	ctx.r30.s64 = ctx.r31.s64 + 14036;
	// addi r4,r11,-31920
	ctx.r4.s64 = ctx.r11.s64 + -31920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D144;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-11360
	ctx.r3.s64 = ctx.r7.s64 + -11360;
	// lfs f12,19696(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19696);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,14036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14036, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8316D184;
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

__attribute__((alias("__imp__sub_8316D1A0"))) PPC_WEAK_FUNC(sub_8316D1A0);
PPC_FUNC_IMPL(__imp__sub_8316D1A0) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14408
	ctx.r30.s64 = ctx.r31.s64 + 14408;
	// addi r4,r11,-31868
	ctx.r4.s64 = ctx.r11.s64 + -31868;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D1CC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-11336
	ctx.r3.s64 = ctx.r7.s64 + -11336;
	// lfs f12,3492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3492);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,14408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14408, ctx.r11.u32);
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
	ctx.lr = 0x8316D20C;
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

__attribute__((alias("__imp__sub_8316D228"))) PPC_WEAK_FUNC(sub_8316D228);
PPC_FUNC_IMPL(__imp__sub_8316D228) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14912
	ctx.r30.s64 = ctx.r31.s64 + 14912;
	// addi r4,r11,-31808
	ctx.r4.s64 = ctx.r11.s64 + -31808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D254;
	sub_82C07410(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,23492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23492);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-11312
	ctx.r3.s64 = ctx.r10.s64 + -11312;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,14912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14912, ctx.r11.u32);
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
	ctx.lr = 0x8316D29C;
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

__attribute__((alias("__imp__sub_8316D2B8"))) PPC_WEAK_FUNC(sub_8316D2B8);
PPC_FUNC_IMPL(__imp__sub_8316D2B8) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14852
	ctx.r30.s64 = ctx.r31.s64 + 14852;
	// addi r4,r11,-31736
	ctx.r4.s64 = ctx.r11.s64 + -31736;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D2E4;
	sub_82C07410(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,23428(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23428);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-11288
	ctx.r3.s64 = ctx.r10.s64 + -11288;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,14852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14852, ctx.r11.u32);
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
	ctx.lr = 0x8316D32C;
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

__attribute__((alias("__imp__sub_8316D348"))) PPC_WEAK_FUNC(sub_8316D348);
PPC_FUNC_IMPL(__imp__sub_8316D348) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,13980
	ctx.r30.s64 = ctx.r31.s64 + 13980;
	// addi r4,r11,-31664
	ctx.r4.s64 = ctx.r11.s64 + -31664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D374;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-11264
	ctx.r3.s64 = ctx.r10.s64 + -11264;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,13980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13980, ctx.r11.u32);
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
	ctx.lr = 0x8316D3BC;
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

__attribute__((alias("__imp__sub_8316D3D8"))) PPC_WEAK_FUNC(sub_8316D3D8);
PPC_FUNC_IMPL(__imp__sub_8316D3D8) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14616
	ctx.r30.s64 = ctx.r31.s64 + 14616;
	// addi r4,r11,-31596
	ctx.r4.s64 = ctx.r11.s64 + -31596;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D404;
	sub_82C07410(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,23492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23492);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-11240
	ctx.r3.s64 = ctx.r10.s64 + -11240;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,14616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14616, ctx.r11.u32);
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
	ctx.lr = 0x8316D44C;
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

__attribute__((alias("__imp__sub_8316D468"))) PPC_WEAK_FUNC(sub_8316D468);
PPC_FUNC_IMPL(__imp__sub_8316D468) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14936
	ctx.r30.s64 = ctx.r31.s64 + 14936;
	// addi r4,r11,-31528
	ctx.r4.s64 = ctx.r11.s64 + -31528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D494;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-11216
	ctx.r3.s64 = ctx.r7.s64 + -11216;
	// lfs f12,3492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3492);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,14936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14936, ctx.r11.u32);
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
	ctx.lr = 0x8316D4D4;
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

__attribute__((alias("__imp__sub_8316D4F0"))) PPC_WEAK_FUNC(sub_8316D4F0);
PPC_FUNC_IMPL(__imp__sub_8316D4F0) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14808
	ctx.r30.s64 = ctx.r31.s64 + 14808;
	// addi r4,r11,-31460
	ctx.r4.s64 = ctx.r11.s64 + -31460;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D51C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-11192
	ctx.r3.s64 = ctx.r7.s64 + -11192;
	// lfs f12,3492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3492);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,14808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14808, ctx.r11.u32);
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
	ctx.lr = 0x8316D55C;
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

__attribute__((alias("__imp__sub_8316D578"))) PPC_WEAK_FUNC(sub_8316D578);
PPC_FUNC_IMPL(__imp__sub_8316D578) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14448
	ctx.r30.s64 = ctx.r31.s64 + 14448;
	// addi r4,r11,-31400
	ctx.r4.s64 = ctx.r11.s64 + -31400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D5A4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-11168
	ctx.r3.s64 = ctx.r10.s64 + -11168;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,14448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14448, ctx.r11.u32);
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
	ctx.lr = 0x8316D5EC;
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

__attribute__((alias("__imp__sub_8316D608"))) PPC_WEAK_FUNC(sub_8316D608);
PPC_FUNC_IMPL(__imp__sub_8316D608) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,15056
	ctx.r30.s64 = ctx.r31.s64 + 15056;
	// addi r4,r11,-31328
	ctx.r4.s64 = ctx.r11.s64 + -31328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D634;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3484);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-11144
	ctx.r3.s64 = ctx.r10.s64 + -11144;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,15056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15056, ctx.r11.u32);
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
	ctx.lr = 0x8316D67C;
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

__attribute__((alias("__imp__sub_8316D698"))) PPC_WEAK_FUNC(sub_8316D698);
PPC_FUNC_IMPL(__imp__sub_8316D698) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,15176
	ctx.r30.s64 = ctx.r31.s64 + 15176;
	// addi r4,r11,-31256
	ctx.r4.s64 = ctx.r11.s64 + -31256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D6C4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3220);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-11120
	ctx.r3.s64 = ctx.r10.s64 + -11120;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,15176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15176, ctx.r11.u32);
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
	ctx.lr = 0x8316D70C;
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

__attribute__((alias("__imp__sub_8316D728"))) PPC_WEAK_FUNC(sub_8316D728);
PPC_FUNC_IMPL(__imp__sub_8316D728) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14140
	ctx.r30.s64 = ctx.r31.s64 + 14140;
	// addi r4,r11,-31188
	ctx.r4.s64 = ctx.r11.s64 + -31188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D754;
	sub_82C07410(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,23428(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23428);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-11096
	ctx.r3.s64 = ctx.r10.s64 + -11096;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,14140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14140, ctx.r11.u32);
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
	ctx.lr = 0x8316D79C;
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

__attribute__((alias("__imp__sub_8316D7B8"))) PPC_WEAK_FUNC(sub_8316D7B8);
PPC_FUNC_IMPL(__imp__sub_8316D7B8) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14692
	ctx.r30.s64 = ctx.r31.s64 + 14692;
	// addi r4,r11,-31120
	ctx.r4.s64 = ctx.r11.s64 + -31120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D7E4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-11072
	ctx.r3.s64 = ctx.r7.s64 + -11072;
	// lfs f12,3492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3492);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,14692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14692, ctx.r11.u32);
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
	ctx.lr = 0x8316D824;
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

__attribute__((alias("__imp__sub_8316D840"))) PPC_WEAK_FUNC(sub_8316D840);
PPC_FUNC_IMPL(__imp__sub_8316D840) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,15212
	ctx.r30.s64 = ctx.r31.s64 + 15212;
	// addi r4,r11,-31052
	ctx.r4.s64 = ctx.r11.s64 + -31052;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D86C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-11048
	ctx.r3.s64 = ctx.r7.s64 + -11048;
	// lfs f12,3492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3492);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,15212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15212, ctx.r11.u32);
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
	ctx.lr = 0x8316D8AC;
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

__attribute__((alias("__imp__sub_8316D8C8"))) PPC_WEAK_FUNC(sub_8316D8C8);
PPC_FUNC_IMPL(__imp__sub_8316D8C8) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14192
	ctx.r30.s64 = ctx.r31.s64 + 14192;
	// addi r4,r11,-31000
	ctx.r4.s64 = ctx.r11.s64 + -31000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D8F4;
	sub_82C07410(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,23492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23492);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-11024
	ctx.r3.s64 = ctx.r10.s64 + -11024;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,14192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14192, ctx.r11.u32);
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
	ctx.lr = 0x8316D93C;
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

__attribute__((alias("__imp__sub_8316D958"))) PPC_WEAK_FUNC(sub_8316D958);
PPC_FUNC_IMPL(__imp__sub_8316D958) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14348
	ctx.r30.s64 = ctx.r31.s64 + 14348;
	// addi r4,r11,-30940
	ctx.r4.s64 = ctx.r11.s64 + -30940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316D984;
	sub_82C07410(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,23496(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23496);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-11000
	ctx.r3.s64 = ctx.r10.s64 + -11000;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,14348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14348, ctx.r11.u32);
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
	ctx.lr = 0x8316D9CC;
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

__attribute__((alias("__imp__sub_8316D9E8"))) PPC_WEAK_FUNC(sub_8316D9E8);
PPC_FUNC_IMPL(__imp__sub_8316D9E8) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14776
	ctx.r30.s64 = ctx.r31.s64 + 14776;
	// addi r4,r11,-30884
	ctx.r4.s64 = ctx.r11.s64 + -30884;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316DA14;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-10976
	ctx.r3.s64 = ctx.r10.s64 + -10976;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,14776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14776, ctx.r11.u32);
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
	ctx.lr = 0x8316DA5C;
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

__attribute__((alias("__imp__sub_8316DA78"))) PPC_WEAK_FUNC(sub_8316DA78);
PPC_FUNC_IMPL(__imp__sub_8316DA78) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14168
	ctx.r30.s64 = ctx.r31.s64 + 14168;
	// addi r4,r11,-30828
	ctx.r4.s64 = ctx.r11.s64 + -30828;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316DAA4;
	sub_82C07410(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,23492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23492);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-10952
	ctx.r3.s64 = ctx.r10.s64 + -10952;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,14168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14168, ctx.r11.u32);
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
	ctx.lr = 0x8316DAEC;
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

__attribute__((alias("__imp__sub_8316DB08"))) PPC_WEAK_FUNC(sub_8316DB08);
PPC_FUNC_IMPL(__imp__sub_8316DB08) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14744
	ctx.r30.s64 = ctx.r31.s64 + 14744;
	// addi r4,r11,-30776
	ctx.r4.s64 = ctx.r11.s64 + -30776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316DB34;
	sub_82C07410(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,23464(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23464);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,23512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23512);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-10928
	ctx.r3.s64 = ctx.r10.s64 + -10928;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,14744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14744, ctx.r11.u32);
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
	ctx.lr = 0x8316DB7C;
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

__attribute__((alias("__imp__sub_8316DB98"))) PPC_WEAK_FUNC(sub_8316DB98);
PPC_FUNC_IMPL(__imp__sub_8316DB98) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14640
	ctx.r30.s64 = ctx.r31.s64 + 14640;
	// addi r4,r11,-30720
	ctx.r4.s64 = ctx.r11.s64 + -30720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316DBC4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,14640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14640, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-10904
	ctx.r3.s64 = ctx.r11.s64 + -10904;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316DBF8;
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

__attribute__((alias("__imp__sub_8316DC10"))) PPC_WEAK_FUNC(sub_8316DC10);
PPC_FUNC_IMPL(__imp__sub_8316DC10) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14284
	ctx.r30.s64 = ctx.r31.s64 + 14284;
	// addi r4,r11,-30672
	ctx.r4.s64 = ctx.r11.s64 + -30672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316DC3C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,14284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14284, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,25
	ctx.r10.s64 = 25;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-10880
	ctx.r3.s64 = ctx.r11.s64 + -10880;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316DC74;
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

__attribute__((alias("__imp__sub_8316DC90"))) PPC_WEAK_FUNC(sub_8316DC90);
PPC_FUNC_IMPL(__imp__sub_8316DC90) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14324
	ctx.r30.s64 = ctx.r31.s64 + 14324;
	// addi r4,r11,-30624
	ctx.r4.s64 = ctx.r11.s64 + -30624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316DCBC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3432(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3432);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-10856
	ctx.r3.s64 = ctx.r7.s64 + -10856;
	// lfs f12,19696(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19696);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,14324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14324, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8316DCFC;
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

__attribute__((alias("__imp__sub_8316DD18"))) PPC_WEAK_FUNC(sub_8316DD18);
PPC_FUNC_IMPL(__imp__sub_8316DD18) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14580
	ctx.r30.s64 = ctx.r31.s64 + 14580;
	// addi r4,r11,-30580
	ctx.r4.s64 = ctx.r11.s64 + -30580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316DD44;
	sub_82C07410(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,23464(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23464);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3432(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3432);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-10832
	ctx.r3.s64 = ctx.r7.s64 + -10832;
	// lfs f12,19696(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19696);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,14580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14580, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8316DD84;
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

__attribute__((alias("__imp__sub_8316DDA0"))) PPC_WEAK_FUNC(sub_8316DDA0);
PPC_FUNC_IMPL(__imp__sub_8316DDA0) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14244
	ctx.r30.s64 = ctx.r31.s64 + 14244;
	// addi r4,r11,-30540
	ctx.r4.s64 = ctx.r11.s64 + -30540;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316DDCC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3432(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3432);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-10808
	ctx.r3.s64 = ctx.r7.s64 + -10808;
	// lfs f12,19696(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19696);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,14244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14244, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8316DE0C;
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

__attribute__((alias("__imp__sub_8316DE28"))) PPC_WEAK_FUNC(sub_8316DE28);
PPC_FUNC_IMPL(__imp__sub_8316DE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30508
	ctx.r3.s64 = ctx.r11.s64 + -30508;
	// bl 0x82e73af8
	ctx.lr = 0x8316DE40;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316DE58"))) PPC_WEAK_FUNC(sub_8316DE58);
PPC_FUNC_IMPL(__imp__sub_8316DE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30488
	ctx.r3.s64 = ctx.r11.s64 + -30488;
	// bl 0x82e73af8
	ctx.lr = 0x8316DE70;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316DE88"))) PPC_WEAK_FUNC(sub_8316DE88);
PPC_FUNC_IMPL(__imp__sub_8316DE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30472
	ctx.r3.s64 = ctx.r11.s64 + -30472;
	// bl 0x82e73af8
	ctx.lr = 0x8316DEA0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15000, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316DEB8"))) PPC_WEAK_FUNC(sub_8316DEB8);
PPC_FUNC_IMPL(__imp__sub_8316DEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30452
	ctx.r3.s64 = ctx.r11.s64 + -30452;
	// bl 0x82e73af8
	ctx.lr = 0x8316DED0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14084, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316DEE8"))) PPC_WEAK_FUNC(sub_8316DEE8);
PPC_FUNC_IMPL(__imp__sub_8316DEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30424
	ctx.r3.s64 = ctx.r11.s64 + -30424;
	// bl 0x82e73af8
	ctx.lr = 0x8316DF00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14004, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316DF18"))) PPC_WEAK_FUNC(sub_8316DF18);
PPC_FUNC_IMPL(__imp__sub_8316DF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30400
	ctx.r3.s64 = ctx.r11.s64 + -30400;
	// bl 0x82e73af8
	ctx.lr = 0x8316DF30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316DF48"))) PPC_WEAK_FUNC(sub_8316DF48);
PPC_FUNC_IMPL(__imp__sub_8316DF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30372
	ctx.r3.s64 = ctx.r11.s64 + -30372;
	// bl 0x82e73af8
	ctx.lr = 0x8316DF60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,13976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316DF78"))) PPC_WEAK_FUNC(sub_8316DF78);
PPC_FUNC_IMPL(__imp__sub_8316DF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30352
	ctx.r3.s64 = ctx.r11.s64 + -30352;
	// bl 0x82e73af8
	ctx.lr = 0x8316DF90;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14080, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316DFA8"))) PPC_WEAK_FUNC(sub_8316DFA8);
PPC_FUNC_IMPL(__imp__sub_8316DFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30336
	ctx.r3.s64 = ctx.r11.s64 + -30336;
	// bl 0x82e73af8
	ctx.lr = 0x8316DFC0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316DFD8"))) PPC_WEAK_FUNC(sub_8316DFD8);
PPC_FUNC_IMPL(__imp__sub_8316DFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-31184
	ctx.r3.s64 = ctx.r11.s64 + -31184;
	// bl 0x82e73af8
	ctx.lr = 0x8316DFF0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14992(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14992, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E008"))) PPC_WEAK_FUNC(sub_8316E008);
PPC_FUNC_IMPL(__imp__sub_8316E008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30324
	ctx.r3.s64 = ctx.r11.s64 + -30324;
	// bl 0x82e73af8
	ctx.lr = 0x8316E020;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E038"))) PPC_WEAK_FUNC(sub_8316E038);
PPC_FUNC_IMPL(__imp__sub_8316E038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-31156
	ctx.r3.s64 = ctx.r11.s64 + -31156;
	// bl 0x82e73af8
	ctx.lr = 0x8316E050;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E068"))) PPC_WEAK_FUNC(sub_8316E068);
PPC_FUNC_IMPL(__imp__sub_8316E068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30292
	ctx.r3.s64 = ctx.r11.s64 + -30292;
	// bl 0x82e73af8
	ctx.lr = 0x8316E080;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E098"))) PPC_WEAK_FUNC(sub_8316E098);
PPC_FUNC_IMPL(__imp__sub_8316E098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-31128
	ctx.r3.s64 = ctx.r11.s64 + -31128;
	// bl 0x82e73af8
	ctx.lr = 0x8316E0B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14396, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E0C8"))) PPC_WEAK_FUNC(sub_8316E0C8);
PPC_FUNC_IMPL(__imp__sub_8316E0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-31100
	ctx.r3.s64 = ctx.r11.s64 + -31100;
	// bl 0x82e73af8
	ctx.lr = 0x8316E0E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E0F8"))) PPC_WEAK_FUNC(sub_8316E0F8);
PPC_FUNC_IMPL(__imp__sub_8316E0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30260
	ctx.r3.s64 = ctx.r11.s64 + -30260;
	// bl 0x82e73af8
	ctx.lr = 0x8316E110;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E128"))) PPC_WEAK_FUNC(sub_8316E128);
PPC_FUNC_IMPL(__imp__sub_8316E128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30240
	ctx.r3.s64 = ctx.r11.s64 + -30240;
	// bl 0x82e73af8
	ctx.lr = 0x8316E140;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E158"))) PPC_WEAK_FUNC(sub_8316E158);
PPC_FUNC_IMPL(__imp__sub_8316E158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30220
	ctx.r3.s64 = ctx.r11.s64 + -30220;
	// bl 0x82e73af8
	ctx.lr = 0x8316E170;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E188"))) PPC_WEAK_FUNC(sub_8316E188);
PPC_FUNC_IMPL(__imp__sub_8316E188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30200
	ctx.r3.s64 = ctx.r11.s64 + -30200;
	// bl 0x82e73af8
	ctx.lr = 0x8316E1A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E1B8"))) PPC_WEAK_FUNC(sub_8316E1B8);
PPC_FUNC_IMPL(__imp__sub_8316E1B8) {
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
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,14540
	ctx.r30.s64 = ctx.r31.s64 + 14540;
	// addi r4,r11,-30180
	ctx.r4.s64 = ctx.r11.s64 + -30180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316E1E4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3432(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3432);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-10784
	ctx.r3.s64 = ctx.r7.s64 + -10784;
	// lfs f12,19696(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19696);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,14540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14540, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8316E224;
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

__attribute__((alias("__imp__sub_8316E240"))) PPC_WEAK_FUNC(sub_8316E240);
PPC_FUNC_IMPL(__imp__sub_8316E240) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,26640
	ctx.r3.s64 = ctx.r11.s64 + 26640;
	// bl 0x82e73ab0
	ctx.lr = 0x8316E258;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

