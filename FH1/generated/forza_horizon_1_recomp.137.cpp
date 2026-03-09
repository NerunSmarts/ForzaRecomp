#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_83196D18"))) PPC_WEAK_FUNC(sub_83196D18);
PPC_FUNC_IMPL(__imp__sub_83196D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24832
	ctx.r3.s64 = ctx.r11.s64 + -24832;
	// bl 0x82ca7538
	ctx.lr = 0x83196D30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196D48"))) PPC_WEAK_FUNC(sub_83196D48);
PPC_FUNC_IMPL(__imp__sub_83196D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24804
	ctx.r3.s64 = ctx.r11.s64 + -24804;
	// bl 0x82ca7538
	ctx.lr = 0x83196D60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196D78"))) PPC_WEAK_FUNC(sub_83196D78);
PPC_FUNC_IMPL(__imp__sub_83196D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24788
	ctx.r3.s64 = ctx.r11.s64 + -24788;
	// bl 0x82ca7538
	ctx.lr = 0x83196D90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196DA8"))) PPC_WEAK_FUNC(sub_83196DA8);
PPC_FUNC_IMPL(__imp__sub_83196DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24756
	ctx.r3.s64 = ctx.r11.s64 + -24756;
	// bl 0x82ca7538
	ctx.lr = 0x83196DC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1108(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196DD8"))) PPC_WEAK_FUNC(sub_83196DD8);
PPC_FUNC_IMPL(__imp__sub_83196DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24724
	ctx.r3.s64 = ctx.r11.s64 + -24724;
	// bl 0x82ca7538
	ctx.lr = 0x83196DF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5856(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5856, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196E08"))) PPC_WEAK_FUNC(sub_83196E08);
PPC_FUNC_IMPL(__imp__sub_83196E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24700
	ctx.r3.s64 = ctx.r11.s64 + -24700;
	// bl 0x82ca7538
	ctx.lr = 0x83196E20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3960(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196E38"))) PPC_WEAK_FUNC(sub_83196E38);
PPC_FUNC_IMPL(__imp__sub_83196E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24684
	ctx.r3.s64 = ctx.r11.s64 + -24684;
	// bl 0x82ca7538
	ctx.lr = 0x83196E50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196E68"))) PPC_WEAK_FUNC(sub_83196E68);
PPC_FUNC_IMPL(__imp__sub_83196E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24664
	ctx.r3.s64 = ctx.r11.s64 + -24664;
	// bl 0x82ca7538
	ctx.lr = 0x83196E80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6492(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196E98"))) PPC_WEAK_FUNC(sub_83196E98);
PPC_FUNC_IMPL(__imp__sub_83196E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24644
	ctx.r3.s64 = ctx.r11.s64 + -24644;
	// bl 0x82ca7538
	ctx.lr = 0x83196EB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6036, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196EC8"))) PPC_WEAK_FUNC(sub_83196EC8);
PPC_FUNC_IMPL(__imp__sub_83196EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24624
	ctx.r3.s64 = ctx.r11.s64 + -24624;
	// bl 0x82ca7538
	ctx.lr = 0x83196EE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196EF8"))) PPC_WEAK_FUNC(sub_83196EF8);
PPC_FUNC_IMPL(__imp__sub_83196EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24608
	ctx.r3.s64 = ctx.r11.s64 + -24608;
	// bl 0x82ca7538
	ctx.lr = 0x83196F10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5740(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196F28"))) PPC_WEAK_FUNC(sub_83196F28);
PPC_FUNC_IMPL(__imp__sub_83196F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24584
	ctx.r3.s64 = ctx.r11.s64 + -24584;
	// bl 0x82ca7538
	ctx.lr = 0x83196F40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5580(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5580, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196F58"))) PPC_WEAK_FUNC(sub_83196F58);
PPC_FUNC_IMPL(__imp__sub_83196F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24568
	ctx.r3.s64 = ctx.r11.s64 + -24568;
	// bl 0x82ca7538
	ctx.lr = 0x83196F70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2116, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196F88"))) PPC_WEAK_FUNC(sub_83196F88);
PPC_FUNC_IMPL(__imp__sub_83196F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24548
	ctx.r3.s64 = ctx.r11.s64 + -24548;
	// bl 0x82ca7538
	ctx.lr = 0x83196FA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6504(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6504, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196FB8"))) PPC_WEAK_FUNC(sub_83196FB8);
PPC_FUNC_IMPL(__imp__sub_83196FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24524
	ctx.r3.s64 = ctx.r11.s64 + -24524;
	// bl 0x82ca7538
	ctx.lr = 0x83196FD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5988(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196FE8"))) PPC_WEAK_FUNC(sub_83196FE8);
PPC_FUNC_IMPL(__imp__sub_83196FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24504
	ctx.r3.s64 = ctx.r11.s64 + -24504;
	// bl 0x82ca7538
	ctx.lr = 0x83197000;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7056(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7056, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197018"))) PPC_WEAK_FUNC(sub_83197018);
PPC_FUNC_IMPL(__imp__sub_83197018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24480
	ctx.r3.s64 = ctx.r11.s64 + -24480;
	// bl 0x82ca7538
	ctx.lr = 0x83197030;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,836(r11)
	PPC_STORE_U32(ctx.r11.u32 + 836, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197048"))) PPC_WEAK_FUNC(sub_83197048);
PPC_FUNC_IMPL(__imp__sub_83197048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24460
	ctx.r3.s64 = ctx.r11.s64 + -24460;
	// bl 0x82ca7538
	ctx.lr = 0x83197060;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-804(r11)
	PPC_STORE_U32(ctx.r11.u32 + -804, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197078"))) PPC_WEAK_FUNC(sub_83197078);
PPC_FUNC_IMPL(__imp__sub_83197078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24436
	ctx.r3.s64 = ctx.r11.s64 + -24436;
	// bl 0x82ca7538
	ctx.lr = 0x83197090;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831970A8"))) PPC_WEAK_FUNC(sub_831970A8);
PPC_FUNC_IMPL(__imp__sub_831970A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24408
	ctx.r3.s64 = ctx.r11.s64 + -24408;
	// bl 0x82ca7538
	ctx.lr = 0x831970C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7084(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7084, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831970D8"))) PPC_WEAK_FUNC(sub_831970D8);
PPC_FUNC_IMPL(__imp__sub_831970D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24384
	ctx.r3.s64 = ctx.r11.s64 + -24384;
	// bl 0x82ca7538
	ctx.lr = 0x831970F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197108"))) PPC_WEAK_FUNC(sub_83197108);
PPC_FUNC_IMPL(__imp__sub_83197108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24364
	ctx.r3.s64 = ctx.r11.s64 + -24364;
	// bl 0x82ca7538
	ctx.lr = 0x83197120;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5196(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197138"))) PPC_WEAK_FUNC(sub_83197138);
PPC_FUNC_IMPL(__imp__sub_83197138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24340
	ctx.r3.s64 = ctx.r11.s64 + -24340;
	// bl 0x82ca7538
	ctx.lr = 0x83197150;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197168"))) PPC_WEAK_FUNC(sub_83197168);
PPC_FUNC_IMPL(__imp__sub_83197168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24320
	ctx.r3.s64 = ctx.r11.s64 + -24320;
	// bl 0x82ca7538
	ctx.lr = 0x83197180;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2244(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197198"))) PPC_WEAK_FUNC(sub_83197198);
PPC_FUNC_IMPL(__imp__sub_83197198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24292
	ctx.r3.s64 = ctx.r11.s64 + -24292;
	// bl 0x82ca7538
	ctx.lr = 0x831971B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4044, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831971C8"))) PPC_WEAK_FUNC(sub_831971C8);
PPC_FUNC_IMPL(__imp__sub_831971C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24240
	ctx.r3.s64 = ctx.r11.s64 + -24240;
	// bl 0x82ca7538
	ctx.lr = 0x831971E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6440(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831971F8"))) PPC_WEAK_FUNC(sub_831971F8);
PPC_FUNC_IMPL(__imp__sub_831971F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24196
	ctx.r3.s64 = ctx.r11.s64 + -24196;
	// bl 0x82ca7538
	ctx.lr = 0x83197210;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1212(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197228"))) PPC_WEAK_FUNC(sub_83197228);
PPC_FUNC_IMPL(__imp__sub_83197228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24160
	ctx.r3.s64 = ctx.r11.s64 + -24160;
	// bl 0x82ca7538
	ctx.lr = 0x83197240;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7044, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197258"))) PPC_WEAK_FUNC(sub_83197258);
PPC_FUNC_IMPL(__imp__sub_83197258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24120
	ctx.r3.s64 = ctx.r11.s64 + -24120;
	// bl 0x82ca7538
	ctx.lr = 0x83197270;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-796(r11)
	PPC_STORE_U32(ctx.r11.u32 + -796, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197288"))) PPC_WEAK_FUNC(sub_83197288);
PPC_FUNC_IMPL(__imp__sub_83197288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24080
	ctx.r3.s64 = ctx.r11.s64 + -24080;
	// bl 0x82ca7538
	ctx.lr = 0x831972A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831972B8"))) PPC_WEAK_FUNC(sub_831972B8);
PPC_FUNC_IMPL(__imp__sub_831972B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24048
	ctx.r3.s64 = ctx.r11.s64 + -24048;
	// bl 0x82ca7538
	ctx.lr = 0x831972D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1092(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831972E8"))) PPC_WEAK_FUNC(sub_831972E8);
PPC_FUNC_IMPL(__imp__sub_831972E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,18020
	ctx.r3.s64 = ctx.r11.s64 + 18020;
	// bl 0x82ca7538
	ctx.lr = 0x83197300;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-976(r11)
	PPC_STORE_U32(ctx.r11.u32 + -976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197318"))) PPC_WEAK_FUNC(sub_83197318);
PPC_FUNC_IMPL(__imp__sub_83197318) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15524
	ctx.r3.s64 = ctx.r11.s64 + -15524;
	// bl 0x82ca7538
	ctx.lr = 0x83197330;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-84(r11)
	PPC_STORE_U32(ctx.r11.u32 + -84, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197348"))) PPC_WEAK_FUNC(sub_83197348);
PPC_FUNC_IMPL(__imp__sub_83197348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-24012
	ctx.r3.s64 = ctx.r11.s64 + -24012;
	// bl 0x82ca7538
	ctx.lr = 0x83197360;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197378"))) PPC_WEAK_FUNC(sub_83197378);
PPC_FUNC_IMPL(__imp__sub_83197378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x83197390;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831973A8"))) PPC_WEAK_FUNC(sub_831973A8);
PPC_FUNC_IMPL(__imp__sub_831973A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23992
	ctx.r3.s64 = ctx.r11.s64 + -23992;
	// bl 0x82ca7538
	ctx.lr = 0x831973C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6916(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6916, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831973D8"))) PPC_WEAK_FUNC(sub_831973D8);
PPC_FUNC_IMPL(__imp__sub_831973D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-29052
	ctx.r3.s64 = ctx.r11.s64 + -29052;
	// bl 0x82ca7538
	ctx.lr = 0x831973F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6684(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197408"))) PPC_WEAK_FUNC(sub_83197408);
PPC_FUNC_IMPL(__imp__sub_83197408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23980
	ctx.r3.s64 = ctx.r11.s64 + -23980;
	// bl 0x82ca7538
	ctx.lr = 0x83197420;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1856(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1856, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197438"))) PPC_WEAK_FUNC(sub_83197438);
PPC_FUNC_IMPL(__imp__sub_83197438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23964
	ctx.r3.s64 = ctx.r11.s64 + -23964;
	// bl 0x82ca7538
	ctx.lr = 0x83197450;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2868, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197468"))) PPC_WEAK_FUNC(sub_83197468);
PPC_FUNC_IMPL(__imp__sub_83197468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23948
	ctx.r3.s64 = ctx.r11.s64 + -23948;
	// bl 0x82ca7538
	ctx.lr = 0x83197480;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5944, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197498"))) PPC_WEAK_FUNC(sub_83197498);
PPC_FUNC_IMPL(__imp__sub_83197498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x831974B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831974C8"))) PPC_WEAK_FUNC(sub_831974C8);
PPC_FUNC_IMPL(__imp__sub_831974C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23932
	ctx.r3.s64 = ctx.r11.s64 + -23932;
	// bl 0x82ca7538
	ctx.lr = 0x831974E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3976(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831974F8"))) PPC_WEAK_FUNC(sub_831974F8);
PPC_FUNC_IMPL(__imp__sub_831974F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23916
	ctx.r3.s64 = ctx.r11.s64 + -23916;
	// bl 0x82ca7538
	ctx.lr = 0x83197510;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-164(r11)
	PPC_STORE_U32(ctx.r11.u32 + -164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197528"))) PPC_WEAK_FUNC(sub_83197528);
PPC_FUNC_IMPL(__imp__sub_83197528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x83197540;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6636(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197558"))) PPC_WEAK_FUNC(sub_83197558);
PPC_FUNC_IMPL(__imp__sub_83197558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,31236
	ctx.r3.s64 = ctx.r11.s64 + 31236;
	// bl 0x82ca7538
	ctx.lr = 0x83197570;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7024(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7024, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197588"))) PPC_WEAK_FUNC(sub_83197588);
PPC_FUNC_IMPL(__imp__sub_83197588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23904
	ctx.r3.s64 = ctx.r11.s64 + -23904;
	// bl 0x82ca7538
	ctx.lr = 0x831975A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2816, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831975B8"))) PPC_WEAK_FUNC(sub_831975B8);
PPC_FUNC_IMPL(__imp__sub_831975B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23884
	ctx.r3.s64 = ctx.r11.s64 + -23884;
	// bl 0x82ca7538
	ctx.lr = 0x831975D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4244(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831975E8"))) PPC_WEAK_FUNC(sub_831975E8);
PPC_FUNC_IMPL(__imp__sub_831975E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23864
	ctx.r3.s64 = ctx.r11.s64 + -23864;
	// bl 0x82ca7538
	ctx.lr = 0x83197600;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1956(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197618"))) PPC_WEAK_FUNC(sub_83197618);
PPC_FUNC_IMPL(__imp__sub_83197618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23844
	ctx.r3.s64 = ctx.r11.s64 + -23844;
	// bl 0x82ca7538
	ctx.lr = 0x83197630;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1056(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1056, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197648"))) PPC_WEAK_FUNC(sub_83197648);
PPC_FUNC_IMPL(__imp__sub_83197648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23828
	ctx.r3.s64 = ctx.r11.s64 + -23828;
	// bl 0x82ca7538
	ctx.lr = 0x83197660;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5784(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197678"))) PPC_WEAK_FUNC(sub_83197678);
PPC_FUNC_IMPL(__imp__sub_83197678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23788
	ctx.r3.s64 = ctx.r11.s64 + -23788;
	// bl 0x82ca7538
	ctx.lr = 0x83197690;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831976A8"))) PPC_WEAK_FUNC(sub_831976A8);
PPC_FUNC_IMPL(__imp__sub_831976A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23752
	ctx.r3.s64 = ctx.r11.s64 + -23752;
	// bl 0x82ca7538
	ctx.lr = 0x831976C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6300(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831976D8"))) PPC_WEAK_FUNC(sub_831976D8);
PPC_FUNC_IMPL(__imp__sub_831976D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23712
	ctx.r3.s64 = ctx.r11.s64 + -23712;
	// bl 0x82ca7538
	ctx.lr = 0x831976F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197708"))) PPC_WEAK_FUNC(sub_83197708);
PPC_FUNC_IMPL(__imp__sub_83197708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23672
	ctx.r3.s64 = ctx.r11.s64 + -23672;
	// bl 0x82ca7538
	ctx.lr = 0x83197720;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4340(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197738"))) PPC_WEAK_FUNC(sub_83197738);
PPC_FUNC_IMPL(__imp__sub_83197738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23624
	ctx.r3.s64 = ctx.r11.s64 + -23624;
	// bl 0x82ca7538
	ctx.lr = 0x83197750;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197768"))) PPC_WEAK_FUNC(sub_83197768);
PPC_FUNC_IMPL(__imp__sub_83197768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23588
	ctx.r3.s64 = ctx.r11.s64 + -23588;
	// bl 0x82ca7538
	ctx.lr = 0x83197780;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197798"))) PPC_WEAK_FUNC(sub_83197798);
PPC_FUNC_IMPL(__imp__sub_83197798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23552
	ctx.r3.s64 = ctx.r11.s64 + -23552;
	// bl 0x82ca7538
	ctx.lr = 0x831977B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6584(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6584, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831977C8"))) PPC_WEAK_FUNC(sub_831977C8);
PPC_FUNC_IMPL(__imp__sub_831977C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23516
	ctx.r3.s64 = ctx.r11.s64 + -23516;
	// bl 0x82ca7538
	ctx.lr = 0x831977E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5920(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5920, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831977F8"))) PPC_WEAK_FUNC(sub_831977F8);
PPC_FUNC_IMPL(__imp__sub_831977F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23480
	ctx.r3.s64 = ctx.r11.s64 + -23480;
	// bl 0x82ca7538
	ctx.lr = 0x83197810;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197828"))) PPC_WEAK_FUNC(sub_83197828);
PPC_FUNC_IMPL(__imp__sub_83197828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23452
	ctx.r3.s64 = ctx.r11.s64 + -23452;
	// bl 0x82ca7538
	ctx.lr = 0x83197840;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-284(r11)
	PPC_STORE_U32(ctx.r11.u32 + -284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197858"))) PPC_WEAK_FUNC(sub_83197858);
PPC_FUNC_IMPL(__imp__sub_83197858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23424
	ctx.r3.s64 = ctx.r11.s64 + -23424;
	// bl 0x82ca7538
	ctx.lr = 0x83197870;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1992(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1992, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197888"))) PPC_WEAK_FUNC(sub_83197888);
PPC_FUNC_IMPL(__imp__sub_83197888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23380
	ctx.r3.s64 = ctx.r11.s64 + -23380;
	// bl 0x82ca7538
	ctx.lr = 0x831978A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6280(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831978B8"))) PPC_WEAK_FUNC(sub_831978B8);
PPC_FUNC_IMPL(__imp__sub_831978B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23348
	ctx.r3.s64 = ctx.r11.s64 + -23348;
	// bl 0x82ca7538
	ctx.lr = 0x831978D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6416(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831978E8"))) PPC_WEAK_FUNC(sub_831978E8);
PPC_FUNC_IMPL(__imp__sub_831978E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23312
	ctx.r3.s64 = ctx.r11.s64 + -23312;
	// bl 0x82ca7538
	ctx.lr = 0x83197900;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5564(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197918"))) PPC_WEAK_FUNC(sub_83197918);
PPC_FUNC_IMPL(__imp__sub_83197918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23284
	ctx.r3.s64 = ctx.r11.s64 + -23284;
	// bl 0x82ca7538
	ctx.lr = 0x83197930;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-188(r11)
	PPC_STORE_U32(ctx.r11.u32 + -188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197948"))) PPC_WEAK_FUNC(sub_83197948);
PPC_FUNC_IMPL(__imp__sub_83197948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23256
	ctx.r3.s64 = ctx.r11.s64 + -23256;
	// bl 0x82ca7538
	ctx.lr = 0x83197960;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4692(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197978"))) PPC_WEAK_FUNC(sub_83197978);
PPC_FUNC_IMPL(__imp__sub_83197978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23224
	ctx.r3.s64 = ctx.r11.s64 + -23224;
	// bl 0x82ca7538
	ctx.lr = 0x83197990;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2332(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831979A8"))) PPC_WEAK_FUNC(sub_831979A8);
PPC_FUNC_IMPL(__imp__sub_831979A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23192
	ctx.r3.s64 = ctx.r11.s64 + -23192;
	// bl 0x82ca7538
	ctx.lr = 0x831979C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6332(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831979D8"))) PPC_WEAK_FUNC(sub_831979D8);
PPC_FUNC_IMPL(__imp__sub_831979D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23164
	ctx.r3.s64 = ctx.r11.s64 + -23164;
	// bl 0x82ca7538
	ctx.lr = 0x831979F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4868(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4868, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197A08"))) PPC_WEAK_FUNC(sub_83197A08);
PPC_FUNC_IMPL(__imp__sub_83197A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23136
	ctx.r3.s64 = ctx.r11.s64 + -23136;
	// bl 0x82ca7538
	ctx.lr = 0x83197A20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197A38"))) PPC_WEAK_FUNC(sub_83197A38);
PPC_FUNC_IMPL(__imp__sub_83197A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23104
	ctx.r3.s64 = ctx.r11.s64 + -23104;
	// bl 0x82ca7538
	ctx.lr = 0x83197A50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197A68"))) PPC_WEAK_FUNC(sub_83197A68);
PPC_FUNC_IMPL(__imp__sub_83197A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23072
	ctx.r3.s64 = ctx.r11.s64 + -23072;
	// bl 0x82ca7538
	ctx.lr = 0x83197A80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1264(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197A98"))) PPC_WEAK_FUNC(sub_83197A98);
PPC_FUNC_IMPL(__imp__sub_83197A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23044
	ctx.r3.s64 = ctx.r11.s64 + -23044;
	// bl 0x82ca7538
	ctx.lr = 0x83197AB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197AC8"))) PPC_WEAK_FUNC(sub_83197AC8);
PPC_FUNC_IMPL(__imp__sub_83197AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23016
	ctx.r3.s64 = ctx.r11.s64 + -23016;
	// bl 0x82ca7538
	ctx.lr = 0x83197AE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6932(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197AF8"))) PPC_WEAK_FUNC(sub_83197AF8);
PPC_FUNC_IMPL(__imp__sub_83197AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22972
	ctx.r3.s64 = ctx.r11.s64 + -22972;
	// bl 0x82ca7538
	ctx.lr = 0x83197B10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6296(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197B28"))) PPC_WEAK_FUNC(sub_83197B28);
PPC_FUNC_IMPL(__imp__sub_83197B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22924
	ctx.r3.s64 = ctx.r11.s64 + -22924;
	// bl 0x82ca7538
	ctx.lr = 0x83197B40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6368(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197B58"))) PPC_WEAK_FUNC(sub_83197B58);
PPC_FUNC_IMPL(__imp__sub_83197B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22876
	ctx.r3.s64 = ctx.r11.s64 + -22876;
	// bl 0x82ca7538
	ctx.lr = 0x83197B70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7052(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7052, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197B88"))) PPC_WEAK_FUNC(sub_83197B88);
PPC_FUNC_IMPL(__imp__sub_83197B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22828
	ctx.r3.s64 = ctx.r11.s64 + -22828;
	// bl 0x82ca7538
	ctx.lr = 0x83197BA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4872(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197BB8"))) PPC_WEAK_FUNC(sub_83197BB8);
PPC_FUNC_IMPL(__imp__sub_83197BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22784
	ctx.r3.s64 = ctx.r11.s64 + -22784;
	// bl 0x82ca7538
	ctx.lr = 0x83197BD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1048(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1048, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197BE8"))) PPC_WEAK_FUNC(sub_83197BE8);
PPC_FUNC_IMPL(__imp__sub_83197BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22736
	ctx.r3.s64 = ctx.r11.s64 + -22736;
	// bl 0x82ca7538
	ctx.lr = 0x83197C00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2324, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197C18"))) PPC_WEAK_FUNC(sub_83197C18);
PPC_FUNC_IMPL(__imp__sub_83197C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22708
	ctx.r3.s64 = ctx.r11.s64 + -22708;
	// bl 0x82ca7538
	ctx.lr = 0x83197C30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2524(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197C48"))) PPC_WEAK_FUNC(sub_83197C48);
PPC_FUNC_IMPL(__imp__sub_83197C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22672
	ctx.r3.s64 = ctx.r11.s64 + -22672;
	// bl 0x82ca7538
	ctx.lr = 0x83197C60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4088(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197C78"))) PPC_WEAK_FUNC(sub_83197C78);
PPC_FUNC_IMPL(__imp__sub_83197C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22632
	ctx.r3.s64 = ctx.r11.s64 + -22632;
	// bl 0x82ca7538
	ctx.lr = 0x83197C90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3624, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197CA8"))) PPC_WEAK_FUNC(sub_83197CA8);
PPC_FUNC_IMPL(__imp__sub_83197CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22592
	ctx.r3.s64 = ctx.r11.s64 + -22592;
	// bl 0x82ca7538
	ctx.lr = 0x83197CC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6912(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197CD8"))) PPC_WEAK_FUNC(sub_83197CD8);
PPC_FUNC_IMPL(__imp__sub_83197CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22552
	ctx.r3.s64 = ctx.r11.s64 + -22552;
	// bl 0x82ca7538
	ctx.lr = 0x83197CF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197D08"))) PPC_WEAK_FUNC(sub_83197D08);
PPC_FUNC_IMPL(__imp__sub_83197D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22516
	ctx.r3.s64 = ctx.r11.s64 + -22516;
	// bl 0x82ca7538
	ctx.lr = 0x83197D20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5896, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197D38"))) PPC_WEAK_FUNC(sub_83197D38);
PPC_FUNC_IMPL(__imp__sub_83197D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22472
	ctx.r3.s64 = ctx.r11.s64 + -22472;
	// bl 0x82ca7538
	ctx.lr = 0x83197D50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2932(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197D68"))) PPC_WEAK_FUNC(sub_83197D68);
PPC_FUNC_IMPL(__imp__sub_83197D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22440
	ctx.r3.s64 = ctx.r11.s64 + -22440;
	// bl 0x82ca7538
	ctx.lr = 0x83197D80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197D98"))) PPC_WEAK_FUNC(sub_83197D98);
PPC_FUNC_IMPL(__imp__sub_83197D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22400
	ctx.r3.s64 = ctx.r11.s64 + -22400;
	// bl 0x82ca7538
	ctx.lr = 0x83197DB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197DC8"))) PPC_WEAK_FUNC(sub_83197DC8);
PPC_FUNC_IMPL(__imp__sub_83197DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22360
	ctx.r3.s64 = ctx.r11.s64 + -22360;
	// bl 0x82ca7538
	ctx.lr = 0x83197DE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197DF8"))) PPC_WEAK_FUNC(sub_83197DF8);
PPC_FUNC_IMPL(__imp__sub_83197DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22324
	ctx.r3.s64 = ctx.r11.s64 + -22324;
	// bl 0x82ca7538
	ctx.lr = 0x83197E10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4944(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4944, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197E28"))) PPC_WEAK_FUNC(sub_83197E28);
PPC_FUNC_IMPL(__imp__sub_83197E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22284
	ctx.r3.s64 = ctx.r11.s64 + -22284;
	// bl 0x82ca7538
	ctx.lr = 0x83197E40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-560(r11)
	PPC_STORE_U32(ctx.r11.u32 + -560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197E58"))) PPC_WEAK_FUNC(sub_83197E58);
PPC_FUNC_IMPL(__imp__sub_83197E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22240
	ctx.r3.s64 = ctx.r11.s64 + -22240;
	// bl 0x82ca7538
	ctx.lr = 0x83197E70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4200(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197E88"))) PPC_WEAK_FUNC(sub_83197E88);
PPC_FUNC_IMPL(__imp__sub_83197E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22192
	ctx.r3.s64 = ctx.r11.s64 + -22192;
	// bl 0x82ca7538
	ctx.lr = 0x83197EA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197EB8"))) PPC_WEAK_FUNC(sub_83197EB8);
PPC_FUNC_IMPL(__imp__sub_83197EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22144
	ctx.r3.s64 = ctx.r11.s64 + -22144;
	// bl 0x82ca7538
	ctx.lr = 0x83197ED0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-780(r11)
	PPC_STORE_U32(ctx.r11.u32 + -780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197EE8"))) PPC_WEAK_FUNC(sub_83197EE8);
PPC_FUNC_IMPL(__imp__sub_83197EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22108
	ctx.r3.s64 = ctx.r11.s64 + -22108;
	// bl 0x82ca7538
	ctx.lr = 0x83197F00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1376(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197F18"))) PPC_WEAK_FUNC(sub_83197F18);
PPC_FUNC_IMPL(__imp__sub_83197F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22060
	ctx.r3.s64 = ctx.r11.s64 + -22060;
	// bl 0x82ca7538
	ctx.lr = 0x83197F30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-792(r11)
	PPC_STORE_U32(ctx.r11.u32 + -792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197F48"))) PPC_WEAK_FUNC(sub_83197F48);
PPC_FUNC_IMPL(__imp__sub_83197F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22016
	ctx.r3.s64 = ctx.r11.s64 + -22016;
	// bl 0x82ca7538
	ctx.lr = 0x83197F60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197F78"))) PPC_WEAK_FUNC(sub_83197F78);
PPC_FUNC_IMPL(__imp__sub_83197F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21968
	ctx.r3.s64 = ctx.r11.s64 + -21968;
	// bl 0x82ca7538
	ctx.lr = 0x83197F90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7080(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7080, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197FA8"))) PPC_WEAK_FUNC(sub_83197FA8);
PPC_FUNC_IMPL(__imp__sub_83197FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21916
	ctx.r3.s64 = ctx.r11.s64 + -21916;
	// bl 0x82ca7538
	ctx.lr = 0x83197FC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83197FD8"))) PPC_WEAK_FUNC(sub_83197FD8);
PPC_FUNC_IMPL(__imp__sub_83197FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21868
	ctx.r3.s64 = ctx.r11.s64 + -21868;
	// bl 0x82ca7538
	ctx.lr = 0x83197FF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198008"))) PPC_WEAK_FUNC(sub_83198008);
PPC_FUNC_IMPL(__imp__sub_83198008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21840
	ctx.r3.s64 = ctx.r11.s64 + -21840;
	// bl 0x82ca7538
	ctx.lr = 0x83198020;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198038"))) PPC_WEAK_FUNC(sub_83198038);
PPC_FUNC_IMPL(__imp__sub_83198038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21812
	ctx.r3.s64 = ctx.r11.s64 + -21812;
	// bl 0x82ca7538
	ctx.lr = 0x83198050;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198068"))) PPC_WEAK_FUNC(sub_83198068);
PPC_FUNC_IMPL(__imp__sub_83198068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21784
	ctx.r3.s64 = ctx.r11.s64 + -21784;
	// bl 0x82ca7538
	ctx.lr = 0x83198080;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6468(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198098"))) PPC_WEAK_FUNC(sub_83198098);
PPC_FUNC_IMPL(__imp__sub_83198098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21756
	ctx.r3.s64 = ctx.r11.s64 + -21756;
	// bl 0x82ca7538
	ctx.lr = 0x831980B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-852(r11)
	PPC_STORE_U32(ctx.r11.u32 + -852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831980C8"))) PPC_WEAK_FUNC(sub_831980C8);
PPC_FUNC_IMPL(__imp__sub_831980C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21724
	ctx.r3.s64 = ctx.r11.s64 + -21724;
	// bl 0x82ca7538
	ctx.lr = 0x831980E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831980F8"))) PPC_WEAK_FUNC(sub_831980F8);
PPC_FUNC_IMPL(__imp__sub_831980F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21692
	ctx.r3.s64 = ctx.r11.s64 + -21692;
	// bl 0x82ca7538
	ctx.lr = 0x83198110;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2408(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198128"))) PPC_WEAK_FUNC(sub_83198128);
PPC_FUNC_IMPL(__imp__sub_83198128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21648
	ctx.r3.s64 = ctx.r11.s64 + -21648;
	// bl 0x82ca7538
	ctx.lr = 0x83198140;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2648(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198158"))) PPC_WEAK_FUNC(sub_83198158);
PPC_FUNC_IMPL(__imp__sub_83198158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21608
	ctx.r3.s64 = ctx.r11.s64 + -21608;
	// bl 0x82ca7538
	ctx.lr = 0x83198170;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3900(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198188"))) PPC_WEAK_FUNC(sub_83198188);
PPC_FUNC_IMPL(__imp__sub_83198188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21568
	ctx.r3.s64 = ctx.r11.s64 + -21568;
	// bl 0x82ca7538
	ctx.lr = 0x831981A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5984, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831981B8"))) PPC_WEAK_FUNC(sub_831981B8);
PPC_FUNC_IMPL(__imp__sub_831981B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21528
	ctx.r3.s64 = ctx.r11.s64 + -21528;
	// bl 0x82ca7538
	ctx.lr = 0x831981D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1848(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1848, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831981E8"))) PPC_WEAK_FUNC(sub_831981E8);
PPC_FUNC_IMPL(__imp__sub_831981E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21500
	ctx.r3.s64 = ctx.r11.s64 + -21500;
	// bl 0x82ca7538
	ctx.lr = 0x83198200;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1876(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198218"))) PPC_WEAK_FUNC(sub_83198218);
PPC_FUNC_IMPL(__imp__sub_83198218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21480
	ctx.r3.s64 = ctx.r11.s64 + -21480;
	// bl 0x82ca7538
	ctx.lr = 0x83198230;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4240(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198248"))) PPC_WEAK_FUNC(sub_83198248);
PPC_FUNC_IMPL(__imp__sub_83198248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21460
	ctx.r3.s64 = ctx.r11.s64 + -21460;
	// bl 0x82ca7538
	ctx.lr = 0x83198260;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2824(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2824, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198278"))) PPC_WEAK_FUNC(sub_83198278);
PPC_FUNC_IMPL(__imp__sub_83198278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21444
	ctx.r3.s64 = ctx.r11.s64 + -21444;
	// bl 0x82ca7538
	ctx.lr = 0x83198290;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4532(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831982A8"))) PPC_WEAK_FUNC(sub_831982A8);
PPC_FUNC_IMPL(__imp__sub_831982A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21420
	ctx.r3.s64 = ctx.r11.s64 + -21420;
	// bl 0x82ca7538
	ctx.lr = 0x831982C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6928(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6928, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831982D8"))) PPC_WEAK_FUNC(sub_831982D8);
PPC_FUNC_IMPL(__imp__sub_831982D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21404
	ctx.r3.s64 = ctx.r11.s64 + -21404;
	// bl 0x82ca7538
	ctx.lr = 0x831982F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2068(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2068, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198308"))) PPC_WEAK_FUNC(sub_83198308);
PPC_FUNC_IMPL(__imp__sub_83198308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21388
	ctx.r3.s64 = ctx.r11.s64 + -21388;
	// bl 0x82ca7538
	ctx.lr = 0x83198320;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6304(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198338"))) PPC_WEAK_FUNC(sub_83198338);
PPC_FUNC_IMPL(__imp__sub_83198338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21364
	ctx.r3.s64 = ctx.r11.s64 + -21364;
	// bl 0x82ca7538
	ctx.lr = 0x83198350;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-80(r11)
	PPC_STORE_U32(ctx.r11.u32 + -80, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198368"))) PPC_WEAK_FUNC(sub_83198368);
PPC_FUNC_IMPL(__imp__sub_83198368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21340
	ctx.r3.s64 = ctx.r11.s64 + -21340;
	// bl 0x82ca7538
	ctx.lr = 0x83198380;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2820, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198398"))) PPC_WEAK_FUNC(sub_83198398);
PPC_FUNC_IMPL(__imp__sub_83198398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21308
	ctx.r3.s64 = ctx.r11.s64 + -21308;
	// bl 0x82ca7538
	ctx.lr = 0x831983B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6784(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831983C8"))) PPC_WEAK_FUNC(sub_831983C8);
PPC_FUNC_IMPL(__imp__sub_831983C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21284
	ctx.r3.s64 = ctx.r11.s64 + -21284;
	// bl 0x82ca7538
	ctx.lr = 0x831983E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2944(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2944, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831983F8"))) PPC_WEAK_FUNC(sub_831983F8);
PPC_FUNC_IMPL(__imp__sub_831983F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21256
	ctx.r3.s64 = ctx.r11.s64 + -21256;
	// bl 0x82ca7538
	ctx.lr = 0x83198410;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4784(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198428"))) PPC_WEAK_FUNC(sub_83198428);
PPC_FUNC_IMPL(__imp__sub_83198428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21220
	ctx.r3.s64 = ctx.r11.s64 + -21220;
	// bl 0x82ca7538
	ctx.lr = 0x83198440;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-116(r11)
	PPC_STORE_U32(ctx.r11.u32 + -116, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198458"))) PPC_WEAK_FUNC(sub_83198458);
PPC_FUNC_IMPL(__imp__sub_83198458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21184
	ctx.r3.s64 = ctx.r11.s64 + -21184;
	// bl 0x82ca7538
	ctx.lr = 0x83198470;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6780(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198488"))) PPC_WEAK_FUNC(sub_83198488);
PPC_FUNC_IMPL(__imp__sub_83198488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21172
	ctx.r3.s64 = ctx.r11.s64 + -21172;
	// bl 0x82ca7538
	ctx.lr = 0x831984A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5644(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831984B8"))) PPC_WEAK_FUNC(sub_831984B8);
PPC_FUNC_IMPL(__imp__sub_831984B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21136
	ctx.r3.s64 = ctx.r11.s64 + -21136;
	// bl 0x82ca7538
	ctx.lr = 0x831984D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1412(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831984E8"))) PPC_WEAK_FUNC(sub_831984E8);
PPC_FUNC_IMPL(__imp__sub_831984E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21100
	ctx.r3.s64 = ctx.r11.s64 + -21100;
	// bl 0x82ca7538
	ctx.lr = 0x83198500;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6984, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198518"))) PPC_WEAK_FUNC(sub_83198518);
PPC_FUNC_IMPL(__imp__sub_83198518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21072
	ctx.r3.s64 = ctx.r11.s64 + -21072;
	// bl 0x82ca7538
	ctx.lr = 0x83198530;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6864(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6864, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198548"))) PPC_WEAK_FUNC(sub_83198548);
PPC_FUNC_IMPL(__imp__sub_83198548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21044
	ctx.r3.s64 = ctx.r11.s64 + -21044;
	// bl 0x82ca7538
	ctx.lr = 0x83198560;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2644(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198578"))) PPC_WEAK_FUNC(sub_83198578);
PPC_FUNC_IMPL(__imp__sub_83198578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-21020
	ctx.r3.s64 = ctx.r11.s64 + -21020;
	// bl 0x82ca7538
	ctx.lr = 0x83198590;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5568(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831985A8"))) PPC_WEAK_FUNC(sub_831985A8);
PPC_FUNC_IMPL(__imp__sub_831985A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20988
	ctx.r3.s64 = ctx.r11.s64 + -20988;
	// bl 0x82ca7538
	ctx.lr = 0x831985C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4164(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831985D8"))) PPC_WEAK_FUNC(sub_831985D8);
PPC_FUNC_IMPL(__imp__sub_831985D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20960
	ctx.r3.s64 = ctx.r11.s64 + -20960;
	// bl 0x82ca7538
	ctx.lr = 0x831985F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4940(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4940, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198608"))) PPC_WEAK_FUNC(sub_83198608);
PPC_FUNC_IMPL(__imp__sub_83198608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20928
	ctx.r3.s64 = ctx.r11.s64 + -20928;
	// bl 0x82ca7538
	ctx.lr = 0x83198620;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4676(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198638"))) PPC_WEAK_FUNC(sub_83198638);
PPC_FUNC_IMPL(__imp__sub_83198638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20904
	ctx.r3.s64 = ctx.r11.s64 + -20904;
	// bl 0x82ca7538
	ctx.lr = 0x83198650;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6764(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198668"))) PPC_WEAK_FUNC(sub_83198668);
PPC_FUNC_IMPL(__imp__sub_83198668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20888
	ctx.r3.s64 = ctx.r11.s64 + -20888;
	// bl 0x82ca7538
	ctx.lr = 0x83198680;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198698"))) PPC_WEAK_FUNC(sub_83198698);
PPC_FUNC_IMPL(__imp__sub_83198698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20868
	ctx.r3.s64 = ctx.r11.s64 + -20868;
	// bl 0x82ca7538
	ctx.lr = 0x831986B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6352(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831986C8"))) PPC_WEAK_FUNC(sub_831986C8);
PPC_FUNC_IMPL(__imp__sub_831986C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20852
	ctx.r3.s64 = ctx.r11.s64 + -20852;
	// bl 0x82ca7538
	ctx.lr = 0x831986E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4484(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831986F8"))) PPC_WEAK_FUNC(sub_831986F8);
PPC_FUNC_IMPL(__imp__sub_831986F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20836
	ctx.r3.s64 = ctx.r11.s64 + -20836;
	// bl 0x82ca7538
	ctx.lr = 0x83198710;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2024(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2024, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198728"))) PPC_WEAK_FUNC(sub_83198728);
PPC_FUNC_IMPL(__imp__sub_83198728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20816
	ctx.r3.s64 = ctx.r11.s64 + -20816;
	// bl 0x82ca7538
	ctx.lr = 0x83198740;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5852(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198758"))) PPC_WEAK_FUNC(sub_83198758);
PPC_FUNC_IMPL(__imp__sub_83198758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20796
	ctx.r3.s64 = ctx.r11.s64 + -20796;
	// bl 0x82ca7538
	ctx.lr = 0x83198770;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6388(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198788"))) PPC_WEAK_FUNC(sub_83198788);
PPC_FUNC_IMPL(__imp__sub_83198788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20768
	ctx.r3.s64 = ctx.r11.s64 + -20768;
	// bl 0x82ca7538
	ctx.lr = 0x831987A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5852(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831987B8"))) PPC_WEAK_FUNC(sub_831987B8);
PPC_FUNC_IMPL(__imp__sub_831987B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20744
	ctx.r3.s64 = ctx.r11.s64 + -20744;
	// bl 0x82ca7538
	ctx.lr = 0x831987D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4712(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831987E8"))) PPC_WEAK_FUNC(sub_831987E8);
PPC_FUNC_IMPL(__imp__sub_831987E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20720
	ctx.r3.s64 = ctx.r11.s64 + -20720;
	// bl 0x82ca7538
	ctx.lr = 0x83198800;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1144(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198818"))) PPC_WEAK_FUNC(sub_83198818);
PPC_FUNC_IMPL(__imp__sub_83198818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20700
	ctx.r3.s64 = ctx.r11.s64 + -20700;
	// bl 0x82ca7538
	ctx.lr = 0x83198830;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3580, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198848"))) PPC_WEAK_FUNC(sub_83198848);
PPC_FUNC_IMPL(__imp__sub_83198848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20672
	ctx.r3.s64 = ctx.r11.s64 + -20672;
	// bl 0x82ca7538
	ctx.lr = 0x83198860;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198878"))) PPC_WEAK_FUNC(sub_83198878);
PPC_FUNC_IMPL(__imp__sub_83198878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20648
	ctx.r3.s64 = ctx.r11.s64 + -20648;
	// bl 0x82ca7538
	ctx.lr = 0x83198890;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6752(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831988A8"))) PPC_WEAK_FUNC(sub_831988A8);
PPC_FUNC_IMPL(__imp__sub_831988A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20628
	ctx.r3.s64 = ctx.r11.s64 + -20628;
	// bl 0x82ca7538
	ctx.lr = 0x831988C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6500(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6500, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831988D8"))) PPC_WEAK_FUNC(sub_831988D8);
PPC_FUNC_IMPL(__imp__sub_831988D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20604
	ctx.r3.s64 = ctx.r11.s64 + -20604;
	// bl 0x82ca7538
	ctx.lr = 0x831988F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4728(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198908"))) PPC_WEAK_FUNC(sub_83198908);
PPC_FUNC_IMPL(__imp__sub_83198908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20580
	ctx.r3.s64 = ctx.r11.s64 + -20580;
	// bl 0x82ca7538
	ctx.lr = 0x83198920;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4608(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198938"))) PPC_WEAK_FUNC(sub_83198938);
PPC_FUNC_IMPL(__imp__sub_83198938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20556
	ctx.r3.s64 = ctx.r11.s64 + -20556;
	// bl 0x82ca7538
	ctx.lr = 0x83198950;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1044, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198968"))) PPC_WEAK_FUNC(sub_83198968);
PPC_FUNC_IMPL(__imp__sub_83198968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20528
	ctx.r3.s64 = ctx.r11.s64 + -20528;
	// bl 0x82ca7538
	ctx.lr = 0x83198980;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198998"))) PPC_WEAK_FUNC(sub_83198998);
PPC_FUNC_IMPL(__imp__sub_83198998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20508
	ctx.r3.s64 = ctx.r11.s64 + -20508;
	// bl 0x82ca7538
	ctx.lr = 0x831989B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3956(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831989C8"))) PPC_WEAK_FUNC(sub_831989C8);
PPC_FUNC_IMPL(__imp__sub_831989C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20484
	ctx.r3.s64 = ctx.r11.s64 + -20484;
	// bl 0x82ca7538
	ctx.lr = 0x831989E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5068(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5068, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831989F8"))) PPC_WEAK_FUNC(sub_831989F8);
PPC_FUNC_IMPL(__imp__sub_831989F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20460
	ctx.r3.s64 = ctx.r11.s64 + -20460;
	// bl 0x82ca7538
	ctx.lr = 0x83198A10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4620(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198A28"))) PPC_WEAK_FUNC(sub_83198A28);
PPC_FUNC_IMPL(__imp__sub_83198A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20440
	ctx.r3.s64 = ctx.r11.s64 + -20440;
	// bl 0x82ca7538
	ctx.lr = 0x83198A40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198A58"))) PPC_WEAK_FUNC(sub_83198A58);
PPC_FUNC_IMPL(__imp__sub_83198A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20420
	ctx.r3.s64 = ctx.r11.s64 + -20420;
	// bl 0x82ca7538
	ctx.lr = 0x83198A70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5732(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198A88"))) PPC_WEAK_FUNC(sub_83198A88);
PPC_FUNC_IMPL(__imp__sub_83198A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20396
	ctx.r3.s64 = ctx.r11.s64 + -20396;
	// bl 0x82ca7538
	ctx.lr = 0x83198AA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-676(r11)
	PPC_STORE_U32(ctx.r11.u32 + -676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198AB8"))) PPC_WEAK_FUNC(sub_83198AB8);
PPC_FUNC_IMPL(__imp__sub_83198AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20368
	ctx.r3.s64 = ctx.r11.s64 + -20368;
	// bl 0x82ca7538
	ctx.lr = 0x83198AD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2100(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198AE8"))) PPC_WEAK_FUNC(sub_83198AE8);
PPC_FUNC_IMPL(__imp__sub_83198AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20348
	ctx.r3.s64 = ctx.r11.s64 + -20348;
	// bl 0x82ca7538
	ctx.lr = 0x83198B00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-72(r11)
	PPC_STORE_U32(ctx.r11.u32 + -72, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198B18"))) PPC_WEAK_FUNC(sub_83198B18);
PPC_FUNC_IMPL(__imp__sub_83198B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20324
	ctx.r3.s64 = ctx.r11.s64 + -20324;
	// bl 0x82ca7538
	ctx.lr = 0x83198B30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7100(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198B48"))) PPC_WEAK_FUNC(sub_83198B48);
PPC_FUNC_IMPL(__imp__sub_83198B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20304
	ctx.r3.s64 = ctx.r11.s64 + -20304;
	// bl 0x82ca7538
	ctx.lr = 0x83198B60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4616(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198B78"))) PPC_WEAK_FUNC(sub_83198B78);
PPC_FUNC_IMPL(__imp__sub_83198B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20280
	ctx.r3.s64 = ctx.r11.s64 + -20280;
	// bl 0x82ca7538
	ctx.lr = 0x83198B90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1388(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198BA8"))) PPC_WEAK_FUNC(sub_83198BA8);
PPC_FUNC_IMPL(__imp__sub_83198BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20240
	ctx.r3.s64 = ctx.r11.s64 + -20240;
	// bl 0x82ca7538
	ctx.lr = 0x83198BC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4628(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198BD8"))) PPC_WEAK_FUNC(sub_83198BD8);
PPC_FUNC_IMPL(__imp__sub_83198BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20204
	ctx.r3.s64 = ctx.r11.s64 + -20204;
	// bl 0x82ca7538
	ctx.lr = 0x83198BF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6364(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198C08"))) PPC_WEAK_FUNC(sub_83198C08);
PPC_FUNC_IMPL(__imp__sub_83198C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20180
	ctx.r3.s64 = ctx.r11.s64 + -20180;
	// bl 0x82ca7538
	ctx.lr = 0x83198C20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-7076(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7076, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198C38"))) PPC_WEAK_FUNC(sub_83198C38);
PPC_FUNC_IMPL(__imp__sub_83198C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20164
	ctx.r3.s64 = ctx.r11.s64 + -20164;
	// bl 0x82ca7538
	ctx.lr = 0x83198C50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,992(r11)
	PPC_STORE_U32(ctx.r11.u32 + 992, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198C68"))) PPC_WEAK_FUNC(sub_83198C68);
PPC_FUNC_IMPL(__imp__sub_83198C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20148
	ctx.r3.s64 = ctx.r11.s64 + -20148;
	// bl 0x82ca7538
	ctx.lr = 0x83198C80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1884(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198C98"))) PPC_WEAK_FUNC(sub_83198C98);
PPC_FUNC_IMPL(__imp__sub_83198C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20124
	ctx.r3.s64 = ctx.r11.s64 + -20124;
	// bl 0x82ca7538
	ctx.lr = 0x83198CB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3944, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198CC8"))) PPC_WEAK_FUNC(sub_83198CC8);
PPC_FUNC_IMPL(__imp__sub_83198CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20096
	ctx.r3.s64 = ctx.r11.s64 + -20096;
	// bl 0x82ca7538
	ctx.lr = 0x83198CE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5204(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198CF8"))) PPC_WEAK_FUNC(sub_83198CF8);
PPC_FUNC_IMPL(__imp__sub_83198CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20056
	ctx.r3.s64 = ctx.r11.s64 + -20056;
	// bl 0x82ca7538
	ctx.lr = 0x83198D10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198D28"))) PPC_WEAK_FUNC(sub_83198D28);
PPC_FUNC_IMPL(__imp__sub_83198D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-20020
	ctx.r3.s64 = ctx.r11.s64 + -20020;
	// bl 0x82ca7538
	ctx.lr = 0x83198D40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198D58"))) PPC_WEAK_FUNC(sub_83198D58);
PPC_FUNC_IMPL(__imp__sub_83198D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19988
	ctx.r3.s64 = ctx.r11.s64 + -19988;
	// bl 0x82ca7538
	ctx.lr = 0x83198D70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5088(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198D88"))) PPC_WEAK_FUNC(sub_83198D88);
PPC_FUNC_IMPL(__imp__sub_83198D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19952
	ctx.r3.s64 = ctx.r11.s64 + -19952;
	// bl 0x82ca7538
	ctx.lr = 0x83198DA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2640(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198DB8"))) PPC_WEAK_FUNC(sub_83198DB8);
PPC_FUNC_IMPL(__imp__sub_83198DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19916
	ctx.r3.s64 = ctx.r11.s64 + -19916;
	// bl 0x82ca7538
	ctx.lr = 0x83198DD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6204(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198DE8"))) PPC_WEAK_FUNC(sub_83198DE8);
PPC_FUNC_IMPL(__imp__sub_83198DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19880
	ctx.r3.s64 = ctx.r11.s64 + -19880;
	// bl 0x82ca7538
	ctx.lr = 0x83198E00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6200(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198E18"))) PPC_WEAK_FUNC(sub_83198E18);
PPC_FUNC_IMPL(__imp__sub_83198E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19848
	ctx.r3.s64 = ctx.r11.s64 + -19848;
	// bl 0x82ca7538
	ctx.lr = 0x83198E30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-616(r11)
	PPC_STORE_U32(ctx.r11.u32 + -616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198E48"))) PPC_WEAK_FUNC(sub_83198E48);
PPC_FUNC_IMPL(__imp__sub_83198E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19816
	ctx.r3.s64 = ctx.r11.s64 + -19816;
	// bl 0x82ca7538
	ctx.lr = 0x83198E60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5324, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198E78"))) PPC_WEAK_FUNC(sub_83198E78);
PPC_FUNC_IMPL(__imp__sub_83198E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19784
	ctx.r3.s64 = ctx.r11.s64 + -19784;
	// bl 0x82ca7538
	ctx.lr = 0x83198E90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5044, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198EA8"))) PPC_WEAK_FUNC(sub_83198EA8);
PPC_FUNC_IMPL(__imp__sub_83198EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19748
	ctx.r3.s64 = ctx.r11.s64 + -19748;
	// bl 0x82ca7538
	ctx.lr = 0x83198EC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198ED8"))) PPC_WEAK_FUNC(sub_83198ED8);
PPC_FUNC_IMPL(__imp__sub_83198ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19704
	ctx.r3.s64 = ctx.r11.s64 + -19704;
	// bl 0x82ca7538
	ctx.lr = 0x83198EF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1840(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1840, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198F08"))) PPC_WEAK_FUNC(sub_83198F08);
PPC_FUNC_IMPL(__imp__sub_83198F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19672
	ctx.r3.s64 = ctx.r11.s64 + -19672;
	// bl 0x82ca7538
	ctx.lr = 0x83198F20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198F38"))) PPC_WEAK_FUNC(sub_83198F38);
PPC_FUNC_IMPL(__imp__sub_83198F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19636
	ctx.r3.s64 = ctx.r11.s64 + -19636;
	// bl 0x82ca7538
	ctx.lr = 0x83198F50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198F68"))) PPC_WEAK_FUNC(sub_83198F68);
PPC_FUNC_IMPL(__imp__sub_83198F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19600
	ctx.r3.s64 = ctx.r11.s64 + -19600;
	// bl 0x82ca7538
	ctx.lr = 0x83198F80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3372(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198F98"))) PPC_WEAK_FUNC(sub_83198F98);
PPC_FUNC_IMPL(__imp__sub_83198F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19560
	ctx.r3.s64 = ctx.r11.s64 + -19560;
	// bl 0x82ca7538
	ctx.lr = 0x83198FB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3368(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198FC8"))) PPC_WEAK_FUNC(sub_83198FC8);
PPC_FUNC_IMPL(__imp__sub_83198FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19524
	ctx.r3.s64 = ctx.r11.s64 + -19524;
	// bl 0x82ca7538
	ctx.lr = 0x83198FE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6180(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198FF8"))) PPC_WEAK_FUNC(sub_83198FF8);
PPC_FUNC_IMPL(__imp__sub_83198FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19488
	ctx.r3.s64 = ctx.r11.s64 + -19488;
	// bl 0x82ca7538
	ctx.lr = 0x83199010;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1104(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199028"))) PPC_WEAK_FUNC(sub_83199028);
PPC_FUNC_IMPL(__imp__sub_83199028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19452
	ctx.r3.s64 = ctx.r11.s64 + -19452;
	// bl 0x82ca7538
	ctx.lr = 0x83199040;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6260(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199058"))) PPC_WEAK_FUNC(sub_83199058);
PPC_FUNC_IMPL(__imp__sub_83199058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19420
	ctx.r3.s64 = ctx.r11.s64 + -19420;
	// bl 0x82ca7538
	ctx.lr = 0x83199070;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5880(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199088"))) PPC_WEAK_FUNC(sub_83199088);
PPC_FUNC_IMPL(__imp__sub_83199088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19384
	ctx.r3.s64 = ctx.r11.s64 + -19384;
	// bl 0x82ca7538
	ctx.lr = 0x831990A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6128(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831990B8"))) PPC_WEAK_FUNC(sub_831990B8);
PPC_FUNC_IMPL(__imp__sub_831990B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19352
	ctx.r3.s64 = ctx.r11.s64 + -19352;
	// bl 0x82ca7538
	ctx.lr = 0x831990D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831990E8"))) PPC_WEAK_FUNC(sub_831990E8);
PPC_FUNC_IMPL(__imp__sub_831990E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19312
	ctx.r3.s64 = ctx.r11.s64 + -19312;
	// bl 0x82ca7538
	ctx.lr = 0x83199100;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2428(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199118"))) PPC_WEAK_FUNC(sub_83199118);
PPC_FUNC_IMPL(__imp__sub_83199118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19268
	ctx.r3.s64 = ctx.r11.s64 + -19268;
	// bl 0x82ca7538
	ctx.lr = 0x83199130;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6160(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199148"))) PPC_WEAK_FUNC(sub_83199148);
PPC_FUNC_IMPL(__imp__sub_83199148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19232
	ctx.r3.s64 = ctx.r11.s64 + -19232;
	// bl 0x82ca7538
	ctx.lr = 0x83199160;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1940, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199178"))) PPC_WEAK_FUNC(sub_83199178);
PPC_FUNC_IMPL(__imp__sub_83199178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19196
	ctx.r3.s64 = ctx.r11.s64 + -19196;
	// bl 0x82ca7538
	ctx.lr = 0x83199190;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831991A8"))) PPC_WEAK_FUNC(sub_831991A8);
PPC_FUNC_IMPL(__imp__sub_831991A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19156
	ctx.r3.s64 = ctx.r11.s64 + -19156;
	// bl 0x82ca7538
	ctx.lr = 0x831991C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2096, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831991D8"))) PPC_WEAK_FUNC(sub_831991D8);
PPC_FUNC_IMPL(__imp__sub_831991D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19120
	ctx.r3.s64 = ctx.r11.s64 + -19120;
	// bl 0x82ca7538
	ctx.lr = 0x831991F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6244(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199208"))) PPC_WEAK_FUNC(sub_83199208);
PPC_FUNC_IMPL(__imp__sub_83199208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19084
	ctx.r3.s64 = ctx.r11.s64 + -19084;
	// bl 0x82ca7538
	ctx.lr = 0x83199220;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6156(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199238"))) PPC_WEAK_FUNC(sub_83199238);
PPC_FUNC_IMPL(__imp__sub_83199238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19048
	ctx.r3.s64 = ctx.r11.s64 + -19048;
	// bl 0x82ca7538
	ctx.lr = 0x83199250;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-252(r11)
	PPC_STORE_U32(ctx.r11.u32 + -252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199268"))) PPC_WEAK_FUNC(sub_83199268);
PPC_FUNC_IMPL(__imp__sub_83199268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19016
	ctx.r3.s64 = ctx.r11.s64 + -19016;
	// bl 0x82ca7538
	ctx.lr = 0x83199280;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5064(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199298"))) PPC_WEAK_FUNC(sub_83199298);
PPC_FUNC_IMPL(__imp__sub_83199298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18988
	ctx.r3.s64 = ctx.r11.s64 + -18988;
	// bl 0x82ca7538
	ctx.lr = 0x831992B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1876(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831992C8"))) PPC_WEAK_FUNC(sub_831992C8);
PPC_FUNC_IMPL(__imp__sub_831992C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18952
	ctx.r3.s64 = ctx.r11.s64 + -18952;
	// bl 0x82ca7538
	ctx.lr = 0x831992E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1352(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831992F8"))) PPC_WEAK_FUNC(sub_831992F8);
PPC_FUNC_IMPL(__imp__sub_831992F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18920
	ctx.r3.s64 = ctx.r11.s64 + -18920;
	// bl 0x82ca7538
	ctx.lr = 0x83199310;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-864(r11)
	PPC_STORE_U32(ctx.r11.u32 + -864, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199328"))) PPC_WEAK_FUNC(sub_83199328);
PPC_FUNC_IMPL(__imp__sub_83199328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18880
	ctx.r3.s64 = ctx.r11.s64 + -18880;
	// bl 0x82ca7538
	ctx.lr = 0x83199340;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199358"))) PPC_WEAK_FUNC(sub_83199358);
PPC_FUNC_IMPL(__imp__sub_83199358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18848
	ctx.r3.s64 = ctx.r11.s64 + -18848;
	// bl 0x82ca7538
	ctx.lr = 0x83199370;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5556(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5556, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199388"))) PPC_WEAK_FUNC(sub_83199388);
PPC_FUNC_IMPL(__imp__sub_83199388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18808
	ctx.r3.s64 = ctx.r11.s64 + -18808;
	// bl 0x82ca7538
	ctx.lr = 0x831993A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6196(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831993B8"))) PPC_WEAK_FUNC(sub_831993B8);
PPC_FUNC_IMPL(__imp__sub_831993B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18776
	ctx.r3.s64 = ctx.r11.s64 + -18776;
	// bl 0x82ca7538
	ctx.lr = 0x831993D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831993E8"))) PPC_WEAK_FUNC(sub_831993E8);
PPC_FUNC_IMPL(__imp__sub_831993E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18736
	ctx.r3.s64 = ctx.r11.s64 + -18736;
	// bl 0x82ca7538
	ctx.lr = 0x83199400;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6252(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199418"))) PPC_WEAK_FUNC(sub_83199418);
PPC_FUNC_IMPL(__imp__sub_83199418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18700
	ctx.r3.s64 = ctx.r11.s64 + -18700;
	// bl 0x82ca7538
	ctx.lr = 0x83199430;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199448"))) PPC_WEAK_FUNC(sub_83199448);
PPC_FUNC_IMPL(__imp__sub_83199448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18652
	ctx.r3.s64 = ctx.r11.s64 + -18652;
	// bl 0x82ca7538
	ctx.lr = 0x83199460;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6124(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6124, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199478"))) PPC_WEAK_FUNC(sub_83199478);
PPC_FUNC_IMPL(__imp__sub_83199478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18620
	ctx.r3.s64 = ctx.r11.s64 + -18620;
	// bl 0x82ca7538
	ctx.lr = 0x83199490;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4408(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831994A8"))) PPC_WEAK_FUNC(sub_831994A8);
PPC_FUNC_IMPL(__imp__sub_831994A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18576
	ctx.r3.s64 = ctx.r11.s64 + -18576;
	// bl 0x82ca7538
	ctx.lr = 0x831994C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5952(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5952, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831994D8"))) PPC_WEAK_FUNC(sub_831994D8);
PPC_FUNC_IMPL(__imp__sub_831994D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18536
	ctx.r3.s64 = ctx.r11.s64 + -18536;
	// bl 0x82ca7538
	ctx.lr = 0x831994F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6240(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199508"))) PPC_WEAK_FUNC(sub_83199508);
PPC_FUNC_IMPL(__imp__sub_83199508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18484
	ctx.r3.s64 = ctx.r11.s64 + -18484;
	// bl 0x82ca7538
	ctx.lr = 0x83199520;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199538"))) PPC_WEAK_FUNC(sub_83199538);
PPC_FUNC_IMPL(__imp__sub_83199538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18432
	ctx.r3.s64 = ctx.r11.s64 + -18432;
	// bl 0x82ca7538
	ctx.lr = 0x83199550;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2020(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2020, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199568"))) PPC_WEAK_FUNC(sub_83199568);
PPC_FUNC_IMPL(__imp__sub_83199568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18384
	ctx.r3.s64 = ctx.r11.s64 + -18384;
	// bl 0x82ca7538
	ctx.lr = 0x83199580;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199598"))) PPC_WEAK_FUNC(sub_83199598);
PPC_FUNC_IMPL(__imp__sub_83199598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18340
	ctx.r3.s64 = ctx.r11.s64 + -18340;
	// bl 0x82ca7538
	ctx.lr = 0x831995B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6172(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831995C8"))) PPC_WEAK_FUNC(sub_831995C8);
PPC_FUNC_IMPL(__imp__sub_831995C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18300
	ctx.r3.s64 = ctx.r11.s64 + -18300;
	// bl 0x82ca7538
	ctx.lr = 0x831995E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-248(r11)
	PPC_STORE_U32(ctx.r11.u32 + -248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831995F8"))) PPC_WEAK_FUNC(sub_831995F8);
PPC_FUNC_IMPL(__imp__sub_831995F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18264
	ctx.r3.s64 = ctx.r11.s64 + -18264;
	// bl 0x82ca7538
	ctx.lr = 0x83199610;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6144(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199628"))) PPC_WEAK_FUNC(sub_83199628);
PPC_FUNC_IMPL(__imp__sub_83199628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18228
	ctx.r3.s64 = ctx.r11.s64 + -18228;
	// bl 0x82ca7538
	ctx.lr = 0x83199640;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6208(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199658"))) PPC_WEAK_FUNC(sub_83199658);
PPC_FUNC_IMPL(__imp__sub_83199658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18188
	ctx.r3.s64 = ctx.r11.s64 + -18188;
	// bl 0x82ca7538
	ctx.lr = 0x83199670;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6120(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199688"))) PPC_WEAK_FUNC(sub_83199688);
PPC_FUNC_IMPL(__imp__sub_83199688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18136
	ctx.r3.s64 = ctx.r11.s64 + -18136;
	// bl 0x82ca7538
	ctx.lr = 0x831996A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6192(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831996B8"))) PPC_WEAK_FUNC(sub_831996B8);
PPC_FUNC_IMPL(__imp__sub_831996B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18088
	ctx.r3.s64 = ctx.r11.s64 + -18088;
	// bl 0x82ca7538
	ctx.lr = 0x831996D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6264(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831996E8"))) PPC_WEAK_FUNC(sub_831996E8);
PPC_FUNC_IMPL(__imp__sub_831996E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18040
	ctx.r3.s64 = ctx.r11.s64 + -18040;
	// bl 0x82ca7538
	ctx.lr = 0x83199700;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199718"))) PPC_WEAK_FUNC(sub_83199718);
PPC_FUNC_IMPL(__imp__sub_83199718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17996
	ctx.r3.s64 = ctx.r11.s64 + -17996;
	// bl 0x82ca7538
	ctx.lr = 0x83199730;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5616(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199748"))) PPC_WEAK_FUNC(sub_83199748);
PPC_FUNC_IMPL(__imp__sub_83199748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17956
	ctx.r3.s64 = ctx.r11.s64 + -17956;
	// bl 0x82ca7538
	ctx.lr = 0x83199760;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199778"))) PPC_WEAK_FUNC(sub_83199778);
PPC_FUNC_IMPL(__imp__sub_83199778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17916
	ctx.r3.s64 = ctx.r11.s64 + -17916;
	// bl 0x82ca7538
	ctx.lr = 0x83199790;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-696(r11)
	PPC_STORE_U32(ctx.r11.u32 + -696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831997A8"))) PPC_WEAK_FUNC(sub_831997A8);
PPC_FUNC_IMPL(__imp__sub_831997A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17864
	ctx.r3.s64 = ctx.r11.s64 + -17864;
	// bl 0x82ca7538
	ctx.lr = 0x831997C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831997D8"))) PPC_WEAK_FUNC(sub_831997D8);
PPC_FUNC_IMPL(__imp__sub_831997D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17812
	ctx.r3.s64 = ctx.r11.s64 + -17812;
	// bl 0x82ca7538
	ctx.lr = 0x831997F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4032(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4032, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199808"))) PPC_WEAK_FUNC(sub_83199808);
PPC_FUNC_IMPL(__imp__sub_83199808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17764
	ctx.r3.s64 = ctx.r11.s64 + -17764;
	// bl 0x82ca7538
	ctx.lr = 0x83199820;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199838"))) PPC_WEAK_FUNC(sub_83199838);
PPC_FUNC_IMPL(__imp__sub_83199838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17720
	ctx.r3.s64 = ctx.r11.s64 + -17720;
	// bl 0x82ca7538
	ctx.lr = 0x83199850;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-548(r11)
	PPC_STORE_U32(ctx.r11.u32 + -548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199868"))) PPC_WEAK_FUNC(sub_83199868);
PPC_FUNC_IMPL(__imp__sub_83199868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17680
	ctx.r3.s64 = ctx.r11.s64 + -17680;
	// bl 0x82ca7538
	ctx.lr = 0x83199880;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5916(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5916, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199898"))) PPC_WEAK_FUNC(sub_83199898);
PPC_FUNC_IMPL(__imp__sub_83199898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17640
	ctx.r3.s64 = ctx.r11.s64 + -17640;
	// bl 0x82ca7538
	ctx.lr = 0x831998B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-456(r11)
	PPC_STORE_U32(ctx.r11.u32 + -456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831998C8"))) PPC_WEAK_FUNC(sub_831998C8);
PPC_FUNC_IMPL(__imp__sub_831998C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17588
	ctx.r3.s64 = ctx.r11.s64 + -17588;
	// bl 0x82ca7538
	ctx.lr = 0x831998E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831998F8"))) PPC_WEAK_FUNC(sub_831998F8);
PPC_FUNC_IMPL(__imp__sub_831998F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17540
	ctx.r3.s64 = ctx.r11.s64 + -17540;
	// bl 0x82ca7538
	ctx.lr = 0x83199910;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6272(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199928"))) PPC_WEAK_FUNC(sub_83199928);
PPC_FUNC_IMPL(__imp__sub_83199928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x82ca7538
	ctx.lr = 0x83199940;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5756(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199958"))) PPC_WEAK_FUNC(sub_83199958);
PPC_FUNC_IMPL(__imp__sub_83199958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17456
	ctx.r3.s64 = ctx.r11.s64 + -17456;
	// bl 0x82ca7538
	ctx.lr = 0x83199970;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2448(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199988"))) PPC_WEAK_FUNC(sub_83199988);
PPC_FUNC_IMPL(__imp__sub_83199988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17416
	ctx.r3.s64 = ctx.r11.s64 + -17416;
	// bl 0x82ca7538
	ctx.lr = 0x831999A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4924(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4924, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831999B8"))) PPC_WEAK_FUNC(sub_831999B8);
PPC_FUNC_IMPL(__imp__sub_831999B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17364
	ctx.r3.s64 = ctx.r11.s64 + -17364;
	// bl 0x82ca7538
	ctx.lr = 0x831999D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2624(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2624, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831999E8"))) PPC_WEAK_FUNC(sub_831999E8);
PPC_FUNC_IMPL(__imp__sub_831999E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17312
	ctx.r3.s64 = ctx.r11.s64 + -17312;
	// bl 0x82ca7538
	ctx.lr = 0x83199A00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4316(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199A18"))) PPC_WEAK_FUNC(sub_83199A18);
PPC_FUNC_IMPL(__imp__sub_83199A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17260
	ctx.r3.s64 = ctx.r11.s64 + -17260;
	// bl 0x82ca7538
	ctx.lr = 0x83199A30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6164(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199A48"))) PPC_WEAK_FUNC(sub_83199A48);
PPC_FUNC_IMPL(__imp__sub_83199A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17212
	ctx.r3.s64 = ctx.r11.s64 + -17212;
	// bl 0x82ca7538
	ctx.lr = 0x83199A60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2388(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199A78"))) PPC_WEAK_FUNC(sub_83199A78);
PPC_FUNC_IMPL(__imp__sub_83199A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17168
	ctx.r3.s64 = ctx.r11.s64 + -17168;
	// bl 0x82ca7538
	ctx.lr = 0x83199A90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-40(r11)
	PPC_STORE_U32(ctx.r11.u32 + -40, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199AA8"))) PPC_WEAK_FUNC(sub_83199AA8);
PPC_FUNC_IMPL(__imp__sub_83199AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17116
	ctx.r3.s64 = ctx.r11.s64 + -17116;
	// bl 0x82ca7538
	ctx.lr = 0x83199AC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1856, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199AD8"))) PPC_WEAK_FUNC(sub_83199AD8);
PPC_FUNC_IMPL(__imp__sub_83199AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17064
	ctx.r3.s64 = ctx.r11.s64 + -17064;
	// bl 0x82ca7538
	ctx.lr = 0x83199AF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6176(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199B08"))) PPC_WEAK_FUNC(sub_83199B08);
PPC_FUNC_IMPL(__imp__sub_83199B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-17012
	ctx.r3.s64 = ctx.r11.s64 + -17012;
	// bl 0x82ca7538
	ctx.lr = 0x83199B20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6268(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199B38"))) PPC_WEAK_FUNC(sub_83199B38);
PPC_FUNC_IMPL(__imp__sub_83199B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16956
	ctx.r3.s64 = ctx.r11.s64 + -16956;
	// bl 0x82ca7538
	ctx.lr = 0x83199B50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5548(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199B68"))) PPC_WEAK_FUNC(sub_83199B68);
PPC_FUNC_IMPL(__imp__sub_83199B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16912
	ctx.r3.s64 = ctx.r11.s64 + -16912;
	// bl 0x82ca7538
	ctx.lr = 0x83199B80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1176(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199B98"))) PPC_WEAK_FUNC(sub_83199B98);
PPC_FUNC_IMPL(__imp__sub_83199B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16864
	ctx.r3.s64 = ctx.r11.s64 + -16864;
	// bl 0x82ca7538
	ctx.lr = 0x83199BB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6236(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6236, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199BC8"))) PPC_WEAK_FUNC(sub_83199BC8);
PPC_FUNC_IMPL(__imp__sub_83199BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16820
	ctx.r3.s64 = ctx.r11.s64 + -16820;
	// bl 0x82ca7538
	ctx.lr = 0x83199BE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199BF8"))) PPC_WEAK_FUNC(sub_83199BF8);
PPC_FUNC_IMPL(__imp__sub_83199BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16776
	ctx.r3.s64 = ctx.r11.s64 + -16776;
	// bl 0x82ca7538
	ctx.lr = 0x83199C10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6224(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199C28"))) PPC_WEAK_FUNC(sub_83199C28);
PPC_FUNC_IMPL(__imp__sub_83199C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16732
	ctx.r3.s64 = ctx.r11.s64 + -16732;
	// bl 0x82ca7538
	ctx.lr = 0x83199C40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5876(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199C58"))) PPC_WEAK_FUNC(sub_83199C58);
PPC_FUNC_IMPL(__imp__sub_83199C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16684
	ctx.r3.s64 = ctx.r11.s64 + -16684;
	// bl 0x82ca7538
	ctx.lr = 0x83199C70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199C88"))) PPC_WEAK_FUNC(sub_83199C88);
PPC_FUNC_IMPL(__imp__sub_83199C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16632
	ctx.r3.s64 = ctx.r11.s64 + -16632;
	// bl 0x82ca7538
	ctx.lr = 0x83199CA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5872(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199CB8"))) PPC_WEAK_FUNC(sub_83199CB8);
PPC_FUNC_IMPL(__imp__sub_83199CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16584
	ctx.r3.s64 = ctx.r11.s64 + -16584;
	// bl 0x82ca7538
	ctx.lr = 0x83199CD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3364(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199CE8"))) PPC_WEAK_FUNC(sub_83199CE8);
PPC_FUNC_IMPL(__imp__sub_83199CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16540
	ctx.r3.s64 = ctx.r11.s64 + -16540;
	// bl 0x82ca7538
	ctx.lr = 0x83199D00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6256(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199D18"))) PPC_WEAK_FUNC(sub_83199D18);
PPC_FUNC_IMPL(__imp__sub_83199D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16500
	ctx.r3.s64 = ctx.r11.s64 + -16500;
	// bl 0x82ca7538
	ctx.lr = 0x83199D30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3908(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199D48"))) PPC_WEAK_FUNC(sub_83199D48);
PPC_FUNC_IMPL(__imp__sub_83199D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16456
	ctx.r3.s64 = ctx.r11.s64 + -16456;
	// bl 0x82ca7538
	ctx.lr = 0x83199D60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2180(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199D78"))) PPC_WEAK_FUNC(sub_83199D78);
PPC_FUNC_IMPL(__imp__sub_83199D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x82ca7538
	ctx.lr = 0x83199D90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1960(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199DA8"))) PPC_WEAK_FUNC(sub_83199DA8);
PPC_FUNC_IMPL(__imp__sub_83199DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16380
	ctx.r3.s64 = ctx.r11.s64 + -16380;
	// bl 0x82ca7538
	ctx.lr = 0x83199DC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199DD8"))) PPC_WEAK_FUNC(sub_83199DD8);
PPC_FUNC_IMPL(__imp__sub_83199DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16344
	ctx.r3.s64 = ctx.r11.s64 + -16344;
	// bl 0x82ca7538
	ctx.lr = 0x83199DF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6248(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199E08"))) PPC_WEAK_FUNC(sub_83199E08);
PPC_FUNC_IMPL(__imp__sub_83199E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16304
	ctx.r3.s64 = ctx.r11.s64 + -16304;
	// bl 0x82ca7538
	ctx.lr = 0x83199E20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1268(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199E38"))) PPC_WEAK_FUNC(sub_83199E38);
PPC_FUNC_IMPL(__imp__sub_83199E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16272
	ctx.r3.s64 = ctx.r11.s64 + -16272;
	// bl 0x82ca7538
	ctx.lr = 0x83199E50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6228(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199E68"))) PPC_WEAK_FUNC(sub_83199E68);
PPC_FUNC_IMPL(__imp__sub_83199E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16236
	ctx.r3.s64 = ctx.r11.s64 + -16236;
	// bl 0x82ca7538
	ctx.lr = 0x83199E80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4180(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199E98"))) PPC_WEAK_FUNC(sub_83199E98);
PPC_FUNC_IMPL(__imp__sub_83199E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16200
	ctx.r3.s64 = ctx.r11.s64 + -16200;
	// bl 0x82ca7538
	ctx.lr = 0x83199EB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199EC8"))) PPC_WEAK_FUNC(sub_83199EC8);
PPC_FUNC_IMPL(__imp__sub_83199EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16164
	ctx.r3.s64 = ctx.r11.s64 + -16164;
	// bl 0x82ca7538
	ctx.lr = 0x83199EE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4176(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199EF8"))) PPC_WEAK_FUNC(sub_83199EF8);
PPC_FUNC_IMPL(__imp__sub_83199EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16124
	ctx.r3.s64 = ctx.r11.s64 + -16124;
	// bl 0x82ca7538
	ctx.lr = 0x83199F10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6148(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199F28"))) PPC_WEAK_FUNC(sub_83199F28);
PPC_FUNC_IMPL(__imp__sub_83199F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16088
	ctx.r3.s64 = ctx.r11.s64 + -16088;
	// bl 0x82ca7538
	ctx.lr = 0x83199F40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1932(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199F58"))) PPC_WEAK_FUNC(sub_83199F58);
PPC_FUNC_IMPL(__imp__sub_83199F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16044
	ctx.r3.s64 = ctx.r11.s64 + -16044;
	// bl 0x82ca7538
	ctx.lr = 0x83199F70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-620(r11)
	PPC_STORE_U32(ctx.r11.u32 + -620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199F88"))) PPC_WEAK_FUNC(sub_83199F88);
PPC_FUNC_IMPL(__imp__sub_83199F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-16000
	ctx.r3.s64 = ctx.r11.s64 + -16000;
	// bl 0x82ca7538
	ctx.lr = 0x83199FA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6136(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199FB8"))) PPC_WEAK_FUNC(sub_83199FB8);
PPC_FUNC_IMPL(__imp__sub_83199FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15956
	ctx.r3.s64 = ctx.r11.s64 + -15956;
	// bl 0x82ca7538
	ctx.lr = 0x83199FD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83199FE8"))) PPC_WEAK_FUNC(sub_83199FE8);
PPC_FUNC_IMPL(__imp__sub_83199FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15912
	ctx.r3.s64 = ctx.r11.s64 + -15912;
	// bl 0x82ca7538
	ctx.lr = 0x8319A000;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3464(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A018"))) PPC_WEAK_FUNC(sub_8319A018);
PPC_FUNC_IMPL(__imp__sub_8319A018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15860
	ctx.r3.s64 = ctx.r11.s64 + -15860;
	// bl 0x82ca7538
	ctx.lr = 0x8319A030;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4988(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A048"))) PPC_WEAK_FUNC(sub_8319A048);
PPC_FUNC_IMPL(__imp__sub_8319A048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15808
	ctx.r3.s64 = ctx.r11.s64 + -15808;
	// bl 0x82ca7538
	ctx.lr = 0x8319A060;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A078"))) PPC_WEAK_FUNC(sub_8319A078);
PPC_FUNC_IMPL(__imp__sub_8319A078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15760
	ctx.r3.s64 = ctx.r11.s64 + -15760;
	// bl 0x82ca7538
	ctx.lr = 0x8319A090;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A0A8"))) PPC_WEAK_FUNC(sub_8319A0A8);
PPC_FUNC_IMPL(__imp__sub_8319A0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15708
	ctx.r3.s64 = ctx.r11.s64 + -15708;
	// bl 0x82ca7538
	ctx.lr = 0x8319A0C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1952(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1952, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A0D8"))) PPC_WEAK_FUNC(sub_8319A0D8);
PPC_FUNC_IMPL(__imp__sub_8319A0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15660
	ctx.r3.s64 = ctx.r11.s64 + -15660;
	// bl 0x82ca7538
	ctx.lr = 0x8319A0F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A108"))) PPC_WEAK_FUNC(sub_8319A108);
PPC_FUNC_IMPL(__imp__sub_8319A108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15616
	ctx.r3.s64 = ctx.r11.s64 + -15616;
	// bl 0x82ca7538
	ctx.lr = 0x8319A120;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4776(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A138"))) PPC_WEAK_FUNC(sub_8319A138);
PPC_FUNC_IMPL(__imp__sub_8319A138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15576
	ctx.r3.s64 = ctx.r11.s64 + -15576;
	// bl 0x82ca7538
	ctx.lr = 0x8319A150;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4976(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A168"))) PPC_WEAK_FUNC(sub_8319A168);
PPC_FUNC_IMPL(__imp__sub_8319A168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15540
	ctx.r3.s64 = ctx.r11.s64 + -15540;
	// bl 0x82ca7538
	ctx.lr = 0x8319A180;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6132(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A198"))) PPC_WEAK_FUNC(sub_8319A198);
PPC_FUNC_IMPL(__imp__sub_8319A198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15492
	ctx.r3.s64 = ctx.r11.s64 + -15492;
	// bl 0x82ca7538
	ctx.lr = 0x8319A1B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A1C8"))) PPC_WEAK_FUNC(sub_8319A1C8);
PPC_FUNC_IMPL(__imp__sub_8319A1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15448
	ctx.r3.s64 = ctx.r11.s64 + -15448;
	// bl 0x82ca7538
	ctx.lr = 0x8319A1E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6188(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A1F8"))) PPC_WEAK_FUNC(sub_8319A1F8);
PPC_FUNC_IMPL(__imp__sub_8319A1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15408
	ctx.r3.s64 = ctx.r11.s64 + -15408;
	// bl 0x82ca7538
	ctx.lr = 0x8319A210;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6220(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A228"))) PPC_WEAK_FUNC(sub_8319A228);
PPC_FUNC_IMPL(__imp__sub_8319A228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15368
	ctx.r3.s64 = ctx.r11.s64 + -15368;
	// bl 0x82ca7538
	ctx.lr = 0x8319A240;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5608(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A258"))) PPC_WEAK_FUNC(sub_8319A258);
PPC_FUNC_IMPL(__imp__sub_8319A258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15324
	ctx.r3.s64 = ctx.r11.s64 + -15324;
	// bl 0x82ca7538
	ctx.lr = 0x8319A270;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A288"))) PPC_WEAK_FUNC(sub_8319A288);
PPC_FUNC_IMPL(__imp__sub_8319A288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15280
	ctx.r3.s64 = ctx.r11.s64 + -15280;
	// bl 0x82ca7538
	ctx.lr = 0x8319A2A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A2B8"))) PPC_WEAK_FUNC(sub_8319A2B8);
PPC_FUNC_IMPL(__imp__sub_8319A2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15236
	ctx.r3.s64 = ctx.r11.s64 + -15236;
	// bl 0x82ca7538
	ctx.lr = 0x8319A2D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A2E8"))) PPC_WEAK_FUNC(sub_8319A2E8);
PPC_FUNC_IMPL(__imp__sub_8319A2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15188
	ctx.r3.s64 = ctx.r11.s64 + -15188;
	// bl 0x82ca7538
	ctx.lr = 0x8319A300;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3328(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3328, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A318"))) PPC_WEAK_FUNC(sub_8319A318);
PPC_FUNC_IMPL(__imp__sub_8319A318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15140
	ctx.r3.s64 = ctx.r11.s64 + -15140;
	// bl 0x82ca7538
	ctx.lr = 0x8319A330;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6168(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A348"))) PPC_WEAK_FUNC(sub_8319A348);
PPC_FUNC_IMPL(__imp__sub_8319A348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15100
	ctx.r3.s64 = ctx.r11.s64 + -15100;
	// bl 0x82ca7538
	ctx.lr = 0x8319A360;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6276(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A378"))) PPC_WEAK_FUNC(sub_8319A378);
PPC_FUNC_IMPL(__imp__sub_8319A378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15060
	ctx.r3.s64 = ctx.r11.s64 + -15060;
	// bl 0x82ca7538
	ctx.lr = 0x8319A390;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A3A8"))) PPC_WEAK_FUNC(sub_8319A3A8);
PPC_FUNC_IMPL(__imp__sub_8319A3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15032
	ctx.r3.s64 = ctx.r11.s64 + -15032;
	// bl 0x82ca7538
	ctx.lr = 0x8319A3C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6152(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A3D8"))) PPC_WEAK_FUNC(sub_8319A3D8);
PPC_FUNC_IMPL(__imp__sub_8319A3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-15004
	ctx.r3.s64 = ctx.r11.s64 + -15004;
	// bl 0x82ca7538
	ctx.lr = 0x8319A3F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-692(r11)
	PPC_STORE_U32(ctx.r11.u32 + -692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A408"))) PPC_WEAK_FUNC(sub_8319A408);
PPC_FUNC_IMPL(__imp__sub_8319A408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14972
	ctx.r3.s64 = ctx.r11.s64 + -14972;
	// bl 0x82ca7538
	ctx.lr = 0x8319A420;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2840(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2840, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A438"))) PPC_WEAK_FUNC(sub_8319A438);
PPC_FUNC_IMPL(__imp__sub_8319A438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14940
	ctx.r3.s64 = ctx.r11.s64 + -14940;
	// bl 0x82ca7538
	ctx.lr = 0x8319A450;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3980(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A468"))) PPC_WEAK_FUNC(sub_8319A468);
PPC_FUNC_IMPL(__imp__sub_8319A468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14912
	ctx.r3.s64 = ctx.r11.s64 + -14912;
	// bl 0x82ca7538
	ctx.lr = 0x8319A480;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6212(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A498"))) PPC_WEAK_FUNC(sub_8319A498);
PPC_FUNC_IMPL(__imp__sub_8319A498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14884
	ctx.r3.s64 = ctx.r11.s64 + -14884;
	// bl 0x82ca7538
	ctx.lr = 0x8319A4B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A4C8"))) PPC_WEAK_FUNC(sub_8319A4C8);
PPC_FUNC_IMPL(__imp__sub_8319A4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14856
	ctx.r3.s64 = ctx.r11.s64 + -14856;
	// bl 0x82ca7538
	ctx.lr = 0x8319A4E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-452(r11)
	PPC_STORE_U32(ctx.r11.u32 + -452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A4F8"))) PPC_WEAK_FUNC(sub_8319A4F8);
PPC_FUNC_IMPL(__imp__sub_8319A4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14824
	ctx.r3.s64 = ctx.r11.s64 + -14824;
	// bl 0x82ca7538
	ctx.lr = 0x8319A510;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4852(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A528"))) PPC_WEAK_FUNC(sub_8319A528);
PPC_FUNC_IMPL(__imp__sub_8319A528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14796
	ctx.r3.s64 = ctx.r11.s64 + -14796;
	// bl 0x82ca7538
	ctx.lr = 0x8319A540;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4848(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4848, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A558"))) PPC_WEAK_FUNC(sub_8319A558);
PPC_FUNC_IMPL(__imp__sub_8319A558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14756
	ctx.r3.s64 = ctx.r11.s64 + -14756;
	// bl 0x82ca7538
	ctx.lr = 0x8319A570;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5764(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A588"))) PPC_WEAK_FUNC(sub_8319A588);
PPC_FUNC_IMPL(__imp__sub_8319A588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14716
	ctx.r3.s64 = ctx.r11.s64 + -14716;
	// bl 0x82ca7538
	ctx.lr = 0x8319A5A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-776(r11)
	PPC_STORE_U32(ctx.r11.u32 + -776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A5B8"))) PPC_WEAK_FUNC(sub_8319A5B8);
PPC_FUNC_IMPL(__imp__sub_8319A5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14680
	ctx.r3.s64 = ctx.r11.s64 + -14680;
	// bl 0x82ca7538
	ctx.lr = 0x8319A5D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4212(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A5E8"))) PPC_WEAK_FUNC(sub_8319A5E8);
PPC_FUNC_IMPL(__imp__sub_8319A5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14640
	ctx.r3.s64 = ctx.r11.s64 + -14640;
	// bl 0x82ca7538
	ctx.lr = 0x8319A600;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2272(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A618"))) PPC_WEAK_FUNC(sub_8319A618);
PPC_FUNC_IMPL(__imp__sub_8319A618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14612
	ctx.r3.s64 = ctx.r11.s64 + -14612;
	// bl 0x82ca7538
	ctx.lr = 0x8319A630;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A648"))) PPC_WEAK_FUNC(sub_8319A648);
PPC_FUNC_IMPL(__imp__sub_8319A648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14588
	ctx.r3.s64 = ctx.r11.s64 + -14588;
	// bl 0x82ca7538
	ctx.lr = 0x8319A660;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A678"))) PPC_WEAK_FUNC(sub_8319A678);
PPC_FUNC_IMPL(__imp__sub_8319A678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14556
	ctx.r3.s64 = ctx.r11.s64 + -14556;
	// bl 0x82ca7538
	ctx.lr = 0x8319A690;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A6A8"))) PPC_WEAK_FUNC(sub_8319A6A8);
PPC_FUNC_IMPL(__imp__sub_8319A6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14524
	ctx.r3.s64 = ctx.r11.s64 + -14524;
	// bl 0x82ca7538
	ctx.lr = 0x8319A6C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-584(r11)
	PPC_STORE_U32(ctx.r11.u32 + -584, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A6D8"))) PPC_WEAK_FUNC(sub_8319A6D8);
PPC_FUNC_IMPL(__imp__sub_8319A6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14488
	ctx.r3.s64 = ctx.r11.s64 + -14488;
	// bl 0x82ca7538
	ctx.lr = 0x8319A6F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6232(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A708"))) PPC_WEAK_FUNC(sub_8319A708);
PPC_FUNC_IMPL(__imp__sub_8319A708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14452
	ctx.r3.s64 = ctx.r11.s64 + -14452;
	// bl 0x82ca7538
	ctx.lr = 0x8319A720;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1252(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A738"))) PPC_WEAK_FUNC(sub_8319A738);
PPC_FUNC_IMPL(__imp__sub_8319A738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14420
	ctx.r3.s64 = ctx.r11.s64 + -14420;
	// bl 0x82ca7538
	ctx.lr = 0x8319A750;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6216(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A768"))) PPC_WEAK_FUNC(sub_8319A768);
PPC_FUNC_IMPL(__imp__sub_8319A768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14388
	ctx.r3.s64 = ctx.r11.s64 + -14388;
	// bl 0x82ca7538
	ctx.lr = 0x8319A780;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A798"))) PPC_WEAK_FUNC(sub_8319A798);
PPC_FUNC_IMPL(__imp__sub_8319A798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14360
	ctx.r3.s64 = ctx.r11.s64 + -14360;
	// bl 0x82ca7538
	ctx.lr = 0x8319A7B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2232(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A7C8"))) PPC_WEAK_FUNC(sub_8319A7C8);
PPC_FUNC_IMPL(__imp__sub_8319A7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14320
	ctx.r3.s64 = ctx.r11.s64 + -14320;
	// bl 0x82ca7538
	ctx.lr = 0x8319A7E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A7F8"))) PPC_WEAK_FUNC(sub_8319A7F8);
PPC_FUNC_IMPL(__imp__sub_8319A7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14288
	ctx.r3.s64 = ctx.r11.s64 + -14288;
	// bl 0x82ca7538
	ctx.lr = 0x8319A810;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-6184(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A828"))) PPC_WEAK_FUNC(sub_8319A828);
PPC_FUNC_IMPL(__imp__sub_8319A828) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3648
	ctx.r3.s64 = ctx.r11.s64 + -3648;
	// bl 0x82ca7538
	ctx.lr = 0x8319A840;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A858"))) PPC_WEAK_FUNC(sub_8319A858);
PPC_FUNC_IMPL(__imp__sub_8319A858) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3116
	ctx.r3.s64 = ctx.r11.s64 + -3116;
	// bl 0x82ca7538
	ctx.lr = 0x8319A870;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6096, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A888"))) PPC_WEAK_FUNC(sub_8319A888);
PPC_FUNC_IMPL(__imp__sub_8319A888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14244
	ctx.r3.s64 = ctx.r11.s64 + -14244;
	// bl 0x82ca7538
	ctx.lr = 0x8319A8A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A8B8"))) PPC_WEAK_FUNC(sub_8319A8B8);
PPC_FUNC_IMPL(__imp__sub_8319A8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14224
	ctx.r3.s64 = ctx.r11.s64 + -14224;
	// bl 0x82ca7538
	ctx.lr = 0x8319A8D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A8E8"))) PPC_WEAK_FUNC(sub_8319A8E8);
PPC_FUNC_IMPL(__imp__sub_8319A8E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3136
	ctx.r3.s64 = ctx.r11.s64 + -3136;
	// bl 0x82ca7538
	ctx.lr = 0x8319A900;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6116, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A918"))) PPC_WEAK_FUNC(sub_8319A918);
PPC_FUNC_IMPL(__imp__sub_8319A918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14196
	ctx.r3.s64 = ctx.r11.s64 + -14196;
	// bl 0x82ca7538
	ctx.lr = 0x8319A930;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A948"))) PPC_WEAK_FUNC(sub_8319A948);
PPC_FUNC_IMPL(__imp__sub_8319A948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14176
	ctx.r3.s64 = ctx.r11.s64 + -14176;
	// bl 0x82ca7538
	ctx.lr = 0x8319A960;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6112, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A978"))) PPC_WEAK_FUNC(sub_8319A978);
PPC_FUNC_IMPL(__imp__sub_8319A978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14160
	ctx.r3.s64 = ctx.r11.s64 + -14160;
	// bl 0x82ca7538
	ctx.lr = 0x8319A990;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A9A8"))) PPC_WEAK_FUNC(sub_8319A9A8);
PPC_FUNC_IMPL(__imp__sub_8319A9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14128
	ctx.r3.s64 = ctx.r11.s64 + -14128;
	// bl 0x82ca7538
	ctx.lr = 0x8319A9C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319A9D8"))) PPC_WEAK_FUNC(sub_8319A9D8);
PPC_FUNC_IMPL(__imp__sub_8319A9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14100
	ctx.r3.s64 = ctx.r11.s64 + -14100;
	// bl 0x82ca7538
	ctx.lr = 0x8319A9F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3924(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3924, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AA08"))) PPC_WEAK_FUNC(sub_8319AA08);
PPC_FUNC_IMPL(__imp__sub_8319AA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14072
	ctx.r3.s64 = ctx.r11.s64 + -14072;
	// bl 0x82ca7538
	ctx.lr = 0x8319AA20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4264(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AA38"))) PPC_WEAK_FUNC(sub_8319AA38);
PPC_FUNC_IMPL(__imp__sub_8319AA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14048
	ctx.r3.s64 = ctx.r11.s64 + -14048;
	// bl 0x82ca7538
	ctx.lr = 0x8319AA50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2660(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AA68"))) PPC_WEAK_FUNC(sub_8319AA68);
PPC_FUNC_IMPL(__imp__sub_8319AA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14028
	ctx.r3.s64 = ctx.r11.s64 + -14028;
	// bl 0x82ca7538
	ctx.lr = 0x8319AA80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4268(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AA98"))) PPC_WEAK_FUNC(sub_8319AA98);
PPC_FUNC_IMPL(__imp__sub_8319AA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-14008
	ctx.r3.s64 = ctx.r11.s64 + -14008;
	// bl 0x82ca7538
	ctx.lr = 0x8319AAB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1124, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AAC8"))) PPC_WEAK_FUNC(sub_8319AAC8);
PPC_FUNC_IMPL(__imp__sub_8319AAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13992
	ctx.r3.s64 = ctx.r11.s64 + -13992;
	// bl 0x82ca7538
	ctx.lr = 0x8319AAE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4272(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AAF8"))) PPC_WEAK_FUNC(sub_8319AAF8);
PPC_FUNC_IMPL(__imp__sub_8319AAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8319AB10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AB28"))) PPC_WEAK_FUNC(sub_8319AB28);
PPC_FUNC_IMPL(__imp__sub_8319AB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13968
	ctx.r3.s64 = ctx.r11.s64 + -13968;
	// bl 0x82ca7538
	ctx.lr = 0x8319AB40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AB58"))) PPC_WEAK_FUNC(sub_8319AB58);
PPC_FUNC_IMPL(__imp__sub_8319AB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13948
	ctx.r3.s64 = ctx.r11.s64 + -13948;
	// bl 0x82ca7538
	ctx.lr = 0x8319AB70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AB88"))) PPC_WEAK_FUNC(sub_8319AB88);
PPC_FUNC_IMPL(__imp__sub_8319AB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13932
	ctx.r3.s64 = ctx.r11.s64 + -13932;
	// bl 0x82ca7538
	ctx.lr = 0x8319ABA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-876(r11)
	PPC_STORE_U32(ctx.r11.u32 + -876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319ABB8"))) PPC_WEAK_FUNC(sub_8319ABB8);
PPC_FUNC_IMPL(__imp__sub_8319ABB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13908
	ctx.r3.s64 = ctx.r11.s64 + -13908;
	// bl 0x82ca7538
	ctx.lr = 0x8319ABD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2052(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2052, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319ABE8"))) PPC_WEAK_FUNC(sub_8319ABE8);
PPC_FUNC_IMPL(__imp__sub_8319ABE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13884
	ctx.r3.s64 = ctx.r11.s64 + -13884;
	// bl 0x82ca7538
	ctx.lr = 0x8319AC00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AC18"))) PPC_WEAK_FUNC(sub_8319AC18);
PPC_FUNC_IMPL(__imp__sub_8319AC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13860
	ctx.r3.s64 = ctx.r11.s64 + -13860;
	// bl 0x82ca7538
	ctx.lr = 0x8319AC30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AC48"))) PPC_WEAK_FUNC(sub_8319AC48);
PPC_FUNC_IMPL(__imp__sub_8319AC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13840
	ctx.r3.s64 = ctx.r11.s64 + -13840;
	// bl 0x82ca7538
	ctx.lr = 0x8319AC60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5332(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AC78"))) PPC_WEAK_FUNC(sub_8319AC78);
PPC_FUNC_IMPL(__imp__sub_8319AC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13820
	ctx.r3.s64 = ctx.r11.s64 + -13820;
	// bl 0x82ca7538
	ctx.lr = 0x8319AC90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1896(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1896, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319ACA8"))) PPC_WEAK_FUNC(sub_8319ACA8);
PPC_FUNC_IMPL(__imp__sub_8319ACA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13800
	ctx.r3.s64 = ctx.r11.s64 + -13800;
	// bl 0x82ca7538
	ctx.lr = 0x8319ACC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319ACD8"))) PPC_WEAK_FUNC(sub_8319ACD8);
PPC_FUNC_IMPL(__imp__sub_8319ACD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13780
	ctx.r3.s64 = ctx.r11.s64 + -13780;
	// bl 0x82ca7538
	ctx.lr = 0x8319ACF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4436(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AD08"))) PPC_WEAK_FUNC(sub_8319AD08);
PPC_FUNC_IMPL(__imp__sub_8319AD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13756
	ctx.r3.s64 = ctx.r11.s64 + -13756;
	// bl 0x82ca7538
	ctx.lr = 0x8319AD20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5416(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AD38"))) PPC_WEAK_FUNC(sub_8319AD38);
PPC_FUNC_IMPL(__imp__sub_8319AD38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3432
	ctx.r3.s64 = ctx.r11.s64 + -3432;
	// bl 0x82ca7538
	ctx.lr = 0x8319AD50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5264(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AD68"))) PPC_WEAK_FUNC(sub_8319AD68);
PPC_FUNC_IMPL(__imp__sub_8319AD68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3460
	ctx.r3.s64 = ctx.r11.s64 + -3460;
	// bl 0x82ca7538
	ctx.lr = 0x8319AD80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AD98"))) PPC_WEAK_FUNC(sub_8319AD98);
PPC_FUNC_IMPL(__imp__sub_8319AD98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3484
	ctx.r3.s64 = ctx.r11.s64 + -3484;
	// bl 0x82ca7538
	ctx.lr = 0x8319ADB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5396(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5396, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319ADC8"))) PPC_WEAK_FUNC(sub_8319ADC8);
PPC_FUNC_IMPL(__imp__sub_8319ADC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3500
	ctx.r3.s64 = ctx.r11.s64 + -3500;
	// bl 0x82ca7538
	ctx.lr = 0x8319ADE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2404(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2404, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319ADF8"))) PPC_WEAK_FUNC(sub_8319ADF8);
PPC_FUNC_IMPL(__imp__sub_8319ADF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3520
	ctx.r3.s64 = ctx.r11.s64 + -3520;
	// bl 0x82ca7538
	ctx.lr = 0x8319AE10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5392(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AE28"))) PPC_WEAK_FUNC(sub_8319AE28);
PPC_FUNC_IMPL(__imp__sub_8319AE28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3540
	ctx.r3.s64 = ctx.r11.s64 + -3540;
	// bl 0x82ca7538
	ctx.lr = 0x8319AE40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5432(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AE58"))) PPC_WEAK_FUNC(sub_8319AE58);
PPC_FUNC_IMPL(__imp__sub_8319AE58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3556
	ctx.r3.s64 = ctx.r11.s64 + -3556;
	// bl 0x82ca7538
	ctx.lr = 0x8319AE70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5232(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AE88"))) PPC_WEAK_FUNC(sub_8319AE88);
PPC_FUNC_IMPL(__imp__sub_8319AE88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3576
	ctx.r3.s64 = ctx.r11.s64 + -3576;
	// bl 0x82ca7538
	ctx.lr = 0x8319AEA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1076(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1076, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AEB8"))) PPC_WEAK_FUNC(sub_8319AEB8);
PPC_FUNC_IMPL(__imp__sub_8319AEB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3668
	ctx.r3.s64 = ctx.r11.s64 + -3668;
	// bl 0x82ca7538
	ctx.lr = 0x8319AED0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AEE8"))) PPC_WEAK_FUNC(sub_8319AEE8);
PPC_FUNC_IMPL(__imp__sub_8319AEE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3620
	ctx.r3.s64 = ctx.r11.s64 + -3620;
	// bl 0x82ca7538
	ctx.lr = 0x8319AF00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5300(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AF18"))) PPC_WEAK_FUNC(sub_8319AF18);
PPC_FUNC_IMPL(__imp__sub_8319AF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13716
	ctx.r3.s64 = ctx.r11.s64 + -13716;
	// bl 0x82ca7538
	ctx.lr = 0x8319AF30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2708(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AF48"))) PPC_WEAK_FUNC(sub_8319AF48);
PPC_FUNC_IMPL(__imp__sub_8319AF48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3688
	ctx.r3.s64 = ctx.r11.s64 + -3688;
	// bl 0x82ca7538
	ctx.lr = 0x8319AF60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AF78"))) PPC_WEAK_FUNC(sub_8319AF78);
PPC_FUNC_IMPL(__imp__sub_8319AF78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3740
	ctx.r3.s64 = ctx.r11.s64 + -3740;
	// bl 0x82ca7538
	ctx.lr = 0x8319AF90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5040(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5040, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AFA8"))) PPC_WEAK_FUNC(sub_8319AFA8);
PPC_FUNC_IMPL(__imp__sub_8319AFA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3760
	ctx.r3.s64 = ctx.r11.s64 + -3760;
	// bl 0x82ca7538
	ctx.lr = 0x8319AFC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AFD8"))) PPC_WEAK_FUNC(sub_8319AFD8);
PPC_FUNC_IMPL(__imp__sub_8319AFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13696
	ctx.r3.s64 = ctx.r11.s64 + -13696;
	// bl 0x82ca7538
	ctx.lr = 0x8319AFF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-280(r11)
	PPC_STORE_U32(ctx.r11.u32 + -280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B008"))) PPC_WEAK_FUNC(sub_8319B008);
PPC_FUNC_IMPL(__imp__sub_8319B008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13672
	ctx.r3.s64 = ctx.r11.s64 + -13672;
	// bl 0x82ca7538
	ctx.lr = 0x8319B020;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4396(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4396, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B038"))) PPC_WEAK_FUNC(sub_8319B038);
PPC_FUNC_IMPL(__imp__sub_8319B038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13648
	ctx.r3.s64 = ctx.r11.s64 + -13648;
	// bl 0x82ca7538
	ctx.lr = 0x8319B050;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5520(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B068"))) PPC_WEAK_FUNC(sub_8319B068);
PPC_FUNC_IMPL(__imp__sub_8319B068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13628
	ctx.r3.s64 = ctx.r11.s64 + -13628;
	// bl 0x82ca7538
	ctx.lr = 0x8319B080;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-996(r11)
	PPC_STORE_U32(ctx.r11.u32 + -996, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B098"))) PPC_WEAK_FUNC(sub_8319B098);
PPC_FUNC_IMPL(__imp__sub_8319B098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13596
	ctx.r3.s64 = ctx.r11.s64 + -13596;
	// bl 0x82ca7538
	ctx.lr = 0x8319B0B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B0C8"))) PPC_WEAK_FUNC(sub_8319B0C8);
PPC_FUNC_IMPL(__imp__sub_8319B0C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3784
	ctx.r3.s64 = ctx.r11.s64 + -3784;
	// bl 0x82ca7538
	ctx.lr = 0x8319B0E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-888(r11)
	PPC_STORE_U32(ctx.r11.u32 + -888, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B0F8"))) PPC_WEAK_FUNC(sub_8319B0F8);
PPC_FUNC_IMPL(__imp__sub_8319B0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13560
	ctx.r3.s64 = ctx.r11.s64 + -13560;
	// bl 0x82ca7538
	ctx.lr = 0x8319B110;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B128"))) PPC_WEAK_FUNC(sub_8319B128);
PPC_FUNC_IMPL(__imp__sub_8319B128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13532
	ctx.r3.s64 = ctx.r11.s64 + -13532;
	// bl 0x82ca7538
	ctx.lr = 0x8319B140;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5468(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B158"))) PPC_WEAK_FUNC(sub_8319B158);
PPC_FUNC_IMPL(__imp__sub_8319B158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13504
	ctx.r3.s64 = ctx.r11.s64 + -13504;
	// bl 0x82ca7538
	ctx.lr = 0x8319B170;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B188"))) PPC_WEAK_FUNC(sub_8319B188);
PPC_FUNC_IMPL(__imp__sub_8319B188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13484
	ctx.r3.s64 = ctx.r11.s64 + -13484;
	// bl 0x82ca7538
	ctx.lr = 0x8319B1A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5464(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B1B8"))) PPC_WEAK_FUNC(sub_8319B1B8);
PPC_FUNC_IMPL(__imp__sub_8319B1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13464
	ctx.r3.s64 = ctx.r11.s64 + -13464;
	// bl 0x82ca7538
	ctx.lr = 0x8319B1D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4368(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B1E8"))) PPC_WEAK_FUNC(sub_8319B1E8);
PPC_FUNC_IMPL(__imp__sub_8319B1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13440
	ctx.r3.s64 = ctx.r11.s64 + -13440;
	// bl 0x82ca7538
	ctx.lr = 0x8319B200;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5356(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B218"))) PPC_WEAK_FUNC(sub_8319B218);
PPC_FUNC_IMPL(__imp__sub_8319B218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13408
	ctx.r3.s64 = ctx.r11.s64 + -13408;
	// bl 0x82ca7538
	ctx.lr = 0x8319B230;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2684(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B248"))) PPC_WEAK_FUNC(sub_8319B248);
PPC_FUNC_IMPL(__imp__sub_8319B248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13376
	ctx.r3.s64 = ctx.r11.s64 + -13376;
	// bl 0x82ca7538
	ctx.lr = 0x8319B260;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4688(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B278"))) PPC_WEAK_FUNC(sub_8319B278);
PPC_FUNC_IMPL(__imp__sub_8319B278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13348
	ctx.r3.s64 = ctx.r11.s64 + -13348;
	// bl 0x82ca7538
	ctx.lr = 0x8319B290;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B2A8"))) PPC_WEAK_FUNC(sub_8319B2A8);
PPC_FUNC_IMPL(__imp__sub_8319B2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13324
	ctx.r3.s64 = ctx.r11.s64 + -13324;
	// bl 0x82ca7538
	ctx.lr = 0x8319B2C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-120(r11)
	PPC_STORE_U32(ctx.r11.u32 + -120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B2D8"))) PPC_WEAK_FUNC(sub_8319B2D8);
PPC_FUNC_IMPL(__imp__sub_8319B2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13300
	ctx.r3.s64 = ctx.r11.s64 + -13300;
	// bl 0x82ca7538
	ctx.lr = 0x8319B2F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2544(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B308"))) PPC_WEAK_FUNC(sub_8319B308);
PPC_FUNC_IMPL(__imp__sub_8319B308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13276
	ctx.r3.s64 = ctx.r11.s64 + -13276;
	// bl 0x82ca7538
	ctx.lr = 0x8319B320;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5372(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B338"))) PPC_WEAK_FUNC(sub_8319B338);
PPC_FUNC_IMPL(__imp__sub_8319B338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13248
	ctx.r3.s64 = ctx.r11.s64 + -13248;
	// bl 0x82ca7538
	ctx.lr = 0x8319B350;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B368"))) PPC_WEAK_FUNC(sub_8319B368);
PPC_FUNC_IMPL(__imp__sub_8319B368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13224
	ctx.r3.s64 = ctx.r11.s64 + -13224;
	// bl 0x82ca7538
	ctx.lr = 0x8319B380;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B398"))) PPC_WEAK_FUNC(sub_8319B398);
PPC_FUNC_IMPL(__imp__sub_8319B398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13188
	ctx.r3.s64 = ctx.r11.s64 + -13188;
	// bl 0x82ca7538
	ctx.lr = 0x8319B3B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B3C8"))) PPC_WEAK_FUNC(sub_8319B3C8);
PPC_FUNC_IMPL(__imp__sub_8319B3C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3716
	ctx.r3.s64 = ctx.r11.s64 + -3716;
	// bl 0x82ca7538
	ctx.lr = 0x8319B3E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4028(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B3F8"))) PPC_WEAK_FUNC(sub_8319B3F8);
PPC_FUNC_IMPL(__imp__sub_8319B3F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3228
	ctx.r3.s64 = ctx.r11.s64 + -3228;
	// bl 0x82ca7538
	ctx.lr = 0x8319B410;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5360(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B428"))) PPC_WEAK_FUNC(sub_8319B428);
PPC_FUNC_IMPL(__imp__sub_8319B428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13148
	ctx.r3.s64 = ctx.r11.s64 + -13148;
	// bl 0x82ca7538
	ctx.lr = 0x8319B440;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5460(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B458"))) PPC_WEAK_FUNC(sub_8319B458);
PPC_FUNC_IMPL(__imp__sub_8319B458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13132
	ctx.r3.s64 = ctx.r11.s64 + -13132;
	// bl 0x82ca7538
	ctx.lr = 0x8319B470;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5496(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B488"))) PPC_WEAK_FUNC(sub_8319B488);
PPC_FUNC_IMPL(__imp__sub_8319B488) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-2216
	ctx.r3.s64 = ctx.r11.s64 + -2216;
	// bl 0x82ca7538
	ctx.lr = 0x8319B4A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5348(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B4B8"))) PPC_WEAK_FUNC(sub_8319B4B8);
PPC_FUNC_IMPL(__imp__sub_8319B4B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-2276
	ctx.r3.s64 = ctx.r11.s64 + -2276;
	// bl 0x82ca7538
	ctx.lr = 0x8319B4D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5524(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B4E8"))) PPC_WEAK_FUNC(sub_8319B4E8);
PPC_FUNC_IMPL(__imp__sub_8319B4E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-2300
	ctx.r3.s64 = ctx.r11.s64 + -2300;
	// bl 0x82ca7538
	ctx.lr = 0x8319B500;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2836(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2836, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B518"))) PPC_WEAK_FUNC(sub_8319B518);
PPC_FUNC_IMPL(__imp__sub_8319B518) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-2348
	ctx.r3.s64 = ctx.r11.s64 + -2348;
	// bl 0x82ca7538
	ctx.lr = 0x8319B530;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4804(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4804, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B548"))) PPC_WEAK_FUNC(sub_8319B548);
PPC_FUNC_IMPL(__imp__sub_8319B548) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-2388
	ctx.r3.s64 = ctx.r11.s64 + -2388;
	// bl 0x82ca7538
	ctx.lr = 0x8319B560;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5244(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B578"))) PPC_WEAK_FUNC(sub_8319B578);
PPC_FUNC_IMPL(__imp__sub_8319B578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13096
	ctx.r3.s64 = ctx.r11.s64 + -13096;
	// bl 0x82ca7538
	ctx.lr = 0x8319B590;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4364(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B5A8"))) PPC_WEAK_FUNC(sub_8319B5A8);
PPC_FUNC_IMPL(__imp__sub_8319B5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13068
	ctx.r3.s64 = ctx.r11.s64 + -13068;
	// bl 0x82ca7538
	ctx.lr = 0x8319B5C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2980(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B5D8"))) PPC_WEAK_FUNC(sub_8319B5D8);
PPC_FUNC_IMPL(__imp__sub_8319B5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13036
	ctx.r3.s64 = ctx.r11.s64 + -13036;
	// bl 0x82ca7538
	ctx.lr = 0x8319B5F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4052(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4052, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B608"))) PPC_WEAK_FUNC(sub_8319B608);
PPC_FUNC_IMPL(__imp__sub_8319B608) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-2424
	ctx.r3.s64 = ctx.r11.s64 + -2424;
	// bl 0x82ca7538
	ctx.lr = 0x8319B620;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-872(r11)
	PPC_STORE_U32(ctx.r11.u32 + -872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B638"))) PPC_WEAK_FUNC(sub_8319B638);
PPC_FUNC_IMPL(__imp__sub_8319B638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-13004
	ctx.r3.s64 = ctx.r11.s64 + -13004;
	// bl 0x82ca7538
	ctx.lr = 0x8319B650;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5856, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B668"))) PPC_WEAK_FUNC(sub_8319B668);
PPC_FUNC_IMPL(__imp__sub_8319B668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12964
	ctx.r3.s64 = ctx.r11.s64 + -12964;
	// bl 0x82ca7538
	ctx.lr = 0x8319B680;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5492(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B698"))) PPC_WEAK_FUNC(sub_8319B698);
PPC_FUNC_IMPL(__imp__sub_8319B698) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-2468
	ctx.r3.s64 = ctx.r11.s64 + -2468;
	// bl 0x82ca7538
	ctx.lr = 0x8319B6B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2200(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B6C8"))) PPC_WEAK_FUNC(sub_8319B6C8);
PPC_FUNC_IMPL(__imp__sub_8319B6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12936
	ctx.r3.s64 = ctx.r11.s64 + -12936;
	// bl 0x82ca7538
	ctx.lr = 0x8319B6E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5344(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B6F8"))) PPC_WEAK_FUNC(sub_8319B6F8);
PPC_FUNC_IMPL(__imp__sub_8319B6F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-2608
	ctx.r3.s64 = ctx.r11.s64 + -2608;
	// bl 0x82ca7538
	ctx.lr = 0x8319B710;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1824, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B728"))) PPC_WEAK_FUNC(sub_8319B728);
PPC_FUNC_IMPL(__imp__sub_8319B728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12920
	ctx.r3.s64 = ctx.r11.s64 + -12920;
	// bl 0x82ca7538
	ctx.lr = 0x8319B740;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4684(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B758"))) PPC_WEAK_FUNC(sub_8319B758);
PPC_FUNC_IMPL(__imp__sub_8319B758) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-2516
	ctx.r3.s64 = ctx.r11.s64 + -2516;
	// bl 0x82ca7538
	ctx.lr = 0x8319B770;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1200(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B788"))) PPC_WEAK_FUNC(sub_8319B788);
PPC_FUNC_IMPL(__imp__sub_8319B788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12896
	ctx.r3.s64 = ctx.r11.s64 + -12896;
	// bl 0x82ca7538
	ctx.lr = 0x8319B7A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B7B8"))) PPC_WEAK_FUNC(sub_8319B7B8);
PPC_FUNC_IMPL(__imp__sub_8319B7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12884
	ctx.r3.s64 = ctx.r11.s64 + -12884;
	// bl 0x82ca7538
	ctx.lr = 0x8319B7D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4636(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B7E8"))) PPC_WEAK_FUNC(sub_8319B7E8);
PPC_FUNC_IMPL(__imp__sub_8319B7E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3256
	ctx.r3.s64 = ctx.r11.s64 + -3256;
	// bl 0x82ca7538
	ctx.lr = 0x8319B800;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2744(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B818"))) PPC_WEAK_FUNC(sub_8319B818);
PPC_FUNC_IMPL(__imp__sub_8319B818) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-2568
	ctx.r3.s64 = ctx.r11.s64 + -2568;
	// bl 0x82ca7538
	ctx.lr = 0x8319B830;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4912(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B848"))) PPC_WEAK_FUNC(sub_8319B848);
PPC_FUNC_IMPL(__imp__sub_8319B848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,32252
	ctx.r3.s64 = ctx.r11.s64 + 32252;
	// bl 0x82ca7538
	ctx.lr = 0x8319B860;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2492(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B878"))) PPC_WEAK_FUNC(sub_8319B878);
PPC_FUNC_IMPL(__imp__sub_8319B878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12860
	ctx.r3.s64 = ctx.r11.s64 + -12860;
	// bl 0x82ca7538
	ctx.lr = 0x8319B890;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1924(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1924, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B8A8"))) PPC_WEAK_FUNC(sub_8319B8A8);
PPC_FUNC_IMPL(__imp__sub_8319B8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12848
	ctx.r3.s64 = ctx.r11.s64 + -12848;
	// bl 0x82ca7538
	ctx.lr = 0x8319B8C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2540(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B8D8"))) PPC_WEAK_FUNC(sub_8319B8D8);
PPC_FUNC_IMPL(__imp__sub_8319B8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12832
	ctx.r3.s64 = ctx.r11.s64 + -12832;
	// bl 0x82ca7538
	ctx.lr = 0x8319B8F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1208(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B908"))) PPC_WEAK_FUNC(sub_8319B908);
PPC_FUNC_IMPL(__imp__sub_8319B908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12808
	ctx.r3.s64 = ctx.r11.s64 + -12808;
	// bl 0x82ca7538
	ctx.lr = 0x8319B920;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4064(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B938"))) PPC_WEAK_FUNC(sub_8319B938);
PPC_FUNC_IMPL(__imp__sub_8319B938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12776
	ctx.r3.s64 = ctx.r11.s64 + -12776;
	// bl 0x82ca7538
	ctx.lr = 0x8319B950;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5388(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B968"))) PPC_WEAK_FUNC(sub_8319B968);
PPC_FUNC_IMPL(__imp__sub_8319B968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12744
	ctx.r3.s64 = ctx.r11.s64 + -12744;
	// bl 0x82ca7538
	ctx.lr = 0x8319B980;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-936(r11)
	PPC_STORE_U32(ctx.r11.u32 + -936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B998"))) PPC_WEAK_FUNC(sub_8319B998);
PPC_FUNC_IMPL(__imp__sub_8319B998) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3164
	ctx.r3.s64 = ctx.r11.s64 + -3164;
	// bl 0x82ca7538
	ctx.lr = 0x8319B9B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3484(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B9C8"))) PPC_WEAK_FUNC(sub_8319B9C8);
PPC_FUNC_IMPL(__imp__sub_8319B9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12704
	ctx.r3.s64 = ctx.r11.s64 + -12704;
	// bl 0x82ca7538
	ctx.lr = 0x8319B9E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5228(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319B9F8"))) PPC_WEAK_FUNC(sub_8319B9F8);
PPC_FUNC_IMPL(__imp__sub_8319B9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12680
	ctx.r3.s64 = ctx.r11.s64 + -12680;
	// bl 0x82ca7538
	ctx.lr = 0x8319BA10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3428(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BA28"))) PPC_WEAK_FUNC(sub_8319BA28);
PPC_FUNC_IMPL(__imp__sub_8319BA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12652
	ctx.r3.s64 = ctx.r11.s64 + -12652;
	// bl 0x82ca7538
	ctx.lr = 0x8319BA40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5488(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BA58"))) PPC_WEAK_FUNC(sub_8319BA58);
PPC_FUNC_IMPL(__imp__sub_8319BA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12628
	ctx.r3.s64 = ctx.r11.s64 + -12628;
	// bl 0x82ca7538
	ctx.lr = 0x8319BA70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2632(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BA88"))) PPC_WEAK_FUNC(sub_8319BA88);
PPC_FUNC_IMPL(__imp__sub_8319BA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12600
	ctx.r3.s64 = ctx.r11.s64 + -12600;
	// bl 0x82ca7538
	ctx.lr = 0x8319BAA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5504(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5504, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BAB8"))) PPC_WEAK_FUNC(sub_8319BAB8);
PPC_FUNC_IMPL(__imp__sub_8319BAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12576
	ctx.r3.s64 = ctx.r11.s64 + -12576;
	// bl 0x82ca7538
	ctx.lr = 0x8319BAD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BAE8"))) PPC_WEAK_FUNC(sub_8319BAE8);
PPC_FUNC_IMPL(__imp__sub_8319BAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12548
	ctx.r3.s64 = ctx.r11.s64 + -12548;
	// bl 0x82ca7538
	ctx.lr = 0x8319BB00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5068, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BB18"))) PPC_WEAK_FUNC(sub_8319BB18);
PPC_FUNC_IMPL(__imp__sub_8319BB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12524
	ctx.r3.s64 = ctx.r11.s64 + -12524;
	// bl 0x82ca7538
	ctx.lr = 0x8319BB30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1172(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BB48"))) PPC_WEAK_FUNC(sub_8319BB48);
PPC_FUNC_IMPL(__imp__sub_8319BB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12480
	ctx.r3.s64 = ctx.r11.s64 + -12480;
	// bl 0x82ca7538
	ctx.lr = 0x8319BB60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3460(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BB78"))) PPC_WEAK_FUNC(sub_8319BB78);
PPC_FUNC_IMPL(__imp__sub_8319BB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12444
	ctx.r3.s64 = ctx.r11.s64 + -12444;
	// bl 0x82ca7538
	ctx.lr = 0x8319BB90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BBA8"))) PPC_WEAK_FUNC(sub_8319BBA8);
PPC_FUNC_IMPL(__imp__sub_8319BBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12416
	ctx.r3.s64 = ctx.r11.s64 + -12416;
	// bl 0x82ca7538
	ctx.lr = 0x8319BBC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5340(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BBD8"))) PPC_WEAK_FUNC(sub_8319BBD8);
PPC_FUNC_IMPL(__imp__sub_8319BBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12396
	ctx.r3.s64 = ctx.r11.s64 + -12396;
	// bl 0x82ca7538
	ctx.lr = 0x8319BBF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BC08"))) PPC_WEAK_FUNC(sub_8319BC08);
PPC_FUNC_IMPL(__imp__sub_8319BC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12368
	ctx.r3.s64 = ctx.r11.s64 + -12368;
	// bl 0x82ca7538
	ctx.lr = 0x8319BC20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1004, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BC38"))) PPC_WEAK_FUNC(sub_8319BC38);
PPC_FUNC_IMPL(__imp__sub_8319BC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12328
	ctx.r3.s64 = ctx.r11.s64 + -12328;
	// bl 0x82ca7538
	ctx.lr = 0x8319BC50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5260(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BC68"))) PPC_WEAK_FUNC(sub_8319BC68);
PPC_FUNC_IMPL(__imp__sub_8319BC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12296
	ctx.r3.s64 = ctx.r11.s64 + -12296;
	// bl 0x82ca7538
	ctx.lr = 0x8319BC80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3892(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BC98"))) PPC_WEAK_FUNC(sub_8319BC98);
PPC_FUNC_IMPL(__imp__sub_8319BC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12264
	ctx.r3.s64 = ctx.r11.s64 + -12264;
	// bl 0x82ca7538
	ctx.lr = 0x8319BCB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2064(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BCC8"))) PPC_WEAK_FUNC(sub_8319BCC8);
PPC_FUNC_IMPL(__imp__sub_8319BCC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12228
	ctx.r3.s64 = ctx.r11.s64 + -12228;
	// bl 0x82ca7538
	ctx.lr = 0x8319BCE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2460(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BCF8"))) PPC_WEAK_FUNC(sub_8319BCF8);
PPC_FUNC_IMPL(__imp__sub_8319BCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12200
	ctx.r3.s64 = ctx.r11.s64 + -12200;
	// bl 0x82ca7538
	ctx.lr = 0x8319BD10;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1988(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BD28"))) PPC_WEAK_FUNC(sub_8319BD28);
PPC_FUNC_IMPL(__imp__sub_8319BD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12168
	ctx.r3.s64 = ctx.r11.s64 + -12168;
	// bl 0x82ca7538
	ctx.lr = 0x8319BD40;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BD58"))) PPC_WEAK_FUNC(sub_8319BD58);
PPC_FUNC_IMPL(__imp__sub_8319BD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12140
	ctx.r3.s64 = ctx.r11.s64 + -12140;
	// bl 0x82ca7538
	ctx.lr = 0x8319BD70;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2260(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BD88"))) PPC_WEAK_FUNC(sub_8319BD88);
PPC_FUNC_IMPL(__imp__sub_8319BD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12108
	ctx.r3.s64 = ctx.r11.s64 + -12108;
	// bl 0x82ca7538
	ctx.lr = 0x8319BDA0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-500(r11)
	PPC_STORE_U32(ctx.r11.u32 + -500, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BDB8"))) PPC_WEAK_FUNC(sub_8319BDB8);
PPC_FUNC_IMPL(__imp__sub_8319BDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12076
	ctx.r3.s64 = ctx.r11.s64 + -12076;
	// bl 0x82ca7538
	ctx.lr = 0x8319BDD0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2812(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2812, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BDE8"))) PPC_WEAK_FUNC(sub_8319BDE8);
PPC_FUNC_IMPL(__imp__sub_8319BDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12048
	ctx.r3.s64 = ctx.r11.s64 + -12048;
	// bl 0x82ca7538
	ctx.lr = 0x8319BE00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5380(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BE18"))) PPC_WEAK_FUNC(sub_8319BE18);
PPC_FUNC_IMPL(__imp__sub_8319BE18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3288
	ctx.r3.s64 = ctx.r11.s64 + -3288;
	// bl 0x82ca7538
	ctx.lr = 0x8319BE30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5216(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BE48"))) PPC_WEAK_FUNC(sub_8319BE48);
PPC_FUNC_IMPL(__imp__sub_8319BE48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3316
	ctx.r3.s64 = ctx.r11.s64 + -3316;
	// bl 0x82ca7538
	ctx.lr = 0x8319BE60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BE78"))) PPC_WEAK_FUNC(sub_8319BE78);
PPC_FUNC_IMPL(__imp__sub_8319BE78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3340
	ctx.r3.s64 = ctx.r11.s64 + -3340;
	// bl 0x82ca7538
	ctx.lr = 0x8319BE90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BEA8"))) PPC_WEAK_FUNC(sub_8319BEA8);
PPC_FUNC_IMPL(__imp__sub_8319BEA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3360
	ctx.r3.s64 = ctx.r11.s64 + -3360;
	// bl 0x82ca7538
	ctx.lr = 0x8319BEC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2740(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BED8"))) PPC_WEAK_FUNC(sub_8319BED8);
PPC_FUNC_IMPL(__imp__sub_8319BED8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3388
	ctx.r3.s64 = ctx.r11.s64 + -3388;
	// bl 0x82ca7538
	ctx.lr = 0x8319BEF0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5304(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BF08"))) PPC_WEAK_FUNC(sub_8319BF08);
PPC_FUNC_IMPL(__imp__sub_8319BF08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3412
	ctx.r3.s64 = ctx.r11.s64 + -3412;
	// bl 0x82ca7538
	ctx.lr = 0x8319BF20;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BF38"))) PPC_WEAK_FUNC(sub_8319BF38);
PPC_FUNC_IMPL(__imp__sub_8319BF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-12000
	ctx.r3.s64 = ctx.r11.s64 + -12000;
	// bl 0x82ca7538
	ctx.lr = 0x8319BF50;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BF68"))) PPC_WEAK_FUNC(sub_8319BF68);
PPC_FUNC_IMPL(__imp__sub_8319BF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11984
	ctx.r3.s64 = ctx.r11.s64 + -11984;
	// bl 0x82ca7538
	ctx.lr = 0x8319BF80;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5532(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BF98"))) PPC_WEAK_FUNC(sub_8319BF98);
PPC_FUNC_IMPL(__imp__sub_8319BF98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,18020
	ctx.r3.s64 = ctx.r11.s64 + 18020;
	// bl 0x82ca7538
	ctx.lr = 0x8319BFB0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-972(r11)
	PPC_STORE_U32(ctx.r11.u32 + -972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BFC8"))) PPC_WEAK_FUNC(sub_8319BFC8);
PPC_FUNC_IMPL(__imp__sub_8319BFC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-2692
	ctx.r3.s64 = ctx.r11.s64 + -2692;
	// bl 0x82ca7538
	ctx.lr = 0x8319BFE0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-404(r11)
	PPC_STORE_U32(ctx.r11.u32 + -404, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319BFF8"))) PPC_WEAK_FUNC(sub_8319BFF8);
PPC_FUNC_IMPL(__imp__sub_8319BFF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-2728
	ctx.r3.s64 = ctx.r11.s64 + -2728;
	// bl 0x82ca7538
	ctx.lr = 0x8319C010;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2176(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C028"))) PPC_WEAK_FUNC(sub_8319C028);
PPC_FUNC_IMPL(__imp__sub_8319C028) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-2768
	ctx.r3.s64 = ctx.r11.s64 + -2768;
	// bl 0x82ca7538
	ctx.lr = 0x8319C040;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C058"))) PPC_WEAK_FUNC(sub_8319C058);
PPC_FUNC_IMPL(__imp__sub_8319C058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11968
	ctx.r3.s64 = ctx.r11.s64 + -11968;
	// bl 0x82ca7538
	ctx.lr = 0x8319C070;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-952(r11)
	PPC_STORE_U32(ctx.r11.u32 + -952, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C088"))) PPC_WEAK_FUNC(sub_8319C088);
PPC_FUNC_IMPL(__imp__sub_8319C088) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-2856
	ctx.r3.s64 = ctx.r11.s64 + -2856;
	// bl 0x82ca7538
	ctx.lr = 0x8319C0A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3308(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C0B8"))) PPC_WEAK_FUNC(sub_8319C0B8);
PPC_FUNC_IMPL(__imp__sub_8319C0B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-2792
	ctx.r3.s64 = ctx.r11.s64 + -2792;
	// bl 0x82ca7538
	ctx.lr = 0x8319C0D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3456(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C0E8"))) PPC_WEAK_FUNC(sub_8319C0E8);
PPC_FUNC_IMPL(__imp__sub_8319C0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11936
	ctx.r3.s64 = ctx.r11.s64 + -11936;
	// bl 0x82ca7538
	ctx.lr = 0x8319C100;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5240(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C118"))) PPC_WEAK_FUNC(sub_8319C118);
PPC_FUNC_IMPL(__imp__sub_8319C118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11916
	ctx.r3.s64 = ctx.r11.s64 + -11916;
	// bl 0x82ca7538
	ctx.lr = 0x8319C130;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-968(r11)
	PPC_STORE_U32(ctx.r11.u32 + -968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C148"))) PPC_WEAK_FUNC(sub_8319C148);
PPC_FUNC_IMPL(__imp__sub_8319C148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11892
	ctx.r3.s64 = ctx.r11.s64 + -11892;
	// bl 0x82ca7538
	ctx.lr = 0x8319C160;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C178"))) PPC_WEAK_FUNC(sub_8319C178);
PPC_FUNC_IMPL(__imp__sub_8319C178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11860
	ctx.r3.s64 = ctx.r11.s64 + -11860;
	// bl 0x82ca7538
	ctx.lr = 0x8319C190;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1928(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1928, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C1A8"))) PPC_WEAK_FUNC(sub_8319C1A8);
PPC_FUNC_IMPL(__imp__sub_8319C1A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-3180
	ctx.r3.s64 = ctx.r11.s64 + -3180;
	// bl 0x82ca7538
	ctx.lr = 0x8319C1C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5336(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5336, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C1D8"))) PPC_WEAK_FUNC(sub_8319C1D8);
PPC_FUNC_IMPL(__imp__sub_8319C1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11840
	ctx.r3.s64 = ctx.r11.s64 + -11840;
	// bl 0x82ca7538
	ctx.lr = 0x8319C1F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C208"))) PPC_WEAK_FUNC(sub_8319C208);
PPC_FUNC_IMPL(__imp__sub_8319C208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11824
	ctx.r3.s64 = ctx.r11.s64 + -11824;
	// bl 0x82ca7538
	ctx.lr = 0x8319C220;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-932(r11)
	PPC_STORE_U32(ctx.r11.u32 + -932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C238"))) PPC_WEAK_FUNC(sub_8319C238);
PPC_FUNC_IMPL(__imp__sub_8319C238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11804
	ctx.r3.s64 = ctx.r11.s64 + -11804;
	// bl 0x82ca7538
	ctx.lr = 0x8319C250;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2596, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C268"))) PPC_WEAK_FUNC(sub_8319C268);
PPC_FUNC_IMPL(__imp__sub_8319C268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11784
	ctx.r3.s64 = ctx.r11.s64 + -11784;
	// bl 0x82ca7538
	ctx.lr = 0x8319C280;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1072(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1072, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C298"))) PPC_WEAK_FUNC(sub_8319C298);
PPC_FUNC_IMPL(__imp__sub_8319C298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11764
	ctx.r3.s64 = ctx.r11.s64 + -11764;
	// bl 0x82ca7538
	ctx.lr = 0x8319C2B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,6220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C2C8"))) PPC_WEAK_FUNC(sub_8319C2C8);
PPC_FUNC_IMPL(__imp__sub_8319C2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11748
	ctx.r3.s64 = ctx.r11.s64 + -11748;
	// bl 0x82ca7538
	ctx.lr = 0x8319C2E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C2F8"))) PPC_WEAK_FUNC(sub_8319C2F8);
PPC_FUNC_IMPL(__imp__sub_8319C2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11732
	ctx.r3.s64 = ctx.r11.s64 + -11732;
	// bl 0x82ca7538
	ctx.lr = 0x8319C310;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2568(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C328"))) PPC_WEAK_FUNC(sub_8319C328);
PPC_FUNC_IMPL(__imp__sub_8319C328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11708
	ctx.r3.s64 = ctx.r11.s64 + -11708;
	// bl 0x82ca7538
	ctx.lr = 0x8319C340;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5512(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C358"))) PPC_WEAK_FUNC(sub_8319C358);
PPC_FUNC_IMPL(__imp__sub_8319C358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11684
	ctx.r3.s64 = ctx.r11.s64 + -11684;
	// bl 0x82ca7538
	ctx.lr = 0x8319C370;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5444(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C388"))) PPC_WEAK_FUNC(sub_8319C388);
PPC_FUNC_IMPL(__imp__sub_8319C388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11660
	ctx.r3.s64 = ctx.r11.s64 + -11660;
	// bl 0x82ca7538
	ctx.lr = 0x8319C3A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C3B8"))) PPC_WEAK_FUNC(sub_8319C3B8);
PPC_FUNC_IMPL(__imp__sub_8319C3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11640
	ctx.r3.s64 = ctx.r11.s64 + -11640;
	// bl 0x82ca7538
	ctx.lr = 0x8319C3D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5248(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C3E8"))) PPC_WEAK_FUNC(sub_8319C3E8);
PPC_FUNC_IMPL(__imp__sub_8319C3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11612
	ctx.r3.s64 = ctx.r11.s64 + -11612;
	// bl 0x82ca7538
	ctx.lr = 0x8319C400;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5352(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C418"))) PPC_WEAK_FUNC(sub_8319C418);
PPC_FUNC_IMPL(__imp__sub_8319C418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11592
	ctx.r3.s64 = ctx.r11.s64 + -11592;
	// bl 0x82ca7538
	ctx.lr = 0x8319C430;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5212(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C448"))) PPC_WEAK_FUNC(sub_8319C448);
PPC_FUNC_IMPL(__imp__sub_8319C448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11572
	ctx.r3.s64 = ctx.r11.s64 + -11572;
	// bl 0x82ca7538
	ctx.lr = 0x8319C460;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2228(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C478"))) PPC_WEAK_FUNC(sub_8319C478);
PPC_FUNC_IMPL(__imp__sub_8319C478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11544
	ctx.r3.s64 = ctx.r11.s64 + -11544;
	// bl 0x82ca7538
	ctx.lr = 0x8319C490;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C4A8"))) PPC_WEAK_FUNC(sub_8319C4A8);
PPC_FUNC_IMPL(__imp__sub_8319C4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11512
	ctx.r3.s64 = ctx.r11.s64 + -11512;
	// bl 0x82ca7538
	ctx.lr = 0x8319C4C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1972(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C4D8"))) PPC_WEAK_FUNC(sub_8319C4D8);
PPC_FUNC_IMPL(__imp__sub_8319C4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11480
	ctx.r3.s64 = ctx.r11.s64 + -11480;
	// bl 0x82ca7538
	ctx.lr = 0x8319C4F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5256(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C508"))) PPC_WEAK_FUNC(sub_8319C508);
PPC_FUNC_IMPL(__imp__sub_8319C508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11460
	ctx.r3.s64 = ctx.r11.s64 + -11460;
	// bl 0x82ca7538
	ctx.lr = 0x8319C520;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C538"))) PPC_WEAK_FUNC(sub_8319C538);
PPC_FUNC_IMPL(__imp__sub_8319C538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11436
	ctx.r3.s64 = ctx.r11.s64 + -11436;
	// bl 0x82ca7538
	ctx.lr = 0x8319C550;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5296(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C568"))) PPC_WEAK_FUNC(sub_8319C568);
PPC_FUNC_IMPL(__imp__sub_8319C568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11412
	ctx.r3.s64 = ctx.r11.s64 + -11412;
	// bl 0x82ca7538
	ctx.lr = 0x8319C580;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5368(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C598"))) PPC_WEAK_FUNC(sub_8319C598);
PPC_FUNC_IMPL(__imp__sub_8319C598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11384
	ctx.r3.s64 = ctx.r11.s64 + -11384;
	// bl 0x82ca7538
	ctx.lr = 0x8319C5B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C5C8"))) PPC_WEAK_FUNC(sub_8319C5C8);
PPC_FUNC_IMPL(__imp__sub_8319C5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11352
	ctx.r3.s64 = ctx.r11.s64 + -11352;
	// bl 0x82ca7538
	ctx.lr = 0x8319C5E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3440(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C5F8"))) PPC_WEAK_FUNC(sub_8319C5F8);
PPC_FUNC_IMPL(__imp__sub_8319C5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11316
	ctx.r3.s64 = ctx.r11.s64 + -11316;
	// bl 0x82ca7538
	ctx.lr = 0x8319C610;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C628"))) PPC_WEAK_FUNC(sub_8319C628);
PPC_FUNC_IMPL(__imp__sub_8319C628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11292
	ctx.r3.s64 = ctx.r11.s64 + -11292;
	// bl 0x82ca7538
	ctx.lr = 0x8319C640;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1372(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C658"))) PPC_WEAK_FUNC(sub_8319C658);
PPC_FUNC_IMPL(__imp__sub_8319C658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11264
	ctx.r3.s64 = ctx.r11.s64 + -11264;
	// bl 0x82ca7538
	ctx.lr = 0x8319C670;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C688"))) PPC_WEAK_FUNC(sub_8319C688);
PPC_FUNC_IMPL(__imp__sub_8319C688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11236
	ctx.r3.s64 = ctx.r11.s64 + -11236;
	// bl 0x82ca7538
	ctx.lr = 0x8319C6A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-360(r11)
	PPC_STORE_U32(ctx.r11.u32 + -360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C6B8"))) PPC_WEAK_FUNC(sub_8319C6B8);
PPC_FUNC_IMPL(__imp__sub_8319C6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11204
	ctx.r3.s64 = ctx.r11.s64 + -11204;
	// bl 0x82ca7538
	ctx.lr = 0x8319C6D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-828(r11)
	PPC_STORE_U32(ctx.r11.u32 + -828, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C6E8"))) PPC_WEAK_FUNC(sub_8319C6E8);
PPC_FUNC_IMPL(__imp__sub_8319C6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11180
	ctx.r3.s64 = ctx.r11.s64 + -11180;
	// bl 0x82ca7538
	ctx.lr = 0x8319C700;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C718"))) PPC_WEAK_FUNC(sub_8319C718);
PPC_FUNC_IMPL(__imp__sub_8319C718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11152
	ctx.r3.s64 = ctx.r11.s64 + -11152;
	// bl 0x82ca7538
	ctx.lr = 0x8319C730;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-2164(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C748"))) PPC_WEAK_FUNC(sub_8319C748);
PPC_FUNC_IMPL(__imp__sub_8319C748) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22776
	ctx.r3.s64 = ctx.r11.s64 + 22776;
	// bl 0x82ca7538
	ctx.lr = 0x8319C760;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5272(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C778"))) PPC_WEAK_FUNC(sub_8319C778);
PPC_FUNC_IMPL(__imp__sub_8319C778) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22816
	ctx.r3.s64 = ctx.r11.s64 + 22816;
	// bl 0x82ca7538
	ctx.lr = 0x8319C790;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-144(r11)
	PPC_STORE_U32(ctx.r11.u32 + -144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C7A8"))) PPC_WEAK_FUNC(sub_8319C7A8);
PPC_FUNC_IMPL(__imp__sub_8319C7A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22796
	ctx.r3.s64 = ctx.r11.s64 + 22796;
	// bl 0x82ca7538
	ctx.lr = 0x8319C7C0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-160(r11)
	PPC_STORE_U32(ctx.r11.u32 + -160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C7D8"))) PPC_WEAK_FUNC(sub_8319C7D8);
PPC_FUNC_IMPL(__imp__sub_8319C7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11128
	ctx.r3.s64 = ctx.r11.s64 + -11128;
	// bl 0x82ca7538
	ctx.lr = 0x8319C7F0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5412(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C808"))) PPC_WEAK_FUNC(sub_8319C808);
PPC_FUNC_IMPL(__imp__sub_8319C808) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23112
	ctx.r3.s64 = ctx.r11.s64 + 23112;
	// bl 0x82ca7538
	ctx.lr = 0x8319C820;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C838"))) PPC_WEAK_FUNC(sub_8319C838);
PPC_FUNC_IMPL(__imp__sub_8319C838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11104
	ctx.r3.s64 = ctx.r11.s64 + -11104;
	// bl 0x82ca7538
	ctx.lr = 0x8319C850;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-4860(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4860, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C868"))) PPC_WEAK_FUNC(sub_8319C868);
PPC_FUNC_IMPL(__imp__sub_8319C868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11076
	ctx.r3.s64 = ctx.r11.s64 + -11076;
	// bl 0x82ca7538
	ctx.lr = 0x8319C880;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,4016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C898"))) PPC_WEAK_FUNC(sub_8319C898);
PPC_FUNC_IMPL(__imp__sub_8319C898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11040
	ctx.r3.s64 = ctx.r11.s64 + -11040;
	// bl 0x82ca7538
	ctx.lr = 0x8319C8B0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-344(r11)
	PPC_STORE_U32(ctx.r11.u32 + -344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C8C8"))) PPC_WEAK_FUNC(sub_8319C8C8);
PPC_FUNC_IMPL(__imp__sub_8319C8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-11008
	ctx.r3.s64 = ctx.r11.s64 + -11008;
	// bl 0x82ca7538
	ctx.lr = 0x8319C8E0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C8F8"))) PPC_WEAK_FUNC(sub_8319C8F8);
PPC_FUNC_IMPL(__imp__sub_8319C8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-10980
	ctx.r3.s64 = ctx.r11.s64 + -10980;
	// bl 0x82ca7538
	ctx.lr = 0x8319C910;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,3948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3948, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C928"))) PPC_WEAK_FUNC(sub_8319C928);
PPC_FUNC_IMPL(__imp__sub_8319C928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-10948
	ctx.r3.s64 = ctx.r11.s64 + -10948;
	// bl 0x82ca7538
	ctx.lr = 0x8319C940;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,5740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C958"))) PPC_WEAK_FUNC(sub_8319C958);
PPC_FUNC_IMPL(__imp__sub_8319C958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-10920
	ctx.r3.s64 = ctx.r11.s64 + -10920;
	// bl 0x82ca7538
	ctx.lr = 0x8319C970;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-184(r11)
	PPC_STORE_U32(ctx.r11.u32 + -184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C988"))) PPC_WEAK_FUNC(sub_8319C988);
PPC_FUNC_IMPL(__imp__sub_8319C988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-10884
	ctx.r3.s64 = ctx.r11.s64 + -10884;
	// bl 0x82ca7538
	ctx.lr = 0x8319C9A0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5224(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C9B8"))) PPC_WEAK_FUNC(sub_8319C9B8);
PPC_FUNC_IMPL(__imp__sub_8319C9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-10856
	ctx.r3.s64 = ctx.r11.s64 + -10856;
	// bl 0x82ca7538
	ctx.lr = 0x8319C9D0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319C9E8"))) PPC_WEAK_FUNC(sub_8319C9E8);
PPC_FUNC_IMPL(__imp__sub_8319C9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-10828
	ctx.r3.s64 = ctx.r11.s64 + -10828;
	// bl 0x82ca7538
	ctx.lr = 0x8319CA00;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,2216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CA18"))) PPC_WEAK_FUNC(sub_8319CA18);
PPC_FUNC_IMPL(__imp__sub_8319CA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-10792
	ctx.r3.s64 = ctx.r11.s64 + -10792;
	// bl 0x82ca7538
	ctx.lr = 0x8319CA30;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-5312(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CA48"))) PPC_WEAK_FUNC(sub_8319CA48);
PPC_FUNC_IMPL(__imp__sub_8319CA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-10760
	ctx.r3.s64 = ctx.r11.s64 + -10760;
	// bl 0x82ca7538
	ctx.lr = 0x8319CA60;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,1480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CA78"))) PPC_WEAK_FUNC(sub_8319CA78);
PPC_FUNC_IMPL(__imp__sub_8319CA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-10732
	ctx.r3.s64 = ctx.r11.s64 + -10732;
	// bl 0x82ca7538
	ctx.lr = 0x8319CA90;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,-3312(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319CAA8"))) PPC_WEAK_FUNC(sub_8319CAA8);
PPC_FUNC_IMPL(__imp__sub_8319CAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-10700
	ctx.r3.s64 = ctx.r11.s64 + -10700;
	// bl 0x82ca7538
	ctx.lr = 0x8319CAC0;
	sub_82CA7538(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// stw r3,840(r11)
	PPC_STORE_U32(ctx.r11.u32 + 840, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

