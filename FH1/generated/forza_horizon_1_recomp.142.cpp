#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_831B1A60"))) PPC_WEAK_FUNC(sub_831B1A60);
PPC_FUNC_IMPL(__imp__sub_831B1A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,31976
	ctx.r3.s64 = ctx.r11.s64 + 31976;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B1A70"))) PPC_WEAK_FUNC(sub_831B1A70);
PPC_FUNC_IMPL(__imp__sub_831B1A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,28096
	ctx.r3.s64 = ctx.r11.s64 + 28096;
	// bl 0x82b50840
	ctx.lr = 0x831B1A8C;
	sub_82B50840(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,32520
	ctx.r3.s64 = ctx.r11.s64 + 32520;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B1A98;
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

__attribute__((alias("__imp__sub_831B1AA8"))) PPC_WEAK_FUNC(sub_831B1AA8);
PPC_FUNC_IMPL(__imp__sub_831B1AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,28360
	ctx.r3.s64 = ctx.r11.s64 + 28360;
	// bl 0x824683b0
	ctx.lr = 0x831B1AC4;
	sub_824683B0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,31840
	ctx.r3.s64 = ctx.r11.s64 + 31840;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B1AD0;
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

__attribute__((alias("__imp__sub_831B1AE0"))) PPC_WEAK_FUNC(sub_831B1AE0);
PPC_FUNC_IMPL(__imp__sub_831B1AE0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28216
	ctx.r30.s64 = ctx.r31.s64 + 28216;
	// addi r4,r11,10856
	ctx.r4.s64 = ctx.r11.s64 + 10856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B1B0C;
	sub_82C07410(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10852(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10852);
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
	// addi r3,r10,31992
	ctx.r3.s64 = ctx.r10.s64 + 31992;
	// lfs f11,10848(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10848);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28216, ctx.r11.u32);
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
	ctx.lr = 0x831B1B54;
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

__attribute__((alias("__imp__sub_831B1B70"))) PPC_WEAK_FUNC(sub_831B1B70);
PPC_FUNC_IMPL(__imp__sub_831B1B70) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28436
	ctx.r30.s64 = ctx.r31.s64 + 28436;
	// addi r4,r11,10896
	ctx.r4.s64 = ctx.r11.s64 + 10896;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B1B9C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,25340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25340);
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
	// addi r3,r10,32016
	ctx.r3.s64 = ctx.r10.s64 + 32016;
	// lfs f11,10848(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10848);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28436, ctx.r11.u32);
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
	ctx.lr = 0x831B1BE4;
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

__attribute__((alias("__imp__sub_831B1C00"))) PPC_WEAK_FUNC(sub_831B1C00);
PPC_FUNC_IMPL(__imp__sub_831B1C00) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28388
	ctx.r30.s64 = ctx.r31.s64 + 28388;
	// addi r4,r11,10940
	ctx.r4.s64 = ctx.r11.s64 + 10940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B1C2C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
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
	// lfs f13,3384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,32040
	ctx.r3.s64 = ctx.r10.s64 + 32040;
	// lfs f11,10848(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10848);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28388, ctx.r11.u32);
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
	ctx.lr = 0x831B1C74;
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

__attribute__((alias("__imp__sub_831B1C90"))) PPC_WEAK_FUNC(sub_831B1C90);
PPC_FUNC_IMPL(__imp__sub_831B1C90) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28132
	ctx.r30.s64 = ctx.r31.s64 + 28132;
	// addi r4,r11,10984
	ctx.r4.s64 = ctx.r11.s64 + 10984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B1CBC;
	sub_82C07410(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10980(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10980);
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
	// addi r3,r10,32064
	ctx.r3.s64 = ctx.r10.s64 + 32064;
	// lfs f11,10848(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10848);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28132, ctx.r11.u32);
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
	ctx.lr = 0x831B1D04;
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

__attribute__((alias("__imp__sub_831B1D20"))) PPC_WEAK_FUNC(sub_831B1D20);
PPC_FUNC_IMPL(__imp__sub_831B1D20) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28604
	ctx.r30.s64 = ctx.r31.s64 + 28604;
	// addi r4,r11,11028
	ctx.r4.s64 = ctx.r11.s64 + 11028;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B1D4C;
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
	// lfs f0,3420(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,32088
	ctx.r3.s64 = ctx.r7.s64 + 32088;
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,28604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28604, ctx.r11.u32);
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
	ctx.lr = 0x831B1D8C;
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

__attribute__((alias("__imp__sub_831B1DA8"))) PPC_WEAK_FUNC(sub_831B1DA8);
PPC_FUNC_IMPL(__imp__sub_831B1DA8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28692
	ctx.r30.s64 = ctx.r31.s64 + 28692;
	// addi r4,r11,11060
	ctx.r4.s64 = ctx.r11.s64 + 11060;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B1DD4;
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
	// lfs f13,3384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,32112
	ctx.r3.s64 = ctx.r10.s64 + 32112;
	// lfs f11,3420(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3420);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28692, ctx.r11.u32);
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
	ctx.lr = 0x831B1E1C;
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

__attribute__((alias("__imp__sub_831B1E38"))) PPC_WEAK_FUNC(sub_831B1E38);
PPC_FUNC_IMPL(__imp__sub_831B1E38) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28740
	ctx.r30.s64 = ctx.r31.s64 + 28740;
	// addi r4,r11,11092
	ctx.r4.s64 = ctx.r11.s64 + 11092;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B1E64;
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
	// lfs f0,25340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,32136
	ctx.r3.s64 = ctx.r7.s64 + 32136;
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,28740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28740, ctx.r11.u32);
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
	ctx.lr = 0x831B1EA4;
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

__attribute__((alias("__imp__sub_831B1EC0"))) PPC_WEAK_FUNC(sub_831B1EC0);
PPC_FUNC_IMPL(__imp__sub_831B1EC0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28412
	ctx.r30.s64 = ctx.r31.s64 + 28412;
	// addi r4,r11,11124
	ctx.r4.s64 = ctx.r11.s64 + 11124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B1EEC;
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
	// lfs f13,3384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,32160
	ctx.r3.s64 = ctx.r10.s64 + 32160;
	// lfs f11,25340(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 25340);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28412, ctx.r11.u32);
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
	ctx.lr = 0x831B1F34;
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

__attribute__((alias("__imp__sub_831B1F50"))) PPC_WEAK_FUNC(sub_831B1F50);
PPC_FUNC_IMPL(__imp__sub_831B1F50) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28204
	ctx.r30.s64 = ctx.r31.s64 + 28204;
	// addi r5,r11,11156
	ctx.r5.s64 = ctx.r11.s64 + 11156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x831B1F80;
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
	// stw r10,28204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28204, ctx.r10.u32);
	// addi r3,r11,31856
	ctx.r3.s64 = ctx.r11.s64 + 31856;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B1FA0;
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

__attribute__((alias("__imp__sub_831B1FB8"))) PPC_WEAK_FUNC(sub_831B1FB8);
PPC_FUNC_IMPL(__imp__sub_831B1FB8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28180
	ctx.r30.s64 = ctx.r31.s64 + 28180;
	// addi r5,r11,11196
	ctx.r5.s64 = ctx.r11.s64 + 11196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x831B1FE8;
	sub_82C07478(ctx, base);
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
	// lfs f0,3420(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,32184
	ctx.r3.s64 = ctx.r7.s64 + 32184;
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,28180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28180, ctx.r11.u32);
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
	ctx.lr = 0x831B2028;
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

__attribute__((alias("__imp__sub_831B2040"))) PPC_WEAK_FUNC(sub_831B2040);
PPC_FUNC_IMPL(__imp__sub_831B2040) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28240
	ctx.r30.s64 = ctx.r31.s64 + 28240;
	// addi r5,r11,11228
	ctx.r5.s64 = ctx.r11.s64 + 11228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x831B2070;
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
	// addi r3,r10,32208
	ctx.r3.s64 = ctx.r10.s64 + 32208;
	// lfs f11,3420(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3420);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28240, ctx.r11.u32);
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
	ctx.lr = 0x831B20B8;
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

__attribute__((alias("__imp__sub_831B20D0"))) PPC_WEAK_FUNC(sub_831B20D0);
PPC_FUNC_IMPL(__imp__sub_831B20D0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28336
	ctx.r30.s64 = ctx.r31.s64 + 28336;
	// addi r5,r11,11260
	ctx.r5.s64 = ctx.r11.s64 + 11260;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x831B2100;
	sub_82C07478(ctx, base);
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
	// lfs f0,25340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,32232
	ctx.r3.s64 = ctx.r7.s64 + 32232;
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,28336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28336, ctx.r11.u32);
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
	ctx.lr = 0x831B2140;
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

__attribute__((alias("__imp__sub_831B2158"))) PPC_WEAK_FUNC(sub_831B2158);
PPC_FUNC_IMPL(__imp__sub_831B2158) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28460
	ctx.r30.s64 = ctx.r31.s64 + 28460;
	// addi r5,r11,11292
	ctx.r5.s64 = ctx.r11.s64 + 11292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x831B2188;
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
	// addi r3,r10,32256
	ctx.r3.s64 = ctx.r10.s64 + 32256;
	// lfs f11,25340(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 25340);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28460, ctx.r11.u32);
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
	ctx.lr = 0x831B21D0;
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

__attribute__((alias("__imp__sub_831B21E8"))) PPC_WEAK_FUNC(sub_831B21E8);
PPC_FUNC_IMPL(__imp__sub_831B21E8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28288
	ctx.r30.s64 = ctx.r31.s64 + 28288;
	// addi r5,r11,11324
	ctx.r5.s64 = ctx.r11.s64 + 11324;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x831B2218;
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3332(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3332);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,32280
	ctx.r3.s64 = ctx.r10.s64 + 32280;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28288, ctx.r11.u32);
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
	ctx.lr = 0x831B2260;
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

__attribute__((alias("__imp__sub_831B2278"))) PPC_WEAK_FUNC(sub_831B2278);
PPC_FUNC_IMPL(__imp__sub_831B2278) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28156
	ctx.r30.s64 = ctx.r31.s64 + 28156;
	// addi r5,r11,11356
	ctx.r5.s64 = ctx.r11.s64 + 11356;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x831B22A8;
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3332(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3332);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,32304
	ctx.r3.s64 = ctx.r10.s64 + 32304;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28156, ctx.r11.u32);
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
	ctx.lr = 0x831B22F0;
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

__attribute__((alias("__imp__sub_831B2308"))) PPC_WEAK_FUNC(sub_831B2308);
PPC_FUNC_IMPL(__imp__sub_831B2308) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28532
	ctx.r30.s64 = ctx.r31.s64 + 28532;
	// addi r4,r11,11388
	ctx.r4.s64 = ctx.r11.s64 + 11388;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B2334;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,28532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28532, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,31880
	ctx.r3.s64 = ctx.r11.s64 + 31880;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B236C;
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

__attribute__((alias("__imp__sub_831B2388"))) PPC_WEAK_FUNC(sub_831B2388);
PPC_FUNC_IMPL(__imp__sub_831B2388) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28580
	ctx.r30.s64 = ctx.r31.s64 + 28580;
	// addi r4,r11,11444
	ctx.r4.s64 = ctx.r11.s64 + 11444;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B23B4;
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
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,32328
	ctx.r3.s64 = ctx.r7.s64 + 32328;
	// lfs f12,3400(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3400);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,28580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28580, ctx.r11.u32);
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
	ctx.lr = 0x831B23F4;
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

__attribute__((alias("__imp__sub_831B2410"))) PPC_WEAK_FUNC(sub_831B2410);
PPC_FUNC_IMPL(__imp__sub_831B2410) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28508
	ctx.r30.s64 = ctx.r31.s64 + 28508;
	// addi r4,r11,11512
	ctx.r4.s64 = ctx.r11.s64 + 11512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B243C;
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
	// lfs f13,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,32352
	ctx.r3.s64 = ctx.r7.s64 + 32352;
	// lfs f12,3368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3368);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,28508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28508, ctx.r11.u32);
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
	ctx.lr = 0x831B247C;
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

__attribute__((alias("__imp__sub_831B2498"))) PPC_WEAK_FUNC(sub_831B2498);
PPC_FUNC_IMPL(__imp__sub_831B2498) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28556
	ctx.r30.s64 = ctx.r31.s64 + 28556;
	// addi r4,r11,11592
	ctx.r4.s64 = ctx.r11.s64 + 11592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B24C4;
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
	// addi r3,r7,32376
	ctx.r3.s64 = ctx.r7.s64 + 32376;
	// lfs f12,3192(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3192);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,28556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28556, ctx.r11.u32);
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
	ctx.lr = 0x831B2504;
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

__attribute__((alias("__imp__sub_831B2520"))) PPC_WEAK_FUNC(sub_831B2520);
PPC_FUNC_IMPL(__imp__sub_831B2520) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28484
	ctx.r30.s64 = ctx.r31.s64 + 28484;
	// addi r4,r11,11648
	ctx.r4.s64 = ctx.r11.s64 + 11648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B254C;
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
	// stw r10,28484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28484, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,31904
	ctx.r3.s64 = ctx.r11.s64 + 31904;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B2584;
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

__attribute__((alias("__imp__sub_831B25A0"))) PPC_WEAK_FUNC(sub_831B25A0);
PPC_FUNC_IMPL(__imp__sub_831B25A0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28108
	ctx.r30.s64 = ctx.r31.s64 + 28108;
	// addi r4,r11,11704
	ctx.r4.s64 = ctx.r11.s64 + 11704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B25CC;
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
	// lfs f0,3200(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3200);
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
	// addi r3,r10,32400
	ctx.r3.s64 = ctx.r10.s64 + 32400;
	// lfs f11,3264(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3264);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28108, ctx.r11.u32);
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
	ctx.lr = 0x831B2614;
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

__attribute__((alias("__imp__sub_831B2630"))) PPC_WEAK_FUNC(sub_831B2630);
PPC_FUNC_IMPL(__imp__sub_831B2630) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28632
	ctx.r30.s64 = ctx.r31.s64 + 28632;
	// addi r5,r11,11748
	ctx.r5.s64 = ctx.r11.s64 + 11748;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x831B2660;
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
	// stw r10,28632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28632, ctx.r10.u32);
	// addi r3,r11,31928
	ctx.r3.s64 = ctx.r11.s64 + 31928;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B2680;
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

__attribute__((alias("__imp__sub_831B2698"))) PPC_WEAK_FUNC(sub_831B2698);
PPC_FUNC_IMPL(__imp__sub_831B2698) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28644
	ctx.r30.s64 = ctx.r31.s64 + 28644;
	// addi r4,r11,11784
	ctx.r4.s64 = ctx.r11.s64 + 11784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B26C4;
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
	// lfs f0,3208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3208);
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
	// addi r3,r10,32424
	ctx.r3.s64 = ctx.r10.s64 + 32424;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28644, ctx.r11.u32);
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
	ctx.lr = 0x831B270C;
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

__attribute__((alias("__imp__sub_831B2728"))) PPC_WEAK_FUNC(sub_831B2728);
PPC_FUNC_IMPL(__imp__sub_831B2728) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28312
	ctx.r30.s64 = ctx.r31.s64 + 28312;
	// addi r4,r11,11824
	ctx.r4.s64 = ctx.r11.s64 + 11824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B2754;
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
	// lfs f0,3288(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3288);
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
	// addi r3,r10,32448
	ctx.r3.s64 = ctx.r10.s64 + 32448;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28312, ctx.r11.u32);
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
	ctx.lr = 0x831B279C;
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

__attribute__((alias("__imp__sub_831B27B8"))) PPC_WEAK_FUNC(sub_831B27B8);
PPC_FUNC_IMPL(__imp__sub_831B27B8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28668
	ctx.r30.s64 = ctx.r31.s64 + 28668;
	// addi r4,r11,11860
	ctx.r4.s64 = ctx.r11.s64 + 11860;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B27E4;
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
	// lfs f0,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,32472
	ctx.r3.s64 = ctx.r7.s64 + 32472;
	// lfs f12,3320(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3320);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,28668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28668, ctx.r11.u32);
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
	ctx.lr = 0x831B2824;
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

__attribute__((alias("__imp__sub_831B2840"))) PPC_WEAK_FUNC(sub_831B2840);
PPC_FUNC_IMPL(__imp__sub_831B2840) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28716
	ctx.r30.s64 = ctx.r31.s64 + 28716;
	// addi r4,r11,11908
	ctx.r4.s64 = ctx.r11.s64 + 11908;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B286C;
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
	// lfs f12,3368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3368);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,32496
	ctx.r3.s64 = ctx.r10.s64 + 32496;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28716, ctx.r11.u32);
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
	ctx.lr = 0x831B28B4;
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

__attribute__((alias("__imp__sub_831B28D0"))) PPC_WEAK_FUNC(sub_831B28D0);
PPC_FUNC_IMPL(__imp__sub_831B28D0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28264
	ctx.r30.s64 = ctx.r31.s64 + 28264;
	// addi r4,r11,11952
	ctx.r4.s64 = ctx.r11.s64 + 11952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B28FC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,28264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28264, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,31952
	ctx.r3.s64 = ctx.r11.s64 + 31952;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B2934;
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

__attribute__((alias("__imp__sub_831B2950"))) PPC_WEAK_FUNC(sub_831B2950);
PPC_FUNC_IMPL(__imp__sub_831B2950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,28848
	ctx.r9.s64 = ctx.r11.s64 + 28848;
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

__attribute__((alias("__imp__sub_831B2980"))) PPC_WEAK_FUNC(sub_831B2980);
PPC_FUNC_IMPL(__imp__sub_831B2980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
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

__attribute__((alias("__imp__sub_831B29B0"))) PPC_WEAK_FUNC(sub_831B29B0);
PPC_FUNC_IMPL(__imp__sub_831B29B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,28784
	ctx.r9.s64 = ctx.r11.s64 + 28784;
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

__attribute__((alias("__imp__sub_831B29E0"))) PPC_WEAK_FUNC(sub_831B29E0);
PPC_FUNC_IMPL(__imp__sub_831B29E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
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

__attribute__((alias("__imp__sub_831B2A10"))) PPC_WEAK_FUNC(sub_831B2A10);
PPC_FUNC_IMPL(__imp__sub_831B2A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
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

__attribute__((alias("__imp__sub_831B2A30"))) PPC_WEAK_FUNC(sub_831B2A30);
PPC_FUNC_IMPL(__imp__sub_831B2A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,28768
	ctx.r10.s64 = ctx.r10.s64 + 28768;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B2A50"))) PPC_WEAK_FUNC(sub_831B2A50);
PPC_FUNC_IMPL(__imp__sub_831B2A50) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30652
	ctx.r30.s64 = ctx.r31.s64 + 30652;
	// addi r4,r11,12716
	ctx.r4.s64 = ctx.r11.s64 + 12716;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B2A7C;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32632
	ctx.r3.s64 = ctx.r10.s64 + -32632;
	// lfs f11,19696(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19696);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30652, ctx.r11.u32);
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
	ctx.lr = 0x831B2AC4;
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

__attribute__((alias("__imp__sub_831B2AE0"))) PPC_WEAK_FUNC(sub_831B2AE0);
PPC_FUNC_IMPL(__imp__sub_831B2AE0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30268
	ctx.r30.s64 = ctx.r31.s64 + 30268;
	// addi r4,r11,12748
	ctx.r4.s64 = ctx.r11.s64 + 12748;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B2B0C;
	sub_82C07410(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12744);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3492(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3156(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3156);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32608
	ctx.r3.s64 = ctx.r10.s64 + -32608;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30268, ctx.r11.u32);
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
	ctx.lr = 0x831B2B54;
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

__attribute__((alias("__imp__sub_831B2B70"))) PPC_WEAK_FUNC(sub_831B2B70);
PPC_FUNC_IMPL(__imp__sub_831B2B70) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30088
	ctx.r30.s64 = ctx.r31.s64 + 30088;
	// addi r4,r11,12776
	ctx.r4.s64 = ctx.r11.s64 + 12776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B2B9C;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-10068(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10068);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3492(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3156(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3156);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32584
	ctx.r3.s64 = ctx.r10.s64 + -32584;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30088, ctx.r11.u32);
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
	ctx.lr = 0x831B2BE4;
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

__attribute__((alias("__imp__sub_831B2C00"))) PPC_WEAK_FUNC(sub_831B2C00);
PPC_FUNC_IMPL(__imp__sub_831B2C00) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30676
	ctx.r30.s64 = ctx.r31.s64 + 30676;
	// addi r4,r11,12808
	ctx.r4.s64 = ctx.r11.s64 + 12808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B2C2C;
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
	// lfs f0,3484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3484);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32560
	ctx.r3.s64 = ctx.r10.s64 + -32560;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30676, ctx.r11.u32);
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
	ctx.lr = 0x831B2C74;
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

__attribute__((alias("__imp__sub_831B2C90"))) PPC_WEAK_FUNC(sub_831B2C90);
PPC_FUNC_IMPL(__imp__sub_831B2C90) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30436
	ctx.r30.s64 = ctx.r31.s64 + 30436;
	// addi r4,r11,12840
	ctx.r4.s64 = ctx.r11.s64 + 12840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B2CBC;
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
	// lfs f0,3220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3220);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32536
	ctx.r3.s64 = ctx.r10.s64 + -32536;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30436, ctx.r11.u32);
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
	ctx.lr = 0x831B2D04;
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

__attribute__((alias("__imp__sub_831B2D20"))) PPC_WEAK_FUNC(sub_831B2D20);
PPC_FUNC_IMPL(__imp__sub_831B2D20) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30388
	ctx.r30.s64 = ctx.r31.s64 + 30388;
	// addi r4,r11,12872
	ctx.r4.s64 = ctx.r11.s64 + 12872;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B2D4C;
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
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32512
	ctx.r3.s64 = ctx.r10.s64 + -32512;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30388, ctx.r11.u32);
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
	ctx.lr = 0x831B2D94;
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

__attribute__((alias("__imp__sub_831B2DB0"))) PPC_WEAK_FUNC(sub_831B2DB0);
PPC_FUNC_IMPL(__imp__sub_831B2DB0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30220
	ctx.r30.s64 = ctx.r31.s64 + 30220;
	// addi r4,r11,12912
	ctx.r4.s64 = ctx.r11.s64 + 12912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B2DDC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3264);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32488
	ctx.r3.s64 = ctx.r10.s64 + -32488;
	// lfs f11,10008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10008);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30220, ctx.r11.u32);
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
	ctx.lr = 0x831B2E24;
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

__attribute__((alias("__imp__sub_831B2E40"))) PPC_WEAK_FUNC(sub_831B2E40);
PPC_FUNC_IMPL(__imp__sub_831B2E40) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29896
	ctx.r30.s64 = ctx.r31.s64 + 29896;
	// addi r4,r11,12940
	ctx.r4.s64 = ctx.r11.s64 + 12940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B2E6C;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32464
	ctx.r3.s64 = ctx.r10.s64 + -32464;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29896, ctx.r11.u32);
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
	ctx.lr = 0x831B2EB4;
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

__attribute__((alias("__imp__sub_831B2ED0"))) PPC_WEAK_FUNC(sub_831B2ED0);
PPC_FUNC_IMPL(__imp__sub_831B2ED0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29992
	ctx.r30.s64 = ctx.r31.s64 + 29992;
	// addi r4,r11,12968
	ctx.r4.s64 = ctx.r11.s64 + 12968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B2EFC;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32440
	ctx.r3.s64 = ctx.r10.s64 + -32440;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29992, ctx.r11.u32);
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
	ctx.lr = 0x831B2F44;
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

__attribute__((alias("__imp__sub_831B2F60"))) PPC_WEAK_FUNC(sub_831B2F60);
PPC_FUNC_IMPL(__imp__sub_831B2F60) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30772
	ctx.r30.s64 = ctx.r31.s64 + 30772;
	// addi r4,r11,13008
	ctx.r4.s64 = ctx.r11.s64 + 13008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B2F8C;
	sub_82C07410(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-10820(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10820);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32416
	ctx.r3.s64 = ctx.r10.s64 + -32416;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30772, ctx.r11.u32);
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
	ctx.lr = 0x831B2FD4;
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

__attribute__((alias("__imp__sub_831B2FF0"))) PPC_WEAK_FUNC(sub_831B2FF0);
PPC_FUNC_IMPL(__imp__sub_831B2FF0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28888
	ctx.r30.s64 = ctx.r31.s64 + 28888;
	// addi r4,r11,13048
	ctx.r4.s64 = ctx.r11.s64 + 13048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B301C;
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
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32392
	ctx.r3.s64 = ctx.r10.s64 + -32392;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28888, ctx.r11.u32);
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
	ctx.lr = 0x831B3064;
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

__attribute__((alias("__imp__sub_831B3080"))) PPC_WEAK_FUNC(sub_831B3080);
PPC_FUNC_IMPL(__imp__sub_831B3080) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29920
	ctx.r30.s64 = ctx.r31.s64 + 29920;
	// addi r4,r11,13092
	ctx.r4.s64 = ctx.r11.s64 + 13092;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B30AC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,29920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29920, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,32592
	ctx.r3.s64 = ctx.r11.s64 + 32592;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B30E4;
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

__attribute__((alias("__imp__sub_831B3100"))) PPC_WEAK_FUNC(sub_831B3100);
PPC_FUNC_IMPL(__imp__sub_831B3100) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29848
	ctx.r30.s64 = ctx.r31.s64 + 29848;
	// addi r4,r11,13124
	ctx.r4.s64 = ctx.r11.s64 + 13124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B312C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32368
	ctx.r3.s64 = ctx.r10.s64 + -32368;
	// lfs f11,-3692(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -3692);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29848, ctx.r11.u32);
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
	ctx.lr = 0x831B3174;
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

__attribute__((alias("__imp__sub_831B3190"))) PPC_WEAK_FUNC(sub_831B3190);
PPC_FUNC_IMPL(__imp__sub_831B3190) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30484
	ctx.r30.s64 = ctx.r31.s64 + 30484;
	// addi r4,r11,13160
	ctx.r4.s64 = ctx.r11.s64 + 13160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B31BC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,30484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30484, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,999
	ctx.r10.s64 = 999;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,32616
	ctx.r3.s64 = ctx.r11.s64 + 32616;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B31F4;
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

__attribute__((alias("__imp__sub_831B3210"))) PPC_WEAK_FUNC(sub_831B3210);
PPC_FUNC_IMPL(__imp__sub_831B3210) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28936
	ctx.r30.s64 = ctx.r31.s64 + 28936;
	// addi r4,r11,13200
	ctx.r4.s64 = ctx.r11.s64 + 13200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B323C;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-32372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32372);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32344
	ctx.r3.s64 = ctx.r10.s64 + -32344;
	// lfs f11,3328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3328);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28936, ctx.r11.u32);
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
	ctx.lr = 0x831B3284;
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

__attribute__((alias("__imp__sub_831B32A0"))) PPC_WEAK_FUNC(sub_831B32A0);
PPC_FUNC_IMPL(__imp__sub_831B32A0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31064
	ctx.r30.s64 = ctx.r31.s64 + 31064;
	// addi r4,r11,13240
	ctx.r4.s64 = ctx.r11.s64 + 13240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B32CC;
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
	// lfs f0,23548(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23548);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3368);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32320
	ctx.r3.s64 = ctx.r10.s64 + -32320;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31064, ctx.r11.u32);
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
	ctx.lr = 0x831B3314;
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

__attribute__((alias("__imp__sub_831B3330"))) PPC_WEAK_FUNC(sub_831B3330);
PPC_FUNC_IMPL(__imp__sub_831B3330) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30980
	ctx.r30.s64 = ctx.r31.s64 + 30980;
	// addi r4,r11,13284
	ctx.r4.s64 = ctx.r11.s64 + 13284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B335C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3340);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32296
	ctx.r3.s64 = ctx.r10.s64 + -32296;
	// lfs f11,-5348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -5348);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30980, ctx.r11.u32);
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
	ctx.lr = 0x831B33A4;
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

__attribute__((alias("__imp__sub_831B33C0"))) PPC_WEAK_FUNC(sub_831B33C0);
PPC_FUNC_IMPL(__imp__sub_831B33C0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30040
	ctx.r30.s64 = ctx.r31.s64 + 30040;
	// addi r4,r11,13340
	ctx.r4.s64 = ctx.r11.s64 + 13340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B33EC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3412(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3412);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32272
	ctx.r3.s64 = ctx.r10.s64 + -32272;
	// lfs f11,-5348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -5348);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30040, ctx.r11.u32);
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
	ctx.lr = 0x831B3434;
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

__attribute__((alias("__imp__sub_831B3450"))) PPC_WEAK_FUNC(sub_831B3450);
PPC_FUNC_IMPL(__imp__sub_831B3450) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31140
	ctx.r30.s64 = ctx.r31.s64 + 31140;
	// addi r4,r11,13376
	ctx.r4.s64 = ctx.r11.s64 + 13376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B347C;
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
	// addi r3,r10,-32248
	ctx.r3.s64 = ctx.r10.s64 + -32248;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31140, ctx.r11.u32);
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
	ctx.lr = 0x831B34C4;
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

__attribute__((alias("__imp__sub_831B34E0"))) PPC_WEAK_FUNC(sub_831B34E0);
PPC_FUNC_IMPL(__imp__sub_831B34E0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30892
	ctx.r30.s64 = ctx.r31.s64 + 30892;
	// addi r4,r11,13408
	ctx.r4.s64 = ctx.r11.s64 + 13408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B350C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3648);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-32224
	ctx.r3.s64 = ctx.r7.s64 + -32224;
	// lfs f12,21592(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21592);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,30892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30892, ctx.r11.u32);
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
	ctx.lr = 0x831B354C;
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

__attribute__((alias("__imp__sub_831B3568"))) PPC_WEAK_FUNC(sub_831B3568);
PPC_FUNC_IMPL(__imp__sub_831B3568) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30136
	ctx.r30.s64 = ctx.r31.s64 + 30136;
	// addi r4,r11,13440
	ctx.r4.s64 = ctx.r11.s64 + 13440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B3594;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,19508(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19508);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32200
	ctx.r3.s64 = ctx.r10.s64 + -32200;
	// lfs f11,21592(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21592);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30136, ctx.r11.u32);
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
	ctx.lr = 0x831B35DC;
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

__attribute__((alias("__imp__sub_831B35F8"))) PPC_WEAK_FUNC(sub_831B35F8);
PPC_FUNC_IMPL(__imp__sub_831B35F8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30316
	ctx.r30.s64 = ctx.r31.s64 + 30316;
	// addi r4,r11,13472
	ctx.r4.s64 = ctx.r11.s64 + 13472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B3624;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32176
	ctx.r3.s64 = ctx.r10.s64 + -32176;
	// lfs f11,21592(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21592);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30316, ctx.r11.u32);
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
	ctx.lr = 0x831B366C;
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

__attribute__((alias("__imp__sub_831B3688"))) PPC_WEAK_FUNC(sub_831B3688);
PPC_FUNC_IMPL(__imp__sub_831B3688) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30508
	ctx.r30.s64 = ctx.r31.s64 + 30508;
	// addi r4,r11,13504
	ctx.r4.s64 = ctx.r11.s64 + 13504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B36B4;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3368);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32152
	ctx.r3.s64 = ctx.r10.s64 + -32152;
	// lfs f11,3264(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3264);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30508, ctx.r11.u32);
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
	ctx.lr = 0x831B36FC;
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

__attribute__((alias("__imp__sub_831B3718"))) PPC_WEAK_FUNC(sub_831B3718);
PPC_FUNC_IMPL(__imp__sub_831B3718) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29056
	ctx.r30.s64 = ctx.r31.s64 + 29056;
	// addi r4,r11,13544
	ctx.r4.s64 = ctx.r11.s64 + 13544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B3744;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
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
	// lfs f13,3648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3648);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-32128
	ctx.r3.s64 = ctx.r7.s64 + -32128;
	// lfs f12,21592(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21592);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,29056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29056, ctx.r11.u32);
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
	ctx.lr = 0x831B3784;
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

__attribute__((alias("__imp__sub_831B37A0"))) PPC_WEAK_FUNC(sub_831B37A0);
PPC_FUNC_IMPL(__imp__sub_831B37A0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29032
	ctx.r30.s64 = ctx.r31.s64 + 29032;
	// addi r4,r11,13580
	ctx.r4.s64 = ctx.r11.s64 + 13580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B37CC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32104
	ctx.r3.s64 = ctx.r10.s64 + -32104;
	// lfs f11,21592(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21592);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29032, ctx.r11.u32);
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
	ctx.lr = 0x831B3814;
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

__attribute__((alias("__imp__sub_831B3830"))) PPC_WEAK_FUNC(sub_831B3830);
PPC_FUNC_IMPL(__imp__sub_831B3830) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30340
	ctx.r30.s64 = ctx.r31.s64 + 30340;
	// addi r4,r11,13616
	ctx.r4.s64 = ctx.r11.s64 + 13616;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B385C;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3368);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32080
	ctx.r3.s64 = ctx.r10.s64 + -32080;
	// lfs f11,3264(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3264);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30340, ctx.r11.u32);
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
	ctx.lr = 0x831B38A4;
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

__attribute__((alias("__imp__sub_831B38C0"))) PPC_WEAK_FUNC(sub_831B38C0);
PPC_FUNC_IMPL(__imp__sub_831B38C0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30604
	ctx.r30.s64 = ctx.r31.s64 + 30604;
	// addi r4,r11,13656
	ctx.r4.s64 = ctx.r11.s64 + 13656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B38EC;
	sub_82C07410(ctx, base);
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
	// lfs f13,3296(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3296);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-32056
	ctx.r3.s64 = ctx.r7.s64 + -32056;
	// lfs f12,3264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,30604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30604, ctx.r11.u32);
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
	ctx.lr = 0x831B392C;
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

__attribute__((alias("__imp__sub_831B3948"))) PPC_WEAK_FUNC(sub_831B3948);
PPC_FUNC_IMPL(__imp__sub_831B3948) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30844
	ctx.r30.s64 = ctx.r31.s64 + 30844;
	// addi r4,r11,13696
	ctx.r4.s64 = ctx.r11.s64 + 13696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B3974;
	sub_82C07410(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
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
	// lfs f13,13692(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13692);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-32032
	ctx.r3.s64 = ctx.r7.s64 + -32032;
	// lfs f12,32544(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32544);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,30844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30844, ctx.r11.u32);
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
	ctx.lr = 0x831B39B4;
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

__attribute__((alias("__imp__sub_831B39D0"))) PPC_WEAK_FUNC(sub_831B39D0);
PPC_FUNC_IMPL(__imp__sub_831B39D0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31016
	ctx.r30.s64 = ctx.r31.s64 + 31016;
	// addi r4,r11,13728
	ctx.r4.s64 = ctx.r11.s64 + 13728;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B39FC;
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
	// lfs f0,19696(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19696);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-32008
	ctx.r3.s64 = ctx.r10.s64 + -32008;
	// lfs f11,3192(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3192);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31016, ctx.r11.u32);
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
	ctx.lr = 0x831B3A44;
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

__attribute__((alias("__imp__sub_831B3A60"))) PPC_WEAK_FUNC(sub_831B3A60);
PPC_FUNC_IMPL(__imp__sub_831B3A60) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28912
	ctx.r30.s64 = ctx.r31.s64 + 28912;
	// addi r4,r11,13772
	ctx.r4.s64 = ctx.r11.s64 + 13772;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B3A8C;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,21592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21592);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-31984
	ctx.r3.s64 = ctx.r10.s64 + -31984;
	// lfs f11,3192(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3192);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28912, ctx.r11.u32);
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
	ctx.lr = 0x831B3AD4;
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

__attribute__((alias("__imp__sub_831B3AF0"))) PPC_WEAK_FUNC(sub_831B3AF0);
PPC_FUNC_IMPL(__imp__sub_831B3AF0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28864
	ctx.r30.s64 = ctx.r31.s64 + 28864;
	// addi r4,r11,13816
	ctx.r4.s64 = ctx.r11.s64 + 13816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B3B1C;
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
	// lfs f0,3608(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3608);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-31960
	ctx.r3.s64 = ctx.r10.s64 + -31960;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28864, ctx.r11.u32);
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
	ctx.lr = 0x831B3B64;
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

__attribute__((alias("__imp__sub_831B3B80"))) PPC_WEAK_FUNC(sub_831B3B80);
PPC_FUNC_IMPL(__imp__sub_831B3B80) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30016
	ctx.r30.s64 = ctx.r31.s64 + 30016;
	// addi r4,r11,13860
	ctx.r4.s64 = ctx.r11.s64 + 13860;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B3BAC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,30016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30016, ctx.r10.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,32640
	ctx.r3.s64 = ctx.r11.s64 + 32640;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B3BE0;
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

__attribute__((alias("__imp__sub_831B3BF8"))) PPC_WEAK_FUNC(sub_831B3BF8);
PPC_FUNC_IMPL(__imp__sub_831B3BF8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29872
	ctx.r30.s64 = ctx.r31.s64 + 29872;
	// addi r4,r11,13900
	ctx.r4.s64 = ctx.r11.s64 + 13900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B3C24;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,29872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29872, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,32664
	ctx.r3.s64 = ctx.r11.s64 + 32664;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B3C5C;
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

__attribute__((alias("__imp__sub_831B3C78"))) PPC_WEAK_FUNC(sub_831B3C78);
PPC_FUNC_IMPL(__imp__sub_831B3C78) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30460
	ctx.r30.s64 = ctx.r31.s64 + 30460;
	// addi r4,r11,13940
	ctx.r4.s64 = ctx.r11.s64 + 13940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B3CA4;
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
	// lfs f0,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-31936
	ctx.r3.s64 = ctx.r10.s64 + -31936;
	// lfs f11,3192(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3192);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30460, ctx.r11.u32);
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
	ctx.lr = 0x831B3CEC;
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

__attribute__((alias("__imp__sub_831B3D08"))) PPC_WEAK_FUNC(sub_831B3D08);
PPC_FUNC_IMPL(__imp__sub_831B3D08) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31088
	ctx.r30.s64 = ctx.r31.s64 + 31088;
	// addi r4,r11,13988
	ctx.r4.s64 = ctx.r11.s64 + 13988;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B3D34;
	sub_82C07410(ctx, base);
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
	// lfs f13,3400(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3400);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-31912
	ctx.r3.s64 = ctx.r7.s64 + -31912;
	// lfs f12,3328(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3328);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,31088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31088, ctx.r11.u32);
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
	ctx.lr = 0x831B3D74;
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

__attribute__((alias("__imp__sub_831B3D90"))) PPC_WEAK_FUNC(sub_831B3D90);
PPC_FUNC_IMPL(__imp__sub_831B3D90) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30112
	ctx.r30.s64 = ctx.r31.s64 + 30112;
	// addi r4,r11,14040
	ctx.r4.s64 = ctx.r11.s64 + 14040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B3DBC;
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
	// lfs f0,3208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-31888
	ctx.r3.s64 = ctx.r10.s64 + -31888;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30112, ctx.r11.u32);
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
	ctx.lr = 0x831B3E04;
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

__attribute__((alias("__imp__sub_831B3E20"))) PPC_WEAK_FUNC(sub_831B3E20);
PPC_FUNC_IMPL(__imp__sub_831B3E20) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30064
	ctx.r30.s64 = ctx.r31.s64 + 30064;
	// addi r4,r11,14088
	ctx.r4.s64 = ctx.r11.s64 + 14088;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B3E4C;
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
	// lfs f0,3432(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3432);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-31864
	ctx.r3.s64 = ctx.r10.s64 + -31864;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30064, ctx.r11.u32);
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
	ctx.lr = 0x831B3E94;
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

__attribute__((alias("__imp__sub_831B3EB0"))) PPC_WEAK_FUNC(sub_831B3EB0);
PPC_FUNC_IMPL(__imp__sub_831B3EB0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30364
	ctx.r30.s64 = ctx.r31.s64 + 30364;
	// addi r4,r11,14136
	ctx.r4.s64 = ctx.r11.s64 + 14136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B3EDC;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-31840
	ctx.r3.s64 = ctx.r10.s64 + -31840;
	// lfs f11,3488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3488);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30364, ctx.r11.u32);
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
	ctx.lr = 0x831B3F24;
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

__attribute__((alias("__imp__sub_831B3F40"))) PPC_WEAK_FUNC(sub_831B3F40);
PPC_FUNC_IMPL(__imp__sub_831B3F40) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30412
	ctx.r30.s64 = ctx.r31.s64 + 30412;
	// addi r4,r11,14192
	ctx.r4.s64 = ctx.r11.s64 + 14192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B3F6C;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-31816
	ctx.r3.s64 = ctx.r10.s64 + -31816;
	// lfs f11,3488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3488);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30412, ctx.r11.u32);
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
	ctx.lr = 0x831B3FB4;
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

__attribute__((alias("__imp__sub_831B3FD0"))) PPC_WEAK_FUNC(sub_831B3FD0);
PPC_FUNC_IMPL(__imp__sub_831B3FD0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30628
	ctx.r30.s64 = ctx.r31.s64 + 30628;
	// addi r4,r11,14248
	ctx.r4.s64 = ctx.r11.s64 + 14248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B3FFC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,30628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30628, ctx.r10.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,32688
	ctx.r3.s64 = ctx.r11.s64 + 32688;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B4030;
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

__attribute__((alias("__imp__sub_831B4048"))) PPC_WEAK_FUNC(sub_831B4048);
PPC_FUNC_IMPL(__imp__sub_831B4048) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28984
	ctx.r30.s64 = ctx.r31.s64 + 28984;
	// addi r4,r11,14288
	ctx.r4.s64 = ctx.r11.s64 + 14288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4074;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,28984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28984, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,32712
	ctx.r3.s64 = ctx.r11.s64 + 32712;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B40AC;
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

__attribute__((alias("__imp__sub_831B40C8"))) PPC_WEAK_FUNC(sub_831B40C8);
PPC_FUNC_IMPL(__imp__sub_831B40C8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30748
	ctx.r30.s64 = ctx.r31.s64 + 30748;
	// addi r4,r11,14328
	ctx.r4.s64 = ctx.r11.s64 + 14328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B40F4;
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
	// lfs f0,3484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3484);
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
	// addi r3,r10,-31792
	ctx.r3.s64 = ctx.r10.s64 + -31792;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30748, ctx.r11.u32);
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
	ctx.lr = 0x831B413C;
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

__attribute__((alias("__imp__sub_831B4158"))) PPC_WEAK_FUNC(sub_831B4158);
PPC_FUNC_IMPL(__imp__sub_831B4158) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29080
	ctx.r30.s64 = ctx.r31.s64 + 29080;
	// addi r4,r11,14372
	ctx.r4.s64 = ctx.r11.s64 + 14372;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4184;
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
	// lfs f0,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-31768
	ctx.r3.s64 = ctx.r10.s64 + -31768;
	// lfs f11,3192(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3192);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29080, ctx.r11.u32);
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
	ctx.lr = 0x831B41CC;
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

__attribute__((alias("__imp__sub_831B41E8"))) PPC_WEAK_FUNC(sub_831B41E8);
PPC_FUNC_IMPL(__imp__sub_831B41E8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29944
	ctx.r30.s64 = ctx.r31.s64 + 29944;
	// addi r4,r11,14424
	ctx.r4.s64 = ctx.r11.s64 + 14424;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4214;
	sub_82C07410(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,14420(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14420);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,20592(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20592);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-31744
	ctx.r3.s64 = ctx.r10.s64 + -31744;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29944, ctx.r11.u32);
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
	ctx.lr = 0x831B425C;
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

__attribute__((alias("__imp__sub_831B4278"))) PPC_WEAK_FUNC(sub_831B4278);
PPC_FUNC_IMPL(__imp__sub_831B4278) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30292
	ctx.r30.s64 = ctx.r31.s64 + 30292;
	// addi r4,r11,14468
	ctx.r4.s64 = ctx.r11.s64 + 14468;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B42A4;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,21588(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21588);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,20592(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20592);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-31720
	ctx.r3.s64 = ctx.r10.s64 + -31720;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30292, ctx.r11.u32);
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
	ctx.lr = 0x831B42EC;
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

__attribute__((alias("__imp__sub_831B4308"))) PPC_WEAK_FUNC(sub_831B4308);
PPC_FUNC_IMPL(__imp__sub_831B4308) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30532
	ctx.r30.s64 = ctx.r31.s64 + 30532;
	// addi r4,r11,14516
	ctx.r4.s64 = ctx.r11.s64 + 14516;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4334;
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
	// addi r3,r10,-31696
	ctx.r3.s64 = ctx.r10.s64 + -31696;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30532, ctx.r11.u32);
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
	ctx.lr = 0x831B437C;
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

__attribute__((alias("__imp__sub_831B4398"))) PPC_WEAK_FUNC(sub_831B4398);
PPC_FUNC_IMPL(__imp__sub_831B4398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-31672
	ctx.r3.s64 = ctx.r11.s64 + -31672;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B43A8"))) PPC_WEAK_FUNC(sub_831B43A8);
PPC_FUNC_IMPL(__imp__sub_831B43A8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29728
	ctx.r30.s64 = ctx.r31.s64 + 29728;
	// addi r4,r11,14560
	ctx.r4.s64 = ctx.r11.s64 + 14560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B43D4;
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
	// lfs f0,3432(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3432);
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
	// addi r3,r10,-31656
	ctx.r3.s64 = ctx.r10.s64 + -31656;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29728, ctx.r11.u32);
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
	ctx.lr = 0x831B441C;
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

__attribute__((alias("__imp__sub_831B4438"))) PPC_WEAK_FUNC(sub_831B4438);
PPC_FUNC_IMPL(__imp__sub_831B4438) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30244
	ctx.r30.s64 = ctx.r31.s64 + 30244;
	// addi r4,r11,14620
	ctx.r4.s64 = ctx.r11.s64 + 14620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4464;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-31632
	ctx.r3.s64 = ctx.r10.s64 + -31632;
	// lfs f11,3264(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3264);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30244, ctx.r11.u32);
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
	ctx.lr = 0x831B44AC;
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

__attribute__((alias("__imp__sub_831B44C8"))) PPC_WEAK_FUNC(sub_831B44C8);
PPC_FUNC_IMPL(__imp__sub_831B44C8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31112
	ctx.r30.s64 = ctx.r31.s64 + 31112;
	// addi r4,r11,14652
	ctx.r4.s64 = ctx.r11.s64 + 14652;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B44F4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3320(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3320);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-31608
	ctx.r3.s64 = ctx.r10.s64 + -31608;
	// lfs f11,-3692(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -3692);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31112, ctx.r11.u32);
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
	ctx.lr = 0x831B453C;
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

__attribute__((alias("__imp__sub_831B4558"))) PPC_WEAK_FUNC(sub_831B4558);
PPC_FUNC_IMPL(__imp__sub_831B4558) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30184
	ctx.r30.s64 = ctx.r31.s64 + 30184;
	// addi r4,r11,14692
	ctx.r4.s64 = ctx.r11.s64 + 14692;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4584;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-32372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32372);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-31584
	ctx.r3.s64 = ctx.r10.s64 + -31584;
	// lfs f11,-3692(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -3692);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30184, ctx.r11.u32);
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
	ctx.lr = 0x831B45CC;
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

__attribute__((alias("__imp__sub_831B45E8"))) PPC_WEAK_FUNC(sub_831B45E8);
PPC_FUNC_IMPL(__imp__sub_831B45E8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29968
	ctx.r30.s64 = ctx.r31.s64 + 29968;
	// addi r4,r11,14732
	ctx.r4.s64 = ctx.r11.s64 + 14732;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4614;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,21524(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21524);
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
	// addi r3,r10,-31560
	ctx.r3.s64 = ctx.r10.s64 + -31560;
	// lfs f11,3488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3488);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29968, ctx.r11.u32);
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
	ctx.lr = 0x831B465C;
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

__attribute__((alias("__imp__sub_831B4678"))) PPC_WEAK_FUNC(sub_831B4678);
PPC_FUNC_IMPL(__imp__sub_831B4678) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,28960
	ctx.r30.s64 = ctx.r31.s64 + 28960;
	// addi r4,r11,14780
	ctx.r4.s64 = ctx.r11.s64 + 14780;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B46A4;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,21524(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21524);
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
	// addi r3,r10,-31536
	ctx.r3.s64 = ctx.r10.s64 + -31536;
	// lfs f11,3488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3488);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,28960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28960, ctx.r11.u32);
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
	ctx.lr = 0x831B46EC;
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

__attribute__((alias("__imp__sub_831B4708"))) PPC_WEAK_FUNC(sub_831B4708);
PPC_FUNC_IMPL(__imp__sub_831B4708) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31040
	ctx.r30.s64 = ctx.r31.s64 + 31040;
	// addi r4,r11,14828
	ctx.r4.s64 = ctx.r11.s64 + 14828;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4734;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,21524(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21524);
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
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31040, ctx.r11.u32);
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
	ctx.lr = 0x831B477C;
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

__attribute__((alias("__imp__sub_831B4798"))) PPC_WEAK_FUNC(sub_831B4798);
PPC_FUNC_IMPL(__imp__sub_831B4798) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29008
	ctx.r30.s64 = ctx.r31.s64 + 29008;
	// addi r4,r11,14884
	ctx.r4.s64 = ctx.r11.s64 + 14884;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B47C4;
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
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
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
	// addi r3,r10,-31488
	ctx.r3.s64 = ctx.r10.s64 + -31488;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29008, ctx.r11.u32);
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
	ctx.lr = 0x831B480C;
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

__attribute__((alias("__imp__sub_831B4828"))) PPC_WEAK_FUNC(sub_831B4828);
PPC_FUNC_IMPL(__imp__sub_831B4828) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30556
	ctx.r30.s64 = ctx.r31.s64 + 30556;
	// addi r4,r11,14928
	ctx.r4.s64 = ctx.r11.s64 + 14928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4854;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-31464
	ctx.r3.s64 = ctx.r7.s64 + -31464;
	// lfs f12,3400(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3400);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,30556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30556, ctx.r11.u32);
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
	ctx.lr = 0x831B4894;
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

__attribute__((alias("__imp__sub_831B48B0"))) PPC_WEAK_FUNC(sub_831B48B0);
PPC_FUNC_IMPL(__imp__sub_831B48B0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30160
	ctx.r30.s64 = ctx.r31.s64 + 30160;
	// addi r4,r11,14972
	ctx.r4.s64 = ctx.r11.s64 + 14972;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B48DC;
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
	// addi r3,r10,-31440
	ctx.r3.s64 = ctx.r10.s64 + -31440;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30160, ctx.r11.u32);
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
	ctx.lr = 0x831B4924;
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

__attribute__((alias("__imp__sub_831B4940"))) PPC_WEAK_FUNC(sub_831B4940);
PPC_FUNC_IMPL(__imp__sub_831B4940) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30580
	ctx.r30.s64 = ctx.r31.s64 + 30580;
	// addi r4,r11,15016
	ctx.r4.s64 = ctx.r11.s64 + 15016;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B496C;
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
	// addi r3,r10,-31416
	ctx.r3.s64 = ctx.r10.s64 + -31416;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30580, ctx.r11.u32);
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
	ctx.lr = 0x831B49B4;
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

__attribute__((alias("__imp__sub_831B49D0"))) PPC_WEAK_FUNC(sub_831B49D0);
PPC_FUNC_IMPL(__imp__sub_831B49D0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30820
	ctx.r30.s64 = ctx.r31.s64 + 30820;
	// addi r4,r11,15064
	ctx.r4.s64 = ctx.r11.s64 + 15064;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B49FC;
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
	// lfs f0,19696(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19696);
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
	// addi r3,r10,-31392
	ctx.r3.s64 = ctx.r10.s64 + -31392;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30820, ctx.r11.u32);
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
	ctx.lr = 0x831B4A44;
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

__attribute__((alias("__imp__sub_831B4A60"))) PPC_WEAK_FUNC(sub_831B4A60);
PPC_FUNC_IMPL(__imp__sub_831B4A60) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30208
	ctx.r30.s64 = ctx.r31.s64 + 30208;
	// addi r5,r11,15108
	ctx.r5.s64 = ctx.r11.s64 + 15108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c07478
	ctx.lr = 0x831B4A90;
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
	// stw r10,30208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30208, ctx.r10.u32);
	// addi r3,r11,32736
	ctx.r3.s64 = ctx.r11.s64 + 32736;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B4AB0;
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

__attribute__((alias("__imp__sub_831B4AC8"))) PPC_WEAK_FUNC(sub_831B4AC8);
PPC_FUNC_IMPL(__imp__sub_831B4AC8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29296
	ctx.r30.s64 = ctx.r31.s64 + 29296;
	// addi r4,r11,15152
	ctx.r4.s64 = ctx.r11.s64 + 15152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4AF4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,32760
	ctx.r3.s64 = ctx.r9.s64 + 32760;
	// lfs f0,19696(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19696);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,29296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29296, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831B4B18;
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

__attribute__((alias("__imp__sub_831B4B30"))) PPC_WEAK_FUNC(sub_831B4B30);
PPC_FUNC_IMPL(__imp__sub_831B4B30) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29716
	ctx.r30.s64 = ctx.r31.s64 + 29716;
	// addi r4,r11,15216
	ctx.r4.s64 = ctx.r11.s64 + 15216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4B5C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-32752
	ctx.r3.s64 = ctx.r9.s64 + -32752;
	// lfs f0,19696(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19696);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,29716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29716, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831B4B80;
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

__attribute__((alias("__imp__sub_831B4B98"))) PPC_WEAK_FUNC(sub_831B4B98);
PPC_FUNC_IMPL(__imp__sub_831B4B98) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31004
	ctx.r30.s64 = ctx.r31.s64 + 31004;
	// addi r4,r11,15276
	ctx.r4.s64 = ctx.r11.s64 + 15276;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4BC4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-32728
	ctx.r3.s64 = ctx.r9.s64 + -32728;
	// lfs f0,19696(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19696);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,31004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31004, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831B4BE8;
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

__attribute__((alias("__imp__sub_831B4C00"))) PPC_WEAK_FUNC(sub_831B4C00);
PPC_FUNC_IMPL(__imp__sub_831B4C00) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30944
	ctx.r30.s64 = ctx.r31.s64 + 30944;
	// addi r4,r11,15332
	ctx.r4.s64 = ctx.r11.s64 + 15332;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4C2C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-32704
	ctx.r3.s64 = ctx.r9.s64 + -32704;
	// lfs f0,3340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3340);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,30944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30944, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831B4C50;
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

__attribute__((alias("__imp__sub_831B4C68"))) PPC_WEAK_FUNC(sub_831B4C68);
PPC_FUNC_IMPL(__imp__sub_831B4C68) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29824
	ctx.r30.s64 = ctx.r31.s64 + 29824;
	// addi r4,r11,15384
	ctx.r4.s64 = ctx.r11.s64 + 15384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4C94;
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
	// addi r3,r10,-31368
	ctx.r3.s64 = ctx.r10.s64 + -31368;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29824, ctx.r11.u32);
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
	ctx.lr = 0x831B4CDC;
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

__attribute__((alias("__imp__sub_831B4CF8"))) PPC_WEAK_FUNC(sub_831B4CF8);
PPC_FUNC_IMPL(__imp__sub_831B4CF8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29452
	ctx.r30.s64 = ctx.r31.s64 + 29452;
	// addi r4,r11,15444
	ctx.r4.s64 = ctx.r11.s64 + 15444;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4D24;
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
	// lfs f0,3484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3484);
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
	// addi r3,r10,-31344
	ctx.r3.s64 = ctx.r10.s64 + -31344;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29452, ctx.r11.u32);
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
	ctx.lr = 0x831B4D6C;
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

__attribute__((alias("__imp__sub_831B4D88"))) PPC_WEAK_FUNC(sub_831B4D88);
PPC_FUNC_IMPL(__imp__sub_831B4D88) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29380
	ctx.r30.s64 = ctx.r31.s64 + 29380;
	// addi r4,r11,15508
	ctx.r4.s64 = ctx.r11.s64 + 15508;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4DB4;
	sub_82C07410(ctx, base);
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
	// lfs f0,3208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3648);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-31320
	ctx.r3.s64 = ctx.r7.s64 + -31320;
	// lfs f12,3400(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3400);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,29380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29380, ctx.r11.u32);
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
	ctx.lr = 0x831B4DF4;
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

__attribute__((alias("__imp__sub_831B4E10"))) PPC_WEAK_FUNC(sub_831B4E10);
PPC_FUNC_IMPL(__imp__sub_831B4E10) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29776
	ctx.r30.s64 = ctx.r31.s64 + 29776;
	// addi r4,r11,15568
	ctx.r4.s64 = ctx.r11.s64 + 15568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4E3C;
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
	// addi r3,r10,-31296
	ctx.r3.s64 = ctx.r10.s64 + -31296;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29776, ctx.r11.u32);
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
	ctx.lr = 0x831B4E84;
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

__attribute__((alias("__imp__sub_831B4EA0"))) PPC_WEAK_FUNC(sub_831B4EA0);
PPC_FUNC_IMPL(__imp__sub_831B4EA0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29752
	ctx.r30.s64 = ctx.r31.s64 + 29752;
	// addi r4,r11,15612
	ctx.r4.s64 = ctx.r11.s64 + 15612;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4ECC;
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
	// addi r3,r10,-31272
	ctx.r3.s64 = ctx.r10.s64 + -31272;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29752, ctx.r11.u32);
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
	ctx.lr = 0x831B4F14;
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

__attribute__((alias("__imp__sub_831B4F30"))) PPC_WEAK_FUNC(sub_831B4F30);
PPC_FUNC_IMPL(__imp__sub_831B4F30) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29608
	ctx.r30.s64 = ctx.r31.s64 + 29608;
	// addi r4,r11,15664
	ctx.r4.s64 = ctx.r11.s64 + 15664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4F5C;
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
	// lfs f0,3220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3220);
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
	// addi r3,r10,-31248
	ctx.r3.s64 = ctx.r10.s64 + -31248;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29608, ctx.r11.u32);
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
	ctx.lr = 0x831B4FA4;
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

__attribute__((alias("__imp__sub_831B4FC0"))) PPC_WEAK_FUNC(sub_831B4FC0);
PPC_FUNC_IMPL(__imp__sub_831B4FC0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29800
	ctx.r30.s64 = ctx.r31.s64 + 29800;
	// addi r4,r11,15728
	ctx.r4.s64 = ctx.r11.s64 + 15728;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B4FEC;
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
	// lfs f0,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
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
	// addi r3,r10,-31224
	ctx.r3.s64 = ctx.r10.s64 + -31224;
	// lfs f11,32544(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32544);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29800, ctx.r11.u32);
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
	ctx.lr = 0x831B5034;
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

__attribute__((alias("__imp__sub_831B5050"))) PPC_WEAK_FUNC(sub_831B5050);
PPC_FUNC_IMPL(__imp__sub_831B5050) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29152
	ctx.r30.s64 = ctx.r31.s64 + 29152;
	// addi r4,r11,15792
	ctx.r4.s64 = ctx.r11.s64 + 15792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B507C;
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
	// addi r3,r10,-31200
	ctx.r3.s64 = ctx.r10.s64 + -31200;
	// lfs f11,32544(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32544);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29152, ctx.r11.u32);
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
	ctx.lr = 0x831B50C4;
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

__attribute__((alias("__imp__sub_831B50E0"))) PPC_WEAK_FUNC(sub_831B50E0);
PPC_FUNC_IMPL(__imp__sub_831B50E0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29332
	ctx.r30.s64 = ctx.r31.s64 + 29332;
	// addi r4,r11,15856
	ctx.r4.s64 = ctx.r11.s64 + 15856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B510C;
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
	// addi r3,r10,-31176
	ctx.r3.s64 = ctx.r10.s64 + -31176;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29332, ctx.r11.u32);
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
	ctx.lr = 0x831B5154;
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

__attribute__((alias("__imp__sub_831B5170"))) PPC_WEAK_FUNC(sub_831B5170);
PPC_FUNC_IMPL(__imp__sub_831B5170) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30920
	ctx.r30.s64 = ctx.r31.s64 + 30920;
	// addi r4,r11,15920
	ctx.r4.s64 = ctx.r11.s64 + 15920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B519C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
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
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-27844(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27844);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-31152
	ctx.r3.s64 = ctx.r10.s64 + -31152;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30920, ctx.r11.u32);
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
	ctx.lr = 0x831B51E4;
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

__attribute__((alias("__imp__sub_831B5200"))) PPC_WEAK_FUNC(sub_831B5200);
PPC_FUNC_IMPL(__imp__sub_831B5200) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29668
	ctx.r30.s64 = ctx.r31.s64 + 29668;
	// addi r4,r11,15992
	ctx.r4.s64 = ctx.r11.s64 + 15992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B522C;
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
	// lfs f0,19696(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19696);
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
	// addi r3,r10,-31128
	ctx.r3.s64 = ctx.r10.s64 + -31128;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29668, ctx.r11.u32);
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
	ctx.lr = 0x831B5274;
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

__attribute__((alias("__imp__sub_831B5290"))) PPC_WEAK_FUNC(sub_831B5290);
PPC_FUNC_IMPL(__imp__sub_831B5290) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29560
	ctx.r30.s64 = ctx.r31.s64 + 29560;
	// addi r4,r11,16052
	ctx.r4.s64 = ctx.r11.s64 + 16052;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B52BC;
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
	// addi r3,r10,-31104
	ctx.r3.s64 = ctx.r10.s64 + -31104;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29560, ctx.r11.u32);
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
	ctx.lr = 0x831B5304;
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

__attribute__((alias("__imp__sub_831B5320"))) PPC_WEAK_FUNC(sub_831B5320);
PPC_FUNC_IMPL(__imp__sub_831B5320) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30700
	ctx.r30.s64 = ctx.r31.s64 + 30700;
	// addi r4,r11,16108
	ctx.r4.s64 = ctx.r11.s64 + 16108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B534C;
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
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
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
	// addi r3,r10,-31080
	ctx.r3.s64 = ctx.r10.s64 + -31080;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30700, ctx.r11.u32);
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
	ctx.lr = 0x831B5394;
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

__attribute__((alias("__imp__sub_831B53B0"))) PPC_WEAK_FUNC(sub_831B53B0);
PPC_FUNC_IMPL(__imp__sub_831B53B0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29644
	ctx.r30.s64 = ctx.r31.s64 + 29644;
	// addi r4,r11,16164
	ctx.r4.s64 = ctx.r11.s64 + 16164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B53DC;
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
	// addi r3,r10,-31056
	ctx.r3.s64 = ctx.r10.s64 + -31056;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29644, ctx.r11.u32);
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
	ctx.lr = 0x831B5424;
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

__attribute__((alias("__imp__sub_831B5440"))) PPC_WEAK_FUNC(sub_831B5440);
PPC_FUNC_IMPL(__imp__sub_831B5440) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29488
	ctx.r30.s64 = ctx.r31.s64 + 29488;
	// addi r4,r11,16224
	ctx.r4.s64 = ctx.r11.s64 + 16224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B546C;
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
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
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
	// addi r3,r10,-31032
	ctx.r3.s64 = ctx.r10.s64 + -31032;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29488, ctx.r11.u32);
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
	ctx.lr = 0x831B54B4;
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

__attribute__((alias("__imp__sub_831B54D0"))) PPC_WEAK_FUNC(sub_831B54D0);
PPC_FUNC_IMPL(__imp__sub_831B54D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,31136
	ctx.r3.s64 = ctx.r11.s64 + 31136;
	// bl 0x82b5ff70
	ctx.lr = 0x831B54E8;
	sub_82B5FF70(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,32576
	ctx.r3.s64 = ctx.r11.s64 + 32576;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B54F4;
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

__attribute__((alias("__imp__sub_831B5508"))) PPC_WEAK_FUNC(sub_831B5508);
PPC_FUNC_IMPL(__imp__sub_831B5508) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29272
	ctx.r30.s64 = ctx.r31.s64 + 29272;
	// addi r4,r11,16292
	ctx.r4.s64 = ctx.r11.s64 + 16292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B5534;
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
	// addi r3,r10,-31008
	ctx.r3.s64 = ctx.r10.s64 + -31008;
	// lfs f11,3296(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3296);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29272, ctx.r11.u32);
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
	ctx.lr = 0x831B557C;
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

__attribute__((alias("__imp__sub_831B5598"))) PPC_WEAK_FUNC(sub_831B5598);
PPC_FUNC_IMPL(__imp__sub_831B5598) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29104
	ctx.r30.s64 = ctx.r31.s64 + 29104;
	// addi r4,r11,16336
	ctx.r4.s64 = ctx.r11.s64 + 16336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B55C4;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-30984
	ctx.r3.s64 = ctx.r7.s64 + -30984;
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,29104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29104, ctx.r11.u32);
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
	ctx.lr = 0x831B5604;
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

__attribute__((alias("__imp__sub_831B5620"))) PPC_WEAK_FUNC(sub_831B5620);
PPC_FUNC_IMPL(__imp__sub_831B5620) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29248
	ctx.r30.s64 = ctx.r31.s64 + 29248;
	// addi r4,r11,16384
	ctx.r4.s64 = ctx.r11.s64 + 16384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B564C;
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
	// lfs f0,3432(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3432);
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
	// addi r3,r10,-30960
	ctx.r3.s64 = ctx.r10.s64 + -30960;
	// lfs f11,3288(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3288);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29248, ctx.r11.u32);
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
	ctx.lr = 0x831B5694;
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

__attribute__((alias("__imp__sub_831B56B0"))) PPC_WEAK_FUNC(sub_831B56B0);
PPC_FUNC_IMPL(__imp__sub_831B56B0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30956
	ctx.r30.s64 = ctx.r31.s64 + 30956;
	// addi r4,r11,16436
	ctx.r4.s64 = ctx.r11.s64 + 16436;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B56DC;
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
	// addi r3,r10,-30936
	ctx.r3.s64 = ctx.r10.s64 + -30936;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30956, ctx.r11.u32);
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
	ctx.lr = 0x831B5724;
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

__attribute__((alias("__imp__sub_831B5740"))) PPC_WEAK_FUNC(sub_831B5740);
PPC_FUNC_IMPL(__imp__sub_831B5740) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29692
	ctx.r30.s64 = ctx.r31.s64 + 29692;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B576C;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-30912
	ctx.r3.s64 = ctx.r10.s64 + -30912;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29692, ctx.r11.u32);
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
	ctx.lr = 0x831B57B4;
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

__attribute__((alias("__imp__sub_831B57D0"))) PPC_WEAK_FUNC(sub_831B57D0);
PPC_FUNC_IMPL(__imp__sub_831B57D0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29128
	ctx.r30.s64 = ctx.r31.s64 + 29128;
	// addi r4,r11,16548
	ctx.r4.s64 = ctx.r11.s64 + 16548;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B57FC;
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
	// addi r3,r10,-30888
	ctx.r3.s64 = ctx.r10.s64 + -30888;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29128, ctx.r11.u32);
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
	ctx.lr = 0x831B5844;
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

__attribute__((alias("__imp__sub_831B5860"))) PPC_WEAK_FUNC(sub_831B5860);
PPC_FUNC_IMPL(__imp__sub_831B5860) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29308
	ctx.r30.s64 = ctx.r31.s64 + 29308;
	// addi r4,r11,16592
	ctx.r4.s64 = ctx.r11.s64 + 16592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B588C;
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
	// addi r3,r10,-30864
	ctx.r3.s64 = ctx.r10.s64 + -30864;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29308, ctx.r11.u32);
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
	ctx.lr = 0x831B58D4;
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

