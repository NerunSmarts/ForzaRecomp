#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_8317B7B0"))) PPC_WEAK_FUNC(sub_8317B7B0);
PPC_FUNC_IMPL(__imp__sub_8317B7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_8317B7E0"))) PPC_WEAK_FUNC(sub_8317B7E0);
PPC_FUNC_IMPL(__imp__sub_8317B7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24464
	ctx.r9.s64 = ctx.r11.s64 + 24464;
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

__attribute__((alias("__imp__sub_8317B810"))) PPC_WEAK_FUNC(sub_8317B810);
PPC_FUNC_IMPL(__imp__sub_8317B810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,24448
	ctx.r10.s64 = ctx.r10.s64 + 24448;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B830"))) PPC_WEAK_FUNC(sub_8317B830);
PPC_FUNC_IMPL(__imp__sub_8317B830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,24416
	ctx.r10.s64 = ctx.r10.s64 + 24416;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B850"))) PPC_WEAK_FUNC(sub_8317B850);
PPC_FUNC_IMPL(__imp__sub_8317B850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-8864
	ctx.r3.s64 = ctx.r11.s64 + -8864;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B860"))) PPC_WEAK_FUNC(sub_8317B860);
PPC_FUNC_IMPL(__imp__sub_8317B860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,24496
	ctx.r10.s64 = ctx.r10.s64 + 24496;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B880"))) PPC_WEAK_FUNC(sub_8317B880);
PPC_FUNC_IMPL(__imp__sub_8317B880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24344
	ctx.r3.s64 = ctx.r11.s64 + 24344;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B890"))) PPC_WEAK_FUNC(sub_8317B890);
PPC_FUNC_IMPL(__imp__sub_8317B890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-8872
	ctx.r3.s64 = ctx.r11.s64 + -8872;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B8A0"))) PPC_WEAK_FUNC(sub_8317B8A0);
PPC_FUNC_IMPL(__imp__sub_8317B8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,25344
	ctx.r9.s64 = ctx.r11.s64 + 25344;
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

__attribute__((alias("__imp__sub_8317B8D0"))) PPC_WEAK_FUNC(sub_8317B8D0);
PPC_FUNC_IMPL(__imp__sub_8317B8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,25088
	ctx.r9.s64 = ctx.r11.s64 + 25088;
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

__attribute__((alias("__imp__sub_8317B900"))) PPC_WEAK_FUNC(sub_8317B900);
PPC_FUNC_IMPL(__imp__sub_8317B900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24640
	ctx.r9.s64 = ctx.r11.s64 + 24640;
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

__attribute__((alias("__imp__sub_8317B930"))) PPC_WEAK_FUNC(sub_8317B930);
PPC_FUNC_IMPL(__imp__sub_8317B930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,25024
	ctx.r9.s64 = ctx.r11.s64 + 25024;
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

__attribute__((alias("__imp__sub_8317B960"))) PPC_WEAK_FUNC(sub_8317B960);
PPC_FUNC_IMPL(__imp__sub_8317B960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_8317B980"))) PPC_WEAK_FUNC(sub_8317B980);
PPC_FUNC_IMPL(__imp__sub_8317B980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,24624
	ctx.r10.s64 = ctx.r10.s64 + 24624;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B9A0"))) PPC_WEAK_FUNC(sub_8317B9A0);
PPC_FUNC_IMPL(__imp__sub_8317B9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-6624
	ctx.r3.s64 = ctx.r11.s64 + -6624;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B9B0"))) PPC_WEAK_FUNC(sub_8317B9B0);
PPC_FUNC_IMPL(__imp__sub_8317B9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,25280
	ctx.r10.s64 = ctx.r10.s64 + 25280;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B9D0"))) PPC_WEAK_FUNC(sub_8317B9D0);
PPC_FUNC_IMPL(__imp__sub_8317B9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,25576
	ctx.r3.s64 = ctx.r11.s64 + 25576;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B9E0"))) PPC_WEAK_FUNC(sub_8317B9E0);
PPC_FUNC_IMPL(__imp__sub_8317B9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24621
	ctx.r3.s64 = ctx.r11.s64 + 24621;
	// b 0x828ad468
	sub_828AD468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B9F0"))) PPC_WEAK_FUNC(sub_8317B9F0);
PPC_FUNC_IMPL(__imp__sub_8317B9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,25572
	ctx.r3.s64 = ctx.r11.s64 + 25572;
	// b 0x828ad6a0
	sub_828AD6A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317BA00"))) PPC_WEAK_FUNC(sub_8317BA00);
PPC_FUNC_IMPL(__imp__sub_8317BA00) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25168
	ctx.r30.s64 = ctx.r31.s64 + 25168;
	// addi r4,r11,-24672
	ctx.r4.s64 = ctx.r11.s64 + -24672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317BA2C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-8768
	ctx.r3.s64 = ctx.r9.s64 + -8768;
	// lfs f0,32544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32544);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,25168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25168, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317BA50;
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

__attribute__((alias("__imp__sub_8317BA68"))) PPC_WEAK_FUNC(sub_8317BA68);
PPC_FUNC_IMPL(__imp__sub_8317BA68) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25456
	ctx.r30.s64 = ctx.r31.s64 + 25456;
	// addi r4,r11,-24628
	ctx.r4.s64 = ctx.r11.s64 + -24628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317BA94;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-8744
	ctx.r3.s64 = ctx.r9.s64 + -8744;
	// lfs f0,3156(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3156);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,25456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25456, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317BAB8;
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

__attribute__((alias("__imp__sub_8317BAD0"))) PPC_WEAK_FUNC(sub_8317BAD0);
PPC_FUNC_IMPL(__imp__sub_8317BAD0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24852
	ctx.r30.s64 = ctx.r31.s64 + 24852;
	// addi r4,r11,-24584
	ctx.r4.s64 = ctx.r11.s64 + -24584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317BAFC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-8720
	ctx.r3.s64 = ctx.r9.s64 + -8720;
	// lfs f0,3208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,24852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24852, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317BB20;
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

__attribute__((alias("__imp__sub_8317BB38"))) PPC_WEAK_FUNC(sub_8317BB38);
PPC_FUNC_IMPL(__imp__sub_8317BB38) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25492
	ctx.r30.s64 = ctx.r31.s64 + 25492;
	// addi r4,r11,-24552
	ctx.r4.s64 = ctx.r11.s64 + -24552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317BB64;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-8696
	ctx.r3.s64 = ctx.r9.s64 + -8696;
	// lfs f0,3264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3264);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,25492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25492, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317BB88;
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

__attribute__((alias("__imp__sub_8317BBA0"))) PPC_WEAK_FUNC(sub_8317BBA0);
PPC_FUNC_IMPL(__imp__sub_8317BBA0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25696
	ctx.r30.s64 = ctx.r31.s64 + 25696;
	// addi r4,r11,-24504
	ctx.r4.s64 = ctx.r11.s64 + -24504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317BBCC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-8672
	ctx.r3.s64 = ctx.r9.s64 + -8672;
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,25696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25696, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317BBF0;
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

__attribute__((alias("__imp__sub_8317BC08"))) PPC_WEAK_FUNC(sub_8317BC08);
PPC_FUNC_IMPL(__imp__sub_8317BC08) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24672
	ctx.r30.s64 = ctx.r31.s64 + 24672;
	// addi r4,r11,-24452
	ctx.r4.s64 = ctx.r11.s64 + -24452;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317BC34;
	sub_82C07410(ctx, base);
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
	// lfs f0,3496(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3496);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3208);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-8648
	ctx.r3.s64 = ctx.r10.s64 + -8648;
	// lfs f11,3296(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3296);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,24672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24672, ctx.r11.u32);
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
	ctx.lr = 0x8317BC7C;
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

__attribute__((alias("__imp__sub_8317BC98"))) PPC_WEAK_FUNC(sub_8317BC98);
PPC_FUNC_IMPL(__imp__sub_8317BC98) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25372
	ctx.r30.s64 = ctx.r31.s64 + 25372;
	// addi r4,r11,-24416
	ctx.r4.s64 = ctx.r11.s64 + -24416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317BCC4;
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
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-8624
	ctx.r3.s64 = ctx.r7.s64 + -8624;
	// lfs f12,32544(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32544);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,25372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25372, ctx.r11.u32);
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
	ctx.lr = 0x8317BD04;
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

__attribute__((alias("__imp__sub_8317BD20"))) PPC_WEAK_FUNC(sub_8317BD20);
PPC_FUNC_IMPL(__imp__sub_8317BD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,25105
	ctx.r3.s64 = ctx.r11.s64 + 25105;
	// b 0x828ae030
	sub_828AE030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317BD30"))) PPC_WEAK_FUNC(sub_8317BD30);
PPC_FUNC_IMPL(__imp__sub_8317BD30) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25144
	ctx.r30.s64 = ctx.r31.s64 + 25144;
	// addi r4,r11,-24376
	ctx.r4.s64 = ctx.r11.s64 + -24376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317BD5C;
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
	// lfs f13,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-8560
	ctx.r3.s64 = ctx.r7.s64 + -8560;
	// lfs f12,29264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,25144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25144, ctx.r11.u32);
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
	ctx.lr = 0x8317BD9C;
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

__attribute__((alias("__imp__sub_8317BDB8"))) PPC_WEAK_FUNC(sub_8317BDB8);
PPC_FUNC_IMPL(__imp__sub_8317BDB8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25180
	ctx.r30.s64 = ctx.r31.s64 + 25180;
	// addi r4,r11,-24320
	ctx.r4.s64 = ctx.r11.s64 + -24320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317BDE4;
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
	// lfs f13,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-8536
	ctx.r3.s64 = ctx.r7.s64 + -8536;
	// lfs f12,29264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,25180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25180, ctx.r11.u32);
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
	ctx.lr = 0x8317BE24;
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

__attribute__((alias("__imp__sub_8317BE40"))) PPC_WEAK_FUNC(sub_8317BE40);
PPC_FUNC_IMPL(__imp__sub_8317BE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,25574
	ctx.r3.s64 = ctx.r11.s64 + 25574;
	// b 0x828ae388
	sub_828AE388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317BE50"))) PPC_WEAK_FUNC(sub_8317BE50);
PPC_FUNC_IMPL(__imp__sub_8317BE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,25107
	ctx.r3.s64 = ctx.r11.s64 + 25107;
	// b 0x828ae4e8
	sub_828AE4E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317BE60"))) PPC_WEAK_FUNC(sub_8317BE60);
PPC_FUNC_IMPL(__imp__sub_8317BE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24669
	ctx.r3.s64 = ctx.r11.s64 + 24669;
	// b 0x828ae770
	sub_828AE770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317BE70"))) PPC_WEAK_FUNC(sub_8317BE70);
PPC_FUNC_IMPL(__imp__sub_8317BE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,25279
	ctx.r3.s64 = ctx.r11.s64 + 25279;
	// b 0x828b5498
	sub_828B5498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317BE80"))) PPC_WEAK_FUNC(sub_8317BE80);
PPC_FUNC_IMPL(__imp__sub_8317BE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24614
	ctx.r3.s64 = ctx.r11.s64 + 24614;
	// b 0x828ae9b8
	sub_828AE9B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317BE90"))) PPC_WEAK_FUNC(sub_8317BE90);
PPC_FUNC_IMPL(__imp__sub_8317BE90) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24900
	ctx.r30.s64 = ctx.r31.s64 + 24900;
	// addi r4,r11,-24272
	ctx.r4.s64 = ctx.r11.s64 + -24272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317BEBC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-8312
	ctx.r3.s64 = ctx.r9.s64 + -8312;
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,24900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24900, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317BEE0;
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

__attribute__((alias("__imp__sub_8317BEF8"))) PPC_WEAK_FUNC(sub_8317BEF8);
PPC_FUNC_IMPL(__imp__sub_8317BEF8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25648
	ctx.r30.s64 = ctx.r31.s64 + 25648;
	// addi r4,r11,-24236
	ctx.r4.s64 = ctx.r11.s64 + -24236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317BF24;
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
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-8288
	ctx.r3.s64 = ctx.r7.s64 + -8288;
	// lfs f12,29264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,25648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25648, ctx.r11.u32);
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
	ctx.lr = 0x8317BF64;
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

__attribute__((alias("__imp__sub_8317BF80"))) PPC_WEAK_FUNC(sub_8317BF80);
PPC_FUNC_IMPL(__imp__sub_8317BF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24671
	ctx.r3.s64 = ctx.r11.s64 + 24671;
	// b 0x828aebb0
	sub_828AEBB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317BF90"))) PPC_WEAK_FUNC(sub_8317BF90);
PPC_FUNC_IMPL(__imp__sub_8317BF90) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25040
	ctx.r30.s64 = ctx.r31.s64 + 25040;
	// addi r4,r11,-24196
	ctx.r4.s64 = ctx.r11.s64 + -24196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317BFBC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
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
	// lfs f13,3384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-8224
	ctx.r3.s64 = ctx.r7.s64 + -8224;
	// lfs f12,-32028(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32028);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,25040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25040, ctx.r11.u32);
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
	ctx.lr = 0x8317BFFC;
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

__attribute__((alias("__imp__sub_8317C018"))) PPC_WEAK_FUNC(sub_8317C018);
PPC_FUNC_IMPL(__imp__sub_8317C018) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25000
	ctx.r30.s64 = ctx.r31.s64 + 25000;
	// addi r4,r11,-24156
	ctx.r4.s64 = ctx.r11.s64 + -24156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C044;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3332(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3332);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-8200
	ctx.r3.s64 = ctx.r10.s64 + -8200;
	// lfs f11,-32028(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32028);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,25000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25000, ctx.r11.u32);
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
	ctx.lr = 0x8317C08C;
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

__attribute__((alias("__imp__sub_8317C0A8"))) PPC_WEAK_FUNC(sub_8317C0A8);
PPC_FUNC_IMPL(__imp__sub_8317C0A8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24864
	ctx.r30.s64 = ctx.r31.s64 + 24864;
	// addi r4,r11,-24116
	ctx.r4.s64 = ctx.r11.s64 + -24116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C0D4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3648);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-8176
	ctx.r3.s64 = ctx.r7.s64 + -8176;
	// lfs f12,-32028(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32028);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,24864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24864, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f13,16(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317C114;
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

__attribute__((alias("__imp__sub_8317C130"))) PPC_WEAK_FUNC(sub_8317C130);
PPC_FUNC_IMPL(__imp__sub_8317C130) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24828
	ctx.r30.s64 = ctx.r31.s64 + 24828;
	// addi r4,r11,-24076
	ctx.r4.s64 = ctx.r11.s64 + -24076;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C15C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3608(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3608);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-8152
	ctx.r3.s64 = ctx.r10.s64 + -8152;
	// lfs f11,-32028(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32028);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,24828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24828, ctx.r11.u32);
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
	ctx.lr = 0x8317C1A4;
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

__attribute__((alias("__imp__sub_8317C1C0"))) PPC_WEAK_FUNC(sub_8317C1C0);
PPC_FUNC_IMPL(__imp__sub_8317C1C0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24804
	ctx.r30.s64 = ctx.r31.s64 + 24804;
	// addi r4,r11,-24036
	ctx.r4.s64 = ctx.r11.s64 + -24036;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C1EC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r10,24804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24804, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,10000
	ctx.r10.s64 = 10000;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-8128
	ctx.r3.s64 = ctx.r11.s64 + -8128;
	// bl 0x82a7e6b0
	ctx.lr = 0x8317C224;
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

__attribute__((alias("__imp__sub_8317C240"))) PPC_WEAK_FUNC(sub_8317C240);
PPC_FUNC_IMPL(__imp__sub_8317C240) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25320
	ctx.r30.s64 = ctx.r31.s64 + 25320;
	// addi r4,r11,-24004
	ctx.r4.s64 = ctx.r11.s64 + -24004;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C26C;
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
	// lfs f13,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-8104
	ctx.r3.s64 = ctx.r7.s64 + -8104;
	// lfs f12,29264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,25320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25320, ctx.r11.u32);
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
	ctx.lr = 0x8317C2AC;
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

__attribute__((alias("__imp__sub_8317C2C8"))) PPC_WEAK_FUNC(sub_8317C2C8);
PPC_FUNC_IMPL(__imp__sub_8317C2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,25104
	ctx.r3.s64 = ctx.r11.s64 + 25104;
	// b 0x828b5978
	sub_828B5978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317C2D8"))) PPC_WEAK_FUNC(sub_8317C2D8);
PPC_FUNC_IMPL(__imp__sub_8317C2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24616
	ctx.r3.s64 = ctx.r11.s64 + 24616;
	// b 0x828b5ae8
	sub_828B5AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317C2E8"))) PPC_WEAK_FUNC(sub_8317C2E8);
PPC_FUNC_IMPL(__imp__sub_8317C2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24617
	ctx.r3.s64 = ctx.r11.s64 + 24617;
	// b 0x828afa00
	sub_828AFA00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317C2F8"))) PPC_WEAK_FUNC(sub_8317C2F8);
PPC_FUNC_IMPL(__imp__sub_8317C2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24620
	ctx.r3.s64 = ctx.r11.s64 + 24620;
	// b 0x828b5c50
	sub_828B5C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317C308"))) PPC_WEAK_FUNC(sub_8317C308);
PPC_FUNC_IMPL(__imp__sub_8317C308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24670
	ctx.r3.s64 = ctx.r11.s64 + 24670;
	// b 0x828afbb8
	sub_828AFBB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317C318"))) PPC_WEAK_FUNC(sub_8317C318);
PPC_FUNC_IMPL(__imp__sub_8317C318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24668
	ctx.r3.s64 = ctx.r11.s64 + 24668;
	// b 0x828afea0
	sub_828AFEA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317C328"))) PPC_WEAK_FUNC(sub_8317C328);
PPC_FUNC_IMPL(__imp__sub_8317C328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24623
	ctx.r3.s64 = ctx.r11.s64 + 24623;
	// b 0x828b0010
	sub_828B0010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317C338"))) PPC_WEAK_FUNC(sub_8317C338);
PPC_FUNC_IMPL(__imp__sub_8317C338) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25108
	ctx.r30.s64 = ctx.r31.s64 + 25108;
	// addi r4,r11,-23948
	ctx.r4.s64 = ctx.r11.s64 + -23948;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C364;
	sub_82C07410(ctx, base);
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
	// lfs f0,3192(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3192);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-7800
	ctx.r3.s64 = ctx.r10.s64 + -7800;
	// lfs f11,3328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3328);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,25108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25108, ctx.r11.u32);
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
	ctx.lr = 0x8317C3AC;
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

__attribute__((alias("__imp__sub_8317C3C8"))) PPC_WEAK_FUNC(sub_8317C3C8);
PPC_FUNC_IMPL(__imp__sub_8317C3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24622
	ctx.r3.s64 = ctx.r11.s64 + 24622;
	// b 0x828b0990
	sub_828B0990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317C3D8"))) PPC_WEAK_FUNC(sub_8317C3D8);
PPC_FUNC_IMPL(__imp__sub_8317C3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24615
	ctx.r3.s64 = ctx.r11.s64 + 24615;
	// b 0x828b6618
	sub_828B6618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317C3E8"))) PPC_WEAK_FUNC(sub_8317C3E8);
PPC_FUNC_IMPL(__imp__sub_8317C3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,25106
	ctx.r3.s64 = ctx.r11.s64 + 25106;
	// b 0x828b0c50
	sub_828B0C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317C3F8"))) PPC_WEAK_FUNC(sub_8317C3F8);
PPC_FUNC_IMPL(__imp__sub_8317C3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24619
	ctx.r3.s64 = ctx.r11.s64 + 24619;
	// b 0x828b0db0
	sub_828B0DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317C408"))) PPC_WEAK_FUNC(sub_8317C408);
PPC_FUNC_IMPL(__imp__sub_8317C408) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25532
	ctx.r30.s64 = ctx.r31.s64 + 25532;
	// addi r4,r11,-23908
	ctx.r4.s64 = ctx.r11.s64 + -23908;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C434;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-7616
	ctx.r3.s64 = ctx.r9.s64 + -7616;
	// lfs f0,-11832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11832);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,25532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25532, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317C458;
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

__attribute__((alias("__imp__sub_8317C470"))) PPC_WEAK_FUNC(sub_8317C470);
PPC_FUNC_IMPL(__imp__sub_8317C470) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24696
	ctx.r30.s64 = ctx.r31.s64 + 24696;
	// addi r4,r11,-23860
	ctx.r4.s64 = ctx.r11.s64 + -23860;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C49C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-7592
	ctx.r3.s64 = ctx.r9.s64 + -7592;
	// lfs f0,3264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3264);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,24696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24696, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317C4C0;
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

__attribute__((alias("__imp__sub_8317C4D8"))) PPC_WEAK_FUNC(sub_8317C4D8);
PPC_FUNC_IMPL(__imp__sub_8317C4D8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24656
	ctx.r30.s64 = ctx.r31.s64 + 24656;
	// addi r4,r11,-23812
	ctx.r4.s64 = ctx.r11.s64 + -23812;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C504;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-7568
	ctx.r3.s64 = ctx.r9.s64 + -7568;
	// lfs f0,3264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3264);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,24656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24656, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317C528;
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

__attribute__((alias("__imp__sub_8317C540"))) PPC_WEAK_FUNC(sub_8317C540);
PPC_FUNC_IMPL(__imp__sub_8317C540) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25240
	ctx.r30.s64 = ctx.r31.s64 + 25240;
	// addi r4,r11,-23768
	ctx.r4.s64 = ctx.r11.s64 + -23768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C56C;
	sub_82C07410(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-7544
	ctx.r3.s64 = ctx.r9.s64 + -7544;
	// lfs f0,-25756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25756);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,25240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25240, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317C590;
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

__attribute__((alias("__imp__sub_8317C5A8"))) PPC_WEAK_FUNC(sub_8317C5A8);
PPC_FUNC_IMPL(__imp__sub_8317C5A8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25132
	ctx.r30.s64 = ctx.r31.s64 + 25132;
	// addi r4,r11,-23724
	ctx.r4.s64 = ctx.r11.s64 + -23724;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C5D4;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-7520
	ctx.r3.s64 = ctx.r9.s64 + -7520;
	// lfs f0,21564(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21564);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,25132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25132, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317C5F8;
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

__attribute__((alias("__imp__sub_8317C610"))) PPC_WEAK_FUNC(sub_8317C610);
PPC_FUNC_IMPL(__imp__sub_8317C610) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25544
	ctx.r30.s64 = ctx.r31.s64 + 25544;
	// addi r4,r11,-23680
	ctx.r4.s64 = ctx.r11.s64 + -23680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C63C;
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
	// lfs f0,3276(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3276);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3648);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-7496
	ctx.r3.s64 = ctx.r7.s64 + -7496;
	// lfs f12,3368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3368);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,25544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25544, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f13,16(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317C67C;
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

__attribute__((alias("__imp__sub_8317C698"))) PPC_WEAK_FUNC(sub_8317C698);
PPC_FUNC_IMPL(__imp__sub_8317C698) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25296
	ctx.r30.s64 = ctx.r31.s64 + 25296;
	// addi r4,r11,-23632
	ctx.r4.s64 = ctx.r11.s64 + -23632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C6C4;
	sub_82C07410(ctx, base);
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
	// lfs f0,3332(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3332);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-7472
	ctx.r3.s64 = ctx.r10.s64 + -7472;
	// lfs f11,3264(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3264);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,25296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25296, ctx.r11.u32);
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
	ctx.lr = 0x8317C70C;
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

__attribute__((alias("__imp__sub_8317C728"))) PPC_WEAK_FUNC(sub_8317C728);
PPC_FUNC_IMPL(__imp__sub_8317C728) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25408
	ctx.r30.s64 = ctx.r31.s64 + 25408;
	// addi r4,r11,-23584
	ctx.r4.s64 = ctx.r11.s64 + -23584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C754;
	sub_82C07410(ctx, base);
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-7448
	ctx.r3.s64 = ctx.r10.s64 + -7448;
	// lfs f11,3264(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3264);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,25408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25408, ctx.r11.u32);
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
	ctx.lr = 0x8317C79C;
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

__attribute__((alias("__imp__sub_8317C7B8"))) PPC_WEAK_FUNC(sub_8317C7B8);
PPC_FUNC_IMPL(__imp__sub_8317C7B8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25708
	ctx.r30.s64 = ctx.r31.s64 + 25708;
	// addi r4,r11,-23532
	ctx.r4.s64 = ctx.r11.s64 + -23532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C7E4;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-7424
	ctx.r3.s64 = ctx.r9.s64 + -7424;
	// lfs f0,21564(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21564);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,25708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25708, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317C808;
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

__attribute__((alias("__imp__sub_8317C820"))) PPC_WEAK_FUNC(sub_8317C820);
PPC_FUNC_IMPL(__imp__sub_8317C820) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25396
	ctx.r30.s64 = ctx.r31.s64 + 25396;
	// addi r4,r11,-23484
	ctx.r4.s64 = ctx.r11.s64 + -23484;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C84C;
	sub_82C07410(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-7400
	ctx.r3.s64 = ctx.r9.s64 + -7400;
	// lfs f0,-23488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,25396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25396, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317C870;
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

__attribute__((alias("__imp__sub_8317C888"))) PPC_WEAK_FUNC(sub_8317C888);
PPC_FUNC_IMPL(__imp__sub_8317C888) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24928
	ctx.r30.s64 = ctx.r31.s64 + 24928;
	// addi r4,r11,-23444
	ctx.r4.s64 = ctx.r11.s64 + -23444;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C8B4;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-7376
	ctx.r3.s64 = ctx.r9.s64 + -7376;
	// lfs f0,-32584(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32584);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,24928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24928, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317C8D8;
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

__attribute__((alias("__imp__sub_8317C8F0"))) PPC_WEAK_FUNC(sub_8317C8F0);
PPC_FUNC_IMPL(__imp__sub_8317C8F0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24888
	ctx.r30.s64 = ctx.r31.s64 + 24888;
	// addi r4,r11,-23396
	ctx.r4.s64 = ctx.r11.s64 + -23396;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C91C;
	sub_82C07410(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-7352
	ctx.r3.s64 = ctx.r9.s64 + -7352;
	// lfs f0,-23400(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23400);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,24888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24888, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317C940;
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

__attribute__((alias("__imp__sub_8317C958"))) PPC_WEAK_FUNC(sub_8317C958);
PPC_FUNC_IMPL(__imp__sub_8317C958) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25064
	ctx.r30.s64 = ctx.r31.s64 + 25064;
	// addi r4,r11,-23352
	ctx.r4.s64 = ctx.r11.s64 + -23352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C984;
	sub_82C07410(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-7328
	ctx.r3.s64 = ctx.r9.s64 + -7328;
	// lfs f0,10008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,25064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25064, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317C9A8;
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

__attribute__((alias("__imp__sub_8317C9C0"))) PPC_WEAK_FUNC(sub_8317C9C0);
PPC_FUNC_IMPL(__imp__sub_8317C9C0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24744
	ctx.r30.s64 = ctx.r31.s64 + 24744;
	// addi r4,r11,-23304
	ctx.r4.s64 = ctx.r11.s64 + -23304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317C9EC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-7304
	ctx.r3.s64 = ctx.r9.s64 + -7304;
	// lfs f0,19696(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19696);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,24744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24744, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317CA10;
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

__attribute__((alias("__imp__sub_8317CA28"))) PPC_WEAK_FUNC(sub_8317CA28);
PPC_FUNC_IMPL(__imp__sub_8317CA28) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24708
	ctx.r30.s64 = ctx.r31.s64 + 24708;
	// addi r4,r11,-23256
	ctx.r4.s64 = ctx.r11.s64 + -23256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317CA54;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-7280
	ctx.r3.s64 = ctx.r9.s64 + -7280;
	// lfs f0,22300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22300);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,24708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24708, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317CA78;
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

__attribute__((alias("__imp__sub_8317CA90"))) PPC_WEAK_FUNC(sub_8317CA90);
PPC_FUNC_IMPL(__imp__sub_8317CA90) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25204
	ctx.r30.s64 = ctx.r31.s64 + 25204;
	// addi r4,r11,-23208
	ctx.r4.s64 = ctx.r11.s64 + -23208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317CABC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-7256
	ctx.r3.s64 = ctx.r9.s64 + -7256;
	// lfs f0,32544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32544);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,25204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25204, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317CAE0;
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

__attribute__((alias("__imp__sub_8317CAF8"))) PPC_WEAK_FUNC(sub_8317CAF8);
PPC_FUNC_IMPL(__imp__sub_8317CAF8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25252
	ctx.r30.s64 = ctx.r31.s64 + 25252;
	// addi r4,r11,-23168
	ctx.r4.s64 = ctx.r11.s64 + -23168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317CB24;
	sub_82C07410(ctx, base);
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
	// lfs f0,3880(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3880);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-7232
	ctx.r3.s64 = ctx.r10.s64 + -7232;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,25252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25252, ctx.r11.u32);
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
	ctx.lr = 0x8317CB6C;
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

__attribute__((alias("__imp__sub_8317CB88"))) PPC_WEAK_FUNC(sub_8317CB88);
PPC_FUNC_IMPL(__imp__sub_8317CB88) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25216
	ctx.r30.s64 = ctx.r31.s64 + 25216;
	// addi r4,r11,-23124
	ctx.r4.s64 = ctx.r11.s64 + -23124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317CBB4;
	sub_82C07410(ctx, base);
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
	// lfs f0,3880(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3880);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-7208
	ctx.r3.s64 = ctx.r10.s64 + -7208;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r11.u32);
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
	ctx.lr = 0x8317CBFC;
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

__attribute__((alias("__imp__sub_8317CC18"))) PPC_WEAK_FUNC(sub_8317CC18);
PPC_FUNC_IMPL(__imp__sub_8317CC18) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24756
	ctx.r30.s64 = ctx.r31.s64 + 24756;
	// addi r4,r11,-23080
	ctx.r4.s64 = ctx.r11.s64 + -23080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317CC44;
	sub_82C07410(ctx, base);
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
	// lfs f0,3168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3168);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-7184
	ctx.r3.s64 = ctx.r10.s64 + -7184;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,24756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24756, ctx.r11.u32);
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
	ctx.lr = 0x8317CC8C;
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

__attribute__((alias("__imp__sub_8317CCA8"))) PPC_WEAK_FUNC(sub_8317CCA8);
PPC_FUNC_IMPL(__imp__sub_8317CCA8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24780
	ctx.r30.s64 = ctx.r31.s64 + 24780;
	// addi r4,r11,-23024
	ctx.r4.s64 = ctx.r11.s64 + -23024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317CCD4;
	sub_82C07410(ctx, base);
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
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-7160
	ctx.r3.s64 = ctx.r10.s64 + -7160;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,24780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24780, ctx.r11.u32);
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
	ctx.lr = 0x8317CD1C;
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

__attribute__((alias("__imp__sub_8317CD38"))) PPC_WEAK_FUNC(sub_8317CD38);
PPC_FUNC_IMPL(__imp__sub_8317CD38) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25672
	ctx.r30.s64 = ctx.r31.s64 + 25672;
	// addi r4,r11,-22960
	ctx.r4.s64 = ctx.r11.s64 + -22960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317CD64;
	sub_82C07410(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10328(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10328);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-7136
	ctx.r3.s64 = ctx.r10.s64 + -7136;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,25672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25672, ctx.r11.u32);
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
	ctx.lr = 0x8317CDAC;
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

__attribute__((alias("__imp__sub_8317CDC8"))) PPC_WEAK_FUNC(sub_8317CDC8);
PPC_FUNC_IMPL(__imp__sub_8317CDC8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25468
	ctx.r30.s64 = ctx.r31.s64 + 25468;
	// addi r4,r11,-22912
	ctx.r4.s64 = ctx.r11.s64 + -22912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317CDF4;
	sub_82C07410(ctx, base);
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
	// lfs f0,3192(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3192);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-7112
	ctx.r3.s64 = ctx.r10.s64 + -7112;
	// lfs f11,3328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3328);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,25468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25468, ctx.r11.u32);
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
	ctx.lr = 0x8317CE3C;
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

__attribute__((alias("__imp__sub_8317CE58"))) PPC_WEAK_FUNC(sub_8317CE58);
PPC_FUNC_IMPL(__imp__sub_8317CE58) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25444
	ctx.r30.s64 = ctx.r31.s64 + 25444;
	// addi r4,r11,-22868
	ctx.r4.s64 = ctx.r11.s64 + -22868;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317CE84;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-7088
	ctx.r3.s64 = ctx.r9.s64 + -7088;
	// lfs f0,3460(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3460);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,25444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25444, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317CEA8;
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

__attribute__((alias("__imp__sub_8317CEC0"))) PPC_WEAK_FUNC(sub_8317CEC0);
PPC_FUNC_IMPL(__imp__sub_8317CEC0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25076
	ctx.r30.s64 = ctx.r31.s64 + 25076;
	// addi r4,r11,-22828
	ctx.r4.s64 = ctx.r11.s64 + -22828;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317CEEC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-7064
	ctx.r3.s64 = ctx.r9.s64 + -7064;
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,25076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25076, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317CF10;
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

__attribute__((alias("__imp__sub_8317CF28"))) PPC_WEAK_FUNC(sub_8317CF28);
PPC_FUNC_IMPL(__imp__sub_8317CF28) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25520
	ctx.r30.s64 = ctx.r31.s64 + 25520;
	// addi r4,r11,-22776
	ctx.r4.s64 = ctx.r11.s64 + -22776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317CF54;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-7040
	ctx.r3.s64 = ctx.r9.s64 + -7040;
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,25520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25520, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317CF78;
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

__attribute__((alias("__imp__sub_8317CF90"))) PPC_WEAK_FUNC(sub_8317CF90);
PPC_FUNC_IMPL(__imp__sub_8317CF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,25276
	ctx.r3.s64 = ctx.r11.s64 + 25276;
	// b 0x828b1800
	sub_828B1800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317CFA0"))) PPC_WEAK_FUNC(sub_8317CFA0);
PPC_FUNC_IMPL(__imp__sub_8317CFA0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25360
	ctx.r30.s64 = ctx.r31.s64 + 25360;
	// addi r4,r11,-22724
	ctx.r4.s64 = ctx.r11.s64 + -22724;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317CFCC;
	sub_82C07410(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-6976
	ctx.r3.s64 = ctx.r9.s64 + -6976;
	// lfs f0,-32028(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32028);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,25360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25360, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317CFF0;
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

__attribute__((alias("__imp__sub_8317D008"))) PPC_WEAK_FUNC(sub_8317D008);
PPC_FUNC_IMPL(__imp__sub_8317D008) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24952
	ctx.r30.s64 = ctx.r31.s64 + 24952;
	// addi r4,r11,-22684
	ctx.r4.s64 = ctx.r11.s64 + -22684;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317D034;
	sub_82C07410(ctx, base);
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
	// lfs f0,3264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3264);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-6952
	ctx.r3.s64 = ctx.r10.s64 + -6952;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,24952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24952, ctx.r11.u32);
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
	ctx.lr = 0x8317D07C;
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

__attribute__((alias("__imp__sub_8317D098"))) PPC_WEAK_FUNC(sub_8317D098);
PPC_FUNC_IMPL(__imp__sub_8317D098) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24940
	ctx.r30.s64 = ctx.r31.s64 + 24940;
	// addi r4,r11,-22640
	ctx.r4.s64 = ctx.r11.s64 + -22640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317D0C4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-6928
	ctx.r3.s64 = ctx.r9.s64 + -6928;
	// lfs f0,3264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3264);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,24940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24940, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317D0E8;
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

__attribute__((alias("__imp__sub_8317D100"))) PPC_WEAK_FUNC(sub_8317D100);
PPC_FUNC_IMPL(__imp__sub_8317D100) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,25432
	ctx.r30.s64 = ctx.r31.s64 + 25432;
	// addi r4,r11,-22592
	ctx.r4.s64 = ctx.r11.s64 + -22592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317D12C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-6904
	ctx.r3.s64 = ctx.r9.s64 + -6904;
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,25432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25432, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317D150;
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

__attribute__((alias("__imp__sub_8317D168"))) PPC_WEAK_FUNC(sub_8317D168);
PPC_FUNC_IMPL(__imp__sub_8317D168) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24976
	ctx.r30.s64 = ctx.r31.s64 + 24976;
	// addi r4,r11,-22540
	ctx.r4.s64 = ctx.r11.s64 + -22540;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317D194;
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
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-6880
	ctx.r3.s64 = ctx.r7.s64 + -6880;
	// lfs f12,32544(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32544);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,24976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24976, ctx.r11.u32);
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
	ctx.lr = 0x8317D1D4;
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

__attribute__((alias("__imp__sub_8317D1F0"))) PPC_WEAK_FUNC(sub_8317D1F0);
PPC_FUNC_IMPL(__imp__sub_8317D1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,25278
	ctx.r3.s64 = ctx.r11.s64 + 25278;
	// b 0x828b1dc8
	sub_828B1DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D200"))) PPC_WEAK_FUNC(sub_8317D200);
PPC_FUNC_IMPL(__imp__sub_8317D200) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,24720
	ctx.r30.s64 = ctx.r31.s64 + 24720;
	// addi r4,r11,-22504
	ctx.r4.s64 = ctx.r11.s64 + -22504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317D22C;
	sub_82C07410(ctx, base);
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
	// lfs f0,3192(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3192);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-6816
	ctx.r3.s64 = ctx.r10.s64 + -6816;
	// lfs f11,3328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3328);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,24720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24720, ctx.r11.u32);
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
	ctx.lr = 0x8317D274;
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

__attribute__((alias("__imp__sub_8317D290"))) PPC_WEAK_FUNC(sub_8317D290);
PPC_FUNC_IMPL(__imp__sub_8317D290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24613
	ctx.r3.s64 = ctx.r11.s64 + 24613;
	// b 0x828b27e8
	sub_828B27E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D2A0"))) PPC_WEAK_FUNC(sub_8317D2A0);
PPC_FUNC_IMPL(__imp__sub_8317D2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24618
	ctx.r3.s64 = ctx.r11.s64 + 24618;
	// b 0x828b28e8
	sub_828B28E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D2B0"))) PPC_WEAK_FUNC(sub_8317D2B0);
PPC_FUNC_IMPL(__imp__sub_8317D2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,25573
	ctx.r3.s64 = ctx.r11.s64 + 25573;
	// b 0x828b6fa0
	sub_828B6FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D2C0"))) PPC_WEAK_FUNC(sub_8317D2C0);
PPC_FUNC_IMPL(__imp__sub_8317D2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,25277
	ctx.r3.s64 = ctx.r11.s64 + 25277;
	// b 0x828b2e88
	sub_828B2E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D2D0"))) PPC_WEAK_FUNC(sub_8317D2D0);
PPC_FUNC_IMPL(__imp__sub_8317D2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-5424
	ctx.r3.s64 = ctx.r11.s64 + -5424;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D2E0"))) PPC_WEAK_FUNC(sub_8317D2E0);
PPC_FUNC_IMPL(__imp__sub_8317D2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26960
	ctx.r9.s64 = ctx.r11.s64 + 26960;
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

__attribute__((alias("__imp__sub_8317D310"))) PPC_WEAK_FUNC(sub_8317D310);
PPC_FUNC_IMPL(__imp__sub_8317D310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26880
	ctx.r9.s64 = ctx.r11.s64 + 26880;
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

__attribute__((alias("__imp__sub_8317D340"))) PPC_WEAK_FUNC(sub_8317D340);
PPC_FUNC_IMPL(__imp__sub_8317D340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26624
	ctx.r9.s64 = ctx.r11.s64 + 26624;
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

__attribute__((alias("__imp__sub_8317D370"))) PPC_WEAK_FUNC(sub_8317D370);
PPC_FUNC_IMPL(__imp__sub_8317D370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,26864
	ctx.r9.s64 = ctx.r11.s64 + 26864;
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

__attribute__((alias("__imp__sub_8317D3A0"))) PPC_WEAK_FUNC(sub_8317D3A0);
PPC_FUNC_IMPL(__imp__sub_8317D3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_8317D3C0"))) PPC_WEAK_FUNC(sub_8317D3C0);
PPC_FUNC_IMPL(__imp__sub_8317D3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,26608
	ctx.r10.s64 = ctx.r10.s64 + 26608;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317D3E0"))) PPC_WEAK_FUNC(sub_8317D3E0);
PPC_FUNC_IMPL(__imp__sub_8317D3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,26944
	ctx.r10.s64 = ctx.r10.s64 + 26944;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317D400"))) PPC_WEAK_FUNC(sub_8317D400);
PPC_FUNC_IMPL(__imp__sub_8317D400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,27128
	ctx.r3.s64 = ctx.r11.s64 + 27128;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D410"))) PPC_WEAK_FUNC(sub_8317D410);
PPC_FUNC_IMPL(__imp__sub_8317D410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26690
	ctx.r3.s64 = ctx.r11.s64 + 26690;
	// b 0x828d1518
	sub_828D1518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D420"))) PPC_WEAK_FUNC(sub_8317D420);
PPC_FUNC_IMPL(__imp__sub_8317D420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26862
	ctx.r3.s64 = ctx.r11.s64 + 26862;
	// b 0x828d1630
	sub_828D1630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D430"))) PPC_WEAK_FUNC(sub_8317D430);
PPC_FUNC_IMPL(__imp__sub_8317D430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26834
	ctx.r3.s64 = ctx.r11.s64 + 26834;
	// b 0x828d1748
	sub_828D1748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D440"))) PPC_WEAK_FUNC(sub_8317D440);
PPC_FUNC_IMPL(__imp__sub_8317D440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26863
	ctx.r3.s64 = ctx.r11.s64 + 26863;
	// b 0x828d1860
	sub_828D1860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D450"))) PPC_WEAK_FUNC(sub_8317D450);
PPC_FUNC_IMPL(__imp__sub_8317D450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26860
	ctx.r3.s64 = ctx.r11.s64 + 26860;
	// b 0x828d1978
	sub_828D1978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D460"))) PPC_WEAK_FUNC(sub_8317D460);
PPC_FUNC_IMPL(__imp__sub_8317D460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26694
	ctx.r3.s64 = ctx.r11.s64 + 26694;
	// b 0x828d1a90
	sub_828D1A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D470"))) PPC_WEAK_FUNC(sub_8317D470);
PPC_FUNC_IMPL(__imp__sub_8317D470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26861
	ctx.r3.s64 = ctx.r11.s64 + 26861;
	// b 0x828d1ba8
	sub_828D1BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D480"))) PPC_WEAK_FUNC(sub_8317D480);
PPC_FUNC_IMPL(__imp__sub_8317D480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26604
	ctx.r3.s64 = ctx.r11.s64 + 26604;
	// b 0x828d1c70
	sub_828D1C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D490"))) PPC_WEAK_FUNC(sub_8317D490);
PPC_FUNC_IMPL(__imp__sub_8317D490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26832
	ctx.r3.s64 = ctx.r11.s64 + 26832;
	// b 0x828d1d88
	sub_828D1D88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D4A0"))) PPC_WEAK_FUNC(sub_8317D4A0);
PPC_FUNC_IMPL(__imp__sub_8317D4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26833
	ctx.r3.s64 = ctx.r11.s64 + 26833;
	// b 0x828d1e50
	sub_828D1E50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D4B0"))) PPC_WEAK_FUNC(sub_8317D4B0);
PPC_FUNC_IMPL(__imp__sub_8317D4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26606
	ctx.r3.s64 = ctx.r11.s64 + 26606;
	// b 0x828d1f68
	sub_828D1F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D4C0"))) PPC_WEAK_FUNC(sub_8317D4C0);
PPC_FUNC_IMPL(__imp__sub_8317D4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26607
	ctx.r3.s64 = ctx.r11.s64 + 26607;
	// b 0x828d20b8
	sub_828D20B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D4D0"))) PPC_WEAK_FUNC(sub_8317D4D0);
PPC_FUNC_IMPL(__imp__sub_8317D4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26689
	ctx.r3.s64 = ctx.r11.s64 + 26689;
	// b 0x828d21e8
	sub_828D21E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D4E0"))) PPC_WEAK_FUNC(sub_8317D4E0);
PPC_FUNC_IMPL(__imp__sub_8317D4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26695
	ctx.r3.s64 = ctx.r11.s64 + 26695;
	// b 0x828d2568
	sub_828D2568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D4F0"))) PPC_WEAK_FUNC(sub_8317D4F0);
PPC_FUNC_IMPL(__imp__sub_8317D4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26693
	ctx.r3.s64 = ctx.r11.s64 + 26693;
	// b 0x828d2630
	sub_828D2630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D500"))) PPC_WEAK_FUNC(sub_8317D500);
PPC_FUNC_IMPL(__imp__sub_8317D500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26692
	ctx.r3.s64 = ctx.r11.s64 + 26692;
	// b 0x828cd9d8
	sub_828CD9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D510"))) PPC_WEAK_FUNC(sub_8317D510);
PPC_FUNC_IMPL(__imp__sub_8317D510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26691
	ctx.r3.s64 = ctx.r11.s64 + 26691;
	// b 0x828cdb20
	sub_828CDB20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D520"))) PPC_WEAK_FUNC(sub_8317D520);
PPC_FUNC_IMPL(__imp__sub_8317D520) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,27024
	ctx.r30.s64 = ctx.r31.s64 + 27024;
	// addi r4,r11,-15836
	ctx.r4.s64 = ctx.r11.s64 + -15836;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317D54C;
	sub_82C07410(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
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
	// lfs f13,-22004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22004);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-5928
	ctx.r3.s64 = ctx.r7.s64 + -5928;
	// lfs f12,3488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3488);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,27024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27024, ctx.r11.u32);
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
	ctx.lr = 0x8317D58C;
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

__attribute__((alias("__imp__sub_8317D5A8"))) PPC_WEAK_FUNC(sub_8317D5A8);
PPC_FUNC_IMPL(__imp__sub_8317D5A8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,26696
	ctx.r30.s64 = ctx.r31.s64 + 26696;
	// addi r4,r11,-15800
	ctx.r4.s64 = ctx.r11.s64 + -15800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317D5D4;
	sub_82C07410(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
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
	// lfs f13,-22004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22004);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-5904
	ctx.r3.s64 = ctx.r7.s64 + -5904;
	// lfs f12,3488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3488);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,26696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26696, ctx.r11.u32);
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
	ctx.lr = 0x8317D614;
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

__attribute__((alias("__imp__sub_8317D630"))) PPC_WEAK_FUNC(sub_8317D630);
PPC_FUNC_IMPL(__imp__sub_8317D630) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,27048
	ctx.r30.s64 = ctx.r31.s64 + 27048;
	// addi r4,r11,-15764
	ctx.r4.s64 = ctx.r11.s64 + -15764;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317D65C;
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
	// lfs f13,3296(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3296);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-5880
	ctx.r3.s64 = ctx.r7.s64 + -5880;
	// lfs f12,3488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3488);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,27048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27048, ctx.r11.u32);
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
	ctx.lr = 0x8317D69C;
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

__attribute__((alias("__imp__sub_8317D6B8"))) PPC_WEAK_FUNC(sub_8317D6B8);
PPC_FUNC_IMPL(__imp__sub_8317D6B8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,27000
	ctx.r30.s64 = ctx.r31.s64 + 27000;
	// addi r4,r11,-15712
	ctx.r4.s64 = ctx.r11.s64 + -15712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317D6E4;
	sub_82C07410(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
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
	// lfs f13,-22004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22004);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-5856
	ctx.r3.s64 = ctx.r7.s64 + -5856;
	// lfs f12,3488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3488);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,27000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27000, ctx.r11.u32);
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
	ctx.lr = 0x8317D724;
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

__attribute__((alias("__imp__sub_8317D740"))) PPC_WEAK_FUNC(sub_8317D740);
PPC_FUNC_IMPL(__imp__sub_8317D740) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,26920
	ctx.r30.s64 = ctx.r31.s64 + 26920;
	// addi r4,r11,-15668
	ctx.r4.s64 = ctx.r11.s64 + -15668;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317D76C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3156(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-5832
	ctx.r3.s64 = ctx.r7.s64 + -5832;
	// lfs f12,-32372(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32372);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,26920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26920, ctx.r11.u32);
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
	ctx.lr = 0x8317D7AC;
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

__attribute__((alias("__imp__sub_8317D7C8"))) PPC_WEAK_FUNC(sub_8317D7C8);
PPC_FUNC_IMPL(__imp__sub_8317D7C8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,27072
	ctx.r30.s64 = ctx.r31.s64 + 27072;
	// addi r4,r11,-15624
	ctx.r4.s64 = ctx.r11.s64 + -15624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317D7F4;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
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
	// lfs f13,17832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17832);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-5808
	ctx.r3.s64 = ctx.r7.s64 + -5808;
	// lfs f12,3400(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3400);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,27072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27072, ctx.r11.u32);
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
	ctx.lr = 0x8317D834;
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

__attribute__((alias("__imp__sub_8317D850"))) PPC_WEAK_FUNC(sub_8317D850);
PPC_FUNC_IMPL(__imp__sub_8317D850) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,26976
	ctx.r30.s64 = ctx.r31.s64 + 26976;
	// addi r4,r11,-15580
	ctx.r4.s64 = ctx.r11.s64 + -15580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317D87C;
	sub_82C07410(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
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
	// lfs f13,-22004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22004);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-5784
	ctx.r3.s64 = ctx.r7.s64 + -5784;
	// lfs f12,3488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3488);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,26976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26976, ctx.r11.u32);
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
	ctx.lr = 0x8317D8BC;
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

__attribute__((alias("__imp__sub_8317D8D8"))) PPC_WEAK_FUNC(sub_8317D8D8);
PPC_FUNC_IMPL(__imp__sub_8317D8D8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,26720
	ctx.r30.s64 = ctx.r31.s64 + 26720;
	// addi r4,r11,-15548
	ctx.r4.s64 = ctx.r11.s64 + -15548;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317D904;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,26720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26720, ctx.r10.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-5760
	ctx.r3.s64 = ctx.r11.s64 + -5760;
	// bl 0x82a7e6b0
	ctx.lr = 0x8317D938;
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

__attribute__((alias("__imp__sub_8317D950"))) PPC_WEAK_FUNC(sub_8317D950);
PPC_FUNC_IMPL(__imp__sub_8317D950) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,27096
	ctx.r30.s64 = ctx.r31.s64 + 27096;
	// addi r4,r11,-15512
	ctx.r4.s64 = ctx.r11.s64 + -15512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317D97C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,27096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27096, ctx.r10.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-5736
	ctx.r3.s64 = ctx.r11.s64 + -5736;
	// bl 0x82a7e6b0
	ctx.lr = 0x8317D9B0;
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

__attribute__((alias("__imp__sub_8317D9C8"))) PPC_WEAK_FUNC(sub_8317D9C8);
PPC_FUNC_IMPL(__imp__sub_8317D9C8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,26792
	ctx.r30.s64 = ctx.r31.s64 + 26792;
	// addi r4,r11,-15476
	ctx.r4.s64 = ctx.r11.s64 + -15476;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317D9F4;
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
	// lfs f13,19696(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19696);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-5712
	ctx.r3.s64 = ctx.r7.s64 + -5712;
	// lfs f12,26564(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26564);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,26792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26792, ctx.r11.u32);
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
	ctx.lr = 0x8317DA34;
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

__attribute__((alias("__imp__sub_8317DA50"))) PPC_WEAK_FUNC(sub_8317DA50);
PPC_FUNC_IMPL(__imp__sub_8317DA50) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,26664
	ctx.r30.s64 = ctx.r31.s64 + 26664;
	// addi r4,r11,-15444
	ctx.r4.s64 = ctx.r11.s64 + -15444;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317DA7C;
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
	// lfs f13,19696(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19696);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-5688
	ctx.r3.s64 = ctx.r7.s64 + -5688;
	// lfs f12,26564(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26564);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,26664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26664, ctx.r11.u32);
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
	ctx.lr = 0x8317DABC;
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

__attribute__((alias("__imp__sub_8317DAD8"))) PPC_WEAK_FUNC(sub_8317DAD8);
PPC_FUNC_IMPL(__imp__sub_8317DAD8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,26768
	ctx.r30.s64 = ctx.r31.s64 + 26768;
	// addi r4,r11,-15412
	ctx.r4.s64 = ctx.r11.s64 + -15412;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317DB04;
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
	// lfs f13,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-5664
	ctx.r3.s64 = ctx.r7.s64 + -5664;
	// lfs f12,29264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,26768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26768, ctx.r11.u32);
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
	ctx.lr = 0x8317DB44;
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

__attribute__((alias("__imp__sub_8317DB60"))) PPC_WEAK_FUNC(sub_8317DB60);
PPC_FUNC_IMPL(__imp__sub_8317DB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26605
	ctx.r3.s64 = ctx.r11.s64 + 26605;
	// b 0x828d2fc8
	sub_828D2FC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DB70"))) PPC_WEAK_FUNC(sub_8317DB70);
PPC_FUNC_IMPL(__imp__sub_8317DB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26835
	ctx.r3.s64 = ctx.r11.s64 + 26835;
	// b 0x828ce860
	sub_828CE860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DB80"))) PPC_WEAK_FUNC(sub_8317DB80);
PPC_FUNC_IMPL(__imp__sub_8317DB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,26688
	ctx.r3.s64 = ctx.r11.s64 + 26688;
	// b 0x828ceaf8
	sub_828CEAF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DB90"))) PPC_WEAK_FUNC(sub_8317DB90);
PPC_FUNC_IMPL(__imp__sub_8317DB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-5536
	ctx.r3.s64 = ctx.r11.s64 + -5536;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DBA0"))) PPC_WEAK_FUNC(sub_8317DBA0);
PPC_FUNC_IMPL(__imp__sub_8317DBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// lwz r11,6104(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6104);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,6104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6104, ctx.r10.u32);
	// stw r11,28060(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28060, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317DBC0"))) PPC_WEAK_FUNC(sub_8317DBC0);
PPC_FUNC_IMPL(__imp__sub_8317DBC0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,26640
	ctx.r30.s64 = ctx.r31.s64 + 26640;
	// addi r4,r11,-15384
	ctx.r4.s64 = ctx.r11.s64 + -15384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317DBEC;
	sub_82C07410(ctx, base);
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-5528
	ctx.r3.s64 = ctx.r10.s64 + -5528;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,26640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26640, ctx.r11.u32);
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
	ctx.lr = 0x8317DC34;
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

__attribute__((alias("__imp__sub_8317DC50"))) PPC_WEAK_FUNC(sub_8317DC50);
PPC_FUNC_IMPL(__imp__sub_8317DC50) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,26836
	ctx.r30.s64 = ctx.r31.s64 + 26836;
	// addi r4,r11,-15356
	ctx.r4.s64 = ctx.r11.s64 + -15356;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317DC7C;
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
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-5504
	ctx.r3.s64 = ctx.r7.s64 + -5504;
	// lfs f12,3400(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3400);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,26836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26836, ctx.r11.u32);
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
	ctx.lr = 0x8317DCBC;
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

__attribute__((alias("__imp__sub_8317DCD8"))) PPC_WEAK_FUNC(sub_8317DCD8);
PPC_FUNC_IMPL(__imp__sub_8317DCD8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,26744
	ctx.r30.s64 = ctx.r31.s64 + 26744;
	// addi r4,r11,-15328
	ctx.r4.s64 = ctx.r11.s64 + -15328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317DD04;
	sub_82C07410(ctx, base);
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-5480
	ctx.r3.s64 = ctx.r10.s64 + -5480;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,26744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26744, ctx.r11.u32);
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
	ctx.lr = 0x8317DD4C;
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

__attribute__((alias("__imp__sub_8317DD68"))) PPC_WEAK_FUNC(sub_8317DD68);
PPC_FUNC_IMPL(__imp__sub_8317DD68) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,26896
	ctx.r30.s64 = ctx.r31.s64 + 26896;
	// addi r4,r11,-15300
	ctx.r4.s64 = ctx.r11.s64 + -15300;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317DD94;
	sub_82C07410(ctx, base);
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
	// lfs f0,3408(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3408);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-5456
	ctx.r3.s64 = ctx.r10.s64 + -5456;
	// lfs f11,3452(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3452);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,26896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26896, ctx.r11.u32);
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
	ctx.lr = 0x8317DDDC;
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

__attribute__((alias("__imp__sub_8317DDF8"))) PPC_WEAK_FUNC(sub_8317DDF8);
PPC_FUNC_IMPL(__imp__sub_8317DDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4856
	ctx.r3.s64 = ctx.r11.s64 + -4856;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DE08"))) PPC_WEAK_FUNC(sub_8317DE08);
PPC_FUNC_IMPL(__imp__sub_8317DE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,28864
	ctx.r9.s64 = ctx.r11.s64 + 28864;
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

__attribute__((alias("__imp__sub_8317DE38"))) PPC_WEAK_FUNC(sub_8317DE38);
PPC_FUNC_IMPL(__imp__sub_8317DE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
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

__attribute__((alias("__imp__sub_8317DE68"))) PPC_WEAK_FUNC(sub_8317DE68);
PPC_FUNC_IMPL(__imp__sub_8317DE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,28768
	ctx.r9.s64 = ctx.r11.s64 + 28768;
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

__attribute__((alias("__imp__sub_8317DE98"))) PPC_WEAK_FUNC(sub_8317DE98);
PPC_FUNC_IMPL(__imp__sub_8317DE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,28816
	ctx.r9.s64 = ctx.r11.s64 + 28816;
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

__attribute__((alias("__imp__sub_8317DEC8"))) PPC_WEAK_FUNC(sub_8317DEC8);
PPC_FUNC_IMPL(__imp__sub_8317DEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,28800
	ctx.r10.s64 = ctx.r10.s64 + 28800;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317DEE8"))) PPC_WEAK_FUNC(sub_8317DEE8);
PPC_FUNC_IMPL(__imp__sub_8317DEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,28752
	ctx.r10.s64 = ctx.r10.s64 + 28752;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317DF08"))) PPC_WEAK_FUNC(sub_8317DF08);
PPC_FUNC_IMPL(__imp__sub_8317DF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28888
	ctx.r3.s64 = ctx.r11.s64 + 28888;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DF18"))) PPC_WEAK_FUNC(sub_8317DF18);
PPC_FUNC_IMPL(__imp__sub_8317DF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,28848
	ctx.r10.s64 = ctx.r10.s64 + 28848;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317DF38"))) PPC_WEAK_FUNC(sub_8317DF38);
PPC_FUNC_IMPL(__imp__sub_8317DF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28786
	ctx.r3.s64 = ctx.r11.s64 + 28786;
	// b 0x828e5f28
	sub_828E5F28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DF48"))) PPC_WEAK_FUNC(sub_8317DF48);
PPC_FUNC_IMPL(__imp__sub_8317DF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28789
	ctx.r3.s64 = ctx.r11.s64 + 28789;
	// b 0x828e5fa8
	sub_828E5FA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DF58"))) PPC_WEAK_FUNC(sub_8317DF58);
PPC_FUNC_IMPL(__imp__sub_8317DF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28883
	ctx.r3.s64 = ctx.r11.s64 + 28883;
	// b 0x828e7c38
	sub_828E7C38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DF68"))) PPC_WEAK_FUNC(sub_8317DF68);
PPC_FUNC_IMPL(__imp__sub_8317DF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28790
	ctx.r3.s64 = ctx.r11.s64 + 28790;
	// b 0x828e6080
	sub_828E6080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DF78"))) PPC_WEAK_FUNC(sub_8317DF78);
PPC_FUNC_IMPL(__imp__sub_8317DF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28793
	ctx.r3.s64 = ctx.r11.s64 + 28793;
	// b 0x828e6100
	sub_828E6100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DF88"))) PPC_WEAK_FUNC(sub_8317DF88);
PPC_FUNC_IMPL(__imp__sub_8317DF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28784
	ctx.r3.s64 = ctx.r11.s64 + 28784;
	// b 0x828e6180
	sub_828E6180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DF98"))) PPC_WEAK_FUNC(sub_8317DF98);
PPC_FUNC_IMPL(__imp__sub_8317DF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28881
	ctx.r3.s64 = ctx.r11.s64 + 28881;
	// b 0x828e62b0
	sub_828E62B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DFA8"))) PPC_WEAK_FUNC(sub_8317DFA8);
PPC_FUNC_IMPL(__imp__sub_8317DFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28792
	ctx.r3.s64 = ctx.r11.s64 + 28792;
	// b 0x828e7d08
	sub_828E7D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DFB8"))) PPC_WEAK_FUNC(sub_8317DFB8);
PPC_FUNC_IMPL(__imp__sub_8317DFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28785
	ctx.r3.s64 = ctx.r11.s64 + 28785;
	// b 0x828e7dd0
	sub_828E7DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DFC8"))) PPC_WEAK_FUNC(sub_8317DFC8);
PPC_FUNC_IMPL(__imp__sub_8317DFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28794
	ctx.r3.s64 = ctx.r11.s64 + 28794;
	// b 0x828e7e98
	sub_828E7E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DFD8"))) PPC_WEAK_FUNC(sub_8317DFD8);
PPC_FUNC_IMPL(__imp__sub_8317DFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28787
	ctx.r3.s64 = ctx.r11.s64 + 28787;
	// b 0x828e7f60
	sub_828E7F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DFE8"))) PPC_WEAK_FUNC(sub_8317DFE8);
PPC_FUNC_IMPL(__imp__sub_8317DFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28795
	ctx.r3.s64 = ctx.r11.s64 + 28795;
	// b 0x828e8078
	sub_828E8078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317DFF8"))) PPC_WEAK_FUNC(sub_8317DFF8);
PPC_FUNC_IMPL(__imp__sub_8317DFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28791
	ctx.r3.s64 = ctx.r11.s64 + 28791;
	// b 0x828e81e0
	sub_828E81E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E008"))) PPC_WEAK_FUNC(sub_8317E008);
PPC_FUNC_IMPL(__imp__sub_8317E008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28882
	ctx.r3.s64 = ctx.r11.s64 + 28882;
	// b 0x828e82a8
	sub_828E82A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E018"))) PPC_WEAK_FUNC(sub_8317E018);
PPC_FUNC_IMPL(__imp__sub_8317E018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4960
	ctx.r3.s64 = ctx.r11.s64 + -4960;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E028"))) PPC_WEAK_FUNC(sub_8317E028);
PPC_FUNC_IMPL(__imp__sub_8317E028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28788
	ctx.r3.s64 = ctx.r11.s64 + 28788;
	// b 0x828e8378
	sub_828E8378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E038"))) PPC_WEAK_FUNC(sub_8317E038);
PPC_FUNC_IMPL(__imp__sub_8317E038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,28880
	ctx.r3.s64 = ctx.r11.s64 + 28880;
	// b 0x828e8440
	sub_828E8440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E048"))) PPC_WEAK_FUNC(sub_8317E048);
PPC_FUNC_IMPL(__imp__sub_8317E048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,30512
	ctx.r9.s64 = ctx.r11.s64 + 30512;
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

__attribute__((alias("__imp__sub_8317E078"))) PPC_WEAK_FUNC(sub_8317E078);
PPC_FUNC_IMPL(__imp__sub_8317E078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,30480
	ctx.r9.s64 = ctx.r11.s64 + 30480;
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

__attribute__((alias("__imp__sub_8317E0A8"))) PPC_WEAK_FUNC(sub_8317E0A8);
PPC_FUNC_IMPL(__imp__sub_8317E0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,30416
	ctx.r9.s64 = ctx.r11.s64 + 30416;
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

__attribute__((alias("__imp__sub_8317E0D8"))) PPC_WEAK_FUNC(sub_8317E0D8);
PPC_FUNC_IMPL(__imp__sub_8317E0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,30464
	ctx.r9.s64 = ctx.r11.s64 + 30464;
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

__attribute__((alias("__imp__sub_8317E108"))) PPC_WEAK_FUNC(sub_8317E108);
PPC_FUNC_IMPL(__imp__sub_8317E108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,30448
	ctx.r10.s64 = ctx.r10.s64 + 30448;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317E128"))) PPC_WEAK_FUNC(sub_8317E128);
PPC_FUNC_IMPL(__imp__sub_8317E128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,30384
	ctx.r10.s64 = ctx.r10.s64 + 30384;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317E148"))) PPC_WEAK_FUNC(sub_8317E148);
PPC_FUNC_IMPL(__imp__sub_8317E148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3560
	ctx.r3.s64 = ctx.r11.s64 + -3560;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E158"))) PPC_WEAK_FUNC(sub_8317E158);
PPC_FUNC_IMPL(__imp__sub_8317E158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,30496
	ctx.r10.s64 = ctx.r10.s64 + 30496;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317E178"))) PPC_WEAK_FUNC(sub_8317E178);
PPC_FUNC_IMPL(__imp__sub_8317E178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30528
	ctx.r3.s64 = ctx.r11.s64 + 30528;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E188"))) PPC_WEAK_FUNC(sub_8317E188);
PPC_FUNC_IMPL(__imp__sub_8317E188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30406
	ctx.r3.s64 = ctx.r11.s64 + 30406;
	// b 0x828f5ef8
	sub_828F5EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E198"))) PPC_WEAK_FUNC(sub_8317E198);
PPC_FUNC_IMPL(__imp__sub_8317E198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30601
	ctx.r3.s64 = ctx.r11.s64 + 30601;
	// b 0x828f5fc0
	sub_828F5FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E1A8"))) PPC_WEAK_FUNC(sub_8317E1A8);
PPC_FUNC_IMPL(__imp__sub_8317E1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30435
	ctx.r3.s64 = ctx.r11.s64 + 30435;
	// b 0x828f6088
	sub_828F6088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E1B8"))) PPC_WEAK_FUNC(sub_8317E1B8);
PPC_FUNC_IMPL(__imp__sub_8317E1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30603
	ctx.r3.s64 = ctx.r11.s64 + 30603;
	// b 0x828f6150
	sub_828F6150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E1C8"))) PPC_WEAK_FUNC(sub_8317E1C8);
PPC_FUNC_IMPL(__imp__sub_8317E1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30438
	ctx.r3.s64 = ctx.r11.s64 + 30438;
	// b 0x828f6218
	sub_828F6218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E1D8"))) PPC_WEAK_FUNC(sub_8317E1D8);
PPC_FUNC_IMPL(__imp__sub_8317E1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30410
	ctx.r3.s64 = ctx.r11.s64 + 30410;
	// b 0x828f62e0
	sub_828F62E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E1E8"))) PPC_WEAK_FUNC(sub_8317E1E8);
PPC_FUNC_IMPL(__imp__sub_8317E1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30600
	ctx.r3.s64 = ctx.r11.s64 + 30600;
	// b 0x828f63a8
	sub_828F63A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E1F8"))) PPC_WEAK_FUNC(sub_8317E1F8);
PPC_FUNC_IMPL(__imp__sub_8317E1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30401
	ctx.r3.s64 = ctx.r11.s64 + 30401;
	// b 0x828f6470
	sub_828F6470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E208"))) PPC_WEAK_FUNC(sub_8317E208);
PPC_FUNC_IMPL(__imp__sub_8317E208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30433
	ctx.r3.s64 = ctx.r11.s64 + 30433;
	// b 0x828f6538
	sub_828F6538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E218"))) PPC_WEAK_FUNC(sub_8317E218);
PPC_FUNC_IMPL(__imp__sub_8317E218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30434
	ctx.r3.s64 = ctx.r11.s64 + 30434;
	// b 0x828f6600
	sub_828F6600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E228"))) PPC_WEAK_FUNC(sub_8317E228);
PPC_FUNC_IMPL(__imp__sub_8317E228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30402
	ctx.r3.s64 = ctx.r11.s64 + 30402;
	// b 0x828f66c8
	sub_828F66C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E238"))) PPC_WEAK_FUNC(sub_8317E238);
PPC_FUNC_IMPL(__imp__sub_8317E238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30414
	ctx.r3.s64 = ctx.r11.s64 + 30414;
	// b 0x828f6790
	sub_828F6790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E248"))) PPC_WEAK_FUNC(sub_8317E248);
PPC_FUNC_IMPL(__imp__sub_8317E248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30405
	ctx.r3.s64 = ctx.r11.s64 + 30405;
	// b 0x828f6858
	sub_828F6858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E258"))) PPC_WEAK_FUNC(sub_8317E258);
PPC_FUNC_IMPL(__imp__sub_8317E258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30415
	ctx.r3.s64 = ctx.r11.s64 + 30415;
	// b 0x828f6920
	sub_828F6920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E268"))) PPC_WEAK_FUNC(sub_8317E268);
PPC_FUNC_IMPL(__imp__sub_8317E268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30413
	ctx.r3.s64 = ctx.r11.s64 + 30413;
	// b 0x828f69e8
	sub_828F69E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E278"))) PPC_WEAK_FUNC(sub_8317E278);
PPC_FUNC_IMPL(__imp__sub_8317E278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30408
	ctx.r3.s64 = ctx.r11.s64 + 30408;
	// b 0x828f6ab0
	sub_828F6AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E288"))) PPC_WEAK_FUNC(sub_8317E288);
PPC_FUNC_IMPL(__imp__sub_8317E288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30407
	ctx.r3.s64 = ctx.r11.s64 + 30407;
	// b 0x828f6b78
	sub_828F6B78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E298"))) PPC_WEAK_FUNC(sub_8317E298);
PPC_FUNC_IMPL(__imp__sub_8317E298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30411
	ctx.r3.s64 = ctx.r11.s64 + 30411;
	// b 0x828f6c40
	sub_828F6C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E2A8"))) PPC_WEAK_FUNC(sub_8317E2A8);
PPC_FUNC_IMPL(__imp__sub_8317E2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30436
	ctx.r3.s64 = ctx.r11.s64 + 30436;
	// b 0x828f6d08
	sub_828F6D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E2B8"))) PPC_WEAK_FUNC(sub_8317E2B8);
PPC_FUNC_IMPL(__imp__sub_8317E2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30404
	ctx.r3.s64 = ctx.r11.s64 + 30404;
	// b 0x828f6dd0
	sub_828F6DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E2C8"))) PPC_WEAK_FUNC(sub_8317E2C8);
PPC_FUNC_IMPL(__imp__sub_8317E2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30440
	ctx.r3.s64 = ctx.r11.s64 + 30440;
	// b 0x828f7180
	sub_828F7180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E2D8"))) PPC_WEAK_FUNC(sub_8317E2D8);
PPC_FUNC_IMPL(__imp__sub_8317E2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30443
	ctx.r3.s64 = ctx.r11.s64 + 30443;
	// b 0x828f7248
	sub_828F7248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E2E8"))) PPC_WEAK_FUNC(sub_8317E2E8);
PPC_FUNC_IMPL(__imp__sub_8317E2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30400
	ctx.r3.s64 = ctx.r11.s64 + 30400;
	// b 0x828f7310
	sub_828F7310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E2F8"))) PPC_WEAK_FUNC(sub_8317E2F8);
PPC_FUNC_IMPL(__imp__sub_8317E2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30412
	ctx.r3.s64 = ctx.r11.s64 + 30412;
	// b 0x828f73d8
	sub_828F73D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E308"))) PPC_WEAK_FUNC(sub_8317E308);
PPC_FUNC_IMPL(__imp__sub_8317E308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30602
	ctx.r3.s64 = ctx.r11.s64 + 30602;
	// b 0x828f74a0
	sub_828F74A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E318"))) PPC_WEAK_FUNC(sub_8317E318);
PPC_FUNC_IMPL(__imp__sub_8317E318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30442
	ctx.r3.s64 = ctx.r11.s64 + 30442;
	// b 0x828f7568
	sub_828F7568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E328"))) PPC_WEAK_FUNC(sub_8317E328);
PPC_FUNC_IMPL(__imp__sub_8317E328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30403
	ctx.r3.s64 = ctx.r11.s64 + 30403;
	// b 0x828f7630
	sub_828F7630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E338"))) PPC_WEAK_FUNC(sub_8317E338);
PPC_FUNC_IMPL(__imp__sub_8317E338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30439
	ctx.r3.s64 = ctx.r11.s64 + 30439;
	// b 0x828f76f8
	sub_828F76F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E348"))) PPC_WEAK_FUNC(sub_8317E348);
PPC_FUNC_IMPL(__imp__sub_8317E348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30432
	ctx.r3.s64 = ctx.r11.s64 + 30432;
	// b 0x828f77c0
	sub_828F77C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E358"))) PPC_WEAK_FUNC(sub_8317E358);
PPC_FUNC_IMPL(__imp__sub_8317E358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30409
	ctx.r3.s64 = ctx.r11.s64 + 30409;
	// b 0x828f7888
	sub_828F7888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E368"))) PPC_WEAK_FUNC(sub_8317E368);
PPC_FUNC_IMPL(__imp__sub_8317E368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30437
	ctx.r3.s64 = ctx.r11.s64 + 30437;
	// b 0x828f7950
	sub_828F7950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E378"))) PPC_WEAK_FUNC(sub_8317E378);
PPC_FUNC_IMPL(__imp__sub_8317E378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30441
	ctx.r3.s64 = ctx.r11.s64 + 30441;
	// b 0x828f7a18
	sub_828F7A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E388"))) PPC_WEAK_FUNC(sub_8317E388);
PPC_FUNC_IMPL(__imp__sub_8317E388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-2344
	ctx.r3.s64 = ctx.r11.s64 + -2344;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E398"))) PPC_WEAK_FUNC(sub_8317E398);
PPC_FUNC_IMPL(__imp__sub_8317E398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,30736
	ctx.r9.s64 = ctx.r11.s64 + 30736;
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

__attribute__((alias("__imp__sub_8317E3C8"))) PPC_WEAK_FUNC(sub_8317E3C8);
PPC_FUNC_IMPL(__imp__sub_8317E3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,30704
	ctx.r9.s64 = ctx.r11.s64 + 30704;
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

__attribute__((alias("__imp__sub_8317E3F8"))) PPC_WEAK_FUNC(sub_8317E3F8);
PPC_FUNC_IMPL(__imp__sub_8317E3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,30640
	ctx.r9.s64 = ctx.r11.s64 + 30640;
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

__attribute__((alias("__imp__sub_8317E428"))) PPC_WEAK_FUNC(sub_8317E428);
PPC_FUNC_IMPL(__imp__sub_8317E428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,30688
	ctx.r9.s64 = ctx.r11.s64 + 30688;
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

__attribute__((alias("__imp__sub_8317E458"))) PPC_WEAK_FUNC(sub_8317E458);
PPC_FUNC_IMPL(__imp__sub_8317E458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,30672
	ctx.r10.s64 = ctx.r10.s64 + 30672;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317E478"))) PPC_WEAK_FUNC(sub_8317E478);
PPC_FUNC_IMPL(__imp__sub_8317E478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,30624
	ctx.r10.s64 = ctx.r10.s64 + 30624;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317E498"))) PPC_WEAK_FUNC(sub_8317E498);
PPC_FUNC_IMPL(__imp__sub_8317E498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30760
	ctx.r3.s64 = ctx.r11.s64 + 30760;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E4A8"))) PPC_WEAK_FUNC(sub_8317E4A8);
PPC_FUNC_IMPL(__imp__sub_8317E4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,30720
	ctx.r10.s64 = ctx.r10.s64 + 30720;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317E4C8"))) PPC_WEAK_FUNC(sub_8317E4C8);
PPC_FUNC_IMPL(__imp__sub_8317E4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30657
	ctx.r3.s64 = ctx.r11.s64 + 30657;
	// b 0x829020c8
	sub_829020C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E4D8"))) PPC_WEAK_FUNC(sub_8317E4D8);
PPC_FUNC_IMPL(__imp__sub_8317E4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30663
	ctx.r3.s64 = ctx.r11.s64 + 30663;
	// b 0x82902190
	sub_82902190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E4E8"))) PPC_WEAK_FUNC(sub_8317E4E8);
PPC_FUNC_IMPL(__imp__sub_8317E4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30659
	ctx.r3.s64 = ctx.r11.s64 + 30659;
	// b 0x829022a8
	sub_829022A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E4F8"))) PPC_WEAK_FUNC(sub_8317E4F8);
PPC_FUNC_IMPL(__imp__sub_8317E4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30622
	ctx.r3.s64 = ctx.r11.s64 + 30622;
	// b 0x82902370
	sub_82902370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E508"))) PPC_WEAK_FUNC(sub_8317E508);
PPC_FUNC_IMPL(__imp__sub_8317E508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30662
	ctx.r3.s64 = ctx.r11.s64 + 30662;
	// b 0x82902438
	sub_82902438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E518"))) PPC_WEAK_FUNC(sub_8317E518);
PPC_FUNC_IMPL(__imp__sub_8317E518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30618
	ctx.r3.s64 = ctx.r11.s64 + 30618;
	// b 0x82902500
	sub_82902500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E528"))) PPC_WEAK_FUNC(sub_8317E528);
PPC_FUNC_IMPL(__imp__sub_8317E528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30621
	ctx.r3.s64 = ctx.r11.s64 + 30621;
	// b 0x829025c8
	sub_829025C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E538"))) PPC_WEAK_FUNC(sub_8317E538);
PPC_FUNC_IMPL(__imp__sub_8317E538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30614
	ctx.r3.s64 = ctx.r11.s64 + 30614;
	// b 0x82902690
	sub_82902690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E548"))) PPC_WEAK_FUNC(sub_8317E548);
PPC_FUNC_IMPL(__imp__sub_8317E548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30671
	ctx.r3.s64 = ctx.r11.s64 + 30671;
	// b 0x829027a8
	sub_829027A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E558"))) PPC_WEAK_FUNC(sub_8317E558);
PPC_FUNC_IMPL(__imp__sub_8317E558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30668
	ctx.r3.s64 = ctx.r11.s64 + 30668;
	// b 0x82902870
	sub_82902870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E568"))) PPC_WEAK_FUNC(sub_8317E568);
PPC_FUNC_IMPL(__imp__sub_8317E568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30656
	ctx.r3.s64 = ctx.r11.s64 + 30656;
	// b 0x82902938
	sub_82902938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E578"))) PPC_WEAK_FUNC(sub_8317E578);
PPC_FUNC_IMPL(__imp__sub_8317E578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30610
	ctx.r3.s64 = ctx.r11.s64 + 30610;
	// b 0x82902a00
	sub_82902A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E588"))) PPC_WEAK_FUNC(sub_8317E588);
PPC_FUNC_IMPL(__imp__sub_8317E588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30666
	ctx.r3.s64 = ctx.r11.s64 + 30666;
	// b 0x82902ac8
	sub_82902AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E598"))) PPC_WEAK_FUNC(sub_8317E598);
PPC_FUNC_IMPL(__imp__sub_8317E598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30667
	ctx.r3.s64 = ctx.r11.s64 + 30667;
	// b 0x82902b90
	sub_82902B90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E5A8"))) PPC_WEAK_FUNC(sub_8317E5A8);
PPC_FUNC_IMPL(__imp__sub_8317E5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30658
	ctx.r3.s64 = ctx.r11.s64 + 30658;
	// b 0x82902c58
	sub_82902C58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E5B8"))) PPC_WEAK_FUNC(sub_8317E5B8);
PPC_FUNC_IMPL(__imp__sub_8317E5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30616
	ctx.r3.s64 = ctx.r11.s64 + 30616;
	// b 0x82902d20
	sub_82902D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E5C8"))) PPC_WEAK_FUNC(sub_8317E5C8);
PPC_FUNC_IMPL(__imp__sub_8317E5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30615
	ctx.r3.s64 = ctx.r11.s64 + 30615;
	// b 0x82902de8
	sub_82902DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E5D8"))) PPC_WEAK_FUNC(sub_8317E5D8);
PPC_FUNC_IMPL(__imp__sub_8317E5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30619
	ctx.r3.s64 = ctx.r11.s64 + 30619;
	// b 0x82902eb0
	sub_82902EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E5E8"))) PPC_WEAK_FUNC(sub_8317E5E8);
PPC_FUNC_IMPL(__imp__sub_8317E5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30660
	ctx.r3.s64 = ctx.r11.s64 + 30660;
	// b 0x82902f78
	sub_82902F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E5F8"))) PPC_WEAK_FUNC(sub_8317E5F8);
PPC_FUNC_IMPL(__imp__sub_8317E5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30613
	ctx.r3.s64 = ctx.r11.s64 + 30613;
	// b 0x82903090
	sub_82903090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E608"))) PPC_WEAK_FUNC(sub_8317E608);
PPC_FUNC_IMPL(__imp__sub_8317E608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30664
	ctx.r3.s64 = ctx.r11.s64 + 30664;
	// b 0x82903158
	sub_82903158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E618"))) PPC_WEAK_FUNC(sub_8317E618);
PPC_FUNC_IMPL(__imp__sub_8317E618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30669
	ctx.r3.s64 = ctx.r11.s64 + 30669;
	// b 0x82903220
	sub_82903220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E628"))) PPC_WEAK_FUNC(sub_8317E628);
PPC_FUNC_IMPL(__imp__sub_8317E628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30611
	ctx.r3.s64 = ctx.r11.s64 + 30611;
	// b 0x829032e8
	sub_829032E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E638"))) PPC_WEAK_FUNC(sub_8317E638);
PPC_FUNC_IMPL(__imp__sub_8317E638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30620
	ctx.r3.s64 = ctx.r11.s64 + 30620;
	// b 0x829033b0
	sub_829033B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E648"))) PPC_WEAK_FUNC(sub_8317E648);
PPC_FUNC_IMPL(__imp__sub_8317E648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30670
	ctx.r3.s64 = ctx.r11.s64 + 30670;
	// b 0x82903478
	sub_82903478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E658"))) PPC_WEAK_FUNC(sub_8317E658);
PPC_FUNC_IMPL(__imp__sub_8317E658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30665
	ctx.r3.s64 = ctx.r11.s64 + 30665;
	// b 0x82903540
	sub_82903540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E668"))) PPC_WEAK_FUNC(sub_8317E668);
PPC_FUNC_IMPL(__imp__sub_8317E668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30612
	ctx.r3.s64 = ctx.r11.s64 + 30612;
	// b 0x82903608
	sub_82903608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E678"))) PPC_WEAK_FUNC(sub_8317E678);
PPC_FUNC_IMPL(__imp__sub_8317E678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30661
	ctx.r3.s64 = ctx.r11.s64 + 30661;
	// b 0x829036d0
	sub_829036D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E688"))) PPC_WEAK_FUNC(sub_8317E688);
PPC_FUNC_IMPL(__imp__sub_8317E688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30623
	ctx.r3.s64 = ctx.r11.s64 + 30623;
	// b 0x829037e8
	sub_829037E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E698"))) PPC_WEAK_FUNC(sub_8317E698);
PPC_FUNC_IMPL(__imp__sub_8317E698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,30617
	ctx.r3.s64 = ctx.r11.s64 + 30617;
	// b 0x829038b0
	sub_829038B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E6A8"))) PPC_WEAK_FUNC(sub_8317E6A8);
PPC_FUNC_IMPL(__imp__sub_8317E6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,32320
	ctx.r9.s64 = ctx.r11.s64 + 32320;
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

__attribute__((alias("__imp__sub_8317E6D8"))) PPC_WEAK_FUNC(sub_8317E6D8);
PPC_FUNC_IMPL(__imp__sub_8317E6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,32272
	ctx.r9.s64 = ctx.r11.s64 + 32272;
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

__attribute__((alias("__imp__sub_8317E708"))) PPC_WEAK_FUNC(sub_8317E708);
PPC_FUNC_IMPL(__imp__sub_8317E708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,32208
	ctx.r9.s64 = ctx.r11.s64 + 32208;
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

__attribute__((alias("__imp__sub_8317E738"))) PPC_WEAK_FUNC(sub_8317E738);
PPC_FUNC_IMPL(__imp__sub_8317E738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,32256
	ctx.r9.s64 = ctx.r11.s64 + 32256;
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

__attribute__((alias("__imp__sub_8317E768"))) PPC_WEAK_FUNC(sub_8317E768);
PPC_FUNC_IMPL(__imp__sub_8317E768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,32240
	ctx.r10.s64 = ctx.r10.s64 + 32240;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317E788"))) PPC_WEAK_FUNC(sub_8317E788);
PPC_FUNC_IMPL(__imp__sub_8317E788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,32176
	ctx.r10.s64 = ctx.r10.s64 + 32176;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317E7A8"))) PPC_WEAK_FUNC(sub_8317E7A8);
PPC_FUNC_IMPL(__imp__sub_8317E7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-280
	ctx.r3.s64 = ctx.r11.s64 + -280;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E7B8"))) PPC_WEAK_FUNC(sub_8317E7B8);
PPC_FUNC_IMPL(__imp__sub_8317E7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32336
	ctx.r3.s64 = ctx.r11.s64 + 32336;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E7C8"))) PPC_WEAK_FUNC(sub_8317E7C8);
PPC_FUNC_IMPL(__imp__sub_8317E7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,32304
	ctx.r10.s64 = ctx.r10.s64 + 32304;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317E7E8"))) PPC_WEAK_FUNC(sub_8317E7E8);
PPC_FUNC_IMPL(__imp__sub_8317E7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32230
	ctx.r3.s64 = ctx.r11.s64 + 32230;
	// b 0x82912528
	sub_82912528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E7F8"))) PPC_WEAK_FUNC(sub_8317E7F8);
PPC_FUNC_IMPL(__imp__sub_8317E7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32292
	ctx.r3.s64 = ctx.r11.s64 + 32292;
	// b 0x829125f0
	sub_829125F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E808"))) PPC_WEAK_FUNC(sub_8317E808);
PPC_FUNC_IMPL(__imp__sub_8317E808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32233
	ctx.r3.s64 = ctx.r11.s64 + 32233;
	// b 0x82912708
	sub_82912708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E818"))) PPC_WEAK_FUNC(sub_8317E818);
PPC_FUNC_IMPL(__imp__sub_8317E818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32411
	ctx.r3.s64 = ctx.r11.s64 + 32411;
	// b 0x829127d0
	sub_829127D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E828"))) PPC_WEAK_FUNC(sub_8317E828);
PPC_FUNC_IMPL(__imp__sub_8317E828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32289
	ctx.r3.s64 = ctx.r11.s64 + 32289;
	// b 0x829128e8
	sub_829128E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E838"))) PPC_WEAK_FUNC(sub_8317E838);
PPC_FUNC_IMPL(__imp__sub_8317E838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32201
	ctx.r3.s64 = ctx.r11.s64 + 32201;
	// b 0x829129b0
	sub_829129B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E848"))) PPC_WEAK_FUNC(sub_8317E848);
PPC_FUNC_IMPL(__imp__sub_8317E848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32409
	ctx.r3.s64 = ctx.r11.s64 + 32409;
	// b 0x82912a78
	sub_82912A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E858"))) PPC_WEAK_FUNC(sub_8317E858);
PPC_FUNC_IMPL(__imp__sub_8317E858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32175
	ctx.r3.s64 = ctx.r11.s64 + 32175;
	// b 0x82912b40
	sub_82912B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E868"))) PPC_WEAK_FUNC(sub_8317E868);
PPC_FUNC_IMPL(__imp__sub_8317E868) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// lwz r11,10596(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10596);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,10596(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10596, ctx.r10.u32);
	// stw r11,-30880(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30880, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317E888"))) PPC_WEAK_FUNC(sub_8317E888);
PPC_FUNC_IMPL(__imp__sub_8317E888) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// lwz r11,10596(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10596);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,10596(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10596, ctx.r10.u32);
	// stw r11,-30876(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30876, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317E8A8"))) PPC_WEAK_FUNC(sub_8317E8A8);
PPC_FUNC_IMPL(__imp__sub_8317E8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// lwz r11,10596(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10596);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,10596(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10596, ctx.r10.u32);
	// stw r11,-30884(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30884, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317E8C8"))) PPC_WEAK_FUNC(sub_8317E8C8);
PPC_FUNC_IMPL(__imp__sub_8317E8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32229
	ctx.r3.s64 = ctx.r11.s64 + 32229;
	// b 0x82912c08
	sub_82912C08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E8D8"))) PPC_WEAK_FUNC(sub_8317E8D8);
PPC_FUNC_IMPL(__imp__sub_8317E8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32232
	ctx.r3.s64 = ctx.r11.s64 + 32232;
	// b 0x82912cd0
	sub_82912CD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E8E8"))) PPC_WEAK_FUNC(sub_8317E8E8);
PPC_FUNC_IMPL(__imp__sub_8317E8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32192
	ctx.r3.s64 = ctx.r11.s64 + 32192;
	// b 0x82912d98
	sub_82912D98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E8F8"))) PPC_WEAK_FUNC(sub_8317E8F8);
PPC_FUNC_IMPL(__imp__sub_8317E8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32206
	ctx.r3.s64 = ctx.r11.s64 + 32206;
	// b 0x82912eb0
	sub_82912EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E908"))) PPC_WEAK_FUNC(sub_8317E908);
PPC_FUNC_IMPL(__imp__sub_8317E908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32196
	ctx.r3.s64 = ctx.r11.s64 + 32196;
	// b 0x82912f78
	sub_82912F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E918"))) PPC_WEAK_FUNC(sub_8317E918);
PPC_FUNC_IMPL(__imp__sub_8317E918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32207
	ctx.r3.s64 = ctx.r11.s64 + 32207;
	// b 0x82913040
	sub_82913040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E928"))) PPC_WEAK_FUNC(sub_8317E928);
PPC_FUNC_IMPL(__imp__sub_8317E928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32205
	ctx.r3.s64 = ctx.r11.s64 + 32205;
	// b 0x82913108
	sub_82913108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E938"))) PPC_WEAK_FUNC(sub_8317E938);
PPC_FUNC_IMPL(__imp__sub_8317E938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32199
	ctx.r3.s64 = ctx.r11.s64 + 32199;
	// b 0x8290d0a8
	sub_8290D0A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E948"))) PPC_WEAK_FUNC(sub_8317E948);
PPC_FUNC_IMPL(__imp__sub_8317E948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32198
	ctx.r3.s64 = ctx.r11.s64 + 32198;
	// b 0x829131d0
	sub_829131D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E958"))) PPC_WEAK_FUNC(sub_8317E958);
PPC_FUNC_IMPL(__imp__sub_8317E958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32203
	ctx.r3.s64 = ctx.r11.s64 + 32203;
	// b 0x82913298
	sub_82913298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E968"))) PPC_WEAK_FUNC(sub_8317E968);
PPC_FUNC_IMPL(__imp__sub_8317E968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32237
	ctx.r3.s64 = ctx.r11.s64 + 32237;
	// b 0x82913360
	sub_82913360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E978"))) PPC_WEAK_FUNC(sub_8317E978);
PPC_FUNC_IMPL(__imp__sub_8317E978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32195
	ctx.r3.s64 = ctx.r11.s64 + 32195;
	// b 0x82913428
	sub_82913428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E988"))) PPC_WEAK_FUNC(sub_8317E988);
PPC_FUNC_IMPL(__imp__sub_8317E988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32293
	ctx.r3.s64 = ctx.r11.s64 + 32293;
	// b 0x829134f0
	sub_829134F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E998"))) PPC_WEAK_FUNC(sub_8317E998);
PPC_FUNC_IMPL(__imp__sub_8317E998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32408
	ctx.r3.s64 = ctx.r11.s64 + 32408;
	// b 0x829135b8
	sub_829135B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E9A8"))) PPC_WEAK_FUNC(sub_8317E9A8);
PPC_FUNC_IMPL(__imp__sub_8317E9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32174
	ctx.r3.s64 = ctx.r11.s64 + 32174;
	// b 0x82913680
	sub_82913680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E9B8"))) PPC_WEAK_FUNC(sub_8317E9B8);
PPC_FUNC_IMPL(__imp__sub_8317E9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32204
	ctx.r3.s64 = ctx.r11.s64 + 32204;
	// b 0x82913748
	sub_82913748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E9C8"))) PPC_WEAK_FUNC(sub_8317E9C8);
PPC_FUNC_IMPL(__imp__sub_8317E9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32410
	ctx.r3.s64 = ctx.r11.s64 + 32410;
	// b 0x82913810
	sub_82913810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E9D8"))) PPC_WEAK_FUNC(sub_8317E9D8);
PPC_FUNC_IMPL(__imp__sub_8317E9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32295
	ctx.r3.s64 = ctx.r11.s64 + 32295;
	// b 0x829138d8
	sub_829138D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E9E8"))) PPC_WEAK_FUNC(sub_8317E9E8);
PPC_FUNC_IMPL(__imp__sub_8317E9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32193
	ctx.r3.s64 = ctx.r11.s64 + 32193;
	// b 0x829139a0
	sub_829139A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E9F8"))) PPC_WEAK_FUNC(sub_8317E9F8);
PPC_FUNC_IMPL(__imp__sub_8317E9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32291
	ctx.r3.s64 = ctx.r11.s64 + 32291;
	// b 0x82913a68
	sub_82913A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EA08"))) PPC_WEAK_FUNC(sub_8317EA08);
PPC_FUNC_IMPL(__imp__sub_8317EA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32224
	ctx.r3.s64 = ctx.r11.s64 + 32224;
	// b 0x82913b30
	sub_82913B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EA18"))) PPC_WEAK_FUNC(sub_8317EA18);
PPC_FUNC_IMPL(__imp__sub_8317EA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32200
	ctx.r3.s64 = ctx.r11.s64 + 32200;
	// b 0x82913c48
	sub_82913C48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EA28"))) PPC_WEAK_FUNC(sub_8317EA28);
PPC_FUNC_IMPL(__imp__sub_8317EA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32239
	ctx.r3.s64 = ctx.r11.s64 + 32239;
	// b 0x82913d10
	sub_82913D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EA38"))) PPC_WEAK_FUNC(sub_8317EA38);
PPC_FUNC_IMPL(__imp__sub_8317EA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32294
	ctx.r3.s64 = ctx.r11.s64 + 32294;
	// b 0x82913ed8
	sub_82913ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EA48"))) PPC_WEAK_FUNC(sub_8317EA48);
PPC_FUNC_IMPL(__imp__sub_8317EA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32298
	ctx.r3.s64 = ctx.r11.s64 + 32298;
	// b 0x82913fa0
	sub_82913FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EA58"))) PPC_WEAK_FUNC(sub_8317EA58);
PPC_FUNC_IMPL(__imp__sub_8317EA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32236
	ctx.r3.s64 = ctx.r11.s64 + 32236;
	// b 0x82914068
	sub_82914068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EA68"))) PPC_WEAK_FUNC(sub_8317EA68);
PPC_FUNC_IMPL(__imp__sub_8317EA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32238
	ctx.r3.s64 = ctx.r11.s64 + 32238;
	// b 0x82914180
	sub_82914180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EA78"))) PPC_WEAK_FUNC(sub_8317EA78);
PPC_FUNC_IMPL(__imp__sub_8317EA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32288
	ctx.r3.s64 = ctx.r11.s64 + 32288;
	// b 0x82914248
	sub_82914248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EA88"))) PPC_WEAK_FUNC(sub_8317EA88);
PPC_FUNC_IMPL(__imp__sub_8317EA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32227
	ctx.r3.s64 = ctx.r11.s64 + 32227;
	// b 0x82914310
	sub_82914310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EA98"))) PPC_WEAK_FUNC(sub_8317EA98);
PPC_FUNC_IMPL(__imp__sub_8317EA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32299
	ctx.r3.s64 = ctx.r11.s64 + 32299;
	// b 0x829143d8
	sub_829143D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EAA8"))) PPC_WEAK_FUNC(sub_8317EAA8);
PPC_FUNC_IMPL(__imp__sub_8317EAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32412
	ctx.r3.s64 = ctx.r11.s64 + 32412;
	// b 0x829144a0
	sub_829144A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EAB8"))) PPC_WEAK_FUNC(sub_8317EAB8);
PPC_FUNC_IMPL(__imp__sub_8317EAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32297
	ctx.r3.s64 = ctx.r11.s64 + 32297;
	// b 0x82914568
	sub_82914568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EAC8"))) PPC_WEAK_FUNC(sub_8317EAC8);
PPC_FUNC_IMPL(__imp__sub_8317EAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32296
	ctx.r3.s64 = ctx.r11.s64 + 32296;
	// b 0x82914630
	sub_82914630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EAD8"))) PPC_WEAK_FUNC(sub_8317EAD8);
PPC_FUNC_IMPL(__imp__sub_8317EAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32194
	ctx.r3.s64 = ctx.r11.s64 + 32194;
	// b 0x82914748
	sub_82914748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EAE8"))) PPC_WEAK_FUNC(sub_8317EAE8);
PPC_FUNC_IMPL(__imp__sub_8317EAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32225
	ctx.r3.s64 = ctx.r11.s64 + 32225;
	// b 0x82914810
	sub_82914810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EAF8"))) PPC_WEAK_FUNC(sub_8317EAF8);
PPC_FUNC_IMPL(__imp__sub_8317EAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32231
	ctx.r3.s64 = ctx.r11.s64 + 32231;
	// b 0x829148d8
	sub_829148D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EB08"))) PPC_WEAK_FUNC(sub_8317EB08);
PPC_FUNC_IMPL(__imp__sub_8317EB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32228
	ctx.r3.s64 = ctx.r11.s64 + 32228;
	// b 0x829149a0
	sub_829149A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EB18"))) PPC_WEAK_FUNC(sub_8317EB18);
PPC_FUNC_IMPL(__imp__sub_8317EB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32234
	ctx.r3.s64 = ctx.r11.s64 + 32234;
	// b 0x82914a68
	sub_82914A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EB28"))) PPC_WEAK_FUNC(sub_8317EB28);
PPC_FUNC_IMPL(__imp__sub_8317EB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32197
	ctx.r3.s64 = ctx.r11.s64 + 32197;
	// b 0x82914b30
	sub_82914B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EB38"))) PPC_WEAK_FUNC(sub_8317EB38);
PPC_FUNC_IMPL(__imp__sub_8317EB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32226
	ctx.r3.s64 = ctx.r11.s64 + 32226;
	// b 0x82914bf8
	sub_82914BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EB48"))) PPC_WEAK_FUNC(sub_8317EB48);
PPC_FUNC_IMPL(__imp__sub_8317EB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32290
	ctx.r3.s64 = ctx.r11.s64 + 32290;
	// b 0x82914cc0
	sub_82914CC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EB58"))) PPC_WEAK_FUNC(sub_8317EB58);
PPC_FUNC_IMPL(__imp__sub_8317EB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32235
	ctx.r3.s64 = ctx.r11.s64 + 32235;
	// b 0x82914d88
	sub_82914D88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EB68"))) PPC_WEAK_FUNC(sub_8317EB68);
PPC_FUNC_IMPL(__imp__sub_8317EB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,32202
	ctx.r3.s64 = ctx.r11.s64 + 32202;
	// b 0x82914e50
	sub_82914E50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EB78"))) PPC_WEAK_FUNC(sub_8317EB78);
PPC_FUNC_IMPL(__imp__sub_8317EB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,896
	ctx.r3.s64 = ctx.r11.s64 + 896;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EB88"))) PPC_WEAK_FUNC(sub_8317EB88);
PPC_FUNC_IMPL(__imp__sub_8317EB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29456
	ctx.r9.s64 = ctx.r11.s64 + -29456;
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

__attribute__((alias("__imp__sub_8317EBB8"))) PPC_WEAK_FUNC(sub_8317EBB8);
PPC_FUNC_IMPL(__imp__sub_8317EBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29488
	ctx.r9.s64 = ctx.r11.s64 + -29488;
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

__attribute__((alias("__imp__sub_8317EBE8"))) PPC_WEAK_FUNC(sub_8317EBE8);
PPC_FUNC_IMPL(__imp__sub_8317EBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29552
	ctx.r9.s64 = ctx.r11.s64 + -29552;
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

__attribute__((alias("__imp__sub_8317EC18"))) PPC_WEAK_FUNC(sub_8317EC18);
PPC_FUNC_IMPL(__imp__sub_8317EC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29504
	ctx.r9.s64 = ctx.r11.s64 + -29504;
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

__attribute__((alias("__imp__sub_8317EC48"))) PPC_WEAK_FUNC(sub_8317EC48);
PPC_FUNC_IMPL(__imp__sub_8317EC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-29536
	ctx.r10.s64 = ctx.r10.s64 + -29536;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317EC68"))) PPC_WEAK_FUNC(sub_8317EC68);
PPC_FUNC_IMPL(__imp__sub_8317EC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-29584
	ctx.r10.s64 = ctx.r10.s64 + -29584;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317EC88"))) PPC_WEAK_FUNC(sub_8317EC88);
PPC_FUNC_IMPL(__imp__sub_8317EC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29440
	ctx.r3.s64 = ctx.r11.s64 + -29440;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EC98"))) PPC_WEAK_FUNC(sub_8317EC98);
PPC_FUNC_IMPL(__imp__sub_8317EC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-29472
	ctx.r10.s64 = ctx.r10.s64 + -29472;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317ECB8"))) PPC_WEAK_FUNC(sub_8317ECB8);
PPC_FUNC_IMPL(__imp__sub_8317ECB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29562
	ctx.r3.s64 = ctx.r11.s64 + -29562;
	// b 0x82921ff8
	sub_82921FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ECC8"))) PPC_WEAK_FUNC(sub_8317ECC8);
PPC_FUNC_IMPL(__imp__sub_8317ECC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29506
	ctx.r3.s64 = ctx.r11.s64 + -29506;
	// b 0x829220c0
	sub_829220C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ECD8"))) PPC_WEAK_FUNC(sub_8317ECD8);
PPC_FUNC_IMPL(__imp__sub_8317ECD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29518
	ctx.r3.s64 = ctx.r11.s64 + -29518;
	// b 0x82922188
	sub_82922188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ECE8"))) PPC_WEAK_FUNC(sub_8317ECE8);
PPC_FUNC_IMPL(__imp__sub_8317ECE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29368
	ctx.r3.s64 = ctx.r11.s64 + -29368;
	// b 0x82922250
	sub_82922250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ECF8"))) PPC_WEAK_FUNC(sub_8317ECF8);
PPC_FUNC_IMPL(__imp__sub_8317ECF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29516
	ctx.r3.s64 = ctx.r11.s64 + -29516;
	// b 0x82922318
	sub_82922318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ED08"))) PPC_WEAK_FUNC(sub_8317ED08);
PPC_FUNC_IMPL(__imp__sub_8317ED08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29559
	ctx.r3.s64 = ctx.r11.s64 + -29559;
	// b 0x829223e0
	sub_829223E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ED18"))) PPC_WEAK_FUNC(sub_8317ED18);
PPC_FUNC_IMPL(__imp__sub_8317ED18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29507
	ctx.r3.s64 = ctx.r11.s64 + -29507;
	// b 0x829224a8
	sub_829224A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ED28"))) PPC_WEAK_FUNC(sub_8317ED28);
PPC_FUNC_IMPL(__imp__sub_8317ED28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29567
	ctx.r3.s64 = ctx.r11.s64 + -29567;
	// b 0x82922570
	sub_82922570(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ED38"))) PPC_WEAK_FUNC(sub_8317ED38);
PPC_FUNC_IMPL(__imp__sub_8317ED38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29520
	ctx.r3.s64 = ctx.r11.s64 + -29520;
	// b 0x82922638
	sub_82922638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ED48"))) PPC_WEAK_FUNC(sub_8317ED48);
PPC_FUNC_IMPL(__imp__sub_8317ED48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29519
	ctx.r3.s64 = ctx.r11.s64 + -29519;
	// b 0x82922700
	sub_82922700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ED58"))) PPC_WEAK_FUNC(sub_8317ED58);
PPC_FUNC_IMPL(__imp__sub_8317ED58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29566
	ctx.r3.s64 = ctx.r11.s64 + -29566;
	// b 0x829227c8
	sub_829227C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ED68"))) PPC_WEAK_FUNC(sub_8317ED68);
PPC_FUNC_IMPL(__imp__sub_8317ED68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29555
	ctx.r3.s64 = ctx.r11.s64 + -29555;
	// b 0x82922890
	sub_82922890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ED78"))) PPC_WEAK_FUNC(sub_8317ED78);
PPC_FUNC_IMPL(__imp__sub_8317ED78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29563
	ctx.r3.s64 = ctx.r11.s64 + -29563;
	// b 0x82922958
	sub_82922958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ED88"))) PPC_WEAK_FUNC(sub_8317ED88);
PPC_FUNC_IMPL(__imp__sub_8317ED88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29554
	ctx.r3.s64 = ctx.r11.s64 + -29554;
	// b 0x82922a20
	sub_82922A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ED98"))) PPC_WEAK_FUNC(sub_8317ED98);
PPC_FUNC_IMPL(__imp__sub_8317ED98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29556
	ctx.r3.s64 = ctx.r11.s64 + -29556;
	// b 0x82922ae8
	sub_82922AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EDA8"))) PPC_WEAK_FUNC(sub_8317EDA8);
PPC_FUNC_IMPL(__imp__sub_8317EDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29560
	ctx.r3.s64 = ctx.r11.s64 + -29560;
	// b 0x82922bb0
	sub_82922BB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EDB8"))) PPC_WEAK_FUNC(sub_8317EDB8);
PPC_FUNC_IMPL(__imp__sub_8317EDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29561
	ctx.r3.s64 = ctx.r11.s64 + -29561;
	// b 0x82922c78
	sub_82922C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EDC8"))) PPC_WEAK_FUNC(sub_8317EDC8);
PPC_FUNC_IMPL(__imp__sub_8317EDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29558
	ctx.r3.s64 = ctx.r11.s64 + -29558;
	// b 0x82922d40
	sub_82922D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EDD8"))) PPC_WEAK_FUNC(sub_8317EDD8);
PPC_FUNC_IMPL(__imp__sub_8317EDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29517
	ctx.r3.s64 = ctx.r11.s64 + -29517;
	// b 0x82922e08
	sub_82922E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EDE8"))) PPC_WEAK_FUNC(sub_8317EDE8);
PPC_FUNC_IMPL(__imp__sub_8317EDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29564
	ctx.r3.s64 = ctx.r11.s64 + -29564;
	// b 0x82922ed0
	sub_82922ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EDF8"))) PPC_WEAK_FUNC(sub_8317EDF8);
PPC_FUNC_IMPL(__imp__sub_8317EDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29514
	ctx.r3.s64 = ctx.r11.s64 + -29514;
	// b 0x82922f98
	sub_82922F98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EE08"))) PPC_WEAK_FUNC(sub_8317EE08);
PPC_FUNC_IMPL(__imp__sub_8317EE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29508
	ctx.r3.s64 = ctx.r11.s64 + -29508;
	// b 0x82923060
	sub_82923060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EE18"))) PPC_WEAK_FUNC(sub_8317EE18);
PPC_FUNC_IMPL(__imp__sub_8317EE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29568
	ctx.r3.s64 = ctx.r11.s64 + -29568;
	// b 0x82923128
	sub_82923128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EE28"))) PPC_WEAK_FUNC(sub_8317EE28);
PPC_FUNC_IMPL(__imp__sub_8317EE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29557
	ctx.r3.s64 = ctx.r11.s64 + -29557;
	// b 0x829231f0
	sub_829231F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EE38"))) PPC_WEAK_FUNC(sub_8317EE38);
PPC_FUNC_IMPL(__imp__sub_8317EE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29505
	ctx.r3.s64 = ctx.r11.s64 + -29505;
	// b 0x82923308
	sub_82923308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EE48"))) PPC_WEAK_FUNC(sub_8317EE48);
PPC_FUNC_IMPL(__imp__sub_8317EE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29513
	ctx.r3.s64 = ctx.r11.s64 + -29513;
	// b 0x82923420
	sub_82923420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EE58"))) PPC_WEAK_FUNC(sub_8317EE58);
PPC_FUNC_IMPL(__imp__sub_8317EE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29565
	ctx.r3.s64 = ctx.r11.s64 + -29565;
	// b 0x82923540
	sub_82923540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EE68"))) PPC_WEAK_FUNC(sub_8317EE68);
PPC_FUNC_IMPL(__imp__sub_8317EE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29515
	ctx.r3.s64 = ctx.r11.s64 + -29515;
	// b 0x82923660
	sub_82923660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EE78"))) PPC_WEAK_FUNC(sub_8317EE78);
PPC_FUNC_IMPL(__imp__sub_8317EE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-29553
	ctx.r3.s64 = ctx.r11.s64 + -29553;
	// b 0x82923840
	sub_82923840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EE88"))) PPC_WEAK_FUNC(sub_8317EE88);
PPC_FUNC_IMPL(__imp__sub_8317EE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27696
	ctx.r9.s64 = ctx.r11.s64 + -27696;
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

__attribute__((alias("__imp__sub_8317EEB8"))) PPC_WEAK_FUNC(sub_8317EEB8);
PPC_FUNC_IMPL(__imp__sub_8317EEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27728
	ctx.r9.s64 = ctx.r11.s64 + -27728;
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

__attribute__((alias("__imp__sub_8317EEE8"))) PPC_WEAK_FUNC(sub_8317EEE8);
PPC_FUNC_IMPL(__imp__sub_8317EEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27792
	ctx.r9.s64 = ctx.r11.s64 + -27792;
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

__attribute__((alias("__imp__sub_8317EF18"))) PPC_WEAK_FUNC(sub_8317EF18);
PPC_FUNC_IMPL(__imp__sub_8317EF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27744
	ctx.r9.s64 = ctx.r11.s64 + -27744;
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

__attribute__((alias("__imp__sub_8317EF48"))) PPC_WEAK_FUNC(sub_8317EF48);
PPC_FUNC_IMPL(__imp__sub_8317EF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-27760
	ctx.r10.s64 = ctx.r10.s64 + -27760;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317EF68"))) PPC_WEAK_FUNC(sub_8317EF68);
PPC_FUNC_IMPL(__imp__sub_8317EF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-27824
	ctx.r10.s64 = ctx.r10.s64 + -27824;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317EF88"))) PPC_WEAK_FUNC(sub_8317EF88);
PPC_FUNC_IMPL(__imp__sub_8317EF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,2312
	ctx.r3.s64 = ctx.r11.s64 + 2312;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EF98"))) PPC_WEAK_FUNC(sub_8317EF98);
PPC_FUNC_IMPL(__imp__sub_8317EF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-27712
	ctx.r10.s64 = ctx.r10.s64 + -27712;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317EFB8"))) PPC_WEAK_FUNC(sub_8317EFB8);
PPC_FUNC_IMPL(__imp__sub_8317EFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27672
	ctx.r3.s64 = ctx.r11.s64 + -27672;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EFC8"))) PPC_WEAK_FUNC(sub_8317EFC8);
PPC_FUNC_IMPL(__imp__sub_8317EFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27802
	ctx.r3.s64 = ctx.r11.s64 + -27802;
	// b 0x8292f198
	sub_8292F198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EFD8"))) PPC_WEAK_FUNC(sub_8317EFD8);
PPC_FUNC_IMPL(__imp__sub_8317EFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27676
	ctx.r3.s64 = ctx.r11.s64 + -27676;
	// b 0x8292f260
	sub_8292F260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EFE8"))) PPC_WEAK_FUNC(sub_8317EFE8);
PPC_FUNC_IMPL(__imp__sub_8317EFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27773
	ctx.r3.s64 = ctx.r11.s64 + -27773;
	// b 0x8292f328
	sub_8292F328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317EFF8"))) PPC_WEAK_FUNC(sub_8317EFF8);
PPC_FUNC_IMPL(__imp__sub_8317EFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27674
	ctx.r3.s64 = ctx.r11.s64 + -27674;
	// b 0x8292f3f0
	sub_8292F3F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F008"))) PPC_WEAK_FUNC(sub_8317F008);
PPC_FUNC_IMPL(__imp__sub_8317F008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27768
	ctx.r3.s64 = ctx.r11.s64 + -27768;
	// b 0x8292f4b8
	sub_8292F4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F018"))) PPC_WEAK_FUNC(sub_8317F018);
PPC_FUNC_IMPL(__imp__sub_8317F018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27798
	ctx.r3.s64 = ctx.r11.s64 + -27798;
	// b 0x8292f580
	sub_8292F580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F028"))) PPC_WEAK_FUNC(sub_8317F028);
PPC_FUNC_IMPL(__imp__sub_8317F028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27761
	ctx.r3.s64 = ctx.r11.s64 + -27761;
	// b 0x8292f648
	sub_8292F648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F038"))) PPC_WEAK_FUNC(sub_8317F038);
PPC_FUNC_IMPL(__imp__sub_8317F038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27807
	ctx.r3.s64 = ctx.r11.s64 + -27807;
	// b 0x8292f710
	sub_8292F710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F048"))) PPC_WEAK_FUNC(sub_8317F048);
PPC_FUNC_IMPL(__imp__sub_8317F048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27775
	ctx.r3.s64 = ctx.r11.s64 + -27775;
	// b 0x8292f7d8
	sub_8292F7D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F058"))) PPC_WEAK_FUNC(sub_8317F058);
PPC_FUNC_IMPL(__imp__sub_8317F058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27774
	ctx.r3.s64 = ctx.r11.s64 + -27774;
	// b 0x8292f8a0
	sub_8292F8A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F068"))) PPC_WEAK_FUNC(sub_8317F068);
PPC_FUNC_IMPL(__imp__sub_8317F068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27806
	ctx.r3.s64 = ctx.r11.s64 + -27806;
	// b 0x8292f968
	sub_8292F968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F078"))) PPC_WEAK_FUNC(sub_8317F078);
PPC_FUNC_IMPL(__imp__sub_8317F078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27794
	ctx.r3.s64 = ctx.r11.s64 + -27794;
	// b 0x8292fa80
	sub_8292FA80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F088"))) PPC_WEAK_FUNC(sub_8317F088);
PPC_FUNC_IMPL(__imp__sub_8317F088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27803
	ctx.r3.s64 = ctx.r11.s64 + -27803;
	// b 0x8292fb48
	sub_8292FB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F098"))) PPC_WEAK_FUNC(sub_8317F098);
PPC_FUNC_IMPL(__imp__sub_8317F098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27793
	ctx.r3.s64 = ctx.r11.s64 + -27793;
	// b 0x8292fc10
	sub_8292FC10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F0A8"))) PPC_WEAK_FUNC(sub_8317F0A8);
PPC_FUNC_IMPL(__imp__sub_8317F0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27795
	ctx.r3.s64 = ctx.r11.s64 + -27795;
	// b 0x8292fcd8
	sub_8292FCD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F0B8"))) PPC_WEAK_FUNC(sub_8317F0B8);
PPC_FUNC_IMPL(__imp__sub_8317F0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27800
	ctx.r3.s64 = ctx.r11.s64 + -27800;
	// b 0x8292fda0
	sub_8292FDA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F0C8"))) PPC_WEAK_FUNC(sub_8317F0C8);
PPC_FUNC_IMPL(__imp__sub_8317F0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27801
	ctx.r3.s64 = ctx.r11.s64 + -27801;
	// b 0x8292fe68
	sub_8292FE68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F0D8"))) PPC_WEAK_FUNC(sub_8317F0D8);
PPC_FUNC_IMPL(__imp__sub_8317F0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27797
	ctx.r3.s64 = ctx.r11.s64 + -27797;
	// b 0x8292ff30
	sub_8292FF30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F0E8"))) PPC_WEAK_FUNC(sub_8317F0E8);
PPC_FUNC_IMPL(__imp__sub_8317F0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27771
	ctx.r3.s64 = ctx.r11.s64 + -27771;
	// b 0x8292fff8
	sub_8292FFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F0F8"))) PPC_WEAK_FUNC(sub_8317F0F8);
PPC_FUNC_IMPL(__imp__sub_8317F0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27804
	ctx.r3.s64 = ctx.r11.s64 + -27804;
	// b 0x829300c0
	sub_829300C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F108"))) PPC_WEAK_FUNC(sub_8317F108);
PPC_FUNC_IMPL(__imp__sub_8317F108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27766
	ctx.r3.s64 = ctx.r11.s64 + -27766;
	// b 0x82930188
	sub_82930188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F118"))) PPC_WEAK_FUNC(sub_8317F118);
PPC_FUNC_IMPL(__imp__sub_8317F118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27762
	ctx.r3.s64 = ctx.r11.s64 + -27762;
	// b 0x82930250
	sub_82930250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F128"))) PPC_WEAK_FUNC(sub_8317F128);
PPC_FUNC_IMPL(__imp__sub_8317F128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27808
	ctx.r3.s64 = ctx.r11.s64 + -27808;
	// b 0x82930318
	sub_82930318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F138"))) PPC_WEAK_FUNC(sub_8317F138);
PPC_FUNC_IMPL(__imp__sub_8317F138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27796
	ctx.r3.s64 = ctx.r11.s64 + -27796;
	// b 0x829303e0
	sub_829303E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F148"))) PPC_WEAK_FUNC(sub_8317F148);
PPC_FUNC_IMPL(__imp__sub_8317F148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27675
	ctx.r3.s64 = ctx.r11.s64 + -27675;
	// b 0x82930540
	sub_82930540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F158"))) PPC_WEAK_FUNC(sub_8317F158);
PPC_FUNC_IMPL(__imp__sub_8317F158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27764
	ctx.r3.s64 = ctx.r11.s64 + -27764;
	// b 0x82930608
	sub_82930608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F168"))) PPC_WEAK_FUNC(sub_8317F168);
PPC_FUNC_IMPL(__imp__sub_8317F168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27805
	ctx.r3.s64 = ctx.r11.s64 + -27805;
	// b 0x82930720
	sub_82930720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F178"))) PPC_WEAK_FUNC(sub_8317F178);
PPC_FUNC_IMPL(__imp__sub_8317F178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27767
	ctx.r3.s64 = ctx.r11.s64 + -27767;
	// b 0x829307e8
	sub_829307E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F188"))) PPC_WEAK_FUNC(sub_8317F188);
PPC_FUNC_IMPL(__imp__sub_8317F188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27776
	ctx.r3.s64 = ctx.r11.s64 + -27776;
	// b 0x82930900
	sub_82930900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F198"))) PPC_WEAK_FUNC(sub_8317F198);
PPC_FUNC_IMPL(__imp__sub_8317F198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27799
	ctx.r3.s64 = ctx.r11.s64 + -27799;
	// b 0x829309c8
	sub_829309C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F1A8"))) PPC_WEAK_FUNC(sub_8317F1A8);
PPC_FUNC_IMPL(__imp__sub_8317F1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27769
	ctx.r3.s64 = ctx.r11.s64 + -27769;
	// b 0x82930ae0
	sub_82930AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F1B8"))) PPC_WEAK_FUNC(sub_8317F1B8);
PPC_FUNC_IMPL(__imp__sub_8317F1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27765
	ctx.r3.s64 = ctx.r11.s64 + -27765;
	// b 0x82930bf8
	sub_82930BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F1C8"))) PPC_WEAK_FUNC(sub_8317F1C8);
PPC_FUNC_IMPL(__imp__sub_8317F1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27763
	ctx.r3.s64 = ctx.r11.s64 + -27763;
	// b 0x82930cc0
	sub_82930CC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F1D8"))) PPC_WEAK_FUNC(sub_8317F1D8);
PPC_FUNC_IMPL(__imp__sub_8317F1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27772
	ctx.r3.s64 = ctx.r11.s64 + -27772;
	// b 0x82930d88
	sub_82930D88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F1E8"))) PPC_WEAK_FUNC(sub_8317F1E8);
PPC_FUNC_IMPL(__imp__sub_8317F1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-27770
	ctx.r3.s64 = ctx.r11.s64 + -27770;
	// b 0x82930ea0
	sub_82930EA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F1F8"))) PPC_WEAK_FUNC(sub_8317F1F8);
PPC_FUNC_IMPL(__imp__sub_8317F1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,3368
	ctx.r3.s64 = ctx.r11.s64 + 3368;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F208"))) PPC_WEAK_FUNC(sub_8317F208);
PPC_FUNC_IMPL(__imp__sub_8317F208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26320
	ctx.r9.s64 = ctx.r11.s64 + -26320;
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

__attribute__((alias("__imp__sub_8317F238"))) PPC_WEAK_FUNC(sub_8317F238);
PPC_FUNC_IMPL(__imp__sub_8317F238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26368
	ctx.r9.s64 = ctx.r11.s64 + -26368;
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

__attribute__((alias("__imp__sub_8317F268"))) PPC_WEAK_FUNC(sub_8317F268);
PPC_FUNC_IMPL(__imp__sub_8317F268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26416
	ctx.r9.s64 = ctx.r11.s64 + -26416;
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

__attribute__((alias("__imp__sub_8317F298"))) PPC_WEAK_FUNC(sub_8317F298);
PPC_FUNC_IMPL(__imp__sub_8317F298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26384
	ctx.r9.s64 = ctx.r11.s64 + -26384;
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

__attribute__((alias("__imp__sub_8317F2C8"))) PPC_WEAK_FUNC(sub_8317F2C8);
PPC_FUNC_IMPL(__imp__sub_8317F2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-26400
	ctx.r10.s64 = ctx.r10.s64 + -26400;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F2E8"))) PPC_WEAK_FUNC(sub_8317F2E8);
PPC_FUNC_IMPL(__imp__sub_8317F2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-26448
	ctx.r10.s64 = ctx.r10.s64 + -26448;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F308"))) PPC_WEAK_FUNC(sub_8317F308);
PPC_FUNC_IMPL(__imp__sub_8317F308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-26336
	ctx.r10.s64 = ctx.r10.s64 + -26336;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F328"))) PPC_WEAK_FUNC(sub_8317F328);
PPC_FUNC_IMPL(__imp__sub_8317F328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26304
	ctx.r3.s64 = ctx.r11.s64 + -26304;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F338"))) PPC_WEAK_FUNC(sub_8317F338);
PPC_FUNC_IMPL(__imp__sub_8317F338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26417
	ctx.r3.s64 = ctx.r11.s64 + -26417;
	// b 0x8293b288
	sub_8293B288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F348"))) PPC_WEAK_FUNC(sub_8317F348);
PPC_FUNC_IMPL(__imp__sub_8317F348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26348
	ctx.r3.s64 = ctx.r11.s64 + -26348;
	// b 0x8293b350
	sub_8293B350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F358"))) PPC_WEAK_FUNC(sub_8317F358);
PPC_FUNC_IMPL(__imp__sub_8317F358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26351
	ctx.r3.s64 = ctx.r11.s64 + -26351;
	// b 0x8293b418
	sub_8293B418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F368"))) PPC_WEAK_FUNC(sub_8317F368);
PPC_FUNC_IMPL(__imp__sub_8317F368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26422
	ctx.r3.s64 = ctx.r11.s64 + -26422;
	// b 0x8293b530
	sub_8293B530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F378"))) PPC_WEAK_FUNC(sub_8317F378);
PPC_FUNC_IMPL(__imp__sub_8317F378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26349
	ctx.r3.s64 = ctx.r11.s64 + -26349;
	// b 0x8293b5f8
	sub_8293B5F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F388"))) PPC_WEAK_FUNC(sub_8317F388);
PPC_FUNC_IMPL(__imp__sub_8317F388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26425
	ctx.r3.s64 = ctx.r11.s64 + -26425;
	// b 0x8293b710
	sub_8293B710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F398"))) PPC_WEAK_FUNC(sub_8317F398);
PPC_FUNC_IMPL(__imp__sub_8317F398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26340
	ctx.r3.s64 = ctx.r11.s64 + -26340;
	// b 0x8293b830
	sub_8293B830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F3A8"))) PPC_WEAK_FUNC(sub_8317F3A8);
PPC_FUNC_IMPL(__imp__sub_8317F3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26431
	ctx.r3.s64 = ctx.r11.s64 + -26431;
	// b 0x8293b950
	sub_8293B950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F3B8"))) PPC_WEAK_FUNC(sub_8317F3B8);
PPC_FUNC_IMPL(__imp__sub_8317F3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26418
	ctx.r3.s64 = ctx.r11.s64 + -26418;
	// b 0x8293ba68
	sub_8293BA68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F3C8"))) PPC_WEAK_FUNC(sub_8317F3C8);
PPC_FUNC_IMPL(__imp__sub_8317F3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26352
	ctx.r3.s64 = ctx.r11.s64 + -26352;
	// b 0x8293bb30
	sub_8293BB30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F3D8"))) PPC_WEAK_FUNC(sub_8317F3D8);
PPC_FUNC_IMPL(__imp__sub_8317F3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26430
	ctx.r3.s64 = ctx.r11.s64 + -26430;
	// b 0x8293bc48
	sub_8293BC48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F3E8"))) PPC_WEAK_FUNC(sub_8317F3E8);
PPC_FUNC_IMPL(__imp__sub_8317F3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26420
	ctx.r3.s64 = ctx.r11.s64 + -26420;
	// b 0x8293bd10
	sub_8293BD10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F3F8"))) PPC_WEAK_FUNC(sub_8317F3F8);
PPC_FUNC_IMPL(__imp__sub_8317F3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26428
	ctx.r3.s64 = ctx.r11.s64 + -26428;
	// b 0x8293bdd8
	sub_8293BDD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F408"))) PPC_WEAK_FUNC(sub_8317F408);
PPC_FUNC_IMPL(__imp__sub_8317F408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26419
	ctx.r3.s64 = ctx.r11.s64 + -26419;
	// b 0x8293bea0
	sub_8293BEA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F418"))) PPC_WEAK_FUNC(sub_8317F418);
PPC_FUNC_IMPL(__imp__sub_8317F418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26421
	ctx.r3.s64 = ctx.r11.s64 + -26421;
	// b 0x8293bf68
	sub_8293BF68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F428"))) PPC_WEAK_FUNC(sub_8317F428);
PPC_FUNC_IMPL(__imp__sub_8317F428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26426
	ctx.r3.s64 = ctx.r11.s64 + -26426;
	// b 0x8293c030
	sub_8293C030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F438"))) PPC_WEAK_FUNC(sub_8317F438);
PPC_FUNC_IMPL(__imp__sub_8317F438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26427
	ctx.r3.s64 = ctx.r11.s64 + -26427;
	// b 0x8293c0f8
	sub_8293C0F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F448"))) PPC_WEAK_FUNC(sub_8317F448);
PPC_FUNC_IMPL(__imp__sub_8317F448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26424
	ctx.r3.s64 = ctx.r11.s64 + -26424;
	// b 0x8293c210
	sub_8293C210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F458"))) PPC_WEAK_FUNC(sub_8317F458);
PPC_FUNC_IMPL(__imp__sub_8317F458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26350
	ctx.r3.s64 = ctx.r11.s64 + -26350;
	// b 0x8293c2d8
	sub_8293C2D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F468"))) PPC_WEAK_FUNC(sub_8317F468);
PPC_FUNC_IMPL(__imp__sub_8317F468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26429
	ctx.r3.s64 = ctx.r11.s64 + -26429;
	// b 0x8293c3a0
	sub_8293C3A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F478"))) PPC_WEAK_FUNC(sub_8317F478);
PPC_FUNC_IMPL(__imp__sub_8317F478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26347
	ctx.r3.s64 = ctx.r11.s64 + -26347;
	// b 0x8293c468
	sub_8293C468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F488"))) PPC_WEAK_FUNC(sub_8317F488);
PPC_FUNC_IMPL(__imp__sub_8317F488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26345
	ctx.r3.s64 = ctx.r11.s64 + -26345;
	// b 0x8293c530
	sub_8293C530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F498"))) PPC_WEAK_FUNC(sub_8317F498);
PPC_FUNC_IMPL(__imp__sub_8317F498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26432
	ctx.r3.s64 = ctx.r11.s64 + -26432;
	// b 0x8293c5f8
	sub_8293C5F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F4A8"))) PPC_WEAK_FUNC(sub_8317F4A8);
PPC_FUNC_IMPL(__imp__sub_8317F4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26423
	ctx.r3.s64 = ctx.r11.s64 + -26423;
	// b 0x8293c6c0
	sub_8293C6C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F4B8"))) PPC_WEAK_FUNC(sub_8317F4B8);
PPC_FUNC_IMPL(__imp__sub_8317F4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26339
	ctx.r3.s64 = ctx.r11.s64 + -26339;
	// b 0x8293c788
	sub_8293C788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F4C8"))) PPC_WEAK_FUNC(sub_8317F4C8);
PPC_FUNC_IMPL(__imp__sub_8317F4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26346
	ctx.r3.s64 = ctx.r11.s64 + -26346;
	// b 0x8293c850
	sub_8293C850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F4D8"))) PPC_WEAK_FUNC(sub_8317F4D8);
PPC_FUNC_IMPL(__imp__sub_8317F4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,3408
	ctx.r3.s64 = ctx.r11.s64 + 3408;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F4E8"))) PPC_WEAK_FUNC(sub_8317F4E8);
PPC_FUNC_IMPL(__imp__sub_8317F4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26112
	ctx.r9.s64 = ctx.r11.s64 + -26112;
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

__attribute__((alias("__imp__sub_8317F518"))) PPC_WEAK_FUNC(sub_8317F518);
PPC_FUNC_IMPL(__imp__sub_8317F518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26144
	ctx.r9.s64 = ctx.r11.s64 + -26144;
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

__attribute__((alias("__imp__sub_8317F548"))) PPC_WEAK_FUNC(sub_8317F548);
PPC_FUNC_IMPL(__imp__sub_8317F548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26192
	ctx.r9.s64 = ctx.r11.s64 + -26192;
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

__attribute__((alias("__imp__sub_8317F578"))) PPC_WEAK_FUNC(sub_8317F578);
PPC_FUNC_IMPL(__imp__sub_8317F578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26160
	ctx.r9.s64 = ctx.r11.s64 + -26160;
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

__attribute__((alias("__imp__sub_8317F5A8"))) PPC_WEAK_FUNC(sub_8317F5A8);
PPC_FUNC_IMPL(__imp__sub_8317F5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-26176
	ctx.r10.s64 = ctx.r10.s64 + -26176;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F5C8"))) PPC_WEAK_FUNC(sub_8317F5C8);
PPC_FUNC_IMPL(__imp__sub_8317F5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-26208
	ctx.r10.s64 = ctx.r10.s64 + -26208;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F5E8"))) PPC_WEAK_FUNC(sub_8317F5E8);
PPC_FUNC_IMPL(__imp__sub_8317F5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-26128
	ctx.r10.s64 = ctx.r10.s64 + -26128;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F608"))) PPC_WEAK_FUNC(sub_8317F608);
PPC_FUNC_IMPL(__imp__sub_8317F608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-26080
	ctx.r3.s64 = ctx.r11.s64 + -26080;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F618"))) PPC_WEAK_FUNC(sub_8317F618);
PPC_FUNC_IMPL(__imp__sub_8317F618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// bl 0x82e73af8
	ctx.lr = 0x8317F630;
	sub_82E73AF8(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-26096(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26096, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F648"))) PPC_WEAK_FUNC(sub_8317F648);
PPC_FUNC_IMPL(__imp__sub_8317F648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-18548
	ctx.r3.s64 = ctx.r11.s64 + -18548;
	// bl 0x82e73af8
	ctx.lr = 0x8317F660;
	sub_82E73AF8(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-26092(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F678"))) PPC_WEAK_FUNC(sub_8317F678);
PPC_FUNC_IMPL(__imp__sub_8317F678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,21332
	ctx.r3.s64 = ctx.r11.s64 + 21332;
	// bl 0x82e73af8
	ctx.lr = 0x8317F690;
	sub_82E73AF8(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-26224(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F6A8"))) PPC_WEAK_FUNC(sub_8317F6A8);
PPC_FUNC_IMPL(__imp__sub_8317F6A8) {
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
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,-26220
	ctx.r30.s64 = ctx.r31.s64 + -26220;
	// addi r4,r11,21344
	ctx.r4.s64 = ctx.r11.s64 + 21344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317F6D4;
	sub_82C07410(ctx, base);
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
	// stw r10,-26220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26220, ctx.r10.u32);
	// addi r3,r11,3384
	ctx.r3.s64 = ctx.r11.s64 + 3384;
	// bl 0x82a7e6b0
	ctx.lr = 0x8317F6F4;
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

__attribute__((alias("__imp__sub_8317F710"))) PPC_WEAK_FUNC(sub_8317F710);
PPC_FUNC_IMPL(__imp__sub_8317F710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-25872
	ctx.r9.s64 = ctx.r11.s64 + -25872;
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

__attribute__((alias("__imp__sub_8317F740"))) PPC_WEAK_FUNC(sub_8317F740);
PPC_FUNC_IMPL(__imp__sub_8317F740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-25904
	ctx.r9.s64 = ctx.r11.s64 + -25904;
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

__attribute__((alias("__imp__sub_8317F770"))) PPC_WEAK_FUNC(sub_8317F770);
PPC_FUNC_IMPL(__imp__sub_8317F770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-25968
	ctx.r9.s64 = ctx.r11.s64 + -25968;
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

__attribute__((alias("__imp__sub_8317F7A0"))) PPC_WEAK_FUNC(sub_8317F7A0);
PPC_FUNC_IMPL(__imp__sub_8317F7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-25920
	ctx.r9.s64 = ctx.r11.s64 + -25920;
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

__attribute__((alias("__imp__sub_8317F7D0"))) PPC_WEAK_FUNC(sub_8317F7D0);
PPC_FUNC_IMPL(__imp__sub_8317F7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-25936
	ctx.r10.s64 = ctx.r10.s64 + -25936;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F7F0"))) PPC_WEAK_FUNC(sub_8317F7F0);
PPC_FUNC_IMPL(__imp__sub_8317F7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-25984
	ctx.r10.s64 = ctx.r10.s64 + -25984;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F810"))) PPC_WEAK_FUNC(sub_8317F810);
PPC_FUNC_IMPL(__imp__sub_8317F810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,4584
	ctx.r3.s64 = ctx.r11.s64 + 4584;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F820"))) PPC_WEAK_FUNC(sub_8317F820);
PPC_FUNC_IMPL(__imp__sub_8317F820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-25888
	ctx.r10.s64 = ctx.r10.s64 + -25888;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F840"))) PPC_WEAK_FUNC(sub_8317F840);
PPC_FUNC_IMPL(__imp__sub_8317F840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25848
	ctx.r3.s64 = ctx.r11.s64 + -25848;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F850"))) PPC_WEAK_FUNC(sub_8317F850);
PPC_FUNC_IMPL(__imp__sub_8317F850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25989
	ctx.r3.s64 = ctx.r11.s64 + -25989;
	// b 0x82946998
	sub_82946998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F860"))) PPC_WEAK_FUNC(sub_8317F860);
PPC_FUNC_IMPL(__imp__sub_8317F860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25937
	ctx.r3.s64 = ctx.r11.s64 + -25937;
	// b 0x82946a60
	sub_82946A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F870"))) PPC_WEAK_FUNC(sub_8317F870);
PPC_FUNC_IMPL(__imp__sub_8317F870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25945
	ctx.r3.s64 = ctx.r11.s64 + -25945;
	// b 0x82946b78
	sub_82946B78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F880"))) PPC_WEAK_FUNC(sub_8317F880);
PPC_FUNC_IMPL(__imp__sub_8317F880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25851
	ctx.r3.s64 = ctx.r11.s64 + -25851;
	// b 0x82946c40
	sub_82946C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F890"))) PPC_WEAK_FUNC(sub_8317F890);
PPC_FUNC_IMPL(__imp__sub_8317F890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25943
	ctx.r3.s64 = ctx.r11.s64 + -25943;
	// b 0x82946d08
	sub_82946D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F8A0"))) PPC_WEAK_FUNC(sub_8317F8A0);
PPC_FUNC_IMPL(__imp__sub_8317F8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25986
	ctx.r3.s64 = ctx.r11.s64 + -25986;
	// b 0x82946dd0
	sub_82946DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F8B0"))) PPC_WEAK_FUNC(sub_8317F8B0);
PPC_FUNC_IMPL(__imp__sub_8317F8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25938
	ctx.r3.s64 = ctx.r11.s64 + -25938;
	// b 0x82946e98
	sub_82946E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F8C0"))) PPC_WEAK_FUNC(sub_8317F8C0);
PPC_FUNC_IMPL(__imp__sub_8317F8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25994
	ctx.r3.s64 = ctx.r11.s64 + -25994;
	// b 0x82946f60
	sub_82946F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F8D0"))) PPC_WEAK_FUNC(sub_8317F8D0);
PPC_FUNC_IMPL(__imp__sub_8317F8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25947
	ctx.r3.s64 = ctx.r11.s64 + -25947;
	// b 0x82947028
	sub_82947028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F8E0"))) PPC_WEAK_FUNC(sub_8317F8E0);
PPC_FUNC_IMPL(__imp__sub_8317F8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25946
	ctx.r3.s64 = ctx.r11.s64 + -25946;
	// b 0x829470f0
	sub_829470F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F8F0"))) PPC_WEAK_FUNC(sub_8317F8F0);
PPC_FUNC_IMPL(__imp__sub_8317F8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25993
	ctx.r3.s64 = ctx.r11.s64 + -25993;
	// b 0x829471b8
	sub_829471B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F900"))) PPC_WEAK_FUNC(sub_8317F900);
PPC_FUNC_IMPL(__imp__sub_8317F900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25950
	ctx.r3.s64 = ctx.r11.s64 + -25950;
	// b 0x82947280
	sub_82947280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F910"))) PPC_WEAK_FUNC(sub_8317F910);
PPC_FUNC_IMPL(__imp__sub_8317F910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25990
	ctx.r3.s64 = ctx.r11.s64 + -25990;
	// b 0x82947348
	sub_82947348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F920"))) PPC_WEAK_FUNC(sub_8317F920);
PPC_FUNC_IMPL(__imp__sub_8317F920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25949
	ctx.r3.s64 = ctx.r11.s64 + -25949;
	// b 0x82947410
	sub_82947410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F930"))) PPC_WEAK_FUNC(sub_8317F930);
PPC_FUNC_IMPL(__imp__sub_8317F930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25951
	ctx.r3.s64 = ctx.r11.s64 + -25951;
	// b 0x82947528
	sub_82947528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F940"))) PPC_WEAK_FUNC(sub_8317F940);
PPC_FUNC_IMPL(__imp__sub_8317F940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25987
	ctx.r3.s64 = ctx.r11.s64 + -25987;
	// b 0x829475f0
	sub_829475F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F950"))) PPC_WEAK_FUNC(sub_8317F950);
PPC_FUNC_IMPL(__imp__sub_8317F950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25988
	ctx.r3.s64 = ctx.r11.s64 + -25988;
	// b 0x829476b8
	sub_829476B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F960"))) PPC_WEAK_FUNC(sub_8317F960);
PPC_FUNC_IMPL(__imp__sub_8317F960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25985
	ctx.r3.s64 = ctx.r11.s64 + -25985;
	// b 0x82947780
	sub_82947780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F970"))) PPC_WEAK_FUNC(sub_8317F970);
PPC_FUNC_IMPL(__imp__sub_8317F970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25944
	ctx.r3.s64 = ctx.r11.s64 + -25944;
	// b 0x82947848
	sub_82947848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F980"))) PPC_WEAK_FUNC(sub_8317F980);
PPC_FUNC_IMPL(__imp__sub_8317F980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25991
	ctx.r3.s64 = ctx.r11.s64 + -25991;
	// b 0x82947910
	sub_82947910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F990"))) PPC_WEAK_FUNC(sub_8317F990);
PPC_FUNC_IMPL(__imp__sub_8317F990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25941
	ctx.r3.s64 = ctx.r11.s64 + -25941;
	// b 0x829479d8
	sub_829479D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F9A0"))) PPC_WEAK_FUNC(sub_8317F9A0);
PPC_FUNC_IMPL(__imp__sub_8317F9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25939
	ctx.r3.s64 = ctx.r11.s64 + -25939;
	// b 0x82947aa0
	sub_82947AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F9B0"))) PPC_WEAK_FUNC(sub_8317F9B0);
PPC_FUNC_IMPL(__imp__sub_8317F9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25995
	ctx.r3.s64 = ctx.r11.s64 + -25995;
	// b 0x82947bb8
	sub_82947BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F9C0"))) PPC_WEAK_FUNC(sub_8317F9C0);
PPC_FUNC_IMPL(__imp__sub_8317F9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25952
	ctx.r3.s64 = ctx.r11.s64 + -25952;
	// b 0x82947c80
	sub_82947C80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F9D0"))) PPC_WEAK_FUNC(sub_8317F9D0);
PPC_FUNC_IMPL(__imp__sub_8317F9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25852
	ctx.r3.s64 = ctx.r11.s64 + -25852;
	// b 0x82947d48
	sub_82947D48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F9E0"))) PPC_WEAK_FUNC(sub_8317F9E0);
PPC_FUNC_IMPL(__imp__sub_8317F9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25940
	ctx.r3.s64 = ctx.r11.s64 + -25940;
	// b 0x82947e10
	sub_82947E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F9F0"))) PPC_WEAK_FUNC(sub_8317F9F0);
PPC_FUNC_IMPL(__imp__sub_8317F9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25992
	ctx.r3.s64 = ctx.r11.s64 + -25992;
	// b 0x82947ed8
	sub_82947ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FA00"))) PPC_WEAK_FUNC(sub_8317FA00);
PPC_FUNC_IMPL(__imp__sub_8317FA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25942
	ctx.r3.s64 = ctx.r11.s64 + -25942;
	// b 0x82947fa0
	sub_82947FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FA10"))) PPC_WEAK_FUNC(sub_8317FA10);
PPC_FUNC_IMPL(__imp__sub_8317FA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-25948
	ctx.r3.s64 = ctx.r11.s64 + -25948;
	// b 0x82948068
	sub_82948068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FA20"))) PPC_WEAK_FUNC(sub_8317FA20);
PPC_FUNC_IMPL(__imp__sub_8317FA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-24352
	ctx.r9.s64 = ctx.r11.s64 + -24352;
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

__attribute__((alias("__imp__sub_8317FA50"))) PPC_WEAK_FUNC(sub_8317FA50);
PPC_FUNC_IMPL(__imp__sub_8317FA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-24384
	ctx.r9.s64 = ctx.r11.s64 + -24384;
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

__attribute__((alias("__imp__sub_8317FA80"))) PPC_WEAK_FUNC(sub_8317FA80);
PPC_FUNC_IMPL(__imp__sub_8317FA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-24432
	ctx.r9.s64 = ctx.r11.s64 + -24432;
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

__attribute__((alias("__imp__sub_8317FAB0"))) PPC_WEAK_FUNC(sub_8317FAB0);
PPC_FUNC_IMPL(__imp__sub_8317FAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-24400
	ctx.r9.s64 = ctx.r11.s64 + -24400;
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

__attribute__((alias("__imp__sub_8317FAE0"))) PPC_WEAK_FUNC(sub_8317FAE0);
PPC_FUNC_IMPL(__imp__sub_8317FAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-24416
	ctx.r10.s64 = ctx.r10.s64 + -24416;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317FB00"))) PPC_WEAK_FUNC(sub_8317FB00);
PPC_FUNC_IMPL(__imp__sub_8317FB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-24480
	ctx.r10.s64 = ctx.r10.s64 + -24480;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317FB20"))) PPC_WEAK_FUNC(sub_8317FB20);
PPC_FUNC_IMPL(__imp__sub_8317FB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,5784
	ctx.r3.s64 = ctx.r11.s64 + 5784;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FB30"))) PPC_WEAK_FUNC(sub_8317FB30);
PPC_FUNC_IMPL(__imp__sub_8317FB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-24368
	ctx.r10.s64 = ctx.r10.s64 + -24368;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317FB50"))) PPC_WEAK_FUNC(sub_8317FB50);
PPC_FUNC_IMPL(__imp__sub_8317FB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-24328
	ctx.r3.s64 = ctx.r11.s64 + -24328;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FB60"))) PPC_WEAK_FUNC(sub_8317FB60);
PPC_FUNC_IMPL(__imp__sub_8317FB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-24489
	ctx.r3.s64 = ctx.r11.s64 + -24489;
	// b 0x829534a8
	sub_829534A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FB70"))) PPC_WEAK_FUNC(sub_8317FB70);
PPC_FUNC_IMPL(__imp__sub_8317FB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-24333
	ctx.r3.s64 = ctx.r11.s64 + -24333;
	// b 0x82953570
	sub_82953570(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FB80"))) PPC_WEAK_FUNC(sub_8317FB80);
PPC_FUNC_IMPL(__imp__sub_8317FB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-24437
	ctx.r3.s64 = ctx.r11.s64 + -24437;
	// b 0x82953638
	sub_82953638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FB90"))) PPC_WEAK_FUNC(sub_8317FB90);
PPC_FUNC_IMPL(__imp__sub_8317FB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-24255
	ctx.r3.s64 = ctx.r11.s64 + -24255;
	// b 0x82953700
	sub_82953700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FBA0"))) PPC_WEAK_FUNC(sub_8317FBA0);
PPC_FUNC_IMPL(__imp__sub_8317FBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-24435
	ctx.r3.s64 = ctx.r11.s64 + -24435;
	// b 0x829537c8
	sub_829537C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FBB0"))) PPC_WEAK_FUNC(sub_8317FBB0);
PPC_FUNC_IMPL(__imp__sub_8317FBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-24486
	ctx.r3.s64 = ctx.r11.s64 + -24486;
	// b 0x82953890
	sub_82953890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FBC0"))) PPC_WEAK_FUNC(sub_8317FBC0);
PPC_FUNC_IMPL(__imp__sub_8317FBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-24334
	ctx.r3.s64 = ctx.r11.s64 + -24334;
	// b 0x82953958
	sub_82953958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FBD0"))) PPC_WEAK_FUNC(sub_8317FBD0);
PPC_FUNC_IMPL(__imp__sub_8317FBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-24494
	ctx.r3.s64 = ctx.r11.s64 + -24494;
	// b 0x82953a20
	sub_82953A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FBE0"))) PPC_WEAK_FUNC(sub_8317FBE0);
PPC_FUNC_IMPL(__imp__sub_8317FBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-24439
	ctx.r3.s64 = ctx.r11.s64 + -24439;
	// b 0x82953b40
	sub_82953B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FBF0"))) PPC_WEAK_FUNC(sub_8317FBF0);
PPC_FUNC_IMPL(__imp__sub_8317FBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-24438
	ctx.r3.s64 = ctx.r11.s64 + -24438;
	// b 0x82953c60
	sub_82953C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FC00"))) PPC_WEAK_FUNC(sub_8317FC00);
PPC_FUNC_IMPL(__imp__sub_8317FC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-24493
	ctx.r3.s64 = ctx.r11.s64 + -24493;
	// b 0x82953f28
	sub_82953F28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FC10"))) PPC_WEAK_FUNC(sub_8317FC10);
PPC_FUNC_IMPL(__imp__sub_8317FC10) {
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
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r31,-24464
	ctx.r30.s64 = ctx.r31.s64 + -24464;
	// addi r4,r11,31568
	ctx.r4.s64 = ctx.r11.s64 + 31568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317FC3C;
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
	// lfs f13,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,5040
	ctx.r3.s64 = ctx.r7.s64 + 5040;
	// lfs f12,29264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-24464(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24464, ctx.r11.u32);
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
	ctx.lr = 0x8317FC7C;
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

__attribute__((alias("__imp__sub_8317FC98"))) PPC_WEAK_FUNC(sub_8317FC98);
PPC_FUNC_IMPL(__imp__sub_8317FC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-24482
	ctx.r3.s64 = ctx.r11.s64 + -24482;
	// b 0x82954108
	sub_82954108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FCA8"))) PPC_WEAK_FUNC(sub_8317FCA8);
PPC_FUNC_IMPL(__imp__sub_8317FCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-24490
	ctx.r3.s64 = ctx.r11.s64 + -24490;
	// b 0x829541d0
	sub_829541D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FCB8"))) PPC_WEAK_FUNC(sub_8317FCB8);
PPC_FUNC_IMPL(__imp__sub_8317FCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-24481
	ctx.r3.s64 = ctx.r11.s64 + -24481;
	// b 0x829542e8
	sub_829542E8(ctx, base);
	return;
}

