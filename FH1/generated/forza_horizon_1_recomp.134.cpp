#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_83185288"))) PPC_WEAK_FUNC(sub_83185288);
PPC_FUNC_IMPL(__imp__sub_83185288) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,-784
	ctx.r4.s64 = ctx.r11.s64 + -784;
	// addi r3,r10,-9080
	ctx.r3.s64 = ctx.r10.s64 + -9080;
	// bl 0x829b11e8
	ctx.lr = 0x831852A8;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,29016
	ctx.r3.s64 = ctx.r11.s64 + 29016;
	// bl 0x82a7e6b0
	ctx.lr = 0x831852B4;
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

__attribute__((alias("__imp__sub_831852C8"))) PPC_WEAK_FUNC(sub_831852C8);
PPC_FUNC_IMPL(__imp__sub_831852C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,-1168
	ctx.r4.s64 = ctx.r11.s64 + -1168;
	// addi r3,r10,-13648
	ctx.r3.s64 = ctx.r10.s64 + -13648;
	// bl 0x829b11e8
	ctx.lr = 0x831852E8;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,29088
	ctx.r3.s64 = ctx.r11.s64 + 29088;
	// bl 0x82a7e6b0
	ctx.lr = 0x831852F4;
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

__attribute__((alias("__imp__sub_83185308"))) PPC_WEAK_FUNC(sub_83185308);
PPC_FUNC_IMPL(__imp__sub_83185308) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5532
	ctx.r4.s64 = ctx.r11.s64 + 5532;
	// addi r3,r10,-8884
	ctx.r3.s64 = ctx.r10.s64 + -8884;
	// bl 0x829b11e8
	ctx.lr = 0x83185328;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,29160
	ctx.r3.s64 = ctx.r11.s64 + 29160;
	// bl 0x82a7e6b0
	ctx.lr = 0x83185334;
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

__attribute__((alias("__imp__sub_83185348"))) PPC_WEAK_FUNC(sub_83185348);
PPC_FUNC_IMPL(__imp__sub_83185348) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5552
	ctx.r4.s64 = ctx.r11.s64 + 5552;
	// addi r3,r10,-8644
	ctx.r3.s64 = ctx.r10.s64 + -8644;
	// bl 0x829b11e8
	ctx.lr = 0x83185368;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,29232
	ctx.r3.s64 = ctx.r11.s64 + 29232;
	// bl 0x82a7e6b0
	ctx.lr = 0x83185374;
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

__attribute__((alias("__imp__sub_83185388"))) PPC_WEAK_FUNC(sub_83185388);
PPC_FUNC_IMPL(__imp__sub_83185388) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,-288
	ctx.r4.s64 = ctx.r11.s64 + -288;
	// addi r3,r10,-12144
	ctx.r3.s64 = ctx.r10.s64 + -12144;
	// bl 0x829b11e8
	ctx.lr = 0x831853A8;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,29304
	ctx.r3.s64 = ctx.r11.s64 + 29304;
	// bl 0x82a7e6b0
	ctx.lr = 0x831853B4;
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

__attribute__((alias("__imp__sub_831853C8"))) PPC_WEAK_FUNC(sub_831853C8);
PPC_FUNC_IMPL(__imp__sub_831853C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5584
	ctx.r4.s64 = ctx.r11.s64 + 5584;
	// addi r3,r10,-13200
	ctx.r3.s64 = ctx.r10.s64 + -13200;
	// bl 0x829b11e8
	ctx.lr = 0x831853E8;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,29376
	ctx.r3.s64 = ctx.r11.s64 + 29376;
	// bl 0x82a7e6b0
	ctx.lr = 0x831853F4;
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

__attribute__((alias("__imp__sub_83185408"))) PPC_WEAK_FUNC(sub_83185408);
PPC_FUNC_IMPL(__imp__sub_83185408) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5612
	ctx.r4.s64 = ctx.r11.s64 + 5612;
	// addi r3,r10,-9440
	ctx.r3.s64 = ctx.r10.s64 + -9440;
	// bl 0x829b11e8
	ctx.lr = 0x83185428;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,29448
	ctx.r3.s64 = ctx.r11.s64 + 29448;
	// bl 0x82a7e6b0
	ctx.lr = 0x83185434;
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

__attribute__((alias("__imp__sub_83185448"))) PPC_WEAK_FUNC(sub_83185448);
PPC_FUNC_IMPL(__imp__sub_83185448) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5632
	ctx.r4.s64 = ctx.r11.s64 + 5632;
	// addi r3,r10,-12384
	ctx.r3.s64 = ctx.r10.s64 + -12384;
	// bl 0x829b11e8
	ctx.lr = 0x83185468;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,29520
	ctx.r3.s64 = ctx.r11.s64 + 29520;
	// bl 0x82a7e6b0
	ctx.lr = 0x83185474;
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

__attribute__((alias("__imp__sub_83185488"))) PPC_WEAK_FUNC(sub_83185488);
PPC_FUNC_IMPL(__imp__sub_83185488) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5656
	ctx.r4.s64 = ctx.r11.s64 + 5656;
	// addi r3,r10,-13080
	ctx.r3.s64 = ctx.r10.s64 + -13080;
	// bl 0x829b11e8
	ctx.lr = 0x831854A8;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,29592
	ctx.r3.s64 = ctx.r11.s64 + 29592;
	// bl 0x82a7e6b0
	ctx.lr = 0x831854B4;
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

__attribute__((alias("__imp__sub_831854C8"))) PPC_WEAK_FUNC(sub_831854C8);
PPC_FUNC_IMPL(__imp__sub_831854C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5680
	ctx.r4.s64 = ctx.r11.s64 + 5680;
	// addi r3,r10,-12264
	ctx.r3.s64 = ctx.r10.s64 + -12264;
	// bl 0x829b11e8
	ctx.lr = 0x831854E8;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,29664
	ctx.r3.s64 = ctx.r11.s64 + 29664;
	// bl 0x82a7e6b0
	ctx.lr = 0x831854F4;
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

__attribute__((alias("__imp__sub_83185508"))) PPC_WEAK_FUNC(sub_83185508);
PPC_FUNC_IMPL(__imp__sub_83185508) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5696
	ctx.r4.s64 = ctx.r11.s64 + 5696;
	// addi r3,r10,-11080
	ctx.r3.s64 = ctx.r10.s64 + -11080;
	// bl 0x829b11e8
	ctx.lr = 0x83185528;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,29736
	ctx.r3.s64 = ctx.r11.s64 + 29736;
	// bl 0x82a7e6b0
	ctx.lr = 0x83185534;
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

__attribute__((alias("__imp__sub_83185548"))) PPC_WEAK_FUNC(sub_83185548);
PPC_FUNC_IMPL(__imp__sub_83185548) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5732
	ctx.r4.s64 = ctx.r11.s64 + 5732;
	// addi r3,r10,-12848
	ctx.r3.s64 = ctx.r10.s64 + -12848;
	// bl 0x829b11e8
	ctx.lr = 0x83185568;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,29808
	ctx.r3.s64 = ctx.r11.s64 + 29808;
	// bl 0x82a7e6b0
	ctx.lr = 0x83185574;
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

__attribute__((alias("__imp__sub_83185588"))) PPC_WEAK_FUNC(sub_83185588);
PPC_FUNC_IMPL(__imp__sub_83185588) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,-308
	ctx.r4.s64 = ctx.r11.s64 + -308;
	// addi r3,r10,-11200
	ctx.r3.s64 = ctx.r10.s64 + -11200;
	// bl 0x829b11e8
	ctx.lr = 0x831855A8;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,29880
	ctx.r3.s64 = ctx.r11.s64 + 29880;
	// bl 0x82a7e6b0
	ctx.lr = 0x831855B4;
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

__attribute__((alias("__imp__sub_831855C8"))) PPC_WEAK_FUNC(sub_831855C8);
PPC_FUNC_IMPL(__imp__sub_831855C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,-976
	ctx.r4.s64 = ctx.r11.s64 + -976;
	// addi r3,r10,-8692
	ctx.r3.s64 = ctx.r10.s64 + -8692;
	// bl 0x829b11e8
	ctx.lr = 0x831855E8;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,29952
	ctx.r3.s64 = ctx.r11.s64 + 29952;
	// bl 0x82a7e6b0
	ctx.lr = 0x831855F4;
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

__attribute__((alias("__imp__sub_83185608"))) PPC_WEAK_FUNC(sub_83185608);
PPC_FUNC_IMPL(__imp__sub_83185608) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,-1032
	ctx.r4.s64 = ctx.r11.s64 + -1032;
	// addi r3,r10,-12288
	ctx.r3.s64 = ctx.r10.s64 + -12288;
	// bl 0x829b11e8
	ctx.lr = 0x83185628;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,30024
	ctx.r3.s64 = ctx.r11.s64 + 30024;
	// bl 0x82a7e6b0
	ctx.lr = 0x83185634;
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

__attribute__((alias("__imp__sub_83185648"))) PPC_WEAK_FUNC(sub_83185648);
PPC_FUNC_IMPL(__imp__sub_83185648) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,-1056
	ctx.r4.s64 = ctx.r11.s64 + -1056;
	// addi r3,r10,-11296
	ctx.r3.s64 = ctx.r10.s64 + -11296;
	// bl 0x829b11e8
	ctx.lr = 0x83185668;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,30096
	ctx.r3.s64 = ctx.r11.s64 + 30096;
	// bl 0x82a7e6b0
	ctx.lr = 0x83185674;
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

__attribute__((alias("__imp__sub_83185688"))) PPC_WEAK_FUNC(sub_83185688);
PPC_FUNC_IMPL(__imp__sub_83185688) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5756
	ctx.r4.s64 = ctx.r11.s64 + 5756;
	// addi r3,r10,-11804
	ctx.r3.s64 = ctx.r10.s64 + -11804;
	// bl 0x829b11e8
	ctx.lr = 0x831856A8;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,30168
	ctx.r3.s64 = ctx.r11.s64 + 30168;
	// bl 0x82a7e6b0
	ctx.lr = 0x831856B4;
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

__attribute__((alias("__imp__sub_831856C8"))) PPC_WEAK_FUNC(sub_831856C8);
PPC_FUNC_IMPL(__imp__sub_831856C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5776
	ctx.r4.s64 = ctx.r11.s64 + 5776;
	// addi r3,r10,-7952
	ctx.r3.s64 = ctx.r10.s64 + -7952;
	// bl 0x829b11e8
	ctx.lr = 0x831856E8;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,30240
	ctx.r3.s64 = ctx.r11.s64 + 30240;
	// bl 0x82a7e6b0
	ctx.lr = 0x831856F4;
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

__attribute__((alias("__imp__sub_83185708"))) PPC_WEAK_FUNC(sub_83185708);
PPC_FUNC_IMPL(__imp__sub_83185708) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5804
	ctx.r4.s64 = ctx.r11.s64 + 5804;
	// addi r3,r10,-8428
	ctx.r3.s64 = ctx.r10.s64 + -8428;
	// bl 0x829b11e8
	ctx.lr = 0x83185728;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,30312
	ctx.r3.s64 = ctx.r11.s64 + 30312;
	// bl 0x82a7e6b0
	ctx.lr = 0x83185734;
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

__attribute__((alias("__imp__sub_83185748"))) PPC_WEAK_FUNC(sub_83185748);
PPC_FUNC_IMPL(__imp__sub_83185748) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5828
	ctx.r4.s64 = ctx.r11.s64 + 5828;
	// addi r3,r10,-9800
	ctx.r3.s64 = ctx.r10.s64 + -9800;
	// bl 0x829b11e8
	ctx.lr = 0x83185768;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,30384
	ctx.r3.s64 = ctx.r11.s64 + 30384;
	// bl 0x82a7e6b0
	ctx.lr = 0x83185774;
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

__attribute__((alias("__imp__sub_83185788"))) PPC_WEAK_FUNC(sub_83185788);
PPC_FUNC_IMPL(__imp__sub_83185788) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5852
	ctx.r4.s64 = ctx.r11.s64 + 5852;
	// addi r3,r10,-11924
	ctx.r3.s64 = ctx.r10.s64 + -11924;
	// bl 0x829b11e8
	ctx.lr = 0x831857A8;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,30456
	ctx.r3.s64 = ctx.r11.s64 + 30456;
	// bl 0x82a7e6b0
	ctx.lr = 0x831857B4;
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

__attribute__((alias("__imp__sub_831857C8"))) PPC_WEAK_FUNC(sub_831857C8);
PPC_FUNC_IMPL(__imp__sub_831857C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5876
	ctx.r4.s64 = ctx.r11.s64 + 5876;
	// addi r3,r10,-11732
	ctx.r3.s64 = ctx.r10.s64 + -11732;
	// bl 0x829b11e8
	ctx.lr = 0x831857E8;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,30528
	ctx.r3.s64 = ctx.r11.s64 + 30528;
	// bl 0x82a7e6b0
	ctx.lr = 0x831857F4;
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

__attribute__((alias("__imp__sub_83185808"))) PPC_WEAK_FUNC(sub_83185808);
PPC_FUNC_IMPL(__imp__sub_83185808) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5900
	ctx.r4.s64 = ctx.r11.s64 + 5900;
	// addi r3,r10,-13784
	ctx.r3.s64 = ctx.r10.s64 + -13784;
	// bl 0x829b11e8
	ctx.lr = 0x83185828;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,30600
	ctx.r3.s64 = ctx.r11.s64 + 30600;
	// bl 0x82a7e6b0
	ctx.lr = 0x83185834;
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

__attribute__((alias("__imp__sub_83185848"))) PPC_WEAK_FUNC(sub_83185848);
PPC_FUNC_IMPL(__imp__sub_83185848) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,-1072
	ctx.r4.s64 = ctx.r11.s64 + -1072;
	// addi r3,r10,-9944
	ctx.r3.s64 = ctx.r10.s64 + -9944;
	// bl 0x829b11e8
	ctx.lr = 0x83185868;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,30672
	ctx.r3.s64 = ctx.r11.s64 + 30672;
	// bl 0x82a7e6b0
	ctx.lr = 0x83185874;
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

__attribute__((alias("__imp__sub_83185888"))) PPC_WEAK_FUNC(sub_83185888);
PPC_FUNC_IMPL(__imp__sub_83185888) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5924
	ctx.r4.s64 = ctx.r11.s64 + 5924;
	// addi r3,r10,-12480
	ctx.r3.s64 = ctx.r10.s64 + -12480;
	// bl 0x829b11e8
	ctx.lr = 0x831858A8;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,30744
	ctx.r3.s64 = ctx.r11.s64 + 30744;
	// bl 0x82a7e6b0
	ctx.lr = 0x831858B4;
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

__attribute__((alias("__imp__sub_831858C8"))) PPC_WEAK_FUNC(sub_831858C8);
PPC_FUNC_IMPL(__imp__sub_831858C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,5952
	ctx.r4.s64 = ctx.r11.s64 + 5952;
	// addi r3,r10,-8048
	ctx.r3.s64 = ctx.r10.s64 + -8048;
	// bl 0x829b11e8
	ctx.lr = 0x831858E8;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,30816
	ctx.r3.s64 = ctx.r11.s64 + 30816;
	// bl 0x82a7e6b0
	ctx.lr = 0x831858F4;
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

__attribute__((alias("__imp__sub_83185908"))) PPC_WEAK_FUNC(sub_83185908);
PPC_FUNC_IMPL(__imp__sub_83185908) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,-1096
	ctx.r4.s64 = ctx.r11.s64 + -1096;
	// addi r3,r10,-9608
	ctx.r3.s64 = ctx.r10.s64 + -9608;
	// bl 0x829b11e8
	ctx.lr = 0x83185928;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,30888
	ctx.r3.s64 = ctx.r11.s64 + 30888;
	// bl 0x82a7e6b0
	ctx.lr = 0x83185934;
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

__attribute__((alias("__imp__sub_83185948"))) PPC_WEAK_FUNC(sub_83185948);
PPC_FUNC_IMPL(__imp__sub_83185948) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r4,r11,-1124
	ctx.r4.s64 = ctx.r11.s64 + -1124;
	// addi r3,r10,-10896
	ctx.r3.s64 = ctx.r10.s64 + -10896;
	// bl 0x829b11e8
	ctx.lr = 0x83185968;
	sub_829B11E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,30960
	ctx.r3.s64 = ctx.r11.s64 + 30960;
	// bl 0x82a7e6b0
	ctx.lr = 0x83185974;
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

__attribute__((alias("__imp__sub_83185988"))) PPC_WEAK_FUNC(sub_83185988);
PPC_FUNC_IMPL(__imp__sub_83185988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-8112
	ctx.r3.s64 = ctx.r11.s64 + -8112;
	// bl 0x829afad8
	ctx.lr = 0x831859A0;
	sub_829AFAD8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,12800
	ctx.r3.s64 = ctx.r11.s64 + 12800;
	// bl 0x82a7e6b0
	ctx.lr = 0x831859AC;
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

__attribute__((alias("__imp__sub_831859C0"))) PPC_WEAK_FUNC(sub_831859C0);
PPC_FUNC_IMPL(__imp__sub_831859C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,31056
	ctx.r3.s64 = ctx.r11.s64 + 31056;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831859D0"))) PPC_WEAK_FUNC(sub_831859D0);
PPC_FUNC_IMPL(__imp__sub_831859D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-7392
	ctx.r9.s64 = ctx.r11.s64 + -7392;
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

__attribute__((alias("__imp__sub_83185A00"))) PPC_WEAK_FUNC(sub_83185A00);
PPC_FUNC_IMPL(__imp__sub_83185A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-7424
	ctx.r9.s64 = ctx.r11.s64 + -7424;
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

__attribute__((alias("__imp__sub_83185A30"))) PPC_WEAK_FUNC(sub_83185A30);
PPC_FUNC_IMPL(__imp__sub_83185A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-7472
	ctx.r9.s64 = ctx.r11.s64 + -7472;
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

__attribute__((alias("__imp__sub_83185A60"))) PPC_WEAK_FUNC(sub_83185A60);
PPC_FUNC_IMPL(__imp__sub_83185A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-7440
	ctx.r9.s64 = ctx.r11.s64 + -7440;
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

__attribute__((alias("__imp__sub_83185A90"))) PPC_WEAK_FUNC(sub_83185A90);
PPC_FUNC_IMPL(__imp__sub_83185A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-7456
	ctx.r10.s64 = ctx.r10.s64 + -7456;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185AB0"))) PPC_WEAK_FUNC(sub_83185AB0);
PPC_FUNC_IMPL(__imp__sub_83185AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-7488
	ctx.r10.s64 = ctx.r10.s64 + -7488;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185AD0"))) PPC_WEAK_FUNC(sub_83185AD0);
PPC_FUNC_IMPL(__imp__sub_83185AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-7408
	ctx.r10.s64 = ctx.r10.s64 + -7408;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185AF0"))) PPC_WEAK_FUNC(sub_83185AF0);
PPC_FUNC_IMPL(__imp__sub_83185AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-7360
	ctx.r3.s64 = ctx.r11.s64 + -7360;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83185B00"))) PPC_WEAK_FUNC(sub_83185B00);
PPC_FUNC_IMPL(__imp__sub_83185B00) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r31,-7376
	ctx.r30.s64 = ctx.r31.s64 + -7376;
	// addi r4,r11,6168
	ctx.r4.s64 = ctx.r11.s64 + 6168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x83185B2C;
	sub_82C07410(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-208
	ctx.r11.s64 = -13631488;
	// addi r10,r10,-28432
	ctx.r10.s64 = ctx.r10.s64 + -28432;
	// ori r11,r11,12336
	ctx.r11.u64 = ctx.r11.u64 | 12336;
	// stw r10,-7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7376, ctx.r10.u32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r3,r10,31032
	ctx.r3.s64 = ctx.r10.s64 + 31032;
	// bl 0x82a7e6b0
	ctx.lr = 0x83185B50;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185B68"))) PPC_WEAK_FUNC(sub_83185B68);
PPC_FUNC_IMPL(__imp__sub_83185B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-528
	ctx.r9.s64 = ctx.r11.s64 + -528;
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

__attribute__((alias("__imp__sub_83185B98"))) PPC_WEAK_FUNC(sub_83185B98);
PPC_FUNC_IMPL(__imp__sub_83185B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-3872
	ctx.r9.s64 = ctx.r11.s64 + -3872;
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

__attribute__((alias("__imp__sub_83185BC8"))) PPC_WEAK_FUNC(sub_83185BC8);
PPC_FUNC_IMPL(__imp__sub_83185BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-6624
	ctx.r9.s64 = ctx.r11.s64 + -6624;
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

__attribute__((alias("__imp__sub_83185BF8"))) PPC_WEAK_FUNC(sub_83185BF8);
PPC_FUNC_IMPL(__imp__sub_83185BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-4000
	ctx.r9.s64 = ctx.r11.s64 + -4000;
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

__attribute__((alias("__imp__sub_83185C28"))) PPC_WEAK_FUNC(sub_83185C28);
PPC_FUNC_IMPL(__imp__sub_83185C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-4512
	ctx.r10.s64 = ctx.r10.s64 + -4512;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185C48"))) PPC_WEAK_FUNC(sub_83185C48);
PPC_FUNC_IMPL(__imp__sub_83185C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-6816
	ctx.r10.s64 = ctx.r10.s64 + -6816;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185C68"))) PPC_WEAK_FUNC(sub_83185C68);
PPC_FUNC_IMPL(__imp__sub_83185C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,31072
	ctx.r3.s64 = ctx.r11.s64 + 31072;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83185C78"))) PPC_WEAK_FUNC(sub_83185C78);
PPC_FUNC_IMPL(__imp__sub_83185C78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6192
	ctx.r3.s64 = ctx.r11.s64 + 6192;
	// bl 0x82ca7538
	ctx.lr = 0x83185C90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185CA8"))) PPC_WEAK_FUNC(sub_83185CA8);
PPC_FUNC_IMPL(__imp__sub_83185CA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6212
	ctx.r3.s64 = ctx.r11.s64 + 6212;
	// bl 0x82ca7538
	ctx.lr = 0x83185CC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185CD8"))) PPC_WEAK_FUNC(sub_83185CD8);
PPC_FUNC_IMPL(__imp__sub_83185CD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6232
	ctx.r3.s64 = ctx.r11.s64 + 6232;
	// bl 0x82ca7538
	ctx.lr = 0x83185CF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185D08"))) PPC_WEAK_FUNC(sub_83185D08);
PPC_FUNC_IMPL(__imp__sub_83185D08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6256
	ctx.r3.s64 = ctx.r11.s64 + 6256;
	// bl 0x82ca7538
	ctx.lr = 0x83185D20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185D38"))) PPC_WEAK_FUNC(sub_83185D38);
PPC_FUNC_IMPL(__imp__sub_83185D38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6280
	ctx.r3.s64 = ctx.r11.s64 + 6280;
	// bl 0x82ca7538
	ctx.lr = 0x83185D50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185D68"))) PPC_WEAK_FUNC(sub_83185D68);
PPC_FUNC_IMPL(__imp__sub_83185D68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6304
	ctx.r3.s64 = ctx.r11.s64 + 6304;
	// bl 0x82ca7538
	ctx.lr = 0x83185D80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 500, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185D98"))) PPC_WEAK_FUNC(sub_83185D98);
PPC_FUNC_IMPL(__imp__sub_83185D98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6324
	ctx.r3.s64 = ctx.r11.s64 + 6324;
	// bl 0x82ca7538
	ctx.lr = 0x83185DB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185DC8"))) PPC_WEAK_FUNC(sub_83185DC8);
PPC_FUNC_IMPL(__imp__sub_83185DC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6348
	ctx.r3.s64 = ctx.r11.s64 + 6348;
	// bl 0x82ca7538
	ctx.lr = 0x83185DE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185DF8"))) PPC_WEAK_FUNC(sub_83185DF8);
PPC_FUNC_IMPL(__imp__sub_83185DF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6368
	ctx.r3.s64 = ctx.r11.s64 + 6368;
	// bl 0x82ca7538
	ctx.lr = 0x83185E10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185E28"))) PPC_WEAK_FUNC(sub_83185E28);
PPC_FUNC_IMPL(__imp__sub_83185E28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6392
	ctx.r3.s64 = ctx.r11.s64 + 6392;
	// bl 0x82ca7538
	ctx.lr = 0x83185E40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185E58"))) PPC_WEAK_FUNC(sub_83185E58);
PPC_FUNC_IMPL(__imp__sub_83185E58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6412
	ctx.r3.s64 = ctx.r11.s64 + 6412;
	// bl 0x82ca7538
	ctx.lr = 0x83185E70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185E88"))) PPC_WEAK_FUNC(sub_83185E88);
PPC_FUNC_IMPL(__imp__sub_83185E88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6432
	ctx.r3.s64 = ctx.r11.s64 + 6432;
	// bl 0x82ca7538
	ctx.lr = 0x83185EA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185EB8"))) PPC_WEAK_FUNC(sub_83185EB8);
PPC_FUNC_IMPL(__imp__sub_83185EB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6452
	ctx.r3.s64 = ctx.r11.s64 + 6452;
	// bl 0x82ca7538
	ctx.lr = 0x83185ED0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185EE8"))) PPC_WEAK_FUNC(sub_83185EE8);
PPC_FUNC_IMPL(__imp__sub_83185EE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6472
	ctx.r3.s64 = ctx.r11.s64 + 6472;
	// bl 0x82ca7538
	ctx.lr = 0x83185F00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2700, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185F18"))) PPC_WEAK_FUNC(sub_83185F18);
PPC_FUNC_IMPL(__imp__sub_83185F18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6492
	ctx.r3.s64 = ctx.r11.s64 + 6492;
	// bl 0x82ca7538
	ctx.lr = 0x83185F30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185F48"))) PPC_WEAK_FUNC(sub_83185F48);
PPC_FUNC_IMPL(__imp__sub_83185F48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6520
	ctx.r3.s64 = ctx.r11.s64 + 6520;
	// bl 0x82ca7538
	ctx.lr = 0x83185F60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185F78"))) PPC_WEAK_FUNC(sub_83185F78);
PPC_FUNC_IMPL(__imp__sub_83185F78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6544
	ctx.r3.s64 = ctx.r11.s64 + 6544;
	// bl 0x82ca7538
	ctx.lr = 0x83185F90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4880(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185FA8"))) PPC_WEAK_FUNC(sub_83185FA8);
PPC_FUNC_IMPL(__imp__sub_83185FA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6564
	ctx.r3.s64 = ctx.r11.s64 + 6564;
	// bl 0x82ca7538
	ctx.lr = 0x83185FC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83185FD8"))) PPC_WEAK_FUNC(sub_83185FD8);
PPC_FUNC_IMPL(__imp__sub_83185FD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6584
	ctx.r3.s64 = ctx.r11.s64 + 6584;
	// bl 0x82ca7538
	ctx.lr = 0x83185FF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7104(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186008"))) PPC_WEAK_FUNC(sub_83186008);
PPC_FUNC_IMPL(__imp__sub_83186008) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6612
	ctx.r3.s64 = ctx.r11.s64 + 6612;
	// bl 0x82ca7538
	ctx.lr = 0x83186020;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1308(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186038"))) PPC_WEAK_FUNC(sub_83186038);
PPC_FUNC_IMPL(__imp__sub_83186038) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6632
	ctx.r3.s64 = ctx.r11.s64 + 6632;
	// bl 0x82ca7538
	ctx.lr = 0x83186050;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1300(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186068"))) PPC_WEAK_FUNC(sub_83186068);
PPC_FUNC_IMPL(__imp__sub_83186068) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6644
	ctx.r3.s64 = ctx.r11.s64 + 6644;
	// bl 0x82ca7538
	ctx.lr = 0x83186080;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186098"))) PPC_WEAK_FUNC(sub_83186098);
PPC_FUNC_IMPL(__imp__sub_83186098) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6660
	ctx.r3.s64 = ctx.r11.s64 + 6660;
	// bl 0x82ca7538
	ctx.lr = 0x831860B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831860C8"))) PPC_WEAK_FUNC(sub_831860C8);
PPC_FUNC_IMPL(__imp__sub_831860C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6672
	ctx.r3.s64 = ctx.r11.s64 + 6672;
	// bl 0x82ca7538
	ctx.lr = 0x831860E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1312(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831860F8"))) PPC_WEAK_FUNC(sub_831860F8);
PPC_FUNC_IMPL(__imp__sub_831860F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6688
	ctx.r3.s64 = ctx.r11.s64 + 6688;
	// bl 0x82ca7538
	ctx.lr = 0x83186110;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1304(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186128"))) PPC_WEAK_FUNC(sub_83186128);
PPC_FUNC_IMPL(__imp__sub_83186128) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6704
	ctx.r3.s64 = ctx.r11.s64 + 6704;
	// bl 0x82ca7538
	ctx.lr = 0x83186140;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186158"))) PPC_WEAK_FUNC(sub_83186158);
PPC_FUNC_IMPL(__imp__sub_83186158) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6720
	ctx.r3.s64 = ctx.r11.s64 + 6720;
	// bl 0x82ca7538
	ctx.lr = 0x83186170;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3844(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3844, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186188"))) PPC_WEAK_FUNC(sub_83186188);
PPC_FUNC_IMPL(__imp__sub_83186188) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6752
	ctx.r3.s64 = ctx.r11.s64 + 6752;
	// bl 0x82ca7538
	ctx.lr = 0x831861A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831861B8"))) PPC_WEAK_FUNC(sub_831861B8);
PPC_FUNC_IMPL(__imp__sub_831861B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6784
	ctx.r3.s64 = ctx.r11.s64 + 6784;
	// bl 0x82ca7538
	ctx.lr = 0x831861D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831861E8"))) PPC_WEAK_FUNC(sub_831861E8);
PPC_FUNC_IMPL(__imp__sub_831861E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6812
	ctx.r3.s64 = ctx.r11.s64 + 6812;
	// bl 0x82ca7538
	ctx.lr = 0x83186200;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186218"))) PPC_WEAK_FUNC(sub_83186218);
PPC_FUNC_IMPL(__imp__sub_83186218) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6844
	ctx.r3.s64 = ctx.r11.s64 + 6844;
	// bl 0x82ca7538
	ctx.lr = 0x83186230;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3808, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186248"))) PPC_WEAK_FUNC(sub_83186248);
PPC_FUNC_IMPL(__imp__sub_83186248) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6872
	ctx.r3.s64 = ctx.r11.s64 + 6872;
	// bl 0x82ca7538
	ctx.lr = 0x83186260;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3864, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186278"))) PPC_WEAK_FUNC(sub_83186278);
PPC_FUNC_IMPL(__imp__sub_83186278) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6888
	ctx.r3.s64 = ctx.r11.s64 + 6888;
	// bl 0x82ca7538
	ctx.lr = 0x83186290;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831862A8"))) PPC_WEAK_FUNC(sub_831862A8);
PPC_FUNC_IMPL(__imp__sub_831862A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6904
	ctx.r3.s64 = ctx.r11.s64 + 6904;
	// bl 0x82ca7538
	ctx.lr = 0x831862C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3816, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831862D8"))) PPC_WEAK_FUNC(sub_831862D8);
PPC_FUNC_IMPL(__imp__sub_831862D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6924
	ctx.r3.s64 = ctx.r11.s64 + 6924;
	// bl 0x82ca7538
	ctx.lr = 0x831862F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186308"))) PPC_WEAK_FUNC(sub_83186308);
PPC_FUNC_IMPL(__imp__sub_83186308) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6940
	ctx.r3.s64 = ctx.r11.s64 + 6940;
	// bl 0x82ca7538
	ctx.lr = 0x83186320;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186338"))) PPC_WEAK_FUNC(sub_83186338);
PPC_FUNC_IMPL(__imp__sub_83186338) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6956
	ctx.r3.s64 = ctx.r11.s64 + 6956;
	// bl 0x82ca7538
	ctx.lr = 0x83186350;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3796, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186368"))) PPC_WEAK_FUNC(sub_83186368);
PPC_FUNC_IMPL(__imp__sub_83186368) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6972
	ctx.r3.s64 = ctx.r11.s64 + 6972;
	// bl 0x82ca7538
	ctx.lr = 0x83186380;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186398"))) PPC_WEAK_FUNC(sub_83186398);
PPC_FUNC_IMPL(__imp__sub_83186398) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6988
	ctx.r3.s64 = ctx.r11.s64 + 6988;
	// bl 0x82ca7538
	ctx.lr = 0x831863B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831863C8"))) PPC_WEAK_FUNC(sub_831863C8);
PPC_FUNC_IMPL(__imp__sub_831863C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7004
	ctx.r3.s64 = ctx.r11.s64 + 7004;
	// bl 0x82ca7538
	ctx.lr = 0x831863E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831863F8"))) PPC_WEAK_FUNC(sub_831863F8);
PPC_FUNC_IMPL(__imp__sub_831863F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7020
	ctx.r3.s64 = ctx.r11.s64 + 7020;
	// bl 0x82ca7538
	ctx.lr = 0x83186410;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3860(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3860, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186428"))) PPC_WEAK_FUNC(sub_83186428);
PPC_FUNC_IMPL(__imp__sub_83186428) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7036
	ctx.r3.s64 = ctx.r11.s64 + 7036;
	// bl 0x82ca7538
	ctx.lr = 0x83186440;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186458"))) PPC_WEAK_FUNC(sub_83186458);
PPC_FUNC_IMPL(__imp__sub_83186458) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7052
	ctx.r3.s64 = ctx.r11.s64 + 7052;
	// bl 0x82ca7538
	ctx.lr = 0x83186470;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3836(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3836, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186488"))) PPC_WEAK_FUNC(sub_83186488);
PPC_FUNC_IMPL(__imp__sub_83186488) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7068
	ctx.r3.s64 = ctx.r11.s64 + 7068;
	// bl 0x82ca7538
	ctx.lr = 0x831864A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831864B8"))) PPC_WEAK_FUNC(sub_831864B8);
PPC_FUNC_IMPL(__imp__sub_831864B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7088
	ctx.r3.s64 = ctx.r11.s64 + 7088;
	// bl 0x82ca7538
	ctx.lr = 0x831864D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831864E8"))) PPC_WEAK_FUNC(sub_831864E8);
PPC_FUNC_IMPL(__imp__sub_831864E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7108
	ctx.r3.s64 = ctx.r11.s64 + 7108;
	// bl 0x82ca7538
	ctx.lr = 0x83186500;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3840(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3840, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186518"))) PPC_WEAK_FUNC(sub_83186518);
PPC_FUNC_IMPL(__imp__sub_83186518) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7128
	ctx.r3.s64 = ctx.r11.s64 + 7128;
	// bl 0x82ca7538
	ctx.lr = 0x83186530;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186548"))) PPC_WEAK_FUNC(sub_83186548);
PPC_FUNC_IMPL(__imp__sub_83186548) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7152
	ctx.r3.s64 = ctx.r11.s64 + 7152;
	// bl 0x82ca7538
	ctx.lr = 0x83186560;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3812, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186578"))) PPC_WEAK_FUNC(sub_83186578);
PPC_FUNC_IMPL(__imp__sub_83186578) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7184
	ctx.r3.s64 = ctx.r11.s64 + 7184;
	// bl 0x82ca7538
	ctx.lr = 0x83186590;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3856, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831865A8"))) PPC_WEAK_FUNC(sub_831865A8);
PPC_FUNC_IMPL(__imp__sub_831865A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7208
	ctx.r3.s64 = ctx.r11.s64 + 7208;
	// bl 0x82ca7538
	ctx.lr = 0x831865C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3852(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831865D8"))) PPC_WEAK_FUNC(sub_831865D8);
PPC_FUNC_IMPL(__imp__sub_831865D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7244
	ctx.r3.s64 = ctx.r11.s64 + 7244;
	// bl 0x82ca7538
	ctx.lr = 0x831865F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3804, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186608"))) PPC_WEAK_FUNC(sub_83186608);
PPC_FUNC_IMPL(__imp__sub_83186608) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7272
	ctx.r3.s64 = ctx.r11.s64 + 7272;
	// bl 0x82ca7538
	ctx.lr = 0x83186620;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4836(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4836, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186638"))) PPC_WEAK_FUNC(sub_83186638);
PPC_FUNC_IMPL(__imp__sub_83186638) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7296
	ctx.r3.s64 = ctx.r11.s64 + 7296;
	// bl 0x82ca7538
	ctx.lr = 0x83186650;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3828(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3828, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186668"))) PPC_WEAK_FUNC(sub_83186668);
PPC_FUNC_IMPL(__imp__sub_83186668) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7320
	ctx.r3.s64 = ctx.r11.s64 + 7320;
	// bl 0x82ca7538
	ctx.lr = 0x83186680;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3820, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186698"))) PPC_WEAK_FUNC(sub_83186698);
PPC_FUNC_IMPL(__imp__sub_83186698) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7344
	ctx.r3.s64 = ctx.r11.s64 + 7344;
	// bl 0x82ca7538
	ctx.lr = 0x831866B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3848, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831866C8"))) PPC_WEAK_FUNC(sub_831866C8);
PPC_FUNC_IMPL(__imp__sub_831866C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7372
	ctx.r3.s64 = ctx.r11.s64 + 7372;
	// bl 0x82ca7538
	ctx.lr = 0x831866E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831866F8"))) PPC_WEAK_FUNC(sub_831866F8);
PPC_FUNC_IMPL(__imp__sub_831866F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7396
	ctx.r3.s64 = ctx.r11.s64 + 7396;
	// bl 0x82ca7538
	ctx.lr = 0x83186710;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5992(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5992, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186728"))) PPC_WEAK_FUNC(sub_83186728);
PPC_FUNC_IMPL(__imp__sub_83186728) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7424
	ctx.r3.s64 = ctx.r11.s64 + 7424;
	// bl 0x82ca7538
	ctx.lr = 0x83186740;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186758"))) PPC_WEAK_FUNC(sub_83186758);
PPC_FUNC_IMPL(__imp__sub_83186758) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7456
	ctx.r3.s64 = ctx.r11.s64 + 7456;
	// bl 0x82ca7538
	ctx.lr = 0x83186770;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3832(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186788"))) PPC_WEAK_FUNC(sub_83186788);
PPC_FUNC_IMPL(__imp__sub_83186788) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7488
	ctx.r3.s64 = ctx.r11.s64 + 7488;
	// bl 0x82ca7538
	ctx.lr = 0x831867A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3824, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831867B8"))) PPC_WEAK_FUNC(sub_831867B8);
PPC_FUNC_IMPL(__imp__sub_831867B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7512
	ctx.r3.s64 = ctx.r11.s64 + 7512;
	// bl 0x82ca7538
	ctx.lr = 0x831867D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831867E8"))) PPC_WEAK_FUNC(sub_831867E8);
PPC_FUNC_IMPL(__imp__sub_831867E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7528
	ctx.r3.s64 = ctx.r11.s64 + 7528;
	// bl 0x82ca7538
	ctx.lr = 0x83186800;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186818"))) PPC_WEAK_FUNC(sub_83186818);
PPC_FUNC_IMPL(__imp__sub_83186818) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7540
	ctx.r3.s64 = ctx.r11.s64 + 7540;
	// bl 0x82ca7538
	ctx.lr = 0x83186830;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4492(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186848"))) PPC_WEAK_FUNC(sub_83186848);
PPC_FUNC_IMPL(__imp__sub_83186848) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7556
	ctx.r3.s64 = ctx.r11.s64 + 7556;
	// bl 0x82ca7538
	ctx.lr = 0x83186860;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1852(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186878"))) PPC_WEAK_FUNC(sub_83186878);
PPC_FUNC_IMPL(__imp__sub_83186878) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7572
	ctx.r3.s64 = ctx.r11.s64 + 7572;
	// bl 0x82ca7538
	ctx.lr = 0x83186890;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2820(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2820, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831868A8"))) PPC_WEAK_FUNC(sub_831868A8);
PPC_FUNC_IMPL(__imp__sub_831868A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7584
	ctx.r3.s64 = ctx.r11.s64 + 7584;
	// bl 0x82ca7538
	ctx.lr = 0x831868C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4928(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4928, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831868D8"))) PPC_WEAK_FUNC(sub_831868D8);
PPC_FUNC_IMPL(__imp__sub_831868D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7600
	ctx.r3.s64 = ctx.r11.s64 + 7600;
	// bl 0x82ca7538
	ctx.lr = 0x831868F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5972(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186908"))) PPC_WEAK_FUNC(sub_83186908);
PPC_FUNC_IMPL(__imp__sub_83186908) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7616
	ctx.r3.s64 = ctx.r11.s64 + 7616;
	// bl 0x82ca7538
	ctx.lr = 0x83186920;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5916, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186938"))) PPC_WEAK_FUNC(sub_83186938);
PPC_FUNC_IMPL(__imp__sub_83186938) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7636
	ctx.r3.s64 = ctx.r11.s64 + 7636;
	// bl 0x82ca7538
	ctx.lr = 0x83186950;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1136(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186968"))) PPC_WEAK_FUNC(sub_83186968);
PPC_FUNC_IMPL(__imp__sub_83186968) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7656
	ctx.r3.s64 = ctx.r11.s64 + 7656;
	// bl 0x82ca7538
	ctx.lr = 0x83186980;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-540(r11)
	PPC_STORE_U32(ctx.r11.u32 + -540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186998"))) PPC_WEAK_FUNC(sub_83186998);
PPC_FUNC_IMPL(__imp__sub_83186998) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7672
	ctx.r3.s64 = ctx.r11.s64 + 7672;
	// bl 0x82ca7538
	ctx.lr = 0x831869B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4624(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4624, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831869C8"))) PPC_WEAK_FUNC(sub_831869C8);
PPC_FUNC_IMPL(__imp__sub_831869C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7692
	ctx.r3.s64 = ctx.r11.s64 + 7692;
	// bl 0x82ca7538
	ctx.lr = 0x831869E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5968(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831869F8"))) PPC_WEAK_FUNC(sub_831869F8);
PPC_FUNC_IMPL(__imp__sub_831869F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7704
	ctx.r3.s64 = ctx.r11.s64 + 7704;
	// bl 0x82ca7538
	ctx.lr = 0x83186A10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4084(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4084, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186A28"))) PPC_WEAK_FUNC(sub_83186A28);
PPC_FUNC_IMPL(__imp__sub_83186A28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7724
	ctx.r3.s64 = ctx.r11.s64 + 7724;
	// bl 0x82ca7538
	ctx.lr = 0x83186A40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186A58"))) PPC_WEAK_FUNC(sub_83186A58);
PPC_FUNC_IMPL(__imp__sub_83186A58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7736
	ctx.r3.s64 = ctx.r11.s64 + 7736;
	// bl 0x82ca7538
	ctx.lr = 0x83186A70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3420(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186A88"))) PPC_WEAK_FUNC(sub_83186A88);
PPC_FUNC_IMPL(__imp__sub_83186A88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7752
	ctx.r3.s64 = ctx.r11.s64 + 7752;
	// bl 0x82ca7538
	ctx.lr = 0x83186AA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186AB8"))) PPC_WEAK_FUNC(sub_83186AB8);
PPC_FUNC_IMPL(__imp__sub_83186AB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7764
	ctx.r3.s64 = ctx.r11.s64 + 7764;
	// bl 0x82ca7538
	ctx.lr = 0x83186AD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186AE8"))) PPC_WEAK_FUNC(sub_83186AE8);
PPC_FUNC_IMPL(__imp__sub_83186AE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7776
	ctx.r3.s64 = ctx.r11.s64 + 7776;
	// bl 0x82ca7538
	ctx.lr = 0x83186B00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186B18"))) PPC_WEAK_FUNC(sub_83186B18);
PPC_FUNC_IMPL(__imp__sub_83186B18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7792
	ctx.r3.s64 = ctx.r11.s64 + 7792;
	// bl 0x82ca7538
	ctx.lr = 0x83186B30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4160(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186B48"))) PPC_WEAK_FUNC(sub_83186B48);
PPC_FUNC_IMPL(__imp__sub_83186B48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7808
	ctx.r3.s64 = ctx.r11.s64 + 7808;
	// bl 0x82ca7538
	ctx.lr = 0x83186B60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-444(r11)
	PPC_STORE_U32(ctx.r11.u32 + -444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186B78"))) PPC_WEAK_FUNC(sub_83186B78);
PPC_FUNC_IMPL(__imp__sub_83186B78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7820
	ctx.r3.s64 = ctx.r11.s64 + 7820;
	// bl 0x82ca7538
	ctx.lr = 0x83186B90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186BA8"))) PPC_WEAK_FUNC(sub_83186BA8);
PPC_FUNC_IMPL(__imp__sub_83186BA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7832
	ctx.r3.s64 = ctx.r11.s64 + 7832;
	// bl 0x82ca7538
	ctx.lr = 0x83186BC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186BD8"))) PPC_WEAK_FUNC(sub_83186BD8);
PPC_FUNC_IMPL(__imp__sub_83186BD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7844
	ctx.r3.s64 = ctx.r11.s64 + 7844;
	// bl 0x82ca7538
	ctx.lr = 0x83186BF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2760(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186C08"))) PPC_WEAK_FUNC(sub_83186C08);
PPC_FUNC_IMPL(__imp__sub_83186C08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7860
	ctx.r3.s64 = ctx.r11.s64 + 7860;
	// bl 0x82ca7538
	ctx.lr = 0x83186C20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5960(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186C38"))) PPC_WEAK_FUNC(sub_83186C38);
PPC_FUNC_IMPL(__imp__sub_83186C38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7876
	ctx.r3.s64 = ctx.r11.s64 + 7876;
	// bl 0x82ca7538
	ctx.lr = 0x83186C50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2924(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2924, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186C68"))) PPC_WEAK_FUNC(sub_83186C68);
PPC_FUNC_IMPL(__imp__sub_83186C68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
	// bl 0x82ca7538
	ctx.lr = 0x83186C80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2344(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186C98"))) PPC_WEAK_FUNC(sub_83186C98);
PPC_FUNC_IMPL(__imp__sub_83186C98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7920
	ctx.r3.s64 = ctx.r11.s64 + 7920;
	// bl 0x82ca7538
	ctx.lr = 0x83186CB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5984, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186CC8"))) PPC_WEAK_FUNC(sub_83186CC8);
PPC_FUNC_IMPL(__imp__sub_83186CC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7940
	ctx.r3.s64 = ctx.r11.s64 + 7940;
	// bl 0x82ca7538
	ctx.lr = 0x83186CE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5980(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186CF8"))) PPC_WEAK_FUNC(sub_83186CF8);
PPC_FUNC_IMPL(__imp__sub_83186CF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7960
	ctx.r3.s64 = ctx.r11.s64 + 7960;
	// bl 0x82ca7538
	ctx.lr = 0x83186D10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5976(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186D28"))) PPC_WEAK_FUNC(sub_83186D28);
PPC_FUNC_IMPL(__imp__sub_83186D28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7976
	ctx.r3.s64 = ctx.r11.s64 + 7976;
	// bl 0x82ca7538
	ctx.lr = 0x83186D40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-440(r11)
	PPC_STORE_U32(ctx.r11.u32 + -440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186D58"))) PPC_WEAK_FUNC(sub_83186D58);
PPC_FUNC_IMPL(__imp__sub_83186D58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7992
	ctx.r3.s64 = ctx.r11.s64 + 7992;
	// bl 0x82ca7538
	ctx.lr = 0x83186D70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4516(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186D88"))) PPC_WEAK_FUNC(sub_83186D88);
PPC_FUNC_IMPL(__imp__sub_83186D88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8008
	ctx.r3.s64 = ctx.r11.s64 + 8008;
	// bl 0x82ca7538
	ctx.lr = 0x83186DA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5956(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186DB8"))) PPC_WEAK_FUNC(sub_83186DB8);
PPC_FUNC_IMPL(__imp__sub_83186DB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8032
	ctx.r3.s64 = ctx.r11.s64 + 8032;
	// bl 0x82ca7538
	ctx.lr = 0x83186DD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5964(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186DE8"))) PPC_WEAK_FUNC(sub_83186DE8);
PPC_FUNC_IMPL(__imp__sub_83186DE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8052
	ctx.r3.s64 = ctx.r11.s64 + 8052;
	// bl 0x82ca7538
	ctx.lr = 0x83186E00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4312(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186E18"))) PPC_WEAK_FUNC(sub_83186E18);
PPC_FUNC_IMPL(__imp__sub_83186E18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8072
	ctx.r3.s64 = ctx.r11.s64 + 8072;
	// bl 0x82ca7538
	ctx.lr = 0x83186E30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2316(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186E48"))) PPC_WEAK_FUNC(sub_83186E48);
PPC_FUNC_IMPL(__imp__sub_83186E48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8108
	ctx.r3.s64 = ctx.r11.s64 + 8108;
	// bl 0x82ca7538
	ctx.lr = 0x83186E60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186E78"))) PPC_WEAK_FUNC(sub_83186E78);
PPC_FUNC_IMPL(__imp__sub_83186E78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8124
	ctx.r3.s64 = ctx.r11.s64 + 8124;
	// bl 0x82ca7538
	ctx.lr = 0x83186E90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 920, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186EA8"))) PPC_WEAK_FUNC(sub_83186EA8);
PPC_FUNC_IMPL(__imp__sub_83186EA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8144
	ctx.r3.s64 = ctx.r11.s64 + 8144;
	// bl 0x82ca7538
	ctx.lr = 0x83186EC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 928, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186ED8"))) PPC_WEAK_FUNC(sub_83186ED8);
PPC_FUNC_IMPL(__imp__sub_83186ED8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8160
	ctx.r3.s64 = ctx.r11.s64 + 8160;
	// bl 0x82ca7538
	ctx.lr = 0x83186EF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186F08"))) PPC_WEAK_FUNC(sub_83186F08);
PPC_FUNC_IMPL(__imp__sub_83186F08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8180
	ctx.r3.s64 = ctx.r11.s64 + 8180;
	// bl 0x82ca7538
	ctx.lr = 0x83186F20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,924(r11)
	PPC_STORE_U32(ctx.r11.u32 + 924, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186F38"))) PPC_WEAK_FUNC(sub_83186F38);
PPC_FUNC_IMPL(__imp__sub_83186F38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8204
	ctx.r3.s64 = ctx.r11.s64 + 8204;
	// bl 0x82ca7538
	ctx.lr = 0x83186F50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 916, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186F68"))) PPC_WEAK_FUNC(sub_83186F68);
PPC_FUNC_IMPL(__imp__sub_83186F68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8232
	ctx.r3.s64 = ctx.r11.s64 + 8232;
	// bl 0x82ca7538
	ctx.lr = 0x83186F80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186F98"))) PPC_WEAK_FUNC(sub_83186F98);
PPC_FUNC_IMPL(__imp__sub_83186F98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8264
	ctx.r3.s64 = ctx.r11.s64 + 8264;
	// bl 0x82ca7538
	ctx.lr = 0x83186FB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186FC8"))) PPC_WEAK_FUNC(sub_83186FC8);
PPC_FUNC_IMPL(__imp__sub_83186FC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// bl 0x82ca7538
	ctx.lr = 0x83186FE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 896, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83186FF8"))) PPC_WEAK_FUNC(sub_83186FF8);
PPC_FUNC_IMPL(__imp__sub_83186FF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8328
	ctx.r3.s64 = ctx.r11.s64 + 8328;
	// bl 0x82ca7538
	ctx.lr = 0x83187010;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4996, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187028"))) PPC_WEAK_FUNC(sub_83187028);
PPC_FUNC_IMPL(__imp__sub_83187028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-25432
	ctx.r3.s64 = ctx.r11.s64 + -25432;
	// bl 0x82ca7538
	ctx.lr = 0x83187040;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1948, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187058"))) PPC_WEAK_FUNC(sub_83187058);
PPC_FUNC_IMPL(__imp__sub_83187058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-25720
	ctx.r3.s64 = ctx.r11.s64 + -25720;
	// bl 0x82ca7538
	ctx.lr = 0x83187070;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187088"))) PPC_WEAK_FUNC(sub_83187088);
PPC_FUNC_IMPL(__imp__sub_83187088) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8364
	ctx.r3.s64 = ctx.r11.s64 + 8364;
	// bl 0x82ca7538
	ctx.lr = 0x831870A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831870B8"))) PPC_WEAK_FUNC(sub_831870B8);
PPC_FUNC_IMPL(__imp__sub_831870B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8372
	ctx.r3.s64 = ctx.r11.s64 + 8372;
	// bl 0x82ca7538
	ctx.lr = 0x831870D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831870E8"))) PPC_WEAK_FUNC(sub_831870E8);
PPC_FUNC_IMPL(__imp__sub_831870E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8388
	ctx.r3.s64 = ctx.r11.s64 + 8388;
	// bl 0x82ca7538
	ctx.lr = 0x83187100;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-196(r11)
	PPC_STORE_U32(ctx.r11.u32 + -196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187118"))) PPC_WEAK_FUNC(sub_83187118);
PPC_FUNC_IMPL(__imp__sub_83187118) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8416
	ctx.r3.s64 = ctx.r11.s64 + 8416;
	// bl 0x82ca7538
	ctx.lr = 0x83187130;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-208(r11)
	PPC_STORE_U32(ctx.r11.u32 + -208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187148"))) PPC_WEAK_FUNC(sub_83187148);
PPC_FUNC_IMPL(__imp__sub_83187148) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8436
	ctx.r3.s64 = ctx.r11.s64 + 8436;
	// bl 0x82ca7538
	ctx.lr = 0x83187160;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187178"))) PPC_WEAK_FUNC(sub_83187178);
PPC_FUNC_IMPL(__imp__sub_83187178) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8460
	ctx.r3.s64 = ctx.r11.s64 + 8460;
	// bl 0x82ca7538
	ctx.lr = 0x83187190;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1116, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831871A8"))) PPC_WEAK_FUNC(sub_831871A8);
PPC_FUNC_IMPL(__imp__sub_831871A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8476
	ctx.r3.s64 = ctx.r11.s64 + 8476;
	// bl 0x82ca7538
	ctx.lr = 0x831871C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-204(r11)
	PPC_STORE_U32(ctx.r11.u32 + -204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831871D8"))) PPC_WEAK_FUNC(sub_831871D8);
PPC_FUNC_IMPL(__imp__sub_831871D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8496
	ctx.r3.s64 = ctx.r11.s64 + 8496;
	// bl 0x82ca7538
	ctx.lr = 0x831871F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-212(r11)
	PPC_STORE_U32(ctx.r11.u32 + -212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187208"))) PPC_WEAK_FUNC(sub_83187208);
PPC_FUNC_IMPL(__imp__sub_83187208) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8524
	ctx.r3.s64 = ctx.r11.s64 + 8524;
	// bl 0x82ca7538
	ctx.lr = 0x83187220;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-200(r11)
	PPC_STORE_U32(ctx.r11.u32 + -200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187238"))) PPC_WEAK_FUNC(sub_83187238);
PPC_FUNC_IMPL(__imp__sub_83187238) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8548
	ctx.r3.s64 = ctx.r11.s64 + 8548;
	// bl 0x82ca7538
	ctx.lr = 0x83187250;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2464(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187268"))) PPC_WEAK_FUNC(sub_83187268);
PPC_FUNC_IMPL(__imp__sub_83187268) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8580
	ctx.r3.s64 = ctx.r11.s64 + 8580;
	// bl 0x82ca7538
	ctx.lr = 0x83187280;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5776(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187298"))) PPC_WEAK_FUNC(sub_83187298);
PPC_FUNC_IMPL(__imp__sub_83187298) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8612
	ctx.r3.s64 = ctx.r11.s64 + 8612;
	// bl 0x82ca7538
	ctx.lr = 0x831872B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5772(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831872C8"))) PPC_WEAK_FUNC(sub_831872C8);
PPC_FUNC_IMPL(__imp__sub_831872C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8644
	ctx.r3.s64 = ctx.r11.s64 + 8644;
	// bl 0x82ca7538
	ctx.lr = 0x831872E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2412(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831872F8"))) PPC_WEAK_FUNC(sub_831872F8);
PPC_FUNC_IMPL(__imp__sub_831872F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8680
	ctx.r3.s64 = ctx.r11.s64 + 8680;
	// bl 0x82ca7538
	ctx.lr = 0x83187310;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187328"))) PPC_WEAK_FUNC(sub_83187328);
PPC_FUNC_IMPL(__imp__sub_83187328) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8712
	ctx.r3.s64 = ctx.r11.s64 + 8712;
	// bl 0x82ca7538
	ctx.lr = 0x83187340;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5780(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187358"))) PPC_WEAK_FUNC(sub_83187358);
PPC_FUNC_IMPL(__imp__sub_83187358) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8748
	ctx.r3.s64 = ctx.r11.s64 + 8748;
	// bl 0x82ca7538
	ctx.lr = 0x83187370;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187388"))) PPC_WEAK_FUNC(sub_83187388);
PPC_FUNC_IMPL(__imp__sub_83187388) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8784
	ctx.r3.s64 = ctx.r11.s64 + 8784;
	// bl 0x82ca7538
	ctx.lr = 0x831873A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2896, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831873B8"))) PPC_WEAK_FUNC(sub_831873B8);
PPC_FUNC_IMPL(__imp__sub_831873B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8820
	ctx.r3.s64 = ctx.r11.s64 + 8820;
	// bl 0x82ca7538
	ctx.lr = 0x831873D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3868, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831873E8"))) PPC_WEAK_FUNC(sub_831873E8);
PPC_FUNC_IMPL(__imp__sub_831873E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8856
	ctx.r3.s64 = ctx.r11.s64 + 8856;
	// bl 0x82ca7538
	ctx.lr = 0x83187400;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187418"))) PPC_WEAK_FUNC(sub_83187418);
PPC_FUNC_IMPL(__imp__sub_83187418) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8896
	ctx.r3.s64 = ctx.r11.s64 + 8896;
	// bl 0x82ca7538
	ctx.lr = 0x83187430;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5700(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5700, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187448"))) PPC_WEAK_FUNC(sub_83187448);
PPC_FUNC_IMPL(__imp__sub_83187448) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8932
	ctx.r3.s64 = ctx.r11.s64 + 8932;
	// bl 0x82ca7538
	ctx.lr = 0x83187460;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4356(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187478"))) PPC_WEAK_FUNC(sub_83187478);
PPC_FUNC_IMPL(__imp__sub_83187478) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8972
	ctx.r3.s64 = ctx.r11.s64 + 8972;
	// bl 0x82ca7538
	ctx.lr = 0x83187490;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831874A8"))) PPC_WEAK_FUNC(sub_831874A8);
PPC_FUNC_IMPL(__imp__sub_831874A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8980
	ctx.r3.s64 = ctx.r11.s64 + 8980;
	// bl 0x82ca7538
	ctx.lr = 0x831874C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5000, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831874D8"))) PPC_WEAK_FUNC(sub_831874D8);
PPC_FUNC_IMPL(__imp__sub_831874D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8996
	ctx.r3.s64 = ctx.r11.s64 + 8996;
	// bl 0x82ca7538
	ctx.lr = 0x831874F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187508"))) PPC_WEAK_FUNC(sub_83187508);
PPC_FUNC_IMPL(__imp__sub_83187508) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9020
	ctx.r3.s64 = ctx.r11.s64 + 9020;
	// bl 0x82ca7538
	ctx.lr = 0x83187520;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187538"))) PPC_WEAK_FUNC(sub_83187538);
PPC_FUNC_IMPL(__imp__sub_83187538) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9040
	ctx.r3.s64 = ctx.r11.s64 + 9040;
	// bl 0x82ca7538
	ctx.lr = 0x83187550;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187568"))) PPC_WEAK_FUNC(sub_83187568);
PPC_FUNC_IMPL(__imp__sub_83187568) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9064
	ctx.r3.s64 = ctx.r11.s64 + 9064;
	// bl 0x82ca7538
	ctx.lr = 0x83187580;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187598"))) PPC_WEAK_FUNC(sub_83187598);
PPC_FUNC_IMPL(__imp__sub_83187598) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9088
	ctx.r3.s64 = ctx.r11.s64 + 9088;
	// bl 0x82ca7538
	ctx.lr = 0x831875B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831875C8"))) PPC_WEAK_FUNC(sub_831875C8);
PPC_FUNC_IMPL(__imp__sub_831875C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9116
	ctx.r3.s64 = ctx.r11.s64 + 9116;
	// bl 0x82ca7538
	ctx.lr = 0x831875E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831875F8"))) PPC_WEAK_FUNC(sub_831875F8);
PPC_FUNC_IMPL(__imp__sub_831875F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9132
	ctx.r3.s64 = ctx.r11.s64 + 9132;
	// bl 0x82ca7538
	ctx.lr = 0x83187610;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1864, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187628"))) PPC_WEAK_FUNC(sub_83187628);
PPC_FUNC_IMPL(__imp__sub_83187628) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9152
	ctx.r3.s64 = ctx.r11.s64 + 9152;
	// bl 0x82ca7538
	ctx.lr = 0x83187640;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187658"))) PPC_WEAK_FUNC(sub_83187658);
PPC_FUNC_IMPL(__imp__sub_83187658) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9172
	ctx.r3.s64 = ctx.r11.s64 + 9172;
	// bl 0x82ca7538
	ctx.lr = 0x83187670;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187688"))) PPC_WEAK_FUNC(sub_83187688);
PPC_FUNC_IMPL(__imp__sub_83187688) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9196
	ctx.r3.s64 = ctx.r11.s64 + 9196;
	// bl 0x82ca7538
	ctx.lr = 0x831876A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5076, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831876B8"))) PPC_WEAK_FUNC(sub_831876B8);
PPC_FUNC_IMPL(__imp__sub_831876B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6672
	ctx.r3.s64 = ctx.r11.s64 + 6672;
	// bl 0x82ca7538
	ctx.lr = 0x831876D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831876E8"))) PPC_WEAK_FUNC(sub_831876E8);
PPC_FUNC_IMPL(__imp__sub_831876E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9208
	ctx.r3.s64 = ctx.r11.s64 + 9208;
	// bl 0x82ca7538
	ctx.lr = 0x83187700;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187718"))) PPC_WEAK_FUNC(sub_83187718);
PPC_FUNC_IMPL(__imp__sub_83187718) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9232
	ctx.r3.s64 = ctx.r11.s64 + 9232;
	// bl 0x82ca7538
	ctx.lr = 0x83187730;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187748"))) PPC_WEAK_FUNC(sub_83187748);
PPC_FUNC_IMPL(__imp__sub_83187748) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9244
	ctx.r3.s64 = ctx.r11.s64 + 9244;
	// bl 0x82ca7538
	ctx.lr = 0x83187760;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187778"))) PPC_WEAK_FUNC(sub_83187778);
PPC_FUNC_IMPL(__imp__sub_83187778) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9260
	ctx.r3.s64 = ctx.r11.s64 + 9260;
	// bl 0x82ca7538
	ctx.lr = 0x83187790;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831877A8"))) PPC_WEAK_FUNC(sub_831877A8);
PPC_FUNC_IMPL(__imp__sub_831877A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9284
	ctx.r3.s64 = ctx.r11.s64 + 9284;
	// bl 0x82ca7538
	ctx.lr = 0x831877C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831877D8"))) PPC_WEAK_FUNC(sub_831877D8);
PPC_FUNC_IMPL(__imp__sub_831877D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9308
	ctx.r3.s64 = ctx.r11.s64 + 9308;
	// bl 0x82ca7538
	ctx.lr = 0x831877F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187808"))) PPC_WEAK_FUNC(sub_83187808);
PPC_FUNC_IMPL(__imp__sub_83187808) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9332
	ctx.r3.s64 = ctx.r11.s64 + 9332;
	// bl 0x82ca7538
	ctx.lr = 0x83187820;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2876(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187838"))) PPC_WEAK_FUNC(sub_83187838);
PPC_FUNC_IMPL(__imp__sub_83187838) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9368
	ctx.r3.s64 = ctx.r11.s64 + 9368;
	// bl 0x82ca7538
	ctx.lr = 0x83187850;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187868"))) PPC_WEAK_FUNC(sub_83187868);
PPC_FUNC_IMPL(__imp__sub_83187868) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9396
	ctx.r3.s64 = ctx.r11.s64 + 9396;
	// bl 0x82ca7538
	ctx.lr = 0x83187880;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187898"))) PPC_WEAK_FUNC(sub_83187898);
PPC_FUNC_IMPL(__imp__sub_83187898) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9416
	ctx.r3.s64 = ctx.r11.s64 + 9416;
	// bl 0x82ca7538
	ctx.lr = 0x831878B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831878C8"))) PPC_WEAK_FUNC(sub_831878C8);
PPC_FUNC_IMPL(__imp__sub_831878C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9428
	ctx.r3.s64 = ctx.r11.s64 + 9428;
	// bl 0x82ca7538
	ctx.lr = 0x831878E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831878F8"))) PPC_WEAK_FUNC(sub_831878F8);
PPC_FUNC_IMPL(__imp__sub_831878F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9436
	ctx.r3.s64 = ctx.r11.s64 + 9436;
	// bl 0x82ca7538
	ctx.lr = 0x83187910;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187928"))) PPC_WEAK_FUNC(sub_83187928);
PPC_FUNC_IMPL(__imp__sub_83187928) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9460
	ctx.r3.s64 = ctx.r11.s64 + 9460;
	// bl 0x82ca7538
	ctx.lr = 0x83187940;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187958"))) PPC_WEAK_FUNC(sub_83187958);
PPC_FUNC_IMPL(__imp__sub_83187958) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9480
	ctx.r3.s64 = ctx.r11.s64 + 9480;
	// bl 0x82ca7538
	ctx.lr = 0x83187970;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5004, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187988"))) PPC_WEAK_FUNC(sub_83187988);
PPC_FUNC_IMPL(__imp__sub_83187988) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9496
	ctx.r3.s64 = ctx.r11.s64 + 9496;
	// bl 0x82ca7538
	ctx.lr = 0x831879A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831879B8"))) PPC_WEAK_FUNC(sub_831879B8);
PPC_FUNC_IMPL(__imp__sub_831879B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9508
	ctx.r3.s64 = ctx.r11.s64 + 9508;
	// bl 0x82ca7538
	ctx.lr = 0x831879D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831879E8"))) PPC_WEAK_FUNC(sub_831879E8);
PPC_FUNC_IMPL(__imp__sub_831879E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9524
	ctx.r3.s64 = ctx.r11.s64 + 9524;
	// bl 0x82ca7538
	ctx.lr = 0x83187A00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187A18"))) PPC_WEAK_FUNC(sub_83187A18);
PPC_FUNC_IMPL(__imp__sub_83187A18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9540
	ctx.r3.s64 = ctx.r11.s64 + 9540;
	// bl 0x82ca7538
	ctx.lr = 0x83187A30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187A48"))) PPC_WEAK_FUNC(sub_83187A48);
PPC_FUNC_IMPL(__imp__sub_83187A48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9556
	ctx.r3.s64 = ctx.r11.s64 + 9556;
	// bl 0x82ca7538
	ctx.lr = 0x83187A60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187A78"))) PPC_WEAK_FUNC(sub_83187A78);
PPC_FUNC_IMPL(__imp__sub_83187A78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9576
	ctx.r3.s64 = ctx.r11.s64 + 9576;
	// bl 0x82ca7538
	ctx.lr = 0x83187A90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187AA8"))) PPC_WEAK_FUNC(sub_83187AA8);
PPC_FUNC_IMPL(__imp__sub_83187AA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9600
	ctx.r3.s64 = ctx.r11.s64 + 9600;
	// bl 0x82ca7538
	ctx.lr = 0x83187AC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187AD8"))) PPC_WEAK_FUNC(sub_83187AD8);
PPC_FUNC_IMPL(__imp__sub_83187AD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9628
	ctx.r3.s64 = ctx.r11.s64 + 9628;
	// bl 0x82ca7538
	ctx.lr = 0x83187AF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187B08"))) PPC_WEAK_FUNC(sub_83187B08);
PPC_FUNC_IMPL(__imp__sub_83187B08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9640
	ctx.r3.s64 = ctx.r11.s64 + 9640;
	// bl 0x82ca7538
	ctx.lr = 0x83187B20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187B38"))) PPC_WEAK_FUNC(sub_83187B38);
PPC_FUNC_IMPL(__imp__sub_83187B38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9656
	ctx.r3.s64 = ctx.r11.s64 + 9656;
	// bl 0x82ca7538
	ctx.lr = 0x83187B50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187B68"))) PPC_WEAK_FUNC(sub_83187B68);
PPC_FUNC_IMPL(__imp__sub_83187B68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9680
	ctx.r3.s64 = ctx.r11.s64 + 9680;
	// bl 0x82ca7538
	ctx.lr = 0x83187B80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187B98"))) PPC_WEAK_FUNC(sub_83187B98);
PPC_FUNC_IMPL(__imp__sub_83187B98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9700
	ctx.r3.s64 = ctx.r11.s64 + 9700;
	// bl 0x82ca7538
	ctx.lr = 0x83187BB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1404, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187BC8"))) PPC_WEAK_FUNC(sub_83187BC8);
PPC_FUNC_IMPL(__imp__sub_83187BC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9732
	ctx.r3.s64 = ctx.r11.s64 + 9732;
	// bl 0x82ca7538
	ctx.lr = 0x83187BE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187BF8"))) PPC_WEAK_FUNC(sub_83187BF8);
PPC_FUNC_IMPL(__imp__sub_83187BF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9768
	ctx.r3.s64 = ctx.r11.s64 + 9768;
	// bl 0x82ca7538
	ctx.lr = 0x83187C10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187C28"))) PPC_WEAK_FUNC(sub_83187C28);
PPC_FUNC_IMPL(__imp__sub_83187C28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9800
	ctx.r3.s64 = ctx.r11.s64 + 9800;
	// bl 0x82ca7538
	ctx.lr = 0x83187C40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187C58"))) PPC_WEAK_FUNC(sub_83187C58);
PPC_FUNC_IMPL(__imp__sub_83187C58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9832
	ctx.r3.s64 = ctx.r11.s64 + 9832;
	// bl 0x82ca7538
	ctx.lr = 0x83187C70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187C88"))) PPC_WEAK_FUNC(sub_83187C88);
PPC_FUNC_IMPL(__imp__sub_83187C88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9860
	ctx.r3.s64 = ctx.r11.s64 + 9860;
	// bl 0x82ca7538
	ctx.lr = 0x83187CA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187CB8"))) PPC_WEAK_FUNC(sub_83187CB8);
PPC_FUNC_IMPL(__imp__sub_83187CB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9884
	ctx.r3.s64 = ctx.r11.s64 + 9884;
	// bl 0x82ca7538
	ctx.lr = 0x83187CD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187CE8"))) PPC_WEAK_FUNC(sub_83187CE8);
PPC_FUNC_IMPL(__imp__sub_83187CE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9912
	ctx.r3.s64 = ctx.r11.s64 + 9912;
	// bl 0x82ca7538
	ctx.lr = 0x83187D00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187D18"))) PPC_WEAK_FUNC(sub_83187D18);
PPC_FUNC_IMPL(__imp__sub_83187D18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9944
	ctx.r3.s64 = ctx.r11.s64 + 9944;
	// bl 0x82ca7538
	ctx.lr = 0x83187D30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187D48"))) PPC_WEAK_FUNC(sub_83187D48);
PPC_FUNC_IMPL(__imp__sub_83187D48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9980
	ctx.r3.s64 = ctx.r11.s64 + 9980;
	// bl 0x82ca7538
	ctx.lr = 0x83187D60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187D78"))) PPC_WEAK_FUNC(sub_83187D78);
PPC_FUNC_IMPL(__imp__sub_83187D78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10016
	ctx.r3.s64 = ctx.r11.s64 + 10016;
	// bl 0x82ca7538
	ctx.lr = 0x83187D90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187DA8"))) PPC_WEAK_FUNC(sub_83187DA8);
PPC_FUNC_IMPL(__imp__sub_83187DA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10056
	ctx.r3.s64 = ctx.r11.s64 + 10056;
	// bl 0x82ca7538
	ctx.lr = 0x83187DC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187DD8"))) PPC_WEAK_FUNC(sub_83187DD8);
PPC_FUNC_IMPL(__imp__sub_83187DD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10084
	ctx.r3.s64 = ctx.r11.s64 + 10084;
	// bl 0x82ca7538
	ctx.lr = 0x83187DF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187E08"))) PPC_WEAK_FUNC(sub_83187E08);
PPC_FUNC_IMPL(__imp__sub_83187E08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10116
	ctx.r3.s64 = ctx.r11.s64 + 10116;
	// bl 0x82ca7538
	ctx.lr = 0x83187E20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187E38"))) PPC_WEAK_FUNC(sub_83187E38);
PPC_FUNC_IMPL(__imp__sub_83187E38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10140
	ctx.r3.s64 = ctx.r11.s64 + 10140;
	// bl 0x82ca7538
	ctx.lr = 0x83187E50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187E68"))) PPC_WEAK_FUNC(sub_83187E68);
PPC_FUNC_IMPL(__imp__sub_83187E68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10156
	ctx.r3.s64 = ctx.r11.s64 + 10156;
	// bl 0x82ca7538
	ctx.lr = 0x83187E80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187E98"))) PPC_WEAK_FUNC(sub_83187E98);
PPC_FUNC_IMPL(__imp__sub_83187E98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10168
	ctx.r3.s64 = ctx.r11.s64 + 10168;
	// bl 0x82ca7538
	ctx.lr = 0x83187EB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187EC8"))) PPC_WEAK_FUNC(sub_83187EC8);
PPC_FUNC_IMPL(__imp__sub_83187EC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10184
	ctx.r3.s64 = ctx.r11.s64 + 10184;
	// bl 0x82ca7538
	ctx.lr = 0x83187EE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187EF8"))) PPC_WEAK_FUNC(sub_83187EF8);
PPC_FUNC_IMPL(__imp__sub_83187EF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10204
	ctx.r3.s64 = ctx.r11.s64 + 10204;
	// bl 0x82ca7538
	ctx.lr = 0x83187F10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187F28"))) PPC_WEAK_FUNC(sub_83187F28);
PPC_FUNC_IMPL(__imp__sub_83187F28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10224
	ctx.r3.s64 = ctx.r11.s64 + 10224;
	// bl 0x82ca7538
	ctx.lr = 0x83187F40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187F58"))) PPC_WEAK_FUNC(sub_83187F58);
PPC_FUNC_IMPL(__imp__sub_83187F58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10240
	ctx.r3.s64 = ctx.r11.s64 + 10240;
	// bl 0x82ca7538
	ctx.lr = 0x83187F70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187F88"))) PPC_WEAK_FUNC(sub_83187F88);
PPC_FUNC_IMPL(__imp__sub_83187F88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10272
	ctx.r3.s64 = ctx.r11.s64 + 10272;
	// bl 0x82ca7538
	ctx.lr = 0x83187FA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187FB8"))) PPC_WEAK_FUNC(sub_83187FB8);
PPC_FUNC_IMPL(__imp__sub_83187FB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10300
	ctx.r3.s64 = ctx.r11.s64 + 10300;
	// bl 0x82ca7538
	ctx.lr = 0x83187FD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83187FE8"))) PPC_WEAK_FUNC(sub_83187FE8);
PPC_FUNC_IMPL(__imp__sub_83187FE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10312
	ctx.r3.s64 = ctx.r11.s64 + 10312;
	// bl 0x82ca7538
	ctx.lr = 0x83188000;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188018"))) PPC_WEAK_FUNC(sub_83188018);
PPC_FUNC_IMPL(__imp__sub_83188018) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10328
	ctx.r3.s64 = ctx.r11.s64 + 10328;
	// bl 0x82ca7538
	ctx.lr = 0x83188030;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188048"))) PPC_WEAK_FUNC(sub_83188048);
PPC_FUNC_IMPL(__imp__sub_83188048) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10352
	ctx.r3.s64 = ctx.r11.s64 + 10352;
	// bl 0x82ca7538
	ctx.lr = 0x83188060;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188078"))) PPC_WEAK_FUNC(sub_83188078);
PPC_FUNC_IMPL(__imp__sub_83188078) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10364
	ctx.r3.s64 = ctx.r11.s64 + 10364;
	// bl 0x82ca7538
	ctx.lr = 0x83188090;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831880A8"))) PPC_WEAK_FUNC(sub_831880A8);
PPC_FUNC_IMPL(__imp__sub_831880A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10380
	ctx.r3.s64 = ctx.r11.s64 + 10380;
	// bl 0x82ca7538
	ctx.lr = 0x831880C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831880D8"))) PPC_WEAK_FUNC(sub_831880D8);
PPC_FUNC_IMPL(__imp__sub_831880D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10396
	ctx.r3.s64 = ctx.r11.s64 + 10396;
	// bl 0x82ca7538
	ctx.lr = 0x831880F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188108"))) PPC_WEAK_FUNC(sub_83188108);
PPC_FUNC_IMPL(__imp__sub_83188108) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10412
	ctx.r3.s64 = ctx.r11.s64 + 10412;
	// bl 0x82ca7538
	ctx.lr = 0x83188120;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188138"))) PPC_WEAK_FUNC(sub_83188138);
PPC_FUNC_IMPL(__imp__sub_83188138) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10428
	ctx.r3.s64 = ctx.r11.s64 + 10428;
	// bl 0x82ca7538
	ctx.lr = 0x83188150;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188168"))) PPC_WEAK_FUNC(sub_83188168);
PPC_FUNC_IMPL(__imp__sub_83188168) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10444
	ctx.r3.s64 = ctx.r11.s64 + 10444;
	// bl 0x82ca7538
	ctx.lr = 0x83188180;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188198"))) PPC_WEAK_FUNC(sub_83188198);
PPC_FUNC_IMPL(__imp__sub_83188198) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10464
	ctx.r3.s64 = ctx.r11.s64 + 10464;
	// bl 0x82ca7538
	ctx.lr = 0x831881B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831881C8"))) PPC_WEAK_FUNC(sub_831881C8);
PPC_FUNC_IMPL(__imp__sub_831881C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10484
	ctx.r3.s64 = ctx.r11.s64 + 10484;
	// bl 0x82ca7538
	ctx.lr = 0x831881E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831881F8"))) PPC_WEAK_FUNC(sub_831881F8);
PPC_FUNC_IMPL(__imp__sub_831881F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10500
	ctx.r3.s64 = ctx.r11.s64 + 10500;
	// bl 0x82ca7538
	ctx.lr = 0x83188210;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188228"))) PPC_WEAK_FUNC(sub_83188228);
PPC_FUNC_IMPL(__imp__sub_83188228) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10512
	ctx.r3.s64 = ctx.r11.s64 + 10512;
	// bl 0x82ca7538
	ctx.lr = 0x83188240;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188258"))) PPC_WEAK_FUNC(sub_83188258);
PPC_FUNC_IMPL(__imp__sub_83188258) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10536
	ctx.r3.s64 = ctx.r11.s64 + 10536;
	// bl 0x82ca7538
	ctx.lr = 0x83188270;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188288"))) PPC_WEAK_FUNC(sub_83188288);
PPC_FUNC_IMPL(__imp__sub_83188288) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10428
	ctx.r3.s64 = ctx.r11.s64 + 10428;
	// bl 0x82ca7538
	ctx.lr = 0x831882A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831882B8"))) PPC_WEAK_FUNC(sub_831882B8);
PPC_FUNC_IMPL(__imp__sub_831882B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10484
	ctx.r3.s64 = ctx.r11.s64 + 10484;
	// bl 0x82ca7538
	ctx.lr = 0x831882D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831882E8"))) PPC_WEAK_FUNC(sub_831882E8);
PPC_FUNC_IMPL(__imp__sub_831882E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10464
	ctx.r3.s64 = ctx.r11.s64 + 10464;
	// bl 0x82ca7538
	ctx.lr = 0x83188300;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188318"))) PPC_WEAK_FUNC(sub_83188318);
PPC_FUNC_IMPL(__imp__sub_83188318) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10556
	ctx.r3.s64 = ctx.r11.s64 + 10556;
	// bl 0x82ca7538
	ctx.lr = 0x83188330;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188348"))) PPC_WEAK_FUNC(sub_83188348);
PPC_FUNC_IMPL(__imp__sub_83188348) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10592
	ctx.r3.s64 = ctx.r11.s64 + 10592;
	// bl 0x82ca7538
	ctx.lr = 0x83188360;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5796, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188378"))) PPC_WEAK_FUNC(sub_83188378);
PPC_FUNC_IMPL(__imp__sub_83188378) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10620
	ctx.r3.s64 = ctx.r11.s64 + 10620;
	// bl 0x82ca7538
	ctx.lr = 0x83188390;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831883A8"))) PPC_WEAK_FUNC(sub_831883A8);
PPC_FUNC_IMPL(__imp__sub_831883A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10652
	ctx.r3.s64 = ctx.r11.s64 + 10652;
	// bl 0x82ca7538
	ctx.lr = 0x831883C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831883D8"))) PPC_WEAK_FUNC(sub_831883D8);
PPC_FUNC_IMPL(__imp__sub_831883D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10676
	ctx.r3.s64 = ctx.r11.s64 + 10676;
	// bl 0x82ca7538
	ctx.lr = 0x831883F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188408"))) PPC_WEAK_FUNC(sub_83188408);
PPC_FUNC_IMPL(__imp__sub_83188408) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10692
	ctx.r3.s64 = ctx.r11.s64 + 10692;
	// bl 0x82ca7538
	ctx.lr = 0x83188420;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188438"))) PPC_WEAK_FUNC(sub_83188438);
PPC_FUNC_IMPL(__imp__sub_83188438) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10708
	ctx.r3.s64 = ctx.r11.s64 + 10708;
	// bl 0x82ca7538
	ctx.lr = 0x83188450;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188468"))) PPC_WEAK_FUNC(sub_83188468);
PPC_FUNC_IMPL(__imp__sub_83188468) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10724
	ctx.r3.s64 = ctx.r11.s64 + 10724;
	// bl 0x82ca7538
	ctx.lr = 0x83188480;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5920, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188498"))) PPC_WEAK_FUNC(sub_83188498);
PPC_FUNC_IMPL(__imp__sub_83188498) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10748
	ctx.r3.s64 = ctx.r11.s64 + 10748;
	// bl 0x82ca7538
	ctx.lr = 0x831884B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831884C8"))) PPC_WEAK_FUNC(sub_831884C8);
PPC_FUNC_IMPL(__imp__sub_831884C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10760
	ctx.r3.s64 = ctx.r11.s64 + 10760;
	// bl 0x82ca7538
	ctx.lr = 0x831884E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831884F8"))) PPC_WEAK_FUNC(sub_831884F8);
PPC_FUNC_IMPL(__imp__sub_831884F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10780
	ctx.r3.s64 = ctx.r11.s64 + 10780;
	// bl 0x82ca7538
	ctx.lr = 0x83188510;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188528"))) PPC_WEAK_FUNC(sub_83188528);
PPC_FUNC_IMPL(__imp__sub_83188528) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10808
	ctx.r3.s64 = ctx.r11.s64 + 10808;
	// bl 0x82ca7538
	ctx.lr = 0x83188540;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188558"))) PPC_WEAK_FUNC(sub_83188558);
PPC_FUNC_IMPL(__imp__sub_83188558) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10836
	ctx.r3.s64 = ctx.r11.s64 + 10836;
	// bl 0x82ca7538
	ctx.lr = 0x83188570;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188588"))) PPC_WEAK_FUNC(sub_83188588);
PPC_FUNC_IMPL(__imp__sub_83188588) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10856
	ctx.r3.s64 = ctx.r11.s64 + 10856;
	// bl 0x82ca7538
	ctx.lr = 0x831885A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831885B8"))) PPC_WEAK_FUNC(sub_831885B8);
PPC_FUNC_IMPL(__imp__sub_831885B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10880
	ctx.r3.s64 = ctx.r11.s64 + 10880;
	// bl 0x82ca7538
	ctx.lr = 0x831885D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831885E8"))) PPC_WEAK_FUNC(sub_831885E8);
PPC_FUNC_IMPL(__imp__sub_831885E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10900
	ctx.r3.s64 = ctx.r11.s64 + 10900;
	// bl 0x82ca7538
	ctx.lr = 0x83188600;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188618"))) PPC_WEAK_FUNC(sub_83188618);
PPC_FUNC_IMPL(__imp__sub_83188618) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10920
	ctx.r3.s64 = ctx.r11.s64 + 10920;
	// bl 0x82ca7538
	ctx.lr = 0x83188630;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188648"))) PPC_WEAK_FUNC(sub_83188648);
PPC_FUNC_IMPL(__imp__sub_83188648) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10944
	ctx.r3.s64 = ctx.r11.s64 + 10944;
	// bl 0x82ca7538
	ctx.lr = 0x83188660;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188678"))) PPC_WEAK_FUNC(sub_83188678);
PPC_FUNC_IMPL(__imp__sub_83188678) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10968
	ctx.r3.s64 = ctx.r11.s64 + 10968;
	// bl 0x82ca7538
	ctx.lr = 0x83188690;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831886A8"))) PPC_WEAK_FUNC(sub_831886A8);
PPC_FUNC_IMPL(__imp__sub_831886A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10992
	ctx.r3.s64 = ctx.r11.s64 + 10992;
	// bl 0x82ca7538
	ctx.lr = 0x831886C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4500, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831886D8"))) PPC_WEAK_FUNC(sub_831886D8);
PPC_FUNC_IMPL(__imp__sub_831886D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11008
	ctx.r3.s64 = ctx.r11.s64 + 11008;
	// bl 0x82ca7538
	ctx.lr = 0x831886F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188708"))) PPC_WEAK_FUNC(sub_83188708);
PPC_FUNC_IMPL(__imp__sub_83188708) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11024
	ctx.r3.s64 = ctx.r11.s64 + 11024;
	// bl 0x82ca7538
	ctx.lr = 0x83188720;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188738"))) PPC_WEAK_FUNC(sub_83188738);
PPC_FUNC_IMPL(__imp__sub_83188738) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11040
	ctx.r3.s64 = ctx.r11.s64 + 11040;
	// bl 0x82ca7538
	ctx.lr = 0x83188750;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4084, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188768"))) PPC_WEAK_FUNC(sub_83188768);
PPC_FUNC_IMPL(__imp__sub_83188768) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11056
	ctx.r3.s64 = ctx.r11.s64 + 11056;
	// bl 0x82ca7538
	ctx.lr = 0x83188780;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188798"))) PPC_WEAK_FUNC(sub_83188798);
PPC_FUNC_IMPL(__imp__sub_83188798) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11080
	ctx.r3.s64 = ctx.r11.s64 + 11080;
	// bl 0x82ca7538
	ctx.lr = 0x831887B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831887C8"))) PPC_WEAK_FUNC(sub_831887C8);
PPC_FUNC_IMPL(__imp__sub_831887C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11096
	ctx.r3.s64 = ctx.r11.s64 + 11096;
	// bl 0x82ca7538
	ctx.lr = 0x831887E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831887F8"))) PPC_WEAK_FUNC(sub_831887F8);
PPC_FUNC_IMPL(__imp__sub_831887F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11112
	ctx.r3.s64 = ctx.r11.s64 + 11112;
	// bl 0x82ca7538
	ctx.lr = 0x83188810;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188828"))) PPC_WEAK_FUNC(sub_83188828);
PPC_FUNC_IMPL(__imp__sub_83188828) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11132
	ctx.r3.s64 = ctx.r11.s64 + 11132;
	// bl 0x82ca7538
	ctx.lr = 0x83188840;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188858"))) PPC_WEAK_FUNC(sub_83188858);
PPC_FUNC_IMPL(__imp__sub_83188858) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11152
	ctx.r3.s64 = ctx.r11.s64 + 11152;
	// bl 0x82ca7538
	ctx.lr = 0x83188870;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188888"))) PPC_WEAK_FUNC(sub_83188888);
PPC_FUNC_IMPL(__imp__sub_83188888) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11168
	ctx.r3.s64 = ctx.r11.s64 + 11168;
	// bl 0x82ca7538
	ctx.lr = 0x831888A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831888B8"))) PPC_WEAK_FUNC(sub_831888B8);
PPC_FUNC_IMPL(__imp__sub_831888B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11188
	ctx.r3.s64 = ctx.r11.s64 + 11188;
	// bl 0x82ca7538
	ctx.lr = 0x831888D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831888E8"))) PPC_WEAK_FUNC(sub_831888E8);
PPC_FUNC_IMPL(__imp__sub_831888E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11208
	ctx.r3.s64 = ctx.r11.s64 + 11208;
	// bl 0x82ca7538
	ctx.lr = 0x83188900;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188918"))) PPC_WEAK_FUNC(sub_83188918);
PPC_FUNC_IMPL(__imp__sub_83188918) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11232
	ctx.r3.s64 = ctx.r11.s64 + 11232;
	// bl 0x82ca7538
	ctx.lr = 0x83188930;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188948"))) PPC_WEAK_FUNC(sub_83188948);
PPC_FUNC_IMPL(__imp__sub_83188948) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11252
	ctx.r3.s64 = ctx.r11.s64 + 11252;
	// bl 0x82ca7538
	ctx.lr = 0x83188960;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188978"))) PPC_WEAK_FUNC(sub_83188978);
PPC_FUNC_IMPL(__imp__sub_83188978) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11300
	ctx.r3.s64 = ctx.r11.s64 + 11300;
	// bl 0x82ca7538
	ctx.lr = 0x83188990;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4080, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831889A8"))) PPC_WEAK_FUNC(sub_831889A8);
PPC_FUNC_IMPL(__imp__sub_831889A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11348
	ctx.r3.s64 = ctx.r11.s64 + 11348;
	// bl 0x82ca7538
	ctx.lr = 0x831889C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831889D8"))) PPC_WEAK_FUNC(sub_831889D8);
PPC_FUNC_IMPL(__imp__sub_831889D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11396
	ctx.r3.s64 = ctx.r11.s64 + 11396;
	// bl 0x82ca7538
	ctx.lr = 0x831889F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4504, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188A08"))) PPC_WEAK_FUNC(sub_83188A08);
PPC_FUNC_IMPL(__imp__sub_83188A08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11440
	ctx.r3.s64 = ctx.r11.s64 + 11440;
	// bl 0x82ca7538
	ctx.lr = 0x83188A20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188A38"))) PPC_WEAK_FUNC(sub_83188A38);
PPC_FUNC_IMPL(__imp__sub_83188A38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82ca7538
	ctx.lr = 0x83188A50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188A68"))) PPC_WEAK_FUNC(sub_83188A68);
PPC_FUNC_IMPL(__imp__sub_83188A68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11516
	ctx.r3.s64 = ctx.r11.s64 + 11516;
	// bl 0x82ca7538
	ctx.lr = 0x83188A80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188A98"))) PPC_WEAK_FUNC(sub_83188A98);
PPC_FUNC_IMPL(__imp__sub_83188A98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11548
	ctx.r3.s64 = ctx.r11.s64 + 11548;
	// bl 0x82ca7538
	ctx.lr = 0x83188AB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188AC8"))) PPC_WEAK_FUNC(sub_83188AC8);
PPC_FUNC_IMPL(__imp__sub_83188AC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11568
	ctx.r3.s64 = ctx.r11.s64 + 11568;
	// bl 0x82ca7538
	ctx.lr = 0x83188AE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188AF8"))) PPC_WEAK_FUNC(sub_83188AF8);
PPC_FUNC_IMPL(__imp__sub_83188AF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11592
	ctx.r3.s64 = ctx.r11.s64 + 11592;
	// bl 0x82ca7538
	ctx.lr = 0x83188B10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4068, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188B28"))) PPC_WEAK_FUNC(sub_83188B28);
PPC_FUNC_IMPL(__imp__sub_83188B28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11616
	ctx.r3.s64 = ctx.r11.s64 + 11616;
	// bl 0x82ca7538
	ctx.lr = 0x83188B40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4072, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188B58"))) PPC_WEAK_FUNC(sub_83188B58);
PPC_FUNC_IMPL(__imp__sub_83188B58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11644
	ctx.r3.s64 = ctx.r11.s64 + 11644;
	// bl 0x82ca7538
	ctx.lr = 0x83188B70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188B88"))) PPC_WEAK_FUNC(sub_83188B88);
PPC_FUNC_IMPL(__imp__sub_83188B88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11668
	ctx.r3.s64 = ctx.r11.s64 + 11668;
	// bl 0x82ca7538
	ctx.lr = 0x83188BA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188BB8"))) PPC_WEAK_FUNC(sub_83188BB8);
PPC_FUNC_IMPL(__imp__sub_83188BB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11692
	ctx.r3.s64 = ctx.r11.s64 + 11692;
	// bl 0x82ca7538
	ctx.lr = 0x83188BD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4236, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188BE8"))) PPC_WEAK_FUNC(sub_83188BE8);
PPC_FUNC_IMPL(__imp__sub_83188BE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11712
	ctx.r3.s64 = ctx.r11.s64 + 11712;
	// bl 0x82ca7538
	ctx.lr = 0x83188C00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188C18"))) PPC_WEAK_FUNC(sub_83188C18);
PPC_FUNC_IMPL(__imp__sub_83188C18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11744
	ctx.r3.s64 = ctx.r11.s64 + 11744;
	// bl 0x82ca7538
	ctx.lr = 0x83188C30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4556, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188C48"))) PPC_WEAK_FUNC(sub_83188C48);
PPC_FUNC_IMPL(__imp__sub_83188C48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11776
	ctx.r3.s64 = ctx.r11.s64 + 11776;
	// bl 0x82ca7538
	ctx.lr = 0x83188C60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188C78"))) PPC_WEAK_FUNC(sub_83188C78);
PPC_FUNC_IMPL(__imp__sub_83188C78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11800
	ctx.r3.s64 = ctx.r11.s64 + 11800;
	// bl 0x82ca7538
	ctx.lr = 0x83188C90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188CA8"))) PPC_WEAK_FUNC(sub_83188CA8);
PPC_FUNC_IMPL(__imp__sub_83188CA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11820
	ctx.r3.s64 = ctx.r11.s64 + 11820;
	// bl 0x82ca7538
	ctx.lr = 0x83188CC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188CD8"))) PPC_WEAK_FUNC(sub_83188CD8);
PPC_FUNC_IMPL(__imp__sub_83188CD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11844
	ctx.r3.s64 = ctx.r11.s64 + 11844;
	// bl 0x82ca7538
	ctx.lr = 0x83188CF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188D08"))) PPC_WEAK_FUNC(sub_83188D08);
PPC_FUNC_IMPL(__imp__sub_83188D08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11868
	ctx.r3.s64 = ctx.r11.s64 + 11868;
	// bl 0x82ca7538
	ctx.lr = 0x83188D20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188D38"))) PPC_WEAK_FUNC(sub_83188D38);
PPC_FUNC_IMPL(__imp__sub_83188D38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11888
	ctx.r3.s64 = ctx.r11.s64 + 11888;
	// bl 0x82ca7538
	ctx.lr = 0x83188D50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188D68"))) PPC_WEAK_FUNC(sub_83188D68);
PPC_FUNC_IMPL(__imp__sub_83188D68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11908
	ctx.r3.s64 = ctx.r11.s64 + 11908;
	// bl 0x82ca7538
	ctx.lr = 0x83188D80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4700, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188D98"))) PPC_WEAK_FUNC(sub_83188D98);
PPC_FUNC_IMPL(__imp__sub_83188D98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11928
	ctx.r3.s64 = ctx.r11.s64 + 11928;
	// bl 0x82ca7538
	ctx.lr = 0x83188DB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4580, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188DC8"))) PPC_WEAK_FUNC(sub_83188DC8);
PPC_FUNC_IMPL(__imp__sub_83188DC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11952
	ctx.r3.s64 = ctx.r11.s64 + 11952;
	// bl 0x82ca7538
	ctx.lr = 0x83188DE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188DF8"))) PPC_WEAK_FUNC(sub_83188DF8);
PPC_FUNC_IMPL(__imp__sub_83188DF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11976
	ctx.r3.s64 = ctx.r11.s64 + 11976;
	// bl 0x82ca7538
	ctx.lr = 0x83188E10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4052(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4052, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188E28"))) PPC_WEAK_FUNC(sub_83188E28);
PPC_FUNC_IMPL(__imp__sub_83188E28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12000
	ctx.r3.s64 = ctx.r11.s64 + 12000;
	// bl 0x82ca7538
	ctx.lr = 0x83188E40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188E58"))) PPC_WEAK_FUNC(sub_83188E58);
PPC_FUNC_IMPL(__imp__sub_83188E58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12028
	ctx.r3.s64 = ctx.r11.s64 + 12028;
	// bl 0x82ca7538
	ctx.lr = 0x83188E70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188E88"))) PPC_WEAK_FUNC(sub_83188E88);
PPC_FUNC_IMPL(__imp__sub_83188E88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12052
	ctx.r3.s64 = ctx.r11.s64 + 12052;
	// bl 0x82ca7538
	ctx.lr = 0x83188EA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188EB8"))) PPC_WEAK_FUNC(sub_83188EB8);
PPC_FUNC_IMPL(__imp__sub_83188EB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12068
	ctx.r3.s64 = ctx.r11.s64 + 12068;
	// bl 0x82ca7538
	ctx.lr = 0x83188ED0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188EE8"))) PPC_WEAK_FUNC(sub_83188EE8);
PPC_FUNC_IMPL(__imp__sub_83188EE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12088
	ctx.r3.s64 = ctx.r11.s64 + 12088;
	// bl 0x82ca7538
	ctx.lr = 0x83188F00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188F18"))) PPC_WEAK_FUNC(sub_83188F18);
PPC_FUNC_IMPL(__imp__sub_83188F18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7792
	ctx.r3.s64 = ctx.r11.s64 + 7792;
	// bl 0x82ca7538
	ctx.lr = 0x83188F30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188F48"))) PPC_WEAK_FUNC(sub_83188F48);
PPC_FUNC_IMPL(__imp__sub_83188F48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12108
	ctx.r3.s64 = ctx.r11.s64 + 12108;
	// bl 0x82ca7538
	ctx.lr = 0x83188F60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188F78"))) PPC_WEAK_FUNC(sub_83188F78);
PPC_FUNC_IMPL(__imp__sub_83188F78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12128
	ctx.r3.s64 = ctx.r11.s64 + 12128;
	// bl 0x82ca7538
	ctx.lr = 0x83188F90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188FA8"))) PPC_WEAK_FUNC(sub_83188FA8);
PPC_FUNC_IMPL(__imp__sub_83188FA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12144
	ctx.r3.s64 = ctx.r11.s64 + 12144;
	// bl 0x82ca7538
	ctx.lr = 0x83188FC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83188FD8"))) PPC_WEAK_FUNC(sub_83188FD8);
PPC_FUNC_IMPL(__imp__sub_83188FD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12164
	ctx.r3.s64 = ctx.r11.s64 + 12164;
	// bl 0x82ca7538
	ctx.lr = 0x83188FF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4592, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189008"))) PPC_WEAK_FUNC(sub_83189008);
PPC_FUNC_IMPL(__imp__sub_83189008) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,7992
	ctx.r3.s64 = ctx.r11.s64 + 7992;
	// bl 0x82ca7538
	ctx.lr = 0x83189020;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4324, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189038"))) PPC_WEAK_FUNC(sub_83189038);
PPC_FUNC_IMPL(__imp__sub_83189038) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12180
	ctx.r3.s64 = ctx.r11.s64 + 12180;
	// bl 0x82ca7538
	ctx.lr = 0x83189050;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189068"))) PPC_WEAK_FUNC(sub_83189068);
PPC_FUNC_IMPL(__imp__sub_83189068) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12196
	ctx.r3.s64 = ctx.r11.s64 + 12196;
	// bl 0x82ca7538
	ctx.lr = 0x83189080;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189098"))) PPC_WEAK_FUNC(sub_83189098);
PPC_FUNC_IMPL(__imp__sub_83189098) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12216
	ctx.r3.s64 = ctx.r11.s64 + 12216;
	// bl 0x82ca7538
	ctx.lr = 0x831890B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831890C8"))) PPC_WEAK_FUNC(sub_831890C8);
PPC_FUNC_IMPL(__imp__sub_831890C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12236
	ctx.r3.s64 = ctx.r11.s64 + 12236;
	// bl 0x82ca7538
	ctx.lr = 0x831890E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831890F8"))) PPC_WEAK_FUNC(sub_831890F8);
PPC_FUNC_IMPL(__imp__sub_831890F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12256
	ctx.r3.s64 = ctx.r11.s64 + 12256;
	// bl 0x82ca7538
	ctx.lr = 0x83189110;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189128"))) PPC_WEAK_FUNC(sub_83189128);
PPC_FUNC_IMPL(__imp__sub_83189128) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12280
	ctx.r3.s64 = ctx.r11.s64 + 12280;
	// bl 0x82ca7538
	ctx.lr = 0x83189140;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189158"))) PPC_WEAK_FUNC(sub_83189158);
PPC_FUNC_IMPL(__imp__sub_83189158) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12300
	ctx.r3.s64 = ctx.r11.s64 + 12300;
	// bl 0x82ca7538
	ctx.lr = 0x83189170;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4124, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189188"))) PPC_WEAK_FUNC(sub_83189188);
PPC_FUNC_IMPL(__imp__sub_83189188) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12324
	ctx.r3.s64 = ctx.r11.s64 + 12324;
	// bl 0x82ca7538
	ctx.lr = 0x831891A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831891B8"))) PPC_WEAK_FUNC(sub_831891B8);
PPC_FUNC_IMPL(__imp__sub_831891B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12348
	ctx.r3.s64 = ctx.r11.s64 + 12348;
	// bl 0x82ca7538
	ctx.lr = 0x831891D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831891E8"))) PPC_WEAK_FUNC(sub_831891E8);
PPC_FUNC_IMPL(__imp__sub_831891E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12372
	ctx.r3.s64 = ctx.r11.s64 + 12372;
	// bl 0x82ca7538
	ctx.lr = 0x83189200;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189218"))) PPC_WEAK_FUNC(sub_83189218);
PPC_FUNC_IMPL(__imp__sub_83189218) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12400
	ctx.r3.s64 = ctx.r11.s64 + 12400;
	// bl 0x82ca7538
	ctx.lr = 0x83189230;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4624, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189248"))) PPC_WEAK_FUNC(sub_83189248);
PPC_FUNC_IMPL(__imp__sub_83189248) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12436
	ctx.r3.s64 = ctx.r11.s64 + 12436;
	// bl 0x82ca7538
	ctx.lr = 0x83189260;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189278"))) PPC_WEAK_FUNC(sub_83189278);
PPC_FUNC_IMPL(__imp__sub_83189278) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12472
	ctx.r3.s64 = ctx.r11.s64 + 12472;
	// bl 0x82ca7538
	ctx.lr = 0x83189290;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831892A8"))) PPC_WEAK_FUNC(sub_831892A8);
PPC_FUNC_IMPL(__imp__sub_831892A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12512
	ctx.r3.s64 = ctx.r11.s64 + 12512;
	// bl 0x82ca7538
	ctx.lr = 0x831892C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831892D8"))) PPC_WEAK_FUNC(sub_831892D8);
PPC_FUNC_IMPL(__imp__sub_831892D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12532
	ctx.r3.s64 = ctx.r11.s64 + 12532;
	// bl 0x82ca7538
	ctx.lr = 0x831892F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189308"))) PPC_WEAK_FUNC(sub_83189308);
PPC_FUNC_IMPL(__imp__sub_83189308) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12564
	ctx.r3.s64 = ctx.r11.s64 + 12564;
	// bl 0x82ca7538
	ctx.lr = 0x83189320;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189338"))) PPC_WEAK_FUNC(sub_83189338);
PPC_FUNC_IMPL(__imp__sub_83189338) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12608
	ctx.r3.s64 = ctx.r11.s64 + 12608;
	// bl 0x82ca7538
	ctx.lr = 0x83189350;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189368"))) PPC_WEAK_FUNC(sub_83189368);
PPC_FUNC_IMPL(__imp__sub_83189368) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12640
	ctx.r3.s64 = ctx.r11.s64 + 12640;
	// bl 0x82ca7538
	ctx.lr = 0x83189380;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189398"))) PPC_WEAK_FUNC(sub_83189398);
PPC_FUNC_IMPL(__imp__sub_83189398) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12676
	ctx.r3.s64 = ctx.r11.s64 + 12676;
	// bl 0x82ca7538
	ctx.lr = 0x831893B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4600, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831893C8"))) PPC_WEAK_FUNC(sub_831893C8);
PPC_FUNC_IMPL(__imp__sub_831893C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12700
	ctx.r3.s64 = ctx.r11.s64 + 12700;
	// bl 0x82ca7538
	ctx.lr = 0x831893E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831893F8"))) PPC_WEAK_FUNC(sub_831893F8);
PPC_FUNC_IMPL(__imp__sub_831893F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12728
	ctx.r3.s64 = ctx.r11.s64 + 12728;
	// bl 0x82ca7538
	ctx.lr = 0x83189410;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189428"))) PPC_WEAK_FUNC(sub_83189428);
PPC_FUNC_IMPL(__imp__sub_83189428) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12752
	ctx.r3.s64 = ctx.r11.s64 + 12752;
	// bl 0x82ca7538
	ctx.lr = 0x83189440;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189458"))) PPC_WEAK_FUNC(sub_83189458);
PPC_FUNC_IMPL(__imp__sub_83189458) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12768
	ctx.r3.s64 = ctx.r11.s64 + 12768;
	// bl 0x82ca7538
	ctx.lr = 0x83189470;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189488"))) PPC_WEAK_FUNC(sub_83189488);
PPC_FUNC_IMPL(__imp__sub_83189488) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12792
	ctx.r3.s64 = ctx.r11.s64 + 12792;
	// bl 0x82ca7538
	ctx.lr = 0x831894A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4336, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831894B8"))) PPC_WEAK_FUNC(sub_831894B8);
PPC_FUNC_IMPL(__imp__sub_831894B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12816
	ctx.r3.s64 = ctx.r11.s64 + 12816;
	// bl 0x82ca7538
	ctx.lr = 0x831894D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831894E8"))) PPC_WEAK_FUNC(sub_831894E8);
PPC_FUNC_IMPL(__imp__sub_831894E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12848
	ctx.r3.s64 = ctx.r11.s64 + 12848;
	// bl 0x82ca7538
	ctx.lr = 0x83189500;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189518"))) PPC_WEAK_FUNC(sub_83189518);
PPC_FUNC_IMPL(__imp__sub_83189518) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12876
	ctx.r3.s64 = ctx.r11.s64 + 12876;
	// bl 0x82ca7538
	ctx.lr = 0x83189530;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4076, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189548"))) PPC_WEAK_FUNC(sub_83189548);
PPC_FUNC_IMPL(__imp__sub_83189548) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12904
	ctx.r3.s64 = ctx.r11.s64 + 12904;
	// bl 0x82ca7538
	ctx.lr = 0x83189560;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4404, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189578"))) PPC_WEAK_FUNC(sub_83189578);
PPC_FUNC_IMPL(__imp__sub_83189578) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12940
	ctx.r3.s64 = ctx.r11.s64 + 12940;
	// bl 0x82ca7538
	ctx.lr = 0x83189590;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831895A8"))) PPC_WEAK_FUNC(sub_831895A8);
PPC_FUNC_IMPL(__imp__sub_831895A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12976
	ctx.r3.s64 = ctx.r11.s64 + 12976;
	// bl 0x82ca7538
	ctx.lr = 0x831895C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831895D8"))) PPC_WEAK_FUNC(sub_831895D8);
PPC_FUNC_IMPL(__imp__sub_831895D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13008
	ctx.r3.s64 = ctx.r11.s64 + 13008;
	// bl 0x82ca7538
	ctx.lr = 0x831895F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189608"))) PPC_WEAK_FUNC(sub_83189608);
PPC_FUNC_IMPL(__imp__sub_83189608) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13048
	ctx.r3.s64 = ctx.r11.s64 + 13048;
	// bl 0x82ca7538
	ctx.lr = 0x83189620;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4584, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189638"))) PPC_WEAK_FUNC(sub_83189638);
PPC_FUNC_IMPL(__imp__sub_83189638) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13080
	ctx.r3.s64 = ctx.r11.s64 + 13080;
	// bl 0x82ca7538
	ctx.lr = 0x83189650;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189668"))) PPC_WEAK_FUNC(sub_83189668);
PPC_FUNC_IMPL(__imp__sub_83189668) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13108
	ctx.r3.s64 = ctx.r11.s64 + 13108;
	// bl 0x82ca7538
	ctx.lr = 0x83189680;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189698"))) PPC_WEAK_FUNC(sub_83189698);
PPC_FUNC_IMPL(__imp__sub_83189698) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13132
	ctx.r3.s64 = ctx.r11.s64 + 13132;
	// bl 0x82ca7538
	ctx.lr = 0x831896B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831896C8"))) PPC_WEAK_FUNC(sub_831896C8);
PPC_FUNC_IMPL(__imp__sub_831896C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13156
	ctx.r3.s64 = ctx.r11.s64 + 13156;
	// bl 0x82ca7538
	ctx.lr = 0x831896E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831896F8"))) PPC_WEAK_FUNC(sub_831896F8);
PPC_FUNC_IMPL(__imp__sub_831896F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13184
	ctx.r3.s64 = ctx.r11.s64 + 13184;
	// bl 0x82ca7538
	ctx.lr = 0x83189710;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189728"))) PPC_WEAK_FUNC(sub_83189728);
PPC_FUNC_IMPL(__imp__sub_83189728) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13208
	ctx.r3.s64 = ctx.r11.s64 + 13208;
	// bl 0x82ca7538
	ctx.lr = 0x83189740;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4112, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189758"))) PPC_WEAK_FUNC(sub_83189758);
PPC_FUNC_IMPL(__imp__sub_83189758) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13228
	ctx.r3.s64 = ctx.r11.s64 + 13228;
	// bl 0x82ca7538
	ctx.lr = 0x83189770;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189788"))) PPC_WEAK_FUNC(sub_83189788);
PPC_FUNC_IMPL(__imp__sub_83189788) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13256
	ctx.r3.s64 = ctx.r11.s64 + 13256;
	// bl 0x82ca7538
	ctx.lr = 0x831897A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831897B8"))) PPC_WEAK_FUNC(sub_831897B8);
PPC_FUNC_IMPL(__imp__sub_831897B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// bl 0x82ca7538
	ctx.lr = 0x831897D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831897E8"))) PPC_WEAK_FUNC(sub_831897E8);
PPC_FUNC_IMPL(__imp__sub_831897E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13304
	ctx.r3.s64 = ctx.r11.s64 + 13304;
	// bl 0x82ca7538
	ctx.lr = 0x83189800;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189818"))) PPC_WEAK_FUNC(sub_83189818);
PPC_FUNC_IMPL(__imp__sub_83189818) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13332
	ctx.r3.s64 = ctx.r11.s64 + 13332;
	// bl 0x82ca7538
	ctx.lr = 0x83189830;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189848"))) PPC_WEAK_FUNC(sub_83189848);
PPC_FUNC_IMPL(__imp__sub_83189848) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13356
	ctx.r3.s64 = ctx.r11.s64 + 13356;
	// bl 0x82ca7538
	ctx.lr = 0x83189860;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189878"))) PPC_WEAK_FUNC(sub_83189878);
PPC_FUNC_IMPL(__imp__sub_83189878) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13384
	ctx.r3.s64 = ctx.r11.s64 + 13384;
	// bl 0x82ca7538
	ctx.lr = 0x83189890;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831898A8"))) PPC_WEAK_FUNC(sub_831898A8);
PPC_FUNC_IMPL(__imp__sub_831898A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13412
	ctx.r3.s64 = ctx.r11.s64 + 13412;
	// bl 0x82ca7538
	ctx.lr = 0x831898C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831898D8"))) PPC_WEAK_FUNC(sub_831898D8);
PPC_FUNC_IMPL(__imp__sub_831898D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10156
	ctx.r3.s64 = ctx.r11.s64 + 10156;
	// bl 0x82ca7538
	ctx.lr = 0x831898F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189908"))) PPC_WEAK_FUNC(sub_83189908);
PPC_FUNC_IMPL(__imp__sub_83189908) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13440
	ctx.r3.s64 = ctx.r11.s64 + 13440;
	// bl 0x82ca7538
	ctx.lr = 0x83189920;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189938"))) PPC_WEAK_FUNC(sub_83189938);
PPC_FUNC_IMPL(__imp__sub_83189938) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13460
	ctx.r3.s64 = ctx.r11.s64 + 13460;
	// bl 0x82ca7538
	ctx.lr = 0x83189950;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189968"))) PPC_WEAK_FUNC(sub_83189968);
PPC_FUNC_IMPL(__imp__sub_83189968) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13488
	ctx.r3.s64 = ctx.r11.s64 + 13488;
	// bl 0x82ca7538
	ctx.lr = 0x83189980;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189998"))) PPC_WEAK_FUNC(sub_83189998);
PPC_FUNC_IMPL(__imp__sub_83189998) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13512
	ctx.r3.s64 = ctx.r11.s64 + 13512;
	// bl 0x82ca7538
	ctx.lr = 0x831899B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831899C8"))) PPC_WEAK_FUNC(sub_831899C8);
PPC_FUNC_IMPL(__imp__sub_831899C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13540
	ctx.r3.s64 = ctx.r11.s64 + 13540;
	// bl 0x82ca7538
	ctx.lr = 0x831899E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831899F8"))) PPC_WEAK_FUNC(sub_831899F8);
PPC_FUNC_IMPL(__imp__sub_831899F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13568
	ctx.r3.s64 = ctx.r11.s64 + 13568;
	// bl 0x82ca7538
	ctx.lr = 0x83189A10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189A28"))) PPC_WEAK_FUNC(sub_83189A28);
PPC_FUNC_IMPL(__imp__sub_83189A28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13600
	ctx.r3.s64 = ctx.r11.s64 + 13600;
	// bl 0x82ca7538
	ctx.lr = 0x83189A40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189A58"))) PPC_WEAK_FUNC(sub_83189A58);
PPC_FUNC_IMPL(__imp__sub_83189A58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13636
	ctx.r3.s64 = ctx.r11.s64 + 13636;
	// bl 0x82ca7538
	ctx.lr = 0x83189A70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189A88"))) PPC_WEAK_FUNC(sub_83189A88);
PPC_FUNC_IMPL(__imp__sub_83189A88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13656
	ctx.r3.s64 = ctx.r11.s64 + 13656;
	// bl 0x82ca7538
	ctx.lr = 0x83189AA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189AB8"))) PPC_WEAK_FUNC(sub_83189AB8);
PPC_FUNC_IMPL(__imp__sub_83189AB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13672
	ctx.r3.s64 = ctx.r11.s64 + 13672;
	// bl 0x82ca7538
	ctx.lr = 0x83189AD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189AE8"))) PPC_WEAK_FUNC(sub_83189AE8);
PPC_FUNC_IMPL(__imp__sub_83189AE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// bl 0x82ca7538
	ctx.lr = 0x83189B00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189B18"))) PPC_WEAK_FUNC(sub_83189B18);
PPC_FUNC_IMPL(__imp__sub_83189B18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13712
	ctx.r3.s64 = ctx.r11.s64 + 13712;
	// bl 0x82ca7538
	ctx.lr = 0x83189B30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189B48"))) PPC_WEAK_FUNC(sub_83189B48);
PPC_FUNC_IMPL(__imp__sub_83189B48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13732
	ctx.r3.s64 = ctx.r11.s64 + 13732;
	// bl 0x82ca7538
	ctx.lr = 0x83189B60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189B78"))) PPC_WEAK_FUNC(sub_83189B78);
PPC_FUNC_IMPL(__imp__sub_83189B78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13752
	ctx.r3.s64 = ctx.r11.s64 + 13752;
	// bl 0x82ca7538
	ctx.lr = 0x83189B90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189BA8"))) PPC_WEAK_FUNC(sub_83189BA8);
PPC_FUNC_IMPL(__imp__sub_83189BA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13776
	ctx.r3.s64 = ctx.r11.s64 + 13776;
	// bl 0x82ca7538
	ctx.lr = 0x83189BC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4328, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189BD8"))) PPC_WEAK_FUNC(sub_83189BD8);
PPC_FUNC_IMPL(__imp__sub_83189BD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13804
	ctx.r3.s64 = ctx.r11.s64 + 13804;
	// bl 0x82ca7538
	ctx.lr = 0x83189BF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189C08"))) PPC_WEAK_FUNC(sub_83189C08);
PPC_FUNC_IMPL(__imp__sub_83189C08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13832
	ctx.r3.s64 = ctx.r11.s64 + 13832;
	// bl 0x82ca7538
	ctx.lr = 0x83189C20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189C38"))) PPC_WEAK_FUNC(sub_83189C38);
PPC_FUNC_IMPL(__imp__sub_83189C38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13860
	ctx.r3.s64 = ctx.r11.s64 + 13860;
	// bl 0x82ca7538
	ctx.lr = 0x83189C50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189C68"))) PPC_WEAK_FUNC(sub_83189C68);
PPC_FUNC_IMPL(__imp__sub_83189C68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13880
	ctx.r3.s64 = ctx.r11.s64 + 13880;
	// bl 0x82ca7538
	ctx.lr = 0x83189C80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4704, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189C98"))) PPC_WEAK_FUNC(sub_83189C98);
PPC_FUNC_IMPL(__imp__sub_83189C98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13904
	ctx.r3.s64 = ctx.r11.s64 + 13904;
	// bl 0x82ca7538
	ctx.lr = 0x83189CB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189CC8"))) PPC_WEAK_FUNC(sub_83189CC8);
PPC_FUNC_IMPL(__imp__sub_83189CC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13932
	ctx.r3.s64 = ctx.r11.s64 + 13932;
	// bl 0x82ca7538
	ctx.lr = 0x83189CE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189CF8"))) PPC_WEAK_FUNC(sub_83189CF8);
PPC_FUNC_IMPL(__imp__sub_83189CF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13956
	ctx.r3.s64 = ctx.r11.s64 + 13956;
	// bl 0x82ca7538
	ctx.lr = 0x83189D10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189D28"))) PPC_WEAK_FUNC(sub_83189D28);
PPC_FUNC_IMPL(__imp__sub_83189D28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,13984
	ctx.r3.s64 = ctx.r11.s64 + 13984;
	// bl 0x82ca7538
	ctx.lr = 0x83189D40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189D58"))) PPC_WEAK_FUNC(sub_83189D58);
PPC_FUNC_IMPL(__imp__sub_83189D58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14012
	ctx.r3.s64 = ctx.r11.s64 + 14012;
	// bl 0x82ca7538
	ctx.lr = 0x83189D70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189D88"))) PPC_WEAK_FUNC(sub_83189D88);
PPC_FUNC_IMPL(__imp__sub_83189D88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14040
	ctx.r3.s64 = ctx.r11.s64 + 14040;
	// bl 0x82ca7538
	ctx.lr = 0x83189DA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189DB8"))) PPC_WEAK_FUNC(sub_83189DB8);
PPC_FUNC_IMPL(__imp__sub_83189DB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14076
	ctx.r3.s64 = ctx.r11.s64 + 14076;
	// bl 0x82ca7538
	ctx.lr = 0x83189DD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189DE8"))) PPC_WEAK_FUNC(sub_83189DE8);
PPC_FUNC_IMPL(__imp__sub_83189DE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14108
	ctx.r3.s64 = ctx.r11.s64 + 14108;
	// bl 0x82ca7538
	ctx.lr = 0x83189E00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189E18"))) PPC_WEAK_FUNC(sub_83189E18);
PPC_FUNC_IMPL(__imp__sub_83189E18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14124
	ctx.r3.s64 = ctx.r11.s64 + 14124;
	// bl 0x82ca7538
	ctx.lr = 0x83189E30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4596, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189E48"))) PPC_WEAK_FUNC(sub_83189E48);
PPC_FUNC_IMPL(__imp__sub_83189E48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14148
	ctx.r3.s64 = ctx.r11.s64 + 14148;
	// bl 0x82ca7538
	ctx.lr = 0x83189E60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189E78"))) PPC_WEAK_FUNC(sub_83189E78);
PPC_FUNC_IMPL(__imp__sub_83189E78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14176
	ctx.r3.s64 = ctx.r11.s64 + 14176;
	// bl 0x82ca7538
	ctx.lr = 0x83189E90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189EA8"))) PPC_WEAK_FUNC(sub_83189EA8);
PPC_FUNC_IMPL(__imp__sub_83189EA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14204
	ctx.r3.s64 = ctx.r11.s64 + 14204;
	// bl 0x82ca7538
	ctx.lr = 0x83189EC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189ED8"))) PPC_WEAK_FUNC(sub_83189ED8);
PPC_FUNC_IMPL(__imp__sub_83189ED8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14232
	ctx.r3.s64 = ctx.r11.s64 + 14232;
	// bl 0x82ca7538
	ctx.lr = 0x83189EF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189F08"))) PPC_WEAK_FUNC(sub_83189F08);
PPC_FUNC_IMPL(__imp__sub_83189F08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14256
	ctx.r3.s64 = ctx.r11.s64 + 14256;
	// bl 0x82ca7538
	ctx.lr = 0x83189F20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189F38"))) PPC_WEAK_FUNC(sub_83189F38);
PPC_FUNC_IMPL(__imp__sub_83189F38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14284
	ctx.r3.s64 = ctx.r11.s64 + 14284;
	// bl 0x82ca7538
	ctx.lr = 0x83189F50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189F68"))) PPC_WEAK_FUNC(sub_83189F68);
PPC_FUNC_IMPL(__imp__sub_83189F68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14312
	ctx.r3.s64 = ctx.r11.s64 + 14312;
	// bl 0x82ca7538
	ctx.lr = 0x83189F80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4396, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189F98"))) PPC_WEAK_FUNC(sub_83189F98);
PPC_FUNC_IMPL(__imp__sub_83189F98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14340
	ctx.r3.s64 = ctx.r11.s64 + 14340;
	// bl 0x82ca7538
	ctx.lr = 0x83189FB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189FC8"))) PPC_WEAK_FUNC(sub_83189FC8);
PPC_FUNC_IMPL(__imp__sub_83189FC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14368
	ctx.r3.s64 = ctx.r11.s64 + 14368;
	// bl 0x82ca7538
	ctx.lr = 0x83189FE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83189FF8"))) PPC_WEAK_FUNC(sub_83189FF8);
PPC_FUNC_IMPL(__imp__sub_83189FF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14400
	ctx.r3.s64 = ctx.r11.s64 + 14400;
	// bl 0x82ca7538
	ctx.lr = 0x8318A010;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4948, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A028"))) PPC_WEAK_FUNC(sub_8318A028);
PPC_FUNC_IMPL(__imp__sub_8318A028) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14432
	ctx.r3.s64 = ctx.r11.s64 + 14432;
	// bl 0x82ca7538
	ctx.lr = 0x8318A040;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A058"))) PPC_WEAK_FUNC(sub_8318A058);
PPC_FUNC_IMPL(__imp__sub_8318A058) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14464
	ctx.r3.s64 = ctx.r11.s64 + 14464;
	// bl 0x82ca7538
	ctx.lr = 0x8318A070;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A088"))) PPC_WEAK_FUNC(sub_8318A088);
PPC_FUNC_IMPL(__imp__sub_8318A088) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14484
	ctx.r3.s64 = ctx.r11.s64 + 14484;
	// bl 0x82ca7538
	ctx.lr = 0x8318A0A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A0B8"))) PPC_WEAK_FUNC(sub_8318A0B8);
PPC_FUNC_IMPL(__imp__sub_8318A0B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14500
	ctx.r3.s64 = ctx.r11.s64 + 14500;
	// bl 0x82ca7538
	ctx.lr = 0x8318A0D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A0E8"))) PPC_WEAK_FUNC(sub_8318A0E8);
PPC_FUNC_IMPL(__imp__sub_8318A0E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14516
	ctx.r3.s64 = ctx.r11.s64 + 14516;
	// bl 0x82ca7538
	ctx.lr = 0x8318A100;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A118"))) PPC_WEAK_FUNC(sub_8318A118);
PPC_FUNC_IMPL(__imp__sub_8318A118) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14532
	ctx.r3.s64 = ctx.r11.s64 + 14532;
	// bl 0x82ca7538
	ctx.lr = 0x8318A130;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A148"))) PPC_WEAK_FUNC(sub_8318A148);
PPC_FUNC_IMPL(__imp__sub_8318A148) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14552
	ctx.r3.s64 = ctx.r11.s64 + 14552;
	// bl 0x82ca7538
	ctx.lr = 0x8318A160;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4588, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A178"))) PPC_WEAK_FUNC(sub_8318A178);
PPC_FUNC_IMPL(__imp__sub_8318A178) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14596
	ctx.r3.s64 = ctx.r11.s64 + 14596;
	// bl 0x82ca7538
	ctx.lr = 0x8318A190;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A1A8"))) PPC_WEAK_FUNC(sub_8318A1A8);
PPC_FUNC_IMPL(__imp__sub_8318A1A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14640
	ctx.r3.s64 = ctx.r11.s64 + 14640;
	// bl 0x82ca7538
	ctx.lr = 0x8318A1C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A1D8"))) PPC_WEAK_FUNC(sub_8318A1D8);
PPC_FUNC_IMPL(__imp__sub_8318A1D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14656
	ctx.r3.s64 = ctx.r11.s64 + 14656;
	// bl 0x82ca7538
	ctx.lr = 0x8318A1F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A208"))) PPC_WEAK_FUNC(sub_8318A208);
PPC_FUNC_IMPL(__imp__sub_8318A208) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14676
	ctx.r3.s64 = ctx.r11.s64 + 14676;
	// bl 0x82ca7538
	ctx.lr = 0x8318A220;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A238"))) PPC_WEAK_FUNC(sub_8318A238);
PPC_FUNC_IMPL(__imp__sub_8318A238) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14700
	ctx.r3.s64 = ctx.r11.s64 + 14700;
	// bl 0x82ca7538
	ctx.lr = 0x8318A250;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A268"))) PPC_WEAK_FUNC(sub_8318A268);
PPC_FUNC_IMPL(__imp__sub_8318A268) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14724
	ctx.r3.s64 = ctx.r11.s64 + 14724;
	// bl 0x82ca7538
	ctx.lr = 0x8318A280;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A298"))) PPC_WEAK_FUNC(sub_8318A298);
PPC_FUNC_IMPL(__imp__sub_8318A298) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14744
	ctx.r3.s64 = ctx.r11.s64 + 14744;
	// bl 0x82ca7538
	ctx.lr = 0x8318A2B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A2C8"))) PPC_WEAK_FUNC(sub_8318A2C8);
PPC_FUNC_IMPL(__imp__sub_8318A2C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14772
	ctx.r3.s64 = ctx.r11.s64 + 14772;
	// bl 0x82ca7538
	ctx.lr = 0x8318A2E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A2F8"))) PPC_WEAK_FUNC(sub_8318A2F8);
PPC_FUNC_IMPL(__imp__sub_8318A2F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14800
	ctx.r3.s64 = ctx.r11.s64 + 14800;
	// bl 0x82ca7538
	ctx.lr = 0x8318A310;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A328"))) PPC_WEAK_FUNC(sub_8318A328);
PPC_FUNC_IMPL(__imp__sub_8318A328) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14836
	ctx.r3.s64 = ctx.r11.s64 + 14836;
	// bl 0x82ca7538
	ctx.lr = 0x8318A340;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4928, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A358"))) PPC_WEAK_FUNC(sub_8318A358);
PPC_FUNC_IMPL(__imp__sub_8318A358) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14872
	ctx.r3.s64 = ctx.r11.s64 + 14872;
	// bl 0x82ca7538
	ctx.lr = 0x8318A370;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A388"))) PPC_WEAK_FUNC(sub_8318A388);
PPC_FUNC_IMPL(__imp__sub_8318A388) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14912
	ctx.r3.s64 = ctx.r11.s64 + 14912;
	// bl 0x82ca7538
	ctx.lr = 0x8318A3A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A3B8"))) PPC_WEAK_FUNC(sub_8318A3B8);
PPC_FUNC_IMPL(__imp__sub_8318A3B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14948
	ctx.r3.s64 = ctx.r11.s64 + 14948;
	// bl 0x82ca7538
	ctx.lr = 0x8318A3D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A3E8"))) PPC_WEAK_FUNC(sub_8318A3E8);
PPC_FUNC_IMPL(__imp__sub_8318A3E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,14988
	ctx.r3.s64 = ctx.r11.s64 + 14988;
	// bl 0x82ca7538
	ctx.lr = 0x8318A400;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A418"))) PPC_WEAK_FUNC(sub_8318A418);
PPC_FUNC_IMPL(__imp__sub_8318A418) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15024
	ctx.r3.s64 = ctx.r11.s64 + 15024;
	// bl 0x82ca7538
	ctx.lr = 0x8318A430;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A448"))) PPC_WEAK_FUNC(sub_8318A448);
PPC_FUNC_IMPL(__imp__sub_8318A448) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15056
	ctx.r3.s64 = ctx.r11.s64 + 15056;
	// bl 0x82ca7538
	ctx.lr = 0x8318A460;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A478"))) PPC_WEAK_FUNC(sub_8318A478);
PPC_FUNC_IMPL(__imp__sub_8318A478) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15092
	ctx.r3.s64 = ctx.r11.s64 + 15092;
	// bl 0x82ca7538
	ctx.lr = 0x8318A490;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A4A8"))) PPC_WEAK_FUNC(sub_8318A4A8);
PPC_FUNC_IMPL(__imp__sub_8318A4A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15128
	ctx.r3.s64 = ctx.r11.s64 + 15128;
	// bl 0x82ca7538
	ctx.lr = 0x8318A4C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A4D8"))) PPC_WEAK_FUNC(sub_8318A4D8);
PPC_FUNC_IMPL(__imp__sub_8318A4D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15160
	ctx.r3.s64 = ctx.r11.s64 + 15160;
	// bl 0x82ca7538
	ctx.lr = 0x8318A4F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4056(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4056, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A508"))) PPC_WEAK_FUNC(sub_8318A508);
PPC_FUNC_IMPL(__imp__sub_8318A508) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15196
	ctx.r3.s64 = ctx.r11.s64 + 15196;
	// bl 0x82ca7538
	ctx.lr = 0x8318A520;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A538"))) PPC_WEAK_FUNC(sub_8318A538);
PPC_FUNC_IMPL(__imp__sub_8318A538) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15228
	ctx.r3.s64 = ctx.r11.s64 + 15228;
	// bl 0x82ca7538
	ctx.lr = 0x8318A550;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4400, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A568"))) PPC_WEAK_FUNC(sub_8318A568);
PPC_FUNC_IMPL(__imp__sub_8318A568) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15260
	ctx.r3.s64 = ctx.r11.s64 + 15260;
	// bl 0x82ca7538
	ctx.lr = 0x8318A580;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A598"))) PPC_WEAK_FUNC(sub_8318A598);
PPC_FUNC_IMPL(__imp__sub_8318A598) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15296
	ctx.r3.s64 = ctx.r11.s64 + 15296;
	// bl 0x82ca7538
	ctx.lr = 0x8318A5B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A5C8"))) PPC_WEAK_FUNC(sub_8318A5C8);
PPC_FUNC_IMPL(__imp__sub_8318A5C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15332
	ctx.r3.s64 = ctx.r11.s64 + 15332;
	// bl 0x82ca7538
	ctx.lr = 0x8318A5E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A5F8"))) PPC_WEAK_FUNC(sub_8318A5F8);
PPC_FUNC_IMPL(__imp__sub_8318A5F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15372
	ctx.r3.s64 = ctx.r11.s64 + 15372;
	// bl 0x82ca7538
	ctx.lr = 0x8318A610;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A628"))) PPC_WEAK_FUNC(sub_8318A628);
PPC_FUNC_IMPL(__imp__sub_8318A628) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15420
	ctx.r3.s64 = ctx.r11.s64 + 15420;
	// bl 0x82ca7538
	ctx.lr = 0x8318A640;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A658"))) PPC_WEAK_FUNC(sub_8318A658);
PPC_FUNC_IMPL(__imp__sub_8318A658) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15436
	ctx.r3.s64 = ctx.r11.s64 + 15436;
	// bl 0x82ca7538
	ctx.lr = 0x8318A670;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4116, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A688"))) PPC_WEAK_FUNC(sub_8318A688);
PPC_FUNC_IMPL(__imp__sub_8318A688) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15452
	ctx.r3.s64 = ctx.r11.s64 + 15452;
	// bl 0x82ca7538
	ctx.lr = 0x8318A6A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A6B8"))) PPC_WEAK_FUNC(sub_8318A6B8);
PPC_FUNC_IMPL(__imp__sub_8318A6B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15460
	ctx.r3.s64 = ctx.r11.s64 + 15460;
	// bl 0x82ca7538
	ctx.lr = 0x8318A6D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A6E8"))) PPC_WEAK_FUNC(sub_8318A6E8);
PPC_FUNC_IMPL(__imp__sub_8318A6E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15472
	ctx.r3.s64 = ctx.r11.s64 + 15472;
	// bl 0x82ca7538
	ctx.lr = 0x8318A700;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A718"))) PPC_WEAK_FUNC(sub_8318A718);
PPC_FUNC_IMPL(__imp__sub_8318A718) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15492
	ctx.r3.s64 = ctx.r11.s64 + 15492;
	// bl 0x82ca7538
	ctx.lr = 0x8318A730;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A748"))) PPC_WEAK_FUNC(sub_8318A748);
PPC_FUNC_IMPL(__imp__sub_8318A748) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15516
	ctx.r3.s64 = ctx.r11.s64 + 15516;
	// bl 0x82ca7538
	ctx.lr = 0x8318A760;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A778"))) PPC_WEAK_FUNC(sub_8318A778);
PPC_FUNC_IMPL(__imp__sub_8318A778) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15552
	ctx.r3.s64 = ctx.r11.s64 + 15552;
	// bl 0x82ca7538
	ctx.lr = 0x8318A790;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4060, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A7A8"))) PPC_WEAK_FUNC(sub_8318A7A8);
PPC_FUNC_IMPL(__imp__sub_8318A7A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15576
	ctx.r3.s64 = ctx.r11.s64 + 15576;
	// bl 0x82ca7538
	ctx.lr = 0x8318A7C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4096, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A7D8"))) PPC_WEAK_FUNC(sub_8318A7D8);
PPC_FUNC_IMPL(__imp__sub_8318A7D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15604
	ctx.r3.s64 = ctx.r11.s64 + 15604;
	// bl 0x82ca7538
	ctx.lr = 0x8318A7F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A808"))) PPC_WEAK_FUNC(sub_8318A808);
PPC_FUNC_IMPL(__imp__sub_8318A808) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15624
	ctx.r3.s64 = ctx.r11.s64 + 15624;
	// bl 0x82ca7538
	ctx.lr = 0x8318A820;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A838"))) PPC_WEAK_FUNC(sub_8318A838);
PPC_FUNC_IMPL(__imp__sub_8318A838) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15644
	ctx.r3.s64 = ctx.r11.s64 + 15644;
	// bl 0x82ca7538
	ctx.lr = 0x8318A850;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A868"))) PPC_WEAK_FUNC(sub_8318A868);
PPC_FUNC_IMPL(__imp__sub_8318A868) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15668
	ctx.r3.s64 = ctx.r11.s64 + 15668;
	// bl 0x82ca7538
	ctx.lr = 0x8318A880;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5928(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5928, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A898"))) PPC_WEAK_FUNC(sub_8318A898);
PPC_FUNC_IMPL(__imp__sub_8318A898) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15688
	ctx.r3.s64 = ctx.r11.s64 + 15688;
	// bl 0x82ca7538
	ctx.lr = 0x8318A8B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5884(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A8C8"))) PPC_WEAK_FUNC(sub_8318A8C8);
PPC_FUNC_IMPL(__imp__sub_8318A8C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15712
	ctx.r3.s64 = ctx.r11.s64 + 15712;
	// bl 0x82ca7538
	ctx.lr = 0x8318A8E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6536(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A8F8"))) PPC_WEAK_FUNC(sub_8318A8F8);
PPC_FUNC_IMPL(__imp__sub_8318A8F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15732
	ctx.r3.s64 = ctx.r11.s64 + 15732;
	// bl 0x82ca7538
	ctx.lr = 0x8318A910;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A928"))) PPC_WEAK_FUNC(sub_8318A928);
PPC_FUNC_IMPL(__imp__sub_8318A928) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15760
	ctx.r3.s64 = ctx.r11.s64 + 15760;
	// bl 0x82ca7538
	ctx.lr = 0x8318A940;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2004, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A958"))) PPC_WEAK_FUNC(sub_8318A958);
PPC_FUNC_IMPL(__imp__sub_8318A958) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15784
	ctx.r3.s64 = ctx.r11.s64 + 15784;
	// bl 0x82ca7538
	ctx.lr = 0x8318A970;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-944(r11)
	PPC_STORE_U32(ctx.r11.u32 + -944, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A988"))) PPC_WEAK_FUNC(sub_8318A988);
PPC_FUNC_IMPL(__imp__sub_8318A988) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15804
	ctx.r3.s64 = ctx.r11.s64 + 15804;
	// bl 0x82ca7538
	ctx.lr = 0x8318A9A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4952, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A9B8"))) PPC_WEAK_FUNC(sub_8318A9B8);
PPC_FUNC_IMPL(__imp__sub_8318A9B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,12052
	ctx.r3.s64 = ctx.r11.s64 + 12052;
	// bl 0x82ca7538
	ctx.lr = 0x8318A9D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6284(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318A9E8"))) PPC_WEAK_FUNC(sub_8318A9E8);
PPC_FUNC_IMPL(__imp__sub_8318A9E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15828
	ctx.r3.s64 = ctx.r11.s64 + 15828;
	// bl 0x82ca7538
	ctx.lr = 0x8318AA00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-836(r11)
	PPC_STORE_U32(ctx.r11.u32 + -836, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AA18"))) PPC_WEAK_FUNC(sub_8318AA18);
PPC_FUNC_IMPL(__imp__sub_8318AA18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15864
	ctx.r3.s64 = ctx.r11.s64 + 15864;
	// bl 0x82ca7538
	ctx.lr = 0x8318AA30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6544(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AA48"))) PPC_WEAK_FUNC(sub_8318AA48);
PPC_FUNC_IMPL(__imp__sub_8318AA48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15900
	ctx.r3.s64 = ctx.r11.s64 + 15900;
	// bl 0x82ca7538
	ctx.lr = 0x8318AA60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AA78"))) PPC_WEAK_FUNC(sub_8318AA78);
PPC_FUNC_IMPL(__imp__sub_8318AA78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15928
	ctx.r3.s64 = ctx.r11.s64 + 15928;
	// bl 0x82ca7538
	ctx.lr = 0x8318AA90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AAA8"))) PPC_WEAK_FUNC(sub_8318AAA8);
PPC_FUNC_IMPL(__imp__sub_8318AAA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15952
	ctx.r3.s64 = ctx.r11.s64 + 15952;
	// bl 0x82ca7538
	ctx.lr = 0x8318AAC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AAD8"))) PPC_WEAK_FUNC(sub_8318AAD8);
PPC_FUNC_IMPL(__imp__sub_8318AAD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15972
	ctx.r3.s64 = ctx.r11.s64 + 15972;
	// bl 0x82ca7538
	ctx.lr = 0x8318AAF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6512(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AB08"))) PPC_WEAK_FUNC(sub_8318AB08);
PPC_FUNC_IMPL(__imp__sub_8318AB08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,15992
	ctx.r3.s64 = ctx.r11.s64 + 15992;
	// bl 0x82ca7538
	ctx.lr = 0x8318AB20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2084(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2084, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AB38"))) PPC_WEAK_FUNC(sub_8318AB38);
PPC_FUNC_IMPL(__imp__sub_8318AB38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16016
	ctx.r3.s64 = ctx.r11.s64 + 16016;
	// bl 0x82ca7538
	ctx.lr = 0x8318AB50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-848(r11)
	PPC_STORE_U32(ctx.r11.u32 + -848, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AB68"))) PPC_WEAK_FUNC(sub_8318AB68);
PPC_FUNC_IMPL(__imp__sub_8318AB68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16040
	ctx.r3.s64 = ctx.r11.s64 + 16040;
	// bl 0x82ca7538
	ctx.lr = 0x8318AB80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6532(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AB98"))) PPC_WEAK_FUNC(sub_8318AB98);
PPC_FUNC_IMPL(__imp__sub_8318AB98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16064
	ctx.r3.s64 = ctx.r11.s64 + 16064;
	// bl 0x82ca7538
	ctx.lr = 0x8318ABB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318ABC8"))) PPC_WEAK_FUNC(sub_8318ABC8);
PPC_FUNC_IMPL(__imp__sub_8318ABC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16088
	ctx.r3.s64 = ctx.r11.s64 + 16088;
	// bl 0x82ca7538
	ctx.lr = 0x8318ABE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5900(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318ABF8"))) PPC_WEAK_FUNC(sub_8318ABF8);
PPC_FUNC_IMPL(__imp__sub_8318ABF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16108
	ctx.r3.s64 = ctx.r11.s64 + 16108;
	// bl 0x82ca7538
	ctx.lr = 0x8318AC10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3296(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AC28"))) PPC_WEAK_FUNC(sub_8318AC28);
PPC_FUNC_IMPL(__imp__sub_8318AC28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16140
	ctx.r3.s64 = ctx.r11.s64 + 16140;
	// bl 0x82ca7538
	ctx.lr = 0x8318AC40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6408(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AC58"))) PPC_WEAK_FUNC(sub_8318AC58);
PPC_FUNC_IMPL(__imp__sub_8318AC58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16164
	ctx.r3.s64 = ctx.r11.s64 + 16164;
	// bl 0x82ca7538
	ctx.lr = 0x8318AC70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2928, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AC88"))) PPC_WEAK_FUNC(sub_8318AC88);
PPC_FUNC_IMPL(__imp__sub_8318AC88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16196
	ctx.r3.s64 = ctx.r11.s64 + 16196;
	// bl 0x82ca7538
	ctx.lr = 0x8318ACA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6444(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318ACB8"))) PPC_WEAK_FUNC(sub_8318ACB8);
PPC_FUNC_IMPL(__imp__sub_8318ACB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16220
	ctx.r3.s64 = ctx.r11.s64 + 16220;
	// bl 0x82ca7538
	ctx.lr = 0x8318ACD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2420(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318ACE8"))) PPC_WEAK_FUNC(sub_8318ACE8);
PPC_FUNC_IMPL(__imp__sub_8318ACE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16256
	ctx.r3.s64 = ctx.r11.s64 + 16256;
	// bl 0x82ca7538
	ctx.lr = 0x8318AD00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AD18"))) PPC_WEAK_FUNC(sub_8318AD18);
PPC_FUNC_IMPL(__imp__sub_8318AD18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16288
	ctx.r3.s64 = ctx.r11.s64 + 16288;
	// bl 0x82ca7538
	ctx.lr = 0x8318AD30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AD48"))) PPC_WEAK_FUNC(sub_8318AD48);
PPC_FUNC_IMPL(__imp__sub_8318AD48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16316
	ctx.r3.s64 = ctx.r11.s64 + 16316;
	// bl 0x82ca7538
	ctx.lr = 0x8318AD60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6376(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AD78"))) PPC_WEAK_FUNC(sub_8318AD78);
PPC_FUNC_IMPL(__imp__sub_8318AD78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16332
	ctx.r3.s64 = ctx.r11.s64 + 16332;
	// bl 0x82ca7538
	ctx.lr = 0x8318AD90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-856(r11)
	PPC_STORE_U32(ctx.r11.u32 + -856, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318ADA8"))) PPC_WEAK_FUNC(sub_8318ADA8);
PPC_FUNC_IMPL(__imp__sub_8318ADA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16348
	ctx.r3.s64 = ctx.r11.s64 + 16348;
	// bl 0x82ca7538
	ctx.lr = 0x8318ADC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5996, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318ADD8"))) PPC_WEAK_FUNC(sub_8318ADD8);
PPC_FUNC_IMPL(__imp__sub_8318ADD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16368
	ctx.r3.s64 = ctx.r11.s64 + 16368;
	// bl 0x82ca7538
	ctx.lr = 0x8318ADF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-680(r11)
	PPC_STORE_U32(ctx.r11.u32 + -680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AE08"))) PPC_WEAK_FUNC(sub_8318AE08);
PPC_FUNC_IMPL(__imp__sub_8318AE08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16388
	ctx.r3.s64 = ctx.r11.s64 + 16388;
	// bl 0x82ca7538
	ctx.lr = 0x8318AE20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6548(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AE38"))) PPC_WEAK_FUNC(sub_8318AE38);
PPC_FUNC_IMPL(__imp__sub_8318AE38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16412
	ctx.r3.s64 = ctx.r11.s64 + 16412;
	// bl 0x82ca7538
	ctx.lr = 0x8318AE50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6540(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AE68"))) PPC_WEAK_FUNC(sub_8318AE68);
PPC_FUNC_IMPL(__imp__sub_8318AE68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16436
	ctx.r3.s64 = ctx.r11.s64 + 16436;
	// bl 0x82ca7538
	ctx.lr = 0x8318AE80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2728(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AE98"))) PPC_WEAK_FUNC(sub_8318AE98);
PPC_FUNC_IMPL(__imp__sub_8318AE98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16448
	ctx.r3.s64 = ctx.r11.s64 + 16448;
	// bl 0x82ca7538
	ctx.lr = 0x8318AEB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6004, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AEC8"))) PPC_WEAK_FUNC(sub_8318AEC8);
PPC_FUNC_IMPL(__imp__sub_8318AEC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16464
	ctx.r3.s64 = ctx.r11.s64 + 16464;
	// bl 0x82ca7538
	ctx.lr = 0x8318AEE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AEF8"))) PPC_WEAK_FUNC(sub_8318AEF8);
PPC_FUNC_IMPL(__imp__sub_8318AEF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16484
	ctx.r3.s64 = ctx.r11.s64 + 16484;
	// bl 0x82ca7538
	ctx.lr = 0x8318AF10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4596(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4596, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AF28"))) PPC_WEAK_FUNC(sub_8318AF28);
PPC_FUNC_IMPL(__imp__sub_8318AF28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16504
	ctx.r3.s64 = ctx.r11.s64 + 16504;
	// bl 0x82ca7538
	ctx.lr = 0x8318AF40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6524(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AF58"))) PPC_WEAK_FUNC(sub_8318AF58);
PPC_FUNC_IMPL(__imp__sub_8318AF58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16524
	ctx.r3.s64 = ctx.r11.s64 + 16524;
	// bl 0x82ca7538
	ctx.lr = 0x8318AF70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4332(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AF88"))) PPC_WEAK_FUNC(sub_8318AF88);
PPC_FUNC_IMPL(__imp__sub_8318AF88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16544
	ctx.r3.s64 = ctx.r11.s64 + 16544;
	// bl 0x82ca7538
	ctx.lr = 0x8318AFA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AFB8"))) PPC_WEAK_FUNC(sub_8318AFB8);
PPC_FUNC_IMPL(__imp__sub_8318AFB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16568
	ctx.r3.s64 = ctx.r11.s64 + 16568;
	// bl 0x82ca7538
	ctx.lr = 0x8318AFD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4904(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318AFE8"))) PPC_WEAK_FUNC(sub_8318AFE8);
PPC_FUNC_IMPL(__imp__sub_8318AFE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16588
	ctx.r3.s64 = ctx.r11.s64 + 16588;
	// bl 0x82ca7538
	ctx.lr = 0x8318B000;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4192(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B018"))) PPC_WEAK_FUNC(sub_8318B018);
PPC_FUNC_IMPL(__imp__sub_8318B018) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16608
	ctx.r3.s64 = ctx.r11.s64 + 16608;
	// bl 0x82ca7538
	ctx.lr = 0x8318B030;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6520(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B048"))) PPC_WEAK_FUNC(sub_8318B048);
PPC_FUNC_IMPL(__imp__sub_8318B048) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16620
	ctx.r3.s64 = ctx.r11.s64 + 16620;
	// bl 0x82ca7538
	ctx.lr = 0x8318B060;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5824, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B078"))) PPC_WEAK_FUNC(sub_8318B078);
PPC_FUNC_IMPL(__imp__sub_8318B078) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16632
	ctx.r3.s64 = ctx.r11.s64 + 16632;
	// bl 0x82ca7538
	ctx.lr = 0x8318B090;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6528(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B0A8"))) PPC_WEAK_FUNC(sub_8318B0A8);
PPC_FUNC_IMPL(__imp__sub_8318B0A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16644
	ctx.r3.s64 = ctx.r11.s64 + 16644;
	// bl 0x82ca7538
	ctx.lr = 0x8318B0C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6516(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B0D8"))) PPC_WEAK_FUNC(sub_8318B0D8);
PPC_FUNC_IMPL(__imp__sub_8318B0D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16664
	ctx.r3.s64 = ctx.r11.s64 + 16664;
	// bl 0x82ca7538
	ctx.lr = 0x8318B0F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6508(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B108"))) PPC_WEAK_FUNC(sub_8318B108);
PPC_FUNC_IMPL(__imp__sub_8318B108) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16688
	ctx.r3.s64 = ctx.r11.s64 + 16688;
	// bl 0x82ca7538
	ctx.lr = 0x8318B120;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4964(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B138"))) PPC_WEAK_FUNC(sub_8318B138);
PPC_FUNC_IMPL(__imp__sub_8318B138) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16712
	ctx.r3.s64 = ctx.r11.s64 + 16712;
	// bl 0x82ca7538
	ctx.lr = 0x8318B150;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-784(r11)
	PPC_STORE_U32(ctx.r11.u32 + -784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318B168"))) PPC_WEAK_FUNC(sub_8318B168);
PPC_FUNC_IMPL(__imp__sub_8318B168) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,16732
	ctx.r3.s64 = ctx.r11.s64 + 16732;
	// bl 0x82ca7538
	ctx.lr = 0x8318B180;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-508(r11)
	PPC_STORE_U32(ctx.r11.u32 + -508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