__attribute__((alias("__imp__sub_831B58F0"))) PPC_WEAK_FUNC(sub_831B58F0);
PPC_FUNC_IMPL(__imp__sub_831B58F0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30724
	ctx.r30.s64 = ctx.r31.s64 + 30724;
	// addi r4,r11,16632
	ctx.r4.s64 = ctx.r11.s64 + 16632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B591C;
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
	// addi r3,r10,-30840
	ctx.r3.s64 = ctx.r10.s64 + -30840;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30724, ctx.r11.u32);
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
	ctx.lr = 0x831B5964;
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

__attribute__((alias("__imp__sub_831B5980"))) PPC_WEAK_FUNC(sub_831B5980);
PPC_FUNC_IMPL(__imp__sub_831B5980) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30796
	ctx.r30.s64 = ctx.r31.s64 + 30796;
	// addi r4,r11,16668
	ctx.r4.s64 = ctx.r11.s64 + 16668;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B59AC;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3392(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3392);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-30816
	ctx.r3.s64 = ctx.r10.s64 + -30816;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30796, ctx.r11.u32);
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
	ctx.lr = 0x831B59F4;
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

__attribute__((alias("__imp__sub_831B5A10"))) PPC_WEAK_FUNC(sub_831B5A10);
PPC_FUNC_IMPL(__imp__sub_831B5A10) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29176
	ctx.r30.s64 = ctx.r31.s64 + 29176;
	// addi r4,r11,16724
	ctx.r4.s64 = ctx.r11.s64 + 16724;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B5A3C;
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
	// addi r3,r10,-30792
	ctx.r3.s64 = ctx.r10.s64 + -30792;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29176, ctx.r11.u32);
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
	ctx.lr = 0x831B5A84;
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

