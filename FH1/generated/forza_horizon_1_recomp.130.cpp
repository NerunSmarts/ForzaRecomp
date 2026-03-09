#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_8316E270"))) PPC_WEAK_FUNC(sub_8316E270);
PPC_FUNC_IMPL(__imp__sub_8316E270) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8316E288;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15096, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E2A0"))) PPC_WEAK_FUNC(sub_8316E2A0);
PPC_FUNC_IMPL(__imp__sub_8316E2A0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8316E2B8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E2D0"))) PPC_WEAK_FUNC(sub_8316E2D0);
PPC_FUNC_IMPL(__imp__sub_8316E2D0) {
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
	// addi r30,r31,14220
	ctx.r30.s64 = ctx.r31.s64 + 14220;
	// addi r4,r11,-30148
	ctx.r4.s64 = ctx.r11.s64 + -30148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316E2FC;
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
	// lfs f13,23492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3432(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3432);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-10760
	ctx.r3.s64 = ctx.r7.s64 + -10760;
	// lfs f12,19696(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19696);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,14220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14220, ctx.r11.u32);
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
	ctx.lr = 0x8316E33C;
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

__attribute__((alias("__imp__sub_8316E358"))) PPC_WEAK_FUNC(sub_8316E358);
PPC_FUNC_IMPL(__imp__sub_8316E358) {
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
	// addi r30,r31,15016
	ctx.r30.s64 = ctx.r31.s64 + 15016;
	// addi r4,r11,-30120
	ctx.r4.s64 = ctx.r11.s64 + -30120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316E384;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,15016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15016, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-10736
	ctx.r3.s64 = ctx.r11.s64 + -10736;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316E3BC;
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

__attribute__((alias("__imp__sub_8316E3D8"))) PPC_WEAK_FUNC(sub_8316E3D8);
PPC_FUNC_IMPL(__imp__sub_8316E3D8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8316E3F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E408"))) PPC_WEAK_FUNC(sub_8316E408);
PPC_FUNC_IMPL(__imp__sub_8316E408) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-30088
	ctx.r3.s64 = ctx.r11.s64 + -30088;
	// bl 0x82e73af8
	ctx.lr = 0x8316E420;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E438"))) PPC_WEAK_FUNC(sub_8316E438);
PPC_FUNC_IMPL(__imp__sub_8316E438) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8316E450;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E468"))) PPC_WEAK_FUNC(sub_8316E468);
PPC_FUNC_IMPL(__imp__sub_8316E468) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8316E480;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E498"))) PPC_WEAK_FUNC(sub_8316E498);
PPC_FUNC_IMPL(__imp__sub_8316E498) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddd8
	ctx.lr = 0x8316E4A0;
	__savegprlr_16(ctx, base);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32138
	ctx.r9.s64 = -2106195968;
	// lis r8,-32138
	ctx.r8.s64 = -2106195968;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,8656
	ctx.r10.s64 = ctx.r10.s64 + 8656;
	// addi r9,r9,15800
	ctx.r9.s64 = ctx.r9.s64 + 15800;
	// stw r11,-316(r1)
	PPC_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// addi r8,r8,15848
	ctx.r8.s64 = ctx.r8.s64 + 15848;
	// stw r10,-320(r1)
	PPC_STORE_U32(ctx.r1.u32 + -320, ctx.r10.u32);
	// stw r9,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r9.u32);
	// lis r10,-32138
	ctx.r10.s64 = -2106195968;
	// stw r8,-304(r1)
	PPC_STORE_U32(ctx.r1.u32 + -304, ctx.r8.u32);
	// lis r9,-32138
	ctx.r9.s64 = -2106195968;
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r11.u32);
	// lis r8,-32137
	ctx.r8.s64 = -2106130432;
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// lis r7,-31989
	ctx.r7.s64 = -2096431104;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// lis r6,-32138
	ctx.r6.s64 = -2106195968;
	// stw r11,-300(r1)
	PPC_STORE_U32(ctx.r1.u32 + -300, ctx.r11.u32);
	// lis r5,-32138
	ctx.r5.s64 = -2106195968;
	// lis r4,-31989
	ctx.r4.s64 = -2096431104;
	// stw r11,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r11.u32);
	// lis r3,-32137
	ctx.r3.s64 = -2106130432;
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// lis r31,-32138
	ctx.r31.s64 = -2106195968;
	// stw r11,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r11.u32);
	// lis r30,-32137
	ctx.r30.s64 = -2106130432;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// addi r29,r10,15856
	ctx.r29.s64 = ctx.r10.s64 + 15856;
	// stw r11,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r11.u32);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// addi r28,r9,15800
	ctx.r28.s64 = ctx.r9.s64 + 15800;
	// stw r11,-332(r1)
	PPC_STORE_U32(ctx.r1.u32 + -332, ctx.r11.u32);
	// addi r27,r8,-25704
	ctx.r27.s64 = ctx.r8.s64 + -25704;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// addi r7,r7,8992
	ctx.r7.s64 = ctx.r7.s64 + 8992;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// addi r6,r6,15800
	ctx.r6.s64 = ctx.r6.s64 + 15800;
	// stw r11,-312(r1)
	PPC_STORE_U32(ctx.r1.u32 + -312, ctx.r11.u32);
	// addi r5,r5,15800
	ctx.r5.s64 = ctx.r5.s64 + 15800;
	// stw r11,-308(r1)
	PPC_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// addi r4,r4,8992
	ctx.r4.s64 = ctx.r4.s64 + 8992;
	// stw r11,-328(r1)
	PPC_STORE_U32(ctx.r1.u32 + -328, ctx.r11.u32);
	// addi r3,r3,-25840
	ctx.r3.s64 = ctx.r3.s64 + -25840;
	// stw r11,-324(r1)
	PPC_STORE_U32(ctx.r1.u32 + -324, ctx.r11.u32);
	// addi r31,r31,15880
	ctx.r31.s64 = ctx.r31.s64 + 15880;
	// stw r11,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r11.u32);
	// addi r30,r30,-25584
	ctx.r30.s64 = ctx.r30.s64 + -25584;
	// stw r11,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r11.u32);
	// stw r11,-296(r1)
	PPC_STORE_U32(ctx.r1.u32 + -296, ctx.r11.u32);
	// addi r16,r10,25032
	ctx.r16.s64 = ctx.r10.s64 + 25032;
	// stw r11,-292(r1)
	PPC_STORE_U32(ctx.r1.u32 + -292, ctx.r11.u32);
	// stw r11,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r11.u32);
	// stw r11,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r11.u32);
	// stw r11,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r11.u32);
	// stw r11,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r11.u32);
	// stw r11,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r11.u32);
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// stw r11,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r11.u32);
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// stw r11,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r11.u32);
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// stw r11,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r11.u32);
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// ld r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// ld r9,-320(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -320);
	// ld r8,-192(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// ld r11,-304(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -304);
	// stw r7,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r7.u32);
	// stw r6,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r6.u32);
	// stw r29,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r29.u32);
	// stw r28,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r28.u32);
	// stw r27,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r27.u32);
	// stw r5,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r5.u32);
	// stw r4,-336(r1)
	PPC_STORE_U32(ctx.r1.u32 + -336, ctx.r4.u32);
	// stw r3,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r3.u32);
	// stw r31,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r31.u32);
	// stw r30,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r30.u32);
	// ld r7,-224(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// ld r6,-288(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// ld r5,-160(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// ld r4,-272(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// ld r3,-208(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// ld r31,-256(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// ld r30,-176(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// ld r29,-336(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -336);
	// ld r28,-328(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -328);
	// ld r27,-312(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -312);
	// ld r26,-296(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -296);
	// ld r25,-280(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// ld r24,-264(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// ld r23,-248(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// ld r22,-232(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// ld r21,-216(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// ld r20,-200(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// ld r19,-184(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// ld r18,-168(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// ld r17,-152(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r10,16(r16)
	PPC_STORE_U64(ctx.r16.u32 + 16, ctx.r10.u64);
	// std r9,24(r16)
	PPC_STORE_U64(ctx.r16.u32 + 24, ctx.r9.u64);
	// std r8,48(r16)
	PPC_STORE_U64(ctx.r16.u32 + 48, ctx.r8.u64);
	// std r11,56(r16)
	PPC_STORE_U64(ctx.r16.u32 + 56, ctx.r11.u64);
	// std r7,80(r16)
	PPC_STORE_U64(ctx.r16.u32 + 80, ctx.r7.u64);
	// std r6,88(r16)
	PPC_STORE_U64(ctx.r16.u32 + 88, ctx.r6.u64);
	// std r5,112(r16)
	PPC_STORE_U64(ctx.r16.u32 + 112, ctx.r5.u64);
	// std r4,120(r16)
	PPC_STORE_U64(ctx.r16.u32 + 120, ctx.r4.u64);
	// std r3,144(r16)
	PPC_STORE_U64(ctx.r16.u32 + 144, ctx.r3.u64);
	// std r31,152(r16)
	PPC_STORE_U64(ctx.r16.u32 + 152, ctx.r31.u64);
	// std r30,176(r16)
	PPC_STORE_U64(ctx.r16.u32 + 176, ctx.r30.u64);
	// std r29,184(r16)
	PPC_STORE_U64(ctx.r16.u32 + 184, ctx.r29.u64);
	// std r28,208(r16)
	PPC_STORE_U64(ctx.r16.u32 + 208, ctx.r28.u64);
	// std r27,216(r16)
	PPC_STORE_U64(ctx.r16.u32 + 216, ctx.r27.u64);
	// std r26,240(r16)
	PPC_STORE_U64(ctx.r16.u32 + 240, ctx.r26.u64);
	// std r25,248(r16)
	PPC_STORE_U64(ctx.r16.u32 + 248, ctx.r25.u64);
	// std r24,272(r16)
	PPC_STORE_U64(ctx.r16.u32 + 272, ctx.r24.u64);
	// std r23,280(r16)
	PPC_STORE_U64(ctx.r16.u32 + 280, ctx.r23.u64);
	// std r22,304(r16)
	PPC_STORE_U64(ctx.r16.u32 + 304, ctx.r22.u64);
	// std r21,312(r16)
	PPC_STORE_U64(ctx.r16.u32 + 312, ctx.r21.u64);
	// std r20,336(r16)
	PPC_STORE_U64(ctx.r16.u32 + 336, ctx.r20.u64);
	// std r19,344(r16)
	PPC_STORE_U64(ctx.r16.u32 + 344, ctx.r19.u64);
	// std r18,376(r16)
	PPC_STORE_U64(ctx.r16.u32 + 376, ctx.r18.u64);
	// std r17,368(r16)
	PPC_STORE_U64(ctx.r16.u32 + 368, ctx.r17.u64);
	// b 0x82a7de28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316E698"))) PPC_WEAK_FUNC(sub_8316E698);
PPC_FUNC_IMPL(__imp__sub_8316E698) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-30068
	ctx.r3.s64 = ctx.r11.s64 + -30068;
	// bl 0x82e73af8
	ctx.lr = 0x8316E6B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E6C8"))) PPC_WEAK_FUNC(sub_8316E6C8);
PPC_FUNC_IMPL(__imp__sub_8316E6C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-30044
	ctx.r3.s64 = ctx.r11.s64 + -30044;
	// bl 0x82e73af8
	ctx.lr = 0x8316E6E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14996, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E6F8"))) PPC_WEAK_FUNC(sub_8316E6F8);
PPC_FUNC_IMPL(__imp__sub_8316E6F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-30020
	ctx.r3.s64 = ctx.r11.s64 + -30020;
	// bl 0x82e73af8
	ctx.lr = 0x8316E710;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E728"))) PPC_WEAK_FUNC(sub_8316E728);
PPC_FUNC_IMPL(__imp__sub_8316E728) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29992
	ctx.r3.s64 = ctx.r11.s64 + -29992;
	// bl 0x82e73af8
	ctx.lr = 0x8316E740;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15040(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15040, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E758"))) PPC_WEAK_FUNC(sub_8316E758);
PPC_FUNC_IMPL(__imp__sub_8316E758) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29964
	ctx.r3.s64 = ctx.r11.s64 + -29964;
	// bl 0x82e73af8
	ctx.lr = 0x8316E770;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E788"))) PPC_WEAK_FUNC(sub_8316E788);
PPC_FUNC_IMPL(__imp__sub_8316E788) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29936
	ctx.r3.s64 = ctx.r11.s64 + -29936;
	// bl 0x82e73af8
	ctx.lr = 0x8316E7A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14076, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E7B8"))) PPC_WEAK_FUNC(sub_8316E7B8);
PPC_FUNC_IMPL(__imp__sub_8316E7B8) {
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
	// addi r30,r31,15080
	ctx.r30.s64 = ctx.r31.s64 + 15080;
	// addi r4,r11,-29908
	ctx.r4.s64 = ctx.r11.s64 + -29908;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316E7E4;
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
	// stw r10,15080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15080, ctx.r10.u32);
	// addi r3,r11,-10712
	ctx.r3.s64 = ctx.r11.s64 + -10712;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316E804;
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

__attribute__((alias("__imp__sub_8316E820"))) PPC_WEAK_FUNC(sub_8316E820);
PPC_FUNC_IMPL(__imp__sub_8316E820) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29856
	ctx.r3.s64 = ctx.r11.s64 + -29856;
	// bl 0x82e73af8
	ctx.lr = 0x8316E838;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15004, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E850"))) PPC_WEAK_FUNC(sub_8316E850);
PPC_FUNC_IMPL(__imp__sub_8316E850) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29832
	ctx.r3.s64 = ctx.r11.s64 + -29832;
	// bl 0x82e73af8
	ctx.lr = 0x8316E868;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14984, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E880"))) PPC_WEAK_FUNC(sub_8316E880);
PPC_FUNC_IMPL(__imp__sub_8316E880) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29800
	ctx.r3.s64 = ctx.r11.s64 + -29800;
	// bl 0x82e73af8
	ctx.lr = 0x8316E898;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E8B0"))) PPC_WEAK_FUNC(sub_8316E8B0);
PPC_FUNC_IMPL(__imp__sub_8316E8B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29780
	ctx.r3.s64 = ctx.r11.s64 + -29780;
	// bl 0x82e73af8
	ctx.lr = 0x8316E8C8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14804, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E8E0"))) PPC_WEAK_FUNC(sub_8316E8E0);
PPC_FUNC_IMPL(__imp__sub_8316E8E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29760
	ctx.r3.s64 = ctx.r11.s64 + -29760;
	// bl 0x82e73af8
	ctx.lr = 0x8316E8F8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E910"))) PPC_WEAK_FUNC(sub_8316E910);
PPC_FUNC_IMPL(__imp__sub_8316E910) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29740
	ctx.r3.s64 = ctx.r11.s64 + -29740;
	// bl 0x82e73af8
	ctx.lr = 0x8316E928;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E940"))) PPC_WEAK_FUNC(sub_8316E940);
PPC_FUNC_IMPL(__imp__sub_8316E940) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29716
	ctx.r3.s64 = ctx.r11.s64 + -29716;
	// bl 0x82e73af8
	ctx.lr = 0x8316E958;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E970"))) PPC_WEAK_FUNC(sub_8316E970);
PPC_FUNC_IMPL(__imp__sub_8316E970) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-29696
	ctx.r3.s64 = ctx.r11.s64 + -29696;
	// bl 0x82e73af8
	ctx.lr = 0x8316E988;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E9A0"))) PPC_WEAK_FUNC(sub_8316E9A0);
PPC_FUNC_IMPL(__imp__sub_8316E9A0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8316E9B8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15048, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E9D0"))) PPC_WEAK_FUNC(sub_8316E9D0);
PPC_FUNC_IMPL(__imp__sub_8316E9D0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8316E9E8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EA00"))) PPC_WEAK_FUNC(sub_8316EA00);
PPC_FUNC_IMPL(__imp__sub_8316EA00) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8316EA18;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EA30"))) PPC_WEAK_FUNC(sub_8316EA30);
PPC_FUNC_IMPL(__imp__sub_8316EA30) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8316EA48;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,14876(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EA60"))) PPC_WEAK_FUNC(sub_8316EA60);
PPC_FUNC_IMPL(__imp__sub_8316EA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-10496
	ctx.r3.s64 = ctx.r11.s64 + -10496;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316EA70"))) PPC_WEAK_FUNC(sub_8316EA70);
PPC_FUNC_IMPL(__imp__sub_8316EA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,16752
	ctx.r9.s64 = ctx.r11.s64 + 16752;
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

__attribute__((alias("__imp__sub_8316EAA0"))) PPC_WEAK_FUNC(sub_8316EAA0);
PPC_FUNC_IMPL(__imp__sub_8316EAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,16624
	ctx.r9.s64 = ctx.r11.s64 + 16624;
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

__attribute__((alias("__imp__sub_8316EAD0"))) PPC_WEAK_FUNC(sub_8316EAD0);
PPC_FUNC_IMPL(__imp__sub_8316EAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,16480
	ctx.r9.s64 = ctx.r11.s64 + 16480;
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

__attribute__((alias("__imp__sub_8316EB00"))) PPC_WEAK_FUNC(sub_8316EB00);
PPC_FUNC_IMPL(__imp__sub_8316EB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,16608
	ctx.r9.s64 = ctx.r11.s64 + 16608;
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

__attribute__((alias("__imp__sub_8316EB30"))) PPC_WEAK_FUNC(sub_8316EB30);
PPC_FUNC_IMPL(__imp__sub_8316EB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,16576
	ctx.r10.s64 = ctx.r10.s64 + 16576;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EB50"))) PPC_WEAK_FUNC(sub_8316EB50);
PPC_FUNC_IMPL(__imp__sub_8316EB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,15328
	ctx.r10.s64 = ctx.r10.s64 + 15328;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EB70"))) PPC_WEAK_FUNC(sub_8316EB70);
PPC_FUNC_IMPL(__imp__sub_8316EB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,16720
	ctx.r10.s64 = ctx.r10.s64 + 16720;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EB90"))) PPC_WEAK_FUNC(sub_8316EB90);
PPC_FUNC_IMPL(__imp__sub_8316EB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,16880
	ctx.r3.s64 = ctx.r11.s64 + 16880;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316EBA0"))) PPC_WEAK_FUNC(sub_8316EBA0);
PPC_FUNC_IMPL(__imp__sub_8316EBA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17952
	ctx.r3.s64 = ctx.r11.s64 + -17952;
	// bl 0x82e73af8
	ctx.lr = 0x8316EBB8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16596, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EBD0"))) PPC_WEAK_FUNC(sub_8316EBD0);
PPC_FUNC_IMPL(__imp__sub_8316EBD0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,-17928
	ctx.r4.s64 = ctx.r11.s64 + -17928;
	// addi r3,r10,16792
	ctx.r3.s64 = ctx.r10.s64 + 16792;
	// bl 0x82450f48
	ctx.lr = 0x8316EBF0;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-10480
	ctx.r3.s64 = ctx.r11.s64 + -10480;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316EBFC;
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

__attribute__((alias("__imp__sub_8316EC10"))) PPC_WEAK_FUNC(sub_8316EC10);
PPC_FUNC_IMPL(__imp__sub_8316EC10) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,-17864
	ctx.r4.s64 = ctx.r11.s64 + -17864;
	// addi r3,r10,16836
	ctx.r3.s64 = ctx.r10.s64 + 16836;
	// bl 0x82450f48
	ctx.lr = 0x8316EC30;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-10456
	ctx.r3.s64 = ctx.r11.s64 + -10456;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316EC3C;
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

__attribute__((alias("__imp__sub_8316EC50"))) PPC_WEAK_FUNC(sub_8316EC50);
PPC_FUNC_IMPL(__imp__sub_8316EC50) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,-17804
	ctx.r4.s64 = ctx.r11.s64 + -17804;
	// addi r3,r10,16496
	ctx.r3.s64 = ctx.r10.s64 + 16496;
	// bl 0x82450f48
	ctx.lr = 0x8316EC70;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-10432
	ctx.r3.s64 = ctx.r11.s64 + -10432;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316EC7C;
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

__attribute__((alias("__imp__sub_8316EC90"))) PPC_WEAK_FUNC(sub_8316EC90);
PPC_FUNC_IMPL(__imp__sub_8316EC90) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,-17740
	ctx.r4.s64 = ctx.r11.s64 + -17740;
	// addi r3,r10,16668
	ctx.r3.s64 = ctx.r10.s64 + 16668;
	// bl 0x82450f48
	ctx.lr = 0x8316ECB0;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-10408
	ctx.r3.s64 = ctx.r11.s64 + -10408;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316ECBC;
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

__attribute__((alias("__imp__sub_8316ECD0"))) PPC_WEAK_FUNC(sub_8316ECD0);
PPC_FUNC_IMPL(__imp__sub_8316ECD0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8316ECE8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17080, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ED00"))) PPC_WEAK_FUNC(sub_8316ED00);
PPC_FUNC_IMPL(__imp__sub_8316ED00) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8316ED18;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ED30"))) PPC_WEAK_FUNC(sub_8316ED30);
PPC_FUNC_IMPL(__imp__sub_8316ED30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17680
	ctx.r3.s64 = ctx.r11.s64 + -17680;
	// bl 0x82e73af8
	ctx.lr = 0x8316ED48;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ED60"))) PPC_WEAK_FUNC(sub_8316ED60);
PPC_FUNC_IMPL(__imp__sub_8316ED60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17664
	ctx.r3.s64 = ctx.r11.s64 + -17664;
	// bl 0x82e73af8
	ctx.lr = 0x8316ED78;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16704, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ED90"))) PPC_WEAK_FUNC(sub_8316ED90);
PPC_FUNC_IMPL(__imp__sub_8316ED90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17648
	ctx.r3.s64 = ctx.r11.s64 + -17648;
	// bl 0x82e73af8
	ctx.lr = 0x8316EDA8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16876(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EDC0"))) PPC_WEAK_FUNC(sub_8316EDC0);
PPC_FUNC_IMPL(__imp__sub_8316EDC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17624
	ctx.r3.s64 = ctx.r11.s64 + -17624;
	// bl 0x82e73af8
	ctx.lr = 0x8316EDD8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16592, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EDF0"))) PPC_WEAK_FUNC(sub_8316EDF0);
PPC_FUNC_IMPL(__imp__sub_8316EDF0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8316EE08;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EE20"))) PPC_WEAK_FUNC(sub_8316EE20);
PPC_FUNC_IMPL(__imp__sub_8316EE20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17600
	ctx.r3.s64 = ctx.r11.s64 + -17600;
	// bl 0x82e73af8
	ctx.lr = 0x8316EE38;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EE50"))) PPC_WEAK_FUNC(sub_8316EE50);
PPC_FUNC_IMPL(__imp__sub_8316EE50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17580
	ctx.r3.s64 = ctx.r11.s64 + -17580;
	// bl 0x82e73af8
	ctx.lr = 0x8316EE68;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EE80"))) PPC_WEAK_FUNC(sub_8316EE80);
PPC_FUNC_IMPL(__imp__sub_8316EE80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17560
	ctx.r3.s64 = ctx.r11.s64 + -17560;
	// bl 0x82e73af8
	ctx.lr = 0x8316EE98;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EEB0"))) PPC_WEAK_FUNC(sub_8316EEB0);
PPC_FUNC_IMPL(__imp__sub_8316EEB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17548
	ctx.r3.s64 = ctx.r11.s64 + -17548;
	// bl 0x82e73af8
	ctx.lr = 0x8316EEC8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16832(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EEE0"))) PPC_WEAK_FUNC(sub_8316EEE0);
PPC_FUNC_IMPL(__imp__sub_8316EEE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17536
	ctx.r3.s64 = ctx.r11.s64 + -17536;
	// bl 0x82e73af8
	ctx.lr = 0x8316EEF8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EF10"))) PPC_WEAK_FUNC(sub_8316EF10);
PPC_FUNC_IMPL(__imp__sub_8316EF10) {
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
	// addi r30,r31,16776
	ctx.r30.s64 = ctx.r31.s64 + 16776;
	// addi r4,r11,-17524
	ctx.r4.s64 = ctx.r11.s64 + -17524;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316EF3C;
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
	// stw r10,16776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16776, ctx.r10.u32);
	// addi r3,r11,-10672
	ctx.r3.s64 = ctx.r11.s64 + -10672;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316EF5C;
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

__attribute__((alias("__imp__sub_8316EF78"))) PPC_WEAK_FUNC(sub_8316EF78);
PPC_FUNC_IMPL(__imp__sub_8316EF78) {
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
	// addi r30,r31,17068
	ctx.r30.s64 = ctx.r31.s64 + 17068;
	// addi r4,r11,-17488
	ctx.r4.s64 = ctx.r11.s64 + -17488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316EFA4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r10,r10,25528
	ctx.r10.s64 = ctx.r10.s64 + 25528;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,17068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17068, ctx.r10.u32);
	// addi r3,r11,-10648
	ctx.r3.s64 = ctx.r11.s64 + -10648;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316EFC4;
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

__attribute__((alias("__imp__sub_8316EFE0"))) PPC_WEAK_FUNC(sub_8316EFE0);
PPC_FUNC_IMPL(__imp__sub_8316EFE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17452
	ctx.r3.s64 = ctx.r11.s64 + -17452;
	// bl 0x82e73af8
	ctx.lr = 0x8316EFF8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16864, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F010"))) PPC_WEAK_FUNC(sub_8316F010);
PPC_FUNC_IMPL(__imp__sub_8316F010) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-17432
	ctx.r3.s64 = ctx.r11.s64 + -17432;
	// bl 0x82e73af8
	ctx.lr = 0x8316F028;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F040"))) PPC_WEAK_FUNC(sub_8316F040);
PPC_FUNC_IMPL(__imp__sub_8316F040) {
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
	// addi r30,r31,16956
	ctx.r30.s64 = ctx.r31.s64 + 16956;
	// addi r4,r11,-17412
	ctx.r4.s64 = ctx.r11.s64 + -17412;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316F06C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,309
	ctx.r11.s64 = 309;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,16956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16956, ctx.r10.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// ori r10,r10,34464
	ctx.r10.u64 = ctx.r10.u64 | 34464;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-10624
	ctx.r3.s64 = ctx.r11.s64 + -10624;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316F0A8;
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

__attribute__((alias("__imp__sub_8316F0C0"))) PPC_WEAK_FUNC(sub_8316F0C0);
PPC_FUNC_IMPL(__imp__sub_8316F0C0) {
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
	// addi r30,r31,15348
	ctx.r30.s64 = ctx.r31.s64 + 15348;
	// addi r4,r11,-17396
	ctx.r4.s64 = ctx.r11.s64 + -17396;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316F0EC;
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
	// stw r10,15348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15348, ctx.r10.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// ori r10,r10,34464
	ctx.r10.u64 = ctx.r10.u64 | 34464;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-10600
	ctx.r3.s64 = ctx.r11.s64 + -10600;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316F128;
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

__attribute__((alias("__imp__sub_8316F140"))) PPC_WEAK_FUNC(sub_8316F140);
PPC_FUNC_IMPL(__imp__sub_8316F140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x8316F148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r29,15384
	ctx.r31.s64 = ctx.r29.s64 + 15384;
	// addi r4,r11,-16064
	ctx.r4.s64 = ctx.r11.s64 + -16064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316F164;
	sub_82C07410(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r28,r9,25548
	ctx.r28.s64 = ctx.r9.s64 + 25548;
	// ori r30,r8,34464
	ctx.r30.u64 = ctx.r8.u64 | 34464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,15384(r29)
	PPC_STORE_U32(ctx.r29.u32 + 15384, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,-16092
	ctx.r4.s64 = ctx.r11.s64 + -16092;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316F1AC;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r4,r11,-16120
	ctx.r4.s64 = ctx.r11.s64 + -16120;
	// bl 0x82c07410
	ctx.lr = 0x8316F1E4;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r4,r11,-16144
	ctx.r4.s64 = ctx.r11.s64 + -16144;
	// bl 0x82c07410
	ctx.lr = 0x8316F21C;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-16168
	ctx.r4.s64 = ctx.r11.s64 + -16168;
	// bl 0x82c07410
	ctx.lr = 0x8316F254;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r4,r10,-16200
	ctx.r4.s64 = ctx.r10.s64 + -16200;
	// bl 0x82c07410
	ctx.lr = 0x8316F28C;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r11,-16232
	ctx.r4.s64 = ctx.r11.s64 + -16232;
	// bl 0x82c07410
	ctx.lr = 0x8316F2C4;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// addi r4,r11,-16264
	ctx.r4.s64 = ctx.r11.s64 + -16264;
	// bl 0x82c07410
	ctx.lr = 0x8316F2FC;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r4,r11,-16296
	ctx.r4.s64 = ctx.r11.s64 + -16296;
	// bl 0x82c07410
	ctx.lr = 0x8316F334;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// addi r4,r11,-16324
	ctx.r4.s64 = ctx.r11.s64 + -16324;
	// bl 0x82c07410
	ctx.lr = 0x8316F36C;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// addi r4,r11,-16356
	ctx.r4.s64 = ctx.r11.s64 + -16356;
	// bl 0x82c07410
	ctx.lr = 0x8316F3A4;
	sub_82C07410(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r28.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// addi r4,r9,-16388
	ctx.r4.s64 = ctx.r9.s64 + -16388;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x82c07410
	ctx.lr = 0x8316F3DC;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// addi r4,r11,-16416
	ctx.r4.s64 = ctx.r11.s64 + -16416;
	// bl 0x82c07410
	ctx.lr = 0x8316F414;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// addi r4,r11,-16440
	ctx.r4.s64 = ctx.r11.s64 + -16440;
	// bl 0x82c07410
	ctx.lr = 0x8316F44C;
	sub_82C07410(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r28.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// addi r4,r10,-16472
	ctx.r4.s64 = ctx.r10.s64 + -16472;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316F480;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// addi r4,r11,-16508
	ctx.r4.s64 = ctx.r11.s64 + -16508;
	// bl 0x82c07410
	ctx.lr = 0x8316F4B8;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r9,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// addi r4,r11,-16536
	ctx.r4.s64 = ctx.r11.s64 + -16536;
	// bl 0x82c07410
	ctx.lr = 0x8316F4F0;
	sub_82C07410(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// addi r4,r11,-16564
	ctx.r4.s64 = ctx.r11.s64 + -16564;
	// bl 0x82c07410
	ctx.lr = 0x8316F528;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r9,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// addi r4,r11,-16592
	ctx.r4.s64 = ctx.r11.s64 + -16592;
	// bl 0x82c07410
	ctx.lr = 0x8316F560;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r9,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// addi r4,r11,-16616
	ctx.r4.s64 = ctx.r11.s64 + -16616;
	// bl 0x82c07410
	ctx.lr = 0x8316F598;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// addi r4,r11,-16644
	ctx.r4.s64 = ctx.r11.s64 + -16644;
	// bl 0x82c07410
	ctx.lr = 0x8316F5D0;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// stw r9,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,504
	ctx.r3.s64 = ctx.r31.s64 + 504;
	// addi r4,r11,-16672
	ctx.r4.s64 = ctx.r11.s64 + -16672;
	// bl 0x82c07410
	ctx.lr = 0x8316F608;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// stw r9,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r9.u32);
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// stw r10,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r10.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r4,r10,-16708
	ctx.r4.s64 = ctx.r10.s64 + -16708;
	// bl 0x82c07410
	ctx.lr = 0x8316F640;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r28.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// addi r4,r11,-16736
	ctx.r4.s64 = ctx.r11.s64 + -16736;
	// bl 0x82c07410
	ctx.lr = 0x8316F674;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// stw r9,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// addi r4,r11,-16768
	ctx.r4.s64 = ctx.r11.s64 + -16768;
	// bl 0x82c07410
	ctx.lr = 0x8316F6AC;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// stw r9,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// addi r4,r11,-16796
	ctx.r4.s64 = ctx.r11.s64 + -16796;
	// bl 0x82c07410
	ctx.lr = 0x8316F6E4;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// stw r9,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// addi r4,r11,-16824
	ctx.r4.s64 = ctx.r11.s64 + -16824;
	// bl 0x82c07410
	ctx.lr = 0x8316F71C;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
	// stw r9,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,648
	ctx.r3.s64 = ctx.r31.s64 + 648;
	// addi r4,r11,-16860
	ctx.r4.s64 = ctx.r11.s64 + -16860;
	// bl 0x82c07410
	ctx.lr = 0x8316F754;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// stw r9,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r9.u32);
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r4,r10,-16896
	ctx.r4.s64 = ctx.r10.s64 + -16896;
	// bl 0x82c07410
	ctx.lr = 0x8316F78C;
	sub_82C07410(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// stw r9,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r9.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r11,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r11.u32);
	// addi r3,r31,696
	ctx.r3.s64 = ctx.r31.s64 + 696;
	// stw r30,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r30.u32);
	// addi r4,r9,-16928
	ctx.r4.s64 = ctx.r9.s64 + -16928;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316F7C0;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// stw r9,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,720
	ctx.r3.s64 = ctx.r31.s64 + 720;
	// addi r4,r11,-16952
	ctx.r4.s64 = ctx.r11.s64 + -16952;
	// bl 0x82c07410
	ctx.lr = 0x8316F7F8;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r11.u32);
	// stw r9,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,744
	ctx.r3.s64 = ctx.r31.s64 + 744;
	// addi r4,r11,-16984
	ctx.r4.s64 = ctx.r11.s64 + -16984;
	// bl 0x82c07410
	ctx.lr = 0x8316F830;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
	// stw r9,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,768
	ctx.r3.s64 = ctx.r31.s64 + 768;
	// addi r4,r11,-17012
	ctx.r4.s64 = ctx.r11.s64 + -17012;
	// bl 0x82c07410
	ctx.lr = 0x8316F868;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
	// stw r9,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,792
	ctx.r3.s64 = ctx.r31.s64 + 792;
	// addi r4,r11,-17044
	ctx.r4.s64 = ctx.r11.s64 + -17044;
	// bl 0x82c07410
	ctx.lr = 0x8316F8A0;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// stw r9,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r9.u32);
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// stw r10,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r10.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r4,r10,-17076
	ctx.r4.s64 = ctx.r10.s64 + -17076;
	// bl 0x82c07410
	ctx.lr = 0x8316F8D8;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r30.u32);
	// stw r9,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,840
	ctx.r3.s64 = ctx.r31.s64 + 840;
	// addi r4,r11,-17104
	ctx.r4.s64 = ctx.r11.s64 + -17104;
	// bl 0x82c07410
	ctx.lr = 0x8316F910;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r11.u32);
	// stw r9,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,864
	ctx.r3.s64 = ctx.r31.s64 + 864;
	// addi r4,r11,-17128
	ctx.r4.s64 = ctx.r11.s64 + -17128;
	// bl 0x82c07410
	ctx.lr = 0x8316F948;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// stw r9,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// addi r4,r11,-17156
	ctx.r4.s64 = ctx.r11.s64 + -17156;
	// bl 0x82c07410
	ctx.lr = 0x8316F980;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// stw r9,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,912
	ctx.r3.s64 = ctx.r31.s64 + 912;
	// addi r4,r11,-17188
	ctx.r4.s64 = ctx.r11.s64 + -17188;
	// bl 0x82c07410
	ctx.lr = 0x8316F9B8;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// stw r9,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,936
	ctx.r3.s64 = ctx.r31.s64 + 936;
	// addi r4,r11,-17220
	ctx.r4.s64 = ctx.r11.s64 + -17220;
	// bl 0x82c07410
	ctx.lr = 0x8316F9F0;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r11.u32);
	// stw r9,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r9.u32);
	// addi r3,r31,960
	ctx.r3.s64 = ctx.r31.s64 + 960;
	// stw r10,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r10.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r4,r10,-17256
	ctx.r4.s64 = ctx.r10.s64 + -17256;
	// bl 0x82c07410
	ctx.lr = 0x8316FA28;
	sub_82C07410(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r30.u32);
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// addi r3,r31,984
	ctx.r3.s64 = ctx.r31.s64 + 984;
	// stw r10,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r10.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r11,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r11.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r4,r10,-17292
	ctx.r4.s64 = ctx.r10.s64 + -17292;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316FA5C;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r11.u32);
	// stw r9,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,1008
	ctx.r3.s64 = ctx.r31.s64 + 1008;
	// addi r4,r11,-17320
	ctx.r4.s64 = ctx.r11.s64 + -17320;
	// bl 0x82c07410
	ctx.lr = 0x8316FA94;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r11.u32);
	// stw r9,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,1032
	ctx.r3.s64 = ctx.r31.s64 + 1032;
	// addi r4,r11,-17348
	ctx.r4.s64 = ctx.r11.s64 + -17348;
	// bl 0x82c07410
	ctx.lr = 0x8316FACC;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r9,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r10.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,1056
	ctx.r3.s64 = ctx.r31.s64 + 1056;
	// addi r4,r11,-17376
	ctx.r4.s64 = ctx.r11.s64 + -17376;
	// bl 0x82c07410
	ctx.lr = 0x8316FB04;
	sub_82C07410(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// stw r9,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r9.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r10.u32);
	// addi r3,r11,-10576
	ctx.r3.s64 = ctx.r11.s64 + -10576;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316FB34;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FB40"))) PPC_WEAK_FUNC(sub_8316FB40);
PPC_FUNC_IMPL(__imp__sub_8316FB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8316FB48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31952
	ctx.r30.s64 = -2094006272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r30,16980
	ctx.r31.s64 = ctx.r30.s64 + 16980;
	// addi r4,r11,-15784
	ctx.r4.s64 = ctx.r11.s64 + -15784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316FB64;
	sub_82C07410(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r10,-28432
	ctx.r29.s64 = ctx.r10.s64 + -28432;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r29,16980(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16980, ctx.r29.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r4,r10,-15824
	ctx.r4.s64 = ctx.r10.s64 + -15824;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bl 0x82c07410
	ctx.lr = 0x8316FB8C;
	sub_82C07410(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r10,-15868
	ctx.r4.s64 = ctx.r10.s64 + -15868;
	// bl 0x82c07410
	ctx.lr = 0x8316FBAC;
	sub_82C07410(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r4,r10,-15912
	ctx.r4.s64 = ctx.r10.s64 + -15912;
	// bl 0x82c07410
	ctx.lr = 0x8316FBCC;
	sub_82C07410(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r4,r10,-15952
	ctx.r4.s64 = ctx.r10.s64 + -15952;
	// bl 0x82c07410
	ctx.lr = 0x8316FBEC;
	sub_82C07410(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r4,r10,-15992
	ctx.r4.s64 = ctx.r10.s64 + -15992;
	// bl 0x82c07410
	ctx.lr = 0x8316FC0C;
	sub_82C07410(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r4,r10,-16040
	ctx.r4.s64 = ctx.r10.s64 + -16040;
	// bl 0x82c07410
	ctx.lr = 0x8316FC2C;
	sub_82C07410(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r3,r10,-10536
	ctx.r3.s64 = ctx.r10.s64 + -10536;
	// bl 0x82a7e6b0
	ctx.lr = 0x8316FC48;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FC50"))) PPC_WEAK_FUNC(sub_8316FC50);
PPC_FUNC_IMPL(__imp__sub_8316FC50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15744
	ctx.r3.s64 = ctx.r11.s64 + -15744;
	// bl 0x82e73af8
	ctx.lr = 0x8316FC68;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FC80"))) PPC_WEAK_FUNC(sub_8316FC80);
PPC_FUNC_IMPL(__imp__sub_8316FC80) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8316FC98;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FCB0"))) PPC_WEAK_FUNC(sub_8316FCB0);
PPC_FUNC_IMPL(__imp__sub_8316FCB0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8316FCC8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16556, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FCE0"))) PPC_WEAK_FUNC(sub_8316FCE0);
PPC_FUNC_IMPL(__imp__sub_8316FCE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15724
	ctx.r3.s64 = ctx.r11.s64 + -15724;
	// bl 0x82e73af8
	ctx.lr = 0x8316FCF8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16600, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FD10"))) PPC_WEAK_FUNC(sub_8316FD10);
PPC_FUNC_IMPL(__imp__sub_8316FD10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15716
	ctx.r3.s64 = ctx.r11.s64 + -15716;
	// bl 0x82e73af8
	ctx.lr = 0x8316FD28;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15324, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FD40"))) PPC_WEAK_FUNC(sub_8316FD40);
PPC_FUNC_IMPL(__imp__sub_8316FD40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15704
	ctx.r3.s64 = ctx.r11.s64 + -15704;
	// bl 0x82e73af8
	ctx.lr = 0x8316FD58;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FD70"))) PPC_WEAK_FUNC(sub_8316FD70);
PPC_FUNC_IMPL(__imp__sub_8316FD70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,3084
	ctx.r3.s64 = ctx.r11.s64 + 3084;
	// bl 0x82e73af8
	ctx.lr = 0x8316FD88;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FDA0"))) PPC_WEAK_FUNC(sub_8316FDA0);
PPC_FUNC_IMPL(__imp__sub_8316FDA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15692
	ctx.r3.s64 = ctx.r11.s64 + -15692;
	// bl 0x82e73af8
	ctx.lr = 0x8316FDB8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FDD0"))) PPC_WEAK_FUNC(sub_8316FDD0);
PPC_FUNC_IMPL(__imp__sub_8316FDD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15680
	ctx.r3.s64 = ctx.r11.s64 + -15680;
	// bl 0x82e73af8
	ctx.lr = 0x8316FDE8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FE00"))) PPC_WEAK_FUNC(sub_8316FE00);
PPC_FUNC_IMPL(__imp__sub_8316FE00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,21376
	ctx.r3.s64 = ctx.r11.s64 + 21376;
	// bl 0x82e73af8
	ctx.lr = 0x8316FE18;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FE30"))) PPC_WEAK_FUNC(sub_8316FE30);
PPC_FUNC_IMPL(__imp__sub_8316FE30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15672
	ctx.r3.s64 = ctx.r11.s64 + -15672;
	// bl 0x82e73af8
	ctx.lr = 0x8316FE48;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FE60"))) PPC_WEAK_FUNC(sub_8316FE60);
PPC_FUNC_IMPL(__imp__sub_8316FE60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15656
	ctx.r3.s64 = ctx.r11.s64 + -15656;
	// bl 0x82e73af8
	ctx.lr = 0x8316FE78;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FE90"))) PPC_WEAK_FUNC(sub_8316FE90);
PPC_FUNC_IMPL(__imp__sub_8316FE90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15640
	ctx.r3.s64 = ctx.r11.s64 + -15640;
	// bl 0x82e73af8
	ctx.lr = 0x8316FEA8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FEC0"))) PPC_WEAK_FUNC(sub_8316FEC0);
PPC_FUNC_IMPL(__imp__sub_8316FEC0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8316FED8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FEF0"))) PPC_WEAK_FUNC(sub_8316FEF0);
PPC_FUNC_IMPL(__imp__sub_8316FEF0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8316FF08;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FF20"))) PPC_WEAK_FUNC(sub_8316FF20);
PPC_FUNC_IMPL(__imp__sub_8316FF20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15584
	ctx.r3.s64 = ctx.r11.s64 + -15584;
	// bl 0x82e73af8
	ctx.lr = 0x8316FF38;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FF50"))) PPC_WEAK_FUNC(sub_8316FF50);
PPC_FUNC_IMPL(__imp__sub_8316FF50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15564
	ctx.r3.s64 = ctx.r11.s64 + -15564;
	// bl 0x82e73af8
	ctx.lr = 0x8316FF68;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16824, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FF80"))) PPC_WEAK_FUNC(sub_8316FF80);
PPC_FUNC_IMPL(__imp__sub_8316FF80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1744
	ctx.r3.s64 = ctx.r11.s64 + 1744;
	// bl 0x82e73af8
	ctx.lr = 0x8316FF98;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16868, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FFB0"))) PPC_WEAK_FUNC(sub_8316FFB0);
PPC_FUNC_IMPL(__imp__sub_8316FFB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15548
	ctx.r3.s64 = ctx.r11.s64 + -15548;
	// bl 0x82e73af8
	ctx.lr = 0x8316FFC8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FFE0"))) PPC_WEAK_FUNC(sub_8316FFE0);
PPC_FUNC_IMPL(__imp__sub_8316FFE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1980
	ctx.r3.s64 = ctx.r11.s64 + 1980;
	// bl 0x82e73af8
	ctx.lr = 0x8316FFF8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16820, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170010"))) PPC_WEAK_FUNC(sub_83170010);
PPC_FUNC_IMPL(__imp__sub_83170010) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15528
	ctx.r3.s64 = ctx.r11.s64 + -15528;
	// bl 0x82e73af8
	ctx.lr = 0x83170028;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170040"))) PPC_WEAK_FUNC(sub_83170040);
PPC_FUNC_IMPL(__imp__sub_83170040) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15508
	ctx.r3.s64 = ctx.r11.s64 + -15508;
	// bl 0x82e73af8
	ctx.lr = 0x83170058;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170070"))) PPC_WEAK_FUNC(sub_83170070);
PPC_FUNC_IMPL(__imp__sub_83170070) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15488
	ctx.r3.s64 = ctx.r11.s64 + -15488;
	// bl 0x82e73ab0
	ctx.lr = 0x83170088;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831700A0"))) PPC_WEAK_FUNC(sub_831700A0);
PPC_FUNC_IMPL(__imp__sub_831700A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r7,-32135
	ctx.r7.s64 = -2105999360;
	// addi r10,r10,26656
	ctx.r10.s64 = ctx.r10.s64 + 26656;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// stw r10,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r8,-32136
	ctx.r8.s64 = -2106064896;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r7,-18528
	ctx.r7.s64 = ctx.r7.s64 + -18528;
	// addi r9,r9,11432
	ctx.r9.s64 = ctx.r9.s64 + 11432;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// addi r8,r8,26872
	ctx.r8.s64 = ctx.r8.s64 + 26872;
	// stw r7,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// addi r5,r10,26656
	ctx.r5.s64 = ctx.r10.s64 + 26656;
	// ld r7,-8(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// lis r6,-31964
	ctx.r6.s64 = -2094792704;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r6,r6,28208
	ctx.r6.s64 = ctx.r6.s64 + 28208;
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r5,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r5.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r9,-24(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r7,112(r6)
	PPC_STORE_U64(ctx.r6.u32 + 112, ctx.r7.u64);
	// std r10,40(r6)
	PPC_STORE_U64(ctx.r6.u32 + 40, ctx.r10.u64);
	// std r9,64(r6)
	PPC_STORE_U64(ctx.r6.u32 + 64, ctx.r9.u64);
	// std r8,88(r6)
	PPC_STORE_U64(ctx.r6.u32 + 88, ctx.r8.u64);
	// std r11,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170128"))) PPC_WEAK_FUNC(sub_83170128);
PPC_FUNC_IMPL(__imp__sub_83170128) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83170140;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170158"))) PPC_WEAK_FUNC(sub_83170158);
PPC_FUNC_IMPL(__imp__sub_83170158) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31356
	ctx.r3.s64 = ctx.r11.s64 + -31356;
	// bl 0x82e73ab0
	ctx.lr = 0x83170170;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170188"))) PPC_WEAK_FUNC(sub_83170188);
PPC_FUNC_IMPL(__imp__sub_83170188) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31332
	ctx.r3.s64 = ctx.r11.s64 + -31332;
	// bl 0x82e73ab0
	ctx.lr = 0x831701A0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831701B8"))) PPC_WEAK_FUNC(sub_831701B8);
PPC_FUNC_IMPL(__imp__sub_831701B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31308
	ctx.r3.s64 = ctx.r11.s64 + -31308;
	// bl 0x82e73ab0
	ctx.lr = 0x831701D0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831701E8"))) PPC_WEAK_FUNC(sub_831701E8);
PPC_FUNC_IMPL(__imp__sub_831701E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31280
	ctx.r3.s64 = ctx.r11.s64 + -31280;
	// bl 0x82e73ab0
	ctx.lr = 0x83170200;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16952, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170218"))) PPC_WEAK_FUNC(sub_83170218);
PPC_FUNC_IMPL(__imp__sub_83170218) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31260
	ctx.r3.s64 = ctx.r11.s64 + -31260;
	// bl 0x82e73ab0
	ctx.lr = 0x83170230;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170248"))) PPC_WEAK_FUNC(sub_83170248);
PPC_FUNC_IMPL(__imp__sub_83170248) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31244
	ctx.r3.s64 = ctx.r11.s64 + -31244;
	// bl 0x82e73ab0
	ctx.lr = 0x83170260;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170278"))) PPC_WEAK_FUNC(sub_83170278);
PPC_FUNC_IMPL(__imp__sub_83170278) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31224
	ctx.r3.s64 = ctx.r11.s64 + -31224;
	// bl 0x82e73ab0
	ctx.lr = 0x83170290;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831702A8"))) PPC_WEAK_FUNC(sub_831702A8);
PPC_FUNC_IMPL(__imp__sub_831702A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31212
	ctx.r3.s64 = ctx.r11.s64 + -31212;
	// bl 0x82e73ab0
	ctx.lr = 0x831702C0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831702D8"))) PPC_WEAK_FUNC(sub_831702D8);
PPC_FUNC_IMPL(__imp__sub_831702D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15468
	ctx.r3.s64 = ctx.r11.s64 + -15468;
	// bl 0x82e73ab0
	ctx.lr = 0x831702F0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170308"))) PPC_WEAK_FUNC(sub_83170308);
PPC_FUNC_IMPL(__imp__sub_83170308) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15436
	ctx.r3.s64 = ctx.r11.s64 + -15436;
	// bl 0x82e73ab0
	ctx.lr = 0x83170320;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170338"))) PPC_WEAK_FUNC(sub_83170338);
PPC_FUNC_IMPL(__imp__sub_83170338) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83170350;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170368"))) PPC_WEAK_FUNC(sub_83170368);
PPC_FUNC_IMPL(__imp__sub_83170368) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83170380;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170398"))) PPC_WEAK_FUNC(sub_83170398);
PPC_FUNC_IMPL(__imp__sub_83170398) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831703B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831703C8"))) PPC_WEAK_FUNC(sub_831703C8);
PPC_FUNC_IMPL(__imp__sub_831703C8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831703E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16700, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831703F8"))) PPC_WEAK_FUNC(sub_831703F8);
PPC_FUNC_IMPL(__imp__sub_831703F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15400
	ctx.r3.s64 = ctx.r11.s64 + -15400;
	// bl 0x82e73af8
	ctx.lr = 0x83170410;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,15320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170428"))) PPC_WEAK_FUNC(sub_83170428);
PPC_FUNC_IMPL(__imp__sub_83170428) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15372
	ctx.r3.s64 = ctx.r11.s64 + -15372;
	// bl 0x82e73af8
	ctx.lr = 0x83170440;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170458"))) PPC_WEAK_FUNC(sub_83170458);
PPC_FUNC_IMPL(__imp__sub_83170458) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83170470;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170488"))) PPC_WEAK_FUNC(sub_83170488);
PPC_FUNC_IMPL(__imp__sub_83170488) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831704A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831704B8"))) PPC_WEAK_FUNC(sub_831704B8);
PPC_FUNC_IMPL(__imp__sub_831704B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15344
	ctx.r3.s64 = ctx.r11.s64 + -15344;
	// bl 0x82e73af8
	ctx.lr = 0x831704D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,16740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831704E8"))) PPC_WEAK_FUNC(sub_831704E8);
PPC_FUNC_IMPL(__imp__sub_831704E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-10360
	ctx.r3.s64 = ctx.r11.s64 + -10360;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831704F8"))) PPC_WEAK_FUNC(sub_831704F8);
PPC_FUNC_IMPL(__imp__sub_831704F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,17312
	ctx.r9.s64 = ctx.r11.s64 + 17312;
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

__attribute__((alias("__imp__sub_83170528"))) PPC_WEAK_FUNC(sub_83170528);
PPC_FUNC_IMPL(__imp__sub_83170528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,17232
	ctx.r9.s64 = ctx.r11.s64 + 17232;
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

__attribute__((alias("__imp__sub_83170558"))) PPC_WEAK_FUNC(sub_83170558);
PPC_FUNC_IMPL(__imp__sub_83170558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,17152
	ctx.r9.s64 = ctx.r11.s64 + 17152;
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

__attribute__((alias("__imp__sub_83170588"))) PPC_WEAK_FUNC(sub_83170588);
PPC_FUNC_IMPL(__imp__sub_83170588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,17216
	ctx.r9.s64 = ctx.r11.s64 + 17216;
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

__attribute__((alias("__imp__sub_831705B8"))) PPC_WEAK_FUNC(sub_831705B8);
PPC_FUNC_IMPL(__imp__sub_831705B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,17184
	ctx.r10.s64 = ctx.r10.s64 + 17184;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831705D8"))) PPC_WEAK_FUNC(sub_831705D8);
PPC_FUNC_IMPL(__imp__sub_831705D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,17136
	ctx.r10.s64 = ctx.r10.s64 + 17136;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831705F8"))) PPC_WEAK_FUNC(sub_831705F8);
PPC_FUNC_IMPL(__imp__sub_831705F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,17296
	ctx.r10.s64 = ctx.r10.s64 + 17296;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170618"))) PPC_WEAK_FUNC(sub_83170618);
PPC_FUNC_IMPL(__imp__sub_83170618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,17440
	ctx.r3.s64 = ctx.r11.s64 + 17440;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170628"))) PPC_WEAK_FUNC(sub_83170628);
PPC_FUNC_IMPL(__imp__sub_83170628) {
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
	// addi r3,r11,6612
	ctx.r3.s64 = ctx.r11.s64 + 6612;
	// bl 0x82e73af8
	ctx.lr = 0x83170644;
	sub_82E73AF8(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r31,r10,17560
	ctx.r31.s64 = ctx.r10.s64 + 17560;
	// addi r3,r9,6596
	ctx.r3.s64 = ctx.r9.s64 + 6596;
	// stw r11,17560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17560, ctx.r11.u32);
	// bl 0x82e73af8
	ctx.lr = 0x83170660;
	sub_82E73AF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,6580
	ctx.r3.s64 = ctx.r11.s64 + 6580;
	// bl 0x82e73af8
	ctx.lr = 0x83170670;
	sub_82E73AF8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,6564
	ctx.r3.s64 = ctx.r11.s64 + 6564;
	// bl 0x82e73af8
	ctx.lr = 0x83170680;
	sub_82E73AF8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,6548
	ctx.r3.s64 = ctx.r11.s64 + 6548;
	// bl 0x82e73af8
	ctx.lr = 0x83170690;
	sub_82E73AF8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,6536
	ctx.r3.s64 = ctx.r11.s64 + 6536;
	// bl 0x82e73af8
	ctx.lr = 0x831706A0;
	sub_82E73AF8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,6524
	ctx.r3.s64 = ctx.r11.s64 + 6524;
	// bl 0x82e73af8
	ctx.lr = 0x831706B0;
	sub_82E73AF8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_831706C8"))) PPC_WEAK_FUNC(sub_831706C8);
PPC_FUNC_IMPL(__imp__sub_831706C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6624
	ctx.r3.s64 = ctx.r11.s64 + 6624;
	// bl 0x82e73af8
	ctx.lr = 0x831706E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831706F8"))) PPC_WEAK_FUNC(sub_831706F8);
PPC_FUNC_IMPL(__imp__sub_831706F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6644
	ctx.r3.s64 = ctx.r11.s64 + 6644;
	// bl 0x82e73af8
	ctx.lr = 0x83170710;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170728"))) PPC_WEAK_FUNC(sub_83170728);
PPC_FUNC_IMPL(__imp__sub_83170728) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6664
	ctx.r3.s64 = ctx.r11.s64 + 6664;
	// bl 0x82e73af8
	ctx.lr = 0x83170740;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170758"))) PPC_WEAK_FUNC(sub_83170758);
PPC_FUNC_IMPL(__imp__sub_83170758) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83170770;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170788"))) PPC_WEAK_FUNC(sub_83170788);
PPC_FUNC_IMPL(__imp__sub_83170788) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831707A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831707B8"))) PPC_WEAK_FUNC(sub_831707B8);
PPC_FUNC_IMPL(__imp__sub_831707B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6676
	ctx.r3.s64 = ctx.r11.s64 + 6676;
	// bl 0x82e73af8
	ctx.lr = 0x831707D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831707E8"))) PPC_WEAK_FUNC(sub_831707E8);
PPC_FUNC_IMPL(__imp__sub_831707E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6692
	ctx.r3.s64 = ctx.r11.s64 + 6692;
	// bl 0x82e73af8
	ctx.lr = 0x83170800;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170818"))) PPC_WEAK_FUNC(sub_83170818);
PPC_FUNC_IMPL(__imp__sub_83170818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x83170820;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r31,r11,26876
	ctx.r31.s64 = ctx.r11.s64 + 26876;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca7538
	ctx.lr = 0x83170834;
	sub_82CA7538(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,6876
	ctx.r3.s64 = ctx.r11.s64 + 6876;
	// bl 0x82ca7538
	ctx.lr = 0x83170844;
	sub_82CA7538(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,17684
	ctx.r30.s64 = ctx.r10.s64 + 17684;
	// stw r11,17684(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17684, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8317085C;
	sub_82CA7538(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,6848
	ctx.r3.s64 = ctx.r11.s64 + 6848;
	// bl 0x82ca7538
	ctx.lr = 0x8317086C;
	sub_82CA7538(ctx, base);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8317087C;
	sub_82CA7538(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,6816
	ctx.r3.s64 = ctx.r11.s64 + 6816;
	// bl 0x82ca7538
	ctx.lr = 0x8317088C;
	sub_82CA7538(ctx, base);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x8317089C;
	sub_82CA7538(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,6792
	ctx.r3.s64 = ctx.r11.s64 + 6792;
	// bl 0x82ca7538
	ctx.lr = 0x831708AC;
	sub_82CA7538(ctx, base);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831708BC;
	sub_82CA7538(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,6764
	ctx.r3.s64 = ctx.r11.s64 + 6764;
	// bl 0x82ca7538
	ctx.lr = 0x831708CC;
	sub_82CA7538(ctx, base);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831708DC;
	sub_82CA7538(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,6736
	ctx.r3.s64 = ctx.r11.s64 + 6736;
	// bl 0x82ca7538
	ctx.lr = 0x831708EC;
	sub_82CA7538(ctx, base);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831708FC;
	sub_82CA7538(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r31,r3,16,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,6708
	ctx.r3.s64 = ctx.r11.s64 + 6708;
	// bl 0x82ca7538
	ctx.lr = 0x8317090C;
	sub_82CA7538(ctx, base);
	// or r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 | ctx.r31.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170920"))) PPC_WEAK_FUNC(sub_83170920);
PPC_FUNC_IMPL(__imp__sub_83170920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x83170928;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r31,r11,26876
	ctx.r31.s64 = ctx.r11.s64 + 26876;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca7538
	ctx.lr = 0x8317093C;
	sub_82CA7538(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,7040
	ctx.r3.s64 = ctx.r11.s64 + 7040;
	// bl 0x82ca7538
	ctx.lr = 0x8317094C;
	sub_82CA7538(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,17532
	ctx.r30.s64 = ctx.r10.s64 + 17532;
	// stw r11,17532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17532, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83170964;
	sub_82CA7538(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,7016
	ctx.r3.s64 = ctx.r11.s64 + 7016;
	// bl 0x82ca7538
	ctx.lr = 0x83170974;
	sub_82CA7538(ctx, base);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83170984;
	sub_82CA7538(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,6988
	ctx.r3.s64 = ctx.r11.s64 + 6988;
	// bl 0x82ca7538
	ctx.lr = 0x83170994;
	sub_82CA7538(ctx, base);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831709A4;
	sub_82CA7538(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,6968
	ctx.r3.s64 = ctx.r11.s64 + 6968;
	// bl 0x82ca7538
	ctx.lr = 0x831709B4;
	sub_82CA7538(ctx, base);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831709C4;
	sub_82CA7538(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,6944
	ctx.r3.s64 = ctx.r11.s64 + 6944;
	// bl 0x82ca7538
	ctx.lr = 0x831709D4;
	sub_82CA7538(ctx, base);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x831709E4;
	sub_82CA7538(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r29,r3,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,6924
	ctx.r3.s64 = ctx.r11.s64 + 6924;
	// bl 0x82ca7538
	ctx.lr = 0x831709F4;
	sub_82CA7538(ctx, base);
	// or r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x82ca7538
	ctx.lr = 0x83170A04;
	sub_82CA7538(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r31,r3,16,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r11,6900
	ctx.r3.s64 = ctx.r11.s64 + 6900;
	// bl 0x82ca7538
	ctx.lr = 0x83170A14;
	sub_82CA7538(ctx, base);
	// or r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 | ctx.r31.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170A28"))) PPC_WEAK_FUNC(sub_83170A28);
PPC_FUNC_IMPL(__imp__sub_83170A28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7060
	ctx.r3.s64 = ctx.r11.s64 + 7060;
	// bl 0x82e73af8
	ctx.lr = 0x83170A40;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170A58"))) PPC_WEAK_FUNC(sub_83170A58);
PPC_FUNC_IMPL(__imp__sub_83170A58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7080
	ctx.r3.s64 = ctx.r11.s64 + 7080;
	// bl 0x82e73af8
	ctx.lr = 0x83170A70;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170A88"))) PPC_WEAK_FUNC(sub_83170A88);
PPC_FUNC_IMPL(__imp__sub_83170A88) {
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
	// addi r3,r11,7224
	ctx.r3.s64 = ctx.r11.s64 + 7224;
	// bl 0x82e73af8
	ctx.lr = 0x83170AA4;
	sub_82E73AF8(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r31,r10,17612
	ctx.r31.s64 = ctx.r10.s64 + 17612;
	// addi r3,r9,7208
	ctx.r3.s64 = ctx.r9.s64 + 7208;
	// stw r11,17612(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17612, ctx.r11.u32);
	// bl 0x82e73af8
	ctx.lr = 0x83170AC0;
	sub_82E73AF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,7192
	ctx.r3.s64 = ctx.r11.s64 + 7192;
	// bl 0x82e73af8
	ctx.lr = 0x83170AD0;
	sub_82E73AF8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,7180
	ctx.r3.s64 = ctx.r11.s64 + 7180;
	// bl 0x82e73af8
	ctx.lr = 0x83170AE0;
	sub_82E73AF8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,7164
	ctx.r3.s64 = ctx.r11.s64 + 7164;
	// bl 0x82e73af8
	ctx.lr = 0x83170AF0;
	sub_82E73AF8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,7148
	ctx.r3.s64 = ctx.r11.s64 + 7148;
	// bl 0x82e73af8
	ctx.lr = 0x83170B00;
	sub_82E73AF8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,7136
	ctx.r3.s64 = ctx.r11.s64 + 7136;
	// bl 0x82e73af8
	ctx.lr = 0x83170B10;
	sub_82E73AF8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,7120
	ctx.r3.s64 = ctx.r11.s64 + 7120;
	// bl 0x82e73af8
	ctx.lr = 0x83170B20;
	sub_82E73AF8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,7100
	ctx.r3.s64 = ctx.r11.s64 + 7100;
	// bl 0x82e73af8
	ctx.lr = 0x83170B30;
	sub_82E73AF8(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83170B48"))) PPC_WEAK_FUNC(sub_83170B48);
PPC_FUNC_IMPL(__imp__sub_83170B48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7236
	ctx.r3.s64 = ctx.r11.s64 + 7236;
	// bl 0x82e73af8
	ctx.lr = 0x83170B60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170B78"))) PPC_WEAK_FUNC(sub_83170B78);
PPC_FUNC_IMPL(__imp__sub_83170B78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7252
	ctx.r3.s64 = ctx.r11.s64 + 7252;
	// bl 0x82e73af8
	ctx.lr = 0x83170B90;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170BA8"))) PPC_WEAK_FUNC(sub_83170BA8);
PPC_FUNC_IMPL(__imp__sub_83170BA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7272
	ctx.r3.s64 = ctx.r11.s64 + 7272;
	// bl 0x82e73af8
	ctx.lr = 0x83170BC0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170BD8"))) PPC_WEAK_FUNC(sub_83170BD8);
PPC_FUNC_IMPL(__imp__sub_83170BD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7288
	ctx.r3.s64 = ctx.r11.s64 + 7288;
	// bl 0x82e73af8
	ctx.lr = 0x83170BF0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170C08"))) PPC_WEAK_FUNC(sub_83170C08);
PPC_FUNC_IMPL(__imp__sub_83170C08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7304
	ctx.r3.s64 = ctx.r11.s64 + 7304;
	// bl 0x82e73af8
	ctx.lr = 0x83170C20;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170C38"))) PPC_WEAK_FUNC(sub_83170C38);
PPC_FUNC_IMPL(__imp__sub_83170C38) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83170C50;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170C68"))) PPC_WEAK_FUNC(sub_83170C68);
PPC_FUNC_IMPL(__imp__sub_83170C68) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83170C80;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170C98"))) PPC_WEAK_FUNC(sub_83170C98);
PPC_FUNC_IMPL(__imp__sub_83170C98) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r4,r11,7316
	ctx.r4.s64 = ctx.r11.s64 + 7316;
	// addi r3,r10,17108
	ctx.r3.s64 = ctx.r10.s64 + 17108;
	// bl 0x82450f48
	ctx.lr = 0x83170CB8;
	sub_82450F48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-10344
	ctx.r3.s64 = ctx.r11.s64 + -10344;
	// bl 0x82a7e6b0
	ctx.lr = 0x83170CC4;
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

__attribute__((alias("__imp__sub_83170CD8"))) PPC_WEAK_FUNC(sub_83170CD8);
PPC_FUNC_IMPL(__imp__sub_83170CD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7352
	ctx.r3.s64 = ctx.r11.s64 + 7352;
	// bl 0x82e73af8
	ctx.lr = 0x83170CF0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17328, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170D08"))) PPC_WEAK_FUNC(sub_83170D08);
PPC_FUNC_IMPL(__imp__sub_83170D08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-13632
	ctx.r3.s64 = ctx.r11.s64 + -13632;
	// bl 0x82e73af8
	ctx.lr = 0x83170D20;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170D38"))) PPC_WEAK_FUNC(sub_83170D38);
PPC_FUNC_IMPL(__imp__sub_83170D38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-13616
	ctx.r3.s64 = ctx.r11.s64 + -13616;
	// bl 0x82e73af8
	ctx.lr = 0x83170D50;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170D68"))) PPC_WEAK_FUNC(sub_83170D68);
PPC_FUNC_IMPL(__imp__sub_83170D68) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83170D80;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170D98"))) PPC_WEAK_FUNC(sub_83170D98);
PPC_FUNC_IMPL(__imp__sub_83170D98) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83170DB0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170DC8"))) PPC_WEAK_FUNC(sub_83170DC8);
PPC_FUNC_IMPL(__imp__sub_83170DC8) {
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
	// addi r3,r11,7384
	ctx.r3.s64 = ctx.r11.s64 + 7384;
	// bl 0x82e73af8
	ctx.lr = 0x83170DE4;
	sub_82E73AF8(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r31,r10,17600
	ctx.r31.s64 = ctx.r10.s64 + 17600;
	// addi r3,r9,7372
	ctx.r3.s64 = ctx.r9.s64 + 7372;
	// stw r11,17600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17600, ctx.r11.u32);
	// bl 0x82e73af8
	ctx.lr = 0x83170E00;
	sub_82E73AF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,7364
	ctx.r3.s64 = ctx.r11.s64 + 7364;
	// bl 0x82e73af8
	ctx.lr = 0x83170E10;
	sub_82E73AF8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83170E28"))) PPC_WEAK_FUNC(sub_83170E28);
PPC_FUNC_IMPL(__imp__sub_83170E28) {
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
	// addi r3,r11,7400
	ctx.r3.s64 = ctx.r11.s64 + 7400;
	// bl 0x82e73af8
	ctx.lr = 0x83170E44;
	sub_82E73AF8(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r31,r10,17712
	ctx.r31.s64 = ctx.r10.s64 + 17712;
	// addi r3,r9,7392
	ctx.r3.s64 = ctx.r9.s64 + 7392;
	// stw r11,17712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17712, ctx.r11.u32);
	// bl 0x82e73af8
	ctx.lr = 0x83170E60;
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

__attribute__((alias("__imp__sub_83170E78"))) PPC_WEAK_FUNC(sub_83170E78);
PPC_FUNC_IMPL(__imp__sub_83170E78) {
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
	// addi r3,r11,7428
	ctx.r3.s64 = ctx.r11.s64 + 7428;
	// bl 0x82e73af8
	ctx.lr = 0x83170E94;
	sub_82E73AF8(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r31,r10,17588
	ctx.r31.s64 = ctx.r10.s64 + 17588;
	// addi r3,r9,7420
	ctx.r3.s64 = ctx.r9.s64 + 7420;
	// stw r11,17588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17588, ctx.r11.u32);
	// bl 0x82e73af8
	ctx.lr = 0x83170EB0;
	sub_82E73AF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,7412
	ctx.r3.s64 = ctx.r11.s64 + 7412;
	// bl 0x82e73af8
	ctx.lr = 0x83170EC0;
	sub_82E73AF8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83170ED8"))) PPC_WEAK_FUNC(sub_83170ED8);
PPC_FUNC_IMPL(__imp__sub_83170ED8) {
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
	// addi r3,r11,7652
	ctx.r3.s64 = ctx.r11.s64 + 7652;
	// bl 0x82e73af8
	ctx.lr = 0x83170EF4;
	sub_82E73AF8(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r31,r10,17648
	ctx.r31.s64 = ctx.r10.s64 + 17648;
	// addi r3,r9,7620
	ctx.r3.s64 = ctx.r9.s64 + 7620;
	// stw r11,17648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17648, ctx.r11.u32);
	// bl 0x82e73af8
	ctx.lr = 0x83170F10;
	sub_82E73AF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,7596
	ctx.r3.s64 = ctx.r11.s64 + 7596;
	// bl 0x82e73af8
	ctx.lr = 0x83170F20;
	sub_82E73AF8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,7564
	ctx.r3.s64 = ctx.r11.s64 + 7564;
	// bl 0x82e73af8
	ctx.lr = 0x83170F30;
	sub_82E73AF8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,7536
	ctx.r3.s64 = ctx.r11.s64 + 7536;
	// bl 0x82e73af8
	ctx.lr = 0x83170F40;
	sub_82E73AF8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,7512
	ctx.r3.s64 = ctx.r11.s64 + 7512;
	// bl 0x82e73af8
	ctx.lr = 0x83170F50;
	sub_82E73AF8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,7492
	ctx.r3.s64 = ctx.r11.s64 + 7492;
	// bl 0x82e73af8
	ctx.lr = 0x83170F60;
	sub_82E73AF8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,7468
	ctx.r3.s64 = ctx.r11.s64 + 7468;
	// bl 0x82e73af8
	ctx.lr = 0x83170F70;
	sub_82E73AF8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,7444
	ctx.r3.s64 = ctx.r11.s64 + 7444;
	// bl 0x82e73af8
	ctx.lr = 0x83170F80;
	sub_82E73AF8(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83170F98"))) PPC_WEAK_FUNC(sub_83170F98);
PPC_FUNC_IMPL(__imp__sub_83170F98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1684
	ctx.r3.s64 = ctx.r11.s64 + 1684;
	// bl 0x82e73ab0
	ctx.lr = 0x83170FB0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170FC8"))) PPC_WEAK_FUNC(sub_83170FC8);
PPC_FUNC_IMPL(__imp__sub_83170FC8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83170FE0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170FF8"))) PPC_WEAK_FUNC(sub_83170FF8);
PPC_FUNC_IMPL(__imp__sub_83170FF8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171010;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171028"))) PPC_WEAK_FUNC(sub_83171028);
PPC_FUNC_IMPL(__imp__sub_83171028) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7676
	ctx.r3.s64 = ctx.r11.s64 + 7676;
	// bl 0x82e73af8
	ctx.lr = 0x83171040;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171058"))) PPC_WEAK_FUNC(sub_83171058);
PPC_FUNC_IMPL(__imp__sub_83171058) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7696
	ctx.r3.s64 = ctx.r11.s64 + 7696;
	// bl 0x82e73af8
	ctx.lr = 0x83171070;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17404, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171088"))) PPC_WEAK_FUNC(sub_83171088);
PPC_FUNC_IMPL(__imp__sub_83171088) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-11080
	ctx.r3.s64 = ctx.r11.s64 + -11080;
	// bl 0x82e73af8
	ctx.lr = 0x831710A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831710B8"))) PPC_WEAK_FUNC(sub_831710B8);
PPC_FUNC_IMPL(__imp__sub_831710B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-11356
	ctx.r3.s64 = ctx.r11.s64 + -11356;
	// bl 0x82e73af8
	ctx.lr = 0x831710D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831710E8"))) PPC_WEAK_FUNC(sub_831710E8);
PPC_FUNC_IMPL(__imp__sub_831710E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7716
	ctx.r3.s64 = ctx.r11.s64 + 7716;
	// bl 0x82e73af8
	ctx.lr = 0x83171100;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171118"))) PPC_WEAK_FUNC(sub_83171118);
PPC_FUNC_IMPL(__imp__sub_83171118) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7732
	ctx.r3.s64 = ctx.r11.s64 + 7732;
	// bl 0x82e73af8
	ctx.lr = 0x83171130;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171148"))) PPC_WEAK_FUNC(sub_83171148);
PPC_FUNC_IMPL(__imp__sub_83171148) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7744
	ctx.r3.s64 = ctx.r11.s64 + 7744;
	// bl 0x82e73af8
	ctx.lr = 0x83171160;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171178"))) PPC_WEAK_FUNC(sub_83171178);
PPC_FUNC_IMPL(__imp__sub_83171178) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7756
	ctx.r3.s64 = ctx.r11.s64 + 7756;
	// bl 0x82e73af8
	ctx.lr = 0x83171190;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831711A8"))) PPC_WEAK_FUNC(sub_831711A8);
PPC_FUNC_IMPL(__imp__sub_831711A8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831711C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831711D8"))) PPC_WEAK_FUNC(sub_831711D8);
PPC_FUNC_IMPL(__imp__sub_831711D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7768
	ctx.r3.s64 = ctx.r11.s64 + 7768;
	// bl 0x82e73af8
	ctx.lr = 0x831711F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171208"))) PPC_WEAK_FUNC(sub_83171208);
PPC_FUNC_IMPL(__imp__sub_83171208) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7784
	ctx.r3.s64 = ctx.r11.s64 + 7784;
	// bl 0x82e73af8
	ctx.lr = 0x83171220;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17396, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171238"))) PPC_WEAK_FUNC(sub_83171238);
PPC_FUNC_IMPL(__imp__sub_83171238) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7808
	ctx.r3.s64 = ctx.r11.s64 + 7808;
	// bl 0x82e73af8
	ctx.lr = 0x83171250;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17400, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171268"))) PPC_WEAK_FUNC(sub_83171268);
PPC_FUNC_IMPL(__imp__sub_83171268) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7828
	ctx.r3.s64 = ctx.r11.s64 + 7828;
	// bl 0x82e73af8
	ctx.lr = 0x83171280;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171298"))) PPC_WEAK_FUNC(sub_83171298);
PPC_FUNC_IMPL(__imp__sub_83171298) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7848
	ctx.r3.s64 = ctx.r11.s64 + 7848;
	// bl 0x82e73af8
	ctx.lr = 0x831712B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831712C8"))) PPC_WEAK_FUNC(sub_831712C8);
PPC_FUNC_IMPL(__imp__sub_831712C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7868
	ctx.r3.s64 = ctx.r11.s64 + 7868;
	// bl 0x82e73af8
	ctx.lr = 0x831712E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831712F8"))) PPC_WEAK_FUNC(sub_831712F8);
PPC_FUNC_IMPL(__imp__sub_831712F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7880
	ctx.r3.s64 = ctx.r11.s64 + 7880;
	// bl 0x82e73af8
	ctx.lr = 0x83171310;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171328"))) PPC_WEAK_FUNC(sub_83171328);
PPC_FUNC_IMPL(__imp__sub_83171328) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171340;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171358"))) PPC_WEAK_FUNC(sub_83171358);
PPC_FUNC_IMPL(__imp__sub_83171358) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171370;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171388"))) PPC_WEAK_FUNC(sub_83171388);
PPC_FUNC_IMPL(__imp__sub_83171388) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831713A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831713B8"))) PPC_WEAK_FUNC(sub_831713B8);
PPC_FUNC_IMPL(__imp__sub_831713B8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831713D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831713E8"))) PPC_WEAK_FUNC(sub_831713E8);
PPC_FUNC_IMPL(__imp__sub_831713E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
	// bl 0x82e73af8
	ctx.lr = 0x83171400;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171418"))) PPC_WEAK_FUNC(sub_83171418);
PPC_FUNC_IMPL(__imp__sub_83171418) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171430;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171448"))) PPC_WEAK_FUNC(sub_83171448);
PPC_FUNC_IMPL(__imp__sub_83171448) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7912
	ctx.r3.s64 = ctx.r11.s64 + 7912;
	// bl 0x82e73af8
	ctx.lr = 0x83171460;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171478"))) PPC_WEAK_FUNC(sub_83171478);
PPC_FUNC_IMPL(__imp__sub_83171478) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7928
	ctx.r3.s64 = ctx.r11.s64 + 7928;
	// bl 0x82e73af8
	ctx.lr = 0x83171490;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831714A8"))) PPC_WEAK_FUNC(sub_831714A8);
PPC_FUNC_IMPL(__imp__sub_831714A8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831714C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17336, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831714D8"))) PPC_WEAK_FUNC(sub_831714D8);
PPC_FUNC_IMPL(__imp__sub_831714D8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831714F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171508"))) PPC_WEAK_FUNC(sub_83171508);
PPC_FUNC_IMPL(__imp__sub_83171508) {
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
	// addi r30,r31,17092
	ctx.r30.s64 = ctx.r31.s64 + 17092;
	// addi r5,r11,7936
	ctx.r5.s64 = ctx.r11.s64 + 7936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x83171538;
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
	// stw r10,17092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17092, ctx.r10.u32);
	// addi r3,r11,-10384
	ctx.r3.s64 = ctx.r11.s64 + -10384;
	// bl 0x82a7e6b0
	ctx.lr = 0x83171558;
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

__attribute__((alias("__imp__sub_83171570"))) PPC_WEAK_FUNC(sub_83171570);
PPC_FUNC_IMPL(__imp__sub_83171570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18272
	ctx.r9.s64 = ctx.r11.s64 + 18272;
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

__attribute__((alias("__imp__sub_831715A0"))) PPC_WEAK_FUNC(sub_831715A0);
PPC_FUNC_IMPL(__imp__sub_831715A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18128
	ctx.r9.s64 = ctx.r11.s64 + 18128;
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

__attribute__((alias("__imp__sub_831715D0"))) PPC_WEAK_FUNC(sub_831715D0);
PPC_FUNC_IMPL(__imp__sub_831715D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,17968
	ctx.r9.s64 = ctx.r11.s64 + 17968;
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

__attribute__((alias("__imp__sub_83171600"))) PPC_WEAK_FUNC(sub_83171600);
PPC_FUNC_IMPL(__imp__sub_83171600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83171630"))) PPC_WEAK_FUNC(sub_83171630);
PPC_FUNC_IMPL(__imp__sub_83171630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,18080
	ctx.r10.s64 = ctx.r10.s64 + 18080;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171650"))) PPC_WEAK_FUNC(sub_83171650);
PPC_FUNC_IMPL(__imp__sub_83171650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,17920
	ctx.r10.s64 = ctx.r10.s64 + 17920;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171670"))) PPC_WEAK_FUNC(sub_83171670);
PPC_FUNC_IMPL(__imp__sub_83171670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-10296
	ctx.r3.s64 = ctx.r11.s64 + -10296;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171680"))) PPC_WEAK_FUNC(sub_83171680);
PPC_FUNC_IMPL(__imp__sub_83171680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,18224
	ctx.r10.s64 = ctx.r10.s64 + 18224;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831716A0"))) PPC_WEAK_FUNC(sub_831716A0);
PPC_FUNC_IMPL(__imp__sub_831716A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,18376
	ctx.r3.s64 = ctx.r11.s64 + 18376;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831716B0"))) PPC_WEAK_FUNC(sub_831716B0);
PPC_FUNC_IMPL(__imp__sub_831716B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1756
	ctx.r3.s64 = ctx.r11.s64 + 1756;
	// bl 0x82e73af8
	ctx.lr = 0x831716C8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831716E0"))) PPC_WEAK_FUNC(sub_831716E0);
PPC_FUNC_IMPL(__imp__sub_831716E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1764
	ctx.r3.s64 = ctx.r11.s64 + 1764;
	// bl 0x82e73af8
	ctx.lr = 0x831716F8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171710"))) PPC_WEAK_FUNC(sub_83171710);
PPC_FUNC_IMPL(__imp__sub_83171710) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1776
	ctx.r3.s64 = ctx.r11.s64 + 1776;
	// bl 0x82e73af8
	ctx.lr = 0x83171728;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171740"))) PPC_WEAK_FUNC(sub_83171740);
PPC_FUNC_IMPL(__imp__sub_83171740) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1788
	ctx.r3.s64 = ctx.r11.s64 + 1788;
	// bl 0x82e73af8
	ctx.lr = 0x83171758;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17952, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171770"))) PPC_WEAK_FUNC(sub_83171770);
PPC_FUNC_IMPL(__imp__sub_83171770) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7392
	ctx.r3.s64 = ctx.r11.s64 + 7392;
	// bl 0x82e73af8
	ctx.lr = 0x83171788;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831717A0"))) PPC_WEAK_FUNC(sub_831717A0);
PPC_FUNC_IMPL(__imp__sub_831717A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7400
	ctx.r3.s64 = ctx.r11.s64 + 7400;
	// bl 0x82e73af8
	ctx.lr = 0x831717B8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831717D0"))) PPC_WEAK_FUNC(sub_831717D0);
PPC_FUNC_IMPL(__imp__sub_831717D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22864
	ctx.r3.s64 = ctx.r11.s64 + 22864;
	// bl 0x82e73af8
	ctx.lr = 0x831717E8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171800"))) PPC_WEAK_FUNC(sub_83171800);
PPC_FUNC_IMPL(__imp__sub_83171800) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22868
	ctx.r3.s64 = ctx.r11.s64 + 22868;
	// bl 0x82e73af8
	ctx.lr = 0x83171818;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171830"))) PPC_WEAK_FUNC(sub_83171830);
PPC_FUNC_IMPL(__imp__sub_83171830) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22872
	ctx.r3.s64 = ctx.r11.s64 + 22872;
	// bl 0x82e73af8
	ctx.lr = 0x83171848;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171860"))) PPC_WEAK_FUNC(sub_83171860);
PPC_FUNC_IMPL(__imp__sub_83171860) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22884
	ctx.r3.s64 = ctx.r11.s64 + 22884;
	// bl 0x82e73af8
	ctx.lr = 0x83171878;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171890"))) PPC_WEAK_FUNC(sub_83171890);
PPC_FUNC_IMPL(__imp__sub_83171890) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22892
	ctx.r3.s64 = ctx.r11.s64 + 22892;
	// bl 0x82e73af8
	ctx.lr = 0x831718A8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18032, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831718C0"))) PPC_WEAK_FUNC(sub_831718C0);
PPC_FUNC_IMPL(__imp__sub_831718C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22900
	ctx.r3.s64 = ctx.r11.s64 + 22900;
	// bl 0x82e73af8
	ctx.lr = 0x831718D8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831718F0"))) PPC_WEAK_FUNC(sub_831718F0);
PPC_FUNC_IMPL(__imp__sub_831718F0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171908;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171920"))) PPC_WEAK_FUNC(sub_83171920);
PPC_FUNC_IMPL(__imp__sub_83171920) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22908
	ctx.r3.s64 = ctx.r11.s64 + 22908;
	// bl 0x82e73af8
	ctx.lr = 0x83171938;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171950"))) PPC_WEAK_FUNC(sub_83171950);
PPC_FUNC_IMPL(__imp__sub_83171950) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22928
	ctx.r3.s64 = ctx.r11.s64 + 22928;
	// bl 0x82e73af8
	ctx.lr = 0x83171968;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171980"))) PPC_WEAK_FUNC(sub_83171980);
PPC_FUNC_IMPL(__imp__sub_83171980) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,21744
	ctx.r3.s64 = ctx.r11.s64 + 21744;
	// bl 0x82e73af8
	ctx.lr = 0x83171998;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831719B0"))) PPC_WEAK_FUNC(sub_831719B0);
PPC_FUNC_IMPL(__imp__sub_831719B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,21736
	ctx.r3.s64 = ctx.r11.s64 + 21736;
	// bl 0x82e73af8
	ctx.lr = 0x831719C8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17992(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17992, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831719E0"))) PPC_WEAK_FUNC(sub_831719E0);
PPC_FUNC_IMPL(__imp__sub_831719E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22948
	ctx.r3.s64 = ctx.r11.s64 + 22948;
	// bl 0x82e73af8
	ctx.lr = 0x831719F8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171A10"))) PPC_WEAK_FUNC(sub_83171A10);
PPC_FUNC_IMPL(__imp__sub_83171A10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22964
	ctx.r3.s64 = ctx.r11.s64 + 22964;
	// bl 0x82e73af8
	ctx.lr = 0x83171A28;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18000, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171A40"))) PPC_WEAK_FUNC(sub_83171A40);
PPC_FUNC_IMPL(__imp__sub_83171A40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22980
	ctx.r3.s64 = ctx.r11.s64 + 22980;
	// bl 0x82e73af8
	ctx.lr = 0x83171A58;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171A70"))) PPC_WEAK_FUNC(sub_83171A70);
PPC_FUNC_IMPL(__imp__sub_83171A70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22996
	ctx.r3.s64 = ctx.r11.s64 + 22996;
	// bl 0x82e73af8
	ctx.lr = 0x83171A88;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171AA0"))) PPC_WEAK_FUNC(sub_83171AA0);
PPC_FUNC_IMPL(__imp__sub_83171AA0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171AB8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171AD0"))) PPC_WEAK_FUNC(sub_83171AD0);
PPC_FUNC_IMPL(__imp__sub_83171AD0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171AE8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17896, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171B00"))) PPC_WEAK_FUNC(sub_83171B00);
PPC_FUNC_IMPL(__imp__sub_83171B00) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171B18;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17984, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171B30"))) PPC_WEAK_FUNC(sub_83171B30);
PPC_FUNC_IMPL(__imp__sub_83171B30) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171B48;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17888(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17888, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171B60"))) PPC_WEAK_FUNC(sub_83171B60);
PPC_FUNC_IMPL(__imp__sub_83171B60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23060
	ctx.r3.s64 = ctx.r11.s64 + 23060;
	// bl 0x82e73af8
	ctx.lr = 0x83171B78;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18328, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171B90"))) PPC_WEAK_FUNC(sub_83171B90);
PPC_FUNC_IMPL(__imp__sub_83171B90) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171BA8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171BC0"))) PPC_WEAK_FUNC(sub_83171BC0);
PPC_FUNC_IMPL(__imp__sub_83171BC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23068
	ctx.r3.s64 = ctx.r11.s64 + 23068;
	// bl 0x82e73af8
	ctx.lr = 0x83171BD8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171BF0"))) PPC_WEAK_FUNC(sub_83171BF0);
PPC_FUNC_IMPL(__imp__sub_83171BF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23076
	ctx.r3.s64 = ctx.r11.s64 + 23076;
	// bl 0x82e73af8
	ctx.lr = 0x83171C08;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171C20"))) PPC_WEAK_FUNC(sub_83171C20);
PPC_FUNC_IMPL(__imp__sub_83171C20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23092
	ctx.r3.s64 = ctx.r11.s64 + 23092;
	// bl 0x82e73af8
	ctx.lr = 0x83171C38;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17996, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171C50"))) PPC_WEAK_FUNC(sub_83171C50);
PPC_FUNC_IMPL(__imp__sub_83171C50) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171C68;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171C80"))) PPC_WEAK_FUNC(sub_83171C80);
PPC_FUNC_IMPL(__imp__sub_83171C80) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171C98;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171CB0"))) PPC_WEAK_FUNC(sub_83171CB0);
PPC_FUNC_IMPL(__imp__sub_83171CB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23108
	ctx.r3.s64 = ctx.r11.s64 + 23108;
	// bl 0x82e73af8
	ctx.lr = 0x83171CC8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17944, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171CE0"))) PPC_WEAK_FUNC(sub_83171CE0);
PPC_FUNC_IMPL(__imp__sub_83171CE0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171CF8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171D10"))) PPC_WEAK_FUNC(sub_83171D10);
PPC_FUNC_IMPL(__imp__sub_83171D10) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171D28;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171D40"))) PPC_WEAK_FUNC(sub_83171D40);
PPC_FUNC_IMPL(__imp__sub_83171D40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23128
	ctx.r3.s64 = ctx.r11.s64 + 23128;
	// bl 0x82e73af8
	ctx.lr = 0x83171D58;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171D70"))) PPC_WEAK_FUNC(sub_83171D70);
PPC_FUNC_IMPL(__imp__sub_83171D70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23144
	ctx.r3.s64 = ctx.r11.s64 + 23144;
	// bl 0x82e73af8
	ctx.lr = 0x83171D88;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171DA0"))) PPC_WEAK_FUNC(sub_83171DA0);
PPC_FUNC_IMPL(__imp__sub_83171DA0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171DB8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171DD0"))) PPC_WEAK_FUNC(sub_83171DD0);
PPC_FUNC_IMPL(__imp__sub_83171DD0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171DE8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171E00"))) PPC_WEAK_FUNC(sub_83171E00);
PPC_FUNC_IMPL(__imp__sub_83171E00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23160
	ctx.r3.s64 = ctx.r11.s64 + 23160;
	// bl 0x82e73af8
	ctx.lr = 0x83171E18;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171E30"))) PPC_WEAK_FUNC(sub_83171E30);
PPC_FUNC_IMPL(__imp__sub_83171E30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23176
	ctx.r3.s64 = ctx.r11.s64 + 23176;
	// bl 0x82e73af8
	ctx.lr = 0x83171E48;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171E60"))) PPC_WEAK_FUNC(sub_83171E60);
PPC_FUNC_IMPL(__imp__sub_83171E60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23192
	ctx.r3.s64 = ctx.r11.s64 + 23192;
	// bl 0x82e73af8
	ctx.lr = 0x83171E78;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171E90"))) PPC_WEAK_FUNC(sub_83171E90);
PPC_FUNC_IMPL(__imp__sub_83171E90) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171EA8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18020(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18020, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171EC0"))) PPC_WEAK_FUNC(sub_83171EC0);
PPC_FUNC_IMPL(__imp__sub_83171EC0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171ED8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17916, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171EF0"))) PPC_WEAK_FUNC(sub_83171EF0);
PPC_FUNC_IMPL(__imp__sub_83171EF0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171F08;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171F20"))) PPC_WEAK_FUNC(sub_83171F20);
PPC_FUNC_IMPL(__imp__sub_83171F20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23232
	ctx.r3.s64 = ctx.r11.s64 + 23232;
	// bl 0x82e73af8
	ctx.lr = 0x83171F38;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17948, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171F50"))) PPC_WEAK_FUNC(sub_83171F50);
PPC_FUNC_IMPL(__imp__sub_83171F50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23252
	ctx.r3.s64 = ctx.r11.s64 + 23252;
	// bl 0x82e73af8
	ctx.lr = 0x83171F68;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171F80"))) PPC_WEAK_FUNC(sub_83171F80);
PPC_FUNC_IMPL(__imp__sub_83171F80) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171F98;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171FB0"))) PPC_WEAK_FUNC(sub_83171FB0);
PPC_FUNC_IMPL(__imp__sub_83171FB0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83171FC8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171FE0"))) PPC_WEAK_FUNC(sub_83171FE0);
PPC_FUNC_IMPL(__imp__sub_83171FE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23272
	ctx.r3.s64 = ctx.r11.s64 + 23272;
	// bl 0x82e73af8
	ctx.lr = 0x83171FF8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172010"))) PPC_WEAK_FUNC(sub_83172010);
PPC_FUNC_IMPL(__imp__sub_83172010) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23280
	ctx.r3.s64 = ctx.r11.s64 + 23280;
	// bl 0x82e73af8
	ctx.lr = 0x83172028;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172040"))) PPC_WEAK_FUNC(sub_83172040);
PPC_FUNC_IMPL(__imp__sub_83172040) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-11372
	ctx.r3.s64 = ctx.r11.s64 + -11372;
	// bl 0x82e73ab0
	ctx.lr = 0x83172058;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172070"))) PPC_WEAK_FUNC(sub_83172070);
PPC_FUNC_IMPL(__imp__sub_83172070) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-11360
	ctx.r3.s64 = ctx.r11.s64 + -11360;
	// bl 0x82e73ab0
	ctx.lr = 0x83172088;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831720A0"))) PPC_WEAK_FUNC(sub_831720A0);
PPC_FUNC_IMPL(__imp__sub_831720A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23288
	ctx.r3.s64 = ctx.r11.s64 + 23288;
	// bl 0x82e73ab0
	ctx.lr = 0x831720B8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18096, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831720D0"))) PPC_WEAK_FUNC(sub_831720D0);
PPC_FUNC_IMPL(__imp__sub_831720D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23316
	ctx.r3.s64 = ctx.r11.s64 + 23316;
	// bl 0x82e73af8
	ctx.lr = 0x831720E8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172100"))) PPC_WEAK_FUNC(sub_83172100);
PPC_FUNC_IMPL(__imp__sub_83172100) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,18632
	ctx.r3.s64 = ctx.r11.s64 + 18632;
	// bl 0x82e73af8
	ctx.lr = 0x83172118;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172130"))) PPC_WEAK_FUNC(sub_83172130);
PPC_FUNC_IMPL(__imp__sub_83172130) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13296
	ctx.r3.s64 = ctx.r11.s64 + 13296;
	// bl 0x82e73b40
	ctx.lr = 0x83172148;
	sub_82E73B40(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172160"))) PPC_WEAK_FUNC(sub_83172160);
PPC_FUNC_IMPL(__imp__sub_83172160) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82e73b40
	ctx.lr = 0x83172178;
	sub_82E73B40(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172190"))) PPC_WEAK_FUNC(sub_83172190);
PPC_FUNC_IMPL(__imp__sub_83172190) {
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
	// addi r3,r11,23356
	ctx.r3.s64 = ctx.r11.s64 + 23356;
	// bl 0x82e73b40
	ctx.lr = 0x831721AC;
	sub_82E73B40(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r31,r10,18508
	ctx.r31.s64 = ctx.r10.s64 + 18508;
	// addi r3,r9,23352
	ctx.r3.s64 = ctx.r9.s64 + 23352;
	// stw r11,18508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18508, ctx.r11.u32);
	// bl 0x82e73b40
	ctx.lr = 0x831721C8;
	sub_82E73B40(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,12604
	ctx.r3.s64 = ctx.r11.s64 + 12604;
	// bl 0x82e73b40
	ctx.lr = 0x831721D8;
	sub_82E73B40(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,23348
	ctx.r3.s64 = ctx.r11.s64 + 23348;
	// bl 0x82e73b40
	ctx.lr = 0x831721E8;
	sub_82E73B40(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,23344
	ctx.r3.s64 = ctx.r11.s64 + 23344;
	// bl 0x82e73b40
	ctx.lr = 0x831721F8;
	sub_82E73B40(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,23340
	ctx.r3.s64 = ctx.r11.s64 + 23340;
	// bl 0x82e73b40
	ctx.lr = 0x83172208;
	sub_82E73B40(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,23336
	ctx.r3.s64 = ctx.r11.s64 + 23336;
	// bl 0x82e73b40
	ctx.lr = 0x83172218;
	sub_82E73B40(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,23332
	ctx.r3.s64 = ctx.r11.s64 + 23332;
	// bl 0x82e73b40
	ctx.lr = 0x83172228;
	sub_82E73B40(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,23328
	ctx.r3.s64 = ctx.r11.s64 + 23328;
	// bl 0x82e73b40
	ctx.lr = 0x83172238;
	sub_82E73B40(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,23324
	ctx.r3.s64 = ctx.r11.s64 + 23324;
	// bl 0x82e73b40
	ctx.lr = 0x83172248;
	sub_82E73B40(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,23320
	ctx.r3.s64 = ctx.r11.s64 + 23320;
	// bl 0x82e73b40
	ctx.lr = 0x83172258;
	sub_82E73B40(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83172270"))) PPC_WEAK_FUNC(sub_83172270);
PPC_FUNC_IMPL(__imp__sub_83172270) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23360
	ctx.r3.s64 = ctx.r11.s64 + 23360;
	// bl 0x82e73af8
	ctx.lr = 0x83172288;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831722A0"))) PPC_WEAK_FUNC(sub_831722A0);
PPC_FUNC_IMPL(__imp__sub_831722A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23376
	ctx.r3.s64 = ctx.r11.s64 + 23376;
	// bl 0x82e73af8
	ctx.lr = 0x831722B8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831722D0"))) PPC_WEAK_FUNC(sub_831722D0);
PPC_FUNC_IMPL(__imp__sub_831722D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23396
	ctx.r3.s64 = ctx.r11.s64 + 23396;
	// bl 0x82e73af8
	ctx.lr = 0x831722E8;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172300"))) PPC_WEAK_FUNC(sub_83172300);
PPC_FUNC_IMPL(__imp__sub_83172300) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1380
	ctx.r3.s64 = ctx.r11.s64 + 1380;
	// bl 0x82e73ab0
	ctx.lr = 0x83172318;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172330"))) PPC_WEAK_FUNC(sub_83172330);
PPC_FUNC_IMPL(__imp__sub_83172330) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1640
	ctx.r3.s64 = ctx.r11.s64 + 1640;
	// bl 0x82e73ab0
	ctx.lr = 0x83172348;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172360"))) PPC_WEAK_FUNC(sub_83172360);
PPC_FUNC_IMPL(__imp__sub_83172360) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1628
	ctx.r3.s64 = ctx.r11.s64 + 1628;
	// bl 0x82e73ab0
	ctx.lr = 0x83172378;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172390"))) PPC_WEAK_FUNC(sub_83172390);
PPC_FUNC_IMPL(__imp__sub_83172390) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,544
	ctx.r3.s64 = ctx.r11.s64 + 544;
	// bl 0x82e73ab0
	ctx.lr = 0x831723A8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831723C0"))) PPC_WEAK_FUNC(sub_831723C0);
PPC_FUNC_IMPL(__imp__sub_831723C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,516
	ctx.r3.s64 = ctx.r11.s64 + 516;
	// bl 0x82e73ab0
	ctx.lr = 0x831723D8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18068, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831723F0"))) PPC_WEAK_FUNC(sub_831723F0);
PPC_FUNC_IMPL(__imp__sub_831723F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,488
	ctx.r3.s64 = ctx.r11.s64 + 488;
	// bl 0x82e73ab0
	ctx.lr = 0x83172408;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172420"))) PPC_WEAK_FUNC(sub_83172420);
PPC_FUNC_IMPL(__imp__sub_83172420) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,460
	ctx.r3.s64 = ctx.r11.s64 + 460;
	// bl 0x82e73ab0
	ctx.lr = 0x83172438;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172450"))) PPC_WEAK_FUNC(sub_83172450);
PPC_FUNC_IMPL(__imp__sub_83172450) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,432
	ctx.r3.s64 = ctx.r11.s64 + 432;
	// bl 0x82e73ab0
	ctx.lr = 0x83172468;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172480"))) PPC_WEAK_FUNC(sub_83172480);
PPC_FUNC_IMPL(__imp__sub_83172480) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,404
	ctx.r3.s64 = ctx.r11.s64 + 404;
	// bl 0x82e73ab0
	ctx.lr = 0x83172498;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831724B0"))) PPC_WEAK_FUNC(sub_831724B0);
PPC_FUNC_IMPL(__imp__sub_831724B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,396
	ctx.r3.s64 = ctx.r11.s64 + 396;
	// bl 0x82e73ab0
	ctx.lr = 0x831724C8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17940, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831724E0"))) PPC_WEAK_FUNC(sub_831724E0);
PPC_FUNC_IMPL(__imp__sub_831724E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,336
	ctx.r3.s64 = ctx.r11.s64 + 336;
	// bl 0x82e73ab0
	ctx.lr = 0x831724F8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172510"))) PPC_WEAK_FUNC(sub_83172510);
PPC_FUNC_IMPL(__imp__sub_83172510) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,392
	ctx.r3.s64 = ctx.r11.s64 + 392;
	// bl 0x82e73ab0
	ctx.lr = 0x83172528;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172540"))) PPC_WEAK_FUNC(sub_83172540);
PPC_FUNC_IMPL(__imp__sub_83172540) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,388
	ctx.r3.s64 = ctx.r11.s64 + 388;
	// bl 0x82e73ab0
	ctx.lr = 0x83172558;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172570"))) PPC_WEAK_FUNC(sub_83172570);
PPC_FUNC_IMPL(__imp__sub_83172570) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,856
	ctx.r3.s64 = ctx.r11.s64 + 856;
	// bl 0x82e73ab0
	ctx.lr = 0x83172588;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18076, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831725A0"))) PPC_WEAK_FUNC(sub_831725A0);
PPC_FUNC_IMPL(__imp__sub_831725A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,848
	ctx.r3.s64 = ctx.r11.s64 + 848;
	// bl 0x82e73ab0
	ctx.lr = 0x831725B8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831725D0"))) PPC_WEAK_FUNC(sub_831725D0);
PPC_FUNC_IMPL(__imp__sub_831725D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,840
	ctx.r3.s64 = ctx.r11.s64 + 840;
	// bl 0x82e73ab0
	ctx.lr = 0x831725E8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172600"))) PPC_WEAK_FUNC(sub_83172600);
PPC_FUNC_IMPL(__imp__sub_83172600) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,832
	ctx.r3.s64 = ctx.r11.s64 + 832;
	// bl 0x82e73ab0
	ctx.lr = 0x83172618;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172630"))) PPC_WEAK_FUNC(sub_83172630);
PPC_FUNC_IMPL(__imp__sub_83172630) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1148
	ctx.r3.s64 = ctx.r11.s64 + 1148;
	// bl 0x82e73ab0
	ctx.lr = 0x83172648;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172660"))) PPC_WEAK_FUNC(sub_83172660);
PPC_FUNC_IMPL(__imp__sub_83172660) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1112
	ctx.r3.s64 = ctx.r11.s64 + 1112;
	// bl 0x82e73ab0
	ctx.lr = 0x83172678;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172690"))) PPC_WEAK_FUNC(sub_83172690);
PPC_FUNC_IMPL(__imp__sub_83172690) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1100
	ctx.r3.s64 = ctx.r11.s64 + 1100;
	// bl 0x82e73ab0
	ctx.lr = 0x831726A8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831726C0"))) PPC_WEAK_FUNC(sub_831726C0);
PPC_FUNC_IMPL(__imp__sub_831726C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// bl 0x82e73ab0
	ctx.lr = 0x831726D8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18024, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831726F0"))) PPC_WEAK_FUNC(sub_831726F0);
PPC_FUNC_IMPL(__imp__sub_831726F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1124
	ctx.r3.s64 = ctx.r11.s64 + 1124;
	// bl 0x82e73ab0
	ctx.lr = 0x83172708;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18324, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172720"))) PPC_WEAK_FUNC(sub_83172720);
PPC_FUNC_IMPL(__imp__sub_83172720) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1284
	ctx.r3.s64 = ctx.r11.s64 + 1284;
	// bl 0x82e73ab0
	ctx.lr = 0x83172738;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172750"))) PPC_WEAK_FUNC(sub_83172750);
PPC_FUNC_IMPL(__imp__sub_83172750) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1188
	ctx.r3.s64 = ctx.r11.s64 + 1188;
	// bl 0x82e73ab0
	ctx.lr = 0x83172768;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172780"))) PPC_WEAK_FUNC(sub_83172780);
PPC_FUNC_IMPL(__imp__sub_83172780) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1240
	ctx.r3.s64 = ctx.r11.s64 + 1240;
	// bl 0x82e73ab0
	ctx.lr = 0x83172798;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831727B0"))) PPC_WEAK_FUNC(sub_831727B0);
PPC_FUNC_IMPL(__imp__sub_831727B0) {
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
	// addi r3,r11,1176
	ctx.r3.s64 = ctx.r11.s64 + 1176;
	// bl 0x82e73ab0
	ctx.lr = 0x831727CC;
	sub_82E73AB0(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r31,r10,18472
	ctx.r31.s64 = ctx.r10.s64 + 18472;
	// addi r3,r9,23472
	ctx.r3.s64 = ctx.r9.s64 + 23472;
	// stw r11,18472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18472, ctx.r11.u32);
	// bl 0x82e73ab0
	ctx.lr = 0x831727E8;
	sub_82E73AB0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,23464
	ctx.r3.s64 = ctx.r11.s64 + 23464;
	// bl 0x82e73ab0
	ctx.lr = 0x831727F8;
	sub_82E73AB0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,23456
	ctx.r3.s64 = ctx.r11.s64 + 23456;
	// bl 0x82e73ab0
	ctx.lr = 0x83172808;
	sub_82E73AB0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,23448
	ctx.r3.s64 = ctx.r11.s64 + 23448;
	// bl 0x82e73ab0
	ctx.lr = 0x83172818;
	sub_82E73AB0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,23440
	ctx.r3.s64 = ctx.r11.s64 + 23440;
	// bl 0x82e73ab0
	ctx.lr = 0x83172828;
	sub_82E73AB0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,23432
	ctx.r3.s64 = ctx.r11.s64 + 23432;
	// bl 0x82e73ab0
	ctx.lr = 0x83172838;
	sub_82E73AB0(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,23424
	ctx.r3.s64 = ctx.r11.s64 + 23424;
	// bl 0x82e73ab0
	ctx.lr = 0x83172848;
	sub_82E73AB0(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,23416
	ctx.r3.s64 = ctx.r11.s64 + 23416;
	// bl 0x82e73ab0
	ctx.lr = 0x83172858;
	sub_82E73AB0(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83172870"))) PPC_WEAK_FUNC(sub_83172870);
PPC_FUNC_IMPL(__imp__sub_83172870) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1276
	ctx.r3.s64 = ctx.r11.s64 + 1276;
	// bl 0x82e73ab0
	ctx.lr = 0x83172888;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831728A0"))) PPC_WEAK_FUNC(sub_831728A0);
PPC_FUNC_IMPL(__imp__sub_831728A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1264
	ctx.r3.s64 = ctx.r11.s64 + 1264;
	// bl 0x82e73ab0
	ctx.lr = 0x831728B8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831728D0"))) PPC_WEAK_FUNC(sub_831728D0);
PPC_FUNC_IMPL(__imp__sub_831728D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1252
	ctx.r3.s64 = ctx.r11.s64 + 1252;
	// bl 0x82e73ab0
	ctx.lr = 0x831728E8;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18072, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172900"))) PPC_WEAK_FUNC(sub_83172900);
PPC_FUNC_IMPL(__imp__sub_83172900) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23480
	ctx.r3.s64 = ctx.r11.s64 + 23480;
	// bl 0x82e73af8
	ctx.lr = 0x83172918;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18004, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172930"))) PPC_WEAK_FUNC(sub_83172930);
PPC_FUNC_IMPL(__imp__sub_83172930) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23496
	ctx.r3.s64 = ctx.r11.s64 + 23496;
	// bl 0x82e73af8
	ctx.lr = 0x83172948;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,17936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172960"))) PPC_WEAK_FUNC(sub_83172960);
PPC_FUNC_IMPL(__imp__sub_83172960) {
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
	// addi r30,r31,18040
	ctx.r30.s64 = ctx.r31.s64 + 18040;
	// addi r4,r11,23512
	ctx.r4.s64 = ctx.r11.s64 + 23512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x8317298C;
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
	// lfs f13,3340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-10320
	ctx.r3.s64 = ctx.r7.s64 + -10320;
	// lfs f12,3492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3492);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,18040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18040, ctx.r11.u32);
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
	ctx.lr = 0x831729CC;
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

__attribute__((alias("__imp__sub_831729E8"))) PPC_WEAK_FUNC(sub_831729E8);
PPC_FUNC_IMPL(__imp__sub_831729E8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83172A00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18036, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172A18"))) PPC_WEAK_FUNC(sub_83172A18);
PPC_FUNC_IMPL(__imp__sub_83172A18) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83172A30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18336, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172A48"))) PPC_WEAK_FUNC(sub_83172A48);
PPC_FUNC_IMPL(__imp__sub_83172A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9968
	ctx.r3.s64 = ctx.r11.s64 + -9968;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172A58"))) PPC_WEAK_FUNC(sub_83172A58);
PPC_FUNC_IMPL(__imp__sub_83172A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19296
	ctx.r9.s64 = ctx.r11.s64 + 19296;
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

__attribute__((alias("__imp__sub_83172A88"))) PPC_WEAK_FUNC(sub_83172A88);
PPC_FUNC_IMPL(__imp__sub_83172A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19104
	ctx.r9.s64 = ctx.r11.s64 + 19104;
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

__attribute__((alias("__imp__sub_83172AB8"))) PPC_WEAK_FUNC(sub_83172AB8);
PPC_FUNC_IMPL(__imp__sub_83172AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,18768
	ctx.r9.s64 = ctx.r11.s64 + 18768;
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

__attribute__((alias("__imp__sub_83172AE8"))) PPC_WEAK_FUNC(sub_83172AE8);
PPC_FUNC_IMPL(__imp__sub_83172AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,19040
	ctx.r9.s64 = ctx.r11.s64 + 19040;
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

__attribute__((alias("__imp__sub_83172B18"))) PPC_WEAK_FUNC(sub_83172B18);
PPC_FUNC_IMPL(__imp__sub_83172B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,18992
	ctx.r10.s64 = ctx.r10.s64 + 18992;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172B38"))) PPC_WEAK_FUNC(sub_83172B38);
PPC_FUNC_IMPL(__imp__sub_83172B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,18704
	ctx.r10.s64 = ctx.r10.s64 + 18704;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172B58"))) PPC_WEAK_FUNC(sub_83172B58);
PPC_FUNC_IMPL(__imp__sub_83172B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31944
	ctx.r3.s64 = ctx.r11.s64 + -31944;
	// bl 0x82e73af8
	ctx.lr = 0x83172B70;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83172B88"))) PPC_WEAK_FUNC(sub_83172B88);
PPC_FUNC_IMPL(__imp__sub_83172B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31932
	ctx.r3.s64 = ctx.r11.s64 + -31932;
	// bl 0x82e73af8
	ctx.lr = 0x83172BA0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83172BB8"))) PPC_WEAK_FUNC(sub_83172BB8);
PPC_FUNC_IMPL(__imp__sub_83172BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31920
	ctx.r3.s64 = ctx.r11.s64 + -31920;
	// bl 0x82e73af8
	ctx.lr = 0x83172BD0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19328, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172BE8"))) PPC_WEAK_FUNC(sub_83172BE8);
PPC_FUNC_IMPL(__imp__sub_83172BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
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

__attribute__((alias("__imp__sub_83172C08"))) PPC_WEAK_FUNC(sub_83172C08);
PPC_FUNC_IMPL(__imp__sub_83172C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r3,r11,19624
	ctx.r3.s64 = ctx.r11.s64 + 19624;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172C18"))) PPC_WEAK_FUNC(sub_83172C18);
PPC_FUNC_IMPL(__imp__sub_83172C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31908
	ctx.r3.s64 = ctx.r11.s64 + -31908;
	// bl 0x82e73af8
	ctx.lr = 0x83172C30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18896, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172C48"))) PPC_WEAK_FUNC(sub_83172C48);
PPC_FUNC_IMPL(__imp__sub_83172C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31896
	ctx.r3.s64 = ctx.r11.s64 + -31896;
	// bl 0x82e73af8
	ctx.lr = 0x83172C60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83172C78"))) PPC_WEAK_FUNC(sub_83172C78);
PPC_FUNC_IMPL(__imp__sub_83172C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31884
	ctx.r3.s64 = ctx.r11.s64 + -31884;
	// bl 0x82e73af8
	ctx.lr = 0x83172C90;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172CA8"))) PPC_WEAK_FUNC(sub_83172CA8);
PPC_FUNC_IMPL(__imp__sub_83172CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31868
	ctx.r3.s64 = ctx.r11.s64 + -31868;
	// bl 0x82e73ab0
	ctx.lr = 0x83172CC0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172CD8"))) PPC_WEAK_FUNC(sub_83172CD8);
PPC_FUNC_IMPL(__imp__sub_83172CD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,2156
	ctx.r3.s64 = ctx.r11.s64 + 2156;
	// bl 0x82e73af8
	ctx.lr = 0x83172CF0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19072, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172D08"))) PPC_WEAK_FUNC(sub_83172D08);
PPC_FUNC_IMPL(__imp__sub_83172D08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,2176
	ctx.r3.s64 = ctx.r11.s64 + 2176;
	// bl 0x82e73af8
	ctx.lr = 0x83172D20;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83172D38"))) PPC_WEAK_FUNC(sub_83172D38);
PPC_FUNC_IMPL(__imp__sub_83172D38) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83172D50;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172D68"))) PPC_WEAK_FUNC(sub_83172D68);
PPC_FUNC_IMPL(__imp__sub_83172D68) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83172D80;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83172D98"))) PPC_WEAK_FUNC(sub_83172D98);
PPC_FUNC_IMPL(__imp__sub_83172D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31852
	ctx.r3.s64 = ctx.r11.s64 + -31852;
	// bl 0x82e73af8
	ctx.lr = 0x83172DB0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172DC8"))) PPC_WEAK_FUNC(sub_83172DC8);
PPC_FUNC_IMPL(__imp__sub_83172DC8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83172DE0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172DF8"))) PPC_WEAK_FUNC(sub_83172DF8);
PPC_FUNC_IMPL(__imp__sub_83172DF8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83172E10;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172E28"))) PPC_WEAK_FUNC(sub_83172E28);
PPC_FUNC_IMPL(__imp__sub_83172E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31836
	ctx.r3.s64 = ctx.r11.s64 + -31836;
	// bl 0x82e73af8
	ctx.lr = 0x83172E40;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18860(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18860, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172E58"))) PPC_WEAK_FUNC(sub_83172E58);
PPC_FUNC_IMPL(__imp__sub_83172E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31824
	ctx.r3.s64 = ctx.r11.s64 + -31824;
	// bl 0x82e73af8
	ctx.lr = 0x83172E70;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172E88"))) PPC_WEAK_FUNC(sub_83172E88);
PPC_FUNC_IMPL(__imp__sub_83172E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31812
	ctx.r3.s64 = ctx.r11.s64 + -31812;
	// bl 0x82e73af8
	ctx.lr = 0x83172EA0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19056(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19056, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172EB8"))) PPC_WEAK_FUNC(sub_83172EB8);
PPC_FUNC_IMPL(__imp__sub_83172EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31792
	ctx.r3.s64 = ctx.r11.s64 + -31792;
	// bl 0x82e73af8
	ctx.lr = 0x83172ED0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19076, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172EE8"))) PPC_WEAK_FUNC(sub_83172EE8);
PPC_FUNC_IMPL(__imp__sub_83172EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31776
	ctx.r3.s64 = ctx.r11.s64 + -31776;
	// bl 0x82e73af8
	ctx.lr = 0x83172F00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172F18"))) PPC_WEAK_FUNC(sub_83172F18);
PPC_FUNC_IMPL(__imp__sub_83172F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31752
	ctx.r3.s64 = ctx.r11.s64 + -31752;
	// bl 0x82e73af8
	ctx.lr = 0x83172F30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83172F48"))) PPC_WEAK_FUNC(sub_83172F48);
PPC_FUNC_IMPL(__imp__sub_83172F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31716
	ctx.r3.s64 = ctx.r11.s64 + -31716;
	// bl 0x82e73af8
	ctx.lr = 0x83172F60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83172F78"))) PPC_WEAK_FUNC(sub_83172F78);
PPC_FUNC_IMPL(__imp__sub_83172F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31684
	ctx.r3.s64 = ctx.r11.s64 + -31684;
	// bl 0x82e73af8
	ctx.lr = 0x83172F90;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83172FA8"))) PPC_WEAK_FUNC(sub_83172FA8);
PPC_FUNC_IMPL(__imp__sub_83172FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31652
	ctx.r3.s64 = ctx.r11.s64 + -31652;
	// bl 0x82e73af8
	ctx.lr = 0x83172FC0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83172FD8"))) PPC_WEAK_FUNC(sub_83172FD8);
PPC_FUNC_IMPL(__imp__sub_83172FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31620
	ctx.r3.s64 = ctx.r11.s64 + -31620;
	// bl 0x82e73af8
	ctx.lr = 0x83172FF0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173008"))) PPC_WEAK_FUNC(sub_83173008);
PPC_FUNC_IMPL(__imp__sub_83173008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31588
	ctx.r3.s64 = ctx.r11.s64 + -31588;
	// bl 0x82e73af8
	ctx.lr = 0x83173020;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173038"))) PPC_WEAK_FUNC(sub_83173038);
PPC_FUNC_IMPL(__imp__sub_83173038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31556
	ctx.r3.s64 = ctx.r11.s64 + -31556;
	// bl 0x82e73af8
	ctx.lr = 0x83173050;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173068"))) PPC_WEAK_FUNC(sub_83173068);
PPC_FUNC_IMPL(__imp__sub_83173068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31524
	ctx.r3.s64 = ctx.r11.s64 + -31524;
	// bl 0x82e73af8
	ctx.lr = 0x83173080;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173098"))) PPC_WEAK_FUNC(sub_83173098);
PPC_FUNC_IMPL(__imp__sub_83173098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31492
	ctx.r3.s64 = ctx.r11.s64 + -31492;
	// bl 0x82e73af8
	ctx.lr = 0x831730B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831730C8"))) PPC_WEAK_FUNC(sub_831730C8);
PPC_FUNC_IMPL(__imp__sub_831730C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31456
	ctx.r3.s64 = ctx.r11.s64 + -31456;
	// bl 0x82e73af8
	ctx.lr = 0x831730E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831730F8"))) PPC_WEAK_FUNC(sub_831730F8);
PPC_FUNC_IMPL(__imp__sub_831730F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31428
	ctx.r3.s64 = ctx.r11.s64 + -31428;
	// bl 0x82e73af8
	ctx.lr = 0x83173110;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173128"))) PPC_WEAK_FUNC(sub_83173128);
PPC_FUNC_IMPL(__imp__sub_83173128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31400
	ctx.r3.s64 = ctx.r11.s64 + -31400;
	// bl 0x82e73af8
	ctx.lr = 0x83173140;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173158"))) PPC_WEAK_FUNC(sub_83173158);
PPC_FUNC_IMPL(__imp__sub_83173158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31372
	ctx.r3.s64 = ctx.r11.s64 + -31372;
	// bl 0x82e73af8
	ctx.lr = 0x83173170;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173188"))) PPC_WEAK_FUNC(sub_83173188);
PPC_FUNC_IMPL(__imp__sub_83173188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31344
	ctx.r3.s64 = ctx.r11.s64 + -31344;
	// bl 0x82e73af8
	ctx.lr = 0x831731A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831731B8"))) PPC_WEAK_FUNC(sub_831731B8);
PPC_FUNC_IMPL(__imp__sub_831731B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31316
	ctx.r3.s64 = ctx.r11.s64 + -31316;
	// bl 0x82e73af8
	ctx.lr = 0x831731D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831731E8"))) PPC_WEAK_FUNC(sub_831731E8);
PPC_FUNC_IMPL(__imp__sub_831731E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31288
	ctx.r3.s64 = ctx.r11.s64 + -31288;
	// bl 0x82e73af8
	ctx.lr = 0x83173200;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173218"))) PPC_WEAK_FUNC(sub_83173218);
PPC_FUNC_IMPL(__imp__sub_83173218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31260
	ctx.r3.s64 = ctx.r11.s64 + -31260;
	// bl 0x82e73af8
	ctx.lr = 0x83173230;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173248"))) PPC_WEAK_FUNC(sub_83173248);
PPC_FUNC_IMPL(__imp__sub_83173248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31228
	ctx.r3.s64 = ctx.r11.s64 + -31228;
	// bl 0x82e73af8
	ctx.lr = 0x83173260;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173278"))) PPC_WEAK_FUNC(sub_83173278);
PPC_FUNC_IMPL(__imp__sub_83173278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31204
	ctx.r3.s64 = ctx.r11.s64 + -31204;
	// bl 0x82e73af8
	ctx.lr = 0x83173290;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831732A8"))) PPC_WEAK_FUNC(sub_831732A8);
PPC_FUNC_IMPL(__imp__sub_831732A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31180
	ctx.r3.s64 = ctx.r11.s64 + -31180;
	// bl 0x82e73af8
	ctx.lr = 0x831732C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831732D8"))) PPC_WEAK_FUNC(sub_831732D8);
PPC_FUNC_IMPL(__imp__sub_831732D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31156
	ctx.r3.s64 = ctx.r11.s64 + -31156;
	// bl 0x82e73af8
	ctx.lr = 0x831732F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18592, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173308"))) PPC_WEAK_FUNC(sub_83173308);
PPC_FUNC_IMPL(__imp__sub_83173308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31132
	ctx.r3.s64 = ctx.r11.s64 + -31132;
	// bl 0x82e73af8
	ctx.lr = 0x83173320;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173338"))) PPC_WEAK_FUNC(sub_83173338);
PPC_FUNC_IMPL(__imp__sub_83173338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31108
	ctx.r3.s64 = ctx.r11.s64 + -31108;
	// bl 0x82e73af8
	ctx.lr = 0x83173350;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173368"))) PPC_WEAK_FUNC(sub_83173368);
PPC_FUNC_IMPL(__imp__sub_83173368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31084
	ctx.r3.s64 = ctx.r11.s64 + -31084;
	// bl 0x82e73af8
	ctx.lr = 0x83173380;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173398"))) PPC_WEAK_FUNC(sub_83173398);
PPC_FUNC_IMPL(__imp__sub_83173398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31060
	ctx.r3.s64 = ctx.r11.s64 + -31060;
	// bl 0x82e73af8
	ctx.lr = 0x831733B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18928, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831733C8"))) PPC_WEAK_FUNC(sub_831733C8);
PPC_FUNC_IMPL(__imp__sub_831733C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31036
	ctx.r3.s64 = ctx.r11.s64 + -31036;
	// bl 0x82e73af8
	ctx.lr = 0x831733E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831733F8"))) PPC_WEAK_FUNC(sub_831733F8);
PPC_FUNC_IMPL(__imp__sub_831733F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-31012
	ctx.r3.s64 = ctx.r11.s64 + -31012;
	// bl 0x82e73af8
	ctx.lr = 0x83173410;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173428"))) PPC_WEAK_FUNC(sub_83173428);
PPC_FUNC_IMPL(__imp__sub_83173428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30988
	ctx.r3.s64 = ctx.r11.s64 + -30988;
	// bl 0x82e73af8
	ctx.lr = 0x83173440;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173458"))) PPC_WEAK_FUNC(sub_83173458);
PPC_FUNC_IMPL(__imp__sub_83173458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30964
	ctx.r3.s64 = ctx.r11.s64 + -30964;
	// bl 0x82e73af8
	ctx.lr = 0x83173470;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19060, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173488"))) PPC_WEAK_FUNC(sub_83173488);
PPC_FUNC_IMPL(__imp__sub_83173488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30944
	ctx.r3.s64 = ctx.r11.s64 + -30944;
	// bl 0x82e73af8
	ctx.lr = 0x831734A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18700, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831734B8"))) PPC_WEAK_FUNC(sub_831734B8);
PPC_FUNC_IMPL(__imp__sub_831734B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30916
	ctx.r3.s64 = ctx.r11.s64 + -30916;
	// bl 0x82e73af8
	ctx.lr = 0x831734D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18924(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18924, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831734E8"))) PPC_WEAK_FUNC(sub_831734E8);
PPC_FUNC_IMPL(__imp__sub_831734E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30892
	ctx.r3.s64 = ctx.r11.s64 + -30892;
	// bl 0x82e73af8
	ctx.lr = 0x83173500;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173518"))) PPC_WEAK_FUNC(sub_83173518);
PPC_FUNC_IMPL(__imp__sub_83173518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30864
	ctx.r3.s64 = ctx.r11.s64 + -30864;
	// bl 0x82e73af8
	ctx.lr = 0x83173530;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173548"))) PPC_WEAK_FUNC(sub_83173548);
PPC_FUNC_IMPL(__imp__sub_83173548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30828
	ctx.r3.s64 = ctx.r11.s64 + -30828;
	// bl 0x82e73af8
	ctx.lr = 0x83173560;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173578"))) PPC_WEAK_FUNC(sub_83173578);
PPC_FUNC_IMPL(__imp__sub_83173578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30792
	ctx.r3.s64 = ctx.r11.s64 + -30792;
	// bl 0x82e73af8
	ctx.lr = 0x83173590;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831735A8"))) PPC_WEAK_FUNC(sub_831735A8);
PPC_FUNC_IMPL(__imp__sub_831735A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30768
	ctx.r3.s64 = ctx.r11.s64 + -30768;
	// bl 0x82e73af8
	ctx.lr = 0x831735C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18584, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831735D8"))) PPC_WEAK_FUNC(sub_831735D8);
PPC_FUNC_IMPL(__imp__sub_831735D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30744
	ctx.r3.s64 = ctx.r11.s64 + -30744;
	// bl 0x82e73af8
	ctx.lr = 0x831735F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173608"))) PPC_WEAK_FUNC(sub_83173608);
PPC_FUNC_IMPL(__imp__sub_83173608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30720
	ctx.r3.s64 = ctx.r11.s64 + -30720;
	// bl 0x82e73af8
	ctx.lr = 0x83173620;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173638"))) PPC_WEAK_FUNC(sub_83173638);
PPC_FUNC_IMPL(__imp__sub_83173638) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83173650;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19068, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173668"))) PPC_WEAK_FUNC(sub_83173668);
PPC_FUNC_IMPL(__imp__sub_83173668) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83173680;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173698"))) PPC_WEAK_FUNC(sub_83173698);
PPC_FUNC_IMPL(__imp__sub_83173698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30696
	ctx.r3.s64 = ctx.r11.s64 + -30696;
	// bl 0x82e73af8
	ctx.lr = 0x831736B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19812, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831736C8"))) PPC_WEAK_FUNC(sub_831736C8);
PPC_FUNC_IMPL(__imp__sub_831736C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30684
	ctx.r3.s64 = ctx.r11.s64 + -30684;
	// bl 0x82e73af8
	ctx.lr = 0x831736E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831736F8"))) PPC_WEAK_FUNC(sub_831736F8);
PPC_FUNC_IMPL(__imp__sub_831736F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30672
	ctx.r3.s64 = ctx.r11.s64 + -30672;
	// bl 0x82e73af8
	ctx.lr = 0x83173710;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173728"))) PPC_WEAK_FUNC(sub_83173728);
PPC_FUNC_IMPL(__imp__sub_83173728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30656
	ctx.r3.s64 = ctx.r11.s64 + -30656;
	// bl 0x82e73af8
	ctx.lr = 0x83173740;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173758"))) PPC_WEAK_FUNC(sub_83173758);
PPC_FUNC_IMPL(__imp__sub_83173758) {
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
	// addi r30,r31,18944
	ctx.r30.s64 = ctx.r31.s64 + 18944;
	// addi r4,r11,-30640
	ctx.r4.s64 = ctx.r11.s64 + -30640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83173784;
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
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-10280
	ctx.r3.s64 = ctx.r10.s64 + -10280;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,18944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18944, ctx.r11.u32);
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
	ctx.lr = 0x831737CC;
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

__attribute__((alias("__imp__sub_831737E8"))) PPC_WEAK_FUNC(sub_831737E8);
PPC_FUNC_IMPL(__imp__sub_831737E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30584
	ctx.r3.s64 = ctx.r11.s64 + -30584;
	// bl 0x82e73ab0
	ctx.lr = 0x83173800;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173818"))) PPC_WEAK_FUNC(sub_83173818);
PPC_FUNC_IMPL(__imp__sub_83173818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30560
	ctx.r3.s64 = ctx.r11.s64 + -30560;
	// bl 0x82e73ab0
	ctx.lr = 0x83173830;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173848"))) PPC_WEAK_FUNC(sub_83173848);
PPC_FUNC_IMPL(__imp__sub_83173848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30532
	ctx.r3.s64 = ctx.r11.s64 + -30532;
	// bl 0x82e73ab0
	ctx.lr = 0x83173860;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173878"))) PPC_WEAK_FUNC(sub_83173878);
PPC_FUNC_IMPL(__imp__sub_83173878) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83173890;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831738A8"))) PPC_WEAK_FUNC(sub_831738A8);
PPC_FUNC_IMPL(__imp__sub_831738A8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831738C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831738D8"))) PPC_WEAK_FUNC(sub_831738D8);
PPC_FUNC_IMPL(__imp__sub_831738D8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831738F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173908"))) PPC_WEAK_FUNC(sub_83173908);
PPC_FUNC_IMPL(__imp__sub_83173908) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83173920;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173938"))) PPC_WEAK_FUNC(sub_83173938);
PPC_FUNC_IMPL(__imp__sub_83173938) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83173950;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173968"))) PPC_WEAK_FUNC(sub_83173968);
PPC_FUNC_IMPL(__imp__sub_83173968) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31668
	ctx.r3.s64 = ctx.r11.s64 + -31668;
	// bl 0x82e73af8
	ctx.lr = 0x83173980;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18580, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173998"))) PPC_WEAK_FUNC(sub_83173998);
PPC_FUNC_IMPL(__imp__sub_83173998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30504
	ctx.r3.s64 = ctx.r11.s64 + -30504;
	// bl 0x82e73af8
	ctx.lr = 0x831739B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831739C8"))) PPC_WEAK_FUNC(sub_831739C8);
PPC_FUNC_IMPL(__imp__sub_831739C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30484
	ctx.r3.s64 = ctx.r11.s64 + -30484;
	// bl 0x82e73af8
	ctx.lr = 0x831739E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18832(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831739F8"))) PPC_WEAK_FUNC(sub_831739F8);
PPC_FUNC_IMPL(__imp__sub_831739F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30468
	ctx.r3.s64 = ctx.r11.s64 + -30468;
	// bl 0x82e73af8
	ctx.lr = 0x83173A10;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173A28"))) PPC_WEAK_FUNC(sub_83173A28);
PPC_FUNC_IMPL(__imp__sub_83173A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30448
	ctx.r3.s64 = ctx.r11.s64 + -30448;
	// bl 0x82e73af8
	ctx.lr = 0x83173A40;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173A58"))) PPC_WEAK_FUNC(sub_83173A58);
PPC_FUNC_IMPL(__imp__sub_83173A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30428
	ctx.r3.s64 = ctx.r11.s64 + -30428;
	// bl 0x82e73af8
	ctx.lr = 0x83173A70;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173A88"))) PPC_WEAK_FUNC(sub_83173A88);
PPC_FUNC_IMPL(__imp__sub_83173A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30408
	ctx.r3.s64 = ctx.r11.s64 + -30408;
	// bl 0x82e73af8
	ctx.lr = 0x83173AA0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173AB8"))) PPC_WEAK_FUNC(sub_83173AB8);
PPC_FUNC_IMPL(__imp__sub_83173AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30388
	ctx.r3.s64 = ctx.r11.s64 + -30388;
	// bl 0x82e73af8
	ctx.lr = 0x83173AD0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173AE8"))) PPC_WEAK_FUNC(sub_83173AE8);
PPC_FUNC_IMPL(__imp__sub_83173AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30368
	ctx.r3.s64 = ctx.r11.s64 + -30368;
	// bl 0x82e73af8
	ctx.lr = 0x83173B00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18920, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173B18"))) PPC_WEAK_FUNC(sub_83173B18);
PPC_FUNC_IMPL(__imp__sub_83173B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30348
	ctx.r3.s64 = ctx.r11.s64 + -30348;
	// bl 0x82e73af8
	ctx.lr = 0x83173B30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18940, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173B48"))) PPC_WEAK_FUNC(sub_83173B48);
PPC_FUNC_IMPL(__imp__sub_83173B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30328
	ctx.r3.s64 = ctx.r11.s64 + -30328;
	// bl 0x82e73af8
	ctx.lr = 0x83173B60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173B78"))) PPC_WEAK_FUNC(sub_83173B78);
PPC_FUNC_IMPL(__imp__sub_83173B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30308
	ctx.r3.s64 = ctx.r11.s64 + -30308;
	// bl 0x82e73af8
	ctx.lr = 0x83173B90;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19820, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173BA8"))) PPC_WEAK_FUNC(sub_83173BA8);
PPC_FUNC_IMPL(__imp__sub_83173BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30288
	ctx.r3.s64 = ctx.r11.s64 + -30288;
	// bl 0x82e73af8
	ctx.lr = 0x83173BC0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173BD8"))) PPC_WEAK_FUNC(sub_83173BD8);
PPC_FUNC_IMPL(__imp__sub_83173BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30268
	ctx.r3.s64 = ctx.r11.s64 + -30268;
	// bl 0x82e73af8
	ctx.lr = 0x83173BF0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173C08"))) PPC_WEAK_FUNC(sub_83173C08);
PPC_FUNC_IMPL(__imp__sub_83173C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30264
	ctx.r3.s64 = ctx.r11.s64 + -30264;
	// bl 0x82e73af8
	ctx.lr = 0x83173C20;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173C38"))) PPC_WEAK_FUNC(sub_83173C38);
PPC_FUNC_IMPL(__imp__sub_83173C38) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83173C50;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173C68"))) PPC_WEAK_FUNC(sub_83173C68);
PPC_FUNC_IMPL(__imp__sub_83173C68) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83173C80;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173C98"))) PPC_WEAK_FUNC(sub_83173C98);
PPC_FUNC_IMPL(__imp__sub_83173C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30256
	ctx.r3.s64 = ctx.r11.s64 + -30256;
	// bl 0x82e73af8
	ctx.lr = 0x83173CB0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173CC8"))) PPC_WEAK_FUNC(sub_83173CC8);
PPC_FUNC_IMPL(__imp__sub_83173CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30236
	ctx.r3.s64 = ctx.r11.s64 + -30236;
	// bl 0x82e73af8
	ctx.lr = 0x83173CE0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173CF8"))) PPC_WEAK_FUNC(sub_83173CF8);
PPC_FUNC_IMPL(__imp__sub_83173CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30220
	ctx.r3.s64 = ctx.r11.s64 + -30220;
	// bl 0x82e73af8
	ctx.lr = 0x83173D10;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19036, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173D28"))) PPC_WEAK_FUNC(sub_83173D28);
PPC_FUNC_IMPL(__imp__sub_83173D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30192
	ctx.r3.s64 = ctx.r11.s64 + -30192;
	// bl 0x82e73af8
	ctx.lr = 0x83173D40;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173D58"))) PPC_WEAK_FUNC(sub_83173D58);
PPC_FUNC_IMPL(__imp__sub_83173D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30184
	ctx.r3.s64 = ctx.r11.s64 + -30184;
	// bl 0x82e73af8
	ctx.lr = 0x83173D70;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173D88"))) PPC_WEAK_FUNC(sub_83173D88);
PPC_FUNC_IMPL(__imp__sub_83173D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30176
	ctx.r3.s64 = ctx.r11.s64 + -30176;
	// bl 0x82e73af8
	ctx.lr = 0x83173DA0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173DB8"))) PPC_WEAK_FUNC(sub_83173DB8);
PPC_FUNC_IMPL(__imp__sub_83173DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30168
	ctx.r3.s64 = ctx.r11.s64 + -30168;
	// bl 0x82e73af8
	ctx.lr = 0x83173DD0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173DE8"))) PPC_WEAK_FUNC(sub_83173DE8);
PPC_FUNC_IMPL(__imp__sub_83173DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30160
	ctx.r3.s64 = ctx.r11.s64 + -30160;
	// bl 0x82e73af8
	ctx.lr = 0x83173E00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173E18"))) PPC_WEAK_FUNC(sub_83173E18);
PPC_FUNC_IMPL(__imp__sub_83173E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30152
	ctx.r3.s64 = ctx.r11.s64 + -30152;
	// bl 0x82e73af8
	ctx.lr = 0x83173E30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18916, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173E48"))) PPC_WEAK_FUNC(sub_83173E48);
PPC_FUNC_IMPL(__imp__sub_83173E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30144
	ctx.r3.s64 = ctx.r11.s64 + -30144;
	// bl 0x82e73af8
	ctx.lr = 0x83173E60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173E78"))) PPC_WEAK_FUNC(sub_83173E78);
PPC_FUNC_IMPL(__imp__sub_83173E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30128
	ctx.r3.s64 = ctx.r11.s64 + -30128;
	// bl 0x82e73af8
	ctx.lr = 0x83173E90;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173EA8"))) PPC_WEAK_FUNC(sub_83173EA8);
PPC_FUNC_IMPL(__imp__sub_83173EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30112
	ctx.r3.s64 = ctx.r11.s64 + -30112;
	// bl 0x82e73af8
	ctx.lr = 0x83173EC0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173ED8"))) PPC_WEAK_FUNC(sub_83173ED8);
PPC_FUNC_IMPL(__imp__sub_83173ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30100
	ctx.r3.s64 = ctx.r11.s64 + -30100;
	// bl 0x82e73af8
	ctx.lr = 0x83173EF0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173F08"))) PPC_WEAK_FUNC(sub_83173F08);
PPC_FUNC_IMPL(__imp__sub_83173F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30076
	ctx.r3.s64 = ctx.r11.s64 + -30076;
	// bl 0x82e73ab0
	ctx.lr = 0x83173F20;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19584, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173F38"))) PPC_WEAK_FUNC(sub_83173F38);
PPC_FUNC_IMPL(__imp__sub_83173F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30056
	ctx.r3.s64 = ctx.r11.s64 + -30056;
	// bl 0x82e73ab0
	ctx.lr = 0x83173F50;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173F68"))) PPC_WEAK_FUNC(sub_83173F68);
PPC_FUNC_IMPL(__imp__sub_83173F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30032
	ctx.r3.s64 = ctx.r11.s64 + -30032;
	// bl 0x82e73ab0
	ctx.lr = 0x83173F80;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19556, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173F98"))) PPC_WEAK_FUNC(sub_83173F98);
PPC_FUNC_IMPL(__imp__sub_83173F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-30008
	ctx.r3.s64 = ctx.r11.s64 + -30008;
	// bl 0x82e73ab0
	ctx.lr = 0x83173FB0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83173FC8"))) PPC_WEAK_FUNC(sub_83173FC8);
PPC_FUNC_IMPL(__imp__sub_83173FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29984
	ctx.r3.s64 = ctx.r11.s64 + -29984;
	// bl 0x82e73ab0
	ctx.lr = 0x83173FE0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83173FF8"))) PPC_WEAK_FUNC(sub_83173FF8);
PPC_FUNC_IMPL(__imp__sub_83173FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29968
	ctx.r3.s64 = ctx.r11.s64 + -29968;
	// bl 0x82e73ab0
	ctx.lr = 0x83174010;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174028"))) PPC_WEAK_FUNC(sub_83174028);
PPC_FUNC_IMPL(__imp__sub_83174028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29948
	ctx.r3.s64 = ctx.r11.s64 + -29948;
	// bl 0x82e73ab0
	ctx.lr = 0x83174040;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174058"))) PPC_WEAK_FUNC(sub_83174058);
PPC_FUNC_IMPL(__imp__sub_83174058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29924
	ctx.r3.s64 = ctx.r11.s64 + -29924;
	// bl 0x82e73ab0
	ctx.lr = 0x83174070;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174088"))) PPC_WEAK_FUNC(sub_83174088);
PPC_FUNC_IMPL(__imp__sub_83174088) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-30948
	ctx.r3.s64 = ctx.r11.s64 + -30948;
	// bl 0x82e73ab0
	ctx.lr = 0x831740A0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831740B8"))) PPC_WEAK_FUNC(sub_831740B8);
PPC_FUNC_IMPL(__imp__sub_831740B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29900
	ctx.r3.s64 = ctx.r11.s64 + -29900;
	// bl 0x82e73ab0
	ctx.lr = 0x831740D0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18588, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831740E8"))) PPC_WEAK_FUNC(sub_831740E8);
PPC_FUNC_IMPL(__imp__sub_831740E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29876
	ctx.r3.s64 = ctx.r11.s64 + -29876;
	// bl 0x82e73ab0
	ctx.lr = 0x83174100;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18836(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18836, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174118"))) PPC_WEAK_FUNC(sub_83174118);
PPC_FUNC_IMPL(__imp__sub_83174118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29848
	ctx.r3.s64 = ctx.r11.s64 + -29848;
	// bl 0x82e73ab0
	ctx.lr = 0x83174130;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174148"))) PPC_WEAK_FUNC(sub_83174148);
PPC_FUNC_IMPL(__imp__sub_83174148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29820
	ctx.r3.s64 = ctx.r11.s64 + -29820;
	// bl 0x82e73ab0
	ctx.lr = 0x83174160;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18804, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174178"))) PPC_WEAK_FUNC(sub_83174178);
PPC_FUNC_IMPL(__imp__sub_83174178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29796
	ctx.r3.s64 = ctx.r11.s64 + -29796;
	// bl 0x82e73ab0
	ctx.lr = 0x83174190;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19024, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831741A8"))) PPC_WEAK_FUNC(sub_831741A8);
PPC_FUNC_IMPL(__imp__sub_831741A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29776
	ctx.r3.s64 = ctx.r11.s64 + -29776;
	// bl 0x82e73ab0
	ctx.lr = 0x831741C0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831741D8"))) PPC_WEAK_FUNC(sub_831741D8);
PPC_FUNC_IMPL(__imp__sub_831741D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29748
	ctx.r3.s64 = ctx.r11.s64 + -29748;
	// bl 0x82e73ab0
	ctx.lr = 0x831741F0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174208"))) PPC_WEAK_FUNC(sub_83174208);
PPC_FUNC_IMPL(__imp__sub_83174208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29720
	ctx.r3.s64 = ctx.r11.s64 + -29720;
	// bl 0x82e73ab0
	ctx.lr = 0x83174220;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174238"))) PPC_WEAK_FUNC(sub_83174238);
PPC_FUNC_IMPL(__imp__sub_83174238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29696
	ctx.r3.s64 = ctx.r11.s64 + -29696;
	// bl 0x82e73ab0
	ctx.lr = 0x83174250;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18840(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18840, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174268"))) PPC_WEAK_FUNC(sub_83174268);
PPC_FUNC_IMPL(__imp__sub_83174268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29676
	ctx.r3.s64 = ctx.r11.s64 + -29676;
	// bl 0x82e73ab0
	ctx.lr = 0x83174280;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174298"))) PPC_WEAK_FUNC(sub_83174298);
PPC_FUNC_IMPL(__imp__sub_83174298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29652
	ctx.r3.s64 = ctx.r11.s64 + -29652;
	// bl 0x82e73ab0
	ctx.lr = 0x831742B0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18888(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18888, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831742C8"))) PPC_WEAK_FUNC(sub_831742C8);
PPC_FUNC_IMPL(__imp__sub_831742C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31440
	ctx.r3.s64 = ctx.r11.s64 + -31440;
	// bl 0x82e73ab0
	ctx.lr = 0x831742E0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831742F8"))) PPC_WEAK_FUNC(sub_831742F8);
PPC_FUNC_IMPL(__imp__sub_831742F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29632
	ctx.r3.s64 = ctx.r11.s64 + -29632;
	// bl 0x82e73ab0
	ctx.lr = 0x83174310;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174328"))) PPC_WEAK_FUNC(sub_83174328);
PPC_FUNC_IMPL(__imp__sub_83174328) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31072
	ctx.r3.s64 = ctx.r11.s64 + -31072;
	// bl 0x82e73ab0
	ctx.lr = 0x83174340;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174358"))) PPC_WEAK_FUNC(sub_83174358);
PPC_FUNC_IMPL(__imp__sub_83174358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29604
	ctx.r3.s64 = ctx.r11.s64 + -29604;
	// bl 0x82e73ab0
	ctx.lr = 0x83174370;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174388"))) PPC_WEAK_FUNC(sub_83174388);
PPC_FUNC_IMPL(__imp__sub_83174388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29580
	ctx.r3.s64 = ctx.r11.s64 + -29580;
	// bl 0x82e73ab0
	ctx.lr = 0x831743A0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18852(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831743B8"))) PPC_WEAK_FUNC(sub_831743B8);
PPC_FUNC_IMPL(__imp__sub_831743B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29552
	ctx.r3.s64 = ctx.r11.s64 + -29552;
	// bl 0x82e73ab0
	ctx.lr = 0x831743D0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831743E8"))) PPC_WEAK_FUNC(sub_831743E8);
PPC_FUNC_IMPL(__imp__sub_831743E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29524
	ctx.r3.s64 = ctx.r11.s64 + -29524;
	// bl 0x82e73ab0
	ctx.lr = 0x83174400;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19124, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174418"))) PPC_WEAK_FUNC(sub_83174418);
PPC_FUNC_IMPL(__imp__sub_83174418) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-31056
	ctx.r3.s64 = ctx.r11.s64 + -31056;
	// bl 0x82e73ab0
	ctx.lr = 0x83174430;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174448"))) PPC_WEAK_FUNC(sub_83174448);
PPC_FUNC_IMPL(__imp__sub_83174448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29496
	ctx.r3.s64 = ctx.r11.s64 + -29496;
	// bl 0x82e73ab0
	ctx.lr = 0x83174460;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174478"))) PPC_WEAK_FUNC(sub_83174478);
PPC_FUNC_IMPL(__imp__sub_83174478) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83174490;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19236, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831744A8"))) PPC_WEAK_FUNC(sub_831744A8);
PPC_FUNC_IMPL(__imp__sub_831744A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29464
	ctx.r3.s64 = ctx.r11.s64 + -29464;
	// bl 0x82e73ab0
	ctx.lr = 0x831744C0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831744D8"))) PPC_WEAK_FUNC(sub_831744D8);
PPC_FUNC_IMPL(__imp__sub_831744D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29440
	ctx.r3.s64 = ctx.r11.s64 + -29440;
	// bl 0x82e73ab0
	ctx.lr = 0x831744F0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19020(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19020, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174508"))) PPC_WEAK_FUNC(sub_83174508);
PPC_FUNC_IMPL(__imp__sub_83174508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29420
	ctx.r3.s64 = ctx.r11.s64 + -29420;
	// bl 0x82e73ab0
	ctx.lr = 0x83174520;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174538"))) PPC_WEAK_FUNC(sub_83174538);
PPC_FUNC_IMPL(__imp__sub_83174538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29400
	ctx.r3.s64 = ctx.r11.s64 + -29400;
	// bl 0x82e73ab0
	ctx.lr = 0x83174550;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83174568"))) PPC_WEAK_FUNC(sub_83174568);
PPC_FUNC_IMPL(__imp__sub_83174568) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,25184
	ctx.r3.s64 = ctx.r11.s64 + 25184;
	// bl 0x82e73ab0
	ctx.lr = 0x83174580;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174598"))) PPC_WEAK_FUNC(sub_83174598);
PPC_FUNC_IMPL(__imp__sub_83174598) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,25224
	ctx.r3.s64 = ctx.r11.s64 + 25224;
	// bl 0x82e73ab0
	ctx.lr = 0x831745B0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831745C8"))) PPC_WEAK_FUNC(sub_831745C8);
PPC_FUNC_IMPL(__imp__sub_831745C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,25204
	ctx.r3.s64 = ctx.r11.s64 + 25204;
	// bl 0x82e73ab0
	ctx.lr = 0x831745E0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831745F8"))) PPC_WEAK_FUNC(sub_831745F8);
PPC_FUNC_IMPL(__imp__sub_831745F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6840
	ctx.r3.s64 = ctx.r11.s64 + 6840;
	// bl 0x82e73ab0
	ctx.lr = 0x83174610;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83174628"))) PPC_WEAK_FUNC(sub_83174628);
PPC_FUNC_IMPL(__imp__sub_83174628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29376
	ctx.r3.s64 = ctx.r11.s64 + -29376;
	// bl 0x82e73ab0
	ctx.lr = 0x83174640;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174658"))) PPC_WEAK_FUNC(sub_83174658);
PPC_FUNC_IMPL(__imp__sub_83174658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29360
	ctx.r3.s64 = ctx.r11.s64 + -29360;
	// bl 0x82e73ab0
	ctx.lr = 0x83174670;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174688"))) PPC_WEAK_FUNC(sub_83174688);
PPC_FUNC_IMPL(__imp__sub_83174688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29332
	ctx.r3.s64 = ctx.r11.s64 + -29332;
	// bl 0x82e73ab0
	ctx.lr = 0x831746A0;
	sub_82E73AB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18796, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831746B8"))) PPC_WEAK_FUNC(sub_831746B8);
PPC_FUNC_IMPL(__imp__sub_831746B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29308
	ctx.r3.s64 = ctx.r11.s64 + -29308;
	// bl 0x82e73af8
	ctx.lr = 0x831746D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831746E8"))) PPC_WEAK_FUNC(sub_831746E8);
PPC_FUNC_IMPL(__imp__sub_831746E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29296
	ctx.r3.s64 = ctx.r11.s64 + -29296;
	// bl 0x82e73af8
	ctx.lr = 0x83174700;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174718"))) PPC_WEAK_FUNC(sub_83174718);
PPC_FUNC_IMPL(__imp__sub_83174718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x83174730;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174748"))) PPC_WEAK_FUNC(sub_83174748);
PPC_FUNC_IMPL(__imp__sub_83174748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x83174760;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174778"))) PPC_WEAK_FUNC(sub_83174778);
PPC_FUNC_IMPL(__imp__sub_83174778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x83174790;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831747A8"))) PPC_WEAK_FUNC(sub_831747A8);
PPC_FUNC_IMPL(__imp__sub_831747A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x831747C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18844(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18844, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831747D8"))) PPC_WEAK_FUNC(sub_831747D8);
PPC_FUNC_IMPL(__imp__sub_831747D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x831747F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174808"))) PPC_WEAK_FUNC(sub_83174808);
PPC_FUNC_IMPL(__imp__sub_83174808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x83174820;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174838"))) PPC_WEAK_FUNC(sub_83174838);
PPC_FUNC_IMPL(__imp__sub_83174838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x83174850;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174868"))) PPC_WEAK_FUNC(sub_83174868);
PPC_FUNC_IMPL(__imp__sub_83174868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x83174880;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174898"))) PPC_WEAK_FUNC(sub_83174898);
PPC_FUNC_IMPL(__imp__sub_83174898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x831748B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831748C8"))) PPC_WEAK_FUNC(sub_831748C8);
PPC_FUNC_IMPL(__imp__sub_831748C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x831748E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831748F8"))) PPC_WEAK_FUNC(sub_831748F8);
PPC_FUNC_IMPL(__imp__sub_831748F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29100
	ctx.r3.s64 = ctx.r11.s64 + -29100;
	// bl 0x82e73af8
	ctx.lr = 0x83174910;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18856, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174928"))) PPC_WEAK_FUNC(sub_83174928);
PPC_FUNC_IMPL(__imp__sub_83174928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29084
	ctx.r3.s64 = ctx.r11.s64 + -29084;
	// bl 0x82e73af8
	ctx.lr = 0x83174940;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83174958"))) PPC_WEAK_FUNC(sub_83174958);
PPC_FUNC_IMPL(__imp__sub_83174958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29068
	ctx.r3.s64 = ctx.r11.s64 + -29068;
	// bl 0x82e73af8
	ctx.lr = 0x83174970;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174988"))) PPC_WEAK_FUNC(sub_83174988);
PPC_FUNC_IMPL(__imp__sub_83174988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29052
	ctx.r3.s64 = ctx.r11.s64 + -29052;
	// bl 0x82e73af8
	ctx.lr = 0x831749A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831749B8"))) PPC_WEAK_FUNC(sub_831749B8);
PPC_FUNC_IMPL(__imp__sub_831749B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-29036
	ctx.r3.s64 = ctx.r11.s64 + -29036;
	// bl 0x82e73af8
	ctx.lr = 0x831749D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831749E8"))) PPC_WEAK_FUNC(sub_831749E8);
PPC_FUNC_IMPL(__imp__sub_831749E8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83174A00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174A18"))) PPC_WEAK_FUNC(sub_83174A18);
PPC_FUNC_IMPL(__imp__sub_83174A18) {
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
	// addi r30,r31,19148
	ctx.r30.s64 = ctx.r31.s64 + 19148;
	// addi r4,r11,-29024
	ctx.r4.s64 = ctx.r11.s64 + -29024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83174A44;
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
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-10256
	ctx.r3.s64 = ctx.r10.s64 + -10256;
	// lfs f11,19508(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19508);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19148, ctx.r11.u32);
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
	ctx.lr = 0x83174A8C;
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

__attribute__((alias("__imp__sub_83174AA8"))) PPC_WEAK_FUNC(sub_83174AA8);
PPC_FUNC_IMPL(__imp__sub_83174AA8) {
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
	// addi r30,r31,19080
	ctx.r30.s64 = ctx.r31.s64 + 19080;
	// addi r4,r11,-28980
	ctx.r4.s64 = ctx.r11.s64 + -28980;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83174AD4;
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
	// addi r3,r10,-10232
	ctx.r3.s64 = ctx.r10.s64 + -10232;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19080, ctx.r11.u32);
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
	ctx.lr = 0x83174B1C;
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

__attribute__((alias("__imp__sub_83174B38"))) PPC_WEAK_FUNC(sub_83174B38);
PPC_FUNC_IMPL(__imp__sub_83174B38) {
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
	// addi r30,r31,19516
	ctx.r30.s64 = ctx.r31.s64 + 19516;
	// addi r4,r11,-28940
	ctx.r4.s64 = ctx.r11.s64 + -28940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83174B64;
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
	// lfs f0,3340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3340);
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
	// addi r3,r10,-10208
	ctx.r3.s64 = ctx.r10.s64 + -10208;
	// lfs f11,3488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3488);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19516, ctx.r11.u32);
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
	ctx.lr = 0x83174BAC;
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

__attribute__((alias("__imp__sub_83174BC8"))) PPC_WEAK_FUNC(sub_83174BC8);
PPC_FUNC_IMPL(__imp__sub_83174BC8) {
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
	// addi r30,r31,19696
	ctx.r30.s64 = ctx.r31.s64 + 19696;
	// addi r4,r11,-28900
	ctx.r4.s64 = ctx.r11.s64 + -28900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83174BF4;
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
	// addi r3,r10,-10184
	ctx.r3.s64 = ctx.r10.s64 + -10184;
	// lfs f11,3488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3488);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19696, ctx.r11.u32);
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
	ctx.lr = 0x83174C3C;
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

__attribute__((alias("__imp__sub_83174C58"))) PPC_WEAK_FUNC(sub_83174C58);
PPC_FUNC_IMPL(__imp__sub_83174C58) {
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
	// addi r30,r31,18864
	ctx.r30.s64 = ctx.r31.s64 + 18864;
	// addi r4,r11,-28844
	ctx.r4.s64 = ctx.r11.s64 + -28844;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83174C84;
	sub_82C07410(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-28848(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28848);
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
	// addi r3,r10,-10160
	ctx.r3.s64 = ctx.r10.s64 + -10160;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,18864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18864, ctx.r11.u32);
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
	ctx.lr = 0x83174CCC;
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

__attribute__((alias("__imp__sub_83174CE8"))) PPC_WEAK_FUNC(sub_83174CE8);
PPC_FUNC_IMPL(__imp__sub_83174CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28792
	ctx.r3.s64 = ctx.r11.s64 + -28792;
	// bl 0x82e73af8
	ctx.lr = 0x83174D00;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83174D18"))) PPC_WEAK_FUNC(sub_83174D18);
PPC_FUNC_IMPL(__imp__sub_83174D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28780
	ctx.r3.s64 = ctx.r11.s64 + -28780;
	// bl 0x82e73af8
	ctx.lr = 0x83174D30;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174D48"))) PPC_WEAK_FUNC(sub_83174D48);
PPC_FUNC_IMPL(__imp__sub_83174D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28768
	ctx.r3.s64 = ctx.r11.s64 + -28768;
	// bl 0x82e73af8
	ctx.lr = 0x83174D60;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83174D78"))) PPC_WEAK_FUNC(sub_83174D78);
PPC_FUNC_IMPL(__imp__sub_83174D78) {
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
	// addi r30,r31,18744
	ctx.r30.s64 = ctx.r31.s64 + 18744;
	// addi r4,r11,-28748
	ctx.r4.s64 = ctx.r11.s64 + -28748;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83174DA4;
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
	// lfs f13,-28752(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28752);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-10136
	ctx.r3.s64 = ctx.r7.s64 + -10136;
	// lfs f12,3492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3492);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,18744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18744, ctx.r11.u32);
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
	ctx.lr = 0x83174DE4;
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

__attribute__((alias("__imp__sub_83174E00"))) PPC_WEAK_FUNC(sub_83174E00);
PPC_FUNC_IMPL(__imp__sub_83174E00) {
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
	// addi r30,r31,19172
	ctx.r30.s64 = ctx.r31.s64 + 19172;
	// addi r4,r11,-28704
	ctx.r4.s64 = ctx.r11.s64 + -28704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83174E2C;
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
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-10112
	ctx.r3.s64 = ctx.r7.s64 + -10112;
	// lfs f12,22300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 22300);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,19172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19172, ctx.r11.u32);
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
	ctx.lr = 0x83174E6C;
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

__attribute__((alias("__imp__sub_83174E88"))) PPC_WEAK_FUNC(sub_83174E88);
PPC_FUNC_IMPL(__imp__sub_83174E88) {
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
	// addi r30,r31,19396
	ctx.r30.s64 = ctx.r31.s64 + 19396;
	// addi r4,r11,-28664
	ctx.r4.s64 = ctx.r11.s64 + -28664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83174EB4;
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
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-10088
	ctx.r3.s64 = ctx.r10.s64 + -10088;
	// lfs f11,22300(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 22300);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19396, ctx.r11.u32);
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
	ctx.lr = 0x83174EFC;
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

__attribute__((alias("__imp__sub_83174F18"))) PPC_WEAK_FUNC(sub_83174F18);
PPC_FUNC_IMPL(__imp__sub_83174F18) {
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
	// addi r30,r31,19772
	ctx.r30.s64 = ctx.r31.s64 + 19772;
	// addi r4,r11,-28624
	ctx.r4.s64 = ctx.r11.s64 + -28624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83174F44;
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
	// lfs f0,19508(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19508);
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
	// addi r3,r10,-10064
	ctx.r3.s64 = ctx.r10.s64 + -10064;
	// lfs f11,22300(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 22300);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19772, ctx.r11.u32);
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
	ctx.lr = 0x83174F8C;
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

__attribute__((alias("__imp__sub_83174FA8"))) PPC_WEAK_FUNC(sub_83174FA8);
PPC_FUNC_IMPL(__imp__sub_83174FA8) {
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
	// addi r30,r31,18808
	ctx.r30.s64 = ctx.r31.s64 + 18808;
	// addi r4,r11,-28584
	ctx.r4.s64 = ctx.r11.s64 + -28584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83174FD4;
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
	// lfs f0,3216(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3216);
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
	// addi r3,r10,-10040
	ctx.r3.s64 = ctx.r10.s64 + -10040;
	// lfs f11,22300(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 22300);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,18808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18808, ctx.r11.u32);
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
	ctx.lr = 0x8317501C;
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

__attribute__((alias("__imp__sub_83175038"))) PPC_WEAK_FUNC(sub_83175038);
PPC_FUNC_IMPL(__imp__sub_83175038) {
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
	// addi r30,r31,19484
	ctx.r30.s64 = ctx.r31.s64 + 19484;
	// addi r4,r11,-28544
	ctx.r4.s64 = ctx.r11.s64 + -28544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83175064;
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
	// lfs f0,26744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26744);
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
	// addi r3,r10,-10016
	ctx.r3.s64 = ctx.r10.s64 + -10016;
	// lfs f11,22300(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 22300);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,19484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19484, ctx.r11.u32);
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
	ctx.lr = 0x831750AC;
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

__attribute__((alias("__imp__sub_831750C8"))) PPC_WEAK_FUNC(sub_831750C8);
PPC_FUNC_IMPL(__imp__sub_831750C8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21800
	ctx.r3.s64 = ctx.r11.s64 + 21800;
	// bl 0x82e73af8
	ctx.lr = 0x831750E4;
	sub_82E73AF8(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r31,r10,19824
	ctx.r31.s64 = ctx.r10.s64 + 19824;
	// addi r3,r9,-28408
	ctx.r3.s64 = ctx.r9.s64 + -28408;
	// stw r11,19824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19824, ctx.r11.u32);
	// bl 0x82e73af8
	ctx.lr = 0x83175100;
	sub_82E73AF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,21808
	ctx.r3.s64 = ctx.r11.s64 + 21808;
	// bl 0x82e73af8
	ctx.lr = 0x83175110;
	sub_82E73AF8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28428
	ctx.r3.s64 = ctx.r11.s64 + -28428;
	// bl 0x82e73af8
	ctx.lr = 0x83175120;
	sub_82E73AF8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28448
	ctx.r3.s64 = ctx.r11.s64 + -28448;
	// bl 0x82e73af8
	ctx.lr = 0x83175130;
	sub_82E73AF8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28468
	ctx.r3.s64 = ctx.r11.s64 + -28468;
	// bl 0x82e73ab0
	ctx.lr = 0x83175140;
	sub_82E73AB0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28488
	ctx.r3.s64 = ctx.r11.s64 + -28488;
	// bl 0x82e73ab0
	ctx.lr = 0x83175150;
	sub_82E73AB0(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28504
	ctx.r3.s64 = ctx.r11.s64 + -28504;
	// bl 0x82e73ab0
	ctx.lr = 0x83175160;
	sub_82E73AB0(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83175178"))) PPC_WEAK_FUNC(sub_83175178);
PPC_FUNC_IMPL(__imp__sub_83175178) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83175190;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831751A8"))) PPC_WEAK_FUNC(sub_831751A8);
PPC_FUNC_IMPL(__imp__sub_831751A8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831751C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831751D8"))) PPC_WEAK_FUNC(sub_831751D8);
PPC_FUNC_IMPL(__imp__sub_831751D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28392
	ctx.r3.s64 = ctx.r11.s64 + -28392;
	// bl 0x82e73af8
	ctx.lr = 0x831751F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175208"))) PPC_WEAK_FUNC(sub_83175208);
PPC_FUNC_IMPL(__imp__sub_83175208) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83175220;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19032, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175238"))) PPC_WEAK_FUNC(sub_83175238);
PPC_FUNC_IMPL(__imp__sub_83175238) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83175250;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175268"))) PPC_WEAK_FUNC(sub_83175268);
PPC_FUNC_IMPL(__imp__sub_83175268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28380
	ctx.r3.s64 = ctx.r11.s64 + -28380;
	// bl 0x82e73af8
	ctx.lr = 0x83175280;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175298"))) PPC_WEAK_FUNC(sub_83175298);
PPC_FUNC_IMPL(__imp__sub_83175298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28368
	ctx.r3.s64 = ctx.r11.s64 + -28368;
	// bl 0x82e73af8
	ctx.lr = 0x831752B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831752C8"))) PPC_WEAK_FUNC(sub_831752C8);
PPC_FUNC_IMPL(__imp__sub_831752C8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831752E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831752F8"))) PPC_WEAK_FUNC(sub_831752F8);
PPC_FUNC_IMPL(__imp__sub_831752F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28356
	ctx.r3.s64 = ctx.r11.s64 + -28356;
	// bl 0x82e73af8
	ctx.lr = 0x83175310;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83175328"))) PPC_WEAK_FUNC(sub_83175328);
PPC_FUNC_IMPL(__imp__sub_83175328) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x83175340;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175358"))) PPC_WEAK_FUNC(sub_83175358);
PPC_FUNC_IMPL(__imp__sub_83175358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28344
	ctx.r3.s64 = ctx.r11.s64 + -28344;
	// bl 0x82e73af8
	ctx.lr = 0x83175370;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175388"))) PPC_WEAK_FUNC(sub_83175388);
PPC_FUNC_IMPL(__imp__sub_83175388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28332
	ctx.r3.s64 = ctx.r11.s64 + -28332;
	// bl 0x82e73af8
	ctx.lr = 0x831753A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831753B8"))) PPC_WEAK_FUNC(sub_831753B8);
PPC_FUNC_IMPL(__imp__sub_831753B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28324
	ctx.r3.s64 = ctx.r11.s64 + -28324;
	// bl 0x82e73af8
	ctx.lr = 0x831753D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831753E8"))) PPC_WEAK_FUNC(sub_831753E8);
PPC_FUNC_IMPL(__imp__sub_831753E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28308
	ctx.r3.s64 = ctx.r11.s64 + -28308;
	// bl 0x82e73af8
	ctx.lr = 0x83175400;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83175418"))) PPC_WEAK_FUNC(sub_83175418);
PPC_FUNC_IMPL(__imp__sub_83175418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28292
	ctx.r3.s64 = ctx.r11.s64 + -28292;
	// bl 0x82e73af8
	ctx.lr = 0x83175430;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83175448"))) PPC_WEAK_FUNC(sub_83175448);
PPC_FUNC_IMPL(__imp__sub_83175448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28276
	ctx.r3.s64 = ctx.r11.s64 + -28276;
	// bl 0x82e73af8
	ctx.lr = 0x83175460;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18596, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175478"))) PPC_WEAK_FUNC(sub_83175478);
PPC_FUNC_IMPL(__imp__sub_83175478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28264
	ctx.r3.s64 = ctx.r11.s64 + -28264;
	// bl 0x82e73af8
	ctx.lr = 0x83175490;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_831754A8"))) PPC_WEAK_FUNC(sub_831754A8);
PPC_FUNC_IMPL(__imp__sub_831754A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28252
	ctx.r3.s64 = ctx.r11.s64 + -28252;
	// bl 0x82e73af8
	ctx.lr = 0x831754C0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831754D8"))) PPC_WEAK_FUNC(sub_831754D8);
PPC_FUNC_IMPL(__imp__sub_831754D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// bl 0x82e73af8
	ctx.lr = 0x831754F0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175508"))) PPC_WEAK_FUNC(sub_83175508);
PPC_FUNC_IMPL(__imp__sub_83175508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28212
	ctx.r3.s64 = ctx.r11.s64 + -28212;
	// bl 0x82e73af8
	ctx.lr = 0x83175520;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18600, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175538"))) PPC_WEAK_FUNC(sub_83175538);
PPC_FUNC_IMPL(__imp__sub_83175538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28192
	ctx.r3.s64 = ctx.r11.s64 + -28192;
	// bl 0x82e73af8
	ctx.lr = 0x83175550;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83175568"))) PPC_WEAK_FUNC(sub_83175568);
PPC_FUNC_IMPL(__imp__sub_83175568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28176
	ctx.r3.s64 = ctx.r11.s64 + -28176;
	// bl 0x82e73af8
	ctx.lr = 0x83175580;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18984, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175598"))) PPC_WEAK_FUNC(sub_83175598);
PPC_FUNC_IMPL(__imp__sub_83175598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28160
	ctx.r3.s64 = ctx.r11.s64 + -28160;
	// bl 0x82e73af8
	ctx.lr = 0x831755B0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831755C8"))) PPC_WEAK_FUNC(sub_831755C8);
PPC_FUNC_IMPL(__imp__sub_831755C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28144
	ctx.r3.s64 = ctx.r11.s64 + -28144;
	// bl 0x82e73af8
	ctx.lr = 0x831755E0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19592, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831755F8"))) PPC_WEAK_FUNC(sub_831755F8);
PPC_FUNC_IMPL(__imp__sub_831755F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28128
	ctx.r3.s64 = ctx.r11.s64 + -28128;
	// bl 0x82e73af8
	ctx.lr = 0x83175610;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,19540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175628"))) PPC_WEAK_FUNC(sub_83175628);
PPC_FUNC_IMPL(__imp__sub_83175628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28112
	ctx.r3.s64 = ctx.r11.s64 + -28112;
	// bl 0x82e73af8
	ctx.lr = 0x83175640;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18848, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83175658"))) PPC_WEAK_FUNC(sub_83175658);
PPC_FUNC_IMPL(__imp__sub_83175658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28092
	ctx.r3.s64 = ctx.r11.s64 + -28092;
	// bl 0x82e73af8
	ctx.lr = 0x83175670;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
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

__attribute__((alias("__imp__sub_83175688"))) PPC_WEAK_FUNC(sub_83175688);
PPC_FUNC_IMPL(__imp__sub_83175688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28068
	ctx.r3.s64 = ctx.r11.s64 + -28068;
	// bl 0x82e73af8
	ctx.lr = 0x831756A0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831756B8"))) PPC_WEAK_FUNC(sub_831756B8);
PPC_FUNC_IMPL(__imp__sub_831756B8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x831756D0;
	sub_82E73AF8(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,18892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831756E8"))) PPC_WEAK_FUNC(sub_831756E8);
PPC_FUNC_IMPL(__imp__sub_831756E8) {
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
	// addi r30,r31,18616
	ctx.r30.s64 = ctx.r31.s64 + 18616;
	// addi r5,r11,-28044
	ctx.r5.s64 = ctx.r11.s64 + -28044;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c07478
	ctx.lr = 0x83175718;
	sub_82C07478(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-9992
	ctx.r3.s64 = ctx.r9.s64 + -9992;
	// lfs f0,3340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3340);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,18616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18616, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x8317573C;
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

__attribute__((alias("__imp__sub_83175758"))) PPC_WEAK_FUNC(sub_83175758);
PPC_FUNC_IMPL(__imp__sub_83175758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-9568
	ctx.r3.s64 = ctx.r11.s64 + -9568;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83175768"))) PPC_WEAK_FUNC(sub_83175768);
PPC_FUNC_IMPL(__imp__sub_83175768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20816
	ctx.r9.s64 = ctx.r11.s64 + 20816;
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

__attribute__((alias("__imp__sub_83175798"))) PPC_WEAK_FUNC(sub_83175798);
PPC_FUNC_IMPL(__imp__sub_83175798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20448
	ctx.r9.s64 = ctx.r11.s64 + 20448;
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

__attribute__((alias("__imp__sub_831757C8"))) PPC_WEAK_FUNC(sub_831757C8);
PPC_FUNC_IMPL(__imp__sub_831757C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20112
	ctx.r9.s64 = ctx.r11.s64 + 20112;
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

__attribute__((alias("__imp__sub_831757F8"))) PPC_WEAK_FUNC(sub_831757F8);
PPC_FUNC_IMPL(__imp__sub_831757F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,20400
	ctx.r9.s64 = ctx.r11.s64 + 20400;
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

