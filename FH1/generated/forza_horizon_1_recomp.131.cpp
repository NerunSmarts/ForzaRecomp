#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_83175828"))) PPC_WEAK_FUNC(sub_83175828);
PPC_FUNC_IMPL(__imp__sub_83175828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,20336
	ctx.r10.s64 = ctx.r10.s64 + 20336;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175848"))) PPC_WEAK_FUNC(sub_83175848);
PPC_FUNC_IMPL(__imp__sub_83175848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,20064
	ctx.r10.s64 = ctx.r10.s64 + 20064;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175868"))) PPC_WEAK_FUNC(sub_83175868);
PPC_FUNC_IMPL(__imp__sub_83175868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,21160
	ctx.r3.s64 = ctx.r11.s64 + 21160;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83175878"))) PPC_WEAK_FUNC(sub_83175878);
PPC_FUNC_IMPL(__imp__sub_83175878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,20768
	ctx.r10.s64 = ctx.r10.s64 + 20768;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175898"))) PPC_WEAK_FUNC(sub_83175898);
PPC_FUNC_IMPL(__imp__sub_83175898) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,20548
	ctx.r30.s64 = ctx.r31.s64 + 20548;
	// addi r4,r11,-19368
	ctx.r4.s64 = ctx.r11.s64 + -19368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831758C4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-9952
	ctx.r3.s64 = ctx.r9.s64 + -9952;
	// lfs f0,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,20548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20548, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831758E8;
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

__attribute__((alias("__imp__sub_83175900"))) PPC_WEAK_FUNC(sub_83175900);
PPC_FUNC_IMPL(__imp__sub_83175900) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,20504
	ctx.r30.s64 = ctx.r31.s64 + 20504;
	// addi r4,r11,-19324
	ctx.r4.s64 = ctx.r11.s64 + -19324;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317592C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-9928
	ctx.r3.s64 = ctx.r9.s64 + -9928;
	// lfs f0,3264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3264);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,20504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20504, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83175950;
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

__attribute__((alias("__imp__sub_83175968"))) PPC_WEAK_FUNC(sub_83175968);
PPC_FUNC_IMPL(__imp__sub_83175968) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83175980;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175998"))) PPC_WEAK_FUNC(sub_83175998);
PPC_FUNC_IMPL(__imp__sub_83175998) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831759B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831759C8"))) PPC_WEAK_FUNC(sub_831759C8);
PPC_FUNC_IMPL(__imp__sub_831759C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,27308
	ctx.r3.s64 = ctx.r11.s64 + 27308;
	// bl 0x82e73af8
	ctx.lr = 0x831759E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20096, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831759F8"))) PPC_WEAK_FUNC(sub_831759F8);
PPC_FUNC_IMPL(__imp__sub_831759F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19288
	ctx.r3.s64 = ctx.r11.s64 + -19288;
	// bl 0x82e73af8
	ctx.lr = 0x83175A10;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83175A28"))) PPC_WEAK_FUNC(sub_83175A28);
PPC_FUNC_IMPL(__imp__sub_83175A28) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83175A40;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83175A58"))) PPC_WEAK_FUNC(sub_83175A58);
PPC_FUNC_IMPL(__imp__sub_83175A58) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83175A70;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175A88"))) PPC_WEAK_FUNC(sub_83175A88);
PPC_FUNC_IMPL(__imp__sub_83175A88) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83175AA0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175AB8"))) PPC_WEAK_FUNC(sub_83175AB8);
PPC_FUNC_IMPL(__imp__sub_83175AB8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83175AD0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175AE8"))) PPC_WEAK_FUNC(sub_83175AE8);
PPC_FUNC_IMPL(__imp__sub_83175AE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19272
	ctx.r3.s64 = ctx.r11.s64 + -19272;
	// bl 0x82e73af8
	ctx.lr = 0x83175B00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83175B18"))) PPC_WEAK_FUNC(sub_83175B18);
PPC_FUNC_IMPL(__imp__sub_83175B18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19260
	ctx.r3.s64 = ctx.r11.s64 + -19260;
	// bl 0x82e73af8
	ctx.lr = 0x83175B30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83175B48"))) PPC_WEAK_FUNC(sub_83175B48);
PPC_FUNC_IMPL(__imp__sub_83175B48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,27296
	ctx.r3.s64 = ctx.r11.s64 + 27296;
	// bl 0x82e73af8
	ctx.lr = 0x83175B60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83175B78"))) PPC_WEAK_FUNC(sub_83175B78);
PPC_FUNC_IMPL(__imp__sub_83175B78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19248
	ctx.r3.s64 = ctx.r11.s64 + -19248;
	// bl 0x82e73af8
	ctx.lr = 0x83175B90;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20852(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175BA8"))) PPC_WEAK_FUNC(sub_83175BA8);
PPC_FUNC_IMPL(__imp__sub_83175BA8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83175BC0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20056(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20056, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175BD8"))) PPC_WEAK_FUNC(sub_83175BD8);
PPC_FUNC_IMPL(__imp__sub_83175BD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19236
	ctx.r3.s64 = ctx.r11.s64 + -19236;
	// bl 0x82e73ab0
	ctx.lr = 0x83175BF0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175C08"))) PPC_WEAK_FUNC(sub_83175C08);
PPC_FUNC_IMPL(__imp__sub_83175C08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19220
	ctx.r3.s64 = ctx.r11.s64 + -19220;
	// bl 0x82e73ab0
	ctx.lr = 0x83175C20;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175C38"))) PPC_WEAK_FUNC(sub_83175C38);
PPC_FUNC_IMPL(__imp__sub_83175C38) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83175C50;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83175C68"))) PPC_WEAK_FUNC(sub_83175C68);
PPC_FUNC_IMPL(__imp__sub_83175C68) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83175C80;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83175C98"))) PPC_WEAK_FUNC(sub_83175C98);
PPC_FUNC_IMPL(__imp__sub_83175C98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19196
	ctx.r3.s64 = ctx.r11.s64 + -19196;
	// bl 0x82e73af8
	ctx.lr = 0x83175CB0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175CC8"))) PPC_WEAK_FUNC(sub_83175CC8);
PPC_FUNC_IMPL(__imp__sub_83175CC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19184
	ctx.r3.s64 = ctx.r11.s64 + -19184;
	// bl 0x82e73af8
	ctx.lr = 0x83175CE0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83175CF8"))) PPC_WEAK_FUNC(sub_83175CF8);
PPC_FUNC_IMPL(__imp__sub_83175CF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19172
	ctx.r3.s64 = ctx.r11.s64 + -19172;
	// bl 0x82e73af8
	ctx.lr = 0x83175D10;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20812, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175D28"))) PPC_WEAK_FUNC(sub_83175D28);
PPC_FUNC_IMPL(__imp__sub_83175D28) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83175D40;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175D58"))) PPC_WEAK_FUNC(sub_83175D58);
PPC_FUNC_IMPL(__imp__sub_83175D58) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83175D70;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21052(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21052, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175D88"))) PPC_WEAK_FUNC(sub_83175D88);
PPC_FUNC_IMPL(__imp__sub_83175D88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10260
	ctx.r3.s64 = ctx.r11.s64 + 10260;
	// bl 0x82e73af8
	ctx.lr = 0x83175DA0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175DB8"))) PPC_WEAK_FUNC(sub_83175DB8);
PPC_FUNC_IMPL(__imp__sub_83175DB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19156
	ctx.r3.s64 = ctx.r11.s64 + -19156;
	// bl 0x82e73af8
	ctx.lr = 0x83175DD0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83175DE8"))) PPC_WEAK_FUNC(sub_83175DE8);
PPC_FUNC_IMPL(__imp__sub_83175DE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19140
	ctx.r3.s64 = ctx.r11.s64 + -19140;
	// bl 0x82e73af8
	ctx.lr = 0x83175E00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175E18"))) PPC_WEAK_FUNC(sub_83175E18);
PPC_FUNC_IMPL(__imp__sub_83175E18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,27308
	ctx.r3.s64 = ctx.r11.s64 + 27308;
	// bl 0x82e73af8
	ctx.lr = 0x83175E30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175E48"))) PPC_WEAK_FUNC(sub_83175E48);
PPC_FUNC_IMPL(__imp__sub_83175E48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19124
	ctx.r3.s64 = ctx.r11.s64 + -19124;
	// bl 0x82e73af8
	ctx.lr = 0x83175E60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20920, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175E78"))) PPC_WEAK_FUNC(sub_83175E78);
PPC_FUNC_IMPL(__imp__sub_83175E78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19104
	ctx.r3.s64 = ctx.r11.s64 + -19104;
	// bl 0x82e73af8
	ctx.lr = 0x83175E90;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83175EA8"))) PPC_WEAK_FUNC(sub_83175EA8);
PPC_FUNC_IMPL(__imp__sub_83175EA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19080
	ctx.r3.s64 = ctx.r11.s64 + -19080;
	// bl 0x82e73af8
	ctx.lr = 0x83175EC0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175ED8"))) PPC_WEAK_FUNC(sub_83175ED8);
PPC_FUNC_IMPL(__imp__sub_83175ED8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19060
	ctx.r3.s64 = ctx.r11.s64 + -19060;
	// bl 0x82e73af8
	ctx.lr = 0x83175EF0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175F08"))) PPC_WEAK_FUNC(sub_83175F08);
PPC_FUNC_IMPL(__imp__sub_83175F08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19048
	ctx.r3.s64 = ctx.r11.s64 + -19048;
	// bl 0x82e73af8
	ctx.lr = 0x83175F20;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21112, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175F38"))) PPC_WEAK_FUNC(sub_83175F38);
PPC_FUNC_IMPL(__imp__sub_83175F38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19036
	ctx.r3.s64 = ctx.r11.s64 + -19036;
	// bl 0x82e73af8
	ctx.lr = 0x83175F50;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83175F68"))) PPC_WEAK_FUNC(sub_83175F68);
PPC_FUNC_IMPL(__imp__sub_83175F68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19024
	ctx.r3.s64 = ctx.r11.s64 + -19024;
	// bl 0x82e73af8
	ctx.lr = 0x83175F80;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175F98"))) PPC_WEAK_FUNC(sub_83175F98);
PPC_FUNC_IMPL(__imp__sub_83175F98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19012
	ctx.r3.s64 = ctx.r11.s64 + -19012;
	// bl 0x82e73af8
	ctx.lr = 0x83175FB0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175FC8"))) PPC_WEAK_FUNC(sub_83175FC8);
PPC_FUNC_IMPL(__imp__sub_83175FC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31652
	ctx.r3.s64 = ctx.r11.s64 + -31652;
	// bl 0x82e73af8
	ctx.lr = 0x83175FE0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20944, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175FF8"))) PPC_WEAK_FUNC(sub_83175FF8);
PPC_FUNC_IMPL(__imp__sub_83175FF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31636
	ctx.r3.s64 = ctx.r11.s64 + -31636;
	// bl 0x82e73af8
	ctx.lr = 0x83176010;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176028"))) PPC_WEAK_FUNC(sub_83176028);
PPC_FUNC_IMPL(__imp__sub_83176028) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19000
	ctx.r3.s64 = ctx.r11.s64 + -19000;
	// bl 0x82e73af8
	ctx.lr = 0x83176040;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20928, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176058"))) PPC_WEAK_FUNC(sub_83176058);
PPC_FUNC_IMPL(__imp__sub_83176058) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18976
	ctx.r3.s64 = ctx.r11.s64 + -18976;
	// bl 0x82e73af8
	ctx.lr = 0x83176070;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176088"))) PPC_WEAK_FUNC(sub_83176088);
PPC_FUNC_IMPL(__imp__sub_83176088) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18956
	ctx.r3.s64 = ctx.r11.s64 + -18956;
	// bl 0x82e73af8
	ctx.lr = 0x831760A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831760B8"))) PPC_WEAK_FUNC(sub_831760B8);
PPC_FUNC_IMPL(__imp__sub_831760B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18944
	ctx.r3.s64 = ctx.r11.s64 + -18944;
	// bl 0x82e73af8
	ctx.lr = 0x831760D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831760E8"))) PPC_WEAK_FUNC(sub_831760E8);
PPC_FUNC_IMPL(__imp__sub_831760E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18932
	ctx.r3.s64 = ctx.r11.s64 + -18932;
	// bl 0x82e73af8
	ctx.lr = 0x83176100;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176118"))) PPC_WEAK_FUNC(sub_83176118);
PPC_FUNC_IMPL(__imp__sub_83176118) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18920
	ctx.r3.s64 = ctx.r11.s64 + -18920;
	// bl 0x82e73af8
	ctx.lr = 0x83176130;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176148"))) PPC_WEAK_FUNC(sub_83176148);
PPC_FUNC_IMPL(__imp__sub_83176148) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18908
	ctx.r3.s64 = ctx.r11.s64 + -18908;
	// bl 0x82e73af8
	ctx.lr = 0x83176160;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176178"))) PPC_WEAK_FUNC(sub_83176178);
PPC_FUNC_IMPL(__imp__sub_83176178) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18896
	ctx.r3.s64 = ctx.r11.s64 + -18896;
	// bl 0x82e73af8
	ctx.lr = 0x83176190;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21396, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831761A8"))) PPC_WEAK_FUNC(sub_831761A8);
PPC_FUNC_IMPL(__imp__sub_831761A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18884
	ctx.r3.s64 = ctx.r11.s64 + -18884;
	// bl 0x82e73af8
	ctx.lr = 0x831761C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831761D8"))) PPC_WEAK_FUNC(sub_831761D8);
PPC_FUNC_IMPL(__imp__sub_831761D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18868
	ctx.r3.s64 = ctx.r11.s64 + -18868;
	// bl 0x82e73af8
	ctx.lr = 0x831761F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176208"))) PPC_WEAK_FUNC(sub_83176208);
PPC_FUNC_IMPL(__imp__sub_83176208) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18844
	ctx.r3.s64 = ctx.r11.s64 + -18844;
	// bl 0x82e73af8
	ctx.lr = 0x83176220;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176238"))) PPC_WEAK_FUNC(sub_83176238);
PPC_FUNC_IMPL(__imp__sub_83176238) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18836
	ctx.r3.s64 = ctx.r11.s64 + -18836;
	// bl 0x82e73af8
	ctx.lr = 0x83176250;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176268"))) PPC_WEAK_FUNC(sub_83176268);
PPC_FUNC_IMPL(__imp__sub_83176268) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18824
	ctx.r3.s64 = ctx.r11.s64 + -18824;
	// bl 0x82e73af8
	ctx.lr = 0x83176280;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176298"))) PPC_WEAK_FUNC(sub_83176298);
PPC_FUNC_IMPL(__imp__sub_83176298) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18812
	ctx.r3.s64 = ctx.r11.s64 + -18812;
	// bl 0x82e73af8
	ctx.lr = 0x831762B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831762C8"))) PPC_WEAK_FUNC(sub_831762C8);
PPC_FUNC_IMPL(__imp__sub_831762C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18792
	ctx.r3.s64 = ctx.r11.s64 + -18792;
	// bl 0x82e73af8
	ctx.lr = 0x831762E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831762F8"))) PPC_WEAK_FUNC(sub_831762F8);
PPC_FUNC_IMPL(__imp__sub_831762F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18784
	ctx.r3.s64 = ctx.r11.s64 + -18784;
	// bl 0x82e73af8
	ctx.lr = 0x83176310;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176328"))) PPC_WEAK_FUNC(sub_83176328);
PPC_FUNC_IMPL(__imp__sub_83176328) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18768
	ctx.r3.s64 = ctx.r11.s64 + -18768;
	// bl 0x82e73af8
	ctx.lr = 0x83176340;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176358"))) PPC_WEAK_FUNC(sub_83176358);
PPC_FUNC_IMPL(__imp__sub_83176358) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18760
	ctx.r3.s64 = ctx.r11.s64 + -18760;
	// bl 0x82e73af8
	ctx.lr = 0x83176370;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176388"))) PPC_WEAK_FUNC(sub_83176388);
PPC_FUNC_IMPL(__imp__sub_83176388) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18744
	ctx.r3.s64 = ctx.r11.s64 + -18744;
	// bl 0x82e73af8
	ctx.lr = 0x831763A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831763B8"))) PPC_WEAK_FUNC(sub_831763B8);
PPC_FUNC_IMPL(__imp__sub_831763B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18728
	ctx.r3.s64 = ctx.r11.s64 + -18728;
	// bl 0x82e73af8
	ctx.lr = 0x831763D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831763E8"))) PPC_WEAK_FUNC(sub_831763E8);
PPC_FUNC_IMPL(__imp__sub_831763E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18708
	ctx.r3.s64 = ctx.r11.s64 + -18708;
	// bl 0x82e73af8
	ctx.lr = 0x83176400;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20804, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176418"))) PPC_WEAK_FUNC(sub_83176418);
PPC_FUNC_IMPL(__imp__sub_83176418) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18692
	ctx.r3.s64 = ctx.r11.s64 + -18692;
	// bl 0x82e73af8
	ctx.lr = 0x83176430;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176448"))) PPC_WEAK_FUNC(sub_83176448);
PPC_FUNC_IMPL(__imp__sub_83176448) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,19964
	ctx.r30.s64 = ctx.r31.s64 + 19964;
	// addi r4,r11,-18672
	ctx.r4.s64 = ctx.r11.s64 + -18672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83176474;
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
	// lfs f13,25340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-9904
	ctx.r3.s64 = ctx.r7.s64 + -9904;
	// lfs f12,29264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,19964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19964, ctx.r11.u32);
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
	ctx.lr = 0x831764B4;
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

__attribute__((alias("__imp__sub_831764D0"))) PPC_WEAK_FUNC(sub_831764D0);
PPC_FUNC_IMPL(__imp__sub_831764D0) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,19996
	ctx.r30.s64 = ctx.r31.s64 + 19996;
	// addi r4,r11,-18620
	ctx.r4.s64 = ctx.r11.s64 + -18620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831764FC;
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
	// lfs f13,22300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22300);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-9880
	ctx.r3.s64 = ctx.r7.s64 + -9880;
	// lfs f12,29264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,19996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19996, ctx.r11.u32);
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
	ctx.lr = 0x8317653C;
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

__attribute__((alias("__imp__sub_83176558"))) PPC_WEAK_FUNC(sub_83176558);
PPC_FUNC_IMPL(__imp__sub_83176558) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18568
	ctx.r3.s64 = ctx.r11.s64 + -18568;
	// bl 0x82e73af8
	ctx.lr = 0x83176570;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176588"))) PPC_WEAK_FUNC(sub_83176588);
PPC_FUNC_IMPL(__imp__sub_83176588) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831765A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831765B8"))) PPC_WEAK_FUNC(sub_831765B8);
PPC_FUNC_IMPL(__imp__sub_831765B8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831765D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831765E8"))) PPC_WEAK_FUNC(sub_831765E8);
PPC_FUNC_IMPL(__imp__sub_831765E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18536
	ctx.r3.s64 = ctx.r11.s64 + -18536;
	// bl 0x82e73af8
	ctx.lr = 0x83176600;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176618"))) PPC_WEAK_FUNC(sub_83176618);
PPC_FUNC_IMPL(__imp__sub_83176618) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18508
	ctx.r3.s64 = ctx.r11.s64 + -18508;
	// bl 0x82e73af8
	ctx.lr = 0x83176630;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176648"))) PPC_WEAK_FUNC(sub_83176648);
PPC_FUNC_IMPL(__imp__sub_83176648) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18488
	ctx.r3.s64 = ctx.r11.s64 + -18488;
	// bl 0x82e73af8
	ctx.lr = 0x83176660;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176678"))) PPC_WEAK_FUNC(sub_83176678);
PPC_FUNC_IMPL(__imp__sub_83176678) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18468
	ctx.r3.s64 = ctx.r11.s64 + -18468;
	// bl 0x82e73af8
	ctx.lr = 0x83176690;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831766A8"))) PPC_WEAK_FUNC(sub_831766A8);
PPC_FUNC_IMPL(__imp__sub_831766A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18448
	ctx.r3.s64 = ctx.r11.s64 + -18448;
	// bl 0x82e73af8
	ctx.lr = 0x831766C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831766D8"))) PPC_WEAK_FUNC(sub_831766D8);
PPC_FUNC_IMPL(__imp__sub_831766D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18412
	ctx.r3.s64 = ctx.r11.s64 + -18412;
	// bl 0x82e73af8
	ctx.lr = 0x831766F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176708"))) PPC_WEAK_FUNC(sub_83176708);
PPC_FUNC_IMPL(__imp__sub_83176708) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18380
	ctx.r3.s64 = ctx.r11.s64 + -18380;
	// bl 0x82e73af8
	ctx.lr = 0x83176720;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21048, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176738"))) PPC_WEAK_FUNC(sub_83176738);
PPC_FUNC_IMPL(__imp__sub_83176738) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18368
	ctx.r3.s64 = ctx.r11.s64 + -18368;
	// bl 0x82e73af8
	ctx.lr = 0x83176750;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176768"))) PPC_WEAK_FUNC(sub_83176768);
PPC_FUNC_IMPL(__imp__sub_83176768) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18356
	ctx.r3.s64 = ctx.r11.s64 + -18356;
	// bl 0x82e73af8
	ctx.lr = 0x83176780;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176798"))) PPC_WEAK_FUNC(sub_83176798);
PPC_FUNC_IMPL(__imp__sub_83176798) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,20616
	ctx.r3.s64 = ctx.r11.s64 + 20616;
	// bl 0x827fc5b8
	ctx.lr = 0x831767B0;
	sub_827FC5B8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9552
	ctx.r3.s64 = ctx.r11.s64 + -9552;
	// bl 0x82a7e6b0
	ctx.lr = 0x831767BC;
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

__attribute__((alias("__imp__sub_831767D0"))) PPC_WEAK_FUNC(sub_831767D0);
PPC_FUNC_IMPL(__imp__sub_831767D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29636
	ctx.r3.s64 = ctx.r11.s64 + -29636;
	// bl 0x82e73af8
	ctx.lr = 0x831767E8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176800"))) PPC_WEAK_FUNC(sub_83176800);
PPC_FUNC_IMPL(__imp__sub_83176800) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18344
	ctx.r3.s64 = ctx.r11.s64 + -18344;
	// bl 0x82e73af8
	ctx.lr = 0x83176818;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176830"))) PPC_WEAK_FUNC(sub_83176830);
PPC_FUNC_IMPL(__imp__sub_83176830) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29648
	ctx.r3.s64 = ctx.r11.s64 + -29648;
	// bl 0x82e73af8
	ctx.lr = 0x83176848;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176860"))) PPC_WEAK_FUNC(sub_83176860);
PPC_FUNC_IMPL(__imp__sub_83176860) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31636
	ctx.r3.s64 = ctx.r11.s64 + -31636;
	// bl 0x82e73af8
	ctx.lr = 0x83176878;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176890"))) PPC_WEAK_FUNC(sub_83176890);
PPC_FUNC_IMPL(__imp__sub_83176890) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18328
	ctx.r3.s64 = ctx.r11.s64 + -18328;
	// bl 0x82e73af8
	ctx.lr = 0x831768A8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21056(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21056, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831768C0"))) PPC_WEAK_FUNC(sub_831768C0);
PPC_FUNC_IMPL(__imp__sub_831768C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18316
	ctx.r3.s64 = ctx.r11.s64 + -18316;
	// bl 0x82e73af8
	ctx.lr = 0x831768D8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831768F0"))) PPC_WEAK_FUNC(sub_831768F0);
PPC_FUNC_IMPL(__imp__sub_831768F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18296
	ctx.r3.s64 = ctx.r11.s64 + -18296;
	// bl 0x82e73af8
	ctx.lr = 0x83176908;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176920"))) PPC_WEAK_FUNC(sub_83176920);
PPC_FUNC_IMPL(__imp__sub_83176920) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18276
	ctx.r3.s64 = ctx.r11.s64 + -18276;
	// bl 0x82e73af8
	ctx.lr = 0x83176938;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176950"))) PPC_WEAK_FUNC(sub_83176950);
PPC_FUNC_IMPL(__imp__sub_83176950) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18260
	ctx.r3.s64 = ctx.r11.s64 + -18260;
	// bl 0x82e73af8
	ctx.lr = 0x83176968;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176980"))) PPC_WEAK_FUNC(sub_83176980);
PPC_FUNC_IMPL(__imp__sub_83176980) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18244
	ctx.r3.s64 = ctx.r11.s64 + -18244;
	// bl 0x82e73ab0
	ctx.lr = 0x83176998;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20584, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831769B0"))) PPC_WEAK_FUNC(sub_831769B0);
PPC_FUNC_IMPL(__imp__sub_831769B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18220
	ctx.r3.s64 = ctx.r11.s64 + -18220;
	// bl 0x82e73ab0
	ctx.lr = 0x831769C8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20048, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831769E0"))) PPC_WEAK_FUNC(sub_831769E0);
PPC_FUNC_IMPL(__imp__sub_831769E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18208
	ctx.r3.s64 = ctx.r11.s64 + -18208;
	// bl 0x82e73ab0
	ctx.lr = 0x831769F8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20940, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176A10"))) PPC_WEAK_FUNC(sub_83176A10);
PPC_FUNC_IMPL(__imp__sub_83176A10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18196
	ctx.r3.s64 = ctx.r11.s64 + -18196;
	// bl 0x82e73ab0
	ctx.lr = 0x83176A28;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176A40"))) PPC_WEAK_FUNC(sub_83176A40);
PPC_FUNC_IMPL(__imp__sub_83176A40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18180
	ctx.r3.s64 = ctx.r11.s64 + -18180;
	// bl 0x82e73ab0
	ctx.lr = 0x83176A58;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176A70"))) PPC_WEAK_FUNC(sub_83176A70);
PPC_FUNC_IMPL(__imp__sub_83176A70) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83176A88;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176AA0"))) PPC_WEAK_FUNC(sub_83176AA0);
PPC_FUNC_IMPL(__imp__sub_83176AA0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83176AB8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20808, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176AD0"))) PPC_WEAK_FUNC(sub_83176AD0);
PPC_FUNC_IMPL(__imp__sub_83176AD0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83176AE8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176B00"))) PPC_WEAK_FUNC(sub_83176B00);
PPC_FUNC_IMPL(__imp__sub_83176B00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18164
	ctx.r3.s64 = ctx.r11.s64 + -18164;
	// bl 0x82e73af8
	ctx.lr = 0x83176B18;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176B30"))) PPC_WEAK_FUNC(sub_83176B30);
PPC_FUNC_IMPL(__imp__sub_83176B30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18144
	ctx.r3.s64 = ctx.r11.s64 + -18144;
	// bl 0x82e73af8
	ctx.lr = 0x83176B48;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21060, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176B60"))) PPC_WEAK_FUNC(sub_83176B60);
PPC_FUNC_IMPL(__imp__sub_83176B60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18120
	ctx.r3.s64 = ctx.r11.s64 + -18120;
	// bl 0x82e73af8
	ctx.lr = 0x83176B78;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21044(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21044, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176B90"))) PPC_WEAK_FUNC(sub_83176B90);
PPC_FUNC_IMPL(__imp__sub_83176B90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18100
	ctx.r3.s64 = ctx.r11.s64 + -18100;
	// bl 0x82e73af8
	ctx.lr = 0x83176BA8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176BC0"))) PPC_WEAK_FUNC(sub_83176BC0);
PPC_FUNC_IMPL(__imp__sub_83176BC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18084
	ctx.r3.s64 = ctx.r11.s64 + -18084;
	// bl 0x82e73af8
	ctx.lr = 0x83176BD8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176BF0"))) PPC_WEAK_FUNC(sub_83176BF0);
PPC_FUNC_IMPL(__imp__sub_83176BF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18068
	ctx.r3.s64 = ctx.r11.s64 + -18068;
	// bl 0x82e73af8
	ctx.lr = 0x83176C08;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176C20"))) PPC_WEAK_FUNC(sub_83176C20);
PPC_FUNC_IMPL(__imp__sub_83176C20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18052
	ctx.r3.s64 = ctx.r11.s64 + -18052;
	// bl 0x82e73af8
	ctx.lr = 0x83176C38;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176C50"))) PPC_WEAK_FUNC(sub_83176C50);
PPC_FUNC_IMPL(__imp__sub_83176C50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18032
	ctx.r3.s64 = ctx.r11.s64 + -18032;
	// bl 0x82e73af8
	ctx.lr = 0x83176C68;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176C80"))) PPC_WEAK_FUNC(sub_83176C80);
PPC_FUNC_IMPL(__imp__sub_83176C80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18012
	ctx.r3.s64 = ctx.r11.s64 + -18012;
	// bl 0x82e73af8
	ctx.lr = 0x83176C98;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176CB0"))) PPC_WEAK_FUNC(sub_83176CB0);
PPC_FUNC_IMPL(__imp__sub_83176CB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17996
	ctx.r3.s64 = ctx.r11.s64 + -17996;
	// bl 0x82e73af8
	ctx.lr = 0x83176CC8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176CE0"))) PPC_WEAK_FUNC(sub_83176CE0);
PPC_FUNC_IMPL(__imp__sub_83176CE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17980
	ctx.r3.s64 = ctx.r11.s64 + -17980;
	// bl 0x82e73af8
	ctx.lr = 0x83176CF8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176D10"))) PPC_WEAK_FUNC(sub_83176D10);
PPC_FUNC_IMPL(__imp__sub_83176D10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17964
	ctx.r3.s64 = ctx.r11.s64 + -17964;
	// bl 0x82e73af8
	ctx.lr = 0x83176D28;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176D40"))) PPC_WEAK_FUNC(sub_83176D40);
PPC_FUNC_IMPL(__imp__sub_83176D40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17952
	ctx.r3.s64 = ctx.r11.s64 + -17952;
	// bl 0x82e73af8
	ctx.lr = 0x83176D58;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20856, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176D70"))) PPC_WEAK_FUNC(sub_83176D70);
PPC_FUNC_IMPL(__imp__sub_83176D70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17940
	ctx.r3.s64 = ctx.r11.s64 + -17940;
	// bl 0x82e73af8
	ctx.lr = 0x83176D88;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176DA0"))) PPC_WEAK_FUNC(sub_83176DA0);
PPC_FUNC_IMPL(__imp__sub_83176DA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19272
	ctx.r3.s64 = ctx.r11.s64 + -19272;
	// bl 0x82e73af8
	ctx.lr = 0x83176DB8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176DD0"))) PPC_WEAK_FUNC(sub_83176DD0);
PPC_FUNC_IMPL(__imp__sub_83176DD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-19260
	ctx.r3.s64 = ctx.r11.s64 + -19260;
	// bl 0x82e73af8
	ctx.lr = 0x83176DE8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20020(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20020, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176E00"))) PPC_WEAK_FUNC(sub_83176E00);
PPC_FUNC_IMPL(__imp__sub_83176E00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17920
	ctx.r3.s64 = ctx.r11.s64 + -17920;
	// bl 0x82e73af8
	ctx.lr = 0x83176E18;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176E30"))) PPC_WEAK_FUNC(sub_83176E30);
PPC_FUNC_IMPL(__imp__sub_83176E30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29284
	ctx.r3.s64 = ctx.r11.s64 + -29284;
	// bl 0x82e73af8
	ctx.lr = 0x83176E48;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176E60"))) PPC_WEAK_FUNC(sub_83176E60);
PPC_FUNC_IMPL(__imp__sub_83176E60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29272
	ctx.r3.s64 = ctx.r11.s64 + -29272;
	// bl 0x82e73af8
	ctx.lr = 0x83176E78;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176E90"))) PPC_WEAK_FUNC(sub_83176E90);
PPC_FUNC_IMPL(__imp__sub_83176E90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29252
	ctx.r3.s64 = ctx.r11.s64 + -29252;
	// bl 0x82e73af8
	ctx.lr = 0x83176EA8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176EC0"))) PPC_WEAK_FUNC(sub_83176EC0);
PPC_FUNC_IMPL(__imp__sub_83176EC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29232
	ctx.r3.s64 = ctx.r11.s64 + -29232;
	// bl 0x82e73af8
	ctx.lr = 0x83176ED8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176EF0"))) PPC_WEAK_FUNC(sub_83176EF0);
PPC_FUNC_IMPL(__imp__sub_83176EF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29212
	ctx.r3.s64 = ctx.r11.s64 + -29212;
	// bl 0x82e73af8
	ctx.lr = 0x83176F08;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176F20"))) PPC_WEAK_FUNC(sub_83176F20);
PPC_FUNC_IMPL(__imp__sub_83176F20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29192
	ctx.r3.s64 = ctx.r11.s64 + -29192;
	// bl 0x82e73af8
	ctx.lr = 0x83176F38;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176F50"))) PPC_WEAK_FUNC(sub_83176F50);
PPC_FUNC_IMPL(__imp__sub_83176F50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29176
	ctx.r3.s64 = ctx.r11.s64 + -29176;
	// bl 0x82e73af8
	ctx.lr = 0x83176F68;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83176F80"))) PPC_WEAK_FUNC(sub_83176F80);
PPC_FUNC_IMPL(__imp__sub_83176F80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29160
	ctx.r3.s64 = ctx.r11.s64 + -29160;
	// bl 0x82e73af8
	ctx.lr = 0x83176F98;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176FB0"))) PPC_WEAK_FUNC(sub_83176FB0);
PPC_FUNC_IMPL(__imp__sub_83176FB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29140
	ctx.r3.s64 = ctx.r11.s64 + -29140;
	// bl 0x82e73af8
	ctx.lr = 0x83176FC8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83176FE0"))) PPC_WEAK_FUNC(sub_83176FE0);
PPC_FUNC_IMPL(__imp__sub_83176FE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29120
	ctx.r3.s64 = ctx.r11.s64 + -29120;
	// bl 0x82e73af8
	ctx.lr = 0x83176FF8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177010"))) PPC_WEAK_FUNC(sub_83177010);
PPC_FUNC_IMPL(__imp__sub_83177010) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83177028;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177040"))) PPC_WEAK_FUNC(sub_83177040);
PPC_FUNC_IMPL(__imp__sub_83177040) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,26432
	ctx.r3.s64 = ctx.r11.s64 + 26432;
	// bl 0x82e73af8
	ctx.lr = 0x83177058;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177070"))) PPC_WEAK_FUNC(sub_83177070);
PPC_FUNC_IMPL(__imp__sub_83177070) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17908
	ctx.r3.s64 = ctx.r11.s64 + -17908;
	// bl 0x82e73af8
	ctx.lr = 0x83177088;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831770A0"))) PPC_WEAK_FUNC(sub_831770A0);
PPC_FUNC_IMPL(__imp__sub_831770A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17896
	ctx.r3.s64 = ctx.r11.s64 + -17896;
	// bl 0x82e73af8
	ctx.lr = 0x831770B8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831770D0"))) PPC_WEAK_FUNC(sub_831770D0);
PPC_FUNC_IMPL(__imp__sub_831770D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17884
	ctx.r3.s64 = ctx.r11.s64 + -17884;
	// bl 0x82e73af8
	ctx.lr = 0x831770E8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177100"))) PPC_WEAK_FUNC(sub_83177100);
PPC_FUNC_IMPL(__imp__sub_83177100) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17868
	ctx.r3.s64 = ctx.r11.s64 + -17868;
	// bl 0x82e73af8
	ctx.lr = 0x83177118;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20592, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177130"))) PPC_WEAK_FUNC(sub_83177130);
PPC_FUNC_IMPL(__imp__sub_83177130) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17848
	ctx.r3.s64 = ctx.r11.s64 + -17848;
	// bl 0x82e73af8
	ctx.lr = 0x83177148;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177160"))) PPC_WEAK_FUNC(sub_83177160);
PPC_FUNC_IMPL(__imp__sub_83177160) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17828
	ctx.r3.s64 = ctx.r11.s64 + -17828;
	// bl 0x82e73af8
	ctx.lr = 0x83177178;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20060, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177190"))) PPC_WEAK_FUNC(sub_83177190);
PPC_FUNC_IMPL(__imp__sub_83177190) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17812
	ctx.r3.s64 = ctx.r11.s64 + -17812;
	// bl 0x82e73af8
	ctx.lr = 0x831771A8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831771C0"))) PPC_WEAK_FUNC(sub_831771C0);
PPC_FUNC_IMPL(__imp__sub_831771C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17788
	ctx.r3.s64 = ctx.r11.s64 + -17788;
	// bl 0x82e73af8
	ctx.lr = 0x831771D8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831771F0"))) PPC_WEAK_FUNC(sub_831771F0);
PPC_FUNC_IMPL(__imp__sub_831771F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17764
	ctx.r3.s64 = ctx.r11.s64 + -17764;
	// bl 0x82e73af8
	ctx.lr = 0x83177208;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177220"))) PPC_WEAK_FUNC(sub_83177220);
PPC_FUNC_IMPL(__imp__sub_83177220) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17740
	ctx.r3.s64 = ctx.r11.s64 + -17740;
	// bl 0x82e73af8
	ctx.lr = 0x83177238;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177250"))) PPC_WEAK_FUNC(sub_83177250);
PPC_FUNC_IMPL(__imp__sub_83177250) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17716
	ctx.r3.s64 = ctx.r11.s64 + -17716;
	// bl 0x82e73af8
	ctx.lr = 0x83177268;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177280"))) PPC_WEAK_FUNC(sub_83177280);
PPC_FUNC_IMPL(__imp__sub_83177280) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17704
	ctx.r3.s64 = ctx.r11.s64 + -17704;
	// bl 0x82e73af8
	ctx.lr = 0x83177298;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831772B0"))) PPC_WEAK_FUNC(sub_831772B0);
PPC_FUNC_IMPL(__imp__sub_831772B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17688
	ctx.r3.s64 = ctx.r11.s64 + -17688;
	// bl 0x82e73af8
	ctx.lr = 0x831772C8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20876(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831772E0"))) PPC_WEAK_FUNC(sub_831772E0);
PPC_FUNC_IMPL(__imp__sub_831772E0) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,21324
	ctx.r30.s64 = ctx.r31.s64 + 21324;
	// addi r4,r11,-17664
	ctx.r4.s64 = ctx.r11.s64 + -17664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317730C;
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
	// lfs f0,3296(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3296);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3384(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3384);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-9856
	ctx.r3.s64 = ctx.r10.s64 + -9856;
	// lfs f11,3264(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3264);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,21324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21324, ctx.r11.u32);
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
	ctx.lr = 0x83177354;
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

__attribute__((alias("__imp__sub_83177370"))) PPC_WEAK_FUNC(sub_83177370);
PPC_FUNC_IMPL(__imp__sub_83177370) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23548
	ctx.r3.s64 = ctx.r11.s64 + 23548;
	// bl 0x82e73af8
	ctx.lr = 0x83177388;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831773A0"))) PPC_WEAK_FUNC(sub_831773A0);
PPC_FUNC_IMPL(__imp__sub_831773A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17628
	ctx.r3.s64 = ctx.r11.s64 + -17628;
	// bl 0x82e73af8
	ctx.lr = 0x831773B8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831773D0"))) PPC_WEAK_FUNC(sub_831773D0);
PPC_FUNC_IMPL(__imp__sub_831773D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17612
	ctx.r3.s64 = ctx.r11.s64 + -17612;
	// bl 0x82e73af8
	ctx.lr = 0x831773E8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177400"))) PPC_WEAK_FUNC(sub_83177400);
PPC_FUNC_IMPL(__imp__sub_83177400) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17596
	ctx.r3.s64 = ctx.r11.s64 + -17596;
	// bl 0x82e73af8
	ctx.lr = 0x83177418;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177430"))) PPC_WEAK_FUNC(sub_83177430);
PPC_FUNC_IMPL(__imp__sub_83177430) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31652
	ctx.r3.s64 = ctx.r11.s64 + -31652;
	// bl 0x82e73af8
	ctx.lr = 0x83177448;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177460"))) PPC_WEAK_FUNC(sub_83177460);
PPC_FUNC_IMPL(__imp__sub_83177460) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17576
	ctx.r3.s64 = ctx.r11.s64 + -17576;
	// bl 0x82e73af8
	ctx.lr = 0x83177478;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177490"))) PPC_WEAK_FUNC(sub_83177490);
PPC_FUNC_IMPL(__imp__sub_83177490) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31636
	ctx.r3.s64 = ctx.r11.s64 + -31636;
	// bl 0x82e73af8
	ctx.lr = 0x831774A8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831774C0"))) PPC_WEAK_FUNC(sub_831774C0);
PPC_FUNC_IMPL(__imp__sub_831774C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17560
	ctx.r3.s64 = ctx.r11.s64 + -17560;
	// bl 0x82e73af8
	ctx.lr = 0x831774D8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831774F0"))) PPC_WEAK_FUNC(sub_831774F0);
PPC_FUNC_IMPL(__imp__sub_831774F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17544
	ctx.r3.s64 = ctx.r11.s64 + -17544;
	// bl 0x82e73af8
	ctx.lr = 0x83177508;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177520"))) PPC_WEAK_FUNC(sub_83177520);
PPC_FUNC_IMPL(__imp__sub_83177520) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-17500
	ctx.r3.s64 = ctx.r11.s64 + -17500;
	// bl 0x82e73af8
	ctx.lr = 0x8317753C;
	sub_82E73AF8(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r31,r10,21476
	ctx.r31.s64 = ctx.r10.s64 + 21476;
	// addi r3,r9,-17508
	ctx.r3.s64 = ctx.r9.s64 + -17508;
	// stw r11,21476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21476, ctx.r11.u32);
	// bl 0x82e73af8
	ctx.lr = 0x83177558;
	sub_82E73AF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-17516
	ctx.r3.s64 = ctx.r11.s64 + -17516;
	// bl 0x82e73af8
	ctx.lr = 0x83177568;
	sub_82E73AF8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-17524
	ctx.r3.s64 = ctx.r11.s64 + -17524;
	// bl 0x82e73af8
	ctx.lr = 0x83177578;
	sub_82E73AF8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-17532
	ctx.r3.s64 = ctx.r11.s64 + -17532;
	// bl 0x82e73af8
	ctx.lr = 0x83177588;
	sub_82E73AF8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_831775A0"))) PPC_WEAK_FUNC(sub_831775A0);
PPC_FUNC_IMPL(__imp__sub_831775A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17492
	ctx.r3.s64 = ctx.r11.s64 + -17492;
	// bl 0x82e73af8
	ctx.lr = 0x831775B8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831775D0"))) PPC_WEAK_FUNC(sub_831775D0);
PPC_FUNC_IMPL(__imp__sub_831775D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17484
	ctx.r3.s64 = ctx.r11.s64 + -17484;
	// bl 0x82e73af8
	ctx.lr = 0x831775E8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177600"))) PPC_WEAK_FUNC(sub_83177600);
PPC_FUNC_IMPL(__imp__sub_83177600) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83177618;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19916, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177630"))) PPC_WEAK_FUNC(sub_83177630);
PPC_FUNC_IMPL(__imp__sub_83177630) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83177648;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177660"))) PPC_WEAK_FUNC(sub_83177660);
PPC_FUNC_IMPL(__imp__sub_83177660) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23548
	ctx.r3.s64 = ctx.r11.s64 + 23548;
	// bl 0x82e73af8
	ctx.lr = 0x83177678;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177690"))) PPC_WEAK_FUNC(sub_83177690);
PPC_FUNC_IMPL(__imp__sub_83177690) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17476
	ctx.r3.s64 = ctx.r11.s64 + -17476;
	// bl 0x82e73af8
	ctx.lr = 0x831776A8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831776C0"))) PPC_WEAK_FUNC(sub_831776C0);
PPC_FUNC_IMPL(__imp__sub_831776C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17464
	ctx.r3.s64 = ctx.r11.s64 + -17464;
	// bl 0x82e73af8
	ctx.lr = 0x831776D8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831776F0"))) PPC_WEAK_FUNC(sub_831776F0);
PPC_FUNC_IMPL(__imp__sub_831776F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17452
	ctx.r3.s64 = ctx.r11.s64 + -17452;
	// bl 0x82e73af8
	ctx.lr = 0x83177708;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177720"))) PPC_WEAK_FUNC(sub_83177720);
PPC_FUNC_IMPL(__imp__sub_83177720) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17440
	ctx.r3.s64 = ctx.r11.s64 + -17440;
	// bl 0x82e73af8
	ctx.lr = 0x83177738;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177750"))) PPC_WEAK_FUNC(sub_83177750);
PPC_FUNC_IMPL(__imp__sub_83177750) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17432
	ctx.r3.s64 = ctx.r11.s64 + -17432;
	// bl 0x82e73af8
	ctx.lr = 0x83177768;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177780"))) PPC_WEAK_FUNC(sub_83177780);
PPC_FUNC_IMPL(__imp__sub_83177780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// lwz r11,20568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20568);
	// lwz r10,20028(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20028);
	// addi r6,r7,21420
	ctx.r6.s64 = ctx.r7.s64 + 21420;
	// lwz r9,21272(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21272);
	// lwz r8,20280(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20280);
	// stw r11,21420(r7)
	PPC_STORE_U32(ctx.r7.u32 + 21420, ctx.r11.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831777C0"))) PPC_WEAK_FUNC(sub_831777C0);
PPC_FUNC_IMPL(__imp__sub_831777C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17424
	ctx.r3.s64 = ctx.r11.s64 + -17424;
	// bl 0x82e73af8
	ctx.lr = 0x831777D8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831777F0"))) PPC_WEAK_FUNC(sub_831777F0);
PPC_FUNC_IMPL(__imp__sub_831777F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17408
	ctx.r3.s64 = ctx.r11.s64 + -17408;
	// bl 0x82e73af8
	ctx.lr = 0x83177808;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177820"))) PPC_WEAK_FUNC(sub_83177820);
PPC_FUNC_IMPL(__imp__sub_83177820) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,21712
	ctx.r3.s64 = ctx.r11.s64 + 21712;
	// bl 0x82e73af8
	ctx.lr = 0x83177838;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177850"))) PPC_WEAK_FUNC(sub_83177850);
PPC_FUNC_IMPL(__imp__sub_83177850) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17392
	ctx.r3.s64 = ctx.r11.s64 + -17392;
	// bl 0x82e73af8
	ctx.lr = 0x83177868;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177880"))) PPC_WEAK_FUNC(sub_83177880);
PPC_FUNC_IMPL(__imp__sub_83177880) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,21684
	ctx.r3.s64 = ctx.r11.s64 + 21684;
	// bl 0x82e73af8
	ctx.lr = 0x83177898;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21404, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831778B0"))) PPC_WEAK_FUNC(sub_831778B0);
PPC_FUNC_IMPL(__imp__sub_831778B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17380
	ctx.r3.s64 = ctx.r11.s64 + -17380;
	// bl 0x82e73af8
	ctx.lr = 0x831778C8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831778E0"))) PPC_WEAK_FUNC(sub_831778E0);
PPC_FUNC_IMPL(__imp__sub_831778E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17368
	ctx.r3.s64 = ctx.r11.s64 + -17368;
	// bl 0x82e73af8
	ctx.lr = 0x831778F8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177910"))) PPC_WEAK_FUNC(sub_83177910);
PPC_FUNC_IMPL(__imp__sub_83177910) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17344
	ctx.r3.s64 = ctx.r11.s64 + -17344;
	// bl 0x82e73af8
	ctx.lr = 0x83177928;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20036, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177940"))) PPC_WEAK_FUNC(sub_83177940);
PPC_FUNC_IMPL(__imp__sub_83177940) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17320
	ctx.r3.s64 = ctx.r11.s64 + -17320;
	// bl 0x82e73af8
	ctx.lr = 0x83177958;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177970"))) PPC_WEAK_FUNC(sub_83177970);
PPC_FUNC_IMPL(__imp__sub_83177970) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17304
	ctx.r3.s64 = ctx.r11.s64 + -17304;
	// bl 0x82e73af8
	ctx.lr = 0x83177988;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20588, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831779A0"))) PPC_WEAK_FUNC(sub_831779A0);
PPC_FUNC_IMPL(__imp__sub_831779A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17288
	ctx.r3.s64 = ctx.r11.s64 + -17288;
	// bl 0x82e73af8
	ctx.lr = 0x831779B8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831779D0"))) PPC_WEAK_FUNC(sub_831779D0);
PPC_FUNC_IMPL(__imp__sub_831779D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17280
	ctx.r3.s64 = ctx.r11.s64 + -17280;
	// bl 0x82e73af8
	ctx.lr = 0x831779E8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177A00"))) PPC_WEAK_FUNC(sub_83177A00);
PPC_FUNC_IMPL(__imp__sub_83177A00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17268
	ctx.r3.s64 = ctx.r11.s64 + -17268;
	// bl 0x82e73af8
	ctx.lr = 0x83177A18;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177A30"))) PPC_WEAK_FUNC(sub_83177A30);
PPC_FUNC_IMPL(__imp__sub_83177A30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17252
	ctx.r3.s64 = ctx.r11.s64 + -17252;
	// bl 0x82e73af8
	ctx.lr = 0x83177A48;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177A60"))) PPC_WEAK_FUNC(sub_83177A60);
PPC_FUNC_IMPL(__imp__sub_83177A60) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83177A78;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177A90"))) PPC_WEAK_FUNC(sub_83177A90);
PPC_FUNC_IMPL(__imp__sub_83177A90) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83177AA8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177AC0"))) PPC_WEAK_FUNC(sub_83177AC0);
PPC_FUNC_IMPL(__imp__sub_83177AC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17236
	ctx.r3.s64 = ctx.r11.s64 + -17236;
	// bl 0x82e73af8
	ctx.lr = 0x83177AD8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177AF0"))) PPC_WEAK_FUNC(sub_83177AF0);
PPC_FUNC_IMPL(__imp__sub_83177AF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17228
	ctx.r3.s64 = ctx.r11.s64 + -17228;
	// bl 0x82e73af8
	ctx.lr = 0x83177B08;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177B20"))) PPC_WEAK_FUNC(sub_83177B20);
PPC_FUNC_IMPL(__imp__sub_83177B20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17216
	ctx.r3.s64 = ctx.r11.s64 + -17216;
	// bl 0x82e73af8
	ctx.lr = 0x83177B38;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177B50"))) PPC_WEAK_FUNC(sub_83177B50);
PPC_FUNC_IMPL(__imp__sub_83177B50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17204
	ctx.r3.s64 = ctx.r11.s64 + -17204;
	// bl 0x82e73af8
	ctx.lr = 0x83177B68;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177B80"))) PPC_WEAK_FUNC(sub_83177B80);
PPC_FUNC_IMPL(__imp__sub_83177B80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17192
	ctx.r3.s64 = ctx.r11.s64 + -17192;
	// bl 0x82e73af8
	ctx.lr = 0x83177B98;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177BB0"))) PPC_WEAK_FUNC(sub_83177BB0);
PPC_FUNC_IMPL(__imp__sub_83177BB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17180
	ctx.r3.s64 = ctx.r11.s64 + -17180;
	// bl 0x82e73af8
	ctx.lr = 0x83177BC8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177BE0"))) PPC_WEAK_FUNC(sub_83177BE0);
PPC_FUNC_IMPL(__imp__sub_83177BE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17168
	ctx.r3.s64 = ctx.r11.s64 + -17168;
	// bl 0x82e73af8
	ctx.lr = 0x83177BF8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177C10"))) PPC_WEAK_FUNC(sub_83177C10);
PPC_FUNC_IMPL(__imp__sub_83177C10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17156
	ctx.r3.s64 = ctx.r11.s64 + -17156;
	// bl 0x82e73af8
	ctx.lr = 0x83177C28;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177C40"))) PPC_WEAK_FUNC(sub_83177C40);
PPC_FUNC_IMPL(__imp__sub_83177C40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// bl 0x82e73af8
	ctx.lr = 0x83177C58;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177C70"))) PPC_WEAK_FUNC(sub_83177C70);
PPC_FUNC_IMPL(__imp__sub_83177C70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17128
	ctx.r3.s64 = ctx.r11.s64 + -17128;
	// bl 0x82e73af8
	ctx.lr = 0x83177C88;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177CA0"))) PPC_WEAK_FUNC(sub_83177CA0);
PPC_FUNC_IMPL(__imp__sub_83177CA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17116
	ctx.r3.s64 = ctx.r11.s64 + -17116;
	// bl 0x82e73af8
	ctx.lr = 0x83177CB8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20024, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177CD0"))) PPC_WEAK_FUNC(sub_83177CD0);
PPC_FUNC_IMPL(__imp__sub_83177CD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17104
	ctx.r3.s64 = ctx.r11.s64 + -17104;
	// bl 0x82e73af8
	ctx.lr = 0x83177CE8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177D00"))) PPC_WEAK_FUNC(sub_83177D00);
PPC_FUNC_IMPL(__imp__sub_83177D00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17092
	ctx.r3.s64 = ctx.r11.s64 + -17092;
	// bl 0x82e73af8
	ctx.lr = 0x83177D18;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177D30"))) PPC_WEAK_FUNC(sub_83177D30);
PPC_FUNC_IMPL(__imp__sub_83177D30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17076
	ctx.r3.s64 = ctx.r11.s64 + -17076;
	// bl 0x82e73af8
	ctx.lr = 0x83177D48;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177D60"))) PPC_WEAK_FUNC(sub_83177D60);
PPC_FUNC_IMPL(__imp__sub_83177D60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17060
	ctx.r3.s64 = ctx.r11.s64 + -17060;
	// bl 0x82e73af8
	ctx.lr = 0x83177D78;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19992(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19992, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177D90"))) PPC_WEAK_FUNC(sub_83177D90);
PPC_FUNC_IMPL(__imp__sub_83177D90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17040
	ctx.r3.s64 = ctx.r11.s64 + -17040;
	// bl 0x82e73af8
	ctx.lr = 0x83177DA8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177DC0"))) PPC_WEAK_FUNC(sub_83177DC0);
PPC_FUNC_IMPL(__imp__sub_83177DC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17020
	ctx.r3.s64 = ctx.r11.s64 + -17020;
	// bl 0x82e73af8
	ctx.lr = 0x83177DD8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177DF0"))) PPC_WEAK_FUNC(sub_83177DF0);
PPC_FUNC_IMPL(__imp__sub_83177DF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16996
	ctx.r3.s64 = ctx.r11.s64 + -16996;
	// bl 0x82e73af8
	ctx.lr = 0x83177E08;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177E20"))) PPC_WEAK_FUNC(sub_83177E20);
PPC_FUNC_IMPL(__imp__sub_83177E20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16972
	ctx.r3.s64 = ctx.r11.s64 + -16972;
	// bl 0x82e73af8
	ctx.lr = 0x83177E38;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177E50"))) PPC_WEAK_FUNC(sub_83177E50);
PPC_FUNC_IMPL(__imp__sub_83177E50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16948
	ctx.r3.s64 = ctx.r11.s64 + -16948;
	// bl 0x82e73af8
	ctx.lr = 0x83177E68;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177E80"))) PPC_WEAK_FUNC(sub_83177E80);
PPC_FUNC_IMPL(__imp__sub_83177E80) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83177E98;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177EB0"))) PPC_WEAK_FUNC(sub_83177EB0);
PPC_FUNC_IMPL(__imp__sub_83177EB0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83177EC8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177EE0"))) PPC_WEAK_FUNC(sub_83177EE0);
PPC_FUNC_IMPL(__imp__sub_83177EE0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83177EF8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20924(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20924, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177F10"))) PPC_WEAK_FUNC(sub_83177F10);
PPC_FUNC_IMPL(__imp__sub_83177F10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29196
	ctx.r3.s64 = ctx.r11.s64 + -29196;
	// bl 0x82e73af8
	ctx.lr = 0x83177F28;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177F40"))) PPC_WEAK_FUNC(sub_83177F40);
PPC_FUNC_IMPL(__imp__sub_83177F40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16924
	ctx.r3.s64 = ctx.r11.s64 + -16924;
	// bl 0x82e73af8
	ctx.lr = 0x83177F58;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177F70"))) PPC_WEAK_FUNC(sub_83177F70);
PPC_FUNC_IMPL(__imp__sub_83177F70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16908
	ctx.r3.s64 = ctx.r11.s64 + -16908;
	// bl 0x82e73af8
	ctx.lr = 0x83177F88;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83177FA0"))) PPC_WEAK_FUNC(sub_83177FA0);
PPC_FUNC_IMPL(__imp__sub_83177FA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16892
	ctx.r3.s64 = ctx.r11.s64 + -16892;
	// bl 0x82e73af8
	ctx.lr = 0x83177FB8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83177FD0"))) PPC_WEAK_FUNC(sub_83177FD0);
PPC_FUNC_IMPL(__imp__sub_83177FD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16876
	ctx.r3.s64 = ctx.r11.s64 + -16876;
	// bl 0x82e73af8
	ctx.lr = 0x83177FE8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178000"))) PPC_WEAK_FUNC(sub_83178000);
PPC_FUNC_IMPL(__imp__sub_83178000) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16864
	ctx.r3.s64 = ctx.r11.s64 + -16864;
	// bl 0x82e73af8
	ctx.lr = 0x83178018;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178030"))) PPC_WEAK_FUNC(sub_83178030);
PPC_FUNC_IMPL(__imp__sub_83178030) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16848
	ctx.r3.s64 = ctx.r11.s64 + -16848;
	// bl 0x82e73af8
	ctx.lr = 0x83178048;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178060"))) PPC_WEAK_FUNC(sub_83178060);
PPC_FUNC_IMPL(__imp__sub_83178060) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16832
	ctx.r3.s64 = ctx.r11.s64 + -16832;
	// bl 0x82e73af8
	ctx.lr = 0x83178078;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178090"))) PPC_WEAK_FUNC(sub_83178090);
PPC_FUNC_IMPL(__imp__sub_83178090) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16808
	ctx.r3.s64 = ctx.r11.s64 + -16808;
	// bl 0x82e73af8
	ctx.lr = 0x831780A8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831780C0"))) PPC_WEAK_FUNC(sub_831780C0);
PPC_FUNC_IMPL(__imp__sub_831780C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16780
	ctx.r3.s64 = ctx.r11.s64 + -16780;
	// bl 0x82e73af8
	ctx.lr = 0x831780D8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831780F0"))) PPC_WEAK_FUNC(sub_831780F0);
PPC_FUNC_IMPL(__imp__sub_831780F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16752
	ctx.r3.s64 = ctx.r11.s64 + -16752;
	// bl 0x82e73af8
	ctx.lr = 0x83178108;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178120"))) PPC_WEAK_FUNC(sub_83178120);
PPC_FUNC_IMPL(__imp__sub_83178120) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16724
	ctx.r3.s64 = ctx.r11.s64 + -16724;
	// bl 0x82e73af8
	ctx.lr = 0x83178138;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178150"))) PPC_WEAK_FUNC(sub_83178150);
PPC_FUNC_IMPL(__imp__sub_83178150) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16700
	ctx.r3.s64 = ctx.r11.s64 + -16700;
	// bl 0x82e73af8
	ctx.lr = 0x83178168;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20032, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178180"))) PPC_WEAK_FUNC(sub_83178180);
PPC_FUNC_IMPL(__imp__sub_83178180) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16680
	ctx.r3.s64 = ctx.r11.s64 + -16680;
	// bl 0x82e73af8
	ctx.lr = 0x83178198;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831781B0"))) PPC_WEAK_FUNC(sub_831781B0);
PPC_FUNC_IMPL(__imp__sub_831781B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16656
	ctx.r3.s64 = ctx.r11.s64 + -16656;
	// bl 0x82e73af8
	ctx.lr = 0x831781C8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831781E0"))) PPC_WEAK_FUNC(sub_831781E0);
PPC_FUNC_IMPL(__imp__sub_831781E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16644
	ctx.r3.s64 = ctx.r11.s64 + -16644;
	// bl 0x82e73af8
	ctx.lr = 0x831781F8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178210"))) PPC_WEAK_FUNC(sub_83178210);
PPC_FUNC_IMPL(__imp__sub_83178210) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16632
	ctx.r3.s64 = ctx.r11.s64 + -16632;
	// bl 0x82e73ab0
	ctx.lr = 0x83178228;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178240"))) PPC_WEAK_FUNC(sub_83178240);
PPC_FUNC_IMPL(__imp__sub_83178240) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16612
	ctx.r3.s64 = ctx.r11.s64 + -16612;
	// bl 0x82e73ab0
	ctx.lr = 0x83178258;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178270"))) PPC_WEAK_FUNC(sub_83178270);
PPC_FUNC_IMPL(__imp__sub_83178270) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16592
	ctx.r3.s64 = ctx.r11.s64 + -16592;
	// bl 0x82e73ab0
	ctx.lr = 0x83178288;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20040(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20040, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831782A0"))) PPC_WEAK_FUNC(sub_831782A0);
PPC_FUNC_IMPL(__imp__sub_831782A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16572
	ctx.r3.s64 = ctx.r11.s64 + -16572;
	// bl 0x82e73ab0
	ctx.lr = 0x831782B8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831782D0"))) PPC_WEAK_FUNC(sub_831782D0);
PPC_FUNC_IMPL(__imp__sub_831782D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16552
	ctx.r3.s64 = ctx.r11.s64 + -16552;
	// bl 0x82e73ab0
	ctx.lr = 0x831782E8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178300"))) PPC_WEAK_FUNC(sub_83178300);
PPC_FUNC_IMPL(__imp__sub_83178300) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16528
	ctx.r3.s64 = ctx.r11.s64 + -16528;
	// bl 0x82e73ab0
	ctx.lr = 0x83178318;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178330"))) PPC_WEAK_FUNC(sub_83178330);
PPC_FUNC_IMPL(__imp__sub_83178330) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16504
	ctx.r3.s64 = ctx.r11.s64 + -16504;
	// bl 0x82e73ab0
	ctx.lr = 0x83178348;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20832(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178360"))) PPC_WEAK_FUNC(sub_83178360);
PPC_FUNC_IMPL(__imp__sub_83178360) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16480
	ctx.r3.s64 = ctx.r11.s64 + -16480;
	// bl 0x82e73ab0
	ctx.lr = 0x83178378;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178390"))) PPC_WEAK_FUNC(sub_83178390);
PPC_FUNC_IMPL(__imp__sub_83178390) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16452
	ctx.r3.s64 = ctx.r11.s64 + -16452;
	// bl 0x82e73ab0
	ctx.lr = 0x831783A8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20996, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831783C0"))) PPC_WEAK_FUNC(sub_831783C0);
PPC_FUNC_IMPL(__imp__sub_831783C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16428
	ctx.r3.s64 = ctx.r11.s64 + -16428;
	// bl 0x82e73ab0
	ctx.lr = 0x831783D8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831783F0"))) PPC_WEAK_FUNC(sub_831783F0);
PPC_FUNC_IMPL(__imp__sub_831783F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16400
	ctx.r3.s64 = ctx.r11.s64 + -16400;
	// bl 0x82e73ab0
	ctx.lr = 0x83178408;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21076, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178420"))) PPC_WEAK_FUNC(sub_83178420);
PPC_FUNC_IMPL(__imp__sub_83178420) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16376
	ctx.r3.s64 = ctx.r11.s64 + -16376;
	// bl 0x82e73ab0
	ctx.lr = 0x83178438;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178450"))) PPC_WEAK_FUNC(sub_83178450);
PPC_FUNC_IMPL(__imp__sub_83178450) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16356
	ctx.r3.s64 = ctx.r11.s64 + -16356;
	// bl 0x82e73ab0
	ctx.lr = 0x83178468;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178480"))) PPC_WEAK_FUNC(sub_83178480);
PPC_FUNC_IMPL(__imp__sub_83178480) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16332
	ctx.r3.s64 = ctx.r11.s64 + -16332;
	// bl 0x82e73ab0
	ctx.lr = 0x83178498;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831784B0"))) PPC_WEAK_FUNC(sub_831784B0);
PPC_FUNC_IMPL(__imp__sub_831784B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16312
	ctx.r3.s64 = ctx.r11.s64 + -16312;
	// bl 0x82e73ab0
	ctx.lr = 0x831784C8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20236, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831784E0"))) PPC_WEAK_FUNC(sub_831784E0);
PPC_FUNC_IMPL(__imp__sub_831784E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16292
	ctx.r3.s64 = ctx.r11.s64 + -16292;
	// bl 0x82e73ab0
	ctx.lr = 0x831784F8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178510"))) PPC_WEAK_FUNC(sub_83178510);
PPC_FUNC_IMPL(__imp__sub_83178510) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16268
	ctx.r3.s64 = ctx.r11.s64 + -16268;
	// bl 0x82e73ab0
	ctx.lr = 0x83178528;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178540"))) PPC_WEAK_FUNC(sub_83178540);
PPC_FUNC_IMPL(__imp__sub_83178540) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16244
	ctx.r3.s64 = ctx.r11.s64 + -16244;
	// bl 0x82e73ab0
	ctx.lr = 0x83178558;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178570"))) PPC_WEAK_FUNC(sub_83178570);
PPC_FUNC_IMPL(__imp__sub_83178570) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16224
	ctx.r3.s64 = ctx.r11.s64 + -16224;
	// bl 0x82e73ab0
	ctx.lr = 0x83178588;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831785A0"))) PPC_WEAK_FUNC(sub_831785A0);
PPC_FUNC_IMPL(__imp__sub_831785A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16200
	ctx.r3.s64 = ctx.r11.s64 + -16200;
	// bl 0x82e73ab0
	ctx.lr = 0x831785B8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831785D0"))) PPC_WEAK_FUNC(sub_831785D0);
PPC_FUNC_IMPL(__imp__sub_831785D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16180
	ctx.r3.s64 = ctx.r11.s64 + -16180;
	// bl 0x82e73ab0
	ctx.lr = 0x831785E8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178600"))) PPC_WEAK_FUNC(sub_83178600);
PPC_FUNC_IMPL(__imp__sub_83178600) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16156
	ctx.r3.s64 = ctx.r11.s64 + -16156;
	// bl 0x82e73ab0
	ctx.lr = 0x83178618;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178630"))) PPC_WEAK_FUNC(sub_83178630);
PPC_FUNC_IMPL(__imp__sub_83178630) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16132
	ctx.r3.s64 = ctx.r11.s64 + -16132;
	// bl 0x82e73af8
	ctx.lr = 0x83178648;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178660"))) PPC_WEAK_FUNC(sub_83178660);
PPC_FUNC_IMPL(__imp__sub_83178660) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16120
	ctx.r3.s64 = ctx.r11.s64 + -16120;
	// bl 0x82e73af8
	ctx.lr = 0x83178678;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178690"))) PPC_WEAK_FUNC(sub_83178690);
PPC_FUNC_IMPL(__imp__sub_83178690) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16108
	ctx.r3.s64 = ctx.r11.s64 + -16108;
	// bl 0x82e73af8
	ctx.lr = 0x831786A8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831786C0"))) PPC_WEAK_FUNC(sub_831786C0);
PPC_FUNC_IMPL(__imp__sub_831786C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16100
	ctx.r3.s64 = ctx.r11.s64 + -16100;
	// bl 0x82e73af8
	ctx.lr = 0x831786D8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831786F0"))) PPC_WEAK_FUNC(sub_831786F0);
PPC_FUNC_IMPL(__imp__sub_831786F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31516
	ctx.r3.s64 = ctx.r11.s64 + -31516;
	// bl 0x82e73af8
	ctx.lr = 0x83178708;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178720"))) PPC_WEAK_FUNC(sub_83178720);
PPC_FUNC_IMPL(__imp__sub_83178720) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31528
	ctx.r3.s64 = ctx.r11.s64 + -31528;
	// bl 0x82e73af8
	ctx.lr = 0x83178738;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178750"))) PPC_WEAK_FUNC(sub_83178750);
PPC_FUNC_IMPL(__imp__sub_83178750) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16092
	ctx.r3.s64 = ctx.r11.s64 + -16092;
	// bl 0x82e73af8
	ctx.lr = 0x83178768;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178780"))) PPC_WEAK_FUNC(sub_83178780);
PPC_FUNC_IMPL(__imp__sub_83178780) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16076
	ctx.r3.s64 = ctx.r11.s64 + -16076;
	// bl 0x82e73af8
	ctx.lr = 0x83178798;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831787B0"))) PPC_WEAK_FUNC(sub_831787B0);
PPC_FUNC_IMPL(__imp__sub_831787B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16064
	ctx.r3.s64 = ctx.r11.s64 + -16064;
	// bl 0x82e73af8
	ctx.lr = 0x831787C8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831787E0"))) PPC_WEAK_FUNC(sub_831787E0);
PPC_FUNC_IMPL(__imp__sub_831787E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16048
	ctx.r3.s64 = ctx.r11.s64 + -16048;
	// bl 0x82e73af8
	ctx.lr = 0x831787F8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178810"))) PPC_WEAK_FUNC(sub_83178810);
PPC_FUNC_IMPL(__imp__sub_83178810) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16036
	ctx.r3.s64 = ctx.r11.s64 + -16036;
	// bl 0x82e73af8
	ctx.lr = 0x83178828;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178840"))) PPC_WEAK_FUNC(sub_83178840);
PPC_FUNC_IMPL(__imp__sub_83178840) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16024
	ctx.r3.s64 = ctx.r11.s64 + -16024;
	// bl 0x82e73af8
	ctx.lr = 0x83178858;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178870"))) PPC_WEAK_FUNC(sub_83178870);
PPC_FUNC_IMPL(__imp__sub_83178870) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16012
	ctx.r3.s64 = ctx.r11.s64 + -16012;
	// bl 0x82e73af8
	ctx.lr = 0x83178888;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,20968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831788A0"))) PPC_WEAK_FUNC(sub_831788A0);
PPC_FUNC_IMPL(__imp__sub_831788A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15992
	ctx.r3.s64 = ctx.r11.s64 + -15992;
	// bl 0x82e73af8
	ctx.lr = 0x831788B8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831788D0"))) PPC_WEAK_FUNC(sub_831788D0);
PPC_FUNC_IMPL(__imp__sub_831788D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,20468
	ctx.r3.s64 = ctx.r11.s64 + 20468;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82526128
	ctx.lr = 0x831788F0;
	sub_82526128(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9536
	ctx.r3.s64 = ctx.r11.s64 + -9536;
	// bl 0x82a7e6b0
	ctx.lr = 0x831788FC;
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

__attribute__((alias("__imp__sub_83178910"))) PPC_WEAK_FUNC(sub_83178910);
PPC_FUNC_IMPL(__imp__sub_83178910) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,21312
	ctx.r30.s64 = ctx.r31.s64 + 21312;
	// addi r4,r11,-15972
	ctx.r4.s64 = ctx.r11.s64 + -15972;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317893C;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-9832
	ctx.r3.s64 = ctx.r9.s64 + -9832;
	// lfs f0,-32368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32368);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,21312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21312, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83178960;
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

__attribute__((alias("__imp__sub_83178978"))) PPC_WEAK_FUNC(sub_83178978);
PPC_FUNC_IMPL(__imp__sub_83178978) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,21256
	ctx.r30.s64 = ctx.r31.s64 + 21256;
	// addi r4,r11,-15952
	ctx.r4.s64 = ctx.r11.s64 + -15952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831789A4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-9808
	ctx.r3.s64 = ctx.r9.s64 + -9808;
	// lfs f0,32544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32544);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,21256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21256, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831789C8;
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

__attribute__((alias("__imp__sub_831789E0"))) PPC_WEAK_FUNC(sub_831789E0);
PPC_FUNC_IMPL(__imp__sub_831789E0) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,20836
	ctx.r30.s64 = ctx.r31.s64 + 20836;
	// addi r4,r11,-15924
	ctx.r4.s64 = ctx.r11.s64 + -15924;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83178A0C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-9784
	ctx.r3.s64 = ctx.r9.s64 + -9784;
	// lfs f0,3164(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3164);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,20836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20836, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83178A30;
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

__attribute__((alias("__imp__sub_83178A48"))) PPC_WEAK_FUNC(sub_83178A48);
PPC_FUNC_IMPL(__imp__sub_83178A48) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,19920
	ctx.r30.s64 = ctx.r31.s64 + 19920;
	// addi r4,r11,-15900
	ctx.r4.s64 = ctx.r11.s64 + -15900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83178A74;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-9760
	ctx.r3.s64 = ctx.r9.s64 + -9760;
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,19920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19920, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83178A98;
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

__attribute__((alias("__imp__sub_83178AB0"))) PPC_WEAK_FUNC(sub_83178AB0);
PPC_FUNC_IMPL(__imp__sub_83178AB0) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,19932
	ctx.r30.s64 = ctx.r31.s64 + 19932;
	// addi r4,r11,-15872
	ctx.r4.s64 = ctx.r11.s64 + -15872;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83178ADC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-9736
	ctx.r3.s64 = ctx.r9.s64 + -9736;
	// lfs f0,3220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3220);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,19932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19932, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83178B00;
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

__attribute__((alias("__imp__sub_83178B18"))) PPC_WEAK_FUNC(sub_83178B18);
PPC_FUNC_IMPL(__imp__sub_83178B18) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,20948
	ctx.r30.s64 = ctx.r31.s64 + 20948;
	// addi r4,r11,-15852
	ctx.r4.s64 = ctx.r11.s64 + -15852;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83178B44;
	sub_82C07410(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-9712
	ctx.r3.s64 = ctx.r9.s64 + -9712;
	// lfs f0,10328(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10328);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,20948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20948, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83178B68;
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

__attribute__((alias("__imp__sub_83178B80"))) PPC_WEAK_FUNC(sub_83178B80);
PPC_FUNC_IMPL(__imp__sub_83178B80) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,21096
	ctx.r30.s64 = ctx.r31.s64 + 21096;
	// addi r4,r11,-15832
	ctx.r4.s64 = ctx.r11.s64 + -15832;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83178BAC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-9688
	ctx.r3.s64 = ctx.r9.s64 + -9688;
	// lfs f0,3220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3220);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,21096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21096, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83178BD0;
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

__attribute__((alias("__imp__sub_83178BE8"))) PPC_WEAK_FUNC(sub_83178BE8);
PPC_FUNC_IMPL(__imp__sub_83178BE8) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,20984
	ctx.r30.s64 = ctx.r31.s64 + 20984;
	// addi r4,r11,-15808
	ctx.r4.s64 = ctx.r11.s64 + -15808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83178C14;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-9664
	ctx.r3.s64 = ctx.r9.s64 + -9664;
	// lfs f0,3208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,20984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20984, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83178C38;
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

__attribute__((alias("__imp__sub_83178C50"))) PPC_WEAK_FUNC(sub_83178C50);
PPC_FUNC_IMPL(__imp__sub_83178C50) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,21124
	ctx.r30.s64 = ctx.r31.s64 + 21124;
	// addi r4,r11,-15784
	ctx.r4.s64 = ctx.r11.s64 + -15784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83178C7C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-9640
	ctx.r3.s64 = ctx.r9.s64 + -9640;
	// lfs f0,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,21124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21124, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x83178CA0;
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

__attribute__((alias("__imp__sub_83178CB8"))) PPC_WEAK_FUNC(sub_83178CB8);
PPC_FUNC_IMPL(__imp__sub_83178CB8) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,21012
	ctx.r30.s64 = ctx.r31.s64 + 21012;
	// addi r4,r11,-15752
	ctx.r4.s64 = ctx.r11.s64 + -15752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83178CE4;
	sub_82C07410(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,-15756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15756);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-3692(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3692);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-9616
	ctx.r3.s64 = ctx.r7.s64 + -9616;
	// lfs f12,-15760(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15760);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,21012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21012, ctx.r11.u32);
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
	ctx.lr = 0x83178D24;
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

__attribute__((alias("__imp__sub_83178D40"))) PPC_WEAK_FUNC(sub_83178D40);
PPC_FUNC_IMPL(__imp__sub_83178D40) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,21276
	ctx.r30.s64 = ctx.r31.s64 + 21276;
	// addi r4,r11,-15712
	ctx.r4.s64 = ctx.r11.s64 + -15712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83178D6C;
	sub_82C07410(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
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
	// lfs f13,-15716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15716);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-9592
	ctx.r3.s64 = ctx.r7.s64 + -9592;
	// lfs f12,3368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3368);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,21276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21276, ctx.r11.u32);
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
	ctx.lr = 0x83178DAC;
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

__attribute__((alias("__imp__sub_83178DC8"))) PPC_WEAK_FUNC(sub_83178DC8);
PPC_FUNC_IMPL(__imp__sub_83178DC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,21824
	ctx.r3.s64 = ctx.r11.s64 + 21824;
	// bl 0x82e73af8
	ctx.lr = 0x83178DE0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178DF8"))) PPC_WEAK_FUNC(sub_83178DF8);
PPC_FUNC_IMPL(__imp__sub_83178DF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15676
	ctx.r3.s64 = ctx.r11.s64 + -15676;
	// bl 0x82e73af8
	ctx.lr = 0x83178E10;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178E28"))) PPC_WEAK_FUNC(sub_83178E28);
PPC_FUNC_IMPL(__imp__sub_83178E28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15664
	ctx.r3.s64 = ctx.r11.s64 + -15664;
	// bl 0x82e73af8
	ctx.lr = 0x83178E40;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178E58"))) PPC_WEAK_FUNC(sub_83178E58);
PPC_FUNC_IMPL(__imp__sub_83178E58) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-15596
	ctx.r3.s64 = ctx.r11.s64 + -15596;
	// bl 0x82e73af8
	ctx.lr = 0x83178E74;
	sub_82E73AF8(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r31,r10,21456
	ctx.r31.s64 = ctx.r10.s64 + 21456;
	// addi r3,r9,-15608
	ctx.r3.s64 = ctx.r9.s64 + -15608;
	// stw r11,21456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21456, ctx.r11.u32);
	// bl 0x82e73af8
	ctx.lr = 0x83178E90;
	sub_82E73AF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-15620
	ctx.r3.s64 = ctx.r11.s64 + -15620;
	// bl 0x82e73af8
	ctx.lr = 0x83178EA0;
	sub_82E73AF8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-15632
	ctx.r3.s64 = ctx.r11.s64 + -15632;
	// bl 0x82e73af8
	ctx.lr = 0x83178EB0;
	sub_82E73AF8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-15644
	ctx.r3.s64 = ctx.r11.s64 + -15644;
	// bl 0x82e73af8
	ctx.lr = 0x83178EC0;
	sub_82E73AF8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83178ED8"))) PPC_WEAK_FUNC(sub_83178ED8);
PPC_FUNC_IMPL(__imp__sub_83178ED8) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-15536
	ctx.r3.s64 = ctx.r11.s64 + -15536;
	// bl 0x82e73af8
	ctx.lr = 0x83178EF4;
	sub_82E73AF8(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r31,r10,21436
	ctx.r31.s64 = ctx.r10.s64 + 21436;
	// addi r3,r9,-15548
	ctx.r3.s64 = ctx.r9.s64 + -15548;
	// stw r11,21436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21436, ctx.r11.u32);
	// bl 0x82e73af8
	ctx.lr = 0x83178F10;
	sub_82E73AF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-15560
	ctx.r3.s64 = ctx.r11.s64 + -15560;
	// bl 0x82e73af8
	ctx.lr = 0x83178F20;
	sub_82E73AF8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-15572
	ctx.r3.s64 = ctx.r11.s64 + -15572;
	// bl 0x82e73af8
	ctx.lr = 0x83178F30;
	sub_82E73AF8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-15584
	ctx.r3.s64 = ctx.r11.s64 + -15584;
	// bl 0x82e73af8
	ctx.lr = 0x83178F40;
	sub_82E73AF8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83178F58"))) PPC_WEAK_FUNC(sub_83178F58);
PPC_FUNC_IMPL(__imp__sub_83178F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21888
	ctx.r9.s64 = ctx.r11.s64 + 21888;
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

__attribute__((alias("__imp__sub_83178F88"))) PPC_WEAK_FUNC(sub_83178F88);
PPC_FUNC_IMPL(__imp__sub_83178F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83178FB8"))) PPC_WEAK_FUNC(sub_83178FB8);
PPC_FUNC_IMPL(__imp__sub_83178FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21664
	ctx.r9.s64 = ctx.r11.s64 + 21664;
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

__attribute__((alias("__imp__sub_83178FE8"))) PPC_WEAK_FUNC(sub_83178FE8);
PPC_FUNC_IMPL(__imp__sub_83178FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,21760
	ctx.r9.s64 = ctx.r11.s64 + 21760;
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

__attribute__((alias("__imp__sub_83179018"))) PPC_WEAK_FUNC(sub_83179018);
PPC_FUNC_IMPL(__imp__sub_83179018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,21728
	ctx.r10.s64 = ctx.r10.s64 + 21728;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179038"))) PPC_WEAK_FUNC(sub_83179038);
PPC_FUNC_IMPL(__imp__sub_83179038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,21632
	ctx.r10.s64 = ctx.r10.s64 + 21632;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179058"))) PPC_WEAK_FUNC(sub_83179058);
PPC_FUNC_IMPL(__imp__sub_83179058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9464
	ctx.r3.s64 = ctx.r11.s64 + -9464;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83179068"))) PPC_WEAK_FUNC(sub_83179068);
PPC_FUNC_IMPL(__imp__sub_83179068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,21856
	ctx.r10.s64 = ctx.r10.s64 + 21856;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179088"))) PPC_WEAK_FUNC(sub_83179088);
PPC_FUNC_IMPL(__imp__sub_83179088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,21984
	ctx.r3.s64 = ctx.r11.s64 + 21984;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83179098"))) PPC_WEAK_FUNC(sub_83179098);
PPC_FUNC_IMPL(__imp__sub_83179098) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6368
	ctx.r3.s64 = ctx.r11.s64 + -6368;
	// bl 0x82e73af8
	ctx.lr = 0x831790B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21828(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21828, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831790C8"))) PPC_WEAK_FUNC(sub_831790C8);
PPC_FUNC_IMPL(__imp__sub_831790C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6352
	ctx.r3.s64 = ctx.r11.s64 + -6352;
	// bl 0x82e73af8
	ctx.lr = 0x831790E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831790F8"))) PPC_WEAK_FUNC(sub_831790F8);
PPC_FUNC_IMPL(__imp__sub_831790F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,21368
	ctx.r3.s64 = ctx.r11.s64 + 21368;
	// bl 0x82e73af8
	ctx.lr = 0x83179110;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179128"))) PPC_WEAK_FUNC(sub_83179128);
PPC_FUNC_IMPL(__imp__sub_83179128) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6336
	ctx.r3.s64 = ctx.r11.s64 + -6336;
	// bl 0x82e73ab0
	ctx.lr = 0x83179140;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21820, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179158"))) PPC_WEAK_FUNC(sub_83179158);
PPC_FUNC_IMPL(__imp__sub_83179158) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6316
	ctx.r3.s64 = ctx.r11.s64 + -6316;
	// bl 0x82e73ab0
	ctx.lr = 0x83179170;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22060, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179188"))) PPC_WEAK_FUNC(sub_83179188);
PPC_FUNC_IMPL(__imp__sub_83179188) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6296
	ctx.r3.s64 = ctx.r11.s64 + -6296;
	// bl 0x82e73ab0
	ctx.lr = 0x831791A0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831791B8"))) PPC_WEAK_FUNC(sub_831791B8);
PPC_FUNC_IMPL(__imp__sub_831791B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6276
	ctx.r3.s64 = ctx.r11.s64 + -6276;
	// bl 0x82e73ab0
	ctx.lr = 0x831791D0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22068, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831791E8"))) PPC_WEAK_FUNC(sub_831791E8);
PPC_FUNC_IMPL(__imp__sub_831791E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6260
	ctx.r3.s64 = ctx.r11.s64 + -6260;
	// bl 0x82e73ab0
	ctx.lr = 0x83179200;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179218"))) PPC_WEAK_FUNC(sub_83179218);
PPC_FUNC_IMPL(__imp__sub_83179218) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6236
	ctx.r3.s64 = ctx.r11.s64 + -6236;
	// bl 0x82e73ab0
	ctx.lr = 0x83179230;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179248"))) PPC_WEAK_FUNC(sub_83179248);
PPC_FUNC_IMPL(__imp__sub_83179248) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83179260;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179278"))) PPC_WEAK_FUNC(sub_83179278);
PPC_FUNC_IMPL(__imp__sub_83179278) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6212
	ctx.r3.s64 = ctx.r11.s64 + -6212;
	// bl 0x82e73ab0
	ctx.lr = 0x83179290;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831792A8"))) PPC_WEAK_FUNC(sub_831792A8);
PPC_FUNC_IMPL(__imp__sub_831792A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6188
	ctx.r3.s64 = ctx.r11.s64 + -6188;
	// bl 0x82e73ab0
	ctx.lr = 0x831792C0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21876(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831792D8"))) PPC_WEAK_FUNC(sub_831792D8);
PPC_FUNC_IMPL(__imp__sub_831792D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6164
	ctx.r3.s64 = ctx.r11.s64 + -6164;
	// bl 0x82e73ab0
	ctx.lr = 0x831792F0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179308"))) PPC_WEAK_FUNC(sub_83179308);
PPC_FUNC_IMPL(__imp__sub_83179308) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6148
	ctx.r3.s64 = ctx.r11.s64 + -6148;
	// bl 0x82e73ab0
	ctx.lr = 0x83179320;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21920, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179338"))) PPC_WEAK_FUNC(sub_83179338);
PPC_FUNC_IMPL(__imp__sub_83179338) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6128
	ctx.r3.s64 = ctx.r11.s64 + -6128;
	// bl 0x82e73ab0
	ctx.lr = 0x83179350;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179368"))) PPC_WEAK_FUNC(sub_83179368);
PPC_FUNC_IMPL(__imp__sub_83179368) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-25108
	ctx.r3.s64 = ctx.r11.s64 + -25108;
	// bl 0x82e73ab0
	ctx.lr = 0x83179380;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179398"))) PPC_WEAK_FUNC(sub_83179398);
PPC_FUNC_IMPL(__imp__sub_83179398) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6116
	ctx.r3.s64 = ctx.r11.s64 + -6116;
	// bl 0x82e73ab0
	ctx.lr = 0x831793B0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831793C8"))) PPC_WEAK_FUNC(sub_831793C8);
PPC_FUNC_IMPL(__imp__sub_831793C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6096
	ctx.r3.s64 = ctx.r11.s64 + -6096;
	// bl 0x82e73ab0
	ctx.lr = 0x831793E0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21924(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21924, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831793F8"))) PPC_WEAK_FUNC(sub_831793F8);
PPC_FUNC_IMPL(__imp__sub_831793F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6092
	ctx.r3.s64 = ctx.r11.s64 + 6092;
	// bl 0x82e73ab0
	ctx.lr = 0x83179410;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22072, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179428"))) PPC_WEAK_FUNC(sub_83179428);
PPC_FUNC_IMPL(__imp__sub_83179428) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6068
	ctx.r3.s64 = ctx.r11.s64 + -6068;
	// bl 0x82e73af8
	ctx.lr = 0x83179440;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21880(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179458"))) PPC_WEAK_FUNC(sub_83179458);
PPC_FUNC_IMPL(__imp__sub_83179458) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6044
	ctx.r3.s64 = ctx.r11.s64 + -6044;
	// bl 0x82e73af8
	ctx.lr = 0x83179470;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179488"))) PPC_WEAK_FUNC(sub_83179488);
PPC_FUNC_IMPL(__imp__sub_83179488) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6024
	ctx.r3.s64 = ctx.r11.s64 + -6024;
	// bl 0x82e73af8
	ctx.lr = 0x831794A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831794B8"))) PPC_WEAK_FUNC(sub_831794B8);
PPC_FUNC_IMPL(__imp__sub_831794B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6000
	ctx.r3.s64 = ctx.r11.s64 + -6000;
	// bl 0x82e73af8
	ctx.lr = 0x831794D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831794E8"))) PPC_WEAK_FUNC(sub_831794E8);
PPC_FUNC_IMPL(__imp__sub_831794E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5984
	ctx.r3.s64 = ctx.r11.s64 + -5984;
	// bl 0x82e73af8
	ctx.lr = 0x83179500;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179518"))) PPC_WEAK_FUNC(sub_83179518);
PPC_FUNC_IMPL(__imp__sub_83179518) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5968
	ctx.r3.s64 = ctx.r11.s64 + -5968;
	// bl 0x82e73af8
	ctx.lr = 0x83179530;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21824, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179548"))) PPC_WEAK_FUNC(sub_83179548);
PPC_FUNC_IMPL(__imp__sub_83179548) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5948
	ctx.r3.s64 = ctx.r11.s64 + -5948;
	// bl 0x82e73af8
	ctx.lr = 0x83179560;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21808, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179578"))) PPC_WEAK_FUNC(sub_83179578);
PPC_FUNC_IMPL(__imp__sub_83179578) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7364
	ctx.r3.s64 = ctx.r11.s64 + 7364;
	// bl 0x82e73af8
	ctx.lr = 0x83179590;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21700, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831795A8"))) PPC_WEAK_FUNC(sub_831795A8);
PPC_FUNC_IMPL(__imp__sub_831795A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7384
	ctx.r3.s64 = ctx.r11.s64 + 7384;
	// bl 0x82e73af8
	ctx.lr = 0x831795C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831795D8"))) PPC_WEAK_FUNC(sub_831795D8);
PPC_FUNC_IMPL(__imp__sub_831795D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5928
	ctx.r3.s64 = ctx.r11.s64 + -5928;
	// bl 0x82e73af8
	ctx.lr = 0x831795F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179608"))) PPC_WEAK_FUNC(sub_83179608);
PPC_FUNC_IMPL(__imp__sub_83179608) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5916
	ctx.r3.s64 = ctx.r11.s64 + -5916;
	// bl 0x82e73af8
	ctx.lr = 0x83179620;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179638"))) PPC_WEAK_FUNC(sub_83179638);
PPC_FUNC_IMPL(__imp__sub_83179638) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17368
	ctx.r3.s64 = ctx.r11.s64 + -17368;
	// bl 0x82e73af8
	ctx.lr = 0x83179650;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179668"))) PPC_WEAK_FUNC(sub_83179668);
PPC_FUNC_IMPL(__imp__sub_83179668) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17344
	ctx.r3.s64 = ctx.r11.s64 + -17344;
	// bl 0x82e73af8
	ctx.lr = 0x83179680;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179698"))) PPC_WEAK_FUNC(sub_83179698);
PPC_FUNC_IMPL(__imp__sub_83179698) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17320
	ctx.r3.s64 = ctx.r11.s64 + -17320;
	// bl 0x82e73af8
	ctx.lr = 0x831796B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21928, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831796C8"))) PPC_WEAK_FUNC(sub_831796C8);
PPC_FUNC_IMPL(__imp__sub_831796C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17304
	ctx.r3.s64 = ctx.r11.s64 + -17304;
	// bl 0x82e73af8
	ctx.lr = 0x831796E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21844(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21844, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831796F8"))) PPC_WEAK_FUNC(sub_831796F8);
PPC_FUNC_IMPL(__imp__sub_831796F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5904
	ctx.r3.s64 = ctx.r11.s64 + -5904;
	// bl 0x82e73af8
	ctx.lr = 0x83179710;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21624, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179728"))) PPC_WEAK_FUNC(sub_83179728);
PPC_FUNC_IMPL(__imp__sub_83179728) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5888
	ctx.r3.s64 = ctx.r11.s64 + -5888;
	// bl 0x82e73af8
	ctx.lr = 0x83179740;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179758"))) PPC_WEAK_FUNC(sub_83179758);
PPC_FUNC_IMPL(__imp__sub_83179758) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5872
	ctx.r3.s64 = ctx.r11.s64 + -5872;
	// bl 0x82e73af8
	ctx.lr = 0x83179770;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179788"))) PPC_WEAK_FUNC(sub_83179788);
PPC_FUNC_IMPL(__imp__sub_83179788) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5856
	ctx.r3.s64 = ctx.r11.s64 + -5856;
	// bl 0x82e73af8
	ctx.lr = 0x831797A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831797B8"))) PPC_WEAK_FUNC(sub_831797B8);
PPC_FUNC_IMPL(__imp__sub_831797B8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26528
	ctx.r3.s64 = ctx.r11.s64 + 26528;
	// bl 0x82e73ab0
	ctx.lr = 0x831797D4;
	sub_82E73AB0(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r31,r10,22092
	ctx.r31.s64 = ctx.r10.s64 + 22092;
	// addi r3,r9,-5644
	ctx.r3.s64 = ctx.r9.s64 + -5644;
	// stw r11,22092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22092, ctx.r11.u32);
	// bl 0x82e73ab0
	ctx.lr = 0x831797F0;
	sub_82E73AB0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21800
	ctx.r3.s64 = ctx.r11.s64 + 21800;
	// bl 0x82e73af8
	ctx.lr = 0x83179800;
	sub_82E73AF8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21808
	ctx.r3.s64 = ctx.r11.s64 + 21808;
	// bl 0x82e73af8
	ctx.lr = 0x83179810;
	sub_82E73AF8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-5668
	ctx.r3.s64 = ctx.r11.s64 + -5668;
	// bl 0x82e73af8
	ctx.lr = 0x83179820;
	sub_82E73AF8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-5688
	ctx.r3.s64 = ctx.r11.s64 + -5688;
	// bl 0x82e73af8
	ctx.lr = 0x83179830;
	sub_82E73AF8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-5716
	ctx.r3.s64 = ctx.r11.s64 + -5716;
	// bl 0x82e73af8
	ctx.lr = 0x83179840;
	sub_82E73AF8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-5740
	ctx.r3.s64 = ctx.r11.s64 + -5740;
	// bl 0x82e73af8
	ctx.lr = 0x83179850;
	sub_82E73AF8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-5776
	ctx.r3.s64 = ctx.r11.s64 + -5776;
	// bl 0x82e73af8
	ctx.lr = 0x83179860;
	sub_82E73AF8(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-5800
	ctx.r3.s64 = ctx.r11.s64 + -5800;
	// bl 0x82e73ab0
	ctx.lr = 0x83179870;
	sub_82E73AB0(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-26028
	ctx.r3.s64 = ctx.r11.s64 + -26028;
	// bl 0x82e73ab0
	ctx.lr = 0x83179880;
	sub_82E73AB0(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-5820
	ctx.r3.s64 = ctx.r11.s64 + -5820;
	// bl 0x82e73ab0
	ctx.lr = 0x83179890;
	sub_82E73AB0(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-5840
	ctx.r3.s64 = ctx.r11.s64 + -5840;
	// bl 0x82e73ab0
	ctx.lr = 0x831798A0;
	sub_82E73AB0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,11220
	ctx.r3.s64 = ctx.r11.s64 + 11220;
	// bl 0x82e73ab0
	ctx.lr = 0x831798B0;
	sub_82E73AB0(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_831798C8"))) PPC_WEAK_FUNC(sub_831798C8);
PPC_FUNC_IMPL(__imp__sub_831798C8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,22872
	ctx.r3.s64 = ctx.r11.s64 + 22872;
	// bl 0x82e73af8
	ctx.lr = 0x831798E4;
	sub_82E73AF8(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r31,r10,22076
	ctx.r31.s64 = ctx.r10.s64 + 22076;
	// addi r3,r9,22884
	ctx.r3.s64 = ctx.r9.s64 + 22884;
	// stw r11,22076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22076, ctx.r11.u32);
	// bl 0x82e73af8
	ctx.lr = 0x83179900;
	sub_82E73AF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,22892
	ctx.r3.s64 = ctx.r11.s64 + 22892;
	// bl 0x82e73af8
	ctx.lr = 0x83179910;
	sub_82E73AF8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,22900
	ctx.r3.s64 = ctx.r11.s64 + 22900;
	// bl 0x82e73af8
	ctx.lr = 0x83179920;
	sub_82E73AF8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83179938"))) PPC_WEAK_FUNC(sub_83179938);
PPC_FUNC_IMPL(__imp__sub_83179938) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83179950;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21944, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179968"))) PPC_WEAK_FUNC(sub_83179968);
PPC_FUNC_IMPL(__imp__sub_83179968) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83179980;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21852(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179998"))) PPC_WEAK_FUNC(sub_83179998);
PPC_FUNC_IMPL(__imp__sub_83179998) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17076
	ctx.r3.s64 = ctx.r11.s64 + -17076;
	// bl 0x82e73af8
	ctx.lr = 0x831799B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831799C8"))) PPC_WEAK_FUNC(sub_831799C8);
PPC_FUNC_IMPL(__imp__sub_831799C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17092
	ctx.r3.s64 = ctx.r11.s64 + -17092;
	// bl 0x82e73af8
	ctx.lr = 0x831799E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831799F8"))) PPC_WEAK_FUNC(sub_831799F8);
PPC_FUNC_IMPL(__imp__sub_831799F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5620
	ctx.r3.s64 = ctx.r11.s64 + -5620;
	// bl 0x82e73af8
	ctx.lr = 0x83179A10;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179A28"))) PPC_WEAK_FUNC(sub_83179A28);
PPC_FUNC_IMPL(__imp__sub_83179A28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5604
	ctx.r3.s64 = ctx.r11.s64 + -5604;
	// bl 0x82e73af8
	ctx.lr = 0x83179A40;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21916, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179A58"))) PPC_WEAK_FUNC(sub_83179A58);
PPC_FUNC_IMPL(__imp__sub_83179A58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5588
	ctx.r3.s64 = ctx.r11.s64 + -5588;
	// bl 0x82e73af8
	ctx.lr = 0x83179A70;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21948, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179A88"))) PPC_WEAK_FUNC(sub_83179A88);
PPC_FUNC_IMPL(__imp__sub_83179A88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5572
	ctx.r3.s64 = ctx.r11.s64 + -5572;
	// bl 0x82e73af8
	ctx.lr = 0x83179AA0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21812, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179AB8"))) PPC_WEAK_FUNC(sub_83179AB8);
PPC_FUNC_IMPL(__imp__sub_83179AB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29664
	ctx.r3.s64 = ctx.r11.s64 + -29664;
	// bl 0x82e73af8
	ctx.lr = 0x83179AD0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179AE8"))) PPC_WEAK_FUNC(sub_83179AE8);
PPC_FUNC_IMPL(__imp__sub_83179AE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29680
	ctx.r3.s64 = ctx.r11.s64 + -29680;
	// bl 0x82e73af8
	ctx.lr = 0x83179B00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179B18"))) PPC_WEAK_FUNC(sub_83179B18);
PPC_FUNC_IMPL(__imp__sub_83179B18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-544
	ctx.r3.s64 = ctx.r11.s64 + -544;
	// bl 0x82e73af8
	ctx.lr = 0x83179B30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21704, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179B48"))) PPC_WEAK_FUNC(sub_83179B48);
PPC_FUNC_IMPL(__imp__sub_83179B48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14868
	ctx.r3.s64 = ctx.r11.s64 + 14868;
	// bl 0x82e73af8
	ctx.lr = 0x83179B60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179B78"))) PPC_WEAK_FUNC(sub_83179B78);
PPC_FUNC_IMPL(__imp__sub_83179B78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23208
	ctx.r3.s64 = ctx.r11.s64 + 23208;
	// bl 0x82e73af8
	ctx.lr = 0x83179B90;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21848, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179BA8"))) PPC_WEAK_FUNC(sub_83179BA8);
PPC_FUNC_IMPL(__imp__sub_83179BA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23220
	ctx.r3.s64 = ctx.r11.s64 + 23220;
	// bl 0x82e73af8
	ctx.lr = 0x83179BC0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21816, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179BD8"))) PPC_WEAK_FUNC(sub_83179BD8);
PPC_FUNC_IMPL(__imp__sub_83179BD8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83179BF0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21836(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21836, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179C08"))) PPC_WEAK_FUNC(sub_83179C08);
PPC_FUNC_IMPL(__imp__sub_83179C08) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83179C20;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179C38"))) PPC_WEAK_FUNC(sub_83179C38);
PPC_FUNC_IMPL(__imp__sub_83179C38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5556
	ctx.r3.s64 = ctx.r11.s64 + -5556;
	// bl 0x82e73af8
	ctx.lr = 0x83179C50;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179C68"))) PPC_WEAK_FUNC(sub_83179C68);
PPC_FUNC_IMPL(__imp__sub_83179C68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5544
	ctx.r3.s64 = ctx.r11.s64 + -5544;
	// bl 0x82e73af8
	ctx.lr = 0x83179C80;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21600, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179C98"))) PPC_WEAK_FUNC(sub_83179C98);
PPC_FUNC_IMPL(__imp__sub_83179C98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5532
	ctx.r3.s64 = ctx.r11.s64 + -5532;
	// bl 0x82e73af8
	ctx.lr = 0x83179CB0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21840(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21840, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179CC8"))) PPC_WEAK_FUNC(sub_83179CC8);
PPC_FUNC_IMPL(__imp__sub_83179CC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5516
	ctx.r3.s64 = ctx.r11.s64 + -5516;
	// bl 0x82e73af8
	ctx.lr = 0x83179CE0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179CF8"))) PPC_WEAK_FUNC(sub_83179CF8);
PPC_FUNC_IMPL(__imp__sub_83179CF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5500
	ctx.r3.s64 = ctx.r11.s64 + -5500;
	// bl 0x82e73af8
	ctx.lr = 0x83179D10;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21952, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179D28"))) PPC_WEAK_FUNC(sub_83179D28);
PPC_FUNC_IMPL(__imp__sub_83179D28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5492
	ctx.r3.s64 = ctx.r11.s64 + -5492;
	// bl 0x82e73af8
	ctx.lr = 0x83179D40;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179D58"))) PPC_WEAK_FUNC(sub_83179D58);
PPC_FUNC_IMPL(__imp__sub_83179D58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5484
	ctx.r3.s64 = ctx.r11.s64 + -5484;
	// bl 0x82e73af8
	ctx.lr = 0x83179D70;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22056(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22056, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179D88"))) PPC_WEAK_FUNC(sub_83179D88);
PPC_FUNC_IMPL(__imp__sub_83179D88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5476
	ctx.r3.s64 = ctx.r11.s64 + -5476;
	// bl 0x82e73af8
	ctx.lr = 0x83179DA0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179DB8"))) PPC_WEAK_FUNC(sub_83179DB8);
PPC_FUNC_IMPL(__imp__sub_83179DB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5464
	ctx.r3.s64 = ctx.r11.s64 + -5464;
	// bl 0x82e73af8
	ctx.lr = 0x83179DD0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179DE8"))) PPC_WEAK_FUNC(sub_83179DE8);
PPC_FUNC_IMPL(__imp__sub_83179DE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5444
	ctx.r3.s64 = ctx.r11.s64 + -5444;
	// bl 0x82e73af8
	ctx.lr = 0x83179E00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179E18"))) PPC_WEAK_FUNC(sub_83179E18);
PPC_FUNC_IMPL(__imp__sub_83179E18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5420
	ctx.r3.s64 = ctx.r11.s64 + -5420;
	// bl 0x82e73af8
	ctx.lr = 0x83179E30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179E48"))) PPC_WEAK_FUNC(sub_83179E48);
PPC_FUNC_IMPL(__imp__sub_83179E48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5396
	ctx.r3.s64 = ctx.r11.s64 + -5396;
	// bl 0x82e73af8
	ctx.lr = 0x83179E60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179E78"))) PPC_WEAK_FUNC(sub_83179E78);
PPC_FUNC_IMPL(__imp__sub_83179E78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5368
	ctx.r3.s64 = ctx.r11.s64 + -5368;
	// bl 0x82e73af8
	ctx.lr = 0x83179E90;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21832(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179EA8"))) PPC_WEAK_FUNC(sub_83179EA8);
PPC_FUNC_IMPL(__imp__sub_83179EA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15404
	ctx.r3.s64 = ctx.r11.s64 + -15404;
	// bl 0x82e73af8
	ctx.lr = 0x83179EC0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179ED8"))) PPC_WEAK_FUNC(sub_83179ED8);
PPC_FUNC_IMPL(__imp__sub_83179ED8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5348
	ctx.r3.s64 = ctx.r11.s64 + -5348;
	// bl 0x82e73af8
	ctx.lr = 0x83179EF0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179F08"))) PPC_WEAK_FUNC(sub_83179F08);
PPC_FUNC_IMPL(__imp__sub_83179F08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5332
	ctx.r3.s64 = ctx.r11.s64 + -5332;
	// bl 0x82e73ab0
	ctx.lr = 0x83179F20;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21940, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179F38"))) PPC_WEAK_FUNC(sub_83179F38);
PPC_FUNC_IMPL(__imp__sub_83179F38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5312
	ctx.r3.s64 = ctx.r11.s64 + -5312;
	// bl 0x82e73af8
	ctx.lr = 0x83179F50;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179F68"))) PPC_WEAK_FUNC(sub_83179F68);
PPC_FUNC_IMPL(__imp__sub_83179F68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5300
	ctx.r3.s64 = ctx.r11.s64 + -5300;
	// bl 0x82e73af8
	ctx.lr = 0x83179F80;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,21936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83179F98"))) PPC_WEAK_FUNC(sub_83179F98);
PPC_FUNC_IMPL(__imp__sub_83179F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22400
	ctx.r9.s64 = ctx.r11.s64 + 22400;
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

__attribute__((alias("__imp__sub_83179FC8"))) PPC_WEAK_FUNC(sub_83179FC8);
PPC_FUNC_IMPL(__imp__sub_83179FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22320
	ctx.r9.s64 = ctx.r11.s64 + 22320;
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

__attribute__((alias("__imp__sub_83179FF8"))) PPC_WEAK_FUNC(sub_83179FF8);
PPC_FUNC_IMPL(__imp__sub_83179FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_8317A028"))) PPC_WEAK_FUNC(sub_8317A028);
PPC_FUNC_IMPL(__imp__sub_8317A028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22304
	ctx.r9.s64 = ctx.r11.s64 + 22304;
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

__attribute__((alias("__imp__sub_8317A058"))) PPC_WEAK_FUNC(sub_8317A058);
PPC_FUNC_IMPL(__imp__sub_8317A058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,22272
	ctx.r10.s64 = ctx.r10.s64 + 22272;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A078"))) PPC_WEAK_FUNC(sub_8317A078);
PPC_FUNC_IMPL(__imp__sub_8317A078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_8317A098"))) PPC_WEAK_FUNC(sub_8317A098);
PPC_FUNC_IMPL(__imp__sub_8317A098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9424
	ctx.r3.s64 = ctx.r11.s64 + -9424;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317A0A8"))) PPC_WEAK_FUNC(sub_8317A0A8);
PPC_FUNC_IMPL(__imp__sub_8317A0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,22464
	ctx.r3.s64 = ctx.r11.s64 + 22464;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317A0B8"))) PPC_WEAK_FUNC(sub_8317A0B8);
PPC_FUNC_IMPL(__imp__sub_8317A0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,22368
	ctx.r10.s64 = ctx.r10.s64 + 22368;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A0D8"))) PPC_WEAK_FUNC(sub_8317A0D8);
PPC_FUNC_IMPL(__imp__sub_8317A0D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,4968
	ctx.r3.s64 = ctx.r11.s64 + 4968;
	// bl 0x82e73ab0
	ctx.lr = 0x8317A0F0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A108"))) PPC_WEAK_FUNC(sub_8317A108);
PPC_FUNC_IMPL(__imp__sub_8317A108) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,4988
	ctx.r3.s64 = ctx.r11.s64 + 4988;
	// bl 0x82e73ab0
	ctx.lr = 0x8317A120;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A138"))) PPC_WEAK_FUNC(sub_8317A138);
PPC_FUNC_IMPL(__imp__sub_8317A138) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8900
	ctx.r3.s64 = ctx.r11.s64 + 8900;
	// bl 0x82e73ab0
	ctx.lr = 0x8317A150;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A168"))) PPC_WEAK_FUNC(sub_8317A168);
PPC_FUNC_IMPL(__imp__sub_8317A168) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-13664
	ctx.r3.s64 = ctx.r11.s64 + -13664;
	// bl 0x82e73ab0
	ctx.lr = 0x8317A180;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A198"))) PPC_WEAK_FUNC(sub_8317A198);
PPC_FUNC_IMPL(__imp__sub_8317A198) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5008
	ctx.r3.s64 = ctx.r11.s64 + 5008;
	// bl 0x82e73ab0
	ctx.lr = 0x8317A1B0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A1C8"))) PPC_WEAK_FUNC(sub_8317A1C8);
PPC_FUNC_IMPL(__imp__sub_8317A1C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// bl 0x82e73ab0
	ctx.lr = 0x8317A1E0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A1F8"))) PPC_WEAK_FUNC(sub_8317A1F8);
PPC_FUNC_IMPL(__imp__sub_8317A1F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// bl 0x82e73af8
	ctx.lr = 0x8317A210;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A228"))) PPC_WEAK_FUNC(sub_8317A228);
PPC_FUNC_IMPL(__imp__sub_8317A228) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5072
	ctx.r3.s64 = ctx.r11.s64 + 5072;
	// bl 0x82e73af8
	ctx.lr = 0x8317A240;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A258"))) PPC_WEAK_FUNC(sub_8317A258);
PPC_FUNC_IMPL(__imp__sub_8317A258) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,21824
	ctx.r3.s64 = ctx.r11.s64 + 21824;
	// bl 0x82e73af8
	ctx.lr = 0x8317A270;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A288"))) PPC_WEAK_FUNC(sub_8317A288);
PPC_FUNC_IMPL(__imp__sub_8317A288) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5088
	ctx.r3.s64 = ctx.r11.s64 + 5088;
	// bl 0x82e73af8
	ctx.lr = 0x8317A2A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A2B8"))) PPC_WEAK_FUNC(sub_8317A2B8);
PPC_FUNC_IMPL(__imp__sub_8317A2B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-544
	ctx.r3.s64 = ctx.r11.s64 + -544;
	// bl 0x82e73af8
	ctx.lr = 0x8317A2D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A2E8"))) PPC_WEAK_FUNC(sub_8317A2E8);
PPC_FUNC_IMPL(__imp__sub_8317A2E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5100
	ctx.r3.s64 = ctx.r11.s64 + 5100;
	// bl 0x82e73af8
	ctx.lr = 0x8317A300;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A318"))) PPC_WEAK_FUNC(sub_8317A318);
PPC_FUNC_IMPL(__imp__sub_8317A318) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17092
	ctx.r3.s64 = ctx.r11.s64 + -17092;
	// bl 0x82e73af8
	ctx.lr = 0x8317A330;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A348"))) PPC_WEAK_FUNC(sub_8317A348);
PPC_FUNC_IMPL(__imp__sub_8317A348) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18956
	ctx.r3.s64 = ctx.r11.s64 + -18956;
	// bl 0x82e73af8
	ctx.lr = 0x8317A360;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A378"))) PPC_WEAK_FUNC(sub_8317A378);
PPC_FUNC_IMPL(__imp__sub_8317A378) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-18944
	ctx.r3.s64 = ctx.r11.s64 + -18944;
	// bl 0x82e73af8
	ctx.lr = 0x8317A390;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A3A8"))) PPC_WEAK_FUNC(sub_8317A3A8);
PPC_FUNC_IMPL(__imp__sub_8317A3A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,21816
	ctx.r3.s64 = ctx.r11.s64 + 21816;
	// bl 0x82e73af8
	ctx.lr = 0x8317A3C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A3D8"))) PPC_WEAK_FUNC(sub_8317A3D8);
PPC_FUNC_IMPL(__imp__sub_8317A3D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,21824
	ctx.r3.s64 = ctx.r11.s64 + 21824;
	// bl 0x82e73af8
	ctx.lr = 0x8317A3F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A408"))) PPC_WEAK_FUNC(sub_8317A408);
PPC_FUNC_IMPL(__imp__sub_8317A408) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,22208
	ctx.r30.s64 = ctx.r31.s64 + 22208;
	// addi r4,r11,5120
	ctx.r4.s64 = ctx.r11.s64 + 5120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317A434;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r10,25528
	ctx.r10.s64 = ctx.r10.s64 + 25528;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,22208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22208, ctx.r10.u32);
	// addi r3,r11,-9448
	ctx.r3.s64 = ctx.r11.s64 + -9448;
	// bl 0x82a7e6b0
	ctx.lr = 0x8317A454;
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

__attribute__((alias("__imp__sub_8317A470"))) PPC_WEAK_FUNC(sub_8317A470);
PPC_FUNC_IMPL(__imp__sub_8317A470) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8317A488;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A4A0"))) PPC_WEAK_FUNC(sub_8317A4A0);
PPC_FUNC_IMPL(__imp__sub_8317A4A0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8317A4B8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A4D0"))) PPC_WEAK_FUNC(sub_8317A4D0);
PPC_FUNC_IMPL(__imp__sub_8317A4D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7364
	ctx.r3.s64 = ctx.r11.s64 + 7364;
	// bl 0x82e73af8
	ctx.lr = 0x8317A4E8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A500"))) PPC_WEAK_FUNC(sub_8317A500);
PPC_FUNC_IMPL(__imp__sub_8317A500) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7384
	ctx.r3.s64 = ctx.r11.s64 + 7384;
	// bl 0x82e73af8
	ctx.lr = 0x8317A518;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A530"))) PPC_WEAK_FUNC(sub_8317A530);
PPC_FUNC_IMPL(__imp__sub_8317A530) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23012
	ctx.r3.s64 = ctx.r11.s64 + 23012;
	// bl 0x82e73af8
	ctx.lr = 0x8317A548;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A560"))) PPC_WEAK_FUNC(sub_8317A560);
PPC_FUNC_IMPL(__imp__sub_8317A560) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23024
	ctx.r3.s64 = ctx.r11.s64 + 23024;
	// bl 0x82e73af8
	ctx.lr = 0x8317A578;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A590"))) PPC_WEAK_FUNC(sub_8317A590);
PPC_FUNC_IMPL(__imp__sub_8317A590) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5176
	ctx.r3.s64 = ctx.r11.s64 + 5176;
	// bl 0x82e73ab0
	ctx.lr = 0x8317A5A8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A5C0"))) PPC_WEAK_FUNC(sub_8317A5C0);
PPC_FUNC_IMPL(__imp__sub_8317A5C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5192
	ctx.r3.s64 = ctx.r11.s64 + 5192;
	// bl 0x82e73ab0
	ctx.lr = 0x8317A5D8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A5F0"))) PPC_WEAK_FUNC(sub_8317A5F0);
PPC_FUNC_IMPL(__imp__sub_8317A5F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5212
	ctx.r3.s64 = ctx.r11.s64 + 5212;
	// bl 0x82e73ab0
	ctx.lr = 0x8317A608;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A620"))) PPC_WEAK_FUNC(sub_8317A620);
PPC_FUNC_IMPL(__imp__sub_8317A620) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5228
	ctx.r3.s64 = ctx.r11.s64 + 5228;
	// bl 0x82e73ab0
	ctx.lr = 0x8317A638;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A650"))) PPC_WEAK_FUNC(sub_8317A650);
PPC_FUNC_IMPL(__imp__sub_8317A650) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5244
	ctx.r3.s64 = ctx.r11.s64 + 5244;
	// bl 0x82e73ab0
	ctx.lr = 0x8317A668;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A680"))) PPC_WEAK_FUNC(sub_8317A680);
PPC_FUNC_IMPL(__imp__sub_8317A680) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8752
	ctx.r3.s64 = ctx.r11.s64 + 8752;
	// bl 0x82e73ab0
	ctx.lr = 0x8317A698;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A6B0"))) PPC_WEAK_FUNC(sub_8317A6B0);
PPC_FUNC_IMPL(__imp__sub_8317A6B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5260
	ctx.r3.s64 = ctx.r11.s64 + 5260;
	// bl 0x82e73ab0
	ctx.lr = 0x8317A6C8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A6E0"))) PPC_WEAK_FUNC(sub_8317A6E0);
PPC_FUNC_IMPL(__imp__sub_8317A6E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5276
	ctx.r3.s64 = ctx.r11.s64 + 5276;
	// bl 0x82e73ab0
	ctx.lr = 0x8317A6F8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A710"))) PPC_WEAK_FUNC(sub_8317A710);
PPC_FUNC_IMPL(__imp__sub_8317A710) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5296
	ctx.r3.s64 = ctx.r11.s64 + 5296;
	// bl 0x82e73ab0
	ctx.lr = 0x8317A728;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A740"))) PPC_WEAK_FUNC(sub_8317A740);
PPC_FUNC_IMPL(__imp__sub_8317A740) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23036
	ctx.r3.s64 = ctx.r11.s64 + 23036;
	// bl 0x82e73af8
	ctx.lr = 0x8317A758;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A770"))) PPC_WEAK_FUNC(sub_8317A770);
PPC_FUNC_IMPL(__imp__sub_8317A770) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23048
	ctx.r3.s64 = ctx.r11.s64 + 23048;
	// bl 0x82e73af8
	ctx.lr = 0x8317A788;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A7A0"))) PPC_WEAK_FUNC(sub_8317A7A0);
PPC_FUNC_IMPL(__imp__sub_8317A7A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5312
	ctx.r3.s64 = ctx.r11.s64 + 5312;
	// bl 0x82e73af8
	ctx.lr = 0x8317A7B8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A7D0"))) PPC_WEAK_FUNC(sub_8317A7D0);
PPC_FUNC_IMPL(__imp__sub_8317A7D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15624
	ctx.r3.s64 = ctx.r11.s64 + -15624;
	// bl 0x82e73af8
	ctx.lr = 0x8317A7E8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A800"))) PPC_WEAK_FUNC(sub_8317A800);
PPC_FUNC_IMPL(__imp__sub_8317A800) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15604
	ctx.r3.s64 = ctx.r11.s64 + -15604;
	// bl 0x82e73af8
	ctx.lr = 0x8317A818;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A830"))) PPC_WEAK_FUNC(sub_8317A830);
PPC_FUNC_IMPL(__imp__sub_8317A830) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5324
	ctx.r3.s64 = ctx.r11.s64 + 5324;
	// bl 0x82e73af8
	ctx.lr = 0x8317A848;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A860"))) PPC_WEAK_FUNC(sub_8317A860);
PPC_FUNC_IMPL(__imp__sub_8317A860) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5344
	ctx.r3.s64 = ctx.r11.s64 + 5344;
	// bl 0x82e73af8
	ctx.lr = 0x8317A878;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22336, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A890"))) PPC_WEAK_FUNC(sub_8317A890);
PPC_FUNC_IMPL(__imp__sub_8317A890) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5364
	ctx.r3.s64 = ctx.r11.s64 + 5364;
	// bl 0x82e73af8
	ctx.lr = 0x8317A8A8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A8C0"))) PPC_WEAK_FUNC(sub_8317A8C0);
PPC_FUNC_IMPL(__imp__sub_8317A8C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5388
	ctx.r3.s64 = ctx.r11.s64 + 5388;
	// bl 0x82e73af8
	ctx.lr = 0x8317A8D8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A8F0"))) PPC_WEAK_FUNC(sub_8317A8F0);
PPC_FUNC_IMPL(__imp__sub_8317A8F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,21368
	ctx.r3.s64 = ctx.r11.s64 + 21368;
	// bl 0x82e73af8
	ctx.lr = 0x8317A908;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A920"))) PPC_WEAK_FUNC(sub_8317A920);
PPC_FUNC_IMPL(__imp__sub_8317A920) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5404
	ctx.r3.s64 = ctx.r11.s64 + 5404;
	// bl 0x82e73af8
	ctx.lr = 0x8317A938;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A950"))) PPC_WEAK_FUNC(sub_8317A950);
PPC_FUNC_IMPL(__imp__sub_8317A950) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5416
	ctx.r3.s64 = ctx.r11.s64 + 5416;
	// bl 0x82e73af8
	ctx.lr = 0x8317A968;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22556, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A980"))) PPC_WEAK_FUNC(sub_8317A980);
PPC_FUNC_IMPL(__imp__sub_8317A980) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5428
	ctx.r3.s64 = ctx.r11.s64 + 5428;
	// bl 0x82e73af8
	ctx.lr = 0x8317A998;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A9B0"))) PPC_WEAK_FUNC(sub_8317A9B0);
PPC_FUNC_IMPL(__imp__sub_8317A9B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5444
	ctx.r3.s64 = ctx.r11.s64 + 5444;
	// bl 0x82e73af8
	ctx.lr = 0x8317A9C8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317A9E0"))) PPC_WEAK_FUNC(sub_8317A9E0);
PPC_FUNC_IMPL(__imp__sub_8317A9E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5460
	ctx.r3.s64 = ctx.r11.s64 + 5460;
	// bl 0x82e73af8
	ctx.lr = 0x8317A9F8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317AA10"))) PPC_WEAK_FUNC(sub_8317AA10);
PPC_FUNC_IMPL(__imp__sub_8317AA10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,5476
	ctx.r3.s64 = ctx.r11.s64 + 5476;
	// bl 0x82e73af8
	ctx.lr = 0x8317AA28;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,22200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317AA40"))) PPC_WEAK_FUNC(sub_8317AA40);
PPC_FUNC_IMPL(__imp__sub_8317AA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9408
	ctx.r3.s64 = ctx.r11.s64 + -9408;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317AA50"))) PPC_WEAK_FUNC(sub_8317AA50);
PPC_FUNC_IMPL(__imp__sub_8317AA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22672
	ctx.r9.s64 = ctx.r11.s64 + 22672;
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

__attribute__((alias("__imp__sub_8317AA80"))) PPC_WEAK_FUNC(sub_8317AA80);
PPC_FUNC_IMPL(__imp__sub_8317AA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22640
	ctx.r9.s64 = ctx.r11.s64 + 22640;
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

__attribute__((alias("__imp__sub_8317AAB0"))) PPC_WEAK_FUNC(sub_8317AAB0);
PPC_FUNC_IMPL(__imp__sub_8317AAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22592
	ctx.r9.s64 = ctx.r11.s64 + 22592;
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

__attribute__((alias("__imp__sub_8317AAE0"))) PPC_WEAK_FUNC(sub_8317AAE0);
PPC_FUNC_IMPL(__imp__sub_8317AAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_8317AB10"))) PPC_WEAK_FUNC(sub_8317AB10);
PPC_FUNC_IMPL(__imp__sub_8317AB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,22608
	ctx.r10.s64 = ctx.r10.s64 + 22608;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317AB30"))) PPC_WEAK_FUNC(sub_8317AB30);
PPC_FUNC_IMPL(__imp__sub_8317AB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,22576
	ctx.r10.s64 = ctx.r10.s64 + 22576;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317AB50"))) PPC_WEAK_FUNC(sub_8317AB50);
PPC_FUNC_IMPL(__imp__sub_8317AB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,22656
	ctx.r10.s64 = ctx.r10.s64 + 22656;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317AB70"))) PPC_WEAK_FUNC(sub_8317AB70);
PPC_FUNC_IMPL(__imp__sub_8317AB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,22696
	ctx.r3.s64 = ctx.r11.s64 + 22696;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317AB80"))) PPC_WEAK_FUNC(sub_8317AB80);
PPC_FUNC_IMPL(__imp__sub_8317AB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9360
	ctx.r3.s64 = ctx.r11.s64 + -9360;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317AB90"))) PPC_WEAK_FUNC(sub_8317AB90);
PPC_FUNC_IMPL(__imp__sub_8317AB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22864
	ctx.r9.s64 = ctx.r11.s64 + 22864;
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

__attribute__((alias("__imp__sub_8317ABC0"))) PPC_WEAK_FUNC(sub_8317ABC0);
PPC_FUNC_IMPL(__imp__sub_8317ABC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22832
	ctx.r9.s64 = ctx.r11.s64 + 22832;
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

__attribute__((alias("__imp__sub_8317ABF0"))) PPC_WEAK_FUNC(sub_8317ABF0);
PPC_FUNC_IMPL(__imp__sub_8317ABF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,22784
	ctx.r9.s64 = ctx.r11.s64 + 22784;
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

__attribute__((alias("__imp__sub_8317AC20"))) PPC_WEAK_FUNC(sub_8317AC20);
PPC_FUNC_IMPL(__imp__sub_8317AC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_8317AC50"))) PPC_WEAK_FUNC(sub_8317AC50);
PPC_FUNC_IMPL(__imp__sub_8317AC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,22800
	ctx.r10.s64 = ctx.r10.s64 + 22800;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317AC70"))) PPC_WEAK_FUNC(sub_8317AC70);
PPC_FUNC_IMPL(__imp__sub_8317AC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,22768
	ctx.r10.s64 = ctx.r10.s64 + 22768;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317AC90"))) PPC_WEAK_FUNC(sub_8317AC90);
PPC_FUNC_IMPL(__imp__sub_8317AC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,22912
	ctx.r3.s64 = ctx.r11.s64 + 22912;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317ACA0"))) PPC_WEAK_FUNC(sub_8317ACA0);
PPC_FUNC_IMPL(__imp__sub_8317ACA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,22848
	ctx.r10.s64 = ctx.r10.s64 + 22848;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317ACC0"))) PPC_WEAK_FUNC(sub_8317ACC0);
PPC_FUNC_IMPL(__imp__sub_8317ACC0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,14896
	ctx.r4.s64 = ctx.r11.s64 + 14896;
	// addi r3,r10,22884
	ctx.r3.s64 = ctx.r10.s64 + 22884;
	// bl 0x82450f48
	ctx.lr = 0x8317ACE0;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9344
	ctx.r3.s64 = ctx.r11.s64 + -9344;
	// bl 0x82a7e6b0
	ctx.lr = 0x8317ACEC;
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

__attribute__((alias("__imp__sub_8317AD00"))) PPC_WEAK_FUNC(sub_8317AD00);
PPC_FUNC_IMPL(__imp__sub_8317AD00) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,22984
	ctx.r30.s64 = ctx.r31.s64 + 22984;
	// addi r4,r11,14952
	ctx.r4.s64 = ctx.r11.s64 + 14952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317AD2C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,22984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22984, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-9392
	ctx.r3.s64 = ctx.r11.s64 + -9392;
	// bl 0x82a7e6b0
	ctx.lr = 0x8317AD64;
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

__attribute__((alias("__imp__sub_8317AD80"))) PPC_WEAK_FUNC(sub_8317AD80);
PPC_FUNC_IMPL(__imp__sub_8317AD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9368
	ctx.r3.s64 = ctx.r11.s64 + -9368;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317AD90"))) PPC_WEAK_FUNC(sub_8317AD90);
PPC_FUNC_IMPL(__imp__sub_8317AD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23136
	ctx.r9.s64 = ctx.r11.s64 + 23136;
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

__attribute__((alias("__imp__sub_8317ADC0"))) PPC_WEAK_FUNC(sub_8317ADC0);
PPC_FUNC_IMPL(__imp__sub_8317ADC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23104
	ctx.r9.s64 = ctx.r11.s64 + 23104;
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

__attribute__((alias("__imp__sub_8317ADF0"))) PPC_WEAK_FUNC(sub_8317ADF0);
PPC_FUNC_IMPL(__imp__sub_8317ADF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_8317AE20"))) PPC_WEAK_FUNC(sub_8317AE20);
PPC_FUNC_IMPL(__imp__sub_8317AE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23088
	ctx.r9.s64 = ctx.r11.s64 + 23088;
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

__attribute__((alias("__imp__sub_8317AE50"))) PPC_WEAK_FUNC(sub_8317AE50);
PPC_FUNC_IMPL(__imp__sub_8317AE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,23072
	ctx.r10.s64 = ctx.r10.s64 + 23072;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317AE70"))) PPC_WEAK_FUNC(sub_8317AE70);
PPC_FUNC_IMPL(__imp__sub_8317AE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
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

__attribute__((alias("__imp__sub_8317AE90"))) PPC_WEAK_FUNC(sub_8317AE90);
PPC_FUNC_IMPL(__imp__sub_8317AE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9272
	ctx.r3.s64 = ctx.r11.s64 + -9272;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317AEA0"))) PPC_WEAK_FUNC(sub_8317AEA0);
PPC_FUNC_IMPL(__imp__sub_8317AEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,23120
	ctx.r10.s64 = ctx.r10.s64 + 23120;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317AEC0"))) PPC_WEAK_FUNC(sub_8317AEC0);
PPC_FUNC_IMPL(__imp__sub_8317AEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,23152
	ctx.r3.s64 = ctx.r11.s64 + 23152;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317AED0"))) PPC_WEAK_FUNC(sub_8317AED0);
PPC_FUNC_IMPL(__imp__sub_8317AED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4944
	ctx.r11.s64 = ctx.r11.s64 + 4944;
	// addi r10,r10,23424
	ctx.r10.s64 = ctx.r10.s64 + 23424;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317AEF0"))) PPC_WEAK_FUNC(sub_8317AEF0);
PPC_FUNC_IMPL(__imp__sub_8317AEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4944
	ctx.r11.s64 = ctx.r11.s64 + 4944;
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

__attribute__((alias("__imp__sub_8317AF10"))) PPC_WEAK_FUNC(sub_8317AF10);
PPC_FUNC_IMPL(__imp__sub_8317AF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4944
	ctx.r11.s64 = ctx.r11.s64 + 4944;
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

__attribute__((alias("__imp__sub_8317AF30"))) PPC_WEAK_FUNC(sub_8317AF30);
PPC_FUNC_IMPL(__imp__sub_8317AF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,25008
	ctx.r11.s64 = ctx.r11.s64 + 25008;
	// addi r10,r10,23392
	ctx.r10.s64 = ctx.r10.s64 + 23392;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317AF50"))) PPC_WEAK_FUNC(sub_8317AF50);
PPC_FUNC_IMPL(__imp__sub_8317AF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4944
	ctx.r11.s64 = ctx.r11.s64 + 4944;
	// addi r10,r10,23232
	ctx.r10.s64 = ctx.r10.s64 + 23232;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317AF70"))) PPC_WEAK_FUNC(sub_8317AF70);
PPC_FUNC_IMPL(__imp__sub_8317AF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9256
	ctx.r3.s64 = ctx.r11.s64 + -9256;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317AF80"))) PPC_WEAK_FUNC(sub_8317AF80);
PPC_FUNC_IMPL(__imp__sub_8317AF80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23288
	ctx.r3.s64 = ctx.r11.s64 + 23288;
	// bl 0x82863680
	ctx.lr = 0x8317AF98;
	sub_82863680(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9240
	ctx.r3.s64 = ctx.r11.s64 + -9240;
	// bl 0x82a7e6b0
	ctx.lr = 0x8317AFA4;
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

__attribute__((alias("__imp__sub_8317AFB8"))) PPC_WEAK_FUNC(sub_8317AFB8);
PPC_FUNC_IMPL(__imp__sub_8317AFB8) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,23276
	ctx.r30.s64 = ctx.r31.s64 + 23276;
	// addi r4,r11,25024
	ctx.r4.s64 = ctx.r11.s64 + 25024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317AFE4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-9320
	ctx.r3.s64 = ctx.r9.s64 + -9320;
	// lfs f0,3340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3340);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,23276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23276, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317B008;
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

__attribute__((alias("__imp__sub_8317B020"))) PPC_WEAK_FUNC(sub_8317B020);
PPC_FUNC_IMPL(__imp__sub_8317B020) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,23264
	ctx.r30.s64 = ctx.r31.s64 + 23264;
	// addi r4,r11,25056
	ctx.r4.s64 = ctx.r11.s64 + 25056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317B04C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-9296
	ctx.r3.s64 = ctx.r9.s64 + -9296;
	// lfs f0,26744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26744);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,23264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23264, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317B070;
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

__attribute__((alias("__imp__sub_8317B088"))) PPC_WEAK_FUNC(sub_8317B088);
PPC_FUNC_IMPL(__imp__sub_8317B088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23616
	ctx.r9.s64 = ctx.r11.s64 + 23616;
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

__attribute__((alias("__imp__sub_8317B0B8"))) PPC_WEAK_FUNC(sub_8317B0B8);
PPC_FUNC_IMPL(__imp__sub_8317B0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23584
	ctx.r9.s64 = ctx.r11.s64 + 23584;
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

__attribute__((alias("__imp__sub_8317B0E8"))) PPC_WEAK_FUNC(sub_8317B0E8);
PPC_FUNC_IMPL(__imp__sub_8317B0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23536
	ctx.r9.s64 = ctx.r11.s64 + 23536;
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

__attribute__((alias("__imp__sub_8317B118"))) PPC_WEAK_FUNC(sub_8317B118);
PPC_FUNC_IMPL(__imp__sub_8317B118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_8317B148"))) PPC_WEAK_FUNC(sub_8317B148);
PPC_FUNC_IMPL(__imp__sub_8317B148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
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

__attribute__((alias("__imp__sub_8317B168"))) PPC_WEAK_FUNC(sub_8317B168);
PPC_FUNC_IMPL(__imp__sub_8317B168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,23520
	ctx.r10.s64 = ctx.r10.s64 + 23520;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B188"))) PPC_WEAK_FUNC(sub_8317B188);
PPC_FUNC_IMPL(__imp__sub_8317B188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9152
	ctx.r3.s64 = ctx.r11.s64 + -9152;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B198"))) PPC_WEAK_FUNC(sub_8317B198);
PPC_FUNC_IMPL(__imp__sub_8317B198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,23600
	ctx.r10.s64 = ctx.r10.s64 + 23600;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B1B8"))) PPC_WEAK_FUNC(sub_8317B1B8);
PPC_FUNC_IMPL(__imp__sub_8317B1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,23664
	ctx.r3.s64 = ctx.r11.s64 + 23664;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B1C8"))) PPC_WEAK_FUNC(sub_8317B1C8);
PPC_FUNC_IMPL(__imp__sub_8317B1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,18584
	ctx.r11.s64 = ctx.r11.s64 + 18584;
	// stw r11,29644(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29644, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B1E0"))) PPC_WEAK_FUNC(sub_8317B1E0);
PPC_FUNC_IMPL(__imp__sub_8317B1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9224
	ctx.r3.s64 = ctx.r11.s64 + -9224;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B1F0"))) PPC_WEAK_FUNC(sub_8317B1F0);
PPC_FUNC_IMPL(__imp__sub_8317B1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9216
	ctx.r3.s64 = ctx.r11.s64 + -9216;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B200"))) PPC_WEAK_FUNC(sub_8317B200);
PPC_FUNC_IMPL(__imp__sub_8317B200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9208
	ctx.r3.s64 = ctx.r11.s64 + -9208;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B210"))) PPC_WEAK_FUNC(sub_8317B210);
PPC_FUNC_IMPL(__imp__sub_8317B210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9200
	ctx.r3.s64 = ctx.r11.s64 + -9200;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B220"))) PPC_WEAK_FUNC(sub_8317B220);
PPC_FUNC_IMPL(__imp__sub_8317B220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9192
	ctx.r3.s64 = ctx.r11.s64 + -9192;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B230"))) PPC_WEAK_FUNC(sub_8317B230);
PPC_FUNC_IMPL(__imp__sub_8317B230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9184
	ctx.r3.s64 = ctx.r11.s64 + -9184;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B240"))) PPC_WEAK_FUNC(sub_8317B240);
PPC_FUNC_IMPL(__imp__sub_8317B240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9136
	ctx.r3.s64 = ctx.r11.s64 + -9136;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B250"))) PPC_WEAK_FUNC(sub_8317B250);
PPC_FUNC_IMPL(__imp__sub_8317B250) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,23632
	ctx.r30.s64 = ctx.r31.s64 + 23632;
	// addi r4,r11,28900
	ctx.r4.s64 = ctx.r11.s64 + 28900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317B27C;
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
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-9176
	ctx.r3.s64 = ctx.r7.s64 + -9176;
	// lfs f12,29264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,23632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23632, ctx.r11.u32);
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
	ctx.lr = 0x8317B2BC;
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

__attribute__((alias("__imp__sub_8317B2D8"))) PPC_WEAK_FUNC(sub_8317B2D8);
PPC_FUNC_IMPL(__imp__sub_8317B2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23872
	ctx.r9.s64 = ctx.r11.s64 + 23872;
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

__attribute__((alias("__imp__sub_8317B308"))) PPC_WEAK_FUNC(sub_8317B308);
PPC_FUNC_IMPL(__imp__sub_8317B308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_8317B338"))) PPC_WEAK_FUNC(sub_8317B338);
PPC_FUNC_IMPL(__imp__sub_8317B338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23792
	ctx.r9.s64 = ctx.r11.s64 + 23792;
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

__attribute__((alias("__imp__sub_8317B368"))) PPC_WEAK_FUNC(sub_8317B368);
PPC_FUNC_IMPL(__imp__sub_8317B368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,23824
	ctx.r9.s64 = ctx.r11.s64 + 23824;
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

__attribute__((alias("__imp__sub_8317B398"))) PPC_WEAK_FUNC(sub_8317B398);
PPC_FUNC_IMPL(__imp__sub_8317B398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,23808
	ctx.r10.s64 = ctx.r10.s64 + 23808;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B3B8"))) PPC_WEAK_FUNC(sub_8317B3B8);
PPC_FUNC_IMPL(__imp__sub_8317B3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,23776
	ctx.r10.s64 = ctx.r10.s64 + 23776;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B3D8"))) PPC_WEAK_FUNC(sub_8317B3D8);
PPC_FUNC_IMPL(__imp__sub_8317B3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9040
	ctx.r3.s64 = ctx.r11.s64 + -9040;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B3E8"))) PPC_WEAK_FUNC(sub_8317B3E8);
PPC_FUNC_IMPL(__imp__sub_8317B3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
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

__attribute__((alias("__imp__sub_8317B408"))) PPC_WEAK_FUNC(sub_8317B408);
PPC_FUNC_IMPL(__imp__sub_8317B408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,23896
	ctx.r3.s64 = ctx.r11.s64 + 23896;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B418"))) PPC_WEAK_FUNC(sub_8317B418);
PPC_FUNC_IMPL(__imp__sub_8317B418) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r31,23764
	ctx.r30.s64 = ctx.r31.s64 + 23764;
	// addi r4,r11,31928
	ctx.r4.s64 = ctx.r11.s64 + 31928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317B444;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r10,r10,25528
	ctx.r10.s64 = ctx.r10.s64 + 25528;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,23764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23764, ctx.r10.u32);
	// addi r3,r11,-9096
	ctx.r3.s64 = ctx.r11.s64 + -9096;
	// bl 0x82a7e6b0
	ctx.lr = 0x8317B464;
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

__attribute__((alias("__imp__sub_8317B480"))) PPC_WEAK_FUNC(sub_8317B480);
PPC_FUNC_IMPL(__imp__sub_8317B480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9072
	ctx.r3.s64 = ctx.r11.s64 + -9072;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B490"))) PPC_WEAK_FUNC(sub_8317B490);
PPC_FUNC_IMPL(__imp__sub_8317B490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9064
	ctx.r3.s64 = ctx.r11.s64 + -9064;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B4A0"))) PPC_WEAK_FUNC(sub_8317B4A0);
PPC_FUNC_IMPL(__imp__sub_8317B4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9056
	ctx.r3.s64 = ctx.r11.s64 + -9056;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B4B0"))) PPC_WEAK_FUNC(sub_8317B4B0);
PPC_FUNC_IMPL(__imp__sub_8317B4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9048
	ctx.r3.s64 = ctx.r11.s64 + -9048;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B4C0"))) PPC_WEAK_FUNC(sub_8317B4C0);
PPC_FUNC_IMPL(__imp__sub_8317B4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-8984
	ctx.r3.s64 = ctx.r11.s64 + -8984;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B4D0"))) PPC_WEAK_FUNC(sub_8317B4D0);
PPC_FUNC_IMPL(__imp__sub_8317B4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24160
	ctx.r9.s64 = ctx.r11.s64 + 24160;
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

__attribute__((alias("__imp__sub_8317B500"))) PPC_WEAK_FUNC(sub_8317B500);
PPC_FUNC_IMPL(__imp__sub_8317B500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_8317B530"))) PPC_WEAK_FUNC(sub_8317B530);
PPC_FUNC_IMPL(__imp__sub_8317B530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24016
	ctx.r9.s64 = ctx.r11.s64 + 24016;
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

__attribute__((alias("__imp__sub_8317B560"))) PPC_WEAK_FUNC(sub_8317B560);
PPC_FUNC_IMPL(__imp__sub_8317B560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24048
	ctx.r9.s64 = ctx.r11.s64 + 24048;
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

__attribute__((alias("__imp__sub_8317B590"))) PPC_WEAK_FUNC(sub_8317B590);
PPC_FUNC_IMPL(__imp__sub_8317B590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,24032
	ctx.r10.s64 = ctx.r10.s64 + 24032;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B5B0"))) PPC_WEAK_FUNC(sub_8317B5B0);
PPC_FUNC_IMPL(__imp__sub_8317B5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,24000
	ctx.r10.s64 = ctx.r10.s64 + 24000;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B5D0"))) PPC_WEAK_FUNC(sub_8317B5D0);
PPC_FUNC_IMPL(__imp__sub_8317B5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,24232
	ctx.r3.s64 = ctx.r11.s64 + 24232;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B5E0"))) PPC_WEAK_FUNC(sub_8317B5E0);
PPC_FUNC_IMPL(__imp__sub_8317B5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,24144
	ctx.r10.s64 = ctx.r10.s64 + 24144;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317B600"))) PPC_WEAK_FUNC(sub_8317B600);
PPC_FUNC_IMPL(__imp__sub_8317B600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9024
	ctx.r3.s64 = ctx.r11.s64 + -9024;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B610"))) PPC_WEAK_FUNC(sub_8317B610);
PPC_FUNC_IMPL(__imp__sub_8317B610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9016
	ctx.r3.s64 = ctx.r11.s64 + -9016;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B620"))) PPC_WEAK_FUNC(sub_8317B620);
PPC_FUNC_IMPL(__imp__sub_8317B620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9008
	ctx.r3.s64 = ctx.r11.s64 + -9008;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B630"))) PPC_WEAK_FUNC(sub_8317B630);
PPC_FUNC_IMPL(__imp__sub_8317B630) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,-32496
	ctx.r4.s64 = ctx.r11.s64 + -32496;
	// addi r3,r10,24080
	ctx.r3.s64 = ctx.r10.s64 + 24080;
	// bl 0x82450f48
	ctx.lr = 0x8317B650;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-8968
	ctx.r3.s64 = ctx.r11.s64 + -8968;
	// bl 0x82a7e6b0
	ctx.lr = 0x8317B65C;
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

__attribute__((alias("__imp__sub_8317B670"))) PPC_WEAK_FUNC(sub_8317B670);
PPC_FUNC_IMPL(__imp__sub_8317B670) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,-32484
	ctx.r4.s64 = ctx.r11.s64 + -32484;
	// addi r3,r10,24176
	ctx.r3.s64 = ctx.r10.s64 + 24176;
	// bl 0x82450f48
	ctx.lr = 0x8317B690;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-8944
	ctx.r3.s64 = ctx.r11.s64 + -8944;
	// bl 0x82a7e6b0
	ctx.lr = 0x8317B69C;
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

__attribute__((alias("__imp__sub_8317B6B0"))) PPC_WEAK_FUNC(sub_8317B6B0);
PPC_FUNC_IMPL(__imp__sub_8317B6B0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,-3136
	ctx.r4.s64 = ctx.r11.s64 + -3136;
	// addi r3,r10,24108
	ctx.r3.s64 = ctx.r10.s64 + 24108;
	// bl 0x82450f48
	ctx.lr = 0x8317B6D0;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-8920
	ctx.r3.s64 = ctx.r11.s64 + -8920;
	// bl 0x82a7e6b0
	ctx.lr = 0x8317B6DC;
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

__attribute__((alias("__imp__sub_8317B6F0"))) PPC_WEAK_FUNC(sub_8317B6F0);
PPC_FUNC_IMPL(__imp__sub_8317B6F0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,17500
	ctx.r4.s64 = ctx.r11.s64 + 17500;
	// addi r3,r10,24204
	ctx.r3.s64 = ctx.r10.s64 + 24204;
	// bl 0x82450f48
	ctx.lr = 0x8317B710;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-8896
	ctx.r3.s64 = ctx.r11.s64 + -8896;
	// bl 0x82a7e6b0
	ctx.lr = 0x8317B71C;
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

__attribute__((alias("__imp__sub_8317B730"))) PPC_WEAK_FUNC(sub_8317B730);
PPC_FUNC_IMPL(__imp__sub_8317B730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9000
	ctx.r3.s64 = ctx.r11.s64 + -9000;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B740"))) PPC_WEAK_FUNC(sub_8317B740);
PPC_FUNC_IMPL(__imp__sub_8317B740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-8992
	ctx.r3.s64 = ctx.r11.s64 + -8992;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317B750"))) PPC_WEAK_FUNC(sub_8317B750);
PPC_FUNC_IMPL(__imp__sub_8317B750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24512
	ctx.r9.s64 = ctx.r11.s64 + 24512;
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

__attribute__((alias("__imp__sub_8317B780"))) PPC_WEAK_FUNC(sub_8317B780);
PPC_FUNC_IMPL(__imp__sub_8317B780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,24480
	ctx.r9.s64 = ctx.r11.s64 + 24480;
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