__attribute__((alias("__imp__sub_831B5AA0"))) PPC_WEAK_FUNC(sub_831B5AA0);
PPC_FUNC_IMPL(__imp__sub_831B5AA0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29356
	ctx.r30.s64 = ctx.r31.s64 + 29356;
	// addi r4,r11,16768
	ctx.r4.s64 = ctx.r11.s64 + 16768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B5ACC;
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
	// lfs f0,3320(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3320);
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
	// addi r3,r10,-30768
	ctx.r3.s64 = ctx.r10.s64 + -30768;
	// lfs f11,3464(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3464);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29356, ctx.r11.u32);
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
	ctx.lr = 0x831B5B14;
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

__attribute__((alias("__imp__sub_831B5B30"))) PPC_WEAK_FUNC(sub_831B5B30);
PPC_FUNC_IMPL(__imp__sub_831B5B30) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29512
	ctx.r30.s64 = ctx.r31.s64 + 29512;
	// addi r4,r11,16820
	ctx.r4.s64 = ctx.r11.s64 + 16820;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B5B5C;
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
	// lfs f0,3412(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3412);
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
	// addi r3,r10,-30744
	ctx.r3.s64 = ctx.r10.s64 + -30744;
	// lfs f11,3464(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3464);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29512, ctx.r11.u32);
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
	ctx.lr = 0x831B5BA4;
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

__attribute__((alias("__imp__sub_831B5BC0"))) PPC_WEAK_FUNC(sub_831B5BC0);
PPC_FUNC_IMPL(__imp__sub_831B5BC0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29224
	ctx.r30.s64 = ctx.r31.s64 + 29224;
	// addi r4,r11,16876
	ctx.r4.s64 = ctx.r11.s64 + 16876;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B5BEC;
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
	// addi r3,r10,-30720
	ctx.r3.s64 = ctx.r10.s64 + -30720;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29224, ctx.r11.u32);
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
	ctx.lr = 0x831B5C34;
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

__attribute__((alias("__imp__sub_831B5C50"))) PPC_WEAK_FUNC(sub_831B5C50);
PPC_FUNC_IMPL(__imp__sub_831B5C50) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29404
	ctx.r30.s64 = ctx.r31.s64 + 29404;
	// addi r4,r11,16932
	ctx.r4.s64 = ctx.r11.s64 + 16932;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B5C7C;
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
	// addi r3,r10,-30696
	ctx.r3.s64 = ctx.r10.s64 + -30696;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29404, ctx.r11.u32);
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
	ctx.lr = 0x831B5CC4;
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

__attribute__((alias("__imp__sub_831B5CE0"))) PPC_WEAK_FUNC(sub_831B5CE0);
PPC_FUNC_IMPL(__imp__sub_831B5CE0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29200
	ctx.r30.s64 = ctx.r31.s64 + 29200;
	// addi r4,r11,16988
	ctx.r4.s64 = ctx.r11.s64 + 16988;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B5D0C;
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
	// addi r3,r10,-30672
	ctx.r3.s64 = ctx.r10.s64 + -30672;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29200, ctx.r11.u32);
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
	ctx.lr = 0x831B5D54;
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

__attribute__((alias("__imp__sub_831B5D70"))) PPC_WEAK_FUNC(sub_831B5D70);
PPC_FUNC_IMPL(__imp__sub_831B5D70) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29536
	ctx.r30.s64 = ctx.r31.s64 + 29536;
	// addi r4,r11,17052
	ctx.r4.s64 = ctx.r11.s64 + 17052;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B5D9C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
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
	// addi r3,r10,-30648
	ctx.r3.s64 = ctx.r10.s64 + -30648;
	// lfs f11,17048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17048);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29536, ctx.r11.u32);
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
	ctx.lr = 0x831B5DE4;
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

__attribute__((alias("__imp__sub_831B5E00"))) PPC_WEAK_FUNC(sub_831B5E00);
PPC_FUNC_IMPL(__imp__sub_831B5E00) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29632
	ctx.r30.s64 = ctx.r31.s64 + 29632;
	// addi r4,r11,17108
	ctx.r4.s64 = ctx.r11.s64 + 17108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B5E2C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r10,25528
	ctx.r10.s64 = ctx.r10.s64 + 25528;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stw r10,29632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29632, ctx.r10.u32);
	// addi r3,r11,-32680
	ctx.r3.s64 = ctx.r11.s64 + -32680;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B5E4C;
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

__attribute__((alias("__imp__sub_831B5E68"))) PPC_WEAK_FUNC(sub_831B5E68);
PPC_FUNC_IMPL(__imp__sub_831B5E68) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,30868
	ctx.r30.s64 = ctx.r31.s64 + 30868;
	// addi r4,r11,17168
	ctx.r4.s64 = ctx.r11.s64 + 17168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B5E94;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-30624
	ctx.r3.s64 = ctx.r10.s64 + -30624;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,30868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30868, ctx.r11.u32);
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
	ctx.lr = 0x831B5EDC;
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

__attribute__((alias("__imp__sub_831B5EF8"))) PPC_WEAK_FUNC(sub_831B5EF8);
PPC_FUNC_IMPL(__imp__sub_831B5EF8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29428
	ctx.r30.s64 = ctx.r31.s64 + 29428;
	// addi r4,r11,17216
	ctx.r4.s64 = ctx.r11.s64 + 17216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B5F24;
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
	// addi r3,r10,-30600
	ctx.r3.s64 = ctx.r10.s64 + -30600;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29428, ctx.r11.u32);
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
	ctx.lr = 0x831B5F6C;
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

__attribute__((alias("__imp__sub_831B5F88"))) PPC_WEAK_FUNC(sub_831B5F88);
PPC_FUNC_IMPL(__imp__sub_831B5F88) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29584
	ctx.r30.s64 = ctx.r31.s64 + 29584;
	// addi r4,r11,17256
	ctx.r4.s64 = ctx.r11.s64 + 17256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B5FB4;
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
	// lfs f0,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-30576
	ctx.r3.s64 = ctx.r10.s64 + -30576;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,29584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29584, ctx.r11.u32);
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
	ctx.lr = 0x831B5FFC;
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

__attribute__((alias("__imp__sub_831B6018"))) PPC_WEAK_FUNC(sub_831B6018);
PPC_FUNC_IMPL(__imp__sub_831B6018) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,29476
	ctx.r30.s64 = ctx.r31.s64 + 29476;
	// addi r4,r11,17304
	ctx.r4.s64 = ctx.r11.s64 + 17304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B6044;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stw r10,29476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29476, ctx.r10.u32);
	// addi r3,r11,-32656
	ctx.r3.s64 = ctx.r11.s64 + -32656;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B6064;
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

__attribute__((alias("__imp__sub_831B6080"))) PPC_WEAK_FUNC(sub_831B6080);
PPC_FUNC_IMPL(__imp__sub_831B6080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,31248
	ctx.r9.s64 = ctx.r11.s64 + 31248;
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

__attribute__((alias("__imp__sub_831B60B0"))) PPC_WEAK_FUNC(sub_831B60B0);
PPC_FUNC_IMPL(__imp__sub_831B60B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,31232
	ctx.r9.s64 = ctx.r11.s64 + 31232;
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

__attribute__((alias("__imp__sub_831B60E0"))) PPC_WEAK_FUNC(sub_831B60E0);
PPC_FUNC_IMPL(__imp__sub_831B60E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,31184
	ctx.r9.s64 = ctx.r11.s64 + 31184;
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

__attribute__((alias("__imp__sub_831B6110"))) PPC_WEAK_FUNC(sub_831B6110);
PPC_FUNC_IMPL(__imp__sub_831B6110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,31216
	ctx.r9.s64 = ctx.r11.s64 + 31216;
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

__attribute__((alias("__imp__sub_831B6140"))) PPC_WEAK_FUNC(sub_831B6140);
PPC_FUNC_IMPL(__imp__sub_831B6140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,31200
	ctx.r10.s64 = ctx.r10.s64 + 31200;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B6160"))) PPC_WEAK_FUNC(sub_831B6160);
PPC_FUNC_IMPL(__imp__sub_831B6160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,31168
	ctx.r10.s64 = ctx.r10.s64 + 31168;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B6180"))) PPC_WEAK_FUNC(sub_831B6180);
PPC_FUNC_IMPL(__imp__sub_831B6180) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31840
	ctx.r30.s64 = ctx.r31.s64 + 31840;
	// addi r4,r11,18096
	ctx.r4.s64 = ctx.r11.s64 + 18096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B61AC;
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
	// addi r3,r10,-30504
	ctx.r3.s64 = ctx.r10.s64 + -30504;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31840, ctx.r11.u32);
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
	ctx.lr = 0x831B61F4;
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

__attribute__((alias("__imp__sub_831B6210"))) PPC_WEAK_FUNC(sub_831B6210);
PPC_FUNC_IMPL(__imp__sub_831B6210) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32468
	ctx.r30.s64 = ctx.r31.s64 + 32468;
	// addi r4,r11,18140
	ctx.r4.s64 = ctx.r11.s64 + 18140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B623C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,25528
	ctx.r10.s64 = ctx.r10.s64 + 25528;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stw r10,32468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32468, ctx.r10.u32);
	// addi r3,r11,-30552
	ctx.r3.s64 = ctx.r11.s64 + -30552;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B625C;
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

__attribute__((alias("__imp__sub_831B6278"))) PPC_WEAK_FUNC(sub_831B6278);
PPC_FUNC_IMPL(__imp__sub_831B6278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-30480
	ctx.r3.s64 = ctx.r11.s64 + -30480;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B6288"))) PPC_WEAK_FUNC(sub_831B6288);
PPC_FUNC_IMPL(__imp__sub_831B6288) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31624
	ctx.r30.s64 = ctx.r31.s64 + 31624;
	// addi r4,r11,18196
	ctx.r4.s64 = ctx.r11.s64 + 18196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B62B4;
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
	// addi r3,r10,-30464
	ctx.r3.s64 = ctx.r10.s64 + -30464;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31624, ctx.r11.u32);
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
	ctx.lr = 0x831B62FC;
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

__attribute__((alias("__imp__sub_831B6318"))) PPC_WEAK_FUNC(sub_831B6318);
PPC_FUNC_IMPL(__imp__sub_831B6318) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31312
	ctx.r30.s64 = ctx.r31.s64 + 31312;
	// addi r4,r11,18244
	ctx.r4.s64 = ctx.r11.s64 + 18244;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B6344;
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
	// addi r3,r10,-30440
	ctx.r3.s64 = ctx.r10.s64 + -30440;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31312, ctx.r11.u32);
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
	ctx.lr = 0x831B638C;
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

__attribute__((alias("__imp__sub_831B63A8"))) PPC_WEAK_FUNC(sub_831B63A8);
PPC_FUNC_IMPL(__imp__sub_831B63A8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31480
	ctx.r30.s64 = ctx.r31.s64 + 31480;
	// addi r4,r11,18304
	ctx.r4.s64 = ctx.r11.s64 + 18304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B63D4;
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
	// addi r3,r10,-30416
	ctx.r3.s64 = ctx.r10.s64 + -30416;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31480, ctx.r11.u32);
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
	ctx.lr = 0x831B641C;
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

__attribute__((alias("__imp__sub_831B6438"))) PPC_WEAK_FUNC(sub_831B6438);
PPC_FUNC_IMPL(__imp__sub_831B6438) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31384
	ctx.r30.s64 = ctx.r31.s64 + 31384;
	// addi r4,r11,18360
	ctx.r4.s64 = ctx.r11.s64 + 18360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B6464;
	sub_82C07410(ctx, base);
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
	// lfs f0,3276(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3276);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3648);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-30392
	ctx.r3.s64 = ctx.r7.s64 + -30392;
	// lfs f12,3320(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3320);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,31384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31384, ctx.r11.u32);
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
	ctx.lr = 0x831B64A4;
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

__attribute__((alias("__imp__sub_831B64C0"))) PPC_WEAK_FUNC(sub_831B64C0);
PPC_FUNC_IMPL(__imp__sub_831B64C0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32252
	ctx.r30.s64 = ctx.r31.s64 + 32252;
	// addi r4,r11,18424
	ctx.r4.s64 = ctx.r11.s64 + 18424;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B64EC;
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
	// lfs f0,3432(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3432);
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
	// addi r3,r10,-30368
	ctx.r3.s64 = ctx.r10.s64 + -30368;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32252, ctx.r11.u32);
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
	ctx.lr = 0x831B6534;
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

__attribute__((alias("__imp__sub_831B6550"))) PPC_WEAK_FUNC(sub_831B6550);
PPC_FUNC_IMPL(__imp__sub_831B6550) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31336
	ctx.r30.s64 = ctx.r31.s64 + 31336;
	// addi r4,r11,18464
	ctx.r4.s64 = ctx.r11.s64 + 18464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B657C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,31336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31336, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-30528
	ctx.r3.s64 = ctx.r11.s64 + -30528;
	// bl 0x82a7e6b0
	ctx.lr = 0x831B65B4;
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

__attribute__((alias("__imp__sub_831B65D0"))) PPC_WEAK_FUNC(sub_831B65D0);
PPC_FUNC_IMPL(__imp__sub_831B65D0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31768
	ctx.r30.s64 = ctx.r31.s64 + 31768;
	// addi r4,r11,18512
	ctx.r4.s64 = ctx.r11.s64 + 18512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B65FC;
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
	// lfs f0,3432(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3432);
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
	// addi r3,r10,-30344
	ctx.r3.s64 = ctx.r10.s64 + -30344;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31768, ctx.r11.u32);
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
	ctx.lr = 0x831B6644;
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

__attribute__((alias("__imp__sub_831B6660"))) PPC_WEAK_FUNC(sub_831B6660);
PPC_FUNC_IMPL(__imp__sub_831B6660) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31672
	ctx.r30.s64 = ctx.r31.s64 + 31672;
	// addi r4,r11,18560
	ctx.r4.s64 = ctx.r11.s64 + 18560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B668C;
	sub_82C07410(ctx, base);
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
	// lfs f0,3208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3648);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-30320
	ctx.r3.s64 = ctx.r7.s64 + -30320;
	// lfs f12,3492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3492);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,31672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31672, ctx.r11.u32);
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
	ctx.lr = 0x831B66CC;
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

__attribute__((alias("__imp__sub_831B66E8"))) PPC_WEAK_FUNC(sub_831B66E8);
PPC_FUNC_IMPL(__imp__sub_831B66E8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31696
	ctx.r30.s64 = ctx.r31.s64 + 31696;
	// addi r4,r11,18612
	ctx.r4.s64 = ctx.r11.s64 + 18612;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B6714;
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
	// lfs f0,3276(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3276);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3152(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-30296
	ctx.r3.s64 = ctx.r10.s64 + -30296;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31696, ctx.r11.u32);
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
	ctx.lr = 0x831B675C;
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

__attribute__((alias("__imp__sub_831B6778"))) PPC_WEAK_FUNC(sub_831B6778);
PPC_FUNC_IMPL(__imp__sub_831B6778) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31984
	ctx.r30.s64 = ctx.r31.s64 + 31984;
	// addi r4,r11,18656
	ctx.r4.s64 = ctx.r11.s64 + 18656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B67A4;
	sub_82C07410(ctx, base);
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
	// lfs f13,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-30272
	ctx.r3.s64 = ctx.r7.s64 + -30272;
	// lfs f12,3320(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3320);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,31984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31984, ctx.r11.u32);
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
	ctx.lr = 0x831B67E4;
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

__attribute__((alias("__imp__sub_831B6800"))) PPC_WEAK_FUNC(sub_831B6800);
PPC_FUNC_IMPL(__imp__sub_831B6800) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31720
	ctx.r30.s64 = ctx.r31.s64 + 31720;
	// addi r4,r11,18692
	ctx.r4.s64 = ctx.r11.s64 + 18692;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B682C;
	sub_82C07410(ctx, base);
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
	// lfs f13,3264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-30248
	ctx.r3.s64 = ctx.r7.s64 + -30248;
	// lfs f12,3492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3492);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,31720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31720, ctx.r11.u32);
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
	ctx.lr = 0x831B686C;
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

__attribute__((alias("__imp__sub_831B6888"))) PPC_WEAK_FUNC(sub_831B6888);
PPC_FUNC_IMPL(__imp__sub_831B6888) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31288
	ctx.r30.s64 = ctx.r31.s64 + 31288;
	// addi r4,r11,18736
	ctx.r4.s64 = ctx.r11.s64 + 18736;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B68B4;
	sub_82C07410(ctx, base);
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
	// lfs f13,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-30224
	ctx.r3.s64 = ctx.r7.s64 + -30224;
	// lfs f12,3320(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3320);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,31288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31288, ctx.r11.u32);
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
	ctx.lr = 0x831B68F4;
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

__attribute__((alias("__imp__sub_831B6910"))) PPC_WEAK_FUNC(sub_831B6910);
PPC_FUNC_IMPL(__imp__sub_831B6910) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32420
	ctx.r30.s64 = ctx.r31.s64 + 32420;
	// addi r4,r11,18772
	ctx.r4.s64 = ctx.r11.s64 + 18772;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B693C;
	sub_82C07410(ctx, base);
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
	// lfs f13,3264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-30200
	ctx.r3.s64 = ctx.r7.s64 + -30200;
	// lfs f12,3492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3492);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,32420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32420, ctx.r11.u32);
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
	ctx.lr = 0x831B697C;
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

__attribute__((alias("__imp__sub_831B6998"))) PPC_WEAK_FUNC(sub_831B6998);
PPC_FUNC_IMPL(__imp__sub_831B6998) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32276
	ctx.r30.s64 = ctx.r31.s64 + 32276;
	// addi r4,r11,18816
	ctx.r4.s64 = ctx.r11.s64 + 18816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B69C4;
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
	// lfs f0,3288(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3288);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3152(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3276(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3276);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-30176
	ctx.r3.s64 = ctx.r10.s64 + -30176;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32276, ctx.r11.u32);
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
	ctx.lr = 0x831B6A0C;
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

__attribute__((alias("__imp__sub_831B6A28"))) PPC_WEAK_FUNC(sub_831B6A28);
PPC_FUNC_IMPL(__imp__sub_831B6A28) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31264
	ctx.r30.s64 = ctx.r31.s64 + 31264;
	// addi r4,r11,18864
	ctx.r4.s64 = ctx.r11.s64 + 18864;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B6A54;
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
	// lfs f0,3276(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3276);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3152(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-30152
	ctx.r3.s64 = ctx.r10.s64 + -30152;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31264, ctx.r11.u32);
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
	ctx.lr = 0x831B6A9C;
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

__attribute__((alias("__imp__sub_831B6AB8"))) PPC_WEAK_FUNC(sub_831B6AB8);
PPC_FUNC_IMPL(__imp__sub_831B6AB8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32444
	ctx.r30.s64 = ctx.r31.s64 + 32444;
	// addi r4,r11,18904
	ctx.r4.s64 = ctx.r11.s64 + 18904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B6AE4;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,21540(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21540);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-30128
	ctx.r3.s64 = ctx.r10.s64 + -30128;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32444, ctx.r11.u32);
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
	ctx.lr = 0x831B6B2C;
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

__attribute__((alias("__imp__sub_831B6B48"))) PPC_WEAK_FUNC(sub_831B6B48);
PPC_FUNC_IMPL(__imp__sub_831B6B48) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32324
	ctx.r30.s64 = ctx.r31.s64 + 32324;
	// addi r4,r11,18932
	ctx.r4.s64 = ctx.r11.s64 + 18932;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B6B74;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-30104
	ctx.r3.s64 = ctx.r10.s64 + -30104;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32324, ctx.r11.u32);
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
	ctx.lr = 0x831B6BBC;
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

__attribute__((alias("__imp__sub_831B6BD8"))) PPC_WEAK_FUNC(sub_831B6BD8);
PPC_FUNC_IMPL(__imp__sub_831B6BD8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31816
	ctx.r30.s64 = ctx.r31.s64 + 31816;
	// addi r4,r11,18960
	ctx.r4.s64 = ctx.r11.s64 + 18960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B6C04;
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
	// addi r3,r10,-30080
	ctx.r3.s64 = ctx.r10.s64 + -30080;
	// lfs f11,3248(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3248);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31816, ctx.r11.u32);
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
	ctx.lr = 0x831B6C4C;
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

__attribute__((alias("__imp__sub_831B6C68"))) PPC_WEAK_FUNC(sub_831B6C68);
PPC_FUNC_IMPL(__imp__sub_831B6C68) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32200
	ctx.r30.s64 = ctx.r31.s64 + 32200;
	// addi r4,r11,18992
	ctx.r4.s64 = ctx.r11.s64 + 18992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B6C94;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-30056
	ctx.r3.s64 = ctx.r10.s64 + -30056;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32200, ctx.r11.u32);
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
	ctx.lr = 0x831B6CDC;
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

__attribute__((alias("__imp__sub_831B6CF8"))) PPC_WEAK_FUNC(sub_831B6CF8);
PPC_FUNC_IMPL(__imp__sub_831B6CF8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32008
	ctx.r30.s64 = ctx.r31.s64 + 32008;
	// addi r4,r11,19028
	ctx.r4.s64 = ctx.r11.s64 + 19028;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B6D24;
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
	// lfs f0,3320(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3320);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-30032
	ctx.r3.s64 = ctx.r10.s64 + -30032;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32008, ctx.r11.u32);
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
	ctx.lr = 0x831B6D6C;
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

__attribute__((alias("__imp__sub_831B6D88"))) PPC_WEAK_FUNC(sub_831B6D88);
PPC_FUNC_IMPL(__imp__sub_831B6D88) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31600
	ctx.r30.s64 = ctx.r31.s64 + 31600;
	// addi r4,r11,19064
	ctx.r4.s64 = ctx.r11.s64 + 19064;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B6DB4;
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
	// addi r3,r10,-30008
	ctx.r3.s64 = ctx.r10.s64 + -30008;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31600, ctx.r11.u32);
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
	ctx.lr = 0x831B6DFC;
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

__attribute__((alias("__imp__sub_831B6E18"))) PPC_WEAK_FUNC(sub_831B6E18);
PPC_FUNC_IMPL(__imp__sub_831B6E18) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31912
	ctx.r30.s64 = ctx.r31.s64 + 31912;
	// addi r4,r11,19100
	ctx.r4.s64 = ctx.r11.s64 + 19100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B6E44;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-29984
	ctx.r3.s64 = ctx.r10.s64 + -29984;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31912, ctx.r11.u32);
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
	ctx.lr = 0x831B6E8C;
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

__attribute__((alias("__imp__sub_831B6EA8"))) PPC_WEAK_FUNC(sub_831B6EA8);
PPC_FUNC_IMPL(__imp__sub_831B6EA8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32056
	ctx.r30.s64 = ctx.r31.s64 + 32056;
	// addi r4,r11,19144
	ctx.r4.s64 = ctx.r11.s64 + 19144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B6ED4;
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
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-29960
	ctx.r3.s64 = ctx.r10.s64 + -29960;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32056, ctx.r11.u32);
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
	ctx.lr = 0x831B6F1C;
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

__attribute__((alias("__imp__sub_831B6F38"))) PPC_WEAK_FUNC(sub_831B6F38);
PPC_FUNC_IMPL(__imp__sub_831B6F38) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32396
	ctx.r30.s64 = ctx.r31.s64 + 32396;
	// addi r4,r11,19188
	ctx.r4.s64 = ctx.r11.s64 + 19188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B6F64;
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
	// lfs f0,22300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22300);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-29936
	ctx.r3.s64 = ctx.r10.s64 + -29936;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32396, ctx.r11.u32);
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
	ctx.lr = 0x831B6FAC;
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

__attribute__((alias("__imp__sub_831B6FC8"))) PPC_WEAK_FUNC(sub_831B6FC8);
PPC_FUNC_IMPL(__imp__sub_831B6FC8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32176
	ctx.r30.s64 = ctx.r31.s64 + 32176;
	// addi r4,r11,19232
	ctx.r4.s64 = ctx.r11.s64 + 19232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B6FF4;
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
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-29912
	ctx.r3.s64 = ctx.r10.s64 + -29912;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32176, ctx.r11.u32);
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
	ctx.lr = 0x831B703C;
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

__attribute__((alias("__imp__sub_831B7058"))) PPC_WEAK_FUNC(sub_831B7058);
PPC_FUNC_IMPL(__imp__sub_831B7058) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31576
	ctx.r30.s64 = ctx.r31.s64 + 31576;
	// addi r4,r11,19276
	ctx.r4.s64 = ctx.r11.s64 + 19276;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B7084;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,21524(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21524);
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
	// addi r3,r10,-29888
	ctx.r3.s64 = ctx.r10.s64 + -29888;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31576, ctx.r11.u32);
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
	ctx.lr = 0x831B70CC;
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

__attribute__((alias("__imp__sub_831B70E8"))) PPC_WEAK_FUNC(sub_831B70E8);
PPC_FUNC_IMPL(__imp__sub_831B70E8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31504
	ctx.r30.s64 = ctx.r31.s64 + 31504;
	// addi r4,r11,19324
	ctx.r4.s64 = ctx.r11.s64 + 19324;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B7114;
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
	// lfs f0,3200(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3200);
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
	// addi r3,r10,-29864
	ctx.r3.s64 = ctx.r10.s64 + -29864;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31504, ctx.r11.u32);
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
	ctx.lr = 0x831B715C;
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

__attribute__((alias("__imp__sub_831B7178"))) PPC_WEAK_FUNC(sub_831B7178);
PPC_FUNC_IMPL(__imp__sub_831B7178) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32224
	ctx.r30.s64 = ctx.r31.s64 + 32224;
	// addi r4,r11,19384
	ctx.r4.s64 = ctx.r11.s64 + 19384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B71A4;
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
	// lfs f0,3432(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3432);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-29840
	ctx.r3.s64 = ctx.r10.s64 + -29840;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32224, ctx.r11.u32);
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
	ctx.lr = 0x831B71EC;
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

__attribute__((alias("__imp__sub_831B7208"))) PPC_WEAK_FUNC(sub_831B7208);
PPC_FUNC_IMPL(__imp__sub_831B7208) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31648
	ctx.r30.s64 = ctx.r31.s64 + 31648;
	// addi r4,r11,19428
	ctx.r4.s64 = ctx.r11.s64 + 19428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B7234;
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
	// lfs f0,3432(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3432);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-29816
	ctx.r3.s64 = ctx.r10.s64 + -29816;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31648, ctx.r11.u32);
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
	ctx.lr = 0x831B727C;
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

__attribute__((alias("__imp__sub_831B7298"))) PPC_WEAK_FUNC(sub_831B7298);
PPC_FUNC_IMPL(__imp__sub_831B7298) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32104
	ctx.r30.s64 = ctx.r31.s64 + 32104;
	// addi r4,r11,19472
	ctx.r4.s64 = ctx.r11.s64 + 19472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B72C4;
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
	// lfs f0,3288(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3288);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3152(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-29792
	ctx.r3.s64 = ctx.r10.s64 + -29792;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32104, ctx.r11.u32);
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
	ctx.lr = 0x831B730C;
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

__attribute__((alias("__imp__sub_831B7328"))) PPC_WEAK_FUNC(sub_831B7328);
PPC_FUNC_IMPL(__imp__sub_831B7328) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32152
	ctx.r30.s64 = ctx.r31.s64 + 32152;
	// addi r4,r11,19528
	ctx.r4.s64 = ctx.r11.s64 + 19528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B7354;
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
	// lfs f0,3224(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3224);
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
	// addi r3,r10,-29768
	ctx.r3.s64 = ctx.r10.s64 + -29768;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32152, ctx.r11.u32);
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
	ctx.lr = 0x831B739C;
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

__attribute__((alias("__imp__sub_831B73B8"))) PPC_WEAK_FUNC(sub_831B73B8);
PPC_FUNC_IMPL(__imp__sub_831B73B8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32032
	ctx.r30.s64 = ctx.r31.s64 + 32032;
	// addi r4,r11,19584
	ctx.r4.s64 = ctx.r11.s64 + 19584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B73E4;
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
	// lfs f0,3288(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3288);
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
	// addi r3,r10,-29744
	ctx.r3.s64 = ctx.r10.s64 + -29744;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32032, ctx.r11.u32);
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
	ctx.lr = 0x831B742C;
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

__attribute__((alias("__imp__sub_831B7448"))) PPC_WEAK_FUNC(sub_831B7448);
PPC_FUNC_IMPL(__imp__sub_831B7448) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32372
	ctx.r30.s64 = ctx.r31.s64 + 32372;
	// addi r4,r11,19644
	ctx.r4.s64 = ctx.r11.s64 + 19644;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B7474;
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
	// addi r3,r10,-29720
	ctx.r3.s64 = ctx.r10.s64 + -29720;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32372, ctx.r11.u32);
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
	ctx.lr = 0x831B74BC;
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

__attribute__((alias("__imp__sub_831B74D8"))) PPC_WEAK_FUNC(sub_831B74D8);
PPC_FUNC_IMPL(__imp__sub_831B74D8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31936
	ctx.r30.s64 = ctx.r31.s64 + 31936;
	// addi r4,r11,19708
	ctx.r4.s64 = ctx.r11.s64 + 19708;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B7504;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3168);
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
	// addi r3,r10,-29696
	ctx.r3.s64 = ctx.r10.s64 + -29696;
	// lfs f11,18560(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18560);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31936, ctx.r11.u32);
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
	ctx.lr = 0x831B754C;
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

__attribute__((alias("__imp__sub_831B7568"))) PPC_WEAK_FUNC(sub_831B7568);
PPC_FUNC_IMPL(__imp__sub_831B7568) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31864
	ctx.r30.s64 = ctx.r31.s64 + 31864;
	// addi r4,r11,19768
	ctx.r4.s64 = ctx.r11.s64 + 19768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B7594;
	sub_82C07410(ctx, base);
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
	// lfs f0,3276(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3276);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3648);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-29672
	ctx.r3.s64 = ctx.r7.s64 + -29672;
	// lfs f12,3296(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3296);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,31864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31864, ctx.r11.u32);
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
	ctx.lr = 0x831B75D4;
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

__attribute__((alias("__imp__sub_831B75F0"))) PPC_WEAK_FUNC(sub_831B75F0);
PPC_FUNC_IMPL(__imp__sub_831B75F0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31432
	ctx.r30.s64 = ctx.r31.s64 + 31432;
	// addi r4,r11,19828
	ctx.r4.s64 = ctx.r11.s64 + 19828;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B761C;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,21588(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21588);
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
	// addi r3,r10,-29648
	ctx.r3.s64 = ctx.r10.s64 + -29648;
	// lfs f11,18560(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18560);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31432, ctx.r11.u32);
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
	ctx.lr = 0x831B7664;
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

__attribute__((alias("__imp__sub_831B7680"))) PPC_WEAK_FUNC(sub_831B7680);
PPC_FUNC_IMPL(__imp__sub_831B7680) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32348
	ctx.r30.s64 = ctx.r31.s64 + 32348;
	// addi r4,r11,19888
	ctx.r4.s64 = ctx.r11.s64 + 19888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B76AC;
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
	// lfs f0,3288(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3288);
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
	// addi r3,r10,-29624
	ctx.r3.s64 = ctx.r10.s64 + -29624;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32348, ctx.r11.u32);
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
	ctx.lr = 0x831B76F4;
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

__attribute__((alias("__imp__sub_831B7710"))) PPC_WEAK_FUNC(sub_831B7710);
PPC_FUNC_IMPL(__imp__sub_831B7710) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31960
	ctx.r30.s64 = ctx.r31.s64 + 31960;
	// addi r4,r11,19944
	ctx.r4.s64 = ctx.r11.s64 + 19944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B773C;
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
	// lfs f0,3224(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3224);
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
	// addi r3,r10,-29600
	ctx.r3.s64 = ctx.r10.s64 + -29600;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31960, ctx.r11.u32);
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
	ctx.lr = 0x831B7784;
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

__attribute__((alias("__imp__sub_831B77A0"))) PPC_WEAK_FUNC(sub_831B77A0);
PPC_FUNC_IMPL(__imp__sub_831B77A0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31792
	ctx.r30.s64 = ctx.r31.s64 + 31792;
	// addi r4,r11,20000
	ctx.r4.s64 = ctx.r11.s64 + 20000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B77CC;
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
	// lfs f0,3288(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3288);
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
	// addi r3,r10,-29576
	ctx.r3.s64 = ctx.r10.s64 + -29576;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31792, ctx.r11.u32);
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
	ctx.lr = 0x831B7814;
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

__attribute__((alias("__imp__sub_831B7830"))) PPC_WEAK_FUNC(sub_831B7830);
PPC_FUNC_IMPL(__imp__sub_831B7830) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31528
	ctx.r30.s64 = ctx.r31.s64 + 31528;
	// addi r4,r11,20060
	ctx.r4.s64 = ctx.r11.s64 + 20060;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B785C;
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
	// addi r3,r10,-29552
	ctx.r3.s64 = ctx.r10.s64 + -29552;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31528, ctx.r11.u32);
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
	ctx.lr = 0x831B78A4;
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

__attribute__((alias("__imp__sub_831B78C0"))) PPC_WEAK_FUNC(sub_831B78C0);
PPC_FUNC_IMPL(__imp__sub_831B78C0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31360
	ctx.r30.s64 = ctx.r31.s64 + 31360;
	// addi r4,r11,20124
	ctx.r4.s64 = ctx.r11.s64 + 20124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B78EC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3168);
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
	// addi r3,r10,-29528
	ctx.r3.s64 = ctx.r10.s64 + -29528;
	// lfs f11,18560(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18560);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31360, ctx.r11.u32);
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
	ctx.lr = 0x831B7934;
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

__attribute__((alias("__imp__sub_831B7950"))) PPC_WEAK_FUNC(sub_831B7950);
PPC_FUNC_IMPL(__imp__sub_831B7950) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32128
	ctx.r30.s64 = ctx.r31.s64 + 32128;
	// addi r4,r11,20184
	ctx.r4.s64 = ctx.r11.s64 + 20184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B797C;
	sub_82C07410(ctx, base);
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
	// lfs f0,3276(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3276);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3648);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-29504
	ctx.r3.s64 = ctx.r7.s64 + -29504;
	// lfs f12,3296(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3296);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,32128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32128, ctx.r11.u32);
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
	ctx.lr = 0x831B79BC;
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

__attribute__((alias("__imp__sub_831B79D8"))) PPC_WEAK_FUNC(sub_831B79D8);
PPC_FUNC_IMPL(__imp__sub_831B79D8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32080
	ctx.r30.s64 = ctx.r31.s64 + 32080;
	// addi r4,r11,20244
	ctx.r4.s64 = ctx.r11.s64 + 20244;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B7A04;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,21588(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21588);
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
	// addi r3,r10,-29480
	ctx.r3.s64 = ctx.r10.s64 + -29480;
	// lfs f11,18560(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18560);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32080, ctx.r11.u32);
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
	ctx.lr = 0x831B7A4C;
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

__attribute__((alias("__imp__sub_831B7A68"))) PPC_WEAK_FUNC(sub_831B7A68);
PPC_FUNC_IMPL(__imp__sub_831B7A68) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31552
	ctx.r30.s64 = ctx.r31.s64 + 31552;
	// addi r4,r11,20304
	ctx.r4.s64 = ctx.r11.s64 + 20304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B7A94;
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
	// addi r3,r10,-29456
	ctx.r3.s64 = ctx.r10.s64 + -29456;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31552, ctx.r11.u32);
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
	ctx.lr = 0x831B7ADC;
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

__attribute__((alias("__imp__sub_831B7AF8"))) PPC_WEAK_FUNC(sub_831B7AF8);
PPC_FUNC_IMPL(__imp__sub_831B7AF8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31408
	ctx.r30.s64 = ctx.r31.s64 + 31408;
	// addi r4,r11,20364
	ctx.r4.s64 = ctx.r11.s64 + 20364;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B7B24;
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
	// addi r3,r10,-29432
	ctx.r3.s64 = ctx.r10.s64 + -29432;
	// lfs f11,3488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3488);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31408, ctx.r11.u32);
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
	ctx.lr = 0x831B7B6C;
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

__attribute__((alias("__imp__sub_831B7B88"))) PPC_WEAK_FUNC(sub_831B7B88);
PPC_FUNC_IMPL(__imp__sub_831B7B88) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32300
	ctx.r30.s64 = ctx.r31.s64 + 32300;
	// addi r4,r11,20424
	ctx.r4.s64 = ctx.r11.s64 + 20424;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B7BB4;
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
	// lfs f0,19696(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19696);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3492(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-29408
	ctx.r3.s64 = ctx.r10.s64 + -29408;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32300, ctx.r11.u32);
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
	ctx.lr = 0x831B7BFC;
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

__attribute__((alias("__imp__sub_831B7C18"))) PPC_WEAK_FUNC(sub_831B7C18);
PPC_FUNC_IMPL(__imp__sub_831B7C18) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31744
	ctx.r30.s64 = ctx.r31.s64 + 31744;
	// addi r4,r11,20472
	ctx.r4.s64 = ctx.r11.s64 + 20472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B7C44;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,17832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17832);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3492(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-29384
	ctx.r3.s64 = ctx.r10.s64 + -29384;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31744, ctx.r11.u32);
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
	ctx.lr = 0x831B7C8C;
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

__attribute__((alias("__imp__sub_831B7CA8"))) PPC_WEAK_FUNC(sub_831B7CA8);
PPC_FUNC_IMPL(__imp__sub_831B7CA8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31888
	ctx.r30.s64 = ctx.r31.s64 + 31888;
	// addi r4,r11,20520
	ctx.r4.s64 = ctx.r11.s64 + 20520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B7CD4;
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
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
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
	// addi r3,r10,-29360
	ctx.r3.s64 = ctx.r10.s64 + -29360;
	// lfs f11,32544(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32544);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31888, ctx.r11.u32);
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
	ctx.lr = 0x831B7D1C;
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

__attribute__((alias("__imp__sub_831B7D38"))) PPC_WEAK_FUNC(sub_831B7D38);
PPC_FUNC_IMPL(__imp__sub_831B7D38) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,31456
	ctx.r30.s64 = ctx.r31.s64 + 31456;
	// addi r4,r11,20576
	ctx.r4.s64 = ctx.r11.s64 + 20576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B7D64;
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
	// lfs f0,3280(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3280);
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
	// addi r3,r10,-29336
	ctx.r3.s64 = ctx.r10.s64 + -29336;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,31456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31456, ctx.r11.u32);
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
	ctx.lr = 0x831B7DAC;
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

__attribute__((alias("__imp__sub_831B7DC8"))) PPC_WEAK_FUNC(sub_831B7DC8);
PPC_FUNC_IMPL(__imp__sub_831B7DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,32736
	ctx.r9.s64 = ctx.r11.s64 + 32736;
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

__attribute__((alias("__imp__sub_831B7DF8"))) PPC_WEAK_FUNC(sub_831B7DF8);
PPC_FUNC_IMPL(__imp__sub_831B7DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,32720
	ctx.r9.s64 = ctx.r11.s64 + 32720;
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

__attribute__((alias("__imp__sub_831B7E28"))) PPC_WEAK_FUNC(sub_831B7E28);
PPC_FUNC_IMPL(__imp__sub_831B7E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,32672
	ctx.r9.s64 = ctx.r11.s64 + 32672;
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

__attribute__((alias("__imp__sub_831B7E58"))) PPC_WEAK_FUNC(sub_831B7E58);
PPC_FUNC_IMPL(__imp__sub_831B7E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,32704
	ctx.r9.s64 = ctx.r11.s64 + 32704;
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

__attribute__((alias("__imp__sub_831B7E88"))) PPC_WEAK_FUNC(sub_831B7E88);
PPC_FUNC_IMPL(__imp__sub_831B7E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,32688
	ctx.r10.s64 = ctx.r10.s64 + 32688;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7EA8"))) PPC_WEAK_FUNC(sub_831B7EA8);
PPC_FUNC_IMPL(__imp__sub_831B7EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,32656
	ctx.r10.s64 = ctx.r10.s64 + 32656;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831B7EC8"))) PPC_WEAK_FUNC(sub_831B7EC8);
PPC_FUNC_IMPL(__imp__sub_831B7EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-29160
	ctx.r3.s64 = ctx.r11.s64 + -29160;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B7ED8"))) PPC_WEAK_FUNC(sub_831B7ED8);
PPC_FUNC_IMPL(__imp__sub_831B7ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,-31473
	ctx.r3.s64 = ctx.r11.s64 + -31473;
	// b 0x82b706a0
	sub_82B706A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B7EE8"))) PPC_WEAK_FUNC(sub_831B7EE8);
PPC_FUNC_IMPL(__imp__sub_831B7EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,-31474
	ctx.r3.s64 = ctx.r11.s64 + -31474;
	// b 0x82b70720
	sub_82B70720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B7EF8"))) PPC_WEAK_FUNC(sub_831B7EF8);
PPC_FUNC_IMPL(__imp__sub_831B7EF8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32412
	ctx.r30.s64 = ctx.r31.s64 + -32412;
	// addi r4,r11,21756
	ctx.r4.s64 = ctx.r11.s64 + 21756;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B7F24;
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
	// lfs f0,3220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3220);
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
	// addi r3,r10,-29144
	ctx.r3.s64 = ctx.r10.s64 + -29144;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32412(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32412, ctx.r11.u32);
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
	ctx.lr = 0x831B7F6C;
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

__attribute__((alias("__imp__sub_831B7F88"))) PPC_WEAK_FUNC(sub_831B7F88);
PPC_FUNC_IMPL(__imp__sub_831B7F88) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31256
	ctx.r30.s64 = ctx.r31.s64 + -31256;
	// addi r4,r11,21792
	ctx.r4.s64 = ctx.r11.s64 + 21792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B7FB4;
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
	// lfs f0,3484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3484);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3208);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-29120
	ctx.r3.s64 = ctx.r10.s64 + -29120;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31256, ctx.r11.u32);
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
	ctx.lr = 0x831B7FFC;
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

__attribute__((alias("__imp__sub_831B8018"))) PPC_WEAK_FUNC(sub_831B8018);
PPC_FUNC_IMPL(__imp__sub_831B8018) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31084
	ctx.r30.s64 = ctx.r31.s64 + -31084;
	// addi r4,r11,21836
	ctx.r4.s64 = ctx.r11.s64 + 21836;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8044;
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
	// lfs f0,3484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3484);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3208);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-29096
	ctx.r3.s64 = ctx.r10.s64 + -29096;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31084(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31084, ctx.r11.u32);
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
	ctx.lr = 0x831B808C;
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

__attribute__((alias("__imp__sub_831B80A8"))) PPC_WEAK_FUNC(sub_831B80A8);
PPC_FUNC_IMPL(__imp__sub_831B80A8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31956
	ctx.r30.s64 = ctx.r31.s64 + -31956;
	// addi r4,r11,21880
	ctx.r4.s64 = ctx.r11.s64 + 21880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B80D4;
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
	// addi r3,r10,-29072
	ctx.r3.s64 = ctx.r10.s64 + -29072;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31956(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31956, ctx.r11.u32);
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
	ctx.lr = 0x831B811C;
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

__attribute__((alias("__imp__sub_831B8138"))) PPC_WEAK_FUNC(sub_831B8138);
PPC_FUNC_IMPL(__imp__sub_831B8138) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32604
	ctx.r30.s64 = ctx.r31.s64 + -32604;
	// addi r4,r11,21924
	ctx.r4.s64 = ctx.r11.s64 + 21924;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8164;
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
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-29048
	ctx.r3.s64 = ctx.r10.s64 + -29048;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32604(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32604, ctx.r11.u32);
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
	ctx.lr = 0x831B81AC;
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

__attribute__((alias("__imp__sub_831B81C8"))) PPC_WEAK_FUNC(sub_831B81C8);
PPC_FUNC_IMPL(__imp__sub_831B81C8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31424
	ctx.r30.s64 = ctx.r31.s64 + -31424;
	// addi r4,r11,21968
	ctx.r4.s64 = ctx.r11.s64 + 21968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B81F4;
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
	// addi r3,r10,-29024
	ctx.r3.s64 = ctx.r10.s64 + -29024;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31424(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31424, ctx.r11.u32);
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
	ctx.lr = 0x831B823C;
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

__attribute__((alias("__imp__sub_831B8258"))) PPC_WEAK_FUNC(sub_831B8258);
PPC_FUNC_IMPL(__imp__sub_831B8258) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31132
	ctx.r30.s64 = ctx.r31.s64 + -31132;
	// addi r4,r11,22020
	ctx.r4.s64 = ctx.r11.s64 + 22020;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8284;
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
	// lfs f0,3220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3220);
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
	// addi r3,r10,-29000
	ctx.r3.s64 = ctx.r10.s64 + -29000;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31132(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31132, ctx.r11.u32);
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
	ctx.lr = 0x831B82CC;
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

__attribute__((alias("__imp__sub_831B82E8"))) PPC_WEAK_FUNC(sub_831B82E8);
PPC_FUNC_IMPL(__imp__sub_831B82E8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31156
	ctx.r30.s64 = ctx.r31.s64 + -31156;
	// addi r4,r11,22056
	ctx.r4.s64 = ctx.r11.s64 + 22056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8314;
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
	// lfs f0,3148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3148);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3208);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28976
	ctx.r3.s64 = ctx.r10.s64 + -28976;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31156, ctx.r11.u32);
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
	ctx.lr = 0x831B835C;
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

__attribute__((alias("__imp__sub_831B8378"))) PPC_WEAK_FUNC(sub_831B8378);
PPC_FUNC_IMPL(__imp__sub_831B8378) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31548
	ctx.r30.s64 = ctx.r31.s64 + -31548;
	// addi r4,r11,22100
	ctx.r4.s64 = ctx.r11.s64 + 22100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B83A4;
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
	// lfs f0,3148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3148);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3208);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28952
	ctx.r3.s64 = ctx.r10.s64 + -28952;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31548(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31548, ctx.r11.u32);
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
	ctx.lr = 0x831B83EC;
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

__attribute__((alias("__imp__sub_831B8408"))) PPC_WEAK_FUNC(sub_831B8408);
PPC_FUNC_IMPL(__imp__sub_831B8408) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31500
	ctx.r30.s64 = ctx.r31.s64 + -31500;
	// addi r4,r11,22144
	ctx.r4.s64 = ctx.r11.s64 + 22144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8434;
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
	// lfs f0,3432(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3432);
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
	// addi r3,r10,-28928
	ctx.r3.s64 = ctx.r10.s64 + -28928;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31500(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31500, ctx.r11.u32);
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
	ctx.lr = 0x831B847C;
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

__attribute__((alias("__imp__sub_831B8498"))) PPC_WEAK_FUNC(sub_831B8498);
PPC_FUNC_IMPL(__imp__sub_831B8498) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31400
	ctx.r30.s64 = ctx.r31.s64 + -31400;
	// addi r4,r11,22188
	ctx.r4.s64 = ctx.r11.s64 + 22188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B84C4;
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
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28904
	ctx.r3.s64 = ctx.r10.s64 + -28904;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31400, ctx.r11.u32);
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
	ctx.lr = 0x831B850C;
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

__attribute__((alias("__imp__sub_831B8528"))) PPC_WEAK_FUNC(sub_831B8528);
PPC_FUNC_IMPL(__imp__sub_831B8528) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31860
	ctx.r30.s64 = ctx.r31.s64 + -31860;
	// addi r4,r11,22232
	ctx.r4.s64 = ctx.r11.s64 + 22232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8554;
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
	// lfs f0,3608(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3608);
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
	// addi r3,r10,-28880
	ctx.r3.s64 = ctx.r10.s64 + -28880;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31860(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31860, ctx.r11.u32);
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
	ctx.lr = 0x831B859C;
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

__attribute__((alias("__imp__sub_831B85B8"))) PPC_WEAK_FUNC(sub_831B85B8);
PPC_FUNC_IMPL(__imp__sub_831B85B8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32244
	ctx.r30.s64 = ctx.r31.s64 + -32244;
	// addi r4,r11,22284
	ctx.r4.s64 = ctx.r11.s64 + 22284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B85E4;
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
	// lfs f0,3220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3220);
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
	// addi r3,r10,-28856
	ctx.r3.s64 = ctx.r10.s64 + -28856;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32244(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32244, ctx.r11.u32);
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
	ctx.lr = 0x831B862C;
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

__attribute__((alias("__imp__sub_831B8648"))) PPC_WEAK_FUNC(sub_831B8648);
PPC_FUNC_IMPL(__imp__sub_831B8648) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-30952
	ctx.r30.s64 = ctx.r31.s64 + -30952;
	// addi r4,r11,22320
	ctx.r4.s64 = ctx.r11.s64 + 22320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8674;
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
	// lfs f0,3288(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3288);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3208);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28832
	ctx.r3.s64 = ctx.r10.s64 + -28832;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-30952(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30952, ctx.r11.u32);
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
	ctx.lr = 0x831B86BC;
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

__attribute__((alias("__imp__sub_831B86D8"))) PPC_WEAK_FUNC(sub_831B86D8);
PPC_FUNC_IMPL(__imp__sub_831B86D8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32124
	ctx.r30.s64 = ctx.r31.s64 + -32124;
	// addi r4,r11,22364
	ctx.r4.s64 = ctx.r11.s64 + 22364;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8704;
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
	// lfs f0,3288(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3288);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3208);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28808
	ctx.r3.s64 = ctx.r10.s64 + -28808;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32124(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32124, ctx.r11.u32);
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
	ctx.lr = 0x831B874C;
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

__attribute__((alias("__imp__sub_831B8768"))) PPC_WEAK_FUNC(sub_831B8768);
PPC_FUNC_IMPL(__imp__sub_831B8768) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31208
	ctx.r30.s64 = ctx.r31.s64 + -31208;
	// addi r4,r11,22408
	ctx.r4.s64 = ctx.r11.s64 + 22408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8794;
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
	// addi r3,r10,-28784
	ctx.r3.s64 = ctx.r10.s64 + -28784;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31208(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31208, ctx.r11.u32);
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
	ctx.lr = 0x831B87DC;
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

__attribute__((alias("__imp__sub_831B87F8"))) PPC_WEAK_FUNC(sub_831B87F8);
PPC_FUNC_IMPL(__imp__sub_831B87F8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32532
	ctx.r30.s64 = ctx.r31.s64 + -32532;
	// addi r4,r11,22452
	ctx.r4.s64 = ctx.r11.s64 + 22452;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8824;
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
	// lfs f0,19696(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19696);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28760
	ctx.r3.s64 = ctx.r10.s64 + -28760;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32532(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32532, ctx.r11.u32);
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
	ctx.lr = 0x831B886C;
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

__attribute__((alias("__imp__sub_831B8888"))) PPC_WEAK_FUNC(sub_831B8888);
PPC_FUNC_IMPL(__imp__sub_831B8888) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31304
	ctx.r30.s64 = ctx.r31.s64 + -31304;
	// addi r4,r11,22496
	ctx.r4.s64 = ctx.r11.s64 + 22496;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B88B4;
	sub_82C07410(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-27328(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27328);
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
	// addi r3,r10,-28736
	ctx.r3.s64 = ctx.r10.s64 + -28736;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31304(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31304, ctx.r11.u32);
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
	ctx.lr = 0x831B88FC;
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

__attribute__((alias("__imp__sub_831B8918"))) PPC_WEAK_FUNC(sub_831B8918);
PPC_FUNC_IMPL(__imp__sub_831B8918) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32100
	ctx.r30.s64 = ctx.r31.s64 + -32100;
	// addi r4,r11,22548
	ctx.r4.s64 = ctx.r11.s64 + 22548;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8944;
	sub_82C07410(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-10820(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10820);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28712
	ctx.r3.s64 = ctx.r10.s64 + -28712;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32100, ctx.r11.u32);
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
	ctx.lr = 0x831B898C;
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

__attribute__((alias("__imp__sub_831B89A8"))) PPC_WEAK_FUNC(sub_831B89A8);
PPC_FUNC_IMPL(__imp__sub_831B89A8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31596
	ctx.r30.s64 = ctx.r31.s64 + -31596;
	// addi r4,r11,22596
	ctx.r4.s64 = ctx.r11.s64 + 22596;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B89D4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,32544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32544);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r8,-28688
	ctx.r3.s64 = ctx.r8.s64 + -28688;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,-31596(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31596, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f13,16(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831B8A0C;
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

__attribute__((alias("__imp__sub_831B8A28"))) PPC_WEAK_FUNC(sub_831B8A28);
PPC_FUNC_IMPL(__imp__sub_831B8A28) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32172
	ctx.r30.s64 = ctx.r31.s64 + -32172;
	// addi r4,r11,22656
	ctx.r4.s64 = ctx.r11.s64 + 22656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8A54;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3200(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3200);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3384(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3384);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28664
	ctx.r3.s64 = ctx.r10.s64 + -28664;
	// lfs f11,-28752(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28752);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32172(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32172, ctx.r11.u32);
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
	ctx.lr = 0x831B8A9C;
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

__attribute__((alias("__imp__sub_831B8AB8"))) PPC_WEAK_FUNC(sub_831B8AB8);
PPC_FUNC_IMPL(__imp__sub_831B8AB8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31524
	ctx.r30.s64 = ctx.r31.s64 + -31524;
	// addi r4,r11,22712
	ctx.r4.s64 = ctx.r11.s64 + 22712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8AE4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r8,-28640
	ctx.r3.s64 = ctx.r8.s64 + -28640;
	// lfs f13,3208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3208);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,-31524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31524, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f13,16(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831B8B1C;
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

__attribute__((alias("__imp__sub_831B8B38"))) PPC_WEAK_FUNC(sub_831B8B38);
PPC_FUNC_IMPL(__imp__sub_831B8B38) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31884
	ctx.r30.s64 = ctx.r31.s64 + -31884;
	// addi r4,r11,22776
	ctx.r4.s64 = ctx.r11.s64 + 22776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8B64;
	sub_82C07410(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
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
	// lfs f13,10008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-28616
	ctx.r3.s64 = ctx.r7.s64 + -28616;
	// lfs f12,26564(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26564);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-31884(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31884, ctx.r11.u32);
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
	ctx.lr = 0x831B8BA4;
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

__attribute__((alias("__imp__sub_831B8BC0"))) PPC_WEAK_FUNC(sub_831B8BC0);
PPC_FUNC_IMPL(__imp__sub_831B8BC0) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32268
	ctx.r30.s64 = ctx.r31.s64 + -32268;
	// addi r4,r11,22828
	ctx.r4.s64 = ctx.r11.s64 + 22828;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8BEC;
	sub_82C07410(ctx, base);
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
	// lfs f13,3320(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3320);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-28592
	ctx.r3.s64 = ctx.r7.s64 + -28592;
	// lfs f12,26564(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26564);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-32268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32268, ctx.r11.u32);
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
	ctx.lr = 0x831B8C2C;
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

__attribute__((alias("__imp__sub_831B8C48"))) PPC_WEAK_FUNC(sub_831B8C48);
PPC_FUNC_IMPL(__imp__sub_831B8C48) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32748
	ctx.r30.s64 = ctx.r31.s64 + -32748;
	// addi r4,r11,22880
	ctx.r4.s64 = ctx.r11.s64 + 22880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8C74;
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
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28568
	ctx.r3.s64 = ctx.r10.s64 + -28568;
	// lfs f11,26564(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26564);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32748, ctx.r11.u32);
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
	ctx.lr = 0x831B8CBC;
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

__attribute__((alias("__imp__sub_831B8CD8"))) PPC_WEAK_FUNC(sub_831B8CD8);
PPC_FUNC_IMPL(__imp__sub_831B8CD8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32580
	ctx.r30.s64 = ctx.r31.s64 + -32580;
	// addi r4,r11,22932
	ctx.r4.s64 = ctx.r11.s64 + 22932;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8D04;
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
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28544
	ctx.r3.s64 = ctx.r10.s64 + -28544;
	// lfs f11,3156(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3156);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32580, ctx.r11.u32);
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
	ctx.lr = 0x831B8D4C;
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

__attribute__((alias("__imp__sub_831B8D68"))) PPC_WEAK_FUNC(sub_831B8D68);
PPC_FUNC_IMPL(__imp__sub_831B8D68) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31740
	ctx.r30.s64 = ctx.r31.s64 + -31740;
	// addi r4,r11,22984
	ctx.r4.s64 = ctx.r11.s64 + 22984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8D94;
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
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28520
	ctx.r3.s64 = ctx.r10.s64 + -28520;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31740(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31740, ctx.r11.u32);
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
	ctx.lr = 0x831B8DDC;
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

__attribute__((alias("__imp__sub_831B8DF8"))) PPC_WEAK_FUNC(sub_831B8DF8);
PPC_FUNC_IMPL(__imp__sub_831B8DF8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31180
	ctx.r30.s64 = ctx.r31.s64 + -31180;
	// addi r4,r11,23020
	ctx.r4.s64 = ctx.r11.s64 + 23020;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8E24;
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
	// lfs f0,26564(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26564);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28496
	ctx.r3.s64 = ctx.r10.s64 + -28496;
	// lfs f11,3328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3328);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31180(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31180, ctx.r11.u32);
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
	ctx.lr = 0x831B8E6C;
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

__attribute__((alias("__imp__sub_831B8E88"))) PPC_WEAK_FUNC(sub_831B8E88);
PPC_FUNC_IMPL(__imp__sub_831B8E88) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32676
	ctx.r30.s64 = ctx.r31.s64 + -32676;
	// addi r4,r11,23072
	ctx.r4.s64 = ctx.r11.s64 + 23072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8EB4;
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
	// lfs f0,3320(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3320);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28472
	ctx.r3.s64 = ctx.r10.s64 + -28472;
	// lfs f11,26564(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26564);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32676(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32676, ctx.r11.u32);
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
	ctx.lr = 0x831B8EFC;
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

__attribute__((alias("__imp__sub_831B8F18"))) PPC_WEAK_FUNC(sub_831B8F18);
PPC_FUNC_IMPL(__imp__sub_831B8F18) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31668
	ctx.r30.s64 = ctx.r31.s64 + -31668;
	// addi r4,r11,23120
	ctx.r4.s64 = ctx.r11.s64 + 23120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8F44;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28448
	ctx.r3.s64 = ctx.r10.s64 + -28448;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31668(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31668, ctx.r11.u32);
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
	ctx.lr = 0x831B8F8C;
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

__attribute__((alias("__imp__sub_831B8FA8"))) PPC_WEAK_FUNC(sub_831B8FA8);
PPC_FUNC_IMPL(__imp__sub_831B8FA8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31932
	ctx.r30.s64 = ctx.r31.s64 + -31932;
	// addi r4,r11,23192
	ctx.r4.s64 = ctx.r11.s64 + 23192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B8FD4;
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
	// lfs f0,3208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28424
	ctx.r3.s64 = ctx.r10.s64 + -28424;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31932(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31932, ctx.r11.u32);
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
	ctx.lr = 0x831B901C;
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

__attribute__((alias("__imp__sub_831B9038"))) PPC_WEAK_FUNC(sub_831B9038);
PPC_FUNC_IMPL(__imp__sub_831B9038) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32364
	ctx.r30.s64 = ctx.r31.s64 + -32364;
	// addi r4,r11,23264
	ctx.r4.s64 = ctx.r11.s64 + 23264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B9064;
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
	// lfs f0,26564(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26564);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3492(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28400
	ctx.r3.s64 = ctx.r10.s64 + -28400;
	// lfs f11,3328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3328);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32364(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32364, ctx.r11.u32);
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
	ctx.lr = 0x831B90AC;
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

__attribute__((alias("__imp__sub_831B90C8"))) PPC_WEAK_FUNC(sub_831B90C8);
PPC_FUNC_IMPL(__imp__sub_831B90C8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32052
	ctx.r30.s64 = ctx.r31.s64 + -32052;
	// addi r4,r11,23336
	ctx.r4.s64 = ctx.r11.s64 + 23336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B90F4;
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
	// lfs f0,26564(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26564);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3492(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28376
	ctx.r3.s64 = ctx.r10.s64 + -28376;
	// lfs f11,3328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3328);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32052(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32052, ctx.r11.u32);
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
	ctx.lr = 0x831B913C;
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

__attribute__((alias("__imp__sub_831B9158"))) PPC_WEAK_FUNC(sub_831B9158);
PPC_FUNC_IMPL(__imp__sub_831B9158) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31472
	ctx.r30.s64 = ctx.r31.s64 + -31472;
	// addi r4,r11,23400
	ctx.r4.s64 = ctx.r11.s64 + 23400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B9184;
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
	// lfs f0,3208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3208);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28352
	ctx.r3.s64 = ctx.r10.s64 + -28352;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31472(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31472, ctx.r11.u32);
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
	ctx.lr = 0x831B91CC;
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

__attribute__((alias("__imp__sub_831B91E8"))) PPC_WEAK_FUNC(sub_831B91E8);
PPC_FUNC_IMPL(__imp__sub_831B91E8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31788
	ctx.r30.s64 = ctx.r31.s64 + -31788;
	// addi r4,r11,23464
	ctx.r4.s64 = ctx.r11.s64 + 23464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B9214;
	sub_82C07410(ctx, base);
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
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-28328
	ctx.r3.s64 = ctx.r7.s64 + -28328;
	// lfs f12,3492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3492);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-31788(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31788, ctx.r11.u32);
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
	ctx.lr = 0x831B9254;
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

__attribute__((alias("__imp__sub_831B9270"))) PPC_WEAK_FUNC(sub_831B9270);
PPC_FUNC_IMPL(__imp__sub_831B9270) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31328
	ctx.r30.s64 = ctx.r31.s64 + -31328;
	// addi r4,r11,23536
	ctx.r4.s64 = ctx.r11.s64 + 23536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B929C;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-11832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11832);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28304
	ctx.r3.s64 = ctx.r10.s64 + -28304;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31328(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31328, ctx.r11.u32);
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
	ctx.lr = 0x831B92E4;
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

__attribute__((alias("__imp__sub_831B9300"))) PPC_WEAK_FUNC(sub_831B9300);
PPC_FUNC_IMPL(__imp__sub_831B9300) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32148
	ctx.r30.s64 = ctx.r31.s64 + -32148;
	// addi r4,r11,23600
	ctx.r4.s64 = ctx.r11.s64 + 23600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B932C;
	sub_82C07410(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12028(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12028);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3492(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28280
	ctx.r3.s64 = ctx.r10.s64 + -28280;
	// lfs f11,3328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3328);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32148(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32148, ctx.r11.u32);
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
	ctx.lr = 0x831B9374;
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

__attribute__((alias("__imp__sub_831B9390"))) PPC_WEAK_FUNC(sub_831B9390);
PPC_FUNC_IMPL(__imp__sub_831B9390) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32700
	ctx.r30.s64 = ctx.r31.s64 + -32700;
	// addi r4,r11,23668
	ctx.r4.s64 = ctx.r11.s64 + 23668;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B93BC;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3368);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28256
	ctx.r3.s64 = ctx.r10.s64 + -28256;
	// lfs f11,3340(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3340);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32700(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32700, ctx.r11.u32);
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
	ctx.lr = 0x831B9404;
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

__attribute__((alias("__imp__sub_831B9420"))) PPC_WEAK_FUNC(sub_831B9420);
PPC_FUNC_IMPL(__imp__sub_831B9420) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32652
	ctx.r30.s64 = ctx.r31.s64 + -32652;
	// addi r4,r11,23728
	ctx.r4.s64 = ctx.r11.s64 + 23728;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B944C;
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
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28232
	ctx.r3.s64 = ctx.r10.s64 + -28232;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32652(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32652, ctx.r11.u32);
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
	ctx.lr = 0x831B9494;
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

__attribute__((alias("__imp__sub_831B94B0"))) PPC_WEAK_FUNC(sub_831B94B0);
PPC_FUNC_IMPL(__imp__sub_831B94B0) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32460
	ctx.r30.s64 = ctx.r31.s64 + -32460;
	// addi r4,r11,23776
	ctx.r4.s64 = ctx.r11.s64 + 23776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B94DC;
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
	// lfs f0,3220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3220);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28208
	ctx.r3.s64 = ctx.r10.s64 + -28208;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32460(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32460, ctx.r11.u32);
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
	ctx.lr = 0x831B9524;
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

__attribute__((alias("__imp__sub_831B9540"))) PPC_WEAK_FUNC(sub_831B9540);
PPC_FUNC_IMPL(__imp__sub_831B9540) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32556
	ctx.r30.s64 = ctx.r31.s64 + -32556;
	// addi r4,r11,23824
	ctx.r4.s64 = ctx.r11.s64 + 23824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B956C;
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
	// lfs f0,3200(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3200);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3368);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28184
	ctx.r3.s64 = ctx.r10.s64 + -28184;
	// lfs f11,3340(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3340);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32556(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32556, ctx.r11.u32);
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
	ctx.lr = 0x831B95B4;
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

__attribute__((alias("__imp__sub_831B95D0"))) PPC_WEAK_FUNC(sub_831B95D0);
PPC_FUNC_IMPL(__imp__sub_831B95D0) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31108
	ctx.r30.s64 = ctx.r31.s64 + -31108;
	// addi r4,r11,23880
	ctx.r4.s64 = ctx.r11.s64 + 23880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B95FC;
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
	// lfs f0,-3692(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3692);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3492(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28160
	ctx.r3.s64 = ctx.r10.s64 + -28160;
	// lfs f11,3328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3328);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31108(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31108, ctx.r11.u32);
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
	ctx.lr = 0x831B9644;
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

__attribute__((alias("__imp__sub_831B9660"))) PPC_WEAK_FUNC(sub_831B9660);
PPC_FUNC_IMPL(__imp__sub_831B9660) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31060
	ctx.r30.s64 = ctx.r31.s64 + -31060;
	// addi r4,r11,23940
	ctx.r4.s64 = ctx.r11.s64 + 23940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B968C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3320(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3320);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28136
	ctx.r3.s64 = ctx.r10.s64 + -28136;
	// lfs f11,20628(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20628);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31060(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31060, ctx.r11.u32);
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
	ctx.lr = 0x831B96D4;
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

__attribute__((alias("__imp__sub_831B96F0"))) PPC_WEAK_FUNC(sub_831B96F0);
PPC_FUNC_IMPL(__imp__sub_831B96F0) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-30976
	ctx.r30.s64 = ctx.r31.s64 + -30976;
	// addi r4,r11,24000
	ctx.r4.s64 = ctx.r11.s64 + 24000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B971C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3156(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3156);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28112
	ctx.r3.s64 = ctx.r10.s64 + -28112;
	// lfs f11,20628(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20628);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-30976(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30976, ctx.r11.u32);
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
	ctx.lr = 0x831B9764;
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

__attribute__((alias("__imp__sub_831B9780"))) PPC_WEAK_FUNC(sub_831B9780);
PPC_FUNC_IMPL(__imp__sub_831B9780) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31812
	ctx.r30.s64 = ctx.r31.s64 + -31812;
	// addi r4,r11,24060
	ctx.r4.s64 = ctx.r11.s64 + 24060;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B97AC;
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
	// lfs f0,3220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3220);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28088
	ctx.r3.s64 = ctx.r10.s64 + -28088;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31812(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31812, ctx.r11.u32);
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
	ctx.lr = 0x831B97F4;
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

__attribute__((alias("__imp__sub_831B9810"))) PPC_WEAK_FUNC(sub_831B9810);
PPC_FUNC_IMPL(__imp__sub_831B9810) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32028
	ctx.r30.s64 = ctx.r31.s64 + -32028;
	// addi r4,r11,24124
	ctx.r4.s64 = ctx.r11.s64 + 24124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B983C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3156(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3156);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28064
	ctx.r3.s64 = ctx.r10.s64 + -28064;
	// lfs f11,20628(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20628);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32028(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32028, ctx.r11.u32);
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
	ctx.lr = 0x831B9884;
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

__attribute__((alias("__imp__sub_831B98A0"))) PPC_WEAK_FUNC(sub_831B98A0);
PPC_FUNC_IMPL(__imp__sub_831B98A0) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31012
	ctx.r30.s64 = ctx.r31.s64 + -31012;
	// addi r4,r11,24164
	ctx.r4.s64 = ctx.r11.s64 + 24164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B98CC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3156(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3156);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-28040
	ctx.r3.s64 = ctx.r10.s64 + -28040;
	// lfs f11,20628(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20628);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31012(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31012, ctx.r11.u32);
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
	ctx.lr = 0x831B9914;
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

__attribute__((alias("__imp__sub_831B9930"))) PPC_WEAK_FUNC(sub_831B9930);
PPC_FUNC_IMPL(__imp__sub_831B9930) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32508
	ctx.r30.s64 = ctx.r31.s64 + -32508;
	// addi r4,r11,24224
	ctx.r4.s64 = ctx.r11.s64 + 24224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B995C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3648);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-28016
	ctx.r3.s64 = ctx.r7.s64 + -28016;
	// lfs f12,20628(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20628);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-32508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32508, ctx.r11.u32);
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
	ctx.lr = 0x831B999C;
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

__attribute__((alias("__imp__sub_831B99B8"))) PPC_WEAK_FUNC(sub_831B99B8);
PPC_FUNC_IMPL(__imp__sub_831B99B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,-31475
	ctx.r3.s64 = ctx.r11.s64 + -31475;
	// b 0x82b70948
	sub_82B70948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B99C8"))) PPC_WEAK_FUNC(sub_831B99C8);
PPC_FUNC_IMPL(__imp__sub_831B99C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,-31476
	ctx.r3.s64 = ctx.r11.s64 + -31476;
	// b 0x82b709c8
	sub_82B709C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831B99D8"))) PPC_WEAK_FUNC(sub_831B99D8);
PPC_FUNC_IMPL(__imp__sub_831B99D8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31280
	ctx.r30.s64 = ctx.r31.s64 + -31280;
	// addi r4,r11,24284
	ctx.r4.s64 = ctx.r11.s64 + 24284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B9A04;
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
	// lfs f0,3288(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3288);
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
	// addi r3,r10,-27992
	ctx.r3.s64 = ctx.r10.s64 + -27992;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31280(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31280, ctx.r11.u32);
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
	ctx.lr = 0x831B9A4C;
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

__attribute__((alias("__imp__sub_831B9A68"))) PPC_WEAK_FUNC(sub_831B9A68);
PPC_FUNC_IMPL(__imp__sub_831B9A68) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32196
	ctx.r30.s64 = ctx.r31.s64 + -32196;
	// addi r4,r11,24320
	ctx.r4.s64 = ctx.r11.s64 + 24320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B9A94;
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
	// lfs f0,3288(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3288);
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
	// addi r3,r10,-27968
	ctx.r3.s64 = ctx.r10.s64 + -27968;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32196, ctx.r11.u32);
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
	ctx.lr = 0x831B9ADC;
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

__attribute__((alias("__imp__sub_831B9AF8"))) PPC_WEAK_FUNC(sub_831B9AF8);
PPC_FUNC_IMPL(__imp__sub_831B9AF8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32004
	ctx.r30.s64 = ctx.r31.s64 + -32004;
	// addi r4,r11,24356
	ctx.r4.s64 = ctx.r11.s64 + 24356;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B9B24;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3320(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3320);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27944
	ctx.r3.s64 = ctx.r10.s64 + -27944;
	// lfs f11,20628(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20628);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32004(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32004, ctx.r11.u32);
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
	ctx.lr = 0x831B9B6C;
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

__attribute__((alias("__imp__sub_831B9B88"))) PPC_WEAK_FUNC(sub_831B9B88);
PPC_FUNC_IMPL(__imp__sub_831B9B88) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32340
	ctx.r30.s64 = ctx.r31.s64 + -32340;
	// addi r4,r11,24392
	ctx.r4.s64 = ctx.r11.s64 + 24392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B9BB4;
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
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27920
	ctx.r3.s64 = ctx.r10.s64 + -27920;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32340(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32340, ctx.r11.u32);
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
	ctx.lr = 0x831B9BFC;
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

__attribute__((alias("__imp__sub_831B9C18"))) PPC_WEAK_FUNC(sub_831B9C18);
PPC_FUNC_IMPL(__imp__sub_831B9C18) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32436
	ctx.r30.s64 = ctx.r31.s64 + -32436;
	// addi r4,r11,24440
	ctx.r4.s64 = ctx.r11.s64 + 24440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B9C44;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27896
	ctx.r3.s64 = ctx.r10.s64 + -27896;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32436(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32436, ctx.r11.u32);
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
	ctx.lr = 0x831B9C8C;
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

__attribute__((alias("__imp__sub_831B9CA8"))) PPC_WEAK_FUNC(sub_831B9CA8);
PPC_FUNC_IMPL(__imp__sub_831B9CA8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32076
	ctx.r30.s64 = ctx.r31.s64 + -32076;
	// addi r4,r11,24488
	ctx.r4.s64 = ctx.r11.s64 + 24488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B9CD4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
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
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,21552(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21552);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27872
	ctx.r3.s64 = ctx.r10.s64 + -27872;
	// lfs f11,3156(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3156);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32076(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32076, ctx.r11.u32);
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
	ctx.lr = 0x831B9D1C;
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

__attribute__((alias("__imp__sub_831B9D38"))) PPC_WEAK_FUNC(sub_831B9D38);
PPC_FUNC_IMPL(__imp__sub_831B9D38) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31692
	ctx.r30.s64 = ctx.r31.s64 + -31692;
	// addi r4,r11,24536
	ctx.r4.s64 = ctx.r11.s64 + 24536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B9D64;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27848
	ctx.r3.s64 = ctx.r10.s64 + -27848;
	// lfs f11,3156(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3156);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31692(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31692, ctx.r11.u32);
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
	ctx.lr = 0x831B9DAC;
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

__attribute__((alias("__imp__sub_831B9DC8"))) PPC_WEAK_FUNC(sub_831B9DC8);
PPC_FUNC_IMPL(__imp__sub_831B9DC8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31572
	ctx.r30.s64 = ctx.r31.s64 + -31572;
	// addi r4,r11,24584
	ctx.r4.s64 = ctx.r11.s64 + 24584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B9DF4;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27824
	ctx.r3.s64 = ctx.r10.s64 + -27824;
	// lfs f11,3488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3488);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31572(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31572, ctx.r11.u32);
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
	ctx.lr = 0x831B9E3C;
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

__attribute__((alias("__imp__sub_831B9E58"))) PPC_WEAK_FUNC(sub_831B9E58);
PPC_FUNC_IMPL(__imp__sub_831B9E58) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32764
	ctx.r30.s64 = ctx.r31.s64 + 32764;
	// addi r4,r11,24632
	ctx.r4.s64 = ctx.r11.s64 + 24632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B9E84;
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
	// addi r3,r10,-27800
	ctx.r3.s64 = ctx.r10.s64 + -27800;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,32764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32764, ctx.r11.u32);
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
	ctx.lr = 0x831B9ECC;
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

__attribute__((alias("__imp__sub_831B9EE8"))) PPC_WEAK_FUNC(sub_831B9EE8);
PPC_FUNC_IMPL(__imp__sub_831B9EE8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31908
	ctx.r30.s64 = ctx.r31.s64 + -31908;
	// addi r4,r11,24672
	ctx.r4.s64 = ctx.r11.s64 + 24672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B9F14;
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
	// addi r3,r10,-27776
	ctx.r3.s64 = ctx.r10.s64 + -27776;
	// lfs f11,3492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3492);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31908(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31908, ctx.r11.u32);
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
	ctx.lr = 0x831B9F5C;
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

__attribute__((alias("__imp__sub_831B9F78"))) PPC_WEAK_FUNC(sub_831B9F78);
PPC_FUNC_IMPL(__imp__sub_831B9F78) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31232
	ctx.r30.s64 = ctx.r31.s64 + -31232;
	// addi r4,r11,24712
	ctx.r4.s64 = ctx.r11.s64 + 24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831B9FA4;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-24456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24456);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3492(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27752
	ctx.r3.s64 = ctx.r10.s64 + -27752;
	// lfs f11,-32584(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32584);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31232(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31232, ctx.r11.u32);
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
	ctx.lr = 0x831B9FEC;
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

__attribute__((alias("__imp__sub_831BA008"))) PPC_WEAK_FUNC(sub_831BA008);
PPC_FUNC_IMPL(__imp__sub_831BA008) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32484
	ctx.r30.s64 = ctx.r31.s64 + -32484;
	// addi r4,r11,24752
	ctx.r4.s64 = ctx.r11.s64 + 24752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA034;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-24456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24456);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3492(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27728
	ctx.r3.s64 = ctx.r10.s64 + -27728;
	// lfs f11,-32584(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32584);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32484(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32484, ctx.r11.u32);
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
	ctx.lr = 0x831BA07C;
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

__attribute__((alias("__imp__sub_831BA098"))) PPC_WEAK_FUNC(sub_831BA098);
PPC_FUNC_IMPL(__imp__sub_831BA098) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31764
	ctx.r30.s64 = ctx.r31.s64 + -31764;
	// addi r4,r11,24796
	ctx.r4.s64 = ctx.r11.s64 + 24796;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA0C4;
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
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27704
	ctx.r3.s64 = ctx.r10.s64 + -27704;
	// lfs f11,3156(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3156);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31764(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31764, ctx.r11.u32);
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
	ctx.lr = 0x831BA10C;
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

__attribute__((alias("__imp__sub_831BA128"))) PPC_WEAK_FUNC(sub_831BA128);
PPC_FUNC_IMPL(__imp__sub_831BA128) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31980
	ctx.r30.s64 = ctx.r31.s64 + -31980;
	// addi r4,r11,24844
	ctx.r4.s64 = ctx.r11.s64 + 24844;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA154;
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
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27680
	ctx.r3.s64 = ctx.r10.s64 + -27680;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31980(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31980, ctx.r11.u32);
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
	ctx.lr = 0x831BA19C;
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

__attribute__((alias("__imp__sub_831BA1B8"))) PPC_WEAK_FUNC(sub_831BA1B8);
PPC_FUNC_IMPL(__imp__sub_831BA1B8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31620
	ctx.r30.s64 = ctx.r31.s64 + -31620;
	// addi r4,r11,24888
	ctx.r4.s64 = ctx.r11.s64 + 24888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA1E4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,32544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32544);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27656
	ctx.r3.s64 = ctx.r10.s64 + -27656;
	// lfs f11,20628(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20628);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31620(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31620, ctx.r11.u32);
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
	ctx.lr = 0x831BA22C;
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

__attribute__((alias("__imp__sub_831BA248"))) PPC_WEAK_FUNC(sub_831BA248);
PPC_FUNC_IMPL(__imp__sub_831BA248) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31836
	ctx.r30.s64 = ctx.r31.s64 + -31836;
	// addi r4,r11,24940
	ctx.r4.s64 = ctx.r11.s64 + 24940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA274;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27632
	ctx.r3.s64 = ctx.r10.s64 + -27632;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31836, ctx.r11.u32);
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
	ctx.lr = 0x831BA2BC;
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

__attribute__((alias("__imp__sub_831BA2D8"))) PPC_WEAK_FUNC(sub_831BA2D8);
PPC_FUNC_IMPL(__imp__sub_831BA2D8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32316
	ctx.r30.s64 = ctx.r31.s64 + -32316;
	// addi r4,r11,24988
	ctx.r4.s64 = ctx.r11.s64 + 24988;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA304;
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
	// lfs f0,25340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25340);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27608
	ctx.r3.s64 = ctx.r10.s64 + -27608;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32316, ctx.r11.u32);
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
	ctx.lr = 0x831BA34C;
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

__attribute__((alias("__imp__sub_831BA368"))) PPC_WEAK_FUNC(sub_831BA368);
PPC_FUNC_IMPL(__imp__sub_831BA368) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31036
	ctx.r30.s64 = ctx.r31.s64 + -31036;
	// addi r4,r11,25032
	ctx.r4.s64 = ctx.r11.s64 + 25032;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA394;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,21540(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21540);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27584
	ctx.r3.s64 = ctx.r10.s64 + -27584;
	// lfs f11,3320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3320);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31036(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31036, ctx.r11.u32);
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
	ctx.lr = 0x831BA3DC;
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

__attribute__((alias("__imp__sub_831BA3F8"))) PPC_WEAK_FUNC(sub_831BA3F8);
PPC_FUNC_IMPL(__imp__sub_831BA3F8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32724
	ctx.r30.s64 = ctx.r31.s64 + -32724;
	// addi r4,r11,25076
	ctx.r4.s64 = ctx.r11.s64 + 25076;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA424;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27560
	ctx.r3.s64 = ctx.r10.s64 + -27560;
	// lfs f11,20628(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20628);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32724, ctx.r11.u32);
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
	ctx.lr = 0x831BA46C;
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

__attribute__((alias("__imp__sub_831BA488"))) PPC_WEAK_FUNC(sub_831BA488);
PPC_FUNC_IMPL(__imp__sub_831BA488) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31376
	ctx.r30.s64 = ctx.r31.s64 + -31376;
	// addi r4,r11,25124
	ctx.r4.s64 = ctx.r11.s64 + 25124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA4B4;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3208);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27536
	ctx.r3.s64 = ctx.r10.s64 + -27536;
	// lfs f11,3296(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3296);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31376(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31376, ctx.r11.u32);
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
	ctx.lr = 0x831BA4FC;
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

__attribute__((alias("__imp__sub_831BA518"))) PPC_WEAK_FUNC(sub_831BA518);
PPC_FUNC_IMPL(__imp__sub_831BA518) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31448
	ctx.r30.s64 = ctx.r31.s64 + -31448;
	// addi r4,r11,25176
	ctx.r4.s64 = ctx.r11.s64 + 25176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA544;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3208);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27512
	ctx.r3.s64 = ctx.r10.s64 + -27512;
	// lfs f11,3296(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3296);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31448(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31448, ctx.r11.u32);
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
	ctx.lr = 0x831BA58C;
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

__attribute__((alias("__imp__sub_831BA5A8"))) PPC_WEAK_FUNC(sub_831BA5A8);
PPC_FUNC_IMPL(__imp__sub_831BA5A8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31644
	ctx.r30.s64 = ctx.r31.s64 + -31644;
	// addi r4,r11,25228
	ctx.r4.s64 = ctx.r11.s64 + 25228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA5D4;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3208);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27488
	ctx.r3.s64 = ctx.r10.s64 + -27488;
	// lfs f11,3296(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3296);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31644(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31644, ctx.r11.u32);
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
	ctx.lr = 0x831BA61C;
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

__attribute__((alias("__imp__sub_831BA638"))) PPC_WEAK_FUNC(sub_831BA638);
PPC_FUNC_IMPL(__imp__sub_831BA638) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32220
	ctx.r30.s64 = ctx.r31.s64 + -32220;
	// addi r4,r11,25280
	ctx.r4.s64 = ctx.r11.s64 + 25280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA664;
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
	// lfs f0,3148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3148);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3208);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27464
	ctx.r3.s64 = ctx.r10.s64 + -27464;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32220, ctx.r11.u32);
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
	ctx.lr = 0x831BA6AC;
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

__attribute__((alias("__imp__sub_831BA6C8"))) PPC_WEAK_FUNC(sub_831BA6C8);
PPC_FUNC_IMPL(__imp__sub_831BA6C8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31716
	ctx.r30.s64 = ctx.r31.s64 + -31716;
	// addi r4,r11,25328
	ctx.r4.s64 = ctx.r11.s64 + 25328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA6F4;
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
	// lfs f0,3148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3148);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3208);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27440
	ctx.r3.s64 = ctx.r10.s64 + -27440;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31716, ctx.r11.u32);
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
	ctx.lr = 0x831BA73C;
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

__attribute__((alias("__imp__sub_831BA758"))) PPC_WEAK_FUNC(sub_831BA758);
PPC_FUNC_IMPL(__imp__sub_831BA758) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-31352
	ctx.r30.s64 = ctx.r31.s64 + -31352;
	// addi r4,r11,25376
	ctx.r4.s64 = ctx.r11.s64 + 25376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA784;
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
	// lfs f0,3148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3148);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3208);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27416
	ctx.r3.s64 = ctx.r10.s64 + -27416;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31352, ctx.r11.u32);
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
	ctx.lr = 0x831BA7CC;
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

__attribute__((alias("__imp__sub_831BA7E8"))) PPC_WEAK_FUNC(sub_831BA7E8);
PPC_FUNC_IMPL(__imp__sub_831BA7E8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32628
	ctx.r30.s64 = ctx.r31.s64 + -32628;
	// addi r4,r11,25428
	ctx.r4.s64 = ctx.r11.s64 + 25428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA814;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3368);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27392
	ctx.r3.s64 = ctx.r10.s64 + -27392;
	// lfs f11,3296(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3296);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32628(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32628, ctx.r11.u32);
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
	ctx.lr = 0x831BA85C;
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

__attribute__((alias("__imp__sub_831BA878"))) PPC_WEAK_FUNC(sub_831BA878);
PPC_FUNC_IMPL(__imp__sub_831BA878) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32388
	ctx.r30.s64 = ctx.r31.s64 + -32388;
	// addi r4,r11,25476
	ctx.r4.s64 = ctx.r11.s64 + 25476;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA8A4;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3368);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27368
	ctx.r3.s64 = ctx.r10.s64 + -27368;
	// lfs f11,3296(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3296);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32388, ctx.r11.u32);
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
	ctx.lr = 0x831BA8EC;
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

__attribute__((alias("__imp__sub_831BA908"))) PPC_WEAK_FUNC(sub_831BA908);
PPC_FUNC_IMPL(__imp__sub_831BA908) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-32292
	ctx.r30.s64 = ctx.r31.s64 + -32292;
	// addi r4,r11,25524
	ctx.r4.s64 = ctx.r11.s64 + 25524;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA934;
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3368);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27344
	ctx.r3.s64 = ctx.r10.s64 + -27344;
	// lfs f11,3296(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3296);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-32292(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32292, ctx.r11.u32);
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
	ctx.lr = 0x831BA97C;
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

__attribute__((alias("__imp__sub_831BA998"))) PPC_WEAK_FUNC(sub_831BA998);
PPC_FUNC_IMPL(__imp__sub_831BA998) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,32752
	ctx.r30.s64 = ctx.r31.s64 + 32752;
	// addi r4,r11,25576
	ctx.r4.s64 = ctx.r11.s64 + 25576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BA9C4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-29208
	ctx.r3.s64 = ctx.r9.s64 + -29208;
	// lfs f0,3320(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3320);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,32752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32752, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831BA9E8;
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

__attribute__((alias("__imp__sub_831BAA00"))) PPC_WEAK_FUNC(sub_831BAA00);
PPC_FUNC_IMPL(__imp__sub_831BAA00) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-30988
	ctx.r30.s64 = ctx.r31.s64 + -30988;
	// addi r4,r11,25624
	ctx.r4.s64 = ctx.r11.s64 + 25624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BAA2C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-29184
	ctx.r3.s64 = ctx.r9.s64 + -29184;
	// lfs f0,3156(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3156);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,-30988(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30988, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831BAA50;
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

__attribute__((alias("__imp__sub_831BAA68"))) PPC_WEAK_FUNC(sub_831BAA68);
PPC_FUNC_IMPL(__imp__sub_831BAA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-30528
	ctx.r9.s64 = ctx.r11.s64 + -30528;
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

__attribute__((alias("__imp__sub_831BAA98"))) PPC_WEAK_FUNC(sub_831BAA98);
PPC_FUNC_IMPL(__imp__sub_831BAA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-30576
	ctx.r9.s64 = ctx.r11.s64 + -30576;
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

__attribute__((alias("__imp__sub_831BAAC8"))) PPC_WEAK_FUNC(sub_831BAAC8);
PPC_FUNC_IMPL(__imp__sub_831BAAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-30624
	ctx.r9.s64 = ctx.r11.s64 + -30624;
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

__attribute__((alias("__imp__sub_831BAAF8"))) PPC_WEAK_FUNC(sub_831BAAF8);
PPC_FUNC_IMPL(__imp__sub_831BAAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-30592
	ctx.r9.s64 = ctx.r11.s64 + -30592;
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

__attribute__((alias("__imp__sub_831BAB28"))) PPC_WEAK_FUNC(sub_831BAB28);
PPC_FUNC_IMPL(__imp__sub_831BAB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-30608
	ctx.r10.s64 = ctx.r10.s64 + -30608;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BAB48"))) PPC_WEAK_FUNC(sub_831BAB48);
PPC_FUNC_IMPL(__imp__sub_831BAB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-30640
	ctx.r10.s64 = ctx.r10.s64 + -30640;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BAB68"))) PPC_WEAK_FUNC(sub_831BAB68);
PPC_FUNC_IMPL(__imp__sub_831BAB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-27288
	ctx.r3.s64 = ctx.r11.s64 + -27288;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BAB78"))) PPC_WEAK_FUNC(sub_831BAB78);
PPC_FUNC_IMPL(__imp__sub_831BAB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-27320
	ctx.r3.s64 = ctx.r11.s64 + -27320;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BAB88"))) PPC_WEAK_FUNC(sub_831BAB88);
PPC_FUNC_IMPL(__imp__sub_831BAB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-27312
	ctx.r3.s64 = ctx.r11.s64 + -27312;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BAB98"))) PPC_WEAK_FUNC(sub_831BAB98);
PPC_FUNC_IMPL(__imp__sub_831BAB98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-30556
	ctx.r8.s64 = ctx.r9.s64 + -30556;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// stw r11,-30920(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30920, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// stb r9,-30916(r7)
	PPC_STORE_U8(ctx.r7.u32 + -30916, ctx.r9.u8);
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,-30926(r6)
	PPC_STORE_U8(ctx.r6.u32 + -30926, ctx.r11.u8);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// stb r10,-30925(r8)
	PPC_STORE_U8(ctx.r8.u32 + -30925, ctx.r10.u8);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,-30924(r7)
	PPC_STORE_U32(ctx.r7.u32 + -30924, ctx.r9.u32);
	// addi r3,r10,-27304
	ctx.r3.s64 = ctx.r10.s64 + -27304;
	// stb r11,-30927(r6)
	PPC_STORE_U8(ctx.r6.u32 + -30927, ctx.r11.u8);
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BABF0"))) PPC_WEAK_FUNC(sub_831BABF0);
PPC_FUNC_IMPL(__imp__sub_831BABF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-27296
	ctx.r3.s64 = ctx.r11.s64 + -27296;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BAC00"))) PPC_WEAK_FUNC(sub_831BAC00);
PPC_FUNC_IMPL(__imp__sub_831BAC00) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfd f1,28408(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 28408);
	// bl 0x823e8398
	ctx.lr = 0x831BAC18;
	sub_823E8398(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lfs f0,3368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,-30544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30544, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BAC50"))) PPC_WEAK_FUNC(sub_831BAC50);
PPC_FUNC_IMPL(__imp__sub_831BAC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lfs f0,-4512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4512);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,-30560(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30560, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BAC80"))) PPC_WEAK_FUNC(sub_831BAC80);
PPC_FUNC_IMPL(__imp__sub_831BAC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-30416
	ctx.r9.s64 = ctx.r11.s64 + -30416;
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

__attribute__((alias("__imp__sub_831BACB0"))) PPC_WEAK_FUNC(sub_831BACB0);
PPC_FUNC_IMPL(__imp__sub_831BACB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-30432
	ctx.r9.s64 = ctx.r11.s64 + -30432;
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

__attribute__((alias("__imp__sub_831BACE0"))) PPC_WEAK_FUNC(sub_831BACE0);
PPC_FUNC_IMPL(__imp__sub_831BACE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-30480
	ctx.r9.s64 = ctx.r11.s64 + -30480;
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

__attribute__((alias("__imp__sub_831BAD10"))) PPC_WEAK_FUNC(sub_831BAD10);
PPC_FUNC_IMPL(__imp__sub_831BAD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-30448
	ctx.r9.s64 = ctx.r11.s64 + -30448;
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

__attribute__((alias("__imp__sub_831BAD40"))) PPC_WEAK_FUNC(sub_831BAD40);
PPC_FUNC_IMPL(__imp__sub_831BAD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-30464
	ctx.r10.s64 = ctx.r10.s64 + -30464;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BAD60"))) PPC_WEAK_FUNC(sub_831BAD60);
PPC_FUNC_IMPL(__imp__sub_831BAD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-30496
	ctx.r10.s64 = ctx.r10.s64 + -30496;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BAD80"))) PPC_WEAK_FUNC(sub_831BAD80);
PPC_FUNC_IMPL(__imp__sub_831BAD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-27264
	ctx.r3.s64 = ctx.r11.s64 + -27264;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BAD90"))) PPC_WEAK_FUNC(sub_831BAD90);
PPC_FUNC_IMPL(__imp__sub_831BAD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-27272
	ctx.r3.s64 = ctx.r11.s64 + -27272;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BADA0"))) PPC_WEAK_FUNC(sub_831BADA0);
PPC_FUNC_IMPL(__imp__sub_831BADA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-30192
	ctx.r9.s64 = ctx.r11.s64 + -30192;
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

__attribute__((alias("__imp__sub_831BADD0"))) PPC_WEAK_FUNC(sub_831BADD0);
PPC_FUNC_IMPL(__imp__sub_831BADD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-30208
	ctx.r9.s64 = ctx.r11.s64 + -30208;
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

__attribute__((alias("__imp__sub_831BAE00"))) PPC_WEAK_FUNC(sub_831BAE00);
PPC_FUNC_IMPL(__imp__sub_831BAE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-30352
	ctx.r9.s64 = ctx.r11.s64 + -30352;
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

__attribute__((alias("__imp__sub_831BAE30"))) PPC_WEAK_FUNC(sub_831BAE30);
PPC_FUNC_IMPL(__imp__sub_831BAE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-30224
	ctx.r9.s64 = ctx.r11.s64 + -30224;
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

__attribute__((alias("__imp__sub_831BAE60"))) PPC_WEAK_FUNC(sub_831BAE60);
PPC_FUNC_IMPL(__imp__sub_831BAE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-30240
	ctx.r10.s64 = ctx.r10.s64 + -30240;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BAE80"))) PPC_WEAK_FUNC(sub_831BAE80);
PPC_FUNC_IMPL(__imp__sub_831BAE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-30368
	ctx.r10.s64 = ctx.r10.s64 + -30368;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BAEA0"))) PPC_WEAK_FUNC(sub_831BAEA0);
PPC_FUNC_IMPL(__imp__sub_831BAEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-27240
	ctx.r3.s64 = ctx.r11.s64 + -27240;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BAEB0"))) PPC_WEAK_FUNC(sub_831BAEB0);
PPC_FUNC_IMPL(__imp__sub_831BAEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,-30336
	ctx.r3.s64 = ctx.r11.s64 + -30336;
	// b 0x82b74490
	sub_82B74490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BAEC0"))) PPC_WEAK_FUNC(sub_831BAEC0);
PPC_FUNC_IMPL(__imp__sub_831BAEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,-30276
	ctx.r3.s64 = ctx.r11.s64 + -30276;
	// b 0x82b73ee8
	sub_82B73EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BAED0"))) PPC_WEAK_FUNC(sub_831BAED0);
PPC_FUNC_IMPL(__imp__sub_831BAED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-27248
	ctx.r3.s64 = ctx.r11.s64 + -27248;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BAEE0"))) PPC_WEAK_FUNC(sub_831BAEE0);
PPC_FUNC_IMPL(__imp__sub_831BAEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,-30172
	ctx.r3.s64 = ctx.r11.s64 + -30172;
	// b 0x82b73f40
	sub_82B73F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BAEF0"))) PPC_WEAK_FUNC(sub_831BAEF0);
PPC_FUNC_IMPL(__imp__sub_831BAEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,-30140
	ctx.r3.s64 = ctx.r11.s64 + -30140;
	// b 0x82b740f8
	sub_82B740F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BAF00"))) PPC_WEAK_FUNC(sub_831BAF00);
PPC_FUNC_IMPL(__imp__sub_831BAF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29824
	ctx.r9.s64 = ctx.r11.s64 + -29824;
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

__attribute__((alias("__imp__sub_831BAF30"))) PPC_WEAK_FUNC(sub_831BAF30);
PPC_FUNC_IMPL(__imp__sub_831BAF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29952
	ctx.r9.s64 = ctx.r11.s64 + -29952;
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

__attribute__((alias("__imp__sub_831BAF60"))) PPC_WEAK_FUNC(sub_831BAF60);
PPC_FUNC_IMPL(__imp__sub_831BAF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-30000
	ctx.r9.s64 = ctx.r11.s64 + -30000;
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

__attribute__((alias("__imp__sub_831BAF90"))) PPC_WEAK_FUNC(sub_831BAF90);
PPC_FUNC_IMPL(__imp__sub_831BAF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29968
	ctx.r9.s64 = ctx.r11.s64 + -29968;
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

__attribute__((alias("__imp__sub_831BAFC0"))) PPC_WEAK_FUNC(sub_831BAFC0);
PPC_FUNC_IMPL(__imp__sub_831BAFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-29984
	ctx.r10.s64 = ctx.r10.s64 + -29984;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BAFE0"))) PPC_WEAK_FUNC(sub_831BAFE0);
PPC_FUNC_IMPL(__imp__sub_831BAFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-30016
	ctx.r10.s64 = ctx.r10.s64 + -30016;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BB000"))) PPC_WEAK_FUNC(sub_831BB000);
PPC_FUNC_IMPL(__imp__sub_831BB000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-27088
	ctx.r3.s64 = ctx.r11.s64 + -27088;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BB010"))) PPC_WEAK_FUNC(sub_831BB010);
PPC_FUNC_IMPL(__imp__sub_831BB010) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29348
	ctx.r30.s64 = ctx.r31.s64 + -29348;
	// addi r4,r11,31976
	ctx.r4.s64 = ctx.r11.s64 + 31976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BB03C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
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
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32556(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32556);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27072
	ctx.r3.s64 = ctx.r10.s64 + -27072;
	// lfs f11,29868(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29868);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-29348(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29348, ctx.r11.u32);
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
	ctx.lr = 0x831BB084;
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

__attribute__((alias("__imp__sub_831BB0A0"))) PPC_WEAK_FUNC(sub_831BB0A0);
PPC_FUNC_IMPL(__imp__sub_831BB0A0) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29580
	ctx.r30.s64 = ctx.r31.s64 + -29580;
	// addi r4,r11,32012
	ctx.r4.s64 = ctx.r11.s64 + 32012;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BB0CC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3400(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3400);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32556(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32556);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-27048
	ctx.r3.s64 = ctx.r10.s64 + -27048;
	// lfs f11,29868(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29868);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-29580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29580, ctx.r11.u32);
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
	ctx.lr = 0x831BB114;
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

__attribute__((alias("__imp__sub_831BB130"))) PPC_WEAK_FUNC(sub_831BB130);
PPC_FUNC_IMPL(__imp__sub_831BB130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-29840
	ctx.r10.s64 = ctx.r10.s64 + -29840;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BB150"))) PPC_WEAK_FUNC(sub_831BB150);
PPC_FUNC_IMPL(__imp__sub_831BB150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,-29608
	ctx.r3.s64 = ctx.r11.s64 + -29608;
	// bl 0x824683b0
	ctx.lr = 0x831BB16C;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-27152
	ctx.r3.s64 = ctx.r11.s64 + -27152;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BB178;
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

__attribute__((alias("__imp__sub_831BB188"))) PPC_WEAK_FUNC(sub_831BB188);
PPC_FUNC_IMPL(__imp__sub_831BB188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-29684
	ctx.r3.s64 = ctx.r11.s64 + -29684;
	// bl 0x82b9a0b0
	ctx.lr = 0x831BB1A4;
	sub_82B9A0B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-26568
	ctx.r3.s64 = ctx.r11.s64 + -26568;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BB1B0;
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

__attribute__((alias("__imp__sub_831BB1C0"))) PPC_WEAK_FUNC(sub_831BB1C0);
PPC_FUNC_IMPL(__imp__sub_831BB1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,-29760
	ctx.r3.s64 = ctx.r11.s64 + -29760;
	// bl 0x824683b0
	ctx.lr = 0x831BB1DC;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-27136
	ctx.r3.s64 = ctx.r11.s64 + -27136;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BB1E8;
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

__attribute__((alias("__imp__sub_831BB1F8"))) PPC_WEAK_FUNC(sub_831BB1F8);
PPC_FUNC_IMPL(__imp__sub_831BB1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-29620
	ctx.r3.s64 = ctx.r11.s64 + -29620;
	// bl 0x82b9a0b0
	ctx.lr = 0x831BB214;
	sub_82B9A0B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-26512
	ctx.r3.s64 = ctx.r11.s64 + -26512;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BB220;
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

__attribute__((alias("__imp__sub_831BB230"))) PPC_WEAK_FUNC(sub_831BB230);
PPC_FUNC_IMPL(__imp__sub_831BB230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,-29648
	ctx.r3.s64 = ctx.r11.s64 + -29648;
	// bl 0x824683b0
	ctx.lr = 0x831BB24C;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-27120
	ctx.r3.s64 = ctx.r11.s64 + -27120;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BB258;
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

__attribute__((alias("__imp__sub_831BB268"))) PPC_WEAK_FUNC(sub_831BB268);
PPC_FUNC_IMPL(__imp__sub_831BB268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-29480
	ctx.r3.s64 = ctx.r11.s64 + -29480;
	// bl 0x82b9a128
	ctx.lr = 0x831BB284;
	sub_82B9A128(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-26456
	ctx.r3.s64 = ctx.r11.s64 + -26456;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BB290;
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

__attribute__((alias("__imp__sub_831BB2A0"))) PPC_WEAK_FUNC(sub_831BB2A0);
PPC_FUNC_IMPL(__imp__sub_831BB2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-27104
	ctx.r3.s64 = ctx.r11.s64 + -27104;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BB2B0"))) PPC_WEAK_FUNC(sub_831BB2B0);
PPC_FUNC_IMPL(__imp__sub_831BB2B0) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29808
	ctx.r30.s64 = ctx.r31.s64 + -29808;
	// addi r4,r11,32048
	ctx.r4.s64 = ctx.r11.s64 + 32048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BB2DC;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-27024
	ctx.r3.s64 = ctx.r7.s64 + -27024;
	// lfs f12,3320(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3320);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29808, ctx.r11.u32);
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
	ctx.lr = 0x831BB31C;
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

__attribute__((alias("__imp__sub_831BB338"))) PPC_WEAK_FUNC(sub_831BB338);
PPC_FUNC_IMPL(__imp__sub_831BB338) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29888
	ctx.r30.s64 = ctx.r31.s64 + -29888;
	// addi r4,r11,32088
	ctx.r4.s64 = ctx.r11.s64 + 32088;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BB364;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-27000
	ctx.r3.s64 = ctx.r7.s64 + -27000;
	// lfs f12,3264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29888(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29888, ctx.r11.u32);
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
	ctx.lr = 0x831BB3A4;
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

__attribute__((alias("__imp__sub_831BB3C0"))) PPC_WEAK_FUNC(sub_831BB3C0);
PPC_FUNC_IMPL(__imp__sub_831BB3C0) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29444
	ctx.r30.s64 = ctx.r31.s64 + -29444;
	// addi r4,r11,32132
	ctx.r4.s64 = ctx.r11.s64 + 32132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BB3EC;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-26976
	ctx.r3.s64 = ctx.r7.s64 + -26976;
	// lfs f12,3320(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3320);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29444(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29444, ctx.r11.u32);
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
	ctx.lr = 0x831BB42C;
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

__attribute__((alias("__imp__sub_831BB448"))) PPC_WEAK_FUNC(sub_831BB448);
PPC_FUNC_IMPL(__imp__sub_831BB448) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29324
	ctx.r30.s64 = ctx.r31.s64 + -29324;
	// addi r4,r11,32172
	ctx.r4.s64 = ctx.r11.s64 + 32172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BB474;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-26952
	ctx.r3.s64 = ctx.r7.s64 + -26952;
	// lfs f12,3264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29324(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29324, ctx.r11.u32);
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
	ctx.lr = 0x831BB4B4;
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

__attribute__((alias("__imp__sub_831BB4D0"))) PPC_WEAK_FUNC(sub_831BB4D0);
PPC_FUNC_IMPL(__imp__sub_831BB4D0) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29732
	ctx.r30.s64 = ctx.r31.s64 + -29732;
	// addi r4,r11,32216
	ctx.r4.s64 = ctx.r11.s64 + 32216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BB4FC;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-26928
	ctx.r3.s64 = ctx.r7.s64 + -26928;
	// lfs f12,3320(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3320);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29732(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29732, ctx.r11.u32);
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
	ctx.lr = 0x831BB53C;
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

__attribute__((alias("__imp__sub_831BB558"))) PPC_WEAK_FUNC(sub_831BB558);
PPC_FUNC_IMPL(__imp__sub_831BB558) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29396
	ctx.r30.s64 = ctx.r31.s64 + -29396;
	// addi r4,r11,32256
	ctx.r4.s64 = ctx.r11.s64 + 32256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BB584;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-26904
	ctx.r3.s64 = ctx.r7.s64 + -26904;
	// lfs f12,3264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29396(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29396, ctx.r11.u32);
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
	ctx.lr = 0x831BB5C4;
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

__attribute__((alias("__imp__sub_831BB5E0"))) PPC_WEAK_FUNC(sub_831BB5E0);
PPC_FUNC_IMPL(__imp__sub_831BB5E0) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29864
	ctx.r30.s64 = ctx.r31.s64 + -29864;
	// addi r4,r11,32300
	ctx.r4.s64 = ctx.r11.s64 + 32300;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BB60C;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-26880
	ctx.r3.s64 = ctx.r7.s64 + -26880;
	// lfs f12,3320(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3320);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29864, ctx.r11.u32);
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
	ctx.lr = 0x831BB64C;
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

__attribute__((alias("__imp__sub_831BB668"))) PPC_WEAK_FUNC(sub_831BB668);
PPC_FUNC_IMPL(__imp__sub_831BB668) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29784
	ctx.r30.s64 = ctx.r31.s64 + -29784;
	// addi r4,r11,32340
	ctx.r4.s64 = ctx.r11.s64 + 32340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BB694;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-26856
	ctx.r3.s64 = ctx.r7.s64 + -26856;
	// lfs f12,3264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29784(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29784, ctx.r11.u32);
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
	ctx.lr = 0x831BB6D4;
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

__attribute__((alias("__imp__sub_831BB6F0"))) PPC_WEAK_FUNC(sub_831BB6F0);
PPC_FUNC_IMPL(__imp__sub_831BB6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-27096
	ctx.r3.s64 = ctx.r11.s64 + -27096;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BB700"))) PPC_WEAK_FUNC(sub_831BB700);
PPC_FUNC_IMPL(__imp__sub_831BB700) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29420
	ctx.r30.s64 = ctx.r31.s64 + -29420;
	// addi r4,r11,32384
	ctx.r4.s64 = ctx.r11.s64 + 32384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BB72C;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-26832
	ctx.r3.s64 = ctx.r7.s64 + -26832;
	// lfs f12,3320(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3320);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29420(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29420, ctx.r11.u32);
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
	ctx.lr = 0x831BB76C;
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

__attribute__((alias("__imp__sub_831BB788"))) PPC_WEAK_FUNC(sub_831BB788);
PPC_FUNC_IMPL(__imp__sub_831BB788) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29300
	ctx.r30.s64 = ctx.r31.s64 + -29300;
	// addi r4,r11,32420
	ctx.r4.s64 = ctx.r11.s64 + 32420;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BB7B4;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-26808
	ctx.r3.s64 = ctx.r7.s64 + -26808;
	// lfs f12,3264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29300(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29300, ctx.r11.u32);
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
	ctx.lr = 0x831BB7F4;
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

__attribute__((alias("__imp__sub_831BB810"))) PPC_WEAK_FUNC(sub_831BB810);
PPC_FUNC_IMPL(__imp__sub_831BB810) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29372
	ctx.r30.s64 = ctx.r31.s64 + -29372;
	// addi r4,r11,32460
	ctx.r4.s64 = ctx.r11.s64 + 32460;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BB83C;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-26784
	ctx.r3.s64 = ctx.r7.s64 + -26784;
	// lfs f12,3320(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3320);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29372(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29372, ctx.r11.u32);
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
	ctx.lr = 0x831BB87C;
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

__attribute__((alias("__imp__sub_831BB898"))) PPC_WEAK_FUNC(sub_831BB898);
PPC_FUNC_IMPL(__imp__sub_831BB898) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29532
	ctx.r30.s64 = ctx.r31.s64 + -29532;
	// addi r4,r11,32496
	ctx.r4.s64 = ctx.r11.s64 + 32496;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BB8C4;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-26760
	ctx.r3.s64 = ctx.r7.s64 + -26760;
	// lfs f12,3264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29532(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29532, ctx.r11.u32);
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
	ctx.lr = 0x831BB904;
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

__attribute__((alias("__imp__sub_831BB920"))) PPC_WEAK_FUNC(sub_831BB920);
PPC_FUNC_IMPL(__imp__sub_831BB920) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29936
	ctx.r30.s64 = ctx.r31.s64 + -29936;
	// addi r4,r11,32536
	ctx.r4.s64 = ctx.r11.s64 + 32536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BB94C;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-26736
	ctx.r3.s64 = ctx.r7.s64 + -26736;
	// lfs f12,3320(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3320);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29936, ctx.r11.u32);
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
	ctx.lr = 0x831BB98C;
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

__attribute__((alias("__imp__sub_831BB9A8"))) PPC_WEAK_FUNC(sub_831BB9A8);
PPC_FUNC_IMPL(__imp__sub_831BB9A8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29504
	ctx.r30.s64 = ctx.r31.s64 + -29504;
	// addi r4,r11,32576
	ctx.r4.s64 = ctx.r11.s64 + 32576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BB9D4;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-26712
	ctx.r3.s64 = ctx.r7.s64 + -26712;
	// lfs f12,3264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29504(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29504, ctx.r11.u32);
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
	ctx.lr = 0x831BBA14;
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

__attribute__((alias("__imp__sub_831BBA30"))) PPC_WEAK_FUNC(sub_831BBA30);
PPC_FUNC_IMPL(__imp__sub_831BBA30) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29556
	ctx.r30.s64 = ctx.r31.s64 + -29556;
	// addi r4,r11,32620
	ctx.r4.s64 = ctx.r11.s64 + 32620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BBA5C;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-26688
	ctx.r3.s64 = ctx.r7.s64 + -26688;
	// lfs f12,3320(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3320);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29556(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29556, ctx.r11.u32);
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
	ctx.lr = 0x831BBA9C;
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

__attribute__((alias("__imp__sub_831BBAB8"))) PPC_WEAK_FUNC(sub_831BBAB8);
PPC_FUNC_IMPL(__imp__sub_831BBAB8) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29672
	ctx.r30.s64 = ctx.r31.s64 + -29672;
	// addi r4,r11,32660
	ctx.r4.s64 = ctx.r11.s64 + 32660;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BBAE4;
	sub_82C07410(ctx, base);
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
	// addi r3,r7,-26664
	ctx.r3.s64 = ctx.r7.s64 + -26664;
	// lfs f12,3264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3264);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29672, ctx.r11.u32);
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
	ctx.lr = 0x831BBB24;
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

__attribute__((alias("__imp__sub_831BBB40"))) PPC_WEAK_FUNC(sub_831BBB40);
PPC_FUNC_IMPL(__imp__sub_831BBB40) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29912
	ctx.r30.s64 = ctx.r31.s64 + -29912;
	// addi r4,r11,32704
	ctx.r4.s64 = ctx.r11.s64 + 32704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BBB6C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
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
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32556(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32556);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-26640
	ctx.r3.s64 = ctx.r10.s64 + -26640;
	// lfs f11,29868(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29868);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-29912(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29912, ctx.r11.u32);
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
	ctx.lr = 0x831BBBB4;
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

__attribute__((alias("__imp__sub_831BBBD0"))) PPC_WEAK_FUNC(sub_831BBBD0);
PPC_FUNC_IMPL(__imp__sub_831BBBD0) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r31,-29708
	ctx.r30.s64 = ctx.r31.s64 + -29708;
	// addi r4,r11,32740
	ctx.r4.s64 = ctx.r11.s64 + 32740;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BBBFC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3400(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3400);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32556(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32556);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-26616
	ctx.r3.s64 = ctx.r10.s64 + -26616;
	// lfs f11,29868(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29868);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-29708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29708, ctx.r11.u32);
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
	ctx.lr = 0x831BBC44;
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

__attribute__((alias("__imp__sub_831BBC60"))) PPC_WEAK_FUNC(sub_831BBC60);
PPC_FUNC_IMPL(__imp__sub_831BBC60) {
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
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r30,r31,-29468
	ctx.r30.s64 = ctx.r31.s64 + -29468;
	// addi r4,r11,-32760
	ctx.r4.s64 = ctx.r11.s64 + -32760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831BBC8C;
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
	// addi r3,r10,-26592
	ctx.r3.s64 = ctx.r10.s64 + -26592;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-29468(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29468, ctx.r11.u32);
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
	ctx.lr = 0x831BBCD4;
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

__attribute__((alias("__imp__sub_831BBCF0"))) PPC_WEAK_FUNC(sub_831BBCF0);
PPC_FUNC_IMPL(__imp__sub_831BBCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-28704
	ctx.r9.s64 = ctx.r11.s64 + -28704;
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

__attribute__((alias("__imp__sub_831BBD20"))) PPC_WEAK_FUNC(sub_831BBD20);
PPC_FUNC_IMPL(__imp__sub_831BBD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29168
	ctx.r9.s64 = ctx.r11.s64 + -29168;
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

__attribute__((alias("__imp__sub_831BBD50"))) PPC_WEAK_FUNC(sub_831BBD50);
PPC_FUNC_IMPL(__imp__sub_831BBD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29216
	ctx.r9.s64 = ctx.r11.s64 + -29216;
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

__attribute__((alias("__imp__sub_831BBD80"))) PPC_WEAK_FUNC(sub_831BBD80);
PPC_FUNC_IMPL(__imp__sub_831BBD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29184
	ctx.r9.s64 = ctx.r11.s64 + -29184;
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

__attribute__((alias("__imp__sub_831BBDB0"))) PPC_WEAK_FUNC(sub_831BBDB0);
PPC_FUNC_IMPL(__imp__sub_831BBDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-29200
	ctx.r10.s64 = ctx.r10.s64 + -29200;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BBDD0"))) PPC_WEAK_FUNC(sub_831BBDD0);
PPC_FUNC_IMPL(__imp__sub_831BBDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-29232
	ctx.r10.s64 = ctx.r10.s64 + -29232;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BBDF0"))) PPC_WEAK_FUNC(sub_831BBDF0);
PPC_FUNC_IMPL(__imp__sub_831BBDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-26296
	ctx.r3.s64 = ctx.r11.s64 + -26296;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BBE00"))) PPC_WEAK_FUNC(sub_831BBE00);
PPC_FUNC_IMPL(__imp__sub_831BBE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-26384
	ctx.r3.s64 = ctx.r11.s64 + -26384;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BBE10"))) PPC_WEAK_FUNC(sub_831BBE10);
PPC_FUNC_IMPL(__imp__sub_831BBE10) {
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
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r31,r11,-28096
	ctx.r31.s64 = ctx.r11.s64 + -28096;
	// addi r4,r10,-23016
	ctx.r4.s64 = ctx.r10.s64 + -23016;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450f48
	ctx.lr = 0x831BBE38;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r11,-23024
	ctx.r4.s64 = ctx.r11.s64 + -23024;
	// bl 0x82450f48
	ctx.lr = 0x831BBE48;
	sub_82450F48(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r4,r11,7180
	ctx.r4.s64 = ctx.r11.s64 + 7180;
	// bl 0x82450f48
	ctx.lr = 0x831BBE58;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,-23040
	ctx.r4.s64 = ctx.r11.s64 + -23040;
	// bl 0x82450f48
	ctx.lr = 0x831BBE68;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,-23048
	ctx.r4.s64 = ctx.r11.s64 + -23048;
	// bl 0x82450f48
	ctx.lr = 0x831BBE78;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// addi r4,r11,-23064
	ctx.r4.s64 = ctx.r11.s64 + -23064;
	// bl 0x82450f48
	ctx.lr = 0x831BBE88;
	sub_82450F48(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// addi r4,r11,22080
	ctx.r4.s64 = ctx.r11.s64 + 22080;
	// bl 0x82450f48
	ctx.lr = 0x831BBE98;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// addi r4,r11,-23076
	ctx.r4.s64 = ctx.r11.s64 + -23076;
	// bl 0x82450f48
	ctx.lr = 0x831BBEA8;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,-23084
	ctx.r4.s64 = ctx.r11.s64 + -23084;
	// bl 0x82450f48
	ctx.lr = 0x831BBEB8;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// addi r4,r11,-23092
	ctx.r4.s64 = ctx.r11.s64 + -23092;
	// bl 0x82450f48
	ctx.lr = 0x831BBEC8;
	sub_82450F48(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// addi r4,r11,18624
	ctx.r4.s64 = ctx.r11.s64 + 18624;
	// bl 0x82450f48
	ctx.lr = 0x831BBED8;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// addi r4,r11,-23108
	ctx.r4.s64 = ctx.r11.s64 + -23108;
	// bl 0x82450f48
	ctx.lr = 0x831BBEE8;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// addi r4,r11,-23124
	ctx.r4.s64 = ctx.r11.s64 + -23124;
	// bl 0x82450f48
	ctx.lr = 0x831BBEF8;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// addi r4,r11,-23136
	ctx.r4.s64 = ctx.r11.s64 + -23136;
	// bl 0x82450f48
	ctx.lr = 0x831BBF08;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// addi r4,r11,-23160
	ctx.r4.s64 = ctx.r11.s64 + -23160;
	// bl 0x82450f48
	ctx.lr = 0x831BBF18;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// addi r4,r11,-23176
	ctx.r4.s64 = ctx.r11.s64 + -23176;
	// bl 0x82450f48
	ctx.lr = 0x831BBF28;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// addi r4,r11,-23188
	ctx.r4.s64 = ctx.r11.s64 + -23188;
	// bl 0x82450f48
	ctx.lr = 0x831BBF38;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,476
	ctx.r3.s64 = ctx.r31.s64 + 476;
	// addi r4,r11,-23196
	ctx.r4.s64 = ctx.r11.s64 + -23196;
	// bl 0x82450f48
	ctx.lr = 0x831BBF48;
	sub_82450F48(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,504
	ctx.r3.s64 = ctx.r31.s64 + 504;
	// addi r4,r11,-28672
	ctx.r4.s64 = ctx.r11.s64 + -28672;
	// bl 0x82450f48
	ctx.lr = 0x831BBF58;
	sub_82450F48(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// addi r4,r11,19224
	ctx.r4.s64 = ctx.r11.s64 + 19224;
	// bl 0x82450f48
	ctx.lr = 0x831BBF68;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// addi r4,r11,-23208
	ctx.r4.s64 = ctx.r11.s64 + -23208;
	// bl 0x82450f48
	ctx.lr = 0x831BBF78;
	sub_82450F48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-26280
	ctx.r3.s64 = ctx.r11.s64 + -26280;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BBF84;
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

__attribute__((alias("__imp__sub_831BBF98"))) PPC_WEAK_FUNC(sub_831BBF98);
PPC_FUNC_IMPL(__imp__sub_831BBF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-26376
	ctx.r3.s64 = ctx.r11.s64 + -26376;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BBFA8"))) PPC_WEAK_FUNC(sub_831BBFA8);
PPC_FUNC_IMPL(__imp__sub_831BBFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,-28904
	ctx.r11.s64 = ctx.r11.s64 + -28904;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// ori r9,r9,12
	ctx.r9.u64 = ctx.r9.u64 | 12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
loc_831BBFCC:
	// lis r8,2
	ctx.r8.s64 = 131072;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r8,r8,4
	ctx.r8.u64 = ctx.r8.u64 | 4;
	// ori r7,r7,8
	ctx.r7.u64 = ctx.r7.u64 | 8;
	// ori r6,r6,16
	ctx.r6.u64 = ctx.r6.u64 | 16;
	// ori r5,r5,20
	ctx.r5.u64 = ctx.r5.u64 | 20;
	// ori r4,r4,24
	ctx.r4.u64 = ctx.r4.u64 | 24;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// stwx r10,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u32);
	// stwux r10,r11,r4
	ea = ctx.r11.u32 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x831bbfcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831BBFCC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC018"))) PPC_WEAK_FUNC(sub_831BC018);
PPC_FUNC_IMPL(__imp__sub_831BC018) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-28688
	ctx.r3.s64 = ctx.r11.s64 + -28688;
	// bl 0x824683b0
	ctx.lr = 0x831BC034;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-26400
	ctx.r3.s64 = ctx.r11.s64 + -26400;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BC040;
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

__attribute__((alias("__imp__sub_831BC050"))) PPC_WEAK_FUNC(sub_831BC050);
PPC_FUNC_IMPL(__imp__sub_831BC050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,-29152
	ctx.r11.s64 = ctx.r11.s64 + -29152;
	// addi r9,r9,-29636
	ctx.r9.s64 = ctx.r9.s64 + -29636;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_831BC070:
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stbu r10,24(r11)
	ea = 24 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x831bc070
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831BC070;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-26368
	ctx.r3.s64 = ctx.r11.s64 + -26368;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BC098"))) PPC_WEAK_FUNC(sub_831BC098);
PPC_FUNC_IMPL(__imp__sub_831BC098) {
	PPC_FUNC_PROLOGUE();
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r11,r11,-28656
	ctx.r11.s64 = ctx.r11.s64 + -28656;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfd f0,6576(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 6576);
loc_831BC0B8:
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.f0.u64);
	// stw r10,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r10.u32);
	// stw r10,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// stw r10,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r10.u32);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// bdnz 0x831bc0b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831BC0B8;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-26192
	ctx.r3.s64 = ctx.r11.s64 + -26192;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BC0F0"))) PPC_WEAK_FUNC(sub_831BC0F0);
PPC_FUNC_IMPL(__imp__sub_831BC0F0) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f2,-23000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23000);
	// lfd f1,9904(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9904);
	// bl 0x82438ea8
	ctx.lr = 0x831BC110;
	sub_82438EA8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,-28908(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28908, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC130"))) PPC_WEAK_FUNC(sub_831BC130);
PPC_FUNC_IMPL(__imp__sub_831BC130) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f2,-22992(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -22992);
	// lfd f1,9904(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9904);
	// bl 0x82438ea8
	ctx.lr = 0x831BC150;
	sub_82438EA8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,-29240(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -29240, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC170"))) PPC_WEAK_FUNC(sub_831BC170);
PPC_FUNC_IMPL(__imp__sub_831BC170) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f2,-22984(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -22984);
	// lfd f1,9904(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9904);
	// bl 0x82438ea8
	ctx.lr = 0x831BC190;
	sub_82438EA8(ctx, base);
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,-28712(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28712, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC1B0"))) PPC_WEAK_FUNC(sub_831BC1B0);
PPC_FUNC_IMPL(__imp__sub_831BC1B0) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f2,-22976(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -22976);
	// lfd f1,9904(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9904);
	// bl 0x82438ea8
	ctx.lr = 0x831BC1D0;
	sub_82438EA8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,-29236(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -29236, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC1F0"))) PPC_WEAK_FUNC(sub_831BC1F0);
PPC_FUNC_IMPL(__imp__sub_831BC1F0) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f2,-22992(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -22992);
	// lfd f1,9904(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9904);
	// bl 0x82438ea8
	ctx.lr = 0x831BC210;
	sub_82438EA8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,-28912(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28912, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC230"))) PPC_WEAK_FUNC(sub_831BC230);
PPC_FUNC_IMPL(__imp__sub_831BC230) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f2,-22968(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -22968);
	// lfd f1,9904(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9904);
	// bl 0x82438ea8
	ctx.lr = 0x831BC250;
	sub_82438EA8(ctx, base);
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,-28660(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28660, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC270"))) PPC_WEAK_FUNC(sub_831BC270);
PPC_FUNC_IMPL(__imp__sub_831BC270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-26304
	ctx.r3.s64 = ctx.r11.s64 + -26304;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BC280"))) PPC_WEAK_FUNC(sub_831BC280);
PPC_FUNC_IMPL(__imp__sub_831BC280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27360
	ctx.r9.s64 = ctx.r11.s64 + -27360;
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

__attribute__((alias("__imp__sub_831BC2B0"))) PPC_WEAK_FUNC(sub_831BC2B0);
PPC_FUNC_IMPL(__imp__sub_831BC2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27376
	ctx.r9.s64 = ctx.r11.s64 + -27376;
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

__attribute__((alias("__imp__sub_831BC2E0"))) PPC_WEAK_FUNC(sub_831BC2E0);
PPC_FUNC_IMPL(__imp__sub_831BC2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27440
	ctx.r9.s64 = ctx.r11.s64 + -27440;
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

__attribute__((alias("__imp__sub_831BC310"))) PPC_WEAK_FUNC(sub_831BC310);
PPC_FUNC_IMPL(__imp__sub_831BC310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27392
	ctx.r9.s64 = ctx.r11.s64 + -27392;
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

__attribute__((alias("__imp__sub_831BC340"))) PPC_WEAK_FUNC(sub_831BC340);
PPC_FUNC_IMPL(__imp__sub_831BC340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-27424
	ctx.r10.s64 = ctx.r10.s64 + -27424;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC360"))) PPC_WEAK_FUNC(sub_831BC360);
PPC_FUNC_IMPL(__imp__sub_831BC360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-27472
	ctx.r10.s64 = ctx.r10.s64 + -27472;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC380"))) PPC_WEAK_FUNC(sub_831BC380);
PPC_FUNC_IMPL(__imp__sub_831BC380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-26080
	ctx.r3.s64 = ctx.r11.s64 + -26080;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BC390"))) PPC_WEAK_FUNC(sub_831BC390);
PPC_FUNC_IMPL(__imp__sub_831BC390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25864
	ctx.r3.s64 = ctx.r11.s64 + -25864;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BC3A0"))) PPC_WEAK_FUNC(sub_831BC3A0);
PPC_FUNC_IMPL(__imp__sub_831BC3A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-27280
	ctx.r3.s64 = ctx.r11.s64 + -27280;
	// bl 0x824683b0
	ctx.lr = 0x831BC3BC;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-26096
	ctx.r3.s64 = ctx.r11.s64 + -26096;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BC3C8;
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

__attribute__((alias("__imp__sub_831BC3D8"))) PPC_WEAK_FUNC(sub_831BC3D8);
PPC_FUNC_IMPL(__imp__sub_831BC3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25968
	ctx.r3.s64 = ctx.r11.s64 + -25968;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BC3E8"))) PPC_WEAK_FUNC(sub_831BC3E8);
PPC_FUNC_IMPL(__imp__sub_831BC3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-26064
	ctx.r3.s64 = ctx.r11.s64 + -26064;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BC3F8"))) PPC_WEAK_FUNC(sub_831BC3F8);
PPC_FUNC_IMPL(__imp__sub_831BC3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-27252
	ctx.r9.s64 = ctx.r10.s64 + -27252;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// stw r11,-27252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27252, ctx.r11.u32);
	// addi r3,r8,-26048
	ctx.r3.s64 = ctx.r8.s64 + -26048;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BC420"))) PPC_WEAK_FUNC(sub_831BC420);
PPC_FUNC_IMPL(__imp__sub_831BC420) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-27328
	ctx.r3.s64 = ctx.r11.s64 + -27328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824aff50
	ctx.lr = 0x831BC440;
	sub_824AFF50(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25952
	ctx.r3.s64 = ctx.r11.s64 + -25952;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BC44C;
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

__attribute__((alias("__imp__sub_831BC460"))) PPC_WEAK_FUNC(sub_831BC460);
PPC_FUNC_IMPL(__imp__sub_831BC460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25880
	ctx.r3.s64 = ctx.r11.s64 + -25880;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BC470"))) PPC_WEAK_FUNC(sub_831BC470);
PPC_FUNC_IMPL(__imp__sub_831BC470) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-27456
	ctx.r3.s64 = ctx.r11.s64 + -27456;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82bc1b88
	ctx.lr = 0x831BC490;
	sub_82BC1B88(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25776
	ctx.r3.s64 = ctx.r11.s64 + -25776;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BC49C;
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

__attribute__((alias("__imp__sub_831BC4B0"))) PPC_WEAK_FUNC(sub_831BC4B0);
PPC_FUNC_IMPL(__imp__sub_831BC4B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-27344
	ctx.r3.s64 = ctx.r11.s64 + -27344;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82526128
	ctx.lr = 0x831BC4D0;
	sub_82526128(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25848
	ctx.r3.s64 = ctx.r11.s64 + -25848;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BC4DC;
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

__attribute__((alias("__imp__sub_831BC4F0"))) PPC_WEAK_FUNC(sub_831BC4F0);
PPC_FUNC_IMPL(__imp__sub_831BC4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27136
	ctx.r9.s64 = ctx.r11.s64 + -27136;
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

__attribute__((alias("__imp__sub_831BC520"))) PPC_WEAK_FUNC(sub_831BC520);
PPC_FUNC_IMPL(__imp__sub_831BC520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27168
	ctx.r9.s64 = ctx.r11.s64 + -27168;
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

__attribute__((alias("__imp__sub_831BC550"))) PPC_WEAK_FUNC(sub_831BC550);
PPC_FUNC_IMPL(__imp__sub_831BC550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27216
	ctx.r9.s64 = ctx.r11.s64 + -27216;
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

__attribute__((alias("__imp__sub_831BC580"))) PPC_WEAK_FUNC(sub_831BC580);
PPC_FUNC_IMPL(__imp__sub_831BC580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27184
	ctx.r9.s64 = ctx.r11.s64 + -27184;
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

__attribute__((alias("__imp__sub_831BC5B0"))) PPC_WEAK_FUNC(sub_831BC5B0);
PPC_FUNC_IMPL(__imp__sub_831BC5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-27200
	ctx.r10.s64 = ctx.r10.s64 + -27200;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC5D0"))) PPC_WEAK_FUNC(sub_831BC5D0);
PPC_FUNC_IMPL(__imp__sub_831BC5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-27232
	ctx.r10.s64 = ctx.r10.s64 + -27232;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC5F0"))) PPC_WEAK_FUNC(sub_831BC5F0);
PPC_FUNC_IMPL(__imp__sub_831BC5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25704
	ctx.r3.s64 = ctx.r11.s64 + -25704;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BC600"))) PPC_WEAK_FUNC(sub_831BC600);
PPC_FUNC_IMPL(__imp__sub_831BC600) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-27152
	ctx.r3.s64 = ctx.r11.s64 + -27152;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82526128
	ctx.lr = 0x831BC620;
	sub_82526128(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25544
	ctx.r3.s64 = ctx.r11.s64 + -25544;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BC62C;
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

__attribute__((alias("__imp__sub_831BC640"))) PPC_WEAK_FUNC(sub_831BC640);
PPC_FUNC_IMPL(__imp__sub_831BC640) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-27100
	ctx.r3.s64 = ctx.r11.s64 + -27100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82526128
	ctx.lr = 0x831BC660;
	sub_82526128(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25688
	ctx.r3.s64 = ctx.r11.s64 + -25688;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BC66C;
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

__attribute__((alias("__imp__sub_831BC680"))) PPC_WEAK_FUNC(sub_831BC680);
PPC_FUNC_IMPL(__imp__sub_831BC680) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-27116
	ctx.r3.s64 = ctx.r11.s64 + -27116;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82526128
	ctx.lr = 0x831BC6A0;
	sub_82526128(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25616
	ctx.r3.s64 = ctx.r11.s64 + -25616;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BC6AC;
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

__attribute__((alias("__imp__sub_831BC6C0"))) PPC_WEAK_FUNC(sub_831BC6C0);
PPC_FUNC_IMPL(__imp__sub_831BC6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26992
	ctx.r9.s64 = ctx.r11.s64 + -26992;
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

__attribute__((alias("__imp__sub_831BC6F0"))) PPC_WEAK_FUNC(sub_831BC6F0);
PPC_FUNC_IMPL(__imp__sub_831BC6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27008
	ctx.r9.s64 = ctx.r11.s64 + -27008;
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

__attribute__((alias("__imp__sub_831BC720"))) PPC_WEAK_FUNC(sub_831BC720);
PPC_FUNC_IMPL(__imp__sub_831BC720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27056
	ctx.r9.s64 = ctx.r11.s64 + -27056;
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

__attribute__((alias("__imp__sub_831BC750"))) PPC_WEAK_FUNC(sub_831BC750);
PPC_FUNC_IMPL(__imp__sub_831BC750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27024
	ctx.r9.s64 = ctx.r11.s64 + -27024;
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

__attribute__((alias("__imp__sub_831BC780"))) PPC_WEAK_FUNC(sub_831BC780);
PPC_FUNC_IMPL(__imp__sub_831BC780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-27040
	ctx.r10.s64 = ctx.r10.s64 + -27040;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC7A0"))) PPC_WEAK_FUNC(sub_831BC7A0);
PPC_FUNC_IMPL(__imp__sub_831BC7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-27072
	ctx.r10.s64 = ctx.r10.s64 + -27072;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC7C0"))) PPC_WEAK_FUNC(sub_831BC7C0);
PPC_FUNC_IMPL(__imp__sub_831BC7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25472
	ctx.r3.s64 = ctx.r11.s64 + -25472;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BC7D0"))) PPC_WEAK_FUNC(sub_831BC7D0);
PPC_FUNC_IMPL(__imp__sub_831BC7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25448
	ctx.r3.s64 = ctx.r11.s64 + -25448;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BC7E0"))) PPC_WEAK_FUNC(sub_831BC7E0);
PPC_FUNC_IMPL(__imp__sub_831BC7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26544
	ctx.r9.s64 = ctx.r11.s64 + -26544;
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

__attribute__((alias("__imp__sub_831BC810"))) PPC_WEAK_FUNC(sub_831BC810);
PPC_FUNC_IMPL(__imp__sub_831BC810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26560
	ctx.r9.s64 = ctx.r11.s64 + -26560;
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

__attribute__((alias("__imp__sub_831BC840"))) PPC_WEAK_FUNC(sub_831BC840);
PPC_FUNC_IMPL(__imp__sub_831BC840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26608
	ctx.r9.s64 = ctx.r11.s64 + -26608;
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

__attribute__((alias("__imp__sub_831BC870"))) PPC_WEAK_FUNC(sub_831BC870);
PPC_FUNC_IMPL(__imp__sub_831BC870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26576
	ctx.r9.s64 = ctx.r11.s64 + -26576;
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

__attribute__((alias("__imp__sub_831BC8A0"))) PPC_WEAK_FUNC(sub_831BC8A0);
PPC_FUNC_IMPL(__imp__sub_831BC8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-26592
	ctx.r10.s64 = ctx.r10.s64 + -26592;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC8C0"))) PPC_WEAK_FUNC(sub_831BC8C0);
PPC_FUNC_IMPL(__imp__sub_831BC8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-26624
	ctx.r10.s64 = ctx.r10.s64 + -26624;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC8E0"))) PPC_WEAK_FUNC(sub_831BC8E0);
PPC_FUNC_IMPL(__imp__sub_831BC8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25456
	ctx.r3.s64 = ctx.r11.s64 + -25456;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BC8F0"))) PPC_WEAK_FUNC(sub_831BC8F0);
PPC_FUNC_IMPL(__imp__sub_831BC8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-31932
	ctx.r8.s64 = -2092695552;
	// lfs f0,8056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8056);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26912);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,21588(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21588);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-26528(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -26528, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC920"))) PPC_WEAK_FUNC(sub_831BC920);
PPC_FUNC_IMPL(__imp__sub_831BC920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-31932
	ctx.r8.s64 = -2092695552;
	// lfs f0,8056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8056);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26912);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-11832(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11832);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-26524(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -26524, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC950"))) PPC_WEAK_FUNC(sub_831BC950);
PPC_FUNC_IMPL(__imp__sub_831BC950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lis r9,-31932
	ctx.r9.s64 = -2092695552;
	// lfs f0,3368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26524);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-26908(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -26908, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BC970"))) PPC_WEAK_FUNC(sub_831BC970);
PPC_FUNC_IMPL(__imp__sub_831BC970) {
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
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r31,r11,-26904
	ctx.r31.s64 = ctx.r11.s64 + -26904;
	// addi r4,r10,6696
	ctx.r4.s64 = ctx.r10.s64 + 6696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450f48
	ctx.lr = 0x831BC998;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r11,6680
	ctx.r4.s64 = ctx.r11.s64 + 6680;
	// bl 0x82450f48
	ctx.lr = 0x831BC9A8;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r4,r11,6664
	ctx.r4.s64 = ctx.r11.s64 + 6664;
	// bl 0x82450f48
	ctx.lr = 0x831BC9B8;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,6648
	ctx.r4.s64 = ctx.r11.s64 + 6648;
	// bl 0x82450f48
	ctx.lr = 0x831BC9C8;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r11,6628
	ctx.r4.s64 = ctx.r11.s64 + 6628;
	// bl 0x82450f48
	ctx.lr = 0x831BC9D8;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// addi r4,r11,-32388
	ctx.r4.s64 = ctx.r11.s64 + -32388;
	// bl 0x82450f48
	ctx.lr = 0x831BC9E8;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// addi r4,r11,6608
	ctx.r4.s64 = ctx.r11.s64 + 6608;
	// bl 0x82450f48
	ctx.lr = 0x831BC9F8;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// addi r4,r11,6588
	ctx.r4.s64 = ctx.r11.s64 + 6588;
	// bl 0x82450f48
	ctx.lr = 0x831BCA08;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,6572
	ctx.r4.s64 = ctx.r11.s64 + 6572;
	// bl 0x82450f48
	ctx.lr = 0x831BCA18;
	sub_82450F48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// addi r4,r11,6556
	ctx.r4.s64 = ctx.r11.s64 + 6556;
	// bl 0x82450f48
	ctx.lr = 0x831BCA28;
	sub_82450F48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25432
	ctx.r3.s64 = ctx.r11.s64 + -25432;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BCA34;
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

__attribute__((alias("__imp__sub_831BCA48"))) PPC_WEAK_FUNC(sub_831BCA48);
PPC_FUNC_IMPL(__imp__sub_831BCA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25320
	ctx.r3.s64 = ctx.r11.s64 + -25320;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BCA58"))) PPC_WEAK_FUNC(sub_831BCA58);
PPC_FUNC_IMPL(__imp__sub_831BCA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26416
	ctx.r9.s64 = ctx.r11.s64 + -26416;
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

__attribute__((alias("__imp__sub_831BCA88"))) PPC_WEAK_FUNC(sub_831BCA88);
PPC_FUNC_IMPL(__imp__sub_831BCA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26432
	ctx.r9.s64 = ctx.r11.s64 + -26432;
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

__attribute__((alias("__imp__sub_831BCAB8"))) PPC_WEAK_FUNC(sub_831BCAB8);
PPC_FUNC_IMPL(__imp__sub_831BCAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26480
	ctx.r9.s64 = ctx.r11.s64 + -26480;
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

__attribute__((alias("__imp__sub_831BCAE8"))) PPC_WEAK_FUNC(sub_831BCAE8);
PPC_FUNC_IMPL(__imp__sub_831BCAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26448
	ctx.r9.s64 = ctx.r11.s64 + -26448;
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

__attribute__((alias("__imp__sub_831BCB18"))) PPC_WEAK_FUNC(sub_831BCB18);
PPC_FUNC_IMPL(__imp__sub_831BCB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-26464
	ctx.r10.s64 = ctx.r10.s64 + -26464;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCB38"))) PPC_WEAK_FUNC(sub_831BCB38);
PPC_FUNC_IMPL(__imp__sub_831BCB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-26496
	ctx.r10.s64 = ctx.r10.s64 + -26496;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCB58"))) PPC_WEAK_FUNC(sub_831BCB58);
PPC_FUNC_IMPL(__imp__sub_831BCB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25328
	ctx.r3.s64 = ctx.r11.s64 + -25328;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BCB68"))) PPC_WEAK_FUNC(sub_831BCB68);
PPC_FUNC_IMPL(__imp__sub_831BCB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25280
	ctx.r3.s64 = ctx.r11.s64 + -25280;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BCB78"))) PPC_WEAK_FUNC(sub_831BCB78);
PPC_FUNC_IMPL(__imp__sub_831BCB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-22096
	ctx.r9.s64 = ctx.r11.s64 + -22096;
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

__attribute__((alias("__imp__sub_831BCBA8"))) PPC_WEAK_FUNC(sub_831BCBA8);
PPC_FUNC_IMPL(__imp__sub_831BCBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-22112
	ctx.r9.s64 = ctx.r11.s64 + -22112;
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

__attribute__((alias("__imp__sub_831BCBD8"))) PPC_WEAK_FUNC(sub_831BCBD8);
PPC_FUNC_IMPL(__imp__sub_831BCBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26256
	ctx.r9.s64 = ctx.r11.s64 + -26256;
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

__attribute__((alias("__imp__sub_831BCC08"))) PPC_WEAK_FUNC(sub_831BCC08);
PPC_FUNC_IMPL(__imp__sub_831BCC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-22128
	ctx.r9.s64 = ctx.r11.s64 + -22128;
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

__attribute__((alias("__imp__sub_831BCC38"))) PPC_WEAK_FUNC(sub_831BCC38);
PPC_FUNC_IMPL(__imp__sub_831BCC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-22144
	ctx.r10.s64 = ctx.r10.s64 + -22144;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCC58"))) PPC_WEAK_FUNC(sub_831BCC58);
PPC_FUNC_IMPL(__imp__sub_831BCC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-26272
	ctx.r10.s64 = ctx.r10.s64 + -26272;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCC78"))) PPC_WEAK_FUNC(sub_831BCC78);
PPC_FUNC_IMPL(__imp__sub_831BCC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25288
	ctx.r3.s64 = ctx.r11.s64 + -25288;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BCC88"))) PPC_WEAK_FUNC(sub_831BCC88);
PPC_FUNC_IMPL(__imp__sub_831BCC88) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,12008
	ctx.r3.s64 = ctx.r11.s64 + 12008;
	// bl 0x82d35328
	ctx.lr = 0x831BCCA4;
	sub_82D35328(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25064
	ctx.r3.s64 = ctx.r11.s64 + -25064;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BCCB0;
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

__attribute__((alias("__imp__sub_831BCCC0"))) PPC_WEAK_FUNC(sub_831BCCC0);
PPC_FUNC_IMPL(__imp__sub_831BCCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12096
	ctx.r9.s64 = ctx.r11.s64 + 12096;
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

__attribute__((alias("__imp__sub_831BCCF0"))) PPC_WEAK_FUNC(sub_831BCCF0);
PPC_FUNC_IMPL(__imp__sub_831BCCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12080
	ctx.r9.s64 = ctx.r11.s64 + 12080;
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

__attribute__((alias("__imp__sub_831BCD20"))) PPC_WEAK_FUNC(sub_831BCD20);
PPC_FUNC_IMPL(__imp__sub_831BCD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12032
	ctx.r9.s64 = ctx.r11.s64 + 12032;
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

__attribute__((alias("__imp__sub_831BCD50"))) PPC_WEAK_FUNC(sub_831BCD50);
PPC_FUNC_IMPL(__imp__sub_831BCD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12064
	ctx.r9.s64 = ctx.r11.s64 + 12064;
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

__attribute__((alias("__imp__sub_831BCD80"))) PPC_WEAK_FUNC(sub_831BCD80);
PPC_FUNC_IMPL(__imp__sub_831BCD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,12048
	ctx.r10.s64 = ctx.r10.s64 + 12048;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCDA0"))) PPC_WEAK_FUNC(sub_831BCDA0);
PPC_FUNC_IMPL(__imp__sub_831BCDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,12016
	ctx.r10.s64 = ctx.r10.s64 + 12016;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCDC0"))) PPC_WEAK_FUNC(sub_831BCDC0);
PPC_FUNC_IMPL(__imp__sub_831BCDC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3860
	ctx.r3.s64 = ctx.r11.s64 + -3860;
	// bl 0x82c0a158
	ctx.lr = 0x831BCDD8;
	sub_82C0A158(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25080
	ctx.r3.s64 = ctx.r11.s64 + -25080;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BCDE4;
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

__attribute__((alias("__imp__sub_831BCDF8"))) PPC_WEAK_FUNC(sub_831BCDF8);
PPC_FUNC_IMPL(__imp__sub_831BCDF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12112
	ctx.r3.s64 = ctx.r11.s64 + 12112;
	// bl 0x82c090d0
	ctx.lr = 0x831BCE10;
	sub_82C090D0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r11,r11,12772
	ctx.r11.s64 = ctx.r11.s64 + 12772;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,12112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12112, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCE30"))) PPC_WEAK_FUNC(sub_831BCE30);
PPC_FUNC_IMPL(__imp__sub_831BCE30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12012
	ctx.r3.s64 = ctx.r11.s64 + 12012;
	// bl 0x82c090d0
	ctx.lr = 0x831BCE48;
	sub_82C090D0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r11,r11,12788
	ctx.r11.s64 = ctx.r11.s64 + 12788;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,12012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12012, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCE68"))) PPC_WEAK_FUNC(sub_831BCE68);
PPC_FUNC_IMPL(__imp__sub_831BCE68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12116
	ctx.r3.s64 = ctx.r11.s64 + 12116;
	// bl 0x82c090d0
	ctx.lr = 0x831BCE80;
	sub_82C090D0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r11,r11,12804
	ctx.r11.s64 = ctx.r11.s64 + 12804;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,12116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12116, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCEA0"))) PPC_WEAK_FUNC(sub_831BCEA0);
PPC_FUNC_IMPL(__imp__sub_831BCEA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12004
	ctx.r3.s64 = ctx.r11.s64 + 12004;
	// bl 0x82c090d0
	ctx.lr = 0x831BCEB8;
	sub_82C090D0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r11,r11,12820
	ctx.r11.s64 = ctx.r11.s64 + 12820;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// stw r11,12004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12004, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCED8"))) PPC_WEAK_FUNC(sub_831BCED8);
PPC_FUNC_IMPL(__imp__sub_831BCED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-25008
	ctx.r3.s64 = ctx.r11.s64 + -25008;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BCEE8"))) PPC_WEAK_FUNC(sub_831BCEE8);
PPC_FUNC_IMPL(__imp__sub_831BCEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12288
	ctx.r9.s64 = ctx.r11.s64 + 12288;
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

__attribute__((alias("__imp__sub_831BCF18"))) PPC_WEAK_FUNC(sub_831BCF18);
PPC_FUNC_IMPL(__imp__sub_831BCF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12272
	ctx.r9.s64 = ctx.r11.s64 + 12272;
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

__attribute__((alias("__imp__sub_831BCF48"))) PPC_WEAK_FUNC(sub_831BCF48);
PPC_FUNC_IMPL(__imp__sub_831BCF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12224
	ctx.r9.s64 = ctx.r11.s64 + 12224;
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

__attribute__((alias("__imp__sub_831BCF78"))) PPC_WEAK_FUNC(sub_831BCF78);
PPC_FUNC_IMPL(__imp__sub_831BCF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12256
	ctx.r9.s64 = ctx.r11.s64 + 12256;
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

__attribute__((alias("__imp__sub_831BCFA8"))) PPC_WEAK_FUNC(sub_831BCFA8);
PPC_FUNC_IMPL(__imp__sub_831BCFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,12240
	ctx.r10.s64 = ctx.r10.s64 + 12240;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCFC8"))) PPC_WEAK_FUNC(sub_831BCFC8);
PPC_FUNC_IMPL(__imp__sub_831BCFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,12208
	ctx.r10.s64 = ctx.r10.s64 + 12208;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BCFE8"))) PPC_WEAK_FUNC(sub_831BCFE8);
PPC_FUNC_IMPL(__imp__sub_831BCFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r4,r11,16772
	ctx.r4.s64 = ctx.r11.s64 + 16772;
	// addi r3,r10,12180
	ctx.r3.s64 = ctx.r10.s64 + 12180;
	// bl 0x82450f48
	ctx.lr = 0x831BD008;
	sub_82450F48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24992
	ctx.r3.s64 = ctx.r11.s64 + -24992;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BD014;
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

__attribute__((alias("__imp__sub_831BD028"))) PPC_WEAK_FUNC(sub_831BD028);
PPC_FUNC_IMPL(__imp__sub_831BD028) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12304
	ctx.r3.s64 = ctx.r11.s64 + 12304;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82526128
	ctx.lr = 0x831BD048;
	sub_82526128(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24968
	ctx.r3.s64 = ctx.r11.s64 + -24968;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BD054;
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

__attribute__((alias("__imp__sub_831BD068"))) PPC_WEAK_FUNC(sub_831BD068);
PPC_FUNC_IMPL(__imp__sub_831BD068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12432
	ctx.r9.s64 = ctx.r11.s64 + 12432;
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

__attribute__((alias("__imp__sub_831BD098"))) PPC_WEAK_FUNC(sub_831BD098);
PPC_FUNC_IMPL(__imp__sub_831BD098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12416
	ctx.r9.s64 = ctx.r11.s64 + 12416;
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

__attribute__((alias("__imp__sub_831BD0C8"))) PPC_WEAK_FUNC(sub_831BD0C8);
PPC_FUNC_IMPL(__imp__sub_831BD0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12368
	ctx.r9.s64 = ctx.r11.s64 + 12368;
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

__attribute__((alias("__imp__sub_831BD0F8"))) PPC_WEAK_FUNC(sub_831BD0F8);
PPC_FUNC_IMPL(__imp__sub_831BD0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12400
	ctx.r9.s64 = ctx.r11.s64 + 12400;
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

__attribute__((alias("__imp__sub_831BD128"))) PPC_WEAK_FUNC(sub_831BD128);
PPC_FUNC_IMPL(__imp__sub_831BD128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,12384
	ctx.r10.s64 = ctx.r10.s64 + 12384;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD148"))) PPC_WEAK_FUNC(sub_831BD148);
PPC_FUNC_IMPL(__imp__sub_831BD148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,12352
	ctx.r10.s64 = ctx.r10.s64 + 12352;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD168"))) PPC_WEAK_FUNC(sub_831BD168);
PPC_FUNC_IMPL(__imp__sub_831BD168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24872
	ctx.r3.s64 = ctx.r11.s64 + -24872;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BD178"))) PPC_WEAK_FUNC(sub_831BD178);
PPC_FUNC_IMPL(__imp__sub_831BD178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24880
	ctx.r3.s64 = ctx.r11.s64 + -24880;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BD188"))) PPC_WEAK_FUNC(sub_831BD188);
PPC_FUNC_IMPL(__imp__sub_831BD188) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12448
	ctx.r3.s64 = ctx.r11.s64 + 12448;
	// bl 0x824683b0
	ctx.lr = 0x831BD1A4;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24896
	ctx.r3.s64 = ctx.r11.s64 + -24896;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BD1B0;
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

__attribute__((alias("__imp__sub_831BD1C0"))) PPC_WEAK_FUNC(sub_831BD1C0);
PPC_FUNC_IMPL(__imp__sub_831BD1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24856
	ctx.r3.s64 = ctx.r11.s64 + -24856;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BD1D0"))) PPC_WEAK_FUNC(sub_831BD1D0);
PPC_FUNC_IMPL(__imp__sub_831BD1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12784
	ctx.r9.s64 = ctx.r11.s64 + 12784;
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

__attribute__((alias("__imp__sub_831BD200"))) PPC_WEAK_FUNC(sub_831BD200);
PPC_FUNC_IMPL(__imp__sub_831BD200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12768
	ctx.r9.s64 = ctx.r11.s64 + 12768;
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

__attribute__((alias("__imp__sub_831BD230"))) PPC_WEAK_FUNC(sub_831BD230);
PPC_FUNC_IMPL(__imp__sub_831BD230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12720
	ctx.r9.s64 = ctx.r11.s64 + 12720;
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

__attribute__((alias("__imp__sub_831BD260"))) PPC_WEAK_FUNC(sub_831BD260);
PPC_FUNC_IMPL(__imp__sub_831BD260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12752
	ctx.r9.s64 = ctx.r11.s64 + 12752;
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

__attribute__((alias("__imp__sub_831BD290"))) PPC_WEAK_FUNC(sub_831BD290);
PPC_FUNC_IMPL(__imp__sub_831BD290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,12736
	ctx.r10.s64 = ctx.r10.s64 + 12736;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD2B0"))) PPC_WEAK_FUNC(sub_831BD2B0);
PPC_FUNC_IMPL(__imp__sub_831BD2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
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

__attribute__((alias("__imp__sub_831BD2D0"))) PPC_WEAK_FUNC(sub_831BD2D0);
PPC_FUNC_IMPL(__imp__sub_831BD2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12960
	ctx.r9.s64 = ctx.r11.s64 + 12960;
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

__attribute__((alias("__imp__sub_831BD300"))) PPC_WEAK_FUNC(sub_831BD300);
PPC_FUNC_IMPL(__imp__sub_831BD300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12928
	ctx.r9.s64 = ctx.r11.s64 + 12928;
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

__attribute__((alias("__imp__sub_831BD330"))) PPC_WEAK_FUNC(sub_831BD330);
PPC_FUNC_IMPL(__imp__sub_831BD330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12832
	ctx.r9.s64 = ctx.r11.s64 + 12832;
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

__attribute__((alias("__imp__sub_831BD360"))) PPC_WEAK_FUNC(sub_831BD360);
PPC_FUNC_IMPL(__imp__sub_831BD360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,12912
	ctx.r9.s64 = ctx.r11.s64 + 12912;
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

__attribute__((alias("__imp__sub_831BD390"))) PPC_WEAK_FUNC(sub_831BD390);
PPC_FUNC_IMPL(__imp__sub_831BD390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,12896
	ctx.r10.s64 = ctx.r10.s64 + 12896;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD3B0"))) PPC_WEAK_FUNC(sub_831BD3B0);
PPC_FUNC_IMPL(__imp__sub_831BD3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,12816
	ctx.r10.s64 = ctx.r10.s64 + 12816;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD3D0"))) PPC_WEAK_FUNC(sub_831BD3D0);
PPC_FUNC_IMPL(__imp__sub_831BD3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24800
	ctx.r3.s64 = ctx.r11.s64 + -24800;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BD3E0"))) PPC_WEAK_FUNC(sub_831BD3E0);
PPC_FUNC_IMPL(__imp__sub_831BD3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,12944
	ctx.r10.s64 = ctx.r10.s64 + 12944;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD400"))) PPC_WEAK_FUNC(sub_831BD400);
PPC_FUNC_IMPL(__imp__sub_831BD400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24808
	ctx.r3.s64 = ctx.r11.s64 + -24808;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BD410"))) PPC_WEAK_FUNC(sub_831BD410);
PPC_FUNC_IMPL(__imp__sub_831BD410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24768
	ctx.r3.s64 = ctx.r11.s64 + -24768;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BD420"))) PPC_WEAK_FUNC(sub_831BD420);
PPC_FUNC_IMPL(__imp__sub_831BD420) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12848
	ctx.r3.s64 = ctx.r11.s64 + 12848;
	// bl 0x824683b0
	ctx.lr = 0x831BD43C;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24824
	ctx.r3.s64 = ctx.r11.s64 + -24824;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BD448;
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

__attribute__((alias("__imp__sub_831BD458"))) PPC_WEAK_FUNC(sub_831BD458);
PPC_FUNC_IMPL(__imp__sub_831BD458) {
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
	// addi r31,r11,12980
	ctx.r31.s64 = ctx.r11.s64 + 12980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BD47C;
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
	// addi r3,r10,-24784
	ctx.r3.s64 = ctx.r10.s64 + -24784;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BD4A4;
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

__attribute__((alias("__imp__sub_831BD4B8"))) PPC_WEAK_FUNC(sub_831BD4B8);
PPC_FUNC_IMPL(__imp__sub_831BD4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24640
	ctx.r3.s64 = ctx.r11.s64 + -24640;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BD4C8"))) PPC_WEAK_FUNC(sub_831BD4C8);
PPC_FUNC_IMPL(__imp__sub_831BD4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,13168
	ctx.r9.s64 = ctx.r11.s64 + 13168;
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

__attribute__((alias("__imp__sub_831BD4F8"))) PPC_WEAK_FUNC(sub_831BD4F8);
PPC_FUNC_IMPL(__imp__sub_831BD4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,13136
	ctx.r9.s64 = ctx.r11.s64 + 13136;
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

__attribute__((alias("__imp__sub_831BD528"))) PPC_WEAK_FUNC(sub_831BD528);
PPC_FUNC_IMPL(__imp__sub_831BD528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,13088
	ctx.r9.s64 = ctx.r11.s64 + 13088;
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

__attribute__((alias("__imp__sub_831BD558"))) PPC_WEAK_FUNC(sub_831BD558);
PPC_FUNC_IMPL(__imp__sub_831BD558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,13120
	ctx.r9.s64 = ctx.r11.s64 + 13120;
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

__attribute__((alias("__imp__sub_831BD588"))) PPC_WEAK_FUNC(sub_831BD588);
PPC_FUNC_IMPL(__imp__sub_831BD588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,13104
	ctx.r10.s64 = ctx.r10.s64 + 13104;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD5A8"))) PPC_WEAK_FUNC(sub_831BD5A8);
PPC_FUNC_IMPL(__imp__sub_831BD5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,13072
	ctx.r10.s64 = ctx.r10.s64 + 13072;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD5C8"))) PPC_WEAK_FUNC(sub_831BD5C8);
PPC_FUNC_IMPL(__imp__sub_831BD5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,13152
	ctx.r10.s64 = ctx.r10.s64 + 13152;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831BD5E8"))) PPC_WEAK_FUNC(sub_831BD5E8);
PPC_FUNC_IMPL(__imp__sub_831BD5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,13240
	ctx.r3.s64 = ctx.r11.s64 + 13240;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BD5F8"))) PPC_WEAK_FUNC(sub_831BD5F8);
PPC_FUNC_IMPL(__imp__sub_831BD5F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13044
	ctx.r3.s64 = ctx.r11.s64 + 13044;
	// bl 0x824683b0
	ctx.lr = 0x831BD614;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24680
	ctx.r3.s64 = ctx.r11.s64 + -24680;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BD620;
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

__attribute__((alias("__imp__sub_831BD630"))) PPC_WEAK_FUNC(sub_831BD630);
PPC_FUNC_IMPL(__imp__sub_831BD630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24648
	ctx.r3.s64 = ctx.r11.s64 + -24648;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BD640"))) PPC_WEAK_FUNC(sub_831BD640);
PPC_FUNC_IMPL(__imp__sub_831BD640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24608
	ctx.r3.s64 = ctx.r11.s64 + -24608;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831BD650"))) PPC_WEAK_FUNC(sub_831BD650);
PPC_FUNC_IMPL(__imp__sub_831BD650) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13204
	ctx.r3.s64 = ctx.r11.s64 + 13204;
	// bl 0x824683b0
	ctx.lr = 0x831BD66C;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-24664
	ctx.r3.s64 = ctx.r11.s64 + -24664;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BD678;
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

__attribute__((alias("__imp__sub_831BD688"))) PPC_WEAK_FUNC(sub_831BD688);
PPC_FUNC_IMPL(__imp__sub_831BD688) {
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
	// addi r31,r11,13316
	ctx.r31.s64 = ctx.r11.s64 + 13316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831BD6AC;
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
	// addi r3,r10,-24624
	ctx.r3.s64 = ctx.r10.s64 + -24624;
	// bl 0x82a7e6b0
	ctx.lr = 0x831BD6D4;
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

__attribute__((alias("__imp__sub_831BD6E8"))) PPC_WEAK_FUNC(sub_831BD6E8);
PPC_FUNC_IMPL(__imp__sub_831BD6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,13472
	ctx.r9.s64 = ctx.r11.s64 + 13472;
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

