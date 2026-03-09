#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_828F3668"))) PPC_WEAK_FUNC(sub_828F3668);
PPC_FUNC_IMPL(__imp__sub_828F3668) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F3688;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-9040
	ctx.r11.s64 = ctx.r11.s64 + -9040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F36B8"))) PPC_WEAK_FUNC(sub_828F36B8);
PPC_FUNC_IMPL(__imp__sub_828F36B8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-9040
	ctx.r11.s64 = ctx.r11.s64 + -9040;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F36DC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3704
	if (ctx.cr0.eq) goto loc_828F3704;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f3704
	if (ctx.cr6.eq) goto loc_828F3704;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F3704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F3704:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F3728"))) PPC_WEAK_FUNC(sub_828F3728);
PPC_FUNC_IMPL(__imp__sub_828F3728) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f36b8
	ctx.lr = 0x828F3748;
	sub_828F36B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3758
	if (ctx.cr0.eq) goto loc_828F3758;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F3758;
	sub_823FD208(ctx, base);
loc_828F3758:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3778"))) PPC_WEAK_FUNC(sub_828F3778);
PPC_FUNC_IMPL(__imp__sub_828F3778) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F3798;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8988
	ctx.r11.s64 = ctx.r11.s64 + -8988;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F37C8"))) PPC_WEAK_FUNC(sub_828F37C8);
PPC_FUNC_IMPL(__imp__sub_828F37C8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8988
	ctx.r11.s64 = ctx.r11.s64 + -8988;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F37EC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3814
	if (ctx.cr0.eq) goto loc_828F3814;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f3814
	if (ctx.cr6.eq) goto loc_828F3814;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F3814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F3814:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F3838"))) PPC_WEAK_FUNC(sub_828F3838);
PPC_FUNC_IMPL(__imp__sub_828F3838) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f37c8
	ctx.lr = 0x828F3858;
	sub_828F37C8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3868
	if (ctx.cr0.eq) goto loc_828F3868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F3868;
	sub_823FD208(ctx, base);
loc_828F3868:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3888"))) PPC_WEAK_FUNC(sub_828F3888);
PPC_FUNC_IMPL(__imp__sub_828F3888) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F38A8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8936
	ctx.r11.s64 = ctx.r11.s64 + -8936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F38D8"))) PPC_WEAK_FUNC(sub_828F38D8);
PPC_FUNC_IMPL(__imp__sub_828F38D8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8936
	ctx.r11.s64 = ctx.r11.s64 + -8936;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F38FC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3924
	if (ctx.cr0.eq) goto loc_828F3924;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f3924
	if (ctx.cr6.eq) goto loc_828F3924;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F3924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F3924:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F3948"))) PPC_WEAK_FUNC(sub_828F3948);
PPC_FUNC_IMPL(__imp__sub_828F3948) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f38d8
	ctx.lr = 0x828F3968;
	sub_828F38D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3978
	if (ctx.cr0.eq) goto loc_828F3978;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F3978;
	sub_823FD208(ctx, base);
loc_828F3978:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3998"))) PPC_WEAK_FUNC(sub_828F3998);
PPC_FUNC_IMPL(__imp__sub_828F3998) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F39B8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8884
	ctx.r11.s64 = ctx.r11.s64 + -8884;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F39E8"))) PPC_WEAK_FUNC(sub_828F39E8);
PPC_FUNC_IMPL(__imp__sub_828F39E8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8884
	ctx.r11.s64 = ctx.r11.s64 + -8884;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F3A0C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3a34
	if (ctx.cr0.eq) goto loc_828F3A34;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f3a34
	if (ctx.cr6.eq) goto loc_828F3A34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F3A34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F3A34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F3A58"))) PPC_WEAK_FUNC(sub_828F3A58);
PPC_FUNC_IMPL(__imp__sub_828F3A58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f39e8
	ctx.lr = 0x828F3A78;
	sub_828F39E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3a88
	if (ctx.cr0.eq) goto loc_828F3A88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F3A88;
	sub_823FD208(ctx, base);
loc_828F3A88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3AA8"))) PPC_WEAK_FUNC(sub_828F3AA8);
PPC_FUNC_IMPL(__imp__sub_828F3AA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F3AC8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8832
	ctx.r11.s64 = ctx.r11.s64 + -8832;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3AF8"))) PPC_WEAK_FUNC(sub_828F3AF8);
PPC_FUNC_IMPL(__imp__sub_828F3AF8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8832
	ctx.r11.s64 = ctx.r11.s64 + -8832;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F3B1C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3b44
	if (ctx.cr0.eq) goto loc_828F3B44;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f3b44
	if (ctx.cr6.eq) goto loc_828F3B44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F3B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F3B44:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F3B68"))) PPC_WEAK_FUNC(sub_828F3B68);
PPC_FUNC_IMPL(__imp__sub_828F3B68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f3af8
	ctx.lr = 0x828F3B88;
	sub_828F3AF8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3b98
	if (ctx.cr0.eq) goto loc_828F3B98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F3B98;
	sub_823FD208(ctx, base);
loc_828F3B98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3BB8"))) PPC_WEAK_FUNC(sub_828F3BB8);
PPC_FUNC_IMPL(__imp__sub_828F3BB8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F3BD8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8780
	ctx.r11.s64 = ctx.r11.s64 + -8780;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3C08"))) PPC_WEAK_FUNC(sub_828F3C08);
PPC_FUNC_IMPL(__imp__sub_828F3C08) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8780
	ctx.r11.s64 = ctx.r11.s64 + -8780;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F3C2C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3c54
	if (ctx.cr0.eq) goto loc_828F3C54;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f3c54
	if (ctx.cr6.eq) goto loc_828F3C54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F3C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F3C54:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F3C78"))) PPC_WEAK_FUNC(sub_828F3C78);
PPC_FUNC_IMPL(__imp__sub_828F3C78) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f3c08
	ctx.lr = 0x828F3C98;
	sub_828F3C08(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3ca8
	if (ctx.cr0.eq) goto loc_828F3CA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F3CA8;
	sub_823FD208(ctx, base);
loc_828F3CA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3CC8"))) PPC_WEAK_FUNC(sub_828F3CC8);
PPC_FUNC_IMPL(__imp__sub_828F3CC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F3CE8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8728
	ctx.r11.s64 = ctx.r11.s64 + -8728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3D18"))) PPC_WEAK_FUNC(sub_828F3D18);
PPC_FUNC_IMPL(__imp__sub_828F3D18) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8728
	ctx.r11.s64 = ctx.r11.s64 + -8728;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F3D3C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3d64
	if (ctx.cr0.eq) goto loc_828F3D64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f3d64
	if (ctx.cr6.eq) goto loc_828F3D64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F3D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F3D64:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F3D88"))) PPC_WEAK_FUNC(sub_828F3D88);
PPC_FUNC_IMPL(__imp__sub_828F3D88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f3d18
	ctx.lr = 0x828F3DA8;
	sub_828F3D18(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3db8
	if (ctx.cr0.eq) goto loc_828F3DB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F3DB8;
	sub_823FD208(ctx, base);
loc_828F3DB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3DD8"))) PPC_WEAK_FUNC(sub_828F3DD8);
PPC_FUNC_IMPL(__imp__sub_828F3DD8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F3DF8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8676
	ctx.r11.s64 = ctx.r11.s64 + -8676;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3E28"))) PPC_WEAK_FUNC(sub_828F3E28);
PPC_FUNC_IMPL(__imp__sub_828F3E28) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8676
	ctx.r11.s64 = ctx.r11.s64 + -8676;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F3E4C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3e74
	if (ctx.cr0.eq) goto loc_828F3E74;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f3e74
	if (ctx.cr6.eq) goto loc_828F3E74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F3E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F3E74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F3E98"))) PPC_WEAK_FUNC(sub_828F3E98);
PPC_FUNC_IMPL(__imp__sub_828F3E98) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f3e28
	ctx.lr = 0x828F3EB8;
	sub_828F3E28(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3ec8
	if (ctx.cr0.eq) goto loc_828F3EC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F3EC8;
	sub_823FD208(ctx, base);
loc_828F3EC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3EE8"))) PPC_WEAK_FUNC(sub_828F3EE8);
PPC_FUNC_IMPL(__imp__sub_828F3EE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F3F08;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8624
	ctx.r11.s64 = ctx.r11.s64 + -8624;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3F38"))) PPC_WEAK_FUNC(sub_828F3F38);
PPC_FUNC_IMPL(__imp__sub_828F3F38) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8624
	ctx.r11.s64 = ctx.r11.s64 + -8624;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F3F5C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3f84
	if (ctx.cr0.eq) goto loc_828F3F84;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f3f84
	if (ctx.cr6.eq) goto loc_828F3F84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F3F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F3F84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F3FA8"))) PPC_WEAK_FUNC(sub_828F3FA8);
PPC_FUNC_IMPL(__imp__sub_828F3FA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f3f38
	ctx.lr = 0x828F3FC8;
	sub_828F3F38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f3fd8
	if (ctx.cr0.eq) goto loc_828F3FD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F3FD8;
	sub_823FD208(ctx, base);
loc_828F3FD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F3FF8"))) PPC_WEAK_FUNC(sub_828F3FF8);
PPC_FUNC_IMPL(__imp__sub_828F3FF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F4018;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8572
	ctx.r11.s64 = ctx.r11.s64 + -8572;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4048"))) PPC_WEAK_FUNC(sub_828F4048);
PPC_FUNC_IMPL(__imp__sub_828F4048) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8572
	ctx.r11.s64 = ctx.r11.s64 + -8572;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F406C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4094
	if (ctx.cr0.eq) goto loc_828F4094;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f4094
	if (ctx.cr6.eq) goto loc_828F4094;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F4094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F4094:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F40B8"))) PPC_WEAK_FUNC(sub_828F40B8);
PPC_FUNC_IMPL(__imp__sub_828F40B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f4048
	ctx.lr = 0x828F40D8;
	sub_828F4048(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f40e8
	if (ctx.cr0.eq) goto loc_828F40E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F40E8;
	sub_823FD208(ctx, base);
loc_828F40E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4108"))) PPC_WEAK_FUNC(sub_828F4108);
PPC_FUNC_IMPL(__imp__sub_828F4108) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F4128;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8520
	ctx.r11.s64 = ctx.r11.s64 + -8520;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4158"))) PPC_WEAK_FUNC(sub_828F4158);
PPC_FUNC_IMPL(__imp__sub_828F4158) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8520
	ctx.r11.s64 = ctx.r11.s64 + -8520;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F417C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f41a4
	if (ctx.cr0.eq) goto loc_828F41A4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f41a4
	if (ctx.cr6.eq) goto loc_828F41A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F41A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F41A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F41C8"))) PPC_WEAK_FUNC(sub_828F41C8);
PPC_FUNC_IMPL(__imp__sub_828F41C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f4158
	ctx.lr = 0x828F41E8;
	sub_828F4158(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f41f8
	if (ctx.cr0.eq) goto loc_828F41F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F41F8;
	sub_823FD208(ctx, base);
loc_828F41F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4218"))) PPC_WEAK_FUNC(sub_828F4218);
PPC_FUNC_IMPL(__imp__sub_828F4218) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F4238;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8468
	ctx.r11.s64 = ctx.r11.s64 + -8468;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4268"))) PPC_WEAK_FUNC(sub_828F4268);
PPC_FUNC_IMPL(__imp__sub_828F4268) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8468
	ctx.r11.s64 = ctx.r11.s64 + -8468;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F428C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f42b4
	if (ctx.cr0.eq) goto loc_828F42B4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f42b4
	if (ctx.cr6.eq) goto loc_828F42B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F42B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F42B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F42D8"))) PPC_WEAK_FUNC(sub_828F42D8);
PPC_FUNC_IMPL(__imp__sub_828F42D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f4268
	ctx.lr = 0x828F42F8;
	sub_828F4268(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4308
	if (ctx.cr0.eq) goto loc_828F4308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F4308;
	sub_823FD208(ctx, base);
loc_828F4308:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4328"))) PPC_WEAK_FUNC(sub_828F4328);
PPC_FUNC_IMPL(__imp__sub_828F4328) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F4348;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8416
	ctx.r11.s64 = ctx.r11.s64 + -8416;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4378"))) PPC_WEAK_FUNC(sub_828F4378);
PPC_FUNC_IMPL(__imp__sub_828F4378) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8416
	ctx.r11.s64 = ctx.r11.s64 + -8416;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F439C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f43c4
	if (ctx.cr0.eq) goto loc_828F43C4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f43c4
	if (ctx.cr6.eq) goto loc_828F43C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F43C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F43C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F43E8"))) PPC_WEAK_FUNC(sub_828F43E8);
PPC_FUNC_IMPL(__imp__sub_828F43E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f4378
	ctx.lr = 0x828F4408;
	sub_828F4378(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4418
	if (ctx.cr0.eq) goto loc_828F4418;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F4418;
	sub_823FD208(ctx, base);
loc_828F4418:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4438"))) PPC_WEAK_FUNC(sub_828F4438);
PPC_FUNC_IMPL(__imp__sub_828F4438) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F4458;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8364
	ctx.r11.s64 = ctx.r11.s64 + -8364;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4488"))) PPC_WEAK_FUNC(sub_828F4488);
PPC_FUNC_IMPL(__imp__sub_828F4488) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8364
	ctx.r11.s64 = ctx.r11.s64 + -8364;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F44AC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f44d4
	if (ctx.cr0.eq) goto loc_828F44D4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f44d4
	if (ctx.cr6.eq) goto loc_828F44D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F44D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F44D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F44F8"))) PPC_WEAK_FUNC(sub_828F44F8);
PPC_FUNC_IMPL(__imp__sub_828F44F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f4488
	ctx.lr = 0x828F4518;
	sub_828F4488(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4528
	if (ctx.cr0.eq) goto loc_828F4528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F4528;
	sub_823FD208(ctx, base);
loc_828F4528:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4548"))) PPC_WEAK_FUNC(sub_828F4548);
PPC_FUNC_IMPL(__imp__sub_828F4548) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F4568;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8312
	ctx.r11.s64 = ctx.r11.s64 + -8312;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4598"))) PPC_WEAK_FUNC(sub_828F4598);
PPC_FUNC_IMPL(__imp__sub_828F4598) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8312
	ctx.r11.s64 = ctx.r11.s64 + -8312;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F45BC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f45e4
	if (ctx.cr0.eq) goto loc_828F45E4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f45e4
	if (ctx.cr6.eq) goto loc_828F45E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F45E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F45E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F4608"))) PPC_WEAK_FUNC(sub_828F4608);
PPC_FUNC_IMPL(__imp__sub_828F4608) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f4598
	ctx.lr = 0x828F4628;
	sub_828F4598(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4638
	if (ctx.cr0.eq) goto loc_828F4638;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F4638;
	sub_823FD208(ctx, base);
loc_828F4638:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4658"))) PPC_WEAK_FUNC(sub_828F4658);
PPC_FUNC_IMPL(__imp__sub_828F4658) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F4678;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8260
	ctx.r11.s64 = ctx.r11.s64 + -8260;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F46A8"))) PPC_WEAK_FUNC(sub_828F46A8);
PPC_FUNC_IMPL(__imp__sub_828F46A8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8260
	ctx.r11.s64 = ctx.r11.s64 + -8260;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F46CC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f46f4
	if (ctx.cr0.eq) goto loc_828F46F4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f46f4
	if (ctx.cr6.eq) goto loc_828F46F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F46F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F46F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F4718"))) PPC_WEAK_FUNC(sub_828F4718);
PPC_FUNC_IMPL(__imp__sub_828F4718) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f46a8
	ctx.lr = 0x828F4738;
	sub_828F46A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4748
	if (ctx.cr0.eq) goto loc_828F4748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F4748;
	sub_823FD208(ctx, base);
loc_828F4748:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4768"))) PPC_WEAK_FUNC(sub_828F4768);
PPC_FUNC_IMPL(__imp__sub_828F4768) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F4788;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8208
	ctx.r11.s64 = ctx.r11.s64 + -8208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F47B8"))) PPC_WEAK_FUNC(sub_828F47B8);
PPC_FUNC_IMPL(__imp__sub_828F47B8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8208
	ctx.r11.s64 = ctx.r11.s64 + -8208;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F47DC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4804
	if (ctx.cr0.eq) goto loc_828F4804;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f4804
	if (ctx.cr6.eq) goto loc_828F4804;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F4804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F4804:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F4828"))) PPC_WEAK_FUNC(sub_828F4828);
PPC_FUNC_IMPL(__imp__sub_828F4828) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f47b8
	ctx.lr = 0x828F4848;
	sub_828F47B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4858
	if (ctx.cr0.eq) goto loc_828F4858;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F4858;
	sub_823FD208(ctx, base);
loc_828F4858:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4878"))) PPC_WEAK_FUNC(sub_828F4878);
PPC_FUNC_IMPL(__imp__sub_828F4878) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F4898;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8156
	ctx.r11.s64 = ctx.r11.s64 + -8156;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F48C8"))) PPC_WEAK_FUNC(sub_828F48C8);
PPC_FUNC_IMPL(__imp__sub_828F48C8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8156
	ctx.r11.s64 = ctx.r11.s64 + -8156;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F48EC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4914
	if (ctx.cr0.eq) goto loc_828F4914;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f4914
	if (ctx.cr6.eq) goto loc_828F4914;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F4914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F4914:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F4938"))) PPC_WEAK_FUNC(sub_828F4938);
PPC_FUNC_IMPL(__imp__sub_828F4938) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f48c8
	ctx.lr = 0x828F4958;
	sub_828F48C8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4968
	if (ctx.cr0.eq) goto loc_828F4968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F4968;
	sub_823FD208(ctx, base);
loc_828F4968:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4988"))) PPC_WEAK_FUNC(sub_828F4988);
PPC_FUNC_IMPL(__imp__sub_828F4988) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F49A8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8104
	ctx.r11.s64 = ctx.r11.s64 + -8104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F49D8"))) PPC_WEAK_FUNC(sub_828F49D8);
PPC_FUNC_IMPL(__imp__sub_828F49D8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8104
	ctx.r11.s64 = ctx.r11.s64 + -8104;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F49FC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4a24
	if (ctx.cr0.eq) goto loc_828F4A24;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f4a24
	if (ctx.cr6.eq) goto loc_828F4A24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F4A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F4A24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F4A48"))) PPC_WEAK_FUNC(sub_828F4A48);
PPC_FUNC_IMPL(__imp__sub_828F4A48) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f49d8
	ctx.lr = 0x828F4A68;
	sub_828F49D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4a78
	if (ctx.cr0.eq) goto loc_828F4A78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F4A78;
	sub_823FD208(ctx, base);
loc_828F4A78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4A98"))) PPC_WEAK_FUNC(sub_828F4A98);
PPC_FUNC_IMPL(__imp__sub_828F4A98) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F4AB8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8052
	ctx.r11.s64 = ctx.r11.s64 + -8052;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4AE8"))) PPC_WEAK_FUNC(sub_828F4AE8);
PPC_FUNC_IMPL(__imp__sub_828F4AE8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8052
	ctx.r11.s64 = ctx.r11.s64 + -8052;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F4B0C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4b34
	if (ctx.cr0.eq) goto loc_828F4B34;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f4b34
	if (ctx.cr6.eq) goto loc_828F4B34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F4B34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F4B34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F4B58"))) PPC_WEAK_FUNC(sub_828F4B58);
PPC_FUNC_IMPL(__imp__sub_828F4B58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f4ae8
	ctx.lr = 0x828F4B78;
	sub_828F4AE8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4b88
	if (ctx.cr0.eq) goto loc_828F4B88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F4B88;
	sub_823FD208(ctx, base);
loc_828F4B88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4BA8"))) PPC_WEAK_FUNC(sub_828F4BA8);
PPC_FUNC_IMPL(__imp__sub_828F4BA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F4BC8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8000
	ctx.r11.s64 = ctx.r11.s64 + -8000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4BF8"))) PPC_WEAK_FUNC(sub_828F4BF8);
PPC_FUNC_IMPL(__imp__sub_828F4BF8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8000
	ctx.r11.s64 = ctx.r11.s64 + -8000;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F4C1C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4c44
	if (ctx.cr0.eq) goto loc_828F4C44;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f4c44
	if (ctx.cr6.eq) goto loc_828F4C44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F4C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F4C44:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F4C68"))) PPC_WEAK_FUNC(sub_828F4C68);
PPC_FUNC_IMPL(__imp__sub_828F4C68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f4bf8
	ctx.lr = 0x828F4C88;
	sub_828F4BF8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4c98
	if (ctx.cr0.eq) goto loc_828F4C98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F4C98;
	sub_823FD208(ctx, base);
loc_828F4C98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4CB8"))) PPC_WEAK_FUNC(sub_828F4CB8);
PPC_FUNC_IMPL(__imp__sub_828F4CB8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F4CD8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-7948
	ctx.r11.s64 = ctx.r11.s64 + -7948;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4D08"))) PPC_WEAK_FUNC(sub_828F4D08);
PPC_FUNC_IMPL(__imp__sub_828F4D08) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-7948
	ctx.r11.s64 = ctx.r11.s64 + -7948;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F4D2C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4d54
	if (ctx.cr0.eq) goto loc_828F4D54;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f4d54
	if (ctx.cr6.eq) goto loc_828F4D54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F4D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F4D54:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F4D78"))) PPC_WEAK_FUNC(sub_828F4D78);
PPC_FUNC_IMPL(__imp__sub_828F4D78) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f4d08
	ctx.lr = 0x828F4D98;
	sub_828F4D08(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4da8
	if (ctx.cr0.eq) goto loc_828F4DA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F4DA8;
	sub_823FD208(ctx, base);
loc_828F4DA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4DC8"))) PPC_WEAK_FUNC(sub_828F4DC8);
PPC_FUNC_IMPL(__imp__sub_828F4DC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F4DE8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-7896
	ctx.r11.s64 = ctx.r11.s64 + -7896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4E18"))) PPC_WEAK_FUNC(sub_828F4E18);
PPC_FUNC_IMPL(__imp__sub_828F4E18) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-7896
	ctx.r11.s64 = ctx.r11.s64 + -7896;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F4E3C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4e64
	if (ctx.cr0.eq) goto loc_828F4E64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f4e64
	if (ctx.cr6.eq) goto loc_828F4E64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F4E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F4E64:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F4E88"))) PPC_WEAK_FUNC(sub_828F4E88);
PPC_FUNC_IMPL(__imp__sub_828F4E88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f4e18
	ctx.lr = 0x828F4EA8;
	sub_828F4E18(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4eb8
	if (ctx.cr0.eq) goto loc_828F4EB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F4EB8;
	sub_823FD208(ctx, base);
loc_828F4EB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4ED8"))) PPC_WEAK_FUNC(sub_828F4ED8);
PPC_FUNC_IMPL(__imp__sub_828F4ED8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F4EF8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-7844
	ctx.r11.s64 = ctx.r11.s64 + -7844;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4F28"))) PPC_WEAK_FUNC(sub_828F4F28);
PPC_FUNC_IMPL(__imp__sub_828F4F28) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-7844
	ctx.r11.s64 = ctx.r11.s64 + -7844;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F4F4C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4f74
	if (ctx.cr0.eq) goto loc_828F4F74;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f4f74
	if (ctx.cr6.eq) goto loc_828F4F74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F4F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F4F74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F4F98"))) PPC_WEAK_FUNC(sub_828F4F98);
PPC_FUNC_IMPL(__imp__sub_828F4F98) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f4f28
	ctx.lr = 0x828F4FB8;
	sub_828F4F28(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f4fc8
	if (ctx.cr0.eq) goto loc_828F4FC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F4FC8;
	sub_823FD208(ctx, base);
loc_828F4FC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F4FE8"))) PPC_WEAK_FUNC(sub_828F4FE8);
PPC_FUNC_IMPL(__imp__sub_828F4FE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828F5008;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-7792
	ctx.r11.s64 = ctx.r11.s64 + -7792;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F5038"))) PPC_WEAK_FUNC(sub_828F5038);
PPC_FUNC_IMPL(__imp__sub_828F5038) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-7792
	ctx.r11.s64 = ctx.r11.s64 + -7792;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828F505C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f5084
	if (ctx.cr0.eq) goto loc_828F5084;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5084
	if (ctx.cr6.eq) goto loc_828F5084;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F5084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F5084:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828F50A8"))) PPC_WEAK_FUNC(sub_828F50A8);
PPC_FUNC_IMPL(__imp__sub_828F50A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828f5038
	ctx.lr = 0x828F50C8;
	sub_828F5038(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f50d8
	if (ctx.cr0.eq) goto loc_828F50D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828F50D8;
	sub_823FD208(ctx, base);
loc_828F50D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F50F8"))) PPC_WEAK_FUNC(sub_828F50F8);
PPC_FUNC_IMPL(__imp__sub_828F50F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5114;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5140
	if (ctx.cr0.eq) goto loc_828F5140;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-9384
	ctx.r10.s64 = ctx.r10.s64 + -9384;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5144
	goto loc_828F5144;
loc_828F5140:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5144:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5154
	if (ctx.cr6.eq) goto loc_828F5154;
	// bl 0x823e19b0
	ctx.lr = 0x828F5154;
	sub_823E19B0(ctx, base);
loc_828F5154:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5168"))) PPC_WEAK_FUNC(sub_828F5168);
PPC_FUNC_IMPL(__imp__sub_828F5168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5170;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5184;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f51b0
	if (ctx.cr0.eq) goto loc_828F51B0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-9332
	ctx.r10.s64 = ctx.r10.s64 + -9332;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f51b4
	goto loc_828F51B4;
loc_828F51B0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F51B4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f51c4
	if (ctx.cr6.eq) goto loc_828F51C4;
	// bl 0x823e19b0
	ctx.lr = 0x828F51C4;
	sub_823E19B0(ctx, base);
loc_828F51C4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F51D8"))) PPC_WEAK_FUNC(sub_828F51D8);
PPC_FUNC_IMPL(__imp__sub_828F51D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F51E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F51F4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5220
	if (ctx.cr0.eq) goto loc_828F5220;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-9280
	ctx.r10.s64 = ctx.r10.s64 + -9280;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5224
	goto loc_828F5224;
loc_828F5220:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5224:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5234
	if (ctx.cr6.eq) goto loc_828F5234;
	// bl 0x823e19b0
	ctx.lr = 0x828F5234;
	sub_823E19B0(ctx, base);
loc_828F5234:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5248"))) PPC_WEAK_FUNC(sub_828F5248);
PPC_FUNC_IMPL(__imp__sub_828F5248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5250;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5264;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5290
	if (ctx.cr0.eq) goto loc_828F5290;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-9228
	ctx.r10.s64 = ctx.r10.s64 + -9228;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5294
	goto loc_828F5294;
loc_828F5290:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5294:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f52a4
	if (ctx.cr6.eq) goto loc_828F52A4;
	// bl 0x823e19b0
	ctx.lr = 0x828F52A4;
	sub_823E19B0(ctx, base);
loc_828F52A4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F52B8"))) PPC_WEAK_FUNC(sub_828F52B8);
PPC_FUNC_IMPL(__imp__sub_828F52B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F52C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F52D4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5300
	if (ctx.cr0.eq) goto loc_828F5300;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-9176
	ctx.r10.s64 = ctx.r10.s64 + -9176;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5304
	goto loc_828F5304;
loc_828F5300:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5304:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5314
	if (ctx.cr6.eq) goto loc_828F5314;
	// bl 0x823e19b0
	ctx.lr = 0x828F5314;
	sub_823E19B0(ctx, base);
loc_828F5314:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5328"))) PPC_WEAK_FUNC(sub_828F5328);
PPC_FUNC_IMPL(__imp__sub_828F5328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5330;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5344;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5370
	if (ctx.cr0.eq) goto loc_828F5370;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-9124
	ctx.r10.s64 = ctx.r10.s64 + -9124;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5374
	goto loc_828F5374;
loc_828F5370:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5374:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5384
	if (ctx.cr6.eq) goto loc_828F5384;
	// bl 0x823e19b0
	ctx.lr = 0x828F5384;
	sub_823E19B0(ctx, base);
loc_828F5384:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5398"))) PPC_WEAK_FUNC(sub_828F5398);
PPC_FUNC_IMPL(__imp__sub_828F5398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F53A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F53B4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f53e0
	if (ctx.cr0.eq) goto loc_828F53E0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-9072
	ctx.r10.s64 = ctx.r10.s64 + -9072;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f53e4
	goto loc_828F53E4;
loc_828F53E0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F53E4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f53f4
	if (ctx.cr6.eq) goto loc_828F53F4;
	// bl 0x823e19b0
	ctx.lr = 0x828F53F4;
	sub_823E19B0(ctx, base);
loc_828F53F4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5408"))) PPC_WEAK_FUNC(sub_828F5408);
PPC_FUNC_IMPL(__imp__sub_828F5408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5410;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5424;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5450
	if (ctx.cr0.eq) goto loc_828F5450;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-9020
	ctx.r10.s64 = ctx.r10.s64 + -9020;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5454
	goto loc_828F5454;
loc_828F5450:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5454:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5464
	if (ctx.cr6.eq) goto loc_828F5464;
	// bl 0x823e19b0
	ctx.lr = 0x828F5464;
	sub_823E19B0(ctx, base);
loc_828F5464:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5478"))) PPC_WEAK_FUNC(sub_828F5478);
PPC_FUNC_IMPL(__imp__sub_828F5478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5480;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5494;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f54c0
	if (ctx.cr0.eq) goto loc_828F54C0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8968
	ctx.r10.s64 = ctx.r10.s64 + -8968;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f54c4
	goto loc_828F54C4;
loc_828F54C0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F54C4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f54d4
	if (ctx.cr6.eq) goto loc_828F54D4;
	// bl 0x823e19b0
	ctx.lr = 0x828F54D4;
	sub_823E19B0(ctx, base);
loc_828F54D4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F54E8"))) PPC_WEAK_FUNC(sub_828F54E8);
PPC_FUNC_IMPL(__imp__sub_828F54E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F54F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5504;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5530
	if (ctx.cr0.eq) goto loc_828F5530;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8916
	ctx.r10.s64 = ctx.r10.s64 + -8916;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5534
	goto loc_828F5534;
loc_828F5530:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5534:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5544
	if (ctx.cr6.eq) goto loc_828F5544;
	// bl 0x823e19b0
	ctx.lr = 0x828F5544;
	sub_823E19B0(ctx, base);
loc_828F5544:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5558"))) PPC_WEAK_FUNC(sub_828F5558);
PPC_FUNC_IMPL(__imp__sub_828F5558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5560;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5574;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f55a0
	if (ctx.cr0.eq) goto loc_828F55A0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8864
	ctx.r10.s64 = ctx.r10.s64 + -8864;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f55a4
	goto loc_828F55A4;
loc_828F55A0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F55A4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f55b4
	if (ctx.cr6.eq) goto loc_828F55B4;
	// bl 0x823e19b0
	ctx.lr = 0x828F55B4;
	sub_823E19B0(ctx, base);
loc_828F55B4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F55C8"))) PPC_WEAK_FUNC(sub_828F55C8);
PPC_FUNC_IMPL(__imp__sub_828F55C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F55D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F55E4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5610
	if (ctx.cr0.eq) goto loc_828F5610;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8812
	ctx.r10.s64 = ctx.r10.s64 + -8812;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5614
	goto loc_828F5614;
loc_828F5610:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5614:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5624
	if (ctx.cr6.eq) goto loc_828F5624;
	// bl 0x823e19b0
	ctx.lr = 0x828F5624;
	sub_823E19B0(ctx, base);
loc_828F5624:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5638"))) PPC_WEAK_FUNC(sub_828F5638);
PPC_FUNC_IMPL(__imp__sub_828F5638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5640;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5654;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5680
	if (ctx.cr0.eq) goto loc_828F5680;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8760
	ctx.r10.s64 = ctx.r10.s64 + -8760;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5684
	goto loc_828F5684;
loc_828F5680:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5684:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5694
	if (ctx.cr6.eq) goto loc_828F5694;
	// bl 0x823e19b0
	ctx.lr = 0x828F5694;
	sub_823E19B0(ctx, base);
loc_828F5694:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F56A8"))) PPC_WEAK_FUNC(sub_828F56A8);
PPC_FUNC_IMPL(__imp__sub_828F56A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F56B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F56C4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f56f0
	if (ctx.cr0.eq) goto loc_828F56F0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8708
	ctx.r10.s64 = ctx.r10.s64 + -8708;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f56f4
	goto loc_828F56F4;
loc_828F56F0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F56F4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5704
	if (ctx.cr6.eq) goto loc_828F5704;
	// bl 0x823e19b0
	ctx.lr = 0x828F5704;
	sub_823E19B0(ctx, base);
loc_828F5704:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5718"))) PPC_WEAK_FUNC(sub_828F5718);
PPC_FUNC_IMPL(__imp__sub_828F5718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5720;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5734;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5760
	if (ctx.cr0.eq) goto loc_828F5760;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8656
	ctx.r10.s64 = ctx.r10.s64 + -8656;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5764
	goto loc_828F5764;
loc_828F5760:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5764:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5774
	if (ctx.cr6.eq) goto loc_828F5774;
	// bl 0x823e19b0
	ctx.lr = 0x828F5774;
	sub_823E19B0(ctx, base);
loc_828F5774:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5788"))) PPC_WEAK_FUNC(sub_828F5788);
PPC_FUNC_IMPL(__imp__sub_828F5788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5790;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F57A4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f57d0
	if (ctx.cr0.eq) goto loc_828F57D0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8604
	ctx.r10.s64 = ctx.r10.s64 + -8604;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f57d4
	goto loc_828F57D4;
loc_828F57D0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F57D4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f57e4
	if (ctx.cr6.eq) goto loc_828F57E4;
	// bl 0x823e19b0
	ctx.lr = 0x828F57E4;
	sub_823E19B0(ctx, base);
loc_828F57E4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F57F8"))) PPC_WEAK_FUNC(sub_828F57F8);
PPC_FUNC_IMPL(__imp__sub_828F57F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5800;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5814;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5840
	if (ctx.cr0.eq) goto loc_828F5840;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8552
	ctx.r10.s64 = ctx.r10.s64 + -8552;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5844
	goto loc_828F5844;
loc_828F5840:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5844:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5854
	if (ctx.cr6.eq) goto loc_828F5854;
	// bl 0x823e19b0
	ctx.lr = 0x828F5854;
	sub_823E19B0(ctx, base);
loc_828F5854:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5868"))) PPC_WEAK_FUNC(sub_828F5868);
PPC_FUNC_IMPL(__imp__sub_828F5868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5870;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5884;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f58b0
	if (ctx.cr0.eq) goto loc_828F58B0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8500
	ctx.r10.s64 = ctx.r10.s64 + -8500;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f58b4
	goto loc_828F58B4;
loc_828F58B0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F58B4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f58c4
	if (ctx.cr6.eq) goto loc_828F58C4;
	// bl 0x823e19b0
	ctx.lr = 0x828F58C4;
	sub_823E19B0(ctx, base);
loc_828F58C4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F58D8"))) PPC_WEAK_FUNC(sub_828F58D8);
PPC_FUNC_IMPL(__imp__sub_828F58D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F58E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F58F4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5920
	if (ctx.cr0.eq) goto loc_828F5920;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8448
	ctx.r10.s64 = ctx.r10.s64 + -8448;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5924
	goto loc_828F5924;
loc_828F5920:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5924:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5934
	if (ctx.cr6.eq) goto loc_828F5934;
	// bl 0x823e19b0
	ctx.lr = 0x828F5934;
	sub_823E19B0(ctx, base);
loc_828F5934:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5948"))) PPC_WEAK_FUNC(sub_828F5948);
PPC_FUNC_IMPL(__imp__sub_828F5948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5950;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5964;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5990
	if (ctx.cr0.eq) goto loc_828F5990;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8396
	ctx.r10.s64 = ctx.r10.s64 + -8396;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5994
	goto loc_828F5994;
loc_828F5990:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5994:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f59a4
	if (ctx.cr6.eq) goto loc_828F59A4;
	// bl 0x823e19b0
	ctx.lr = 0x828F59A4;
	sub_823E19B0(ctx, base);
loc_828F59A4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F59B8"))) PPC_WEAK_FUNC(sub_828F59B8);
PPC_FUNC_IMPL(__imp__sub_828F59B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F59C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F59D4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5a00
	if (ctx.cr0.eq) goto loc_828F5A00;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8344
	ctx.r10.s64 = ctx.r10.s64 + -8344;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5a04
	goto loc_828F5A04;
loc_828F5A00:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5A04:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5a14
	if (ctx.cr6.eq) goto loc_828F5A14;
	// bl 0x823e19b0
	ctx.lr = 0x828F5A14;
	sub_823E19B0(ctx, base);
loc_828F5A14:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5A28"))) PPC_WEAK_FUNC(sub_828F5A28);
PPC_FUNC_IMPL(__imp__sub_828F5A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5A30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5A44;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5a70
	if (ctx.cr0.eq) goto loc_828F5A70;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8292
	ctx.r10.s64 = ctx.r10.s64 + -8292;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5a74
	goto loc_828F5A74;
loc_828F5A70:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5A74:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5a84
	if (ctx.cr6.eq) goto loc_828F5A84;
	// bl 0x823e19b0
	ctx.lr = 0x828F5A84;
	sub_823E19B0(ctx, base);
loc_828F5A84:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5A98"))) PPC_WEAK_FUNC(sub_828F5A98);
PPC_FUNC_IMPL(__imp__sub_828F5A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5AA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5AB4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5ae0
	if (ctx.cr0.eq) goto loc_828F5AE0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8240
	ctx.r10.s64 = ctx.r10.s64 + -8240;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5ae4
	goto loc_828F5AE4;
loc_828F5AE0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5AE4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5af4
	if (ctx.cr6.eq) goto loc_828F5AF4;
	// bl 0x823e19b0
	ctx.lr = 0x828F5AF4;
	sub_823E19B0(ctx, base);
loc_828F5AF4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5B08"))) PPC_WEAK_FUNC(sub_828F5B08);
PPC_FUNC_IMPL(__imp__sub_828F5B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5B10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5B24;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5b50
	if (ctx.cr0.eq) goto loc_828F5B50;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8188
	ctx.r10.s64 = ctx.r10.s64 + -8188;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5b54
	goto loc_828F5B54;
loc_828F5B50:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5B54:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5b64
	if (ctx.cr6.eq) goto loc_828F5B64;
	// bl 0x823e19b0
	ctx.lr = 0x828F5B64;
	sub_823E19B0(ctx, base);
loc_828F5B64:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5B78"))) PPC_WEAK_FUNC(sub_828F5B78);
PPC_FUNC_IMPL(__imp__sub_828F5B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5B80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5B94;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5bc0
	if (ctx.cr0.eq) goto loc_828F5BC0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8136
	ctx.r10.s64 = ctx.r10.s64 + -8136;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5bc4
	goto loc_828F5BC4;
loc_828F5BC0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5BC4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5bd4
	if (ctx.cr6.eq) goto loc_828F5BD4;
	// bl 0x823e19b0
	ctx.lr = 0x828F5BD4;
	sub_823E19B0(ctx, base);
loc_828F5BD4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5BE8"))) PPC_WEAK_FUNC(sub_828F5BE8);
PPC_FUNC_IMPL(__imp__sub_828F5BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5BF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5C04;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5c30
	if (ctx.cr0.eq) goto loc_828F5C30;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8084
	ctx.r10.s64 = ctx.r10.s64 + -8084;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5c34
	goto loc_828F5C34;
loc_828F5C30:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5C34:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5c44
	if (ctx.cr6.eq) goto loc_828F5C44;
	// bl 0x823e19b0
	ctx.lr = 0x828F5C44;
	sub_823E19B0(ctx, base);
loc_828F5C44:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5C58"))) PPC_WEAK_FUNC(sub_828F5C58);
PPC_FUNC_IMPL(__imp__sub_828F5C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5C60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5C74;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5ca0
	if (ctx.cr0.eq) goto loc_828F5CA0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8032
	ctx.r10.s64 = ctx.r10.s64 + -8032;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5ca4
	goto loc_828F5CA4;
loc_828F5CA0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5CA4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5cb4
	if (ctx.cr6.eq) goto loc_828F5CB4;
	// bl 0x823e19b0
	ctx.lr = 0x828F5CB4;
	sub_823E19B0(ctx, base);
loc_828F5CB4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5CC8"))) PPC_WEAK_FUNC(sub_828F5CC8);
PPC_FUNC_IMPL(__imp__sub_828F5CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5CD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5CE4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5d10
	if (ctx.cr0.eq) goto loc_828F5D10;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-7980
	ctx.r10.s64 = ctx.r10.s64 + -7980;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5d14
	goto loc_828F5D14;
loc_828F5D10:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5D14:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5d24
	if (ctx.cr6.eq) goto loc_828F5D24;
	// bl 0x823e19b0
	ctx.lr = 0x828F5D24;
	sub_823E19B0(ctx, base);
loc_828F5D24:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5D38"))) PPC_WEAK_FUNC(sub_828F5D38);
PPC_FUNC_IMPL(__imp__sub_828F5D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5D40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5D54;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5d80
	if (ctx.cr0.eq) goto loc_828F5D80;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-7928
	ctx.r10.s64 = ctx.r10.s64 + -7928;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5d84
	goto loc_828F5D84;
loc_828F5D80:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5D84:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5d94
	if (ctx.cr6.eq) goto loc_828F5D94;
	// bl 0x823e19b0
	ctx.lr = 0x828F5D94;
	sub_823E19B0(ctx, base);
loc_828F5D94:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5DA8"))) PPC_WEAK_FUNC(sub_828F5DA8);
PPC_FUNC_IMPL(__imp__sub_828F5DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5DB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5DC4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5df0
	if (ctx.cr0.eq) goto loc_828F5DF0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-7876
	ctx.r10.s64 = ctx.r10.s64 + -7876;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5df4
	goto loc_828F5DF4;
loc_828F5DF0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5DF4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5e04
	if (ctx.cr6.eq) goto loc_828F5E04;
	// bl 0x823e19b0
	ctx.lr = 0x828F5E04;
	sub_823E19B0(ctx, base);
loc_828F5E04:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5E18"))) PPC_WEAK_FUNC(sub_828F5E18);
PPC_FUNC_IMPL(__imp__sub_828F5E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5E20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5E34;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5e60
	if (ctx.cr0.eq) goto loc_828F5E60;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-7824
	ctx.r10.s64 = ctx.r10.s64 + -7824;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5e64
	goto loc_828F5E64;
loc_828F5E60:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5E64:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5e74
	if (ctx.cr6.eq) goto loc_828F5E74;
	// bl 0x823e19b0
	ctx.lr = 0x828F5E74;
	sub_823E19B0(ctx, base);
loc_828F5E74:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5E88"))) PPC_WEAK_FUNC(sub_828F5E88);
PPC_FUNC_IMPL(__imp__sub_828F5E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5E90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F5EA4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f5ed0
	if (ctx.cr0.eq) goto loc_828F5ED0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-7772
	ctx.r10.s64 = ctx.r10.s64 + -7772;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828f5ed4
	goto loc_828F5ED4;
loc_828F5ED0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828F5ED4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f5ee4
	if (ctx.cr6.eq) goto loc_828F5EE4;
	// bl 0x823e19b0
	ctx.lr = 0x828F5EE4;
	sub_823E19B0(ctx, base);
loc_828F5EE4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5EF8"))) PPC_WEAK_FUNC(sub_828F5EF8);
PPC_FUNC_IMPL(__imp__sub_828F5EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5F00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29500);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f5f44
	if (!ctx.cr0.eq) goto loc_828F5F44;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29500, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F5F24;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828ee888
	ctx.lr = 0x828F5F2C;
	sub_828EE888(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7756
	ctx.r4.s64 = ctx.r11.s64 + -7756;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F5F40;
	sub_82E4E838(ctx, base);
	// lwz r11,29500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29500);
loc_828F5F44:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f5f70
	if (!ctx.cr0.eq) goto loc_828F5F70;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29500, ctx.r11.u32);
	// addi r3,r10,29492
	ctx.r3.s64 = ctx.r10.s64 + 29492;
	// bl 0x828f15d8
	ctx.lr = 0x828F5F60;
	sub_828F15D8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4824
	ctx.r3.s64 = ctx.r11.s64 + -4824;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F5F6C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29500);
loc_828F5F70:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f5fb4
	if (!ctx.cr0.eq) goto loc_828F5FB4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29500, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29476
	ctx.r31.s64 = ctx.r29.s64 + 29476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F5F94;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-9416
	ctx.r11.s64 = ctx.r11.s64 + -9416;
	// stw r11,29476(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29476, ctx.r11.u32);
	// bl 0x828f1fd8
	ctx.lr = 0x828F5FA8;
	sub_828F1FD8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4840
	ctx.r3.s64 = ctx.r11.s64 + -4840;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F5FB4;
	sub_82A7E6B0(ctx, base);
loc_828F5FB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F5FC0"))) PPC_WEAK_FUNC(sub_828F5FC0);
PPC_FUNC_IMPL(__imp__sub_828F5FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F5FC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29528);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f600c
	if (!ctx.cr0.eq) goto loc_828F600C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29528, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F5FEC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828ee8d8
	ctx.lr = 0x828F5FF4;
	sub_828EE8D8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7720
	ctx.r4.s64 = ctx.r11.s64 + -7720;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F6008;
	sub_82E4E838(ctx, base);
	// lwz r11,29528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29528);
loc_828F600C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6038
	if (!ctx.cr0.eq) goto loc_828F6038;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29528, ctx.r11.u32);
	// addi r3,r10,29520
	ctx.r3.s64 = ctx.r10.s64 + 29520;
	// bl 0x828f1628
	ctx.lr = 0x828F6028;
	sub_828F1628(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4784
	ctx.r3.s64 = ctx.r11.s64 + -4784;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6034;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29528);
loc_828F6038:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f607c
	if (!ctx.cr0.eq) goto loc_828F607C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29528, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29504
	ctx.r31.s64 = ctx.r29.s64 + 29504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F605C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-9364
	ctx.r11.s64 = ctx.r11.s64 + -9364;
	// stw r11,29504(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29504, ctx.r11.u32);
	// bl 0x828f2020
	ctx.lr = 0x828F6070;
	sub_828F2020(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4800
	ctx.r3.s64 = ctx.r11.s64 + -4800;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F607C;
	sub_82A7E6B0(ctx, base);
loc_828F607C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6088"))) PPC_WEAK_FUNC(sub_828F6088);
PPC_FUNC_IMPL(__imp__sub_828F6088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F6090;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29556);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f60d4
	if (!ctx.cr0.eq) goto loc_828F60D4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29556, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F60B4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828ee928
	ctx.lr = 0x828F60BC;
	sub_828EE928(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7700
	ctx.r4.s64 = ctx.r11.s64 + -7700;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F60D0;
	sub_82E4E838(ctx, base);
	// lwz r11,29556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29556);
loc_828F60D4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6100
	if (!ctx.cr0.eq) goto loc_828F6100;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29556, ctx.r11.u32);
	// addi r3,r10,29548
	ctx.r3.s64 = ctx.r10.s64 + 29548;
	// bl 0x828f1678
	ctx.lr = 0x828F60F0;
	sub_828F1678(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4744
	ctx.r3.s64 = ctx.r11.s64 + -4744;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F60FC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29556);
loc_828F6100:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6144
	if (!ctx.cr0.eq) goto loc_828F6144;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29556, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29532
	ctx.r31.s64 = ctx.r29.s64 + 29532;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F6124;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-9312
	ctx.r11.s64 = ctx.r11.s64 + -9312;
	// stw r11,29532(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29532, ctx.r11.u32);
	// bl 0x828f2068
	ctx.lr = 0x828F6138;
	sub_828F2068(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4760
	ctx.r3.s64 = ctx.r11.s64 + -4760;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6144;
	sub_82A7E6B0(ctx, base);
loc_828F6144:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6150"))) PPC_WEAK_FUNC(sub_828F6150);
PPC_FUNC_IMPL(__imp__sub_828F6150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F6158;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29584);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f619c
	if (!ctx.cr0.eq) goto loc_828F619C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29584, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F617C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828ee978
	ctx.lr = 0x828F6184;
	sub_828EE978(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7668
	ctx.r4.s64 = ctx.r11.s64 + -7668;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F6198;
	sub_82E4E838(ctx, base);
	// lwz r11,29584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29584);
loc_828F619C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f61c8
	if (!ctx.cr0.eq) goto loc_828F61C8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29584, ctx.r11.u32);
	// addi r3,r10,29576
	ctx.r3.s64 = ctx.r10.s64 + 29576;
	// bl 0x828f16c8
	ctx.lr = 0x828F61B8;
	sub_828F16C8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4704
	ctx.r3.s64 = ctx.r11.s64 + -4704;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F61C4;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29584);
loc_828F61C8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f620c
	if (!ctx.cr0.eq) goto loc_828F620C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29584, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29560
	ctx.r31.s64 = ctx.r29.s64 + 29560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F61EC;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-9260
	ctx.r11.s64 = ctx.r11.s64 + -9260;
	// stw r11,29560(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29560, ctx.r11.u32);
	// bl 0x828f20b0
	ctx.lr = 0x828F6200;
	sub_828F20B0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4720
	ctx.r3.s64 = ctx.r11.s64 + -4720;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F620C;
	sub_82A7E6B0(ctx, base);
loc_828F620C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6218"))) PPC_WEAK_FUNC(sub_828F6218);
PPC_FUNC_IMPL(__imp__sub_828F6218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F6220;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29612);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6264
	if (!ctx.cr0.eq) goto loc_828F6264;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29612, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F6244;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828ee9c8
	ctx.lr = 0x828F624C;
	sub_828EE9C8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7640
	ctx.r4.s64 = ctx.r11.s64 + -7640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F6260;
	sub_82E4E838(ctx, base);
	// lwz r11,29612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29612);
loc_828F6264:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6290
	if (!ctx.cr0.eq) goto loc_828F6290;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29612, ctx.r11.u32);
	// addi r3,r10,29604
	ctx.r3.s64 = ctx.r10.s64 + 29604;
	// bl 0x828f1718
	ctx.lr = 0x828F6280;
	sub_828F1718(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4664
	ctx.r3.s64 = ctx.r11.s64 + -4664;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F628C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29612);
loc_828F6290:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f62d4
	if (!ctx.cr0.eq) goto loc_828F62D4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29612, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29588
	ctx.r31.s64 = ctx.r29.s64 + 29588;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F62B4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-9208
	ctx.r11.s64 = ctx.r11.s64 + -9208;
	// stw r11,29588(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29588, ctx.r11.u32);
	// bl 0x828f20f8
	ctx.lr = 0x828F62C8;
	sub_828F20F8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4680
	ctx.r3.s64 = ctx.r11.s64 + -4680;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F62D4;
	sub_82A7E6B0(ctx, base);
loc_828F62D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F62E0"))) PPC_WEAK_FUNC(sub_828F62E0);
PPC_FUNC_IMPL(__imp__sub_828F62E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F62E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29640);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f632c
	if (!ctx.cr0.eq) goto loc_828F632C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29640, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F630C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eea18
	ctx.lr = 0x828F6314;
	sub_828EEA18(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7620
	ctx.r4.s64 = ctx.r11.s64 + -7620;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F6328;
	sub_82E4E838(ctx, base);
	// lwz r11,29640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29640);
loc_828F632C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6358
	if (!ctx.cr0.eq) goto loc_828F6358;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29640, ctx.r11.u32);
	// addi r3,r10,29632
	ctx.r3.s64 = ctx.r10.s64 + 29632;
	// bl 0x828f1768
	ctx.lr = 0x828F6348;
	sub_828F1768(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4624
	ctx.r3.s64 = ctx.r11.s64 + -4624;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6354;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29640);
loc_828F6358:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f639c
	if (!ctx.cr0.eq) goto loc_828F639C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29640, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29616
	ctx.r31.s64 = ctx.r29.s64 + 29616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F637C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-9156
	ctx.r11.s64 = ctx.r11.s64 + -9156;
	// stw r11,29616(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29616, ctx.r11.u32);
	// bl 0x828f2140
	ctx.lr = 0x828F6390;
	sub_828F2140(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4640
	ctx.r3.s64 = ctx.r11.s64 + -4640;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F639C;
	sub_82A7E6B0(ctx, base);
loc_828F639C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F63A8"))) PPC_WEAK_FUNC(sub_828F63A8);
PPC_FUNC_IMPL(__imp__sub_828F63A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F63B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29668);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f63f4
	if (!ctx.cr0.eq) goto loc_828F63F4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29668, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F63D4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eea68
	ctx.lr = 0x828F63DC;
	sub_828EEA68(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7608
	ctx.r4.s64 = ctx.r11.s64 + -7608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F63F0;
	sub_82E4E838(ctx, base);
	// lwz r11,29668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29668);
loc_828F63F4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6420
	if (!ctx.cr0.eq) goto loc_828F6420;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29668, ctx.r11.u32);
	// addi r3,r10,29660
	ctx.r3.s64 = ctx.r10.s64 + 29660;
	// bl 0x828f17b8
	ctx.lr = 0x828F6410;
	sub_828F17B8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4584
	ctx.r3.s64 = ctx.r11.s64 + -4584;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F641C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29668);
loc_828F6420:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6464
	if (!ctx.cr0.eq) goto loc_828F6464;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29668, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29644
	ctx.r31.s64 = ctx.r29.s64 + 29644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F6444;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-9104
	ctx.r11.s64 = ctx.r11.s64 + -9104;
	// stw r11,29644(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29644, ctx.r11.u32);
	// bl 0x828f2188
	ctx.lr = 0x828F6458;
	sub_828F2188(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4600
	ctx.r3.s64 = ctx.r11.s64 + -4600;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6464;
	sub_82A7E6B0(ctx, base);
loc_828F6464:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6470"))) PPC_WEAK_FUNC(sub_828F6470);
PPC_FUNC_IMPL(__imp__sub_828F6470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F6478;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29696);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f64bc
	if (!ctx.cr0.eq) goto loc_828F64BC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29696, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F649C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eeab8
	ctx.lr = 0x828F64A4;
	sub_828EEAB8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7584
	ctx.r4.s64 = ctx.r11.s64 + -7584;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F64B8;
	sub_82E4E838(ctx, base);
	// lwz r11,29696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29696);
loc_828F64BC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f64e8
	if (!ctx.cr0.eq) goto loc_828F64E8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29696, ctx.r11.u32);
	// addi r3,r10,29688
	ctx.r3.s64 = ctx.r10.s64 + 29688;
	// bl 0x828f1808
	ctx.lr = 0x828F64D8;
	sub_828F1808(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4544
	ctx.r3.s64 = ctx.r11.s64 + -4544;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F64E4;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29696);
loc_828F64E8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f652c
	if (!ctx.cr0.eq) goto loc_828F652C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29696, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29672
	ctx.r31.s64 = ctx.r29.s64 + 29672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F650C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-9052
	ctx.r11.s64 = ctx.r11.s64 + -9052;
	// stw r11,29672(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29672, ctx.r11.u32);
	// bl 0x828f21d0
	ctx.lr = 0x828F6520;
	sub_828F21D0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4560
	ctx.r3.s64 = ctx.r11.s64 + -4560;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F652C;
	sub_82A7E6B0(ctx, base);
loc_828F652C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6538"))) PPC_WEAK_FUNC(sub_828F6538);
PPC_FUNC_IMPL(__imp__sub_828F6538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F6540;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29724);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6584
	if (!ctx.cr0.eq) goto loc_828F6584;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29724, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F6564;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eeb08
	ctx.lr = 0x828F656C;
	sub_828EEB08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7552
	ctx.r4.s64 = ctx.r11.s64 + -7552;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F6580;
	sub_82E4E838(ctx, base);
	// lwz r11,29724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29724);
loc_828F6584:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f65b0
	if (!ctx.cr0.eq) goto loc_828F65B0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29724, ctx.r11.u32);
	// addi r3,r10,29716
	ctx.r3.s64 = ctx.r10.s64 + 29716;
	// bl 0x828f1858
	ctx.lr = 0x828F65A0;
	sub_828F1858(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4504
	ctx.r3.s64 = ctx.r11.s64 + -4504;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F65AC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29724);
loc_828F65B0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f65f4
	if (!ctx.cr0.eq) goto loc_828F65F4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29724, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29700
	ctx.r31.s64 = ctx.r29.s64 + 29700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F65D4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-9000
	ctx.r11.s64 = ctx.r11.s64 + -9000;
	// stw r11,29700(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29700, ctx.r11.u32);
	// bl 0x828f2218
	ctx.lr = 0x828F65E8;
	sub_828F2218(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4520
	ctx.r3.s64 = ctx.r11.s64 + -4520;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F65F4;
	sub_82A7E6B0(ctx, base);
loc_828F65F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6600"))) PPC_WEAK_FUNC(sub_828F6600);
PPC_FUNC_IMPL(__imp__sub_828F6600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F6608;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29752);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f664c
	if (!ctx.cr0.eq) goto loc_828F664C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29752, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F662C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eeb58
	ctx.lr = 0x828F6634;
	sub_828EEB58(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7532
	ctx.r4.s64 = ctx.r11.s64 + -7532;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F6648;
	sub_82E4E838(ctx, base);
	// lwz r11,29752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29752);
loc_828F664C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6678
	if (!ctx.cr0.eq) goto loc_828F6678;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29752, ctx.r11.u32);
	// addi r3,r10,29744
	ctx.r3.s64 = ctx.r10.s64 + 29744;
	// bl 0x828f18a8
	ctx.lr = 0x828F6668;
	sub_828F18A8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4464
	ctx.r3.s64 = ctx.r11.s64 + -4464;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6674;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29752);
loc_828F6678:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f66bc
	if (!ctx.cr0.eq) goto loc_828F66BC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29752, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29728
	ctx.r31.s64 = ctx.r29.s64 + 29728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F669C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8948
	ctx.r11.s64 = ctx.r11.s64 + -8948;
	// stw r11,29728(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29728, ctx.r11.u32);
	// bl 0x828f2260
	ctx.lr = 0x828F66B0;
	sub_828F2260(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4480
	ctx.r3.s64 = ctx.r11.s64 + -4480;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F66BC;
	sub_82A7E6B0(ctx, base);
loc_828F66BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F66C8"))) PPC_WEAK_FUNC(sub_828F66C8);
PPC_FUNC_IMPL(__imp__sub_828F66C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F66D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29780);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6714
	if (!ctx.cr0.eq) goto loc_828F6714;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29780, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F66F4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eeba8
	ctx.lr = 0x828F66FC;
	sub_828EEBA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7500
	ctx.r4.s64 = ctx.r11.s64 + -7500;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F6710;
	sub_82E4E838(ctx, base);
	// lwz r11,29780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29780);
loc_828F6714:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6740
	if (!ctx.cr0.eq) goto loc_828F6740;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29780, ctx.r11.u32);
	// addi r3,r10,29772
	ctx.r3.s64 = ctx.r10.s64 + 29772;
	// bl 0x828f18f8
	ctx.lr = 0x828F6730;
	sub_828F18F8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4424
	ctx.r3.s64 = ctx.r11.s64 + -4424;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F673C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29780);
loc_828F6740:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6784
	if (!ctx.cr0.eq) goto loc_828F6784;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29780, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29756
	ctx.r31.s64 = ctx.r29.s64 + 29756;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F6764;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8896
	ctx.r11.s64 = ctx.r11.s64 + -8896;
	// stw r11,29756(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29756, ctx.r11.u32);
	// bl 0x828f22a8
	ctx.lr = 0x828F6778;
	sub_828F22A8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4440
	ctx.r3.s64 = ctx.r11.s64 + -4440;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6784;
	sub_82A7E6B0(ctx, base);
loc_828F6784:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6790"))) PPC_WEAK_FUNC(sub_828F6790);
PPC_FUNC_IMPL(__imp__sub_828F6790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F6798;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29808);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f67dc
	if (!ctx.cr0.eq) goto loc_828F67DC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29808, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F67BC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eebf8
	ctx.lr = 0x828F67C4;
	sub_828EEBF8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7480
	ctx.r4.s64 = ctx.r11.s64 + -7480;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F67D8;
	sub_82E4E838(ctx, base);
	// lwz r11,29808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29808);
loc_828F67DC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6808
	if (!ctx.cr0.eq) goto loc_828F6808;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29808, ctx.r11.u32);
	// addi r3,r10,29800
	ctx.r3.s64 = ctx.r10.s64 + 29800;
	// bl 0x828f1948
	ctx.lr = 0x828F67F8;
	sub_828F1948(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4384
	ctx.r3.s64 = ctx.r11.s64 + -4384;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6804;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29808);
loc_828F6808:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f684c
	if (!ctx.cr0.eq) goto loc_828F684C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29808, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29784
	ctx.r31.s64 = ctx.r29.s64 + 29784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F682C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8844
	ctx.r11.s64 = ctx.r11.s64 + -8844;
	// stw r11,29784(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29784, ctx.r11.u32);
	// bl 0x828f22f0
	ctx.lr = 0x828F6840;
	sub_828F22F0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4400
	ctx.r3.s64 = ctx.r11.s64 + -4400;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F684C;
	sub_82A7E6B0(ctx, base);
loc_828F684C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6858"))) PPC_WEAK_FUNC(sub_828F6858);
PPC_FUNC_IMPL(__imp__sub_828F6858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F6860;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29836);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f68a4
	if (!ctx.cr0.eq) goto loc_828F68A4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29836, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F6884;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eec48
	ctx.lr = 0x828F688C;
	sub_828EEC48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7468
	ctx.r4.s64 = ctx.r11.s64 + -7468;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F68A0;
	sub_82E4E838(ctx, base);
	// lwz r11,29836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29836);
loc_828F68A4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f68d0
	if (!ctx.cr0.eq) goto loc_828F68D0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29836, ctx.r11.u32);
	// addi r3,r10,29828
	ctx.r3.s64 = ctx.r10.s64 + 29828;
	// bl 0x828f1998
	ctx.lr = 0x828F68C0;
	sub_828F1998(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4344
	ctx.r3.s64 = ctx.r11.s64 + -4344;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F68CC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29836);
loc_828F68D0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6914
	if (!ctx.cr0.eq) goto loc_828F6914;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29836, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29812
	ctx.r31.s64 = ctx.r29.s64 + 29812;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F68F4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8792
	ctx.r11.s64 = ctx.r11.s64 + -8792;
	// stw r11,29812(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29812, ctx.r11.u32);
	// bl 0x828f2338
	ctx.lr = 0x828F6908;
	sub_828F2338(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4360
	ctx.r3.s64 = ctx.r11.s64 + -4360;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6914;
	sub_82A7E6B0(ctx, base);
loc_828F6914:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6920"))) PPC_WEAK_FUNC(sub_828F6920);
PPC_FUNC_IMPL(__imp__sub_828F6920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F6928;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29864);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f696c
	if (!ctx.cr0.eq) goto loc_828F696C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29864, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F694C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eec98
	ctx.lr = 0x828F6954;
	sub_828EEC98(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7448
	ctx.r4.s64 = ctx.r11.s64 + -7448;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F6968;
	sub_82E4E838(ctx, base);
	// lwz r11,29864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29864);
loc_828F696C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6998
	if (!ctx.cr0.eq) goto loc_828F6998;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29864, ctx.r11.u32);
	// addi r3,r10,29856
	ctx.r3.s64 = ctx.r10.s64 + 29856;
	// bl 0x828f19e8
	ctx.lr = 0x828F6988;
	sub_828F19E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4304
	ctx.r3.s64 = ctx.r11.s64 + -4304;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6994;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29864);
loc_828F6998:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f69dc
	if (!ctx.cr0.eq) goto loc_828F69DC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29864, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29840
	ctx.r31.s64 = ctx.r29.s64 + 29840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F69BC;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8740
	ctx.r11.s64 = ctx.r11.s64 + -8740;
	// stw r11,29840(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29840, ctx.r11.u32);
	// bl 0x828f2380
	ctx.lr = 0x828F69D0;
	sub_828F2380(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4320
	ctx.r3.s64 = ctx.r11.s64 + -4320;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F69DC;
	sub_82A7E6B0(ctx, base);
loc_828F69DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F69E8"))) PPC_WEAK_FUNC(sub_828F69E8);
PPC_FUNC_IMPL(__imp__sub_828F69E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F69F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29892);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6a34
	if (!ctx.cr0.eq) goto loc_828F6A34;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29892, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F6A14;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eece8
	ctx.lr = 0x828F6A1C;
	sub_828EECE8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7428
	ctx.r4.s64 = ctx.r11.s64 + -7428;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F6A30;
	sub_82E4E838(ctx, base);
	// lwz r11,29892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29892);
loc_828F6A34:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6a60
	if (!ctx.cr0.eq) goto loc_828F6A60;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29892, ctx.r11.u32);
	// addi r3,r10,29884
	ctx.r3.s64 = ctx.r10.s64 + 29884;
	// bl 0x828f1a38
	ctx.lr = 0x828F6A50;
	sub_828F1A38(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4264
	ctx.r3.s64 = ctx.r11.s64 + -4264;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6A5C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29892);
loc_828F6A60:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6aa4
	if (!ctx.cr0.eq) goto loc_828F6AA4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29892, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29868
	ctx.r31.s64 = ctx.r29.s64 + 29868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F6A84;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8688
	ctx.r11.s64 = ctx.r11.s64 + -8688;
	// stw r11,29868(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29868, ctx.r11.u32);
	// bl 0x828f23c8
	ctx.lr = 0x828F6A98;
	sub_828F23C8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4280
	ctx.r3.s64 = ctx.r11.s64 + -4280;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6AA4;
	sub_82A7E6B0(ctx, base);
loc_828F6AA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6AB0"))) PPC_WEAK_FUNC(sub_828F6AB0);
PPC_FUNC_IMPL(__imp__sub_828F6AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F6AB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29920);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6afc
	if (!ctx.cr0.eq) goto loc_828F6AFC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29920, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F6ADC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eed38
	ctx.lr = 0x828F6AE4;
	sub_828EED38(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7404
	ctx.r4.s64 = ctx.r11.s64 + -7404;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F6AF8;
	sub_82E4E838(ctx, base);
	// lwz r11,29920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29920);
loc_828F6AFC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6b28
	if (!ctx.cr0.eq) goto loc_828F6B28;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29920, ctx.r11.u32);
	// addi r3,r10,29912
	ctx.r3.s64 = ctx.r10.s64 + 29912;
	// bl 0x828f1a88
	ctx.lr = 0x828F6B18;
	sub_828F1A88(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4224
	ctx.r3.s64 = ctx.r11.s64 + -4224;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6B24;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29920);
loc_828F6B28:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6b6c
	if (!ctx.cr0.eq) goto loc_828F6B6C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29920, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29896
	ctx.r31.s64 = ctx.r29.s64 + 29896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F6B4C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8636
	ctx.r11.s64 = ctx.r11.s64 + -8636;
	// stw r11,29896(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29896, ctx.r11.u32);
	// bl 0x828f2410
	ctx.lr = 0x828F6B60;
	sub_828F2410(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4240
	ctx.r3.s64 = ctx.r11.s64 + -4240;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6B6C;
	sub_82A7E6B0(ctx, base);
loc_828F6B6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6B78"))) PPC_WEAK_FUNC(sub_828F6B78);
PPC_FUNC_IMPL(__imp__sub_828F6B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F6B80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29948);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6bc4
	if (!ctx.cr0.eq) goto loc_828F6BC4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29948, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F6BA4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eed88
	ctx.lr = 0x828F6BAC;
	sub_828EED88(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7376
	ctx.r4.s64 = ctx.r11.s64 + -7376;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F6BC0;
	sub_82E4E838(ctx, base);
	// lwz r11,29948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29948);
loc_828F6BC4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6bf0
	if (!ctx.cr0.eq) goto loc_828F6BF0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29948, ctx.r11.u32);
	// addi r3,r10,29940
	ctx.r3.s64 = ctx.r10.s64 + 29940;
	// bl 0x828f1ad8
	ctx.lr = 0x828F6BE0;
	sub_828F1AD8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4184
	ctx.r3.s64 = ctx.r11.s64 + -4184;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6BEC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29948);
loc_828F6BF0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6c34
	if (!ctx.cr0.eq) goto loc_828F6C34;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29948, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29924
	ctx.r31.s64 = ctx.r29.s64 + 29924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F6C14;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8584
	ctx.r11.s64 = ctx.r11.s64 + -8584;
	// stw r11,29924(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29924, ctx.r11.u32);
	// bl 0x828f2458
	ctx.lr = 0x828F6C28;
	sub_828F2458(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4200
	ctx.r3.s64 = ctx.r11.s64 + -4200;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6C34;
	sub_82A7E6B0(ctx, base);
loc_828F6C34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6C40"))) PPC_WEAK_FUNC(sub_828F6C40);
PPC_FUNC_IMPL(__imp__sub_828F6C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F6C48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29976);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6c8c
	if (!ctx.cr0.eq) goto loc_828F6C8C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29976, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F6C6C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eedd8
	ctx.lr = 0x828F6C74;
	sub_828EEDD8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7352
	ctx.r4.s64 = ctx.r11.s64 + -7352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F6C88;
	sub_82E4E838(ctx, base);
	// lwz r11,29976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29976);
loc_828F6C8C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6cb8
	if (!ctx.cr0.eq) goto loc_828F6CB8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,29976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29976, ctx.r11.u32);
	// addi r3,r10,29968
	ctx.r3.s64 = ctx.r10.s64 + 29968;
	// bl 0x828f1b28
	ctx.lr = 0x828F6CA8;
	sub_828F1B28(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4144
	ctx.r3.s64 = ctx.r11.s64 + -4144;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6CB4;
	sub_82A7E6B0(ctx, base);
	// lwz r11,29976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29976);
loc_828F6CB8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6cfc
	if (!ctx.cr0.eq) goto loc_828F6CFC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,29976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29976, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29952
	ctx.r31.s64 = ctx.r29.s64 + 29952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F6CDC;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8532
	ctx.r11.s64 = ctx.r11.s64 + -8532;
	// stw r11,29952(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29952, ctx.r11.u32);
	// bl 0x828f24a0
	ctx.lr = 0x828F6CF0;
	sub_828F24A0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4160
	ctx.r3.s64 = ctx.r11.s64 + -4160;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6CFC;
	sub_82A7E6B0(ctx, base);
loc_828F6CFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6D08"))) PPC_WEAK_FUNC(sub_828F6D08);
PPC_FUNC_IMPL(__imp__sub_828F6D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F6D10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,30004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30004);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6d54
	if (!ctx.cr0.eq) goto loc_828F6D54;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,30004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30004, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F6D34;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eee28
	ctx.lr = 0x828F6D3C;
	sub_828EEE28(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7332
	ctx.r4.s64 = ctx.r11.s64 + -7332;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F6D50;
	sub_82E4E838(ctx, base);
	// lwz r11,30004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30004);
loc_828F6D54:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6d80
	if (!ctx.cr0.eq) goto loc_828F6D80;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,30004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30004, ctx.r11.u32);
	// addi r3,r10,29996
	ctx.r3.s64 = ctx.r10.s64 + 29996;
	// bl 0x828f1b78
	ctx.lr = 0x828F6D70;
	sub_828F1B78(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4104
	ctx.r3.s64 = ctx.r11.s64 + -4104;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6D7C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,30004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30004);
loc_828F6D80:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6dc4
	if (!ctx.cr0.eq) goto loc_828F6DC4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,30004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30004, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,29980
	ctx.r31.s64 = ctx.r29.s64 + 29980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F6DA4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8480
	ctx.r11.s64 = ctx.r11.s64 + -8480;
	// stw r11,29980(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29980, ctx.r11.u32);
	// bl 0x828f24e8
	ctx.lr = 0x828F6DB8;
	sub_828F24E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4120
	ctx.r3.s64 = ctx.r11.s64 + -4120;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6DC4;
	sub_82A7E6B0(ctx, base);
loc_828F6DC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6DD0"))) PPC_WEAK_FUNC(sub_828F6DD0);
PPC_FUNC_IMPL(__imp__sub_828F6DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F6DD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,30032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30032);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6e1c
	if (!ctx.cr0.eq) goto loc_828F6E1C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,30032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30032, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F6DFC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eee78
	ctx.lr = 0x828F6E04;
	sub_828EEE78(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7312
	ctx.r4.s64 = ctx.r11.s64 + -7312;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F6E18;
	sub_82E4E838(ctx, base);
	// lwz r11,30032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30032);
loc_828F6E1C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6e48
	if (!ctx.cr0.eq) goto loc_828F6E48;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,30032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30032, ctx.r11.u32);
	// addi r3,r10,30024
	ctx.r3.s64 = ctx.r10.s64 + 30024;
	// bl 0x828f1bc8
	ctx.lr = 0x828F6E38;
	sub_828F1BC8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4064
	ctx.r3.s64 = ctx.r11.s64 + -4064;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6E44;
	sub_82A7E6B0(ctx, base);
	// lwz r11,30032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30032);
loc_828F6E48:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f6e8c
	if (!ctx.cr0.eq) goto loc_828F6E8C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,30032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30032, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,30008
	ctx.r31.s64 = ctx.r29.s64 + 30008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F6E6C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8428
	ctx.r11.s64 = ctx.r11.s64 + -8428;
	// stw r11,30008(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30008, ctx.r11.u32);
	// bl 0x828f2530
	ctx.lr = 0x828F6E80;
	sub_828F2530(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4080
	ctx.r3.s64 = ctx.r11.s64 + -4080;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F6E8C;
	sub_82A7E6B0(ctx, base);
loc_828F6E8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F6E98"))) PPC_WEAK_FUNC(sub_828F6E98);
PPC_FUNC_IMPL(__imp__sub_828F6E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x828F6EA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f6ed8
	if (ctx.cr6.eq) goto loc_828F6ED8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f706c
	if (ctx.cr0.eq) goto loc_828F706C;
loc_828F6ED8:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,23748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23748);
	// bl 0x828653d8
	ctx.lr = 0x828F6EE4;
	sub_828653D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f6f24
	if (ctx.cr6.eq) goto loc_828F6F24;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F6F24:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x82880b40
	ctx.lr = 0x828F6F30;
	sub_82880B40(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824f04b0
	ctx.lr = 0x828F6F38;
	sub_824F04B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8252cf80
	ctx.lr = 0x828F6F40;
	sub_8252CF80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F6F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828f6f8c
	if (ctx.cr0.eq) goto loc_828F6F8C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f6f8c
	if (ctx.cr6.eq) goto loc_828F6F8C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x82551708
	ctx.lr = 0x828F6F7C;
	sub_82551708(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x828f6f90
	if (!ctx.cr6.eq) goto loc_828F6F90;
loc_828F6F8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828F6F90:
	// clrlwi. r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x828f6fa4
	if (ctx.cr0.eq) goto loc_828F6FA4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x828F6FA4;
	sub_82DE7330(ctx, base);
loc_828F6FA4:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f6ff4
	if (ctx.cr0.eq) goto loc_828F6FF4;
	// lbz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828f7064
	if (!ctx.cr0.eq) goto loc_828F7064;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82551708
	ctx.lr = 0x828F6FC4;
	sub_82551708(ctx, base);
	// lbz r29,88(r27)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + 88);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8252a3a0
	ctx.lr = 0x828F6FD0;
	sub_8252A3A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x825718d8
	ctx.lr = 0x828F6FE8;
	sub_825718D8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de7330
	ctx.lr = 0x828F6FF0;
	sub_82DE7330(ctx, base);
	// b 0x828f7064
	goto loc_828F7064;
loc_828F6FF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82616af0
	ctx.lr = 0x828F6FFC;
	sub_82616AF0(ctx, base);
	// lwz r11,436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828f7064
	if (!ctx.cr6.eq) goto loc_828F7064;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82616af0
	ctx.lr = 0x828F7010;
	sub_82616AF0(ctx, base);
	// addi r4,r3,436
	ctx.r4.s64 = ctx.r3.s64 + 436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x828F701C;
	sub_824AFB20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82616af0
	ctx.lr = 0x828F7024;
	sub_82616AF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82616af0
	ctx.lr = 0x828F7030;
	sub_82616AF0(ctx, base);
	// lwz r11,420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82c94398
	ctx.lr = 0x828F7044;
	sub_82C94398(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824afb20
	ctx.lr = 0x828F7050;
	sub_824AFB20(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8256ed38
	ctx.lr = 0x828F705C;
	sub_8256ED38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x828F7064;
	sub_82DE7330(ctx, base);
loc_828F7064:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_828F706C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7078"))) PPC_WEAK_FUNC(sub_828F7078);
PPC_FUNC_IMPL(__imp__sub_828F7078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,23748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23748);
	// bl 0x828653d8
	ctx.lr = 0x828F7098;
	sub_828653D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F70A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82616af0
	ctx.lr = 0x828F70AC;
	sub_82616AF0(ctx, base);
	// addi r4,r3,436
	ctx.r4.s64 = ctx.r3.s64 + 436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x828F70B8;
	sub_824AFB20(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828f7160
	if (ctx.cr6.eq) goto loc_828F7160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87248
	ctx.lr = 0x828F70CC;
	sub_82C87248(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828f7160
	if (ctx.cr6.eq) goto loc_828F7160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87248
	ctx.lr = 0x828F70DC;
	sub_82C87248(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828f7160
	if (ctx.cr0.eq) goto loc_828F7160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c87248
	ctx.lr = 0x828F70EC;
	sub_82C87248(ctx, base);
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// bne cr6,0x828f7100
	if (!ctx.cr6.eq) goto loc_828F7100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c9c7e8
	ctx.lr = 0x828F70FC;
	sub_82C9C7E8(ctx, base);
	// b 0x828f7120
	goto loc_828F7120;
loc_828F7100:
	// bl 0x82479e88
	ctx.lr = 0x828F7104;
	sub_82479E88(ctx, base);
	// lbz r11,2379(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2379);
	// li r4,6
	ctx.r4.s64 = 6;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82c9c5d0
	ctx.lr = 0x828F7120;
	sub_82C9C5D0(ctx, base);
loc_828F7120:
	// bl 0x82530968
	ctx.lr = 0x828F7124;
	sub_82530968(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F7134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f7158
	if (ctx.cr0.eq) goto loc_828F7158;
	// bl 0x82530968
	ctx.lr = 0x828F7140;
	sub_82530968(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F7158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F7158:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_828F7160:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x828F7168;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_828F7180"))) PPC_WEAK_FUNC(sub_828F7180);
PPC_FUNC_IMPL(__imp__sub_828F7180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F7188;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,30060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30060);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f71cc
	if (!ctx.cr0.eq) goto loc_828F71CC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,30060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30060, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F71AC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eeec8
	ctx.lr = 0x828F71B4;
	sub_828EEEC8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7292
	ctx.r4.s64 = ctx.r11.s64 + -7292;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F71C8;
	sub_82E4E838(ctx, base);
	// lwz r11,30060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30060);
loc_828F71CC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f71f8
	if (!ctx.cr0.eq) goto loc_828F71F8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,30060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30060, ctx.r11.u32);
	// addi r3,r10,30052
	ctx.r3.s64 = ctx.r10.s64 + 30052;
	// bl 0x828f1c18
	ctx.lr = 0x828F71E8;
	sub_828F1C18(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4024
	ctx.r3.s64 = ctx.r11.s64 + -4024;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F71F4;
	sub_82A7E6B0(ctx, base);
	// lwz r11,30060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30060);
loc_828F71F8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f723c
	if (!ctx.cr0.eq) goto loc_828F723C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,30060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30060, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,30036
	ctx.r31.s64 = ctx.r29.s64 + 30036;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F721C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8376
	ctx.r11.s64 = ctx.r11.s64 + -8376;
	// stw r11,30036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30036, ctx.r11.u32);
	// bl 0x828f2578
	ctx.lr = 0x828F7230;
	sub_828F2578(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4040
	ctx.r3.s64 = ctx.r11.s64 + -4040;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F723C;
	sub_82A7E6B0(ctx, base);
loc_828F723C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7248"))) PPC_WEAK_FUNC(sub_828F7248);
PPC_FUNC_IMPL(__imp__sub_828F7248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F7250;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,30088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30088);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7294
	if (!ctx.cr0.eq) goto loc_828F7294;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,30088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30088, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F7274;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eef18
	ctx.lr = 0x828F727C;
	sub_828EEF18(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7272
	ctx.r4.s64 = ctx.r11.s64 + -7272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F7290;
	sub_82E4E838(ctx, base);
	// lwz r11,30088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30088);
loc_828F7294:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f72c0
	if (!ctx.cr0.eq) goto loc_828F72C0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,30088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30088, ctx.r11.u32);
	// addi r3,r10,30080
	ctx.r3.s64 = ctx.r10.s64 + 30080;
	// bl 0x828f1c68
	ctx.lr = 0x828F72B0;
	sub_828F1C68(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3984
	ctx.r3.s64 = ctx.r11.s64 + -3984;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F72BC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,30088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30088);
loc_828F72C0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7304
	if (!ctx.cr0.eq) goto loc_828F7304;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,30088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30088, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,30064
	ctx.r31.s64 = ctx.r29.s64 + 30064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F72E4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8324
	ctx.r11.s64 = ctx.r11.s64 + -8324;
	// stw r11,30064(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30064, ctx.r11.u32);
	// bl 0x828f25c0
	ctx.lr = 0x828F72F8;
	sub_828F25C0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-4000
	ctx.r3.s64 = ctx.r11.s64 + -4000;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F7304;
	sub_82A7E6B0(ctx, base);
loc_828F7304:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7310"))) PPC_WEAK_FUNC(sub_828F7310);
PPC_FUNC_IMPL(__imp__sub_828F7310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F7318;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,30116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30116);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f735c
	if (!ctx.cr0.eq) goto loc_828F735C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,30116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30116, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F733C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eef68
	ctx.lr = 0x828F7344;
	sub_828EEF68(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7248
	ctx.r4.s64 = ctx.r11.s64 + -7248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F7358;
	sub_82E4E838(ctx, base);
	// lwz r11,30116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30116);
loc_828F735C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7388
	if (!ctx.cr0.eq) goto loc_828F7388;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,30116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30116, ctx.r11.u32);
	// addi r3,r10,30108
	ctx.r3.s64 = ctx.r10.s64 + 30108;
	// bl 0x828f1cb8
	ctx.lr = 0x828F7378;
	sub_828F1CB8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3944
	ctx.r3.s64 = ctx.r11.s64 + -3944;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F7384;
	sub_82A7E6B0(ctx, base);
	// lwz r11,30116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30116);
loc_828F7388:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f73cc
	if (!ctx.cr0.eq) goto loc_828F73CC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,30116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30116, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,30092
	ctx.r31.s64 = ctx.r29.s64 + 30092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F73AC;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8272
	ctx.r11.s64 = ctx.r11.s64 + -8272;
	// stw r11,30092(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30092, ctx.r11.u32);
	// bl 0x828f2608
	ctx.lr = 0x828F73C0;
	sub_828F2608(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3960
	ctx.r3.s64 = ctx.r11.s64 + -3960;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F73CC;
	sub_82A7E6B0(ctx, base);
loc_828F73CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F73D8"))) PPC_WEAK_FUNC(sub_828F73D8);
PPC_FUNC_IMPL(__imp__sub_828F73D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F73E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,30144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30144);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7424
	if (!ctx.cr0.eq) goto loc_828F7424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,30144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30144, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F7404;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828eefb8
	ctx.lr = 0x828F740C;
	sub_828EEFB8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7208
	ctx.r4.s64 = ctx.r11.s64 + -7208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F7420;
	sub_82E4E838(ctx, base);
	// lwz r11,30144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30144);
loc_828F7424:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7450
	if (!ctx.cr0.eq) goto loc_828F7450;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,30144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30144, ctx.r11.u32);
	// addi r3,r10,30136
	ctx.r3.s64 = ctx.r10.s64 + 30136;
	// bl 0x828f1d08
	ctx.lr = 0x828F7440;
	sub_828F1D08(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3904
	ctx.r3.s64 = ctx.r11.s64 + -3904;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F744C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,30144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30144);
loc_828F7450:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7494
	if (!ctx.cr0.eq) goto loc_828F7494;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,30144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30144, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,30120
	ctx.r31.s64 = ctx.r29.s64 + 30120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F7474;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8220
	ctx.r11.s64 = ctx.r11.s64 + -8220;
	// stw r11,30120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30120, ctx.r11.u32);
	// bl 0x828f2650
	ctx.lr = 0x828F7488;
	sub_828F2650(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3920
	ctx.r3.s64 = ctx.r11.s64 + -3920;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F7494;
	sub_82A7E6B0(ctx, base);
loc_828F7494:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F74A0"))) PPC_WEAK_FUNC(sub_828F74A0);
PPC_FUNC_IMPL(__imp__sub_828F74A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F74A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,30172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30172);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f74ec
	if (!ctx.cr0.eq) goto loc_828F74EC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,30172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30172, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F74CC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828ef008
	ctx.lr = 0x828F74D4;
	sub_828EF008(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7184
	ctx.r4.s64 = ctx.r11.s64 + -7184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F74E8;
	sub_82E4E838(ctx, base);
	// lwz r11,30172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30172);
loc_828F74EC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7518
	if (!ctx.cr0.eq) goto loc_828F7518;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,30172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30172, ctx.r11.u32);
	// addi r3,r10,30164
	ctx.r3.s64 = ctx.r10.s64 + 30164;
	// bl 0x828f1d58
	ctx.lr = 0x828F7508;
	sub_828F1D58(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3864
	ctx.r3.s64 = ctx.r11.s64 + -3864;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F7514;
	sub_82A7E6B0(ctx, base);
	// lwz r11,30172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30172);
loc_828F7518:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f755c
	if (!ctx.cr0.eq) goto loc_828F755C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,30172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30172, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,30148
	ctx.r31.s64 = ctx.r29.s64 + 30148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F753C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8168
	ctx.r11.s64 = ctx.r11.s64 + -8168;
	// stw r11,30148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30148, ctx.r11.u32);
	// bl 0x828f2698
	ctx.lr = 0x828F7550;
	sub_828F2698(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3880
	ctx.r3.s64 = ctx.r11.s64 + -3880;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F755C;
	sub_82A7E6B0(ctx, base);
loc_828F755C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7568"))) PPC_WEAK_FUNC(sub_828F7568);
PPC_FUNC_IMPL(__imp__sub_828F7568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F7570;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,30200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30200);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f75b4
	if (!ctx.cr0.eq) goto loc_828F75B4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,30200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30200, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F7594;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828ef058
	ctx.lr = 0x828F759C;
	sub_828EF058(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7160
	ctx.r4.s64 = ctx.r11.s64 + -7160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F75B0;
	sub_82E4E838(ctx, base);
	// lwz r11,30200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30200);
loc_828F75B4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f75e0
	if (!ctx.cr0.eq) goto loc_828F75E0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,30200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30200, ctx.r11.u32);
	// addi r3,r10,30192
	ctx.r3.s64 = ctx.r10.s64 + 30192;
	// bl 0x828f1da8
	ctx.lr = 0x828F75D0;
	sub_828F1DA8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3824
	ctx.r3.s64 = ctx.r11.s64 + -3824;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F75DC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,30200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30200);
loc_828F75E0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7624
	if (!ctx.cr0.eq) goto loc_828F7624;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,30200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30200, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,30176
	ctx.r31.s64 = ctx.r29.s64 + 30176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F7604;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8116
	ctx.r11.s64 = ctx.r11.s64 + -8116;
	// stw r11,30176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30176, ctx.r11.u32);
	// bl 0x828f26e0
	ctx.lr = 0x828F7618;
	sub_828F26E0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3840
	ctx.r3.s64 = ctx.r11.s64 + -3840;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F7624;
	sub_82A7E6B0(ctx, base);
loc_828F7624:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7630"))) PPC_WEAK_FUNC(sub_828F7630);
PPC_FUNC_IMPL(__imp__sub_828F7630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F7638;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,30228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30228);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f767c
	if (!ctx.cr0.eq) goto loc_828F767C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,30228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30228, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F765C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828ef0a8
	ctx.lr = 0x828F7664;
	sub_828EF0A8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7140
	ctx.r4.s64 = ctx.r11.s64 + -7140;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F7678;
	sub_82E4E838(ctx, base);
	// lwz r11,30228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30228);
loc_828F767C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f76a8
	if (!ctx.cr0.eq) goto loc_828F76A8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,30228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30228, ctx.r11.u32);
	// addi r3,r10,30220
	ctx.r3.s64 = ctx.r10.s64 + 30220;
	// bl 0x828f1df8
	ctx.lr = 0x828F7698;
	sub_828F1DF8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3784
	ctx.r3.s64 = ctx.r11.s64 + -3784;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F76A4;
	sub_82A7E6B0(ctx, base);
	// lwz r11,30228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30228);
loc_828F76A8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f76ec
	if (!ctx.cr0.eq) goto loc_828F76EC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,30228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30228, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,30204
	ctx.r31.s64 = ctx.r29.s64 + 30204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F76CC;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8064
	ctx.r11.s64 = ctx.r11.s64 + -8064;
	// stw r11,30204(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30204, ctx.r11.u32);
	// bl 0x828f2728
	ctx.lr = 0x828F76E0;
	sub_828F2728(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3800
	ctx.r3.s64 = ctx.r11.s64 + -3800;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F76EC;
	sub_82A7E6B0(ctx, base);
loc_828F76EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F76F8"))) PPC_WEAK_FUNC(sub_828F76F8);
PPC_FUNC_IMPL(__imp__sub_828F76F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F7700;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,30256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30256);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7744
	if (!ctx.cr0.eq) goto loc_828F7744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,30256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30256, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F7724;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828ef0f8
	ctx.lr = 0x828F772C;
	sub_828EF0F8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7120
	ctx.r4.s64 = ctx.r11.s64 + -7120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F7740;
	sub_82E4E838(ctx, base);
	// lwz r11,30256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30256);
loc_828F7744:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7770
	if (!ctx.cr0.eq) goto loc_828F7770;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,30256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30256, ctx.r11.u32);
	// addi r3,r10,30248
	ctx.r3.s64 = ctx.r10.s64 + 30248;
	// bl 0x828f1e48
	ctx.lr = 0x828F7760;
	sub_828F1E48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3744
	ctx.r3.s64 = ctx.r11.s64 + -3744;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F776C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,30256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30256);
loc_828F7770:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f77b4
	if (!ctx.cr0.eq) goto loc_828F77B4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,30256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30256, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,30232
	ctx.r31.s64 = ctx.r29.s64 + 30232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F7794;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8012
	ctx.r11.s64 = ctx.r11.s64 + -8012;
	// stw r11,30232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30232, ctx.r11.u32);
	// bl 0x828f2770
	ctx.lr = 0x828F77A8;
	sub_828F2770(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3760
	ctx.r3.s64 = ctx.r11.s64 + -3760;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F77B4;
	sub_82A7E6B0(ctx, base);
loc_828F77B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F77C0"))) PPC_WEAK_FUNC(sub_828F77C0);
PPC_FUNC_IMPL(__imp__sub_828F77C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F77C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,30284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30284);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f780c
	if (!ctx.cr0.eq) goto loc_828F780C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,30284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30284, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F77EC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828ef148
	ctx.lr = 0x828F77F4;
	sub_828EF148(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7108
	ctx.r4.s64 = ctx.r11.s64 + -7108;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F7808;
	sub_82E4E838(ctx, base);
	// lwz r11,30284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30284);
loc_828F780C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7838
	if (!ctx.cr0.eq) goto loc_828F7838;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,30284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30284, ctx.r11.u32);
	// addi r3,r10,30276
	ctx.r3.s64 = ctx.r10.s64 + 30276;
	// bl 0x828f1e98
	ctx.lr = 0x828F7828;
	sub_828F1E98(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3704
	ctx.r3.s64 = ctx.r11.s64 + -3704;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F7834;
	sub_82A7E6B0(ctx, base);
	// lwz r11,30284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30284);
loc_828F7838:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f787c
	if (!ctx.cr0.eq) goto loc_828F787C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,30284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30284, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,30260
	ctx.r31.s64 = ctx.r29.s64 + 30260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F785C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-7960
	ctx.r11.s64 = ctx.r11.s64 + -7960;
	// stw r11,30260(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30260, ctx.r11.u32);
	// bl 0x828f27b8
	ctx.lr = 0x828F7870;
	sub_828F27B8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3720
	ctx.r3.s64 = ctx.r11.s64 + -3720;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F787C;
	sub_82A7E6B0(ctx, base);
loc_828F787C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7888"))) PPC_WEAK_FUNC(sub_828F7888);
PPC_FUNC_IMPL(__imp__sub_828F7888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F7890;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,30312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30312);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f78d4
	if (!ctx.cr0.eq) goto loc_828F78D4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,30312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30312, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F78B4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828ef198
	ctx.lr = 0x828F78BC;
	sub_828EF198(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7080
	ctx.r4.s64 = ctx.r11.s64 + -7080;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F78D0;
	sub_82E4E838(ctx, base);
	// lwz r11,30312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30312);
loc_828F78D4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7900
	if (!ctx.cr0.eq) goto loc_828F7900;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,30312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30312, ctx.r11.u32);
	// addi r3,r10,30304
	ctx.r3.s64 = ctx.r10.s64 + 30304;
	// bl 0x828f1ee8
	ctx.lr = 0x828F78F0;
	sub_828F1EE8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3664
	ctx.r3.s64 = ctx.r11.s64 + -3664;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F78FC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,30312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30312);
loc_828F7900:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7944
	if (!ctx.cr0.eq) goto loc_828F7944;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,30312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30312, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,30288
	ctx.r31.s64 = ctx.r29.s64 + 30288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F7924;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-7908
	ctx.r11.s64 = ctx.r11.s64 + -7908;
	// stw r11,30288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30288, ctx.r11.u32);
	// bl 0x828f2800
	ctx.lr = 0x828F7938;
	sub_828F2800(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3680
	ctx.r3.s64 = ctx.r11.s64 + -3680;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F7944;
	sub_82A7E6B0(ctx, base);
loc_828F7944:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7950"))) PPC_WEAK_FUNC(sub_828F7950);
PPC_FUNC_IMPL(__imp__sub_828F7950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F7958;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,30340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30340);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f799c
	if (!ctx.cr0.eq) goto loc_828F799C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,30340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30340, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F797C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828ef1e8
	ctx.lr = 0x828F7984;
	sub_828EF1E8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7052
	ctx.r4.s64 = ctx.r11.s64 + -7052;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F7998;
	sub_82E4E838(ctx, base);
	// lwz r11,30340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30340);
loc_828F799C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f79c8
	if (!ctx.cr0.eq) goto loc_828F79C8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,30340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30340, ctx.r11.u32);
	// addi r3,r10,30332
	ctx.r3.s64 = ctx.r10.s64 + 30332;
	// bl 0x828f1f38
	ctx.lr = 0x828F79B8;
	sub_828F1F38(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3624
	ctx.r3.s64 = ctx.r11.s64 + -3624;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F79C4;
	sub_82A7E6B0(ctx, base);
	// lwz r11,30340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30340);
loc_828F79C8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7a0c
	if (!ctx.cr0.eq) goto loc_828F7A0C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,30340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30340, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,30316
	ctx.r31.s64 = ctx.r29.s64 + 30316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F79EC;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-7856
	ctx.r11.s64 = ctx.r11.s64 + -7856;
	// stw r11,30316(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30316, ctx.r11.u32);
	// bl 0x828f2848
	ctx.lr = 0x828F7A00;
	sub_828F2848(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3640
	ctx.r3.s64 = ctx.r11.s64 + -3640;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F7A0C;
	sub_82A7E6B0(ctx, base);
loc_828F7A0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7A18"))) PPC_WEAK_FUNC(sub_828F7A18);
PPC_FUNC_IMPL(__imp__sub_828F7A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F7A20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,30368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30368);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7a64
	if (!ctx.cr0.eq) goto loc_828F7A64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,30368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30368, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x828F7A44;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828ef238
	ctx.lr = 0x828F7A4C;
	sub_828EF238(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7028
	ctx.r4.s64 = ctx.r11.s64 + -7028;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x828F7A60;
	sub_82E4E838(ctx, base);
	// lwz r11,30368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30368);
loc_828F7A64:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7a90
	if (!ctx.cr0.eq) goto loc_828F7A90;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,30368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30368, ctx.r11.u32);
	// addi r3,r10,30360
	ctx.r3.s64 = ctx.r10.s64 + 30360;
	// bl 0x828f1f88
	ctx.lr = 0x828F7A80;
	sub_828F1F88(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3584
	ctx.r3.s64 = ctx.r11.s64 + -3584;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F7A8C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,30368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30368);
loc_828F7A90:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f7ad4
	if (!ctx.cr0.eq) goto loc_828F7AD4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// stw r11,30368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30368, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,30344
	ctx.r31.s64 = ctx.r29.s64 + 30344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x828F7AB4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-7804
	ctx.r11.s64 = ctx.r11.s64 + -7804;
	// stw r11,30344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30344, ctx.r11.u32);
	// bl 0x828f2890
	ctx.lr = 0x828F7AC8;
	sub_828F2890(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,-3600
	ctx.r3.s64 = ctx.r11.s64 + -3600;
	// bl 0x82a7e6b0
	ctx.lr = 0x828F7AD4;
	sub_82A7E6B0(ctx, base);
loc_828F7AD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7AE0"))) PPC_WEAK_FUNC(sub_828F7AE0);
PPC_FUNC_IMPL(__imp__sub_828F7AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F7AE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x824e5a50
	ctx.lr = 0x828F7B04;
	sub_824E5A50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8274b3e0
	ctx.lr = 0x828F7B14;
	sub_8274B3E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f7b44
	if (ctx.cr0.eq) goto loc_828F7B44;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82741690
	ctx.lr = 0x828F7B30;
	sub_82741690(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x828f7b40
	if (!ctx.cr6.eq) goto loc_828F7B40;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x828f7b44
	goto loc_828F7B44;
loc_828F7B40:
	// stb r3,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r3.u8);
loc_828F7B44:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x828f7b7c
	if (ctx.cr6.eq) goto loc_828F7B7C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x828f7b70
	if (!ctx.cr6.eq) goto loc_828F7B70;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_828F7B70:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x824e6ce8
	ctx.lr = 0x828F7B7C;
	sub_824E6CE8(ctx, base);
loc_828F7B7C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828f7ba4
	if (ctx.cr6.eq) goto loc_828F7BA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F7BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F7BA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7BB0"))) PPC_WEAK_FUNC(sub_828F7BB0);
PPC_FUNC_IMPL(__imp__sub_828F7BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828F7BB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82e512a0
	ctx.lr = 0x828F7BD4;
	sub_82E512A0(ctx, base);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-30880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30880);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// bl 0x82611b80
	ctx.lr = 0x828F7C08;
	sub_82611B80(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828f7c74
	if (ctx.cr6.eq) goto loc_828F7C74;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828f7c64
	if (ctx.cr6.eq) goto loc_828F7C64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828f7c54
	if (ctx.cr6.eq) goto loc_828F7C54;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x828f7c44
	if (ctx.cr6.eq) goto loc_828F7C44;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x828f7c80
	if (!ctx.cr6.eq) goto loc_828F7C80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828f1008
	ctx.lr = 0x828F7C40;
	sub_828F1008(ctx, base);
	// b 0x828f7c80
	goto loc_828F7C80;
loc_828F7C44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828f2cd8
	ctx.lr = 0x828F7C50;
	sub_828F2CD8(ctx, base);
	// b 0x828f7c80
	goto loc_828F7C80;
loc_828F7C54:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828f0f58
	ctx.lr = 0x828F7C60;
	sub_828F0F58(ctx, base);
	// b 0x828f7c80
	goto loc_828F7C80;
loc_828F7C64:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828f7078
	ctx.lr = 0x828F7C70;
	sub_828F7078(ctx, base);
	// b 0x828f7c80
	goto loc_828F7C80;
loc_828F7C74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828f6e98
	ctx.lr = 0x828F7C80;
	sub_828F6E98(ctx, base);
loc_828F7C80:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7C98"))) PPC_WEAK_FUNC(sub_828F7C98);
PPC_FUNC_IMPL(__imp__sub_828F7C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de00
	ctx.lr = 0x828F7CA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824e5a50
	ctx.lr = 0x828F7CC0;
	sub_824E5A50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8274b3e0
	ctx.lr = 0x828F7CD0;
	sub_8274B3E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f7d84
	if (ctx.cr0.eq) goto loc_828F7D84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x824e2bc0
	ctx.lr = 0x828F7CF8;
	sub_824E2BC0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8274b768
	ctx.lr = 0x828F7D00;
	sub_8274B768(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828f7d30
	if (ctx.cr6.eq) goto loc_828F7D30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824e2c18
	ctx.lr = 0x828F7D14;
	sub_824E2C18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f7d30
	if (ctx.cr0.eq) goto loc_828F7D30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F7D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F7D30:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,56(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bctrl 
	ctx.lr = 0x828F7D84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F7D84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x828f7dc0
	if (ctx.cr6.eq) goto loc_828F7DC0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x828f7db4
	if (!ctx.cr6.eq) goto loc_828F7DB4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_828F7DB4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x824e6ce8
	ctx.lr = 0x828F7DC0;
	sub_824E6CE8(ctx, base);
loc_828F7DC0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828f7de8
	if (ctx.cr6.eq) goto loc_828F7DE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F7DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F7DE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7DF8"))) PPC_WEAK_FUNC(sub_828F7DF8);
PPC_FUNC_IMPL(__imp__sub_828F7DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F7E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828ee888
	ctx.lr = 0x828F7E10;
	sub_828EE888(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F7E2C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f7e44
	if (ctx.cr0.eq) goto loc_828F7E44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f2ef8
	ctx.lr = 0x828F7E3C;
	sub_828F2EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f7e48
	goto loc_828F7E48;
loc_828F7E44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F7E48:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f50f8
	ctx.lr = 0x828F7E58;
	sub_828F50F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F7E64;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f7e74
	if (ctx.cr6.eq) goto loc_828F7E74;
	// bl 0x823e19b0
	ctx.lr = 0x828F7E74;
	sub_823E19B0(ctx, base);
loc_828F7E74:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7E80"))) PPC_WEAK_FUNC(sub_828F7E80);
PPC_FUNC_IMPL(__imp__sub_828F7E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F7E88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828ee8d8
	ctx.lr = 0x828F7E98;
	sub_828EE8D8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F7EB4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f7ecc
	if (ctx.cr0.eq) goto loc_828F7ECC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f3008
	ctx.lr = 0x828F7EC4;
	sub_828F3008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f7ed0
	goto loc_828F7ED0;
loc_828F7ECC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F7ED0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5168
	ctx.lr = 0x828F7EE0;
	sub_828F5168(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F7EEC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f7efc
	if (ctx.cr6.eq) goto loc_828F7EFC;
	// bl 0x823e19b0
	ctx.lr = 0x828F7EFC;
	sub_823E19B0(ctx, base);
loc_828F7EFC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7F08"))) PPC_WEAK_FUNC(sub_828F7F08);
PPC_FUNC_IMPL(__imp__sub_828F7F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F7F10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828ee928
	ctx.lr = 0x828F7F20;
	sub_828EE928(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F7F3C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f7f54
	if (ctx.cr0.eq) goto loc_828F7F54;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f3118
	ctx.lr = 0x828F7F4C;
	sub_828F3118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f7f58
	goto loc_828F7F58;
loc_828F7F54:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F7F58:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f51d8
	ctx.lr = 0x828F7F68;
	sub_828F51D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F7F74;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f7f84
	if (ctx.cr6.eq) goto loc_828F7F84;
	// bl 0x823e19b0
	ctx.lr = 0x828F7F84;
	sub_823E19B0(ctx, base);
loc_828F7F84:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F7F90"))) PPC_WEAK_FUNC(sub_828F7F90);
PPC_FUNC_IMPL(__imp__sub_828F7F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F7F98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828ee978
	ctx.lr = 0x828F7FA8;
	sub_828EE978(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F7FC4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f7fdc
	if (ctx.cr0.eq) goto loc_828F7FDC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f3228
	ctx.lr = 0x828F7FD4;
	sub_828F3228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f7fe0
	goto loc_828F7FE0;
loc_828F7FDC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F7FE0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5248
	ctx.lr = 0x828F7FF0;
	sub_828F5248(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F7FFC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f800c
	if (ctx.cr6.eq) goto loc_828F800C;
	// bl 0x823e19b0
	ctx.lr = 0x828F800C;
	sub_823E19B0(ctx, base);
loc_828F800C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8018"))) PPC_WEAK_FUNC(sub_828F8018);
PPC_FUNC_IMPL(__imp__sub_828F8018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828ee9c8
	ctx.lr = 0x828F8030;
	sub_828EE9C8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F804C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f8064
	if (ctx.cr0.eq) goto loc_828F8064;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f3338
	ctx.lr = 0x828F805C;
	sub_828F3338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8068
	goto loc_828F8068;
loc_828F8064:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8068:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f52b8
	ctx.lr = 0x828F8078;
	sub_828F52B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F8084;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f8094
	if (ctx.cr6.eq) goto loc_828F8094;
	// bl 0x823e19b0
	ctx.lr = 0x828F8094;
	sub_823E19B0(ctx, base);
loc_828F8094:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F80A0"))) PPC_WEAK_FUNC(sub_828F80A0);
PPC_FUNC_IMPL(__imp__sub_828F80A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F80A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eea18
	ctx.lr = 0x828F80B8;
	sub_828EEA18(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F80D4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f80ec
	if (ctx.cr0.eq) goto loc_828F80EC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f3448
	ctx.lr = 0x828F80E4;
	sub_828F3448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f80f0
	goto loc_828F80F0;
loc_828F80EC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F80F0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5328
	ctx.lr = 0x828F8100;
	sub_828F5328(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F810C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f811c
	if (ctx.cr6.eq) goto loc_828F811C;
	// bl 0x823e19b0
	ctx.lr = 0x828F811C;
	sub_823E19B0(ctx, base);
loc_828F811C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8128"))) PPC_WEAK_FUNC(sub_828F8128);
PPC_FUNC_IMPL(__imp__sub_828F8128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8130;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eea68
	ctx.lr = 0x828F8140;
	sub_828EEA68(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F815C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f8174
	if (ctx.cr0.eq) goto loc_828F8174;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f3558
	ctx.lr = 0x828F816C;
	sub_828F3558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8178
	goto loc_828F8178;
loc_828F8174:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8178:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5398
	ctx.lr = 0x828F8188;
	sub_828F5398(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F8194;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f81a4
	if (ctx.cr6.eq) goto loc_828F81A4;
	// bl 0x823e19b0
	ctx.lr = 0x828F81A4;
	sub_823E19B0(ctx, base);
loc_828F81A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F81B0"))) PPC_WEAK_FUNC(sub_828F81B0);
PPC_FUNC_IMPL(__imp__sub_828F81B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F81B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eeab8
	ctx.lr = 0x828F81C8;
	sub_828EEAB8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F81E4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f81fc
	if (ctx.cr0.eq) goto loc_828F81FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f3668
	ctx.lr = 0x828F81F4;
	sub_828F3668(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8200
	goto loc_828F8200;
loc_828F81FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8200:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5408
	ctx.lr = 0x828F8210;
	sub_828F5408(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F821C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f822c
	if (ctx.cr6.eq) goto loc_828F822C;
	// bl 0x823e19b0
	ctx.lr = 0x828F822C;
	sub_823E19B0(ctx, base);
loc_828F822C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8238"))) PPC_WEAK_FUNC(sub_828F8238);
PPC_FUNC_IMPL(__imp__sub_828F8238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8240;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eeb08
	ctx.lr = 0x828F8250;
	sub_828EEB08(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F826C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f8284
	if (ctx.cr0.eq) goto loc_828F8284;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f3778
	ctx.lr = 0x828F827C;
	sub_828F3778(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8288
	goto loc_828F8288;
loc_828F8284:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8288:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5478
	ctx.lr = 0x828F8298;
	sub_828F5478(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F82A4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f82b4
	if (ctx.cr6.eq) goto loc_828F82B4;
	// bl 0x823e19b0
	ctx.lr = 0x828F82B4;
	sub_823E19B0(ctx, base);
loc_828F82B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F82C0"))) PPC_WEAK_FUNC(sub_828F82C0);
PPC_FUNC_IMPL(__imp__sub_828F82C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F82C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eeb58
	ctx.lr = 0x828F82D8;
	sub_828EEB58(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F82F4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f830c
	if (ctx.cr0.eq) goto loc_828F830C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f3888
	ctx.lr = 0x828F8304;
	sub_828F3888(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8310
	goto loc_828F8310;
loc_828F830C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8310:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f54e8
	ctx.lr = 0x828F8320;
	sub_828F54E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F832C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f833c
	if (ctx.cr6.eq) goto loc_828F833C;
	// bl 0x823e19b0
	ctx.lr = 0x828F833C;
	sub_823E19B0(ctx, base);
loc_828F833C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8348"))) PPC_WEAK_FUNC(sub_828F8348);
PPC_FUNC_IMPL(__imp__sub_828F8348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8350;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eeba8
	ctx.lr = 0x828F8360;
	sub_828EEBA8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F837C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f8394
	if (ctx.cr0.eq) goto loc_828F8394;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f3998
	ctx.lr = 0x828F838C;
	sub_828F3998(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8398
	goto loc_828F8398;
loc_828F8394:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8398:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5558
	ctx.lr = 0x828F83A8;
	sub_828F5558(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F83B4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f83c4
	if (ctx.cr6.eq) goto loc_828F83C4;
	// bl 0x823e19b0
	ctx.lr = 0x828F83C4;
	sub_823E19B0(ctx, base);
loc_828F83C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F83D0"))) PPC_WEAK_FUNC(sub_828F83D0);
PPC_FUNC_IMPL(__imp__sub_828F83D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F83D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eebf8
	ctx.lr = 0x828F83E8;
	sub_828EEBF8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F8404;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f841c
	if (ctx.cr0.eq) goto loc_828F841C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f3aa8
	ctx.lr = 0x828F8414;
	sub_828F3AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8420
	goto loc_828F8420;
loc_828F841C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8420:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f55c8
	ctx.lr = 0x828F8430;
	sub_828F55C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F843C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f844c
	if (ctx.cr6.eq) goto loc_828F844C;
	// bl 0x823e19b0
	ctx.lr = 0x828F844C;
	sub_823E19B0(ctx, base);
loc_828F844C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8458"))) PPC_WEAK_FUNC(sub_828F8458);
PPC_FUNC_IMPL(__imp__sub_828F8458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8460;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eec48
	ctx.lr = 0x828F8470;
	sub_828EEC48(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F848C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f84a4
	if (ctx.cr0.eq) goto loc_828F84A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f3bb8
	ctx.lr = 0x828F849C;
	sub_828F3BB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f84a8
	goto loc_828F84A8;
loc_828F84A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F84A8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5638
	ctx.lr = 0x828F84B8;
	sub_828F5638(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F84C4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f84d4
	if (ctx.cr6.eq) goto loc_828F84D4;
	// bl 0x823e19b0
	ctx.lr = 0x828F84D4;
	sub_823E19B0(ctx, base);
loc_828F84D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F84E0"))) PPC_WEAK_FUNC(sub_828F84E0);
PPC_FUNC_IMPL(__imp__sub_828F84E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F84E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eec98
	ctx.lr = 0x828F84F8;
	sub_828EEC98(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F8514;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f852c
	if (ctx.cr0.eq) goto loc_828F852C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f3cc8
	ctx.lr = 0x828F8524;
	sub_828F3CC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8530
	goto loc_828F8530;
loc_828F852C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8530:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f56a8
	ctx.lr = 0x828F8540;
	sub_828F56A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F854C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f855c
	if (ctx.cr6.eq) goto loc_828F855C;
	// bl 0x823e19b0
	ctx.lr = 0x828F855C;
	sub_823E19B0(ctx, base);
loc_828F855C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8568"))) PPC_WEAK_FUNC(sub_828F8568);
PPC_FUNC_IMPL(__imp__sub_828F8568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8570;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eece8
	ctx.lr = 0x828F8580;
	sub_828EECE8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F859C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f85b4
	if (ctx.cr0.eq) goto loc_828F85B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f3dd8
	ctx.lr = 0x828F85AC;
	sub_828F3DD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f85b8
	goto loc_828F85B8;
loc_828F85B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F85B8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5718
	ctx.lr = 0x828F85C8;
	sub_828F5718(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F85D4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f85e4
	if (ctx.cr6.eq) goto loc_828F85E4;
	// bl 0x823e19b0
	ctx.lr = 0x828F85E4;
	sub_823E19B0(ctx, base);
loc_828F85E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F85F0"))) PPC_WEAK_FUNC(sub_828F85F0);
PPC_FUNC_IMPL(__imp__sub_828F85F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F85F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eed38
	ctx.lr = 0x828F8608;
	sub_828EED38(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F8624;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f863c
	if (ctx.cr0.eq) goto loc_828F863C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f3ee8
	ctx.lr = 0x828F8634;
	sub_828F3EE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8640
	goto loc_828F8640;
loc_828F863C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8640:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5788
	ctx.lr = 0x828F8650;
	sub_828F5788(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F865C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f866c
	if (ctx.cr6.eq) goto loc_828F866C;
	// bl 0x823e19b0
	ctx.lr = 0x828F866C;
	sub_823E19B0(ctx, base);
loc_828F866C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8678"))) PPC_WEAK_FUNC(sub_828F8678);
PPC_FUNC_IMPL(__imp__sub_828F8678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8680;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eed88
	ctx.lr = 0x828F8690;
	sub_828EED88(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F86AC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f86c4
	if (ctx.cr0.eq) goto loc_828F86C4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f3ff8
	ctx.lr = 0x828F86BC;
	sub_828F3FF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f86c8
	goto loc_828F86C8;
loc_828F86C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F86C8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f57f8
	ctx.lr = 0x828F86D8;
	sub_828F57F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F86E4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f86f4
	if (ctx.cr6.eq) goto loc_828F86F4;
	// bl 0x823e19b0
	ctx.lr = 0x828F86F4;
	sub_823E19B0(ctx, base);
loc_828F86F4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8700"))) PPC_WEAK_FUNC(sub_828F8700);
PPC_FUNC_IMPL(__imp__sub_828F8700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8708;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eedd8
	ctx.lr = 0x828F8718;
	sub_828EEDD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F8734;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f874c
	if (ctx.cr0.eq) goto loc_828F874C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f4108
	ctx.lr = 0x828F8744;
	sub_828F4108(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8750
	goto loc_828F8750;
loc_828F874C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8750:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5868
	ctx.lr = 0x828F8760;
	sub_828F5868(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F876C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f877c
	if (ctx.cr6.eq) goto loc_828F877C;
	// bl 0x823e19b0
	ctx.lr = 0x828F877C;
	sub_823E19B0(ctx, base);
loc_828F877C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8788"))) PPC_WEAK_FUNC(sub_828F8788);
PPC_FUNC_IMPL(__imp__sub_828F8788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8790;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eee28
	ctx.lr = 0x828F87A0;
	sub_828EEE28(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F87BC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f87d4
	if (ctx.cr0.eq) goto loc_828F87D4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f4218
	ctx.lr = 0x828F87CC;
	sub_828F4218(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f87d8
	goto loc_828F87D8;
loc_828F87D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F87D8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f58d8
	ctx.lr = 0x828F87E8;
	sub_828F58D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F87F4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f8804
	if (ctx.cr6.eq) goto loc_828F8804;
	// bl 0x823e19b0
	ctx.lr = 0x828F8804;
	sub_823E19B0(ctx, base);
loc_828F8804:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8810"))) PPC_WEAK_FUNC(sub_828F8810);
PPC_FUNC_IMPL(__imp__sub_828F8810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8818;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eee78
	ctx.lr = 0x828F8828;
	sub_828EEE78(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F8844;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f885c
	if (ctx.cr0.eq) goto loc_828F885C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f4328
	ctx.lr = 0x828F8854;
	sub_828F4328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8860
	goto loc_828F8860;
loc_828F885C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8860:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5948
	ctx.lr = 0x828F8870;
	sub_828F5948(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F887C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f888c
	if (ctx.cr6.eq) goto loc_828F888C;
	// bl 0x823e19b0
	ctx.lr = 0x828F888C;
	sub_823E19B0(ctx, base);
loc_828F888C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8898"))) PPC_WEAK_FUNC(sub_828F8898);
PPC_FUNC_IMPL(__imp__sub_828F8898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F88A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eeec8
	ctx.lr = 0x828F88B0;
	sub_828EEEC8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F88CC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f88e4
	if (ctx.cr0.eq) goto loc_828F88E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f4438
	ctx.lr = 0x828F88DC;
	sub_828F4438(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f88e8
	goto loc_828F88E8;
loc_828F88E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F88E8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f59b8
	ctx.lr = 0x828F88F8;
	sub_828F59B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F8904;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f8914
	if (ctx.cr6.eq) goto loc_828F8914;
	// bl 0x823e19b0
	ctx.lr = 0x828F8914;
	sub_823E19B0(ctx, base);
loc_828F8914:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8920"))) PPC_WEAK_FUNC(sub_828F8920);
PPC_FUNC_IMPL(__imp__sub_828F8920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8928;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eef18
	ctx.lr = 0x828F8938;
	sub_828EEF18(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F8954;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f896c
	if (ctx.cr0.eq) goto loc_828F896C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f4548
	ctx.lr = 0x828F8964;
	sub_828F4548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8970
	goto loc_828F8970;
loc_828F896C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8970:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5a28
	ctx.lr = 0x828F8980;
	sub_828F5A28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F898C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f899c
	if (ctx.cr6.eq) goto loc_828F899C;
	// bl 0x823e19b0
	ctx.lr = 0x828F899C;
	sub_823E19B0(ctx, base);
loc_828F899C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F89A8"))) PPC_WEAK_FUNC(sub_828F89A8);
PPC_FUNC_IMPL(__imp__sub_828F89A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F89B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eef68
	ctx.lr = 0x828F89C0;
	sub_828EEF68(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F89DC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f89f4
	if (ctx.cr0.eq) goto loc_828F89F4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f4658
	ctx.lr = 0x828F89EC;
	sub_828F4658(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f89f8
	goto loc_828F89F8;
loc_828F89F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F89F8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5a98
	ctx.lr = 0x828F8A08;
	sub_828F5A98(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F8A14;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f8a24
	if (ctx.cr6.eq) goto loc_828F8A24;
	// bl 0x823e19b0
	ctx.lr = 0x828F8A24;
	sub_823E19B0(ctx, base);
loc_828F8A24:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8A30"))) PPC_WEAK_FUNC(sub_828F8A30);
PPC_FUNC_IMPL(__imp__sub_828F8A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8A38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828eefb8
	ctx.lr = 0x828F8A48;
	sub_828EEFB8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F8A64;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f8a7c
	if (ctx.cr0.eq) goto loc_828F8A7C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f4768
	ctx.lr = 0x828F8A74;
	sub_828F4768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8a80
	goto loc_828F8A80;
loc_828F8A7C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8A80:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5b08
	ctx.lr = 0x828F8A90;
	sub_828F5B08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F8A9C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f8aac
	if (ctx.cr6.eq) goto loc_828F8AAC;
	// bl 0x823e19b0
	ctx.lr = 0x828F8AAC;
	sub_823E19B0(ctx, base);
loc_828F8AAC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8AB8"))) PPC_WEAK_FUNC(sub_828F8AB8);
PPC_FUNC_IMPL(__imp__sub_828F8AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8AC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828ef008
	ctx.lr = 0x828F8AD0;
	sub_828EF008(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F8AEC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f8b04
	if (ctx.cr0.eq) goto loc_828F8B04;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f4878
	ctx.lr = 0x828F8AFC;
	sub_828F4878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8b08
	goto loc_828F8B08;
loc_828F8B04:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8B08:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5b78
	ctx.lr = 0x828F8B18;
	sub_828F5B78(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F8B24;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f8b34
	if (ctx.cr6.eq) goto loc_828F8B34;
	// bl 0x823e19b0
	ctx.lr = 0x828F8B34;
	sub_823E19B0(ctx, base);
loc_828F8B34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8B40"))) PPC_WEAK_FUNC(sub_828F8B40);
PPC_FUNC_IMPL(__imp__sub_828F8B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8B48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828ef058
	ctx.lr = 0x828F8B58;
	sub_828EF058(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F8B74;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f8b8c
	if (ctx.cr0.eq) goto loc_828F8B8C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f4988
	ctx.lr = 0x828F8B84;
	sub_828F4988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8b90
	goto loc_828F8B90;
loc_828F8B8C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8B90:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5be8
	ctx.lr = 0x828F8BA0;
	sub_828F5BE8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F8BAC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f8bbc
	if (ctx.cr6.eq) goto loc_828F8BBC;
	// bl 0x823e19b0
	ctx.lr = 0x828F8BBC;
	sub_823E19B0(ctx, base);
loc_828F8BBC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8BC8"))) PPC_WEAK_FUNC(sub_828F8BC8);
PPC_FUNC_IMPL(__imp__sub_828F8BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8BD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828ef0a8
	ctx.lr = 0x828F8BE0;
	sub_828EF0A8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F8BFC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f8c14
	if (ctx.cr0.eq) goto loc_828F8C14;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f4a98
	ctx.lr = 0x828F8C0C;
	sub_828F4A98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8c18
	goto loc_828F8C18;
loc_828F8C14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8C18:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5c58
	ctx.lr = 0x828F8C28;
	sub_828F5C58(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F8C34;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f8c44
	if (ctx.cr6.eq) goto loc_828F8C44;
	// bl 0x823e19b0
	ctx.lr = 0x828F8C44;
	sub_823E19B0(ctx, base);
loc_828F8C44:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8C50"))) PPC_WEAK_FUNC(sub_828F8C50);
PPC_FUNC_IMPL(__imp__sub_828F8C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8C58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828ef0f8
	ctx.lr = 0x828F8C68;
	sub_828EF0F8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F8C84;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f8c9c
	if (ctx.cr0.eq) goto loc_828F8C9C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f4ba8
	ctx.lr = 0x828F8C94;
	sub_828F4BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8ca0
	goto loc_828F8CA0;
loc_828F8C9C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8CA0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5cc8
	ctx.lr = 0x828F8CB0;
	sub_828F5CC8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F8CBC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f8ccc
	if (ctx.cr6.eq) goto loc_828F8CCC;
	// bl 0x823e19b0
	ctx.lr = 0x828F8CCC;
	sub_823E19B0(ctx, base);
loc_828F8CCC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8CD8"))) PPC_WEAK_FUNC(sub_828F8CD8);
PPC_FUNC_IMPL(__imp__sub_828F8CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8CE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828ef148
	ctx.lr = 0x828F8CF0;
	sub_828EF148(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F8D0C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f8d24
	if (ctx.cr0.eq) goto loc_828F8D24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f4cb8
	ctx.lr = 0x828F8D1C;
	sub_828F4CB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8d28
	goto loc_828F8D28;
loc_828F8D24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8D28:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5d38
	ctx.lr = 0x828F8D38;
	sub_828F5D38(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F8D44;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f8d54
	if (ctx.cr6.eq) goto loc_828F8D54;
	// bl 0x823e19b0
	ctx.lr = 0x828F8D54;
	sub_823E19B0(ctx, base);
loc_828F8D54:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8D60"))) PPC_WEAK_FUNC(sub_828F8D60);
PPC_FUNC_IMPL(__imp__sub_828F8D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8D68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828ef198
	ctx.lr = 0x828F8D78;
	sub_828EF198(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F8D94;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f8dac
	if (ctx.cr0.eq) goto loc_828F8DAC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f4dc8
	ctx.lr = 0x828F8DA4;
	sub_828F4DC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8db0
	goto loc_828F8DB0;
loc_828F8DAC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8DB0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5da8
	ctx.lr = 0x828F8DC0;
	sub_828F5DA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F8DCC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f8ddc
	if (ctx.cr6.eq) goto loc_828F8DDC;
	// bl 0x823e19b0
	ctx.lr = 0x828F8DDC;
	sub_823E19B0(ctx, base);
loc_828F8DDC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8DE8"))) PPC_WEAK_FUNC(sub_828F8DE8);
PPC_FUNC_IMPL(__imp__sub_828F8DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8DF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828ef1e8
	ctx.lr = 0x828F8E00;
	sub_828EF1E8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F8E1C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f8e34
	if (ctx.cr0.eq) goto loc_828F8E34;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f4ed8
	ctx.lr = 0x828F8E2C;
	sub_828F4ED8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8e38
	goto loc_828F8E38;
loc_828F8E34:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8E38:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5e18
	ctx.lr = 0x828F8E48;
	sub_828F5E18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F8E54;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f8e64
	if (ctx.cr6.eq) goto loc_828F8E64;
	// bl 0x823e19b0
	ctx.lr = 0x828F8E64;
	sub_823E19B0(ctx, base);
loc_828F8E64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8E70"))) PPC_WEAK_FUNC(sub_828F8E70);
PPC_FUNC_IMPL(__imp__sub_828F8E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8E78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828ef238
	ctx.lr = 0x828F8E88;
	sub_828EF238(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x82c0f6c0
	ctx.lr = 0x828F8EA4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828f8ebc
	if (ctx.cr0.eq) goto loc_828F8EBC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828f4fe8
	ctx.lr = 0x828F8EB4;
	sub_828F4FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f8ec0
	goto loc_828F8EC0;
loc_828F8EBC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828F8EC0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x828f5e88
	ctx.lr = 0x828F8ED0;
	sub_828F5E88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x828F8EDC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f8eec
	if (ctx.cr6.eq) goto loc_828F8EEC;
	// bl 0x823e19b0
	ctx.lr = 0x828F8EEC;
	sub_823E19B0(ctx, base);
loc_828F8EEC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8EF8"))) PPC_WEAK_FUNC(sub_828F8EF8);
PPC_FUNC_IMPL(__imp__sub_828F8EF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e53a38
	ctx.lr = 0x828F8F18;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x828F8F20;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r5,r11,-12284
	ctx.r5.s64 = ctx.r11.s64 + -12284;
	// addi r7,r10,-6984
	ctx.r7.s64 = ctx.r10.s64 + -6984;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// li r6,6
	ctx.r6.s64 = 6;
	// bl 0x825ffcd8
	ctx.lr = 0x828F8F3C;
	sub_825FFCD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F8F58"))) PPC_WEAK_FUNC(sub_828F8F58);
PPC_FUNC_IMPL(__imp__sub_828F8F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F8F60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x828f8f9c
	if (ctx.cr6.eq) goto loc_828F8F9C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,3720
	ctx.r11.s64 = ctx.r11.s64 + 3720;
	// addi r10,r10,15908
	ctx.r10.s64 = ctx.r10.s64 + 15908;
	// addi r9,r9,-8028
	ctx.r9.s64 = ctx.r9.s64 + -8028;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
loc_828F8F9C:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f3ed8
	ctx.lr = 0x828F8FB0;
	sub_824F3ED8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r11,r11,-6576
	ctx.r11.s64 = ctx.r11.s64 + -6576;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// bl 0x82743da0
	ctx.lr = 0x828F8FD4;
	sub_82743DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F8FE0"))) PPC_WEAK_FUNC(sub_828F8FE0);
PPC_FUNC_IMPL(__imp__sub_828F8FE0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e53a38
	ctx.lr = 0x828F9000;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x828F9008;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r7,r11,-21680
	ctx.r7.s64 = ctx.r11.s64 + -21680;
	// addi r5,r10,-31368
	ctx.r5.s64 = ctx.r10.s64 + -31368;
	// li r6,39
	ctx.r6.s64 = 39;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// bl 0x826f4d80
	ctx.lr = 0x828F9024;
	sub_826F4D80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F9040"))) PPC_WEAK_FUNC(sub_828F9040);
PPC_FUNC_IMPL(__imp__sub_828F9040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F9048;
	__savegprlr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828f8f58
	ctx.lr = 0x828F9064;
	sub_828F8F58(ctx, base);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828f7c98
	ctx.lr = 0x828F9070;
	sub_828F7C98(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f9094
	if (!ctx.cr0.eq) goto loc_828F9094;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x828f9098
	if (ctx.cr0.eq) goto loc_828F9098;
loc_828F9094:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828F9098:
	// li r10,44
	ctx.r10.s64 = 44;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// clrlwi r31,r11,31
	ctx.r31.u64 = ctx.r11.u32 & 0x1;
	// bl 0x828f7ae0
	ctx.lr = 0x828F90B0;
	sub_828F7AE0(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f90d4
	if (!ctx.cr0.eq) goto loc_828F90D4;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x828f90d8
	if (ctx.cr0.eq) goto loc_828F90D8;
loc_828F90D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828F90D8:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
	// bl 0x828f7c98
	ctx.lr = 0x828F9104;
	sub_828F7C98(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f9128
	if (!ctx.cr0.eq) goto loc_828F9128;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x828f912c
	if (ctx.cr0.eq) goto loc_828F912C;
loc_828F9128:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828F912C:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// and r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x828f7ae0
	ctx.lr = 0x828F9140;
	sub_828F7AE0(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828f9164
	if (!ctx.cr0.eq) goto loc_828F9164;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// beq 0x828f9168
	if (ctx.cr0.eq) goto loc_828F9168;
loc_828F9164:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828F9168:
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828f7c98
	ctx.lr = 0x828F9174;
	sub_828F7C98(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r7,r10,0,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f91e8
	if (!ctx.cr0.eq) goto loc_828F91E8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r4,901
	ctx.r4.s64 = 901;
	// addi r5,r10,-6968
	ctx.r5.s64 = ctx.r10.s64 + -6968;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F91E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F91E8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824ed008
	ctx.lr = 0x828F91F0;
	sub_824ED008(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F91F8"))) PPC_WEAK_FUNC(sub_828F91F8);
PPC_FUNC_IMPL(__imp__sub_828F91F8) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828f8f58
	ctx.lr = 0x828F9224;
	sub_828F8F58(ctx, base);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828f7c98
	ctx.lr = 0x828F9230;
	sub_828F7C98(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828f927c
	if (!ctx.cr0.eq) goto loc_828F927C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r4,901
	ctx.r4.s64 = 901;
	// addi r5,r10,-6944
	ctx.r5.s64 = ctx.r10.s64 + -6944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828F927C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828F927C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ed008
	ctx.lr = 0x828F9284;
	sub_824ED008(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828F92A0"))) PPC_WEAK_FUNC(sub_828F92A0);
PPC_FUNC_IMPL(__imp__sub_828F92A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F92A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828f9394
	if (!ctx.cr6.eq) goto loc_828F9394;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828F92D4;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9394
	if (ctx.cr0.eq) goto loc_828F9394;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F92E4;
	sub_82C0F6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828f9348
	if (ctx.cr0.eq) goto loc_828F9348;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828F9300;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828F9310;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828F9318;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828F9324;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82908298
	ctx.lr = 0x828F9334;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-12232
	ctx.r11.s64 = ctx.r11.s64 + -12232;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x828f934c
	goto loc_828F934C;
loc_828F9348:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828F934C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f7df8
	ctx.lr = 0x828F9354;
	sub_828F7DF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828F935C;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9378
	if (ctx.cr0.eq) goto loc_828F9378;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9378
	if (ctx.cr6.eq) goto loc_828F9378;
	// bl 0x823e19b0
	ctx.lr = 0x828F9378;
	sub_823E19B0(ctx, base);
loc_828F9378:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f939c
	if (ctx.cr0.eq) goto loc_828F939C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f939c
	if (ctx.cr6.eq) goto loc_828F939C;
	// bl 0x823e19b0
	ctx.lr = 0x828F9390;
	sub_823E19B0(ctx, base);
	// b 0x828f939c
	goto loc_828F939C;
loc_828F9394:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828F939C;
	sub_8289D980(ctx, base);
loc_828F939C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F93A8"))) PPC_WEAK_FUNC(sub_828F93A8);
PPC_FUNC_IMPL(__imp__sub_828F93A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F93B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828f949c
	if (!ctx.cr6.eq) goto loc_828F949C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828F93DC;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f949c
	if (ctx.cr0.eq) goto loc_828F949C;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F93EC;
	sub_82C0F6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828f9450
	if (ctx.cr0.eq) goto loc_828F9450;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828F9408;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828F9418;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828F9420;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828F942C;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82908298
	ctx.lr = 0x828F943C;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-12172
	ctx.r11.s64 = ctx.r11.s64 + -12172;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x828f9454
	goto loc_828F9454;
loc_828F9450:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828F9454:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f7e80
	ctx.lr = 0x828F945C;
	sub_828F7E80(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828F9464;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9480
	if (ctx.cr0.eq) goto loc_828F9480;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9480
	if (ctx.cr6.eq) goto loc_828F9480;
	// bl 0x823e19b0
	ctx.lr = 0x828F9480;
	sub_823E19B0(ctx, base);
loc_828F9480:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f94a4
	if (ctx.cr0.eq) goto loc_828F94A4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f94a4
	if (ctx.cr6.eq) goto loc_828F94A4;
	// bl 0x823e19b0
	ctx.lr = 0x828F9498;
	sub_823E19B0(ctx, base);
	// b 0x828f94a4
	goto loc_828F94A4;
loc_828F949C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828F94A4;
	sub_8289D980(ctx, base);
loc_828F94A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F94B0"))) PPC_WEAK_FUNC(sub_828F94B0);
PPC_FUNC_IMPL(__imp__sub_828F94B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F94B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828f9598
	if (!ctx.cr6.eq) goto loc_828F9598;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828F94E4;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9598
	if (ctx.cr0.eq) goto loc_828F9598;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F94F4;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828f954c
	if (ctx.cr0.eq) goto loc_828F954C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828F9510;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828F9520;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828F9528;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828F9534;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ef2e0
	ctx.lr = 0x828F9544;
	sub_828EF2E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f9550
	goto loc_828F9550;
loc_828F954C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828F9550:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f7f08
	ctx.lr = 0x828F9558;
	sub_828F7F08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828F9560;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f957c
	if (ctx.cr0.eq) goto loc_828F957C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f957c
	if (ctx.cr6.eq) goto loc_828F957C;
	// bl 0x823e19b0
	ctx.lr = 0x828F957C;
	sub_823E19B0(ctx, base);
loc_828F957C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f95a0
	if (ctx.cr0.eq) goto loc_828F95A0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f95a0
	if (ctx.cr6.eq) goto loc_828F95A0;
	// bl 0x823e19b0
	ctx.lr = 0x828F9594;
	sub_823E19B0(ctx, base);
	// b 0x828f95a0
	goto loc_828F95A0;
loc_828F9598:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828F95A0;
	sub_8289D980(ctx, base);
loc_828F95A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F95B0"))) PPC_WEAK_FUNC(sub_828F95B0);
PPC_FUNC_IMPL(__imp__sub_828F95B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F95B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828f96a4
	if (!ctx.cr6.eq) goto loc_828F96A4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828F95E4;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f96a4
	if (ctx.cr0.eq) goto loc_828F96A4;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F95F4;
	sub_82C0F6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828f9658
	if (ctx.cr0.eq) goto loc_828F9658;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828F9610;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828F9620;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828F9628;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828F9634;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82908298
	ctx.lr = 0x828F9644;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-12112
	ctx.r11.s64 = ctx.r11.s64 + -12112;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x828f965c
	goto loc_828F965C;
loc_828F9658:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828F965C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f7f90
	ctx.lr = 0x828F9664;
	sub_828F7F90(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828F966C;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9688
	if (ctx.cr0.eq) goto loc_828F9688;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9688
	if (ctx.cr6.eq) goto loc_828F9688;
	// bl 0x823e19b0
	ctx.lr = 0x828F9688;
	sub_823E19B0(ctx, base);
loc_828F9688:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f96ac
	if (ctx.cr0.eq) goto loc_828F96AC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f96ac
	if (ctx.cr6.eq) goto loc_828F96AC;
	// bl 0x823e19b0
	ctx.lr = 0x828F96A0;
	sub_823E19B0(ctx, base);
	// b 0x828f96ac
	goto loc_828F96AC;
loc_828F96A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828F96AC;
	sub_8289D980(ctx, base);
loc_828F96AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F96B8"))) PPC_WEAK_FUNC(sub_828F96B8);
PPC_FUNC_IMPL(__imp__sub_828F96B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F96C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828f97b4
	if (!ctx.cr6.eq) goto loc_828F97B4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828F96EC;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f97b4
	if (ctx.cr0.eq) goto loc_828F97B4;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F96FC;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828f9768
	if (ctx.cr0.eq) goto loc_828F9768;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828F9718;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828F9728;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828F9730;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828F973C;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908298
	ctx.lr = 0x828F974C;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r11,r11,-12052
	ctx.r11.s64 = ctx.r11.s64 + -12052;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cfcc00
	ctx.lr = 0x828F9760;
	sub_82CFCC00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x828f976c
	goto loc_828F976C;
loc_828F9768:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828F976C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8018
	ctx.lr = 0x828F9774;
	sub_828F8018(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828F977C;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9798
	if (ctx.cr0.eq) goto loc_828F9798;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9798
	if (ctx.cr6.eq) goto loc_828F9798;
	// bl 0x823e19b0
	ctx.lr = 0x828F9798;
	sub_823E19B0(ctx, base);
loc_828F9798:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f97bc
	if (ctx.cr0.eq) goto loc_828F97BC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f97bc
	if (ctx.cr6.eq) goto loc_828F97BC;
	// bl 0x823e19b0
	ctx.lr = 0x828F97B0;
	sub_823E19B0(ctx, base);
	// b 0x828f97bc
	goto loc_828F97BC;
loc_828F97B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828F97BC;
	sub_8289D980(ctx, base);
loc_828F97BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F97C8"))) PPC_WEAK_FUNC(sub_828F97C8);
PPC_FUNC_IMPL(__imp__sub_828F97C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F97D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828f98bc
	if (!ctx.cr6.eq) goto loc_828F98BC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828F97FC;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f98bc
	if (ctx.cr0.eq) goto loc_828F98BC;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F980C;
	sub_82C0F6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828f9870
	if (ctx.cr0.eq) goto loc_828F9870;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828F9828;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828F9838;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828F9840;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828F984C;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829095b0
	ctx.lr = 0x828F985C;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-11992
	ctx.r11.s64 = ctx.r11.s64 + -11992;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x828f9874
	goto loc_828F9874;
loc_828F9870:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828F9874:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f80a0
	ctx.lr = 0x828F987C;
	sub_828F80A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828F9884;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f98a0
	if (ctx.cr0.eq) goto loc_828F98A0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f98a0
	if (ctx.cr6.eq) goto loc_828F98A0;
	// bl 0x823e19b0
	ctx.lr = 0x828F98A0;
	sub_823E19B0(ctx, base);
loc_828F98A0:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f98c4
	if (ctx.cr0.eq) goto loc_828F98C4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f98c4
	if (ctx.cr6.eq) goto loc_828F98C4;
	// bl 0x823e19b0
	ctx.lr = 0x828F98B8;
	sub_823E19B0(ctx, base);
	// b 0x828f98c4
	goto loc_828F98C4;
loc_828F98BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828F98C4;
	sub_8289D980(ctx, base);
loc_828F98C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F98D0"))) PPC_WEAK_FUNC(sub_828F98D0);
PPC_FUNC_IMPL(__imp__sub_828F98D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F98D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828f99b8
	if (!ctx.cr6.eq) goto loc_828F99B8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828F9904;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f99b8
	if (ctx.cr0.eq) goto loc_828F99B8;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F9914;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828f996c
	if (ctx.cr0.eq) goto loc_828F996C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828F9930;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828F9940;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828F9948;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828F9954;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ef470
	ctx.lr = 0x828F9964;
	sub_828EF470(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f9970
	goto loc_828F9970;
loc_828F996C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828F9970:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8128
	ctx.lr = 0x828F9978;
	sub_828F8128(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828F9980;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f999c
	if (ctx.cr0.eq) goto loc_828F999C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f999c
	if (ctx.cr6.eq) goto loc_828F999C;
	// bl 0x823e19b0
	ctx.lr = 0x828F999C;
	sub_823E19B0(ctx, base);
loc_828F999C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f99c0
	if (ctx.cr0.eq) goto loc_828F99C0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f99c0
	if (ctx.cr6.eq) goto loc_828F99C0;
	// bl 0x823e19b0
	ctx.lr = 0x828F99B4;
	sub_823E19B0(ctx, base);
	// b 0x828f99c0
	goto loc_828F99C0;
loc_828F99B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828F99C0;
	sub_8289D980(ctx, base);
loc_828F99C0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F99D0"))) PPC_WEAK_FUNC(sub_828F99D0);
PPC_FUNC_IMPL(__imp__sub_828F99D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F99D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828f9ab8
	if (!ctx.cr6.eq) goto loc_828F9AB8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828F9A04;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9ab8
	if (ctx.cr0.eq) goto loc_828F9AB8;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F9A14;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828f9a6c
	if (ctx.cr0.eq) goto loc_828F9A6C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828F9A30;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828F9A40;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828F9A48;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828F9A54;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ef5a8
	ctx.lr = 0x828F9A64;
	sub_828EF5A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f9a70
	goto loc_828F9A70;
loc_828F9A6C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828F9A70:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f81b0
	ctx.lr = 0x828F9A78;
	sub_828F81B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828F9A80;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9a9c
	if (ctx.cr0.eq) goto loc_828F9A9C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9a9c
	if (ctx.cr6.eq) goto loc_828F9A9C;
	// bl 0x823e19b0
	ctx.lr = 0x828F9A9C;
	sub_823E19B0(ctx, base);
loc_828F9A9C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9ac0
	if (ctx.cr0.eq) goto loc_828F9AC0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9ac0
	if (ctx.cr6.eq) goto loc_828F9AC0;
	// bl 0x823e19b0
	ctx.lr = 0x828F9AB4;
	sub_823E19B0(ctx, base);
	// b 0x828f9ac0
	goto loc_828F9AC0;
loc_828F9AB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828F9AC0;
	sub_8289D980(ctx, base);
loc_828F9AC0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F9AD0"))) PPC_WEAK_FUNC(sub_828F9AD0);
PPC_FUNC_IMPL(__imp__sub_828F9AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F9AD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828f9bb8
	if (!ctx.cr6.eq) goto loc_828F9BB8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828F9B04;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9bb8
	if (ctx.cr0.eq) goto loc_828F9BB8;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F9B14;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828f9b6c
	if (ctx.cr0.eq) goto loc_828F9B6C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828F9B30;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828F9B40;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828F9B48;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828F9B54;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ee1a0
	ctx.lr = 0x828F9B64;
	sub_828EE1A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828f9b70
	goto loc_828F9B70;
loc_828F9B6C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828F9B70:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8238
	ctx.lr = 0x828F9B78;
	sub_828F8238(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828F9B80;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9b9c
	if (ctx.cr0.eq) goto loc_828F9B9C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9b9c
	if (ctx.cr6.eq) goto loc_828F9B9C;
	// bl 0x823e19b0
	ctx.lr = 0x828F9B9C;
	sub_823E19B0(ctx, base);
loc_828F9B9C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9bc0
	if (ctx.cr0.eq) goto loc_828F9BC0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9bc0
	if (ctx.cr6.eq) goto loc_828F9BC0;
	// bl 0x823e19b0
	ctx.lr = 0x828F9BB4;
	sub_823E19B0(ctx, base);
	// b 0x828f9bc0
	goto loc_828F9BC0;
loc_828F9BB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828F9BC0;
	sub_8289D980(ctx, base);
loc_828F9BC0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F9BD0"))) PPC_WEAK_FUNC(sub_828F9BD0);
PPC_FUNC_IMPL(__imp__sub_828F9BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F9BD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828f9ccc
	if (!ctx.cr6.eq) goto loc_828F9CCC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828F9C04;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9ccc
	if (ctx.cr0.eq) goto loc_828F9CCC;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F9C14;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828f9c80
	if (ctx.cr0.eq) goto loc_828F9C80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828F9C30;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828F9C40;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828F9C48;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828F9C54;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908298
	ctx.lr = 0x828F9C64;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-11860
	ctx.r11.s64 = ctx.r11.s64 + -11860;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828f9c84
	goto loc_828F9C84;
loc_828F9C80:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828F9C84:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f82c0
	ctx.lr = 0x828F9C8C;
	sub_828F82C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828F9C94;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9cb0
	if (ctx.cr0.eq) goto loc_828F9CB0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9cb0
	if (ctx.cr6.eq) goto loc_828F9CB0;
	// bl 0x823e19b0
	ctx.lr = 0x828F9CB0;
	sub_823E19B0(ctx, base);
loc_828F9CB0:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9cd4
	if (ctx.cr0.eq) goto loc_828F9CD4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9cd4
	if (ctx.cr6.eq) goto loc_828F9CD4;
	// bl 0x823e19b0
	ctx.lr = 0x828F9CC8;
	sub_823E19B0(ctx, base);
	// b 0x828f9cd4
	goto loc_828F9CD4;
loc_828F9CCC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828F9CD4;
	sub_8289D980(ctx, base);
loc_828F9CD4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F9CE0"))) PPC_WEAK_FUNC(sub_828F9CE0);
PPC_FUNC_IMPL(__imp__sub_828F9CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F9CE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828f9ddc
	if (!ctx.cr6.eq) goto loc_828F9DDC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828F9D14;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9ddc
	if (ctx.cr0.eq) goto loc_828F9DDC;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F9D24;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828f9d90
	if (ctx.cr0.eq) goto loc_828F9D90;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828F9D40;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828F9D50;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828F9D58;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828F9D64;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829095b0
	ctx.lr = 0x828F9D74;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-11800
	ctx.r11.s64 = ctx.r11.s64 + -11800;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828f9d94
	goto loc_828F9D94;
loc_828F9D90:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828F9D94:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8348
	ctx.lr = 0x828F9D9C;
	sub_828F8348(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828F9DA4;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9dc0
	if (ctx.cr0.eq) goto loc_828F9DC0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9dc0
	if (ctx.cr6.eq) goto loc_828F9DC0;
	// bl 0x823e19b0
	ctx.lr = 0x828F9DC0;
	sub_823E19B0(ctx, base);
loc_828F9DC0:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9de4
	if (ctx.cr0.eq) goto loc_828F9DE4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9de4
	if (ctx.cr6.eq) goto loc_828F9DE4;
	// bl 0x823e19b0
	ctx.lr = 0x828F9DD8;
	sub_823E19B0(ctx, base);
	// b 0x828f9de4
	goto loc_828F9DE4;
loc_828F9DDC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828F9DE4;
	sub_8289D980(ctx, base);
loc_828F9DE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F9DF0"))) PPC_WEAK_FUNC(sub_828F9DF0);
PPC_FUNC_IMPL(__imp__sub_828F9DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F9DF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828f9eec
	if (!ctx.cr6.eq) goto loc_828F9EEC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828F9E24;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9eec
	if (ctx.cr0.eq) goto loc_828F9EEC;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F9E34;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828f9ea0
	if (ctx.cr0.eq) goto loc_828F9EA0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828F9E50;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828F9E60;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828F9E68;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828F9E74;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908298
	ctx.lr = 0x828F9E84;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-11740
	ctx.r11.s64 = ctx.r11.s64 + -11740;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828f9ea4
	goto loc_828F9EA4;
loc_828F9EA0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828F9EA4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f83d0
	ctx.lr = 0x828F9EAC;
	sub_828F83D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828F9EB4;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9ed0
	if (ctx.cr0.eq) goto loc_828F9ED0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9ed0
	if (ctx.cr6.eq) goto loc_828F9ED0;
	// bl 0x823e19b0
	ctx.lr = 0x828F9ED0;
	sub_823E19B0(ctx, base);
loc_828F9ED0:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9ef4
	if (ctx.cr0.eq) goto loc_828F9EF4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9ef4
	if (ctx.cr6.eq) goto loc_828F9EF4;
	// bl 0x823e19b0
	ctx.lr = 0x828F9EE8;
	sub_823E19B0(ctx, base);
	// b 0x828f9ef4
	goto loc_828F9EF4;
loc_828F9EEC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828F9EF4;
	sub_8289D980(ctx, base);
loc_828F9EF4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828F9F00"))) PPC_WEAK_FUNC(sub_828F9F00);
PPC_FUNC_IMPL(__imp__sub_828F9F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828F9F08;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828f9ffc
	if (!ctx.cr6.eq) goto loc_828F9FFC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828F9F34;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9ffc
	if (ctx.cr0.eq) goto loc_828F9FFC;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x828F9F44;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828f9fb0
	if (ctx.cr0.eq) goto loc_828F9FB0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828F9F60;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828F9F70;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828F9F78;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828F9F84;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908298
	ctx.lr = 0x828F9F94;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-11680
	ctx.r11.s64 = ctx.r11.s64 + -11680;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828f9fb4
	goto loc_828F9FB4;
loc_828F9FB0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828F9FB4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8458
	ctx.lr = 0x828F9FBC;
	sub_828F8458(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828F9FC4;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828f9fe0
	if (ctx.cr0.eq) goto loc_828F9FE0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828f9fe0
	if (ctx.cr6.eq) goto loc_828F9FE0;
	// bl 0x823e19b0
	ctx.lr = 0x828F9FE0;
	sub_823E19B0(ctx, base);
loc_828F9FE0:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa004
	if (ctx.cr0.eq) goto loc_828FA004;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa004
	if (ctx.cr6.eq) goto loc_828FA004;
	// bl 0x823e19b0
	ctx.lr = 0x828F9FF8;
	sub_823E19B0(ctx, base);
	// b 0x828fa004
	goto loc_828FA004;
loc_828F9FFC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FA004;
	sub_8289D980(ctx, base);
loc_828FA004:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FA010"))) PPC_WEAK_FUNC(sub_828FA010);
PPC_FUNC_IMPL(__imp__sub_828FA010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FA018;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fa0f8
	if (!ctx.cr6.eq) goto loc_828FA0F8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FA044;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa0f8
	if (ctx.cr0.eq) goto loc_828FA0F8;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FA054;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828fa0ac
	if (ctx.cr0.eq) goto loc_828FA0AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FA070;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FA080;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FA088;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FA094;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ee210
	ctx.lr = 0x828FA0A4;
	sub_828EE210(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828fa0b0
	goto loc_828FA0B0;
loc_828FA0AC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FA0B0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f84e0
	ctx.lr = 0x828FA0B8;
	sub_828F84E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FA0C0;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa0dc
	if (ctx.cr0.eq) goto loc_828FA0DC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa0dc
	if (ctx.cr6.eq) goto loc_828FA0DC;
	// bl 0x823e19b0
	ctx.lr = 0x828FA0DC;
	sub_823E19B0(ctx, base);
loc_828FA0DC:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa100
	if (ctx.cr0.eq) goto loc_828FA100;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa100
	if (ctx.cr6.eq) goto loc_828FA100;
	// bl 0x823e19b0
	ctx.lr = 0x828FA0F4;
	sub_823E19B0(ctx, base);
	// b 0x828fa100
	goto loc_828FA100;
loc_828FA0F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FA100;
	sub_8289D980(ctx, base);
loc_828FA100:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FA110"))) PPC_WEAK_FUNC(sub_828FA110);
PPC_FUNC_IMPL(__imp__sub_828FA110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FA118;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fa1f8
	if (!ctx.cr6.eq) goto loc_828FA1F8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FA144;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa1f8
	if (ctx.cr0.eq) goto loc_828FA1F8;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FA154;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828fa1ac
	if (ctx.cr0.eq) goto loc_828FA1AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FA170;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FA180;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FA188;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FA194;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ee288
	ctx.lr = 0x828FA1A4;
	sub_828EE288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828fa1b0
	goto loc_828FA1B0;
loc_828FA1AC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FA1B0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8568
	ctx.lr = 0x828FA1B8;
	sub_828F8568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FA1C0;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa1dc
	if (ctx.cr0.eq) goto loc_828FA1DC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa1dc
	if (ctx.cr6.eq) goto loc_828FA1DC;
	// bl 0x823e19b0
	ctx.lr = 0x828FA1DC;
	sub_823E19B0(ctx, base);
loc_828FA1DC:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa200
	if (ctx.cr0.eq) goto loc_828FA200;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa200
	if (ctx.cr6.eq) goto loc_828FA200;
	// bl 0x823e19b0
	ctx.lr = 0x828FA1F4;
	sub_823E19B0(ctx, base);
	// b 0x828fa200
	goto loc_828FA200;
loc_828FA1F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FA200;
	sub_8289D980(ctx, base);
loc_828FA200:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FA210"))) PPC_WEAK_FUNC(sub_828FA210);
PPC_FUNC_IMPL(__imp__sub_828FA210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FA218;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fa2f8
	if (!ctx.cr6.eq) goto loc_828FA2F8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FA244;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa2f8
	if (ctx.cr0.eq) goto loc_828FA2F8;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FA254;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828fa2ac
	if (ctx.cr0.eq) goto loc_828FA2AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FA270;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FA280;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FA288;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FA294;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ee2f0
	ctx.lr = 0x828FA2A4;
	sub_828EE2F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828fa2b0
	goto loc_828FA2B0;
loc_828FA2AC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FA2B0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f85f0
	ctx.lr = 0x828FA2B8;
	sub_828F85F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FA2C0;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa2dc
	if (ctx.cr0.eq) goto loc_828FA2DC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa2dc
	if (ctx.cr6.eq) goto loc_828FA2DC;
	// bl 0x823e19b0
	ctx.lr = 0x828FA2DC;
	sub_823E19B0(ctx, base);
loc_828FA2DC:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa300
	if (ctx.cr0.eq) goto loc_828FA300;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa300
	if (ctx.cr6.eq) goto loc_828FA300;
	// bl 0x823e19b0
	ctx.lr = 0x828FA2F4;
	sub_823E19B0(ctx, base);
	// b 0x828fa300
	goto loc_828FA300;
loc_828FA2F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FA300;
	sub_8289D980(ctx, base);
loc_828FA300:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FA310"))) PPC_WEAK_FUNC(sub_828FA310);
PPC_FUNC_IMPL(__imp__sub_828FA310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FA318;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fa404
	if (!ctx.cr6.eq) goto loc_828FA404;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FA344;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa404
	if (ctx.cr0.eq) goto loc_828FA404;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FA354;
	sub_82C0F6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828fa3b8
	if (ctx.cr0.eq) goto loc_828FA3B8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FA370;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FA380;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FA388;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FA394;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829095b0
	ctx.lr = 0x828FA3A4;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-11392
	ctx.r11.s64 = ctx.r11.s64 + -11392;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x828fa3bc
	goto loc_828FA3BC;
loc_828FA3B8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FA3BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8678
	ctx.lr = 0x828FA3C4;
	sub_828F8678(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FA3CC;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa3e8
	if (ctx.cr0.eq) goto loc_828FA3E8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa3e8
	if (ctx.cr6.eq) goto loc_828FA3E8;
	// bl 0x823e19b0
	ctx.lr = 0x828FA3E8;
	sub_823E19B0(ctx, base);
loc_828FA3E8:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa40c
	if (ctx.cr0.eq) goto loc_828FA40C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa40c
	if (ctx.cr6.eq) goto loc_828FA40C;
	// bl 0x823e19b0
	ctx.lr = 0x828FA400;
	sub_823E19B0(ctx, base);
	// b 0x828fa40c
	goto loc_828FA40C;
loc_828FA404:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FA40C;
	sub_8289D980(ctx, base);
loc_828FA40C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FA418"))) PPC_WEAK_FUNC(sub_828FA418);
PPC_FUNC_IMPL(__imp__sub_828FA418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FA420;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fa514
	if (!ctx.cr6.eq) goto loc_828FA514;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FA44C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa514
	if (ctx.cr0.eq) goto loc_828FA514;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FA45C;
	sub_82C0F6C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828fa4c8
	if (ctx.cr0.eq) goto loc_828FA4C8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FA478;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FA488;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FA490;
	sub_824992B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FA49C;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829095b0
	ctx.lr = 0x828FA4AC;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-11332
	ctx.r11.s64 = ctx.r11.s64 + -11332;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828fa4cc
	goto loc_828FA4CC;
loc_828FA4C8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FA4CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8700
	ctx.lr = 0x828FA4D4;
	sub_828F8700(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FA4DC;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa4f8
	if (ctx.cr0.eq) goto loc_828FA4F8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa4f8
	if (ctx.cr6.eq) goto loc_828FA4F8;
	// bl 0x823e19b0
	ctx.lr = 0x828FA4F8;
	sub_823E19B0(ctx, base);
loc_828FA4F8:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa51c
	if (ctx.cr0.eq) goto loc_828FA51C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa51c
	if (ctx.cr6.eq) goto loc_828FA51C;
	// bl 0x823e19b0
	ctx.lr = 0x828FA510;
	sub_823E19B0(ctx, base);
	// b 0x828fa51c
	goto loc_828FA51C;
loc_828FA514:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FA51C;
	sub_8289D980(ctx, base);
loc_828FA51C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FA528"))) PPC_WEAK_FUNC(sub_828FA528);
PPC_FUNC_IMPL(__imp__sub_828FA528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FA530;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fa610
	if (!ctx.cr6.eq) goto loc_828FA610;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FA55C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa610
	if (ctx.cr0.eq) goto loc_828FA610;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FA56C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828fa5c4
	if (ctx.cr0.eq) goto loc_828FA5C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FA588;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FA598;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FA5A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FA5AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ee358
	ctx.lr = 0x828FA5BC;
	sub_828EE358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828fa5c8
	goto loc_828FA5C8;
loc_828FA5C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FA5C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8788
	ctx.lr = 0x828FA5D0;
	sub_828F8788(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FA5D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa5f4
	if (ctx.cr0.eq) goto loc_828FA5F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa5f4
	if (ctx.cr6.eq) goto loc_828FA5F4;
	// bl 0x823e19b0
	ctx.lr = 0x828FA5F4;
	sub_823E19B0(ctx, base);
loc_828FA5F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa618
	if (ctx.cr0.eq) goto loc_828FA618;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa618
	if (ctx.cr6.eq) goto loc_828FA618;
	// bl 0x823e19b0
	ctx.lr = 0x828FA60C;
	sub_823E19B0(ctx, base);
	// b 0x828fa618
	goto loc_828FA618;
loc_828FA610:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FA618;
	sub_8289D980(ctx, base);
loc_828FA618:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FA628"))) PPC_WEAK_FUNC(sub_828FA628);
PPC_FUNC_IMPL(__imp__sub_828FA628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FA630;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fa710
	if (!ctx.cr6.eq) goto loc_828FA710;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FA65C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa710
	if (ctx.cr0.eq) goto loc_828FA710;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FA66C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828fa6c4
	if (ctx.cr0.eq) goto loc_828FA6C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FA688;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FA698;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FA6A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FA6AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828efc80
	ctx.lr = 0x828FA6BC;
	sub_828EFC80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828fa6c8
	goto loc_828FA6C8;
loc_828FA6C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FA6C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8810
	ctx.lr = 0x828FA6D0;
	sub_828F8810(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FA6D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa6f4
	if (ctx.cr0.eq) goto loc_828FA6F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa6f4
	if (ctx.cr6.eq) goto loc_828FA6F4;
	// bl 0x823e19b0
	ctx.lr = 0x828FA6F4;
	sub_823E19B0(ctx, base);
loc_828FA6F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa718
	if (ctx.cr0.eq) goto loc_828FA718;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa718
	if (ctx.cr6.eq) goto loc_828FA718;
	// bl 0x823e19b0
	ctx.lr = 0x828FA70C;
	sub_823E19B0(ctx, base);
	// b 0x828fa718
	goto loc_828FA718;
loc_828FA710:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FA718;
	sub_8289D980(ctx, base);
loc_828FA718:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FA728"))) PPC_WEAK_FUNC(sub_828FA728);
PPC_FUNC_IMPL(__imp__sub_828FA728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FA730;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fa81c
	if (!ctx.cr6.eq) goto loc_828FA81C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FA75C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa81c
	if (ctx.cr0.eq) goto loc_828FA81C;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FA76C;
	sub_82C0F6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828fa7d0
	if (ctx.cr0.eq) goto loc_828FA7D0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FA788;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FA798;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FA7A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FA7AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82908298
	ctx.lr = 0x828FA7BC;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-11196
	ctx.r11.s64 = ctx.r11.s64 + -11196;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x828fa7d4
	goto loc_828FA7D4;
loc_828FA7D0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FA7D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8898
	ctx.lr = 0x828FA7DC;
	sub_828F8898(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FA7E4;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa800
	if (ctx.cr0.eq) goto loc_828FA800;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa800
	if (ctx.cr6.eq) goto loc_828FA800;
	// bl 0x823e19b0
	ctx.lr = 0x828FA800;
	sub_823E19B0(ctx, base);
loc_828FA800:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa824
	if (ctx.cr0.eq) goto loc_828FA824;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa824
	if (ctx.cr6.eq) goto loc_828FA824;
	// bl 0x823e19b0
	ctx.lr = 0x828FA818;
	sub_823E19B0(ctx, base);
	// b 0x828fa824
	goto loc_828FA824;
loc_828FA81C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FA824;
	sub_8289D980(ctx, base);
loc_828FA824:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FA830"))) PPC_WEAK_FUNC(sub_828FA830);
PPC_FUNC_IMPL(__imp__sub_828FA830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FA838;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fa918
	if (!ctx.cr6.eq) goto loc_828FA918;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FA864;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa918
	if (ctx.cr0.eq) goto loc_828FA918;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FA874;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828fa8cc
	if (ctx.cr0.eq) goto loc_828FA8CC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FA890;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FA8A0;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FA8A8;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FA8B4;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ee3c8
	ctx.lr = 0x828FA8C4;
	sub_828EE3C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828fa8d0
	goto loc_828FA8D0;
loc_828FA8CC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FA8D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8920
	ctx.lr = 0x828FA8D8;
	sub_828F8920(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FA8E0;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa8fc
	if (ctx.cr0.eq) goto loc_828FA8FC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa8fc
	if (ctx.cr6.eq) goto loc_828FA8FC;
	// bl 0x823e19b0
	ctx.lr = 0x828FA8FC;
	sub_823E19B0(ctx, base);
loc_828FA8FC:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa920
	if (ctx.cr0.eq) goto loc_828FA920;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa920
	if (ctx.cr6.eq) goto loc_828FA920;
	// bl 0x823e19b0
	ctx.lr = 0x828FA914;
	sub_823E19B0(ctx, base);
	// b 0x828fa920
	goto loc_828FA920;
loc_828FA918:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FA920;
	sub_8289D980(ctx, base);
loc_828FA920:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FA930"))) PPC_WEAK_FUNC(sub_828FA930);
PPC_FUNC_IMPL(__imp__sub_828FA930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FA938;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828faa18
	if (!ctx.cr6.eq) goto loc_828FAA18;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FA964;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828faa18
	if (ctx.cr0.eq) goto loc_828FAA18;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FA974;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828fa9cc
	if (ctx.cr0.eq) goto loc_828FA9CC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FA990;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FA9A0;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FA9A8;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FA9B4;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ee420
	ctx.lr = 0x828FA9C4;
	sub_828EE420(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828fa9d0
	goto loc_828FA9D0;
loc_828FA9CC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FA9D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f89a8
	ctx.lr = 0x828FA9D8;
	sub_828F89A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FA9E0;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fa9fc
	if (ctx.cr0.eq) goto loc_828FA9FC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fa9fc
	if (ctx.cr6.eq) goto loc_828FA9FC;
	// bl 0x823e19b0
	ctx.lr = 0x828FA9FC;
	sub_823E19B0(ctx, base);
loc_828FA9FC:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828faa20
	if (ctx.cr0.eq) goto loc_828FAA20;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828faa20
	if (ctx.cr6.eq) goto loc_828FAA20;
	// bl 0x823e19b0
	ctx.lr = 0x828FAA14;
	sub_823E19B0(ctx, base);
	// b 0x828faa20
	goto loc_828FAA20;
loc_828FAA18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FAA20;
	sub_8289D980(ctx, base);
loc_828FAA20:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FAA30"))) PPC_WEAK_FUNC(sub_828FAA30);
PPC_FUNC_IMPL(__imp__sub_828FAA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FAA38;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fab24
	if (!ctx.cr6.eq) goto loc_828FAB24;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FAA64;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fab24
	if (ctx.cr0.eq) goto loc_828FAB24;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FAA74;
	sub_82C0F6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828faad8
	if (ctx.cr0.eq) goto loc_828FAAD8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FAA90;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FAAA0;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FAAA8;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FAAB4;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829095b0
	ctx.lr = 0x828FAAC4;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-10992
	ctx.r11.s64 = ctx.r11.s64 + -10992;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x828faadc
	goto loc_828FAADC;
loc_828FAAD8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FAADC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8a30
	ctx.lr = 0x828FAAE4;
	sub_828F8A30(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FAAEC;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fab08
	if (ctx.cr0.eq) goto loc_828FAB08;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fab08
	if (ctx.cr6.eq) goto loc_828FAB08;
	// bl 0x823e19b0
	ctx.lr = 0x828FAB08;
	sub_823E19B0(ctx, base);
loc_828FAB08:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fab2c
	if (ctx.cr0.eq) goto loc_828FAB2C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fab2c
	if (ctx.cr6.eq) goto loc_828FAB2C;
	// bl 0x823e19b0
	ctx.lr = 0x828FAB20;
	sub_823E19B0(ctx, base);
	// b 0x828fab2c
	goto loc_828FAB2C;
loc_828FAB24:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FAB2C;
	sub_8289D980(ctx, base);
loc_828FAB2C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FAB38"))) PPC_WEAK_FUNC(sub_828FAB38);
PPC_FUNC_IMPL(__imp__sub_828FAB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FAB40;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fac20
	if (!ctx.cr6.eq) goto loc_828FAC20;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FAB6C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fac20
	if (ctx.cr0.eq) goto loc_828FAC20;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FAB7C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828fabd4
	if (ctx.cr0.eq) goto loc_828FABD4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FAB98;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FABA8;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FABB0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FABBC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828eff18
	ctx.lr = 0x828FABCC;
	sub_828EFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828fabd8
	goto loc_828FABD8;
loc_828FABD4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FABD8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8ab8
	ctx.lr = 0x828FABE0;
	sub_828F8AB8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FABE8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fac04
	if (ctx.cr0.eq) goto loc_828FAC04;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fac04
	if (ctx.cr6.eq) goto loc_828FAC04;
	// bl 0x823e19b0
	ctx.lr = 0x828FAC04;
	sub_823E19B0(ctx, base);
loc_828FAC04:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fac28
	if (ctx.cr0.eq) goto loc_828FAC28;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fac28
	if (ctx.cr6.eq) goto loc_828FAC28;
	// bl 0x823e19b0
	ctx.lr = 0x828FAC1C;
	sub_823E19B0(ctx, base);
	// b 0x828fac28
	goto loc_828FAC28;
loc_828FAC20:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FAC28;
	sub_8289D980(ctx, base);
loc_828FAC28:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FAC38"))) PPC_WEAK_FUNC(sub_828FAC38);
PPC_FUNC_IMPL(__imp__sub_828FAC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FAC40;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fad2c
	if (!ctx.cr6.eq) goto loc_828FAD2C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FAC6C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fad2c
	if (ctx.cr0.eq) goto loc_828FAD2C;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FAC7C;
	sub_82C0F6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828face0
	if (ctx.cr0.eq) goto loc_828FACE0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FAC98;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FACA8;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FACB0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FACBC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82908298
	ctx.lr = 0x828FACCC;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-10932
	ctx.r11.s64 = ctx.r11.s64 + -10932;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x828face4
	goto loc_828FACE4;
loc_828FACE0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FACE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8b40
	ctx.lr = 0x828FACEC;
	sub_828F8B40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FACF4;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fad10
	if (ctx.cr0.eq) goto loc_828FAD10;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fad10
	if (ctx.cr6.eq) goto loc_828FAD10;
	// bl 0x823e19b0
	ctx.lr = 0x828FAD10;
	sub_823E19B0(ctx, base);
loc_828FAD10:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fad34
	if (ctx.cr0.eq) goto loc_828FAD34;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fad34
	if (ctx.cr6.eq) goto loc_828FAD34;
	// bl 0x823e19b0
	ctx.lr = 0x828FAD28;
	sub_823E19B0(ctx, base);
	// b 0x828fad34
	goto loc_828FAD34;
loc_828FAD2C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FAD34;
	sub_8289D980(ctx, base);
loc_828FAD34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FAD40"))) PPC_WEAK_FUNC(sub_828FAD40);
PPC_FUNC_IMPL(__imp__sub_828FAD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FAD48;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fae28
	if (!ctx.cr6.eq) goto loc_828FAE28;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FAD74;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fae28
	if (ctx.cr0.eq) goto loc_828FAE28;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FAD84;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828faddc
	if (ctx.cr0.eq) goto loc_828FADDC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FADA0;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FADB0;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FADB8;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FADC4;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ee488
	ctx.lr = 0x828FADD4;
	sub_828EE488(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828fade0
	goto loc_828FADE0;
loc_828FADDC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FADE0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8bc8
	ctx.lr = 0x828FADE8;
	sub_828F8BC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FADF0;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fae0c
	if (ctx.cr0.eq) goto loc_828FAE0C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fae0c
	if (ctx.cr6.eq) goto loc_828FAE0C;
	// bl 0x823e19b0
	ctx.lr = 0x828FAE0C;
	sub_823E19B0(ctx, base);
loc_828FAE0C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fae30
	if (ctx.cr0.eq) goto loc_828FAE30;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fae30
	if (ctx.cr6.eq) goto loc_828FAE30;
	// bl 0x823e19b0
	ctx.lr = 0x828FAE24;
	sub_823E19B0(ctx, base);
	// b 0x828fae30
	goto loc_828FAE30;
loc_828FAE28:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FAE30;
	sub_8289D980(ctx, base);
loc_828FAE30:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FAE40"))) PPC_WEAK_FUNC(sub_828FAE40);
PPC_FUNC_IMPL(__imp__sub_828FAE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FAE48;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828faf28
	if (!ctx.cr6.eq) goto loc_828FAF28;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FAE74;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828faf28
	if (ctx.cr0.eq) goto loc_828FAF28;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FAE84;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828faedc
	if (ctx.cr0.eq) goto loc_828FAEDC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FAEA0;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FAEB0;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FAEB8;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FAEC4;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ee4e8
	ctx.lr = 0x828FAED4;
	sub_828EE4E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828faee0
	goto loc_828FAEE0;
loc_828FAEDC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FAEE0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8c50
	ctx.lr = 0x828FAEE8;
	sub_828F8C50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FAEF0;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828faf0c
	if (ctx.cr0.eq) goto loc_828FAF0C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828faf0c
	if (ctx.cr6.eq) goto loc_828FAF0C;
	// bl 0x823e19b0
	ctx.lr = 0x828FAF0C;
	sub_823E19B0(ctx, base);
loc_828FAF0C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828faf30
	if (ctx.cr0.eq) goto loc_828FAF30;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828faf30
	if (ctx.cr6.eq) goto loc_828FAF30;
	// bl 0x823e19b0
	ctx.lr = 0x828FAF24;
	sub_823E19B0(ctx, base);
	// b 0x828faf30
	goto loc_828FAF30;
loc_828FAF28:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FAF30;
	sub_8289D980(ctx, base);
loc_828FAF30:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FAF40"))) PPC_WEAK_FUNC(sub_828FAF40);
PPC_FUNC_IMPL(__imp__sub_828FAF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FAF48;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fb028
	if (!ctx.cr6.eq) goto loc_828FB028;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FAF74;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb028
	if (ctx.cr0.eq) goto loc_828FB028;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FAF84;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828fafdc
	if (ctx.cr0.eq) goto loc_828FAFDC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FAFA0;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FAFB0;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FAFB8;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FAFC4;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ee538
	ctx.lr = 0x828FAFD4;
	sub_828EE538(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828fafe0
	goto loc_828FAFE0;
loc_828FAFDC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FAFE0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8cd8
	ctx.lr = 0x828FAFE8;
	sub_828F8CD8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FAFF0;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb00c
	if (ctx.cr0.eq) goto loc_828FB00C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fb00c
	if (ctx.cr6.eq) goto loc_828FB00C;
	// bl 0x823e19b0
	ctx.lr = 0x828FB00C;
	sub_823E19B0(ctx, base);
loc_828FB00C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb030
	if (ctx.cr0.eq) goto loc_828FB030;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fb030
	if (ctx.cr6.eq) goto loc_828FB030;
	// bl 0x823e19b0
	ctx.lr = 0x828FB024;
	sub_823E19B0(ctx, base);
	// b 0x828fb030
	goto loc_828FB030;
loc_828FB028:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FB030;
	sub_8289D980(ctx, base);
loc_828FB030:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FB040"))) PPC_WEAK_FUNC(sub_828FB040);
PPC_FUNC_IMPL(__imp__sub_828FB040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FB048;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fb128
	if (!ctx.cr6.eq) goto loc_828FB128;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FB074;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb128
	if (ctx.cr0.eq) goto loc_828FB128;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FB084;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828fb0dc
	if (ctx.cr0.eq) goto loc_828FB0DC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FB0A0;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FB0B0;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FB0B8;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FB0C4;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ee600
	ctx.lr = 0x828FB0D4;
	sub_828EE600(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828fb0e0
	goto loc_828FB0E0;
loc_828FB0DC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FB0E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8d60
	ctx.lr = 0x828FB0E8;
	sub_828F8D60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FB0F0;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb10c
	if (ctx.cr0.eq) goto loc_828FB10C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fb10c
	if (ctx.cr6.eq) goto loc_828FB10C;
	// bl 0x823e19b0
	ctx.lr = 0x828FB10C;
	sub_823E19B0(ctx, base);
loc_828FB10C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb130
	if (ctx.cr0.eq) goto loc_828FB130;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fb130
	if (ctx.cr6.eq) goto loc_828FB130;
	// bl 0x823e19b0
	ctx.lr = 0x828FB124;
	sub_823E19B0(ctx, base);
	// b 0x828fb130
	goto loc_828FB130;
loc_828FB128:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FB130;
	sub_8289D980(ctx, base);
loc_828FB130:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FB140"))) PPC_WEAK_FUNC(sub_828FB140);
PPC_FUNC_IMPL(__imp__sub_828FB140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FB148;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fb228
	if (!ctx.cr6.eq) goto loc_828FB228;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FB174;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb228
	if (ctx.cr0.eq) goto loc_828FB228;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FB184;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828fb1dc
	if (ctx.cr0.eq) goto loc_828FB1DC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FB1A0;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FB1B0;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FB1B8;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FB1C4;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ee6c8
	ctx.lr = 0x828FB1D4;
	sub_828EE6C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828fb1e0
	goto loc_828FB1E0;
loc_828FB1DC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FB1E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8de8
	ctx.lr = 0x828FB1E8;
	sub_828F8DE8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FB1F0;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb20c
	if (ctx.cr0.eq) goto loc_828FB20C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fb20c
	if (ctx.cr6.eq) goto loc_828FB20C;
	// bl 0x823e19b0
	ctx.lr = 0x828FB20C;
	sub_823E19B0(ctx, base);
loc_828FB20C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb230
	if (ctx.cr0.eq) goto loc_828FB230;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fb230
	if (ctx.cr6.eq) goto loc_828FB230;
	// bl 0x823e19b0
	ctx.lr = 0x828FB224;
	sub_823E19B0(ctx, base);
	// b 0x828fb230
	goto loc_828FB230;
loc_828FB228:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FB230;
	sub_8289D980(ctx, base);
loc_828FB230:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FB240"))) PPC_WEAK_FUNC(sub_828FB240);
PPC_FUNC_IMPL(__imp__sub_828FB240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FB248;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828fb328
	if (!ctx.cr6.eq) goto loc_828FB328;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x828FB274;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb328
	if (ctx.cr0.eq) goto loc_828FB328;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82c0f6c0
	ctx.lr = 0x828FB284;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828fb2dc
	if (ctx.cr0.eq) goto loc_828FB2DC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x828FB2A0;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x828FB2B0;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x828FB2B8;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x828FB2C4;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828ee738
	ctx.lr = 0x828FB2D4;
	sub_828EE738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828fb2e0
	goto loc_828FB2E0;
loc_828FB2DC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828FB2E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828f8e70
	ctx.lr = 0x828FB2E8;
	sub_828F8E70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x828FB2F0;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb30c
	if (ctx.cr0.eq) goto loc_828FB30C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fb30c
	if (ctx.cr6.eq) goto loc_828FB30C;
	// bl 0x823e19b0
	ctx.lr = 0x828FB30C;
	sub_823E19B0(ctx, base);
loc_828FB30C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fb330
	if (ctx.cr0.eq) goto loc_828FB330;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fb330
	if (ctx.cr6.eq) goto loc_828FB330;
	// bl 0x823e19b0
	ctx.lr = 0x828FB324;
	sub_823E19B0(ctx, base);
	// b 0x828fb330
	goto loc_828FB330;
loc_828FB328:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x828FB330;
	sub_8289D980(ctx, base);
loc_828FB330:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FB340"))) PPC_WEAK_FUNC(sub_828FB340);
PPC_FUNC_IMPL(__imp__sub_828FB340) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fc1a0
	ctx.lr = 0x828FB358;
	sub_828FC1A0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,-4436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4436);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fb380
	if (ctx.cr6.eq) goto loc_828FB380;
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x828fb37c
	if (!ctx.cr6.eq) goto loc_828FB37C;
	// bl 0x826116e8
	ctx.lr = 0x828FB378;
	sub_826116E8(ctx, base);
	// b 0x828fb380
	goto loc_828FB380;
loc_828FB37C:
	// bl 0x826116f8
	ctx.lr = 0x828FB380;
	sub_826116F8(ctx, base);
loc_828FB380:
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

__attribute__((alias("__imp__sub_828FB398"))) PPC_WEAK_FUNC(sub_828FB398);
PPC_FUNC_IMPL(__imp__sub_828FB398) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82908298
	ctx.lr = 0x828FB3B0;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-6360
	ctx.r11.s64 = ctx.r11.s64 + -6360;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r5,r10,15768
	ctx.r5.s64 = ctx.r10.s64 + 15768;
	// bl 0x82e50ea8
	ctx.lr = 0x828FB3D0;
	sub_82E50EA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r5,r11,-6376
	ctx.r5.s64 = ctx.r11.s64 + -6376;
	// bl 0x82e50ea8
	ctx.lr = 0x828FB3E4;
	sub_82E50EA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB400"))) PPC_WEAK_FUNC(sub_828FB400);
PPC_FUNC_IMPL(__imp__sub_828FB400) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fc1a0
	ctx.lr = 0x828FB418;
	sub_828FC1A0(ctx, base);
	// lbz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// bl 0x82999ec0
	ctx.lr = 0x828FB420;
	sub_82999EC0(ctx, base);
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

__attribute__((alias("__imp__sub_828FB438"))) PPC_WEAK_FUNC(sub_828FB438);
PPC_FUNC_IMPL(__imp__sub_828FB438) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82908298
	ctx.lr = 0x828FB450;
	sub_82908298(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-5760
	ctx.r10.s64 = ctx.r10.s64 + -5760;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r11,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r11.u8);
	// stb r11,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_828FB488"))) PPC_WEAK_FUNC(sub_828FB488);
PPC_FUNC_IMPL(__imp__sub_828FB488) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,30832
	ctx.r31.s64 = ctx.r11.s64 + 30832;
	// lwz r11,30844(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30844);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb4c0
	if (!ctx.cr0.eq) goto loc_828FB4C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,30844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30844, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB4C0;
	sub_8289D980(ctx, base);
loc_828FB4C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB4D8"))) PPC_WEAK_FUNC(sub_828FB4D8);
PPC_FUNC_IMPL(__imp__sub_828FB4D8) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,30848
	ctx.r31.s64 = ctx.r11.s64 + 30848;
	// lwz r11,30860(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30860);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb510
	if (!ctx.cr0.eq) goto loc_828FB510;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,30860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30860, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB510;
	sub_8289D980(ctx, base);
loc_828FB510:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB528"))) PPC_WEAK_FUNC(sub_828FB528);
PPC_FUNC_IMPL(__imp__sub_828FB528) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,30864
	ctx.r31.s64 = ctx.r11.s64 + 30864;
	// lwz r11,30876(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30876);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb560
	if (!ctx.cr0.eq) goto loc_828FB560;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,30876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30876, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB560;
	sub_8289D980(ctx, base);
loc_828FB560:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB578"))) PPC_WEAK_FUNC(sub_828FB578);
PPC_FUNC_IMPL(__imp__sub_828FB578) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,30880
	ctx.r31.s64 = ctx.r11.s64 + 30880;
	// lwz r11,30892(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30892);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb5b0
	if (!ctx.cr0.eq) goto loc_828FB5B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,30892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30892, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB5B0;
	sub_8289D980(ctx, base);
loc_828FB5B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB5C8"))) PPC_WEAK_FUNC(sub_828FB5C8);
PPC_FUNC_IMPL(__imp__sub_828FB5C8) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,30896
	ctx.r31.s64 = ctx.r11.s64 + 30896;
	// lwz r11,30908(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30908);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb600
	if (!ctx.cr0.eq) goto loc_828FB600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,30908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30908, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB600;
	sub_8289D980(ctx, base);
loc_828FB600:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB618"))) PPC_WEAK_FUNC(sub_828FB618);
PPC_FUNC_IMPL(__imp__sub_828FB618) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,30912
	ctx.r31.s64 = ctx.r11.s64 + 30912;
	// lwz r11,30924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30924);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb650
	if (!ctx.cr0.eq) goto loc_828FB650;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,30924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30924, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB650;
	sub_8289D980(ctx, base);
loc_828FB650:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB668"))) PPC_WEAK_FUNC(sub_828FB668);
PPC_FUNC_IMPL(__imp__sub_828FB668) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,30928
	ctx.r31.s64 = ctx.r11.s64 + 30928;
	// lwz r11,30940(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30940);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb6a0
	if (!ctx.cr0.eq) goto loc_828FB6A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,30940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30940, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB6A0;
	sub_8289D980(ctx, base);
loc_828FB6A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB6B8"))) PPC_WEAK_FUNC(sub_828FB6B8);
PPC_FUNC_IMPL(__imp__sub_828FB6B8) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,30944
	ctx.r31.s64 = ctx.r11.s64 + 30944;
	// lwz r11,30956(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30956);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb6f0
	if (!ctx.cr0.eq) goto loc_828FB6F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,30956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30956, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB6F0;
	sub_8289D980(ctx, base);
loc_828FB6F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB708"))) PPC_WEAK_FUNC(sub_828FB708);
PPC_FUNC_IMPL(__imp__sub_828FB708) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,30960
	ctx.r31.s64 = ctx.r11.s64 + 30960;
	// lwz r11,30972(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30972);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb740
	if (!ctx.cr0.eq) goto loc_828FB740;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,30972(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30972, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB740;
	sub_8289D980(ctx, base);
loc_828FB740:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB758"))) PPC_WEAK_FUNC(sub_828FB758);
PPC_FUNC_IMPL(__imp__sub_828FB758) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,30976
	ctx.r31.s64 = ctx.r11.s64 + 30976;
	// lwz r11,30988(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30988);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb790
	if (!ctx.cr0.eq) goto loc_828FB790;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,30988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30988, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB790;
	sub_8289D980(ctx, base);
loc_828FB790:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB7A8"))) PPC_WEAK_FUNC(sub_828FB7A8);
PPC_FUNC_IMPL(__imp__sub_828FB7A8) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,30992
	ctx.r31.s64 = ctx.r11.s64 + 30992;
	// lwz r11,31004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31004);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb7e0
	if (!ctx.cr0.eq) goto loc_828FB7E0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31004, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB7E0;
	sub_8289D980(ctx, base);
loc_828FB7E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB7F8"))) PPC_WEAK_FUNC(sub_828FB7F8);
PPC_FUNC_IMPL(__imp__sub_828FB7F8) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31008
	ctx.r31.s64 = ctx.r11.s64 + 31008;
	// lwz r11,31020(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31020);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb830
	if (!ctx.cr0.eq) goto loc_828FB830;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31020, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB830;
	sub_8289D980(ctx, base);
loc_828FB830:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB848"))) PPC_WEAK_FUNC(sub_828FB848);
PPC_FUNC_IMPL(__imp__sub_828FB848) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31024
	ctx.r31.s64 = ctx.r11.s64 + 31024;
	// lwz r11,31036(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31036);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb880
	if (!ctx.cr0.eq) goto loc_828FB880;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31036, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB880;
	sub_8289D980(ctx, base);
loc_828FB880:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB898"))) PPC_WEAK_FUNC(sub_828FB898);
PPC_FUNC_IMPL(__imp__sub_828FB898) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31040
	ctx.r31.s64 = ctx.r11.s64 + 31040;
	// lwz r11,31052(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31052);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb8d0
	if (!ctx.cr0.eq) goto loc_828FB8D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31052, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB8D0;
	sub_8289D980(ctx, base);
loc_828FB8D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB8E8"))) PPC_WEAK_FUNC(sub_828FB8E8);
PPC_FUNC_IMPL(__imp__sub_828FB8E8) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31056
	ctx.r31.s64 = ctx.r11.s64 + 31056;
	// lwz r11,31068(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31068);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb920
	if (!ctx.cr0.eq) goto loc_828FB920;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31068, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB920;
	sub_8289D980(ctx, base);
loc_828FB920:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB938"))) PPC_WEAK_FUNC(sub_828FB938);
PPC_FUNC_IMPL(__imp__sub_828FB938) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31072
	ctx.r31.s64 = ctx.r11.s64 + 31072;
	// lwz r11,31084(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31084);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb970
	if (!ctx.cr0.eq) goto loc_828FB970;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31084, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB970;
	sub_8289D980(ctx, base);
loc_828FB970:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB988"))) PPC_WEAK_FUNC(sub_828FB988);
PPC_FUNC_IMPL(__imp__sub_828FB988) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31088
	ctx.r31.s64 = ctx.r11.s64 + 31088;
	// lwz r11,31100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31100);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fb9c0
	if (!ctx.cr0.eq) goto loc_828FB9C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31100, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FB9C0;
	sub_8289D980(ctx, base);
loc_828FB9C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FB9D8"))) PPC_WEAK_FUNC(sub_828FB9D8);
PPC_FUNC_IMPL(__imp__sub_828FB9D8) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31104
	ctx.r31.s64 = ctx.r11.s64 + 31104;
	// lwz r11,31116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31116);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fba10
	if (!ctx.cr0.eq) goto loc_828FBA10;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31116, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FBA10;
	sub_8289D980(ctx, base);
loc_828FBA10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FBA28"))) PPC_WEAK_FUNC(sub_828FBA28);
PPC_FUNC_IMPL(__imp__sub_828FBA28) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31120
	ctx.r31.s64 = ctx.r11.s64 + 31120;
	// lwz r11,31132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31132);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fba60
	if (!ctx.cr0.eq) goto loc_828FBA60;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31132, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FBA60;
	sub_8289D980(ctx, base);
loc_828FBA60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FBA78"))) PPC_WEAK_FUNC(sub_828FBA78);
PPC_FUNC_IMPL(__imp__sub_828FBA78) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31136
	ctx.r31.s64 = ctx.r11.s64 + 31136;
	// lwz r11,31148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31148);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fbab0
	if (!ctx.cr0.eq) goto loc_828FBAB0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31148, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FBAB0;
	sub_8289D980(ctx, base);
loc_828FBAB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FBAC8"))) PPC_WEAK_FUNC(sub_828FBAC8);
PPC_FUNC_IMPL(__imp__sub_828FBAC8) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31152
	ctx.r31.s64 = ctx.r11.s64 + 31152;
	// lwz r11,31164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31164);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fbb00
	if (!ctx.cr0.eq) goto loc_828FBB00;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31164, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FBB00;
	sub_8289D980(ctx, base);
loc_828FBB00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FBB18"))) PPC_WEAK_FUNC(sub_828FBB18);
PPC_FUNC_IMPL(__imp__sub_828FBB18) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31168
	ctx.r31.s64 = ctx.r11.s64 + 31168;
	// lwz r11,31180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31180);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fbb50
	if (!ctx.cr0.eq) goto loc_828FBB50;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31180, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FBB50;
	sub_8289D980(ctx, base);
loc_828FBB50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FBB68"))) PPC_WEAK_FUNC(sub_828FBB68);
PPC_FUNC_IMPL(__imp__sub_828FBB68) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31184
	ctx.r31.s64 = ctx.r11.s64 + 31184;
	// lwz r11,31196(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31196);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fbba0
	if (!ctx.cr0.eq) goto loc_828FBBA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31196, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FBBA0;
	sub_8289D980(ctx, base);
loc_828FBBA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FBBB8"))) PPC_WEAK_FUNC(sub_828FBBB8);
PPC_FUNC_IMPL(__imp__sub_828FBBB8) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31200
	ctx.r31.s64 = ctx.r11.s64 + 31200;
	// lwz r11,31212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31212);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fbbf0
	if (!ctx.cr0.eq) goto loc_828FBBF0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31212, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FBBF0;
	sub_8289D980(ctx, base);
loc_828FBBF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FBC08"))) PPC_WEAK_FUNC(sub_828FBC08);
PPC_FUNC_IMPL(__imp__sub_828FBC08) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31216
	ctx.r31.s64 = ctx.r11.s64 + 31216;
	// lwz r11,31228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31228);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fbc40
	if (!ctx.cr0.eq) goto loc_828FBC40;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31228, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FBC40;
	sub_8289D980(ctx, base);
loc_828FBC40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FBC58"))) PPC_WEAK_FUNC(sub_828FBC58);
PPC_FUNC_IMPL(__imp__sub_828FBC58) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31232
	ctx.r31.s64 = ctx.r11.s64 + 31232;
	// lwz r11,31244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31244);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fbc90
	if (!ctx.cr0.eq) goto loc_828FBC90;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31244, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FBC90;
	sub_8289D980(ctx, base);
loc_828FBC90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FBCA8"))) PPC_WEAK_FUNC(sub_828FBCA8);
PPC_FUNC_IMPL(__imp__sub_828FBCA8) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31248
	ctx.r31.s64 = ctx.r11.s64 + 31248;
	// lwz r11,31260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31260);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fbce0
	if (!ctx.cr0.eq) goto loc_828FBCE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31260, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FBCE0;
	sub_8289D980(ctx, base);
loc_828FBCE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FBCF8"))) PPC_WEAK_FUNC(sub_828FBCF8);
PPC_FUNC_IMPL(__imp__sub_828FBCF8) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31264
	ctx.r31.s64 = ctx.r11.s64 + 31264;
	// lwz r11,31276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31276);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fbd30
	if (!ctx.cr0.eq) goto loc_828FBD30;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31276, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FBD30;
	sub_8289D980(ctx, base);
loc_828FBD30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FBD48"))) PPC_WEAK_FUNC(sub_828FBD48);
PPC_FUNC_IMPL(__imp__sub_828FBD48) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31280
	ctx.r31.s64 = ctx.r11.s64 + 31280;
	// lwz r11,31292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31292);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fbd80
	if (!ctx.cr0.eq) goto loc_828FBD80;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31292, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FBD80;
	sub_8289D980(ctx, base);
loc_828FBD80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FBD98"))) PPC_WEAK_FUNC(sub_828FBD98);
PPC_FUNC_IMPL(__imp__sub_828FBD98) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r31,r11,31296
	ctx.r31.s64 = ctx.r11.s64 + 31296;
	// lwz r11,31308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31308);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828fbdd0
	if (!ctx.cr0.eq) goto loc_828FBDD0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31308, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x828FBDD0;
	sub_8289D980(ctx, base);
loc_828FBDD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FBDE8"))) PPC_WEAK_FUNC(sub_828FBDE8);
PPC_FUNC_IMPL(__imp__sub_828FBDE8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6852
	ctx.r11.s64 = ctx.r11.s64 + -6852;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FBE14;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fbe24
	if (ctx.cr0.eq) goto loc_828FBE24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FBE24;
	sub_823FD208(ctx, base);
loc_828FBE24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FBE40"))) PPC_WEAK_FUNC(sub_828FBE40);
PPC_FUNC_IMPL(__imp__sub_828FBE40) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e53a38
	ctx.lr = 0x828FBE60;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x828FBE68;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r5,r11,-5596
	ctx.r5.s64 = ctx.r11.s64 + -5596;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FBE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FBEA0"))) PPC_WEAK_FUNC(sub_828FBEA0);
PPC_FUNC_IMPL(__imp__sub_828FBEA0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6732
	ctx.r11.s64 = ctx.r11.s64 + -6732;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FBECC;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fbedc
	if (ctx.cr0.eq) goto loc_828FBEDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FBEDC;
	sub_823FD208(ctx, base);
loc_828FBEDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FBEF8"))) PPC_WEAK_FUNC(sub_828FBEF8);
PPC_FUNC_IMPL(__imp__sub_828FBEF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e53a38
	ctx.lr = 0x828FBF18;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x828FBF20;
	sub_82C01030(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r5,r11,11984
	ctx.r5.s64 = ctx.r11.s64 + 11984;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FBF3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FBF58"))) PPC_WEAK_FUNC(sub_828FBF58);
PPC_FUNC_IMPL(__imp__sub_828FBF58) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6672
	ctx.r11.s64 = ctx.r11.s64 + -6672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FBF84;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fbf94
	if (ctx.cr0.eq) goto loc_828FBF94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FBF94;
	sub_823FD208(ctx, base);
loc_828FBF94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FBFB0"))) PPC_WEAK_FUNC(sub_828FBFB0);
PPC_FUNC_IMPL(__imp__sub_828FBFB0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e53a38
	ctx.lr = 0x828FBFD0;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x828FBFD8;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r5,r11,-5584
	ctx.r5.s64 = ctx.r11.s64 + -5584;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FBFF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC010"))) PPC_WEAK_FUNC(sub_828FC010);
PPC_FUNC_IMPL(__imp__sub_828FC010) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6612
	ctx.r11.s64 = ctx.r11.s64 + -6612;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FC03C;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fc04c
	if (ctx.cr0.eq) goto loc_828FC04C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FC04C;
	sub_823FD208(ctx, base);
loc_828FC04C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC068"))) PPC_WEAK_FUNC(sub_828FC068);
PPC_FUNC_IMPL(__imp__sub_828FC068) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6492
	ctx.r11.s64 = ctx.r11.s64 + -6492;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FC094;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fc0a4
	if (ctx.cr0.eq) goto loc_828FC0A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FC0A4;
	sub_823FD208(ctx, base);
loc_828FC0A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC0C0"))) PPC_WEAK_FUNC(sub_828FC0C0);
PPC_FUNC_IMPL(__imp__sub_828FC0C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e53a38
	ctx.lr = 0x828FC0E0;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x828FC0E8;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r5,r11,-5564
	ctx.r5.s64 = ctx.r11.s64 + -5564;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FC104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x828FC10C;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// addi r5,r11,-5576
	ctx.r5.s64 = ctx.r11.s64 + -5576;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FC128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC140"))) PPC_WEAK_FUNC(sub_828FC140);
PPC_FUNC_IMPL(__imp__sub_828FC140) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e53a38
	ctx.lr = 0x828FC160;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x828FC168;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r5,r11,-21860
	ctx.r5.s64 = ctx.r11.s64 + -21860;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FC184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC1A0"))) PPC_WEAK_FUNC(sub_828FC1A0);
PPC_FUNC_IMPL(__imp__sub_828FC1A0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FC1A8"))) PPC_WEAK_FUNC(sub_828FC1A8);
PPC_FUNC_IMPL(__imp__sub_828FC1A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e53a38
	ctx.lr = 0x828FC1C8;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x828FC1D0;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r5,r11,-5548
	ctx.r5.s64 = ctx.r11.s64 + -5548;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FC1F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// addi r5,r11,17944
	ctx.r5.s64 = ctx.r11.s64 + 17944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FC210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC228"))) PPC_WEAK_FUNC(sub_828FC228);
PPC_FUNC_IMPL(__imp__sub_828FC228) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6432
	ctx.r11.s64 = ctx.r11.s64 + -6432;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FC254;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fc264
	if (ctx.cr0.eq) goto loc_828FC264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FC264;
	sub_823FD208(ctx, base);
loc_828FC264:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC280"))) PPC_WEAK_FUNC(sub_828FC280);
PPC_FUNC_IMPL(__imp__sub_828FC280) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6360
	ctx.r11.s64 = ctx.r11.s64 + -6360;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FC2AC;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fc2bc
	if (ctx.cr0.eq) goto loc_828FC2BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FC2BC;
	sub_823FD208(ctx, base);
loc_828FC2BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC2D8"))) PPC_WEAK_FUNC(sub_828FC2D8);
PPC_FUNC_IMPL(__imp__sub_828FC2D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82908298
	ctx.lr = 0x828FC2F0;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-5536
	ctx.r11.s64 = ctx.r11.s64 + -5536;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,11984
	ctx.r5.s64 = ctx.r10.s64 + 11984;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82e50e38
	ctx.lr = 0x828FC314;
	sub_82E50E38(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,11928
	ctx.r11.s64 = ctx.r11.s64 + 11928;
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828FC340"))) PPC_WEAK_FUNC(sub_828FC340);
PPC_FUNC_IMPL(__imp__sub_828FC340) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-5536
	ctx.r11.s64 = ctx.r11.s64 + -5536;
	// addi r10,r10,11928
	ctx.r10.s64 = ctx.r10.s64 + 11928;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x82e50e70
	ctx.lr = 0x828FC374;
	sub_82E50E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829082e8
	ctx.lr = 0x828FC37C;
	sub_829082E8(ctx, base);
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

__attribute__((alias("__imp__sub_828FC390"))) PPC_WEAK_FUNC(sub_828FC390);
PPC_FUNC_IMPL(__imp__sub_828FC390) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82908298
	ctx.lr = 0x828FC3A8;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,-5476
	ctx.r11.s64 = ctx.r11.s64 + -5476;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e51260
	ctx.lr = 0x828FC3C8;
	sub_82E51260(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-5640
	ctx.r11.s64 = ctx.r11.s64 + -5640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stb r10,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_828FC3F8"))) PPC_WEAK_FUNC(sub_828FC3F8);
PPC_FUNC_IMPL(__imp__sub_828FC3F8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-5476
	ctx.r11.s64 = ctx.r11.s64 + -5476;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829082e8
	ctx.lr = 0x828FC430;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fc440
	if (ctx.cr0.eq) goto loc_828FC440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FC440;
	sub_823FD208(ctx, base);
loc_828FC440:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC460"))) PPC_WEAK_FUNC(sub_828FC460);
PPC_FUNC_IMPL(__imp__sub_828FC460) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e53a38
	ctx.lr = 0x828FC480;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x828FC488;
	sub_82C01030(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// addi r5,r11,11984
	ctx.r5.s64 = ctx.r11.s64 + 11984;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FC4A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC4C0"))) PPC_WEAK_FUNC(sub_828FC4C0);
PPC_FUNC_IMPL(__imp__sub_828FC4C0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6300
	ctx.r11.s64 = ctx.r11.s64 + -6300;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FC4EC;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fc4fc
	if (ctx.cr0.eq) goto loc_828FC4FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FC4FC;
	sub_823FD208(ctx, base);
loc_828FC4FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC518"))) PPC_WEAK_FUNC(sub_828FC518);
PPC_FUNC_IMPL(__imp__sub_828FC518) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6240
	ctx.r11.s64 = ctx.r11.s64 + -6240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FC544;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fc554
	if (ctx.cr0.eq) goto loc_828FC554;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FC554;
	sub_823FD208(ctx, base);
loc_828FC554:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC570"))) PPC_WEAK_FUNC(sub_828FC570);
PPC_FUNC_IMPL(__imp__sub_828FC570) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82908298
	ctx.lr = 0x828FC588;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,-5416
	ctx.r11.s64 = ctx.r11.s64 + -5416;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e51260
	ctx.lr = 0x828FC5A8;
	sub_82E51260(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-5624
	ctx.r11.s64 = ctx.r11.s64 + -5624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stb r10,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_828FC5D8"))) PPC_WEAK_FUNC(sub_828FC5D8);
PPC_FUNC_IMPL(__imp__sub_828FC5D8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-5416
	ctx.r11.s64 = ctx.r11.s64 + -5416;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829082e8
	ctx.lr = 0x828FC610;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fc620
	if (ctx.cr0.eq) goto loc_828FC620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FC620;
	sub_823FD208(ctx, base);
loc_828FC620:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC640"))) PPC_WEAK_FUNC(sub_828FC640);
PPC_FUNC_IMPL(__imp__sub_828FC640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828FC648;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82908298
	ctx.lr = 0x828FC654;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-5336
	ctx.r11.s64 = ctx.r11.s64 + -5336;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,11984
	ctx.r5.s64 = ctx.r10.s64 + 11984;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82e50e38
	ctx.lr = 0x828FC678;
	sub_82E50E38(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,11928
	ctx.r29.s64 = ctx.r11.s64 + 11928;
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-5348
	ctx.r5.s64 = ctx.r11.s64 + -5348;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82e50e38
	ctx.lr = 0x828FC6A4;
	sub_82E50E38(ctx, base);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-5360
	ctx.r5.s64 = ctx.r11.s64 + -5360;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82e50e38
	ctx.lr = 0x828FC6C4;
	sub_82E50E38(ctx, base);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stb r30,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r30.u8);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e51260
	ctx.lr = 0x828FC6E0;
	sub_82E51260(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-5608
	ctx.r11.s64 = ctx.r11.s64 + -5608;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FC6F8"))) PPC_WEAK_FUNC(sub_828FC6F8);
PPC_FUNC_IMPL(__imp__sub_828FC6F8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r11,-5336
	ctx.r11.s64 = ctx.r11.s64 + -5336;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// addi r30,r9,11928
	ctx.r30.s64 = ctx.r9.s64 + 11928;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// bl 0x82e50e70
	ctx.lr = 0x828FC73C;
	sub_82E50E70(ctx, base);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82e50e70
	ctx.lr = 0x828FC748;
	sub_82E50E70(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e50e70
	ctx.lr = 0x828FC754;
	sub_82E50E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829082e8
	ctx.lr = 0x828FC75C;
	sub_829082E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC778"))) PPC_WEAK_FUNC(sub_828FC778);
PPC_FUNC_IMPL(__imp__sub_828FC778) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6180
	ctx.r11.s64 = ctx.r11.s64 + -6180;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FC7A4;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fc7b4
	if (ctx.cr0.eq) goto loc_828FC7B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FC7B4;
	sub_823FD208(ctx, base);
loc_828FC7B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC7D0"))) PPC_WEAK_FUNC(sub_828FC7D0);
PPC_FUNC_IMPL(__imp__sub_828FC7D0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6120
	ctx.r11.s64 = ctx.r11.s64 + -6120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FC7FC;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fc80c
	if (ctx.cr0.eq) goto loc_828FC80C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FC80C;
	sub_823FD208(ctx, base);
loc_828FC80C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC828"))) PPC_WEAK_FUNC(sub_828FC828);
PPC_FUNC_IMPL(__imp__sub_828FC828) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6060
	ctx.r11.s64 = ctx.r11.s64 + -6060;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FC854;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fc864
	if (ctx.cr0.eq) goto loc_828FC864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FC864;
	sub_823FD208(ctx, base);
loc_828FC864:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC880"))) PPC_WEAK_FUNC(sub_828FC880);
PPC_FUNC_IMPL(__imp__sub_828FC880) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6000
	ctx.r11.s64 = ctx.r11.s64 + -6000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FC8AC;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fc8bc
	if (ctx.cr0.eq) goto loc_828FC8BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FC8BC;
	sub_823FD208(ctx, base);
loc_828FC8BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC8D8"))) PPC_WEAK_FUNC(sub_828FC8D8);
PPC_FUNC_IMPL(__imp__sub_828FC8D8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5940
	ctx.r11.s64 = ctx.r11.s64 + -5940;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FC904;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fc914
	if (ctx.cr0.eq) goto loc_828FC914;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FC914;
	sub_823FD208(ctx, base);
loc_828FC914:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC930"))) PPC_WEAK_FUNC(sub_828FC930);
PPC_FUNC_IMPL(__imp__sub_828FC930) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5880
	ctx.r11.s64 = ctx.r11.s64 + -5880;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FC95C;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fc96c
	if (ctx.cr0.eq) goto loc_828FC96C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FC96C;
	sub_823FD208(ctx, base);
loc_828FC96C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FC988"))) PPC_WEAK_FUNC(sub_828FC988);
PPC_FUNC_IMPL(__imp__sub_828FC988) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82908298
	ctx.lr = 0x828FC9A0;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-5276
	ctx.r11.s64 = ctx.r11.s64 + -5276;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,-6792
	ctx.r5.s64 = ctx.r10.s64 + -6792;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82e50e38
	ctx.lr = 0x828FC9C4;
	sub_82E50E38(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,11928
	ctx.r11.s64 = ctx.r11.s64 + 11928;
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828FC9F0"))) PPC_WEAK_FUNC(sub_828FC9F0);
PPC_FUNC_IMPL(__imp__sub_828FC9F0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-5276
	ctx.r11.s64 = ctx.r11.s64 + -5276;
	// addi r10,r10,11928
	ctx.r10.s64 = ctx.r10.s64 + 11928;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x82e50e70
	ctx.lr = 0x828FCA24;
	sub_82E50E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829082e8
	ctx.lr = 0x828FCA2C;
	sub_829082E8(ctx, base);
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

__attribute__((alias("__imp__sub_828FCA40"))) PPC_WEAK_FUNC(sub_828FCA40);
PPC_FUNC_IMPL(__imp__sub_828FCA40) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5820
	ctx.r11.s64 = ctx.r11.s64 + -5820;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FCA6C;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fca7c
	if (ctx.cr0.eq) goto loc_828FCA7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FCA7C;
	sub_823FD208(ctx, base);
loc_828FCA7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FCA98"))) PPC_WEAK_FUNC(sub_828FCA98);
PPC_FUNC_IMPL(__imp__sub_828FCA98) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e53a38
	ctx.lr = 0x828FCAB8;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x828FCAC0;
	sub_82C01030(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r5,r11,-6792
	ctx.r5.s64 = ctx.r11.s64 + -6792;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FCADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FCAF8"))) PPC_WEAK_FUNC(sub_828FCAF8);
PPC_FUNC_IMPL(__imp__sub_828FCAF8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5760
	ctx.r11.s64 = ctx.r11.s64 + -5760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FCB24;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fcb34
	if (ctx.cr0.eq) goto loc_828FCB34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FCB34;
	sub_823FD208(ctx, base);
loc_828FCB34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FCB50"))) PPC_WEAK_FUNC(sub_828FCB50);
PPC_FUNC_IMPL(__imp__sub_828FCB50) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e53a38
	ctx.lr = 0x828FCB70;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x828FCB78;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r5,r11,-5188
	ctx.r5.s64 = ctx.r11.s64 + -5188;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FCB94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x828FCB9C;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,33
	ctx.r4.s64 = ctx.r31.s64 + 33;
	// addi r5,r11,-5204
	ctx.r5.s64 = ctx.r11.s64 + -5204;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FCBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x828FCBC0;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r31,34
	ctx.r4.s64 = ctx.r31.s64 + 34;
	// addi r5,r11,-5220
	ctx.r5.s64 = ctx.r11.s64 + -5220;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FCBDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FCBF8"))) PPC_WEAK_FUNC(sub_828FCBF8);
PPC_FUNC_IMPL(__imp__sub_828FCBF8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5700
	ctx.r11.s64 = ctx.r11.s64 + -5700;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x828FCC24;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fcc34
	if (ctx.cr0.eq) goto loc_828FCC34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FCC34;
	sub_823FD208(ctx, base);
loc_828FCC34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FCC50"))) PPC_WEAK_FUNC(sub_828FCC50);
PPC_FUNC_IMPL(__imp__sub_828FCC50) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fc1a0
	ctx.lr = 0x828FCC68;
	sub_828FC1A0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x828FCC78;
	sub_8247FC10(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r11,1145(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1145, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_828FCC98"))) PPC_WEAK_FUNC(sub_828FCC98);
PPC_FUNC_IMPL(__imp__sub_828FCC98) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FCCB4;
	sub_830B2320(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,-4508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4508);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fccdc
	if (ctx.cr6.eq) goto loc_828FCCDC;
	// lbz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// bl 0x825f4ae8
	ctx.lr = 0x828FCCDC;
	sub_825F4AE8(ctx, base);
loc_828FCCDC:
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

__attribute__((alias("__imp__sub_828FCCF0"))) PPC_WEAK_FUNC(sub_828FCCF0);
PPC_FUNC_IMPL(__imp__sub_828FCCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828FCCF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// addi r11,r11,-6552
	ctx.r11.s64 = ctx.r11.s64 + -6552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r11,30609(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30609);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fcd78
	if (ctx.cr0.eq) goto loc_828FCD78;
	// bl 0x82577ad8
	ctx.lr = 0x828FCD20;
	sub_82577AD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FCD30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FCD40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,-26400(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26400);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FCD5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mulli r11,r11,5648
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(5648));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82bfd250
	ctx.lr = 0x828FCD70;
	sub_82BFD250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,30609(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30609, ctx.r11.u8);
loc_828FCD78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829082e8
	ctx.lr = 0x828FCD80;
	sub_829082E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FCD88"))) PPC_WEAK_FUNC(sub_828FCD88);
PPC_FUNC_IMPL(__imp__sub_828FCD88) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FCDA4;
	sub_830B2320(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x828FCDA8;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4468);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fce10
	if (ctx.cr6.eq) goto loc_828FCE10;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// bl 0x828af388
	ctx.lr = 0x828FCDCC;
	sub_828AF388(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fce10
	if (ctx.cr0.eq) goto loc_828FCE10;
	// lbz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// beq 0x828fcdf8
	if (ctx.cr0.eq) goto loc_828FCDF8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828fce10
	if (!ctx.cr0.eq) goto loc_828FCE10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// b 0x828fce08
	goto loc_828FCE08;
loc_828FCDF8:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fce10
	if (ctx.cr0.eq) goto loc_828FCE10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_828FCE08:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FCE10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FCE10:
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

__attribute__((alias("__imp__sub_828FCE28"))) PPC_WEAK_FUNC(sub_828FCE28);
PPC_FUNC_IMPL(__imp__sub_828FCE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FCE3C;
	sub_830B2320(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x828FCE40;
	sub_825F6FB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FCE50"))) PPC_WEAK_FUNC(sub_828FCE50);
PPC_FUNC_IMPL(__imp__sub_828FCE50) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FCE7C;
	sub_830B2320(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x828FCE80;
	sub_825F6FB0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,19096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19096);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fcec8
	if (ctx.cr6.eq) goto loc_828FCEC8;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x828fceb0
	if (ctx.cr0.eq) goto loc_828FCEB0;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// b 0x828fcec0
	goto loc_828FCEC0;
loc_828FCEB0:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x828fcec8
	if (!ctx.cr6.eq) goto loc_828FCEC8;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
loc_828FCEC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e51010
	ctx.lr = 0x828FCEC8;
	sub_82E51010(ctx, base);
loc_828FCEC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FCEE0"))) PPC_WEAK_FUNC(sub_828FCEE0);
PPC_FUNC_IMPL(__imp__sub_828FCEE0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828fc340
	ctx.lr = 0x828FCF00;
	sub_828FC340(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fcf10
	if (ctx.cr0.eq) goto loc_828FCF10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FCF10;
	sub_823FD208(ctx, base);
loc_828FCF10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FCF30"))) PPC_WEAK_FUNC(sub_828FCF30);
PPC_FUNC_IMPL(__imp__sub_828FCF30) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FCF4C;
	sub_830B2320(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lbz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// lwz r3,9800(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9800);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FCF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_828FCF80"))) PPC_WEAK_FUNC(sub_828FCF80);
PPC_FUNC_IMPL(__imp__sub_828FCF80) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FCFA4;
	sub_830B2320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e512a0
	ctx.lr = 0x828FCFB0;
	sub_82E512A0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fcfe0
	if (ctx.cr0.eq) goto loc_828FCFE0;
	// bl 0x8252a388
	ctx.lr = 0x828FCFC8;
	sub_8252A388(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fcfe0
	if (ctx.cr0.eq) goto loc_828FCFE0;
	// lbz r11,7012(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7012);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lbz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// bl 0x8257e3d8
	ctx.lr = 0x828FCFE0;
	sub_8257E3D8(ctx, base);
loc_828FCFE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FCFF8"))) PPC_WEAK_FUNC(sub_828FCFF8);
PPC_FUNC_IMPL(__imp__sub_828FCFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828FD000;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82e512a0
	ctx.lr = 0x828FD018;
	sub_82E512A0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fd040
	if (ctx.cr0.eq) goto loc_828FD040;
	// bl 0x8252a388
	ctx.lr = 0x828FD030;
	sub_8252A388(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fd040
	if (ctx.cr0.eq) goto loc_828FD040;
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x8257e3d8
	ctx.lr = 0x828FD040;
	sub_8257E3D8(ctx, base);
loc_828FD040:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FD04C;
	sub_830B2320(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FD058"))) PPC_WEAK_FUNC(sub_828FD058);
PPC_FUNC_IMPL(__imp__sub_828FD058) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fc1a0
	ctx.lr = 0x828FD074;
	sub_828FC1A0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,-3988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3988);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828fd0c0
	if (ctx.cr6.eq) goto loc_828FD0C0;
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fd0b4
	if (ctx.cr0.eq) goto loc_828FD0B4;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247d318
	ctx.lr = 0x828FD0AC;
	sub_8247D318(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828fd0c0
	if (!ctx.cr0.eq) goto loc_828FD0C0;
loc_828FD0B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// bl 0x82611118
	ctx.lr = 0x828FD0C0;
	sub_82611118(ctx, base);
loc_828FD0C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FD0D8"))) PPC_WEAK_FUNC(sub_828FD0D8);
PPC_FUNC_IMPL(__imp__sub_828FD0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FD0EC;
	sub_830B2320(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-4084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// stb r10,3585(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3585, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FD110"))) PPC_WEAK_FUNC(sub_828FD110);
PPC_FUNC_IMPL(__imp__sub_828FD110) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FD134;
	sub_830B2320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e512a0
	ctx.lr = 0x828FD140;
	sub_82E512A0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fd170
	if (ctx.cr0.eq) goto loc_828FD170;
	// bl 0x8252a388
	ctx.lr = 0x828FD158;
	sub_8252A388(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fd170
	if (ctx.cr0.eq) goto loc_828FD170;
	// lbz r11,7013(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7013);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lbz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// bl 0x8257e438
	ctx.lr = 0x828FD170;
	sub_8257E438(ctx, base);
loc_828FD170:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FD188"))) PPC_WEAK_FUNC(sub_828FD188);
PPC_FUNC_IMPL(__imp__sub_828FD188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828FD190;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82e512a0
	ctx.lr = 0x828FD1A8;
	sub_82E512A0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fd1d0
	if (ctx.cr0.eq) goto loc_828FD1D0;
	// bl 0x8252a388
	ctx.lr = 0x828FD1C0;
	sub_8252A388(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fd1d0
	if (ctx.cr0.eq) goto loc_828FD1D0;
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x8257e438
	ctx.lr = 0x828FD1D0;
	sub_8257E438(ctx, base);
loc_828FD1D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FD1DC;
	sub_830B2320(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FD1E8"))) PPC_WEAK_FUNC(sub_828FD1E8);
PPC_FUNC_IMPL(__imp__sub_828FD1E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828fc6f8
	ctx.lr = 0x828FD208;
	sub_828FC6F8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fd218
	if (ctx.cr0.eq) goto loc_828FD218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FD218;
	sub_823FD208(ctx, base);
loc_828FD218:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FD238"))) PPC_WEAK_FUNC(sub_828FD238);
PPC_FUNC_IMPL(__imp__sub_828FD238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FD258;
	sub_830B2320(ctx, base);
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fd274
	if (ctx.cr0.eq) goto loc_828FD274;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-4060(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4060);
	// b 0x828fd29c
	goto loc_828FD29C;
loc_828FD274:
	// lis r30,-31954
	ctx.r30.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x828FD284;
	sub_8247FC10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82486de0
	ctx.lr = 0x828FD294;
	sub_82486DE0(ctx, base);
	// lwz r3,-4060(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4060);
	// li r5,1
	ctx.r5.s64 = 1;
loc_828FD29C:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lwz r4,-29216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29216);
	// bl 0x824806e0
	ctx.lr = 0x828FD2A8;
	sub_824806E0(ctx, base);
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,-31268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31268, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FD2E0"))) PPC_WEAK_FUNC(sub_828FD2E0);
PPC_FUNC_IMPL(__imp__sub_828FD2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82611b80
	ctx.lr = 0x828FD2FC;
	sub_82611B80(ctx, base);
	// lis r30,-31954
	ctx.r30.s64 = -2094137344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4060(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4060);
	// bl 0x8247d388
	ctx.lr = 0x828FD30C;
	sub_8247D388(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fd32c
	if (ctx.cr0.eq) goto loc_828FD32C;
	// lwz r3,-4060(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4060);
	// bl 0x8247cc88
	ctx.lr = 0x828FD31C;
	sub_8247CC88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_828FD32C:
	// lwz r3,-4060(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4060);
	// bl 0x8247d388
	ctx.lr = 0x828FD334;
	sub_8247D388(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828fd354
	if (!ctx.cr0.eq) goto loc_828FD354;
	// lwz r3,-4060(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4060);
	// bl 0x8247cc60
	ctx.lr = 0x828FD344;
	sub_8247CC60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_828FD354:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FD370"))) PPC_WEAK_FUNC(sub_828FD370);
PPC_FUNC_IMPL(__imp__sub_828FD370) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82611b80
	ctx.lr = 0x828FD38C;
	sub_82611B80(ctx, base);
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fd3b8
	if (ctx.cr0.eq) goto loc_828FD3B8;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x828FD3A8;
	sub_8247FC10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82486de0
	ctx.lr = 0x828FD3B8;
	sub_82486DE0(ctx, base);
loc_828FD3B8:
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

__attribute__((alias("__imp__sub_828FD3D0"))) PPC_WEAK_FUNC(sub_828FD3D0);
PPC_FUNC_IMPL(__imp__sub_828FD3D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fc1a0
	ctx.lr = 0x828FD3E8;
	sub_828FC1A0(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,9800(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9800);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq 0x828fd408
	if (ctx.cr0.eq) goto loc_828FD408;
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x828fd40c
	goto loc_828FD40C;
loc_828FD408:
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
loc_828FD40C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FD414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,32636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32636);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fd42c
	if (ctx.cr0.eq) goto loc_828FD42C;
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// stb r10,160(r11)
	PPC_STORE_U8(ctx.r11.u32 + 160, ctx.r10.u8);
loc_828FD42C:
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

__attribute__((alias("__imp__sub_828FD440"))) PPC_WEAK_FUNC(sub_828FD440);
PPC_FUNC_IMPL(__imp__sub_828FD440) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fc1a0
	ctx.lr = 0x828FD458;
	sub_828FC1A0(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,9800(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9800);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq 0x828fd478
	if (ctx.cr0.eq) goto loc_828FD478;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// b 0x828fd47c
	goto loc_828FD47C;
loc_828FD478:
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
loc_828FD47C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FD484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_828FD498"))) PPC_WEAK_FUNC(sub_828FD498);
PPC_FUNC_IMPL(__imp__sub_828FD498) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fc1a0
	ctx.lr = 0x828FD4B0;
	sub_828FC1A0(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,9800(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9800);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq 0x828fd4d0
	if (ctx.cr0.eq) goto loc_828FD4D0;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// b 0x828fd4d4
	goto loc_828FD4D4;
loc_828FD4D0:
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
loc_828FD4D4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FD4DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,32636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32636);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fd4f4
	if (ctx.cr0.eq) goto loc_828FD4F4;
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// stb r10,161(r11)
	PPC_STORE_U8(ctx.r11.u32 + 161, ctx.r10.u8);
loc_828FD4F4:
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

__attribute__((alias("__imp__sub_828FD508"))) PPC_WEAK_FUNC(sub_828FD508);
PPC_FUNC_IMPL(__imp__sub_828FD508) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FD528;
	sub_830B2320(ctx, base);
	// lis r30,-31932
	ctx.r30.s64 = -2092695552;
	// lwz r3,-26400(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26400);
	// bl 0x82bfc1b8
	ctx.lr = 0x828FD534;
	sub_82BFC1B8(ctx, base);
	// lwz r3,-26400(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26400);
	// lbz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// bl 0x82bfa610
	ctx.lr = 0x828FD540;
	sub_82BFA610(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x82d6add0
	ctx.lr = 0x828FD54C;
	sub_82D6ADD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fd55c
	if (ctx.cr0.eq) goto loc_828FD55C;
	// lbz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// bl 0x82519b88
	ctx.lr = 0x828FD55C;
	sub_82519B88(ctx, base);
loc_828FD55C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FD578"))) PPC_WEAK_FUNC(sub_828FD578);
PPC_FUNC_IMPL(__imp__sub_828FD578) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fc1a0
	ctx.lr = 0x828FD590;
	sub_828FC1A0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lbz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// lwz r11,-4464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4464);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x830a0530
	ctx.lr = 0x828FD5B4;
	sub_830A0530(ctx, base);
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

__attribute__((alias("__imp__sub_828FD5C8"))) PPC_WEAK_FUNC(sub_828FD5C8);
PPC_FUNC_IMPL(__imp__sub_828FD5C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828fc9f0
	ctx.lr = 0x828FD5E8;
	sub_828FC9F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fd5f8
	if (ctx.cr0.eq) goto loc_828FD5F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FD5F8;
	sub_823FD208(ctx, base);
loc_828FD5F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FD618"))) PPC_WEAK_FUNC(sub_828FD618);
PPC_FUNC_IMPL(__imp__sub_828FD618) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FD634;
	sub_830B2320(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x828FD638;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-3628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3628);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fd65c
	if (ctx.cr6.eq) goto loc_828FD65C;
	// lbz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// bl 0x82629bc8
	ctx.lr = 0x828FD65C;
	sub_82629BC8(ctx, base);
loc_828FD65C:
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

__attribute__((alias("__imp__sub_828FD670"))) PPC_WEAK_FUNC(sub_828FD670);
PPC_FUNC_IMPL(__imp__sub_828FD670) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fc1a0
	ctx.lr = 0x828FD688;
	sub_828FC1A0(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fd6c0
	if (ctx.cr0.eq) goto loc_828FD6C0;
	// bl 0x82530968
	ctx.lr = 0x828FD698;
	sub_82530968(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FD6B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,9792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9792);
	// bl 0x824b64c8
	ctx.lr = 0x828FD6BC;
	sub_824B64C8(ctx, base);
	// b 0x828fd6e8
	goto loc_828FD6E8;
loc_828FD6C0:
	// bl 0x82530968
	ctx.lr = 0x828FD6C4;
	sub_82530968(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FD6DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,9792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9792);
	// bl 0x824a5320
	ctx.lr = 0x828FD6E8;
	sub_824A5320(ctx, base);
loc_828FD6E8:
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

__attribute__((alias("__imp__sub_828FD700"))) PPC_WEAK_FUNC(sub_828FD700);
PPC_FUNC_IMPL(__imp__sub_828FD700) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FD71C;
	sub_830B2320(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lbz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// lwz r3,-31988(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31988);
	// bl 0x82ccb748
	ctx.lr = 0x828FD730;
	sub_82CCB748(ctx, base);
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

__attribute__((alias("__imp__sub_828FD748"))) PPC_WEAK_FUNC(sub_828FD748);
PPC_FUNC_IMPL(__imp__sub_828FD748) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FD768;
	sub_830B2320(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,-4456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4456);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828fd818
	if (ctx.cr6.eq) goto loc_828FD818;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// lbz r5,33(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// bl 0x82b4bac8
	ctx.lr = 0x828FD798;
	sub_82B4BAC8(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fd7c8
	if (ctx.cr0.eq) goto loc_828FD7C8;
	// lbz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fd7c8
	if (ctx.cr0.eq) goto loc_828FD7C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FD7C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FD7C8:
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fd7f8
	if (ctx.cr0.eq) goto loc_828FD7F8;
	// lbz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fd7f8
	if (ctx.cr0.eq) goto loc_828FD7F8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FD7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FD7F8:
	// lbz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fd818
	if (ctx.cr0.eq) goto loc_828FD818;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FD818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FD818:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FD830"))) PPC_WEAK_FUNC(sub_828FD830);
PPC_FUNC_IMPL(__imp__sub_828FD830) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FD84C;
	sub_830B2320(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,-4508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4508);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fd874
	if (ctx.cr6.eq) goto loc_828FD874;
	// lbz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// bl 0x825f4a90
	ctx.lr = 0x828FD874;
	sub_825F4A90(ctx, base);
loc_828FD874:
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

__attribute__((alias("__imp__sub_828FD888"))) PPC_WEAK_FUNC(sub_828FD888);
PPC_FUNC_IMPL(__imp__sub_828FD888) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FD8A0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-5168
	ctx.r11.s64 = ctx.r11.s64 + -5168;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb488
	ctx.lr = 0x828FD8B0;
	sub_828FB488(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FD8D8"))) PPC_WEAK_FUNC(sub_828FD8D8);
PPC_FUNC_IMPL(__imp__sub_828FD8D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FD8F0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-5156
	ctx.r11.s64 = ctx.r11.s64 + -5156;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb4d8
	ctx.lr = 0x828FD900;
	sub_828FB4D8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FD928"))) PPC_WEAK_FUNC(sub_828FD928);
PPC_FUNC_IMPL(__imp__sub_828FD928) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FD940;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-5144
	ctx.r11.s64 = ctx.r11.s64 + -5144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb528
	ctx.lr = 0x828FD950;
	sub_828FB528(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FD978"))) PPC_WEAK_FUNC(sub_828FD978);
PPC_FUNC_IMPL(__imp__sub_828FD978) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FD990;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-5132
	ctx.r11.s64 = ctx.r11.s64 + -5132;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb578
	ctx.lr = 0x828FD9A0;
	sub_828FB578(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FD9C8"))) PPC_WEAK_FUNC(sub_828FD9C8);
PPC_FUNC_IMPL(__imp__sub_828FD9C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FD9E0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-5120
	ctx.r11.s64 = ctx.r11.s64 + -5120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb5c8
	ctx.lr = 0x828FD9F0;
	sub_828FB5C8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDA18"))) PPC_WEAK_FUNC(sub_828FDA18);
PPC_FUNC_IMPL(__imp__sub_828FDA18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDA30;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-5108
	ctx.r11.s64 = ctx.r11.s64 + -5108;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb618
	ctx.lr = 0x828FDA40;
	sub_828FB618(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDA68"))) PPC_WEAK_FUNC(sub_828FDA68);
PPC_FUNC_IMPL(__imp__sub_828FDA68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDA80;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-5096
	ctx.r11.s64 = ctx.r11.s64 + -5096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb668
	ctx.lr = 0x828FDA90;
	sub_828FB668(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDAB8"))) PPC_WEAK_FUNC(sub_828FDAB8);
PPC_FUNC_IMPL(__imp__sub_828FDAB8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDAD0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-5084
	ctx.r11.s64 = ctx.r11.s64 + -5084;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb6b8
	ctx.lr = 0x828FDAE0;
	sub_828FB6B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDB08"))) PPC_WEAK_FUNC(sub_828FDB08);
PPC_FUNC_IMPL(__imp__sub_828FDB08) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDB20;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-5072
	ctx.r11.s64 = ctx.r11.s64 + -5072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb708
	ctx.lr = 0x828FDB30;
	sub_828FB708(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDB58"))) PPC_WEAK_FUNC(sub_828FDB58);
PPC_FUNC_IMPL(__imp__sub_828FDB58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDB70;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-5060
	ctx.r11.s64 = ctx.r11.s64 + -5060;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb758
	ctx.lr = 0x828FDB80;
	sub_828FB758(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDBA8"))) PPC_WEAK_FUNC(sub_828FDBA8);
PPC_FUNC_IMPL(__imp__sub_828FDBA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDBC0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-5048
	ctx.r11.s64 = ctx.r11.s64 + -5048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb7a8
	ctx.lr = 0x828FDBD0;
	sub_828FB7A8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDBF8"))) PPC_WEAK_FUNC(sub_828FDBF8);
PPC_FUNC_IMPL(__imp__sub_828FDBF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDC10;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-5036
	ctx.r11.s64 = ctx.r11.s64 + -5036;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb7f8
	ctx.lr = 0x828FDC20;
	sub_828FB7F8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDC48"))) PPC_WEAK_FUNC(sub_828FDC48);
PPC_FUNC_IMPL(__imp__sub_828FDC48) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDC60;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-5024
	ctx.r11.s64 = ctx.r11.s64 + -5024;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb848
	ctx.lr = 0x828FDC70;
	sub_828FB848(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDC98"))) PPC_WEAK_FUNC(sub_828FDC98);
PPC_FUNC_IMPL(__imp__sub_828FDC98) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDCB0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-5012
	ctx.r11.s64 = ctx.r11.s64 + -5012;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb898
	ctx.lr = 0x828FDCC0;
	sub_828FB898(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDCE8"))) PPC_WEAK_FUNC(sub_828FDCE8);
PPC_FUNC_IMPL(__imp__sub_828FDCE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDD00;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-5000
	ctx.r11.s64 = ctx.r11.s64 + -5000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb8e8
	ctx.lr = 0x828FDD10;
	sub_828FB8E8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDD38"))) PPC_WEAK_FUNC(sub_828FDD38);
PPC_FUNC_IMPL(__imp__sub_828FDD38) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDD50;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-4988
	ctx.r11.s64 = ctx.r11.s64 + -4988;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb938
	ctx.lr = 0x828FDD60;
	sub_828FB938(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDD88"))) PPC_WEAK_FUNC(sub_828FDD88);
PPC_FUNC_IMPL(__imp__sub_828FDD88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDDA0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-4976
	ctx.r11.s64 = ctx.r11.s64 + -4976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb988
	ctx.lr = 0x828FDDB0;
	sub_828FB988(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDDD8"))) PPC_WEAK_FUNC(sub_828FDDD8);
PPC_FUNC_IMPL(__imp__sub_828FDDD8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDDF0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-4964
	ctx.r11.s64 = ctx.r11.s64 + -4964;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fb9d8
	ctx.lr = 0x828FDE00;
	sub_828FB9D8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDE28"))) PPC_WEAK_FUNC(sub_828FDE28);
PPC_FUNC_IMPL(__imp__sub_828FDE28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDE40;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-4952
	ctx.r11.s64 = ctx.r11.s64 + -4952;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fba28
	ctx.lr = 0x828FDE50;
	sub_828FBA28(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDE78"))) PPC_WEAK_FUNC(sub_828FDE78);
PPC_FUNC_IMPL(__imp__sub_828FDE78) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDE90;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-4940
	ctx.r11.s64 = ctx.r11.s64 + -4940;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fba78
	ctx.lr = 0x828FDEA0;
	sub_828FBA78(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDEC8"))) PPC_WEAK_FUNC(sub_828FDEC8);
PPC_FUNC_IMPL(__imp__sub_828FDEC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDEE0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-4928
	ctx.r11.s64 = ctx.r11.s64 + -4928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fbac8
	ctx.lr = 0x828FDEF0;
	sub_828FBAC8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDF18"))) PPC_WEAK_FUNC(sub_828FDF18);
PPC_FUNC_IMPL(__imp__sub_828FDF18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDF30;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-4916
	ctx.r11.s64 = ctx.r11.s64 + -4916;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fbb18
	ctx.lr = 0x828FDF40;
	sub_828FBB18(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDF68"))) PPC_WEAK_FUNC(sub_828FDF68);
PPC_FUNC_IMPL(__imp__sub_828FDF68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDF80;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-4904
	ctx.r11.s64 = ctx.r11.s64 + -4904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fbb68
	ctx.lr = 0x828FDF90;
	sub_828FBB68(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FDFB8"))) PPC_WEAK_FUNC(sub_828FDFB8);
PPC_FUNC_IMPL(__imp__sub_828FDFB8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FDFD0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-4892
	ctx.r11.s64 = ctx.r11.s64 + -4892;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fbbb8
	ctx.lr = 0x828FDFE0;
	sub_828FBBB8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FE008"))) PPC_WEAK_FUNC(sub_828FE008);
PPC_FUNC_IMPL(__imp__sub_828FE008) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FE020;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-4880
	ctx.r11.s64 = ctx.r11.s64 + -4880;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fbc08
	ctx.lr = 0x828FE030;
	sub_828FBC08(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FE058"))) PPC_WEAK_FUNC(sub_828FE058);
PPC_FUNC_IMPL(__imp__sub_828FE058) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FE070;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-4868
	ctx.r11.s64 = ctx.r11.s64 + -4868;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fbc58
	ctx.lr = 0x828FE080;
	sub_828FBC58(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FE0A8"))) PPC_WEAK_FUNC(sub_828FE0A8);
PPC_FUNC_IMPL(__imp__sub_828FE0A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FE0C0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-4856
	ctx.r11.s64 = ctx.r11.s64 + -4856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fbca8
	ctx.lr = 0x828FE0D0;
	sub_828FBCA8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FE0F8"))) PPC_WEAK_FUNC(sub_828FE0F8);
PPC_FUNC_IMPL(__imp__sub_828FE0F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FE110;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-4844
	ctx.r11.s64 = ctx.r11.s64 + -4844;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fbcf8
	ctx.lr = 0x828FE120;
	sub_828FBCF8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FE148"))) PPC_WEAK_FUNC(sub_828FE148);
PPC_FUNC_IMPL(__imp__sub_828FE148) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FE160;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-4832
	ctx.r11.s64 = ctx.r11.s64 + -4832;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fbd48
	ctx.lr = 0x828FE170;
	sub_828FBD48(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FE198"))) PPC_WEAK_FUNC(sub_828FE198);
PPC_FUNC_IMPL(__imp__sub_828FE198) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e4de48
	ctx.lr = 0x828FE1B0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-4820
	ctx.r11.s64 = ctx.r11.s64 + -4820;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fbd98
	ctx.lr = 0x828FE1C0;
	sub_828FBD98(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FE1E8"))) PPC_WEAK_FUNC(sub_828FE1E8);
PPC_FUNC_IMPL(__imp__sub_828FE1E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb488
	ctx.lr = 0x828FE200;
	sub_828FB488(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe214
	if (ctx.cr6.eq) goto loc_828FE214;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE214:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE230"))) PPC_WEAK_FUNC(sub_828FE230);
PPC_FUNC_IMPL(__imp__sub_828FE230) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb4d8
	ctx.lr = 0x828FE248;
	sub_828FB4D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe25c
	if (ctx.cr6.eq) goto loc_828FE25C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE25C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE278"))) PPC_WEAK_FUNC(sub_828FE278);
PPC_FUNC_IMPL(__imp__sub_828FE278) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb528
	ctx.lr = 0x828FE290;
	sub_828FB528(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe2a4
	if (ctx.cr6.eq) goto loc_828FE2A4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE2A4:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE2C0"))) PPC_WEAK_FUNC(sub_828FE2C0);
PPC_FUNC_IMPL(__imp__sub_828FE2C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb578
	ctx.lr = 0x828FE2D8;
	sub_828FB578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe2ec
	if (ctx.cr6.eq) goto loc_828FE2EC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE2EC:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE308"))) PPC_WEAK_FUNC(sub_828FE308);
PPC_FUNC_IMPL(__imp__sub_828FE308) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb5c8
	ctx.lr = 0x828FE320;
	sub_828FB5C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe334
	if (ctx.cr6.eq) goto loc_828FE334;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE334:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE350"))) PPC_WEAK_FUNC(sub_828FE350);
PPC_FUNC_IMPL(__imp__sub_828FE350) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb618
	ctx.lr = 0x828FE368;
	sub_828FB618(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe37c
	if (ctx.cr6.eq) goto loc_828FE37C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE37C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE398"))) PPC_WEAK_FUNC(sub_828FE398);
PPC_FUNC_IMPL(__imp__sub_828FE398) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb668
	ctx.lr = 0x828FE3B0;
	sub_828FB668(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe3c4
	if (ctx.cr6.eq) goto loc_828FE3C4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE3C4:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE3E0"))) PPC_WEAK_FUNC(sub_828FE3E0);
PPC_FUNC_IMPL(__imp__sub_828FE3E0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb6b8
	ctx.lr = 0x828FE3F8;
	sub_828FB6B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe40c
	if (ctx.cr6.eq) goto loc_828FE40C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE40C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE428"))) PPC_WEAK_FUNC(sub_828FE428);
PPC_FUNC_IMPL(__imp__sub_828FE428) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb708
	ctx.lr = 0x828FE440;
	sub_828FB708(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe454
	if (ctx.cr6.eq) goto loc_828FE454;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE454:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE470"))) PPC_WEAK_FUNC(sub_828FE470);
PPC_FUNC_IMPL(__imp__sub_828FE470) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb758
	ctx.lr = 0x828FE488;
	sub_828FB758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe49c
	if (ctx.cr6.eq) goto loc_828FE49C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE49C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE4B8"))) PPC_WEAK_FUNC(sub_828FE4B8);
PPC_FUNC_IMPL(__imp__sub_828FE4B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb7a8
	ctx.lr = 0x828FE4D0;
	sub_828FB7A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe4e4
	if (ctx.cr6.eq) goto loc_828FE4E4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE4E4:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE500"))) PPC_WEAK_FUNC(sub_828FE500);
PPC_FUNC_IMPL(__imp__sub_828FE500) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb7f8
	ctx.lr = 0x828FE518;
	sub_828FB7F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe52c
	if (ctx.cr6.eq) goto loc_828FE52C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE52C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE548"))) PPC_WEAK_FUNC(sub_828FE548);
PPC_FUNC_IMPL(__imp__sub_828FE548) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb848
	ctx.lr = 0x828FE560;
	sub_828FB848(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe574
	if (ctx.cr6.eq) goto loc_828FE574;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE574:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE590"))) PPC_WEAK_FUNC(sub_828FE590);
PPC_FUNC_IMPL(__imp__sub_828FE590) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb898
	ctx.lr = 0x828FE5A8;
	sub_828FB898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe5bc
	if (ctx.cr6.eq) goto loc_828FE5BC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE5BC:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE5D8"))) PPC_WEAK_FUNC(sub_828FE5D8);
PPC_FUNC_IMPL(__imp__sub_828FE5D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb8e8
	ctx.lr = 0x828FE5F0;
	sub_828FB8E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe604
	if (ctx.cr6.eq) goto loc_828FE604;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE604:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE620"))) PPC_WEAK_FUNC(sub_828FE620);
PPC_FUNC_IMPL(__imp__sub_828FE620) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb938
	ctx.lr = 0x828FE638;
	sub_828FB938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe64c
	if (ctx.cr6.eq) goto loc_828FE64C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE64C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE668"))) PPC_WEAK_FUNC(sub_828FE668);
PPC_FUNC_IMPL(__imp__sub_828FE668) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb988
	ctx.lr = 0x828FE680;
	sub_828FB988(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe694
	if (ctx.cr6.eq) goto loc_828FE694;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE694:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE6B0"))) PPC_WEAK_FUNC(sub_828FE6B0);
PPC_FUNC_IMPL(__imp__sub_828FE6B0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fb9d8
	ctx.lr = 0x828FE6C8;
	sub_828FB9D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe6dc
	if (ctx.cr6.eq) goto loc_828FE6DC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE6DC:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE6F8"))) PPC_WEAK_FUNC(sub_828FE6F8);
PPC_FUNC_IMPL(__imp__sub_828FE6F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fba28
	ctx.lr = 0x828FE710;
	sub_828FBA28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe724
	if (ctx.cr6.eq) goto loc_828FE724;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE724:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE740"))) PPC_WEAK_FUNC(sub_828FE740);
PPC_FUNC_IMPL(__imp__sub_828FE740) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fba78
	ctx.lr = 0x828FE758;
	sub_828FBA78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe76c
	if (ctx.cr6.eq) goto loc_828FE76C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE76C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE788"))) PPC_WEAK_FUNC(sub_828FE788);
PPC_FUNC_IMPL(__imp__sub_828FE788) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fbac8
	ctx.lr = 0x828FE7A0;
	sub_828FBAC8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe7b4
	if (ctx.cr6.eq) goto loc_828FE7B4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE7B4:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE7D0"))) PPC_WEAK_FUNC(sub_828FE7D0);
PPC_FUNC_IMPL(__imp__sub_828FE7D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fbb18
	ctx.lr = 0x828FE7E8;
	sub_828FBB18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe7fc
	if (ctx.cr6.eq) goto loc_828FE7FC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE7FC:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE818"))) PPC_WEAK_FUNC(sub_828FE818);
PPC_FUNC_IMPL(__imp__sub_828FE818) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fbb68
	ctx.lr = 0x828FE830;
	sub_828FBB68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe844
	if (ctx.cr6.eq) goto loc_828FE844;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE844:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE860"))) PPC_WEAK_FUNC(sub_828FE860);
PPC_FUNC_IMPL(__imp__sub_828FE860) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fbbb8
	ctx.lr = 0x828FE878;
	sub_828FBBB8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe88c
	if (ctx.cr6.eq) goto loc_828FE88C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE88C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE8A8"))) PPC_WEAK_FUNC(sub_828FE8A8);
PPC_FUNC_IMPL(__imp__sub_828FE8A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fbc08
	ctx.lr = 0x828FE8C0;
	sub_828FBC08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe8d4
	if (ctx.cr6.eq) goto loc_828FE8D4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE8D4:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE8F0"))) PPC_WEAK_FUNC(sub_828FE8F0);
PPC_FUNC_IMPL(__imp__sub_828FE8F0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fbc58
	ctx.lr = 0x828FE908;
	sub_828FBC58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe91c
	if (ctx.cr6.eq) goto loc_828FE91C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE91C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE938"))) PPC_WEAK_FUNC(sub_828FE938);
PPC_FUNC_IMPL(__imp__sub_828FE938) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fbca8
	ctx.lr = 0x828FE950;
	sub_828FBCA8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe964
	if (ctx.cr6.eq) goto loc_828FE964;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE964:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE980"))) PPC_WEAK_FUNC(sub_828FE980);
PPC_FUNC_IMPL(__imp__sub_828FE980) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fbcf8
	ctx.lr = 0x828FE998;
	sub_828FBCF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe9ac
	if (ctx.cr6.eq) goto loc_828FE9AC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE9AC:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FE9C8"))) PPC_WEAK_FUNC(sub_828FE9C8);
PPC_FUNC_IMPL(__imp__sub_828FE9C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fbd48
	ctx.lr = 0x828FE9E0;
	sub_828FBD48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fe9f4
	if (ctx.cr6.eq) goto loc_828FE9F4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FE9F4:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FEA10"))) PPC_WEAK_FUNC(sub_828FEA10);
PPC_FUNC_IMPL(__imp__sub_828FEA10) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fbd98
	ctx.lr = 0x828FEA28;
	sub_828FBD98(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x828fea3c
	if (ctx.cr6.eq) goto loc_828FEA3C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_828FEA3C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_828FEA58"))) PPC_WEAK_FUNC(sub_828FEA58);
PPC_FUNC_IMPL(__imp__sub_828FEA58) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// addi r11,r11,-6792
	ctx.r11.s64 = ctx.r11.s64 + -6792;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r11,30608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30608);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fead4
	if (ctx.cr0.eq) goto loc_828FEAD4;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x828FEA9C;
	sub_8247FC10(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8248bae8
	ctx.lr = 0x828FEAA4;
	sub_8248BAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x828FEAB0;
	sub_824AFB20(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828feac4
	if (ctx.cr6.eq) goto loc_828FEAC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8249e570
	ctx.lr = 0x828FEAC4;
	sub_8249E570(ctx, base);
loc_828FEAC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,30608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30608, ctx.r11.u8);
	// bl 0x82de7330
	ctx.lr = 0x828FEAD4;
	sub_82DE7330(ctx, base);
loc_828FEAD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829082e8
	ctx.lr = 0x828FEADC;
	sub_829082E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FEAF8"))) PPC_WEAK_FUNC(sub_828FEAF8);
PPC_FUNC_IMPL(__imp__sub_828FEAF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fc1a0
	ctx.lr = 0x828FEB10;
	sub_828FC1A0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x828FEB20;
	sub_8247FC10(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8248bae8
	ctx.lr = 0x828FEB28;
	sub_8248BAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x828FEB34;
	sub_824AFB20(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828feb64
	if (ctx.cr0.eq) goto loc_828FEB64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828feb64
	if (ctx.cr6.eq) goto loc_828FEB64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8249e570
	ctx.lr = 0x828FEB54;
	sub_8249E570(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,30608(r10)
	PPC_STORE_U8(ctx.r10.u32 + 30608, ctx.r11.u8);
	// b 0x828feb84
	goto loc_828FEB84;
loc_828FEB64:
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// lbz r11,30608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30608);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828feb84
	if (!ctx.cr0.eq) goto loc_828FEB84;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249e570
	ctx.lr = 0x828FEB7C;
	sub_8249E570(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,30608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30608, ctx.r11.u8);
loc_828FEB84:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x828FEB8C;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_828FEBA0"))) PPC_WEAK_FUNC(sub_828FEBA0);
PPC_FUNC_IMPL(__imp__sub_828FEBA0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828fccf0
	ctx.lr = 0x828FEBC0;
	sub_828FCCF0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828febd0
	if (ctx.cr0.eq) goto loc_828FEBD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FEBD0;
	sub_823FD208(ctx, base);
loc_828FEBD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FEBF0"))) PPC_WEAK_FUNC(sub_828FEBF0);
PPC_FUNC_IMPL(__imp__sub_828FEBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x828FEBF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fc1a0
	ctx.lr = 0x828FEC04;
	sub_828FC1A0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x828FEC14;
	sub_8247FC10(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8248bae8
	ctx.lr = 0x828FEC1C;
	sub_8248BAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x828FEC28;
	sub_824AFB20(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fecfc
	if (ctx.cr6.eq) goto loc_828FECFC;
	// bl 0x8249e4c8
	ctx.lr = 0x828FEC38;
	sub_8249E4C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fecfc
	if (ctx.cr0.eq) goto loc_828FECFC;
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828fec9c
	if (ctx.cr0.eq) goto loc_828FEC9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FEC5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,-26400(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26400);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FEC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mulli r11,r11,5648
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(5648));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82bfd250
	ctx.lr = 0x828FEC8C;
	sub_82BFD250(ctx, base);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,30609(r10)
	PPC_STORE_U8(ctx.r10.u32 + 30609, ctx.r11.u8);
	// b 0x828fecfc
	goto loc_828FECFC;
loc_828FEC9C:
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// lbz r11,30609(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 30609);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828fecfc
	if (!ctx.cr0.eq) goto loc_828FECFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FECBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r30,1024
	ctx.r30.s64 = 1024;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,-26400(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26400);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FECDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulli r11,r11,5648
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(5648));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82bfd220
	ctx.lr = 0x828FECF4;
	sub_82BFD220(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,30609(r29)
	PPC_STORE_U8(ctx.r29.u32 + 30609, ctx.r11.u8);
loc_828FECFC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x828FED04;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FED10"))) PPC_WEAK_FUNC(sub_828FED10);
PPC_FUNC_IMPL(__imp__sub_828FED10) {
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
	// bl 0x828fc1a0
	ctx.lr = 0x828FED28;
	sub_828FC1A0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x828FED38;
	sub_8247FC10(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8248bae8
	ctx.lr = 0x828FED40;
	sub_8248BAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x828FED4C;
	sub_824AFB20(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fedac
	if (ctx.cr6.eq) goto loc_828FEDAC;
	// bl 0x8249e4c8
	ctx.lr = 0x828FED5C;
	sub_8249E4C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fedac
	if (ctx.cr0.eq) goto loc_828FEDAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FED74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r30,1024
	ctx.r30.s64 = 1024;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,-26400(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26400);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FED94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulli r11,r11,5648
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(5648));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82bfd220
	ctx.lr = 0x828FEDAC;
	sub_82BFD220(ctx, base);
loc_828FEDAC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x828FEDB4;
	sub_82DE7330(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FEDD0"))) PPC_WEAK_FUNC(sub_828FEDD0);
PPC_FUNC_IMPL(__imp__sub_828FEDD0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x830b2320
	ctx.lr = 0x828FEDE8;
	sub_830B2320(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x828FEDF8;
	sub_8247FC10(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8248bae8
	ctx.lr = 0x828FEE00;
	sub_8248BAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x828FEE0C;
	sub_824AFB20(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fee64
	if (ctx.cr6.eq) goto loc_828FEE64;
	// bl 0x8249e4c8
	ctx.lr = 0x828FEE1C;
	sub_8249E4C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828fee64
	if (ctx.cr0.eq) goto loc_828FEE64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FEE34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,-26400(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26400);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FEE50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mulli r11,r11,5648
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(5648));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82bfd250
	ctx.lr = 0x828FEE64;
	sub_82BFD250(ctx, base);
loc_828FEE64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x828FEE6C;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_828FEE80"))) PPC_WEAK_FUNC(sub_828FEE80);
PPC_FUNC_IMPL(__imp__sub_828FEE80) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82908298
	ctx.lr = 0x828FEE98;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,-4808
	ctx.r11.s64 = ctx.r11.s64 + -4808;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82411478
	ctx.lr = 0x828FEEB4;
	sub_82411478(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_828FEED8"))) PPC_WEAK_FUNC(sub_828FEED8);
PPC_FUNC_IMPL(__imp__sub_828FEED8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r11,r11,-4808
	ctx.r11.s64 = ctx.r11.s64 + -4808;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82411478
	ctx.lr = 0x828FEF08;
	sub_82411478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829082e8
	ctx.lr = 0x828FEF10;
	sub_829082E8(ctx, base);
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

__attribute__((alias("__imp__sub_828FEF28"))) PPC_WEAK_FUNC(sub_828FEF28);
PPC_FUNC_IMPL(__imp__sub_828FEF28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82908298
	ctx.lr = 0x828FEF40;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,-4748
	ctx.r11.s64 = ctx.r11.s64 + -4748;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82411478
	ctx.lr = 0x828FEF5C;
	sub_82411478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FEF78"))) PPC_WEAK_FUNC(sub_828FEF78);
PPC_FUNC_IMPL(__imp__sub_828FEF78) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r11,r11,-4748
	ctx.r11.s64 = ctx.r11.s64 + -4748;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82411478
	ctx.lr = 0x828FEFA8;
	sub_82411478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829082e8
	ctx.lr = 0x828FEFB0;
	sub_829082E8(ctx, base);
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

__attribute__((alias("__imp__sub_828FEFC8"))) PPC_WEAK_FUNC(sub_828FEFC8);
PPC_FUNC_IMPL(__imp__sub_828FEFC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828fef78
	ctx.lr = 0x828FEFE8;
	sub_828FEF78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828feff8
	if (ctx.cr0.eq) goto loc_828FEFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FEFF8;
	sub_823FD208(ctx, base);
loc_828FEFF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF018"))) PPC_WEAK_FUNC(sub_828FF018);
PPC_FUNC_IMPL(__imp__sub_828FF018) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82908298
	ctx.lr = 0x828FF030;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,-4688
	ctx.r11.s64 = ctx.r11.s64 + -4688;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82411478
	ctx.lr = 0x828FF04C;
	sub_82411478(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82411478
	ctx.lr = 0x828FF05C;
	sub_82411478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FF078"))) PPC_WEAK_FUNC(sub_828FF078);
PPC_FUNC_IMPL(__imp__sub_828FF078) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// addi r11,r11,-4688
	ctx.r11.s64 = ctx.r11.s64 + -4688;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82411478
	ctx.lr = 0x828FF0A8;
	sub_82411478(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82411478
	ctx.lr = 0x828FF0B8;
	sub_82411478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829082e8
	ctx.lr = 0x828FF0C0;
	sub_829082E8(ctx, base);
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

__attribute__((alias("__imp__sub_828FF0D8"))) PPC_WEAK_FUNC(sub_828FF0D8);
PPC_FUNC_IMPL(__imp__sub_828FF0D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828ff078
	ctx.lr = 0x828FF0F8;
	sub_828FF078(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ff108
	if (ctx.cr0.eq) goto loc_828FF108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FF108;
	sub_823FD208(ctx, base);
loc_828FF108:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF128"))) PPC_WEAK_FUNC(sub_828FF128);
PPC_FUNC_IMPL(__imp__sub_828FF128) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829095b0
	ctx.lr = 0x828FF140;
	sub_829095B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-4628
	ctx.r11.s64 = ctx.r11.s64 + -4628;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82411478
	ctx.lr = 0x828FF164;
	sub_82411478(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82411478
	ctx.lr = 0x828FF174;
	sub_82411478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828FF190"))) PPC_WEAK_FUNC(sub_828FF190);
PPC_FUNC_IMPL(__imp__sub_828FF190) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r11,r11,-4628
	ctx.r11.s64 = ctx.r11.s64 + -4628;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82411478
	ctx.lr = 0x828FF1C0;
	sub_82411478(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82411478
	ctx.lr = 0x828FF1D0;
	sub_82411478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829082e8
	ctx.lr = 0x828FF1D8;
	sub_829082E8(ctx, base);
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

__attribute__((alias("__imp__sub_828FF1F0"))) PPC_WEAK_FUNC(sub_828FF1F0);
PPC_FUNC_IMPL(__imp__sub_828FF1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x828FF1F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82e53a38
	ctx.lr = 0x828FF208;
	sub_82E53A38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c01030
	ctx.lr = 0x828FF210;
	sub_82C01030(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r5,r11,11984
	ctx.r5.s64 = ctx.r11.s64 + 11984;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FF22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r30,36
	ctx.r31.s64 = ctx.r30.s64 + 36;
	// stw r28,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r28.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x828ff24c
	if (ctx.cr6.lt) goto loc_828FF24C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x828ff250
	goto loc_828FF250;
loc_828FF24C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_828FF250:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c01030
	ctx.lr = 0x828FF25C;
	sub_82C01030(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-4572
	ctx.r5.s64 = ctx.r11.s64 + -4572;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FF278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r31,r30,64
	ctx.r31.s64 = ctx.r30.s64 + 64;
	// stw r28,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x828ff294
	if (ctx.cr6.lt) goto loc_828FF294;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x828ff298
	goto loc_828FF298;
loc_828FF294:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_828FF298:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c01030
	ctx.lr = 0x828FF2A4;
	sub_82C01030(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,17620
	ctx.r5.s64 = ctx.r11.s64 + 17620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FF2C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FF2C8"))) PPC_WEAK_FUNC(sub_828FF2C8);
PPC_FUNC_IMPL(__imp__sub_828FF2C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82908298
	ctx.lr = 0x828FF2E4;
	sub_82908298(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-4544
	ctx.r11.s64 = ctx.r11.s64 + -4544;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,-4556
	ctx.r5.s64 = ctx.r10.s64 + -4556;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e50e38
	ctx.lr = 0x828FF30C;
	sub_82E50E38(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,12212
	ctx.r11.s64 = ctx.r11.s64 + 12212;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x82411478
	ctx.lr = 0x828FF328;
	sub_82411478(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,11984
	ctx.r5.s64 = ctx.r11.s64 + 11984;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82e50e38
	ctx.lr = 0x828FF340;
	sub_82E50E38(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,11928
	ctx.r11.s64 = ctx.r11.s64 + 11928;
	// stb r10,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF370"))) PPC_WEAK_FUNC(sub_828FF370);
PPC_FUNC_IMPL(__imp__sub_828FF370) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-4544
	ctx.r11.s64 = ctx.r11.s64 + -4544;
	// addi r10,r10,11928
	ctx.r10.s64 = ctx.r10.s64 + 11928;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x82e50e70
	ctx.lr = 0x828FF3A4;
	sub_82E50E70(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x825add88
	ctx.lr = 0x828FF3AC;
	sub_825ADD88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829082e8
	ctx.lr = 0x828FF3B4;
	sub_829082E8(ctx, base);
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

__attribute__((alias("__imp__sub_828FF3C8"))) PPC_WEAK_FUNC(sub_828FF3C8);
PPC_FUNC_IMPL(__imp__sub_828FF3C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828FF3E8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4472
	ctx.r11.s64 = ctx.r11.s64 + -4472;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF418"))) PPC_WEAK_FUNC(sub_828FF418);
PPC_FUNC_IMPL(__imp__sub_828FF418) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4472
	ctx.r11.s64 = ctx.r11.s64 + -4472;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828FF43C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ff464
	if (ctx.cr0.eq) goto loc_828FF464;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ff464
	if (ctx.cr6.eq) goto loc_828FF464;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FF464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FF464:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828FF488"))) PPC_WEAK_FUNC(sub_828FF488);
PPC_FUNC_IMPL(__imp__sub_828FF488) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828ff418
	ctx.lr = 0x828FF4A8;
	sub_828FF418(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ff4b8
	if (ctx.cr0.eq) goto loc_828FF4B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FF4B8;
	sub_823FD208(ctx, base);
loc_828FF4B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF4D8"))) PPC_WEAK_FUNC(sub_828FF4D8);
PPC_FUNC_IMPL(__imp__sub_828FF4D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828FF4F8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4420
	ctx.r11.s64 = ctx.r11.s64 + -4420;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF528"))) PPC_WEAK_FUNC(sub_828FF528);
PPC_FUNC_IMPL(__imp__sub_828FF528) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4420
	ctx.r11.s64 = ctx.r11.s64 + -4420;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828FF54C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ff574
	if (ctx.cr0.eq) goto loc_828FF574;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ff574
	if (ctx.cr6.eq) goto loc_828FF574;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FF574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FF574:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828FF598"))) PPC_WEAK_FUNC(sub_828FF598);
PPC_FUNC_IMPL(__imp__sub_828FF598) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828ff528
	ctx.lr = 0x828FF5B8;
	sub_828FF528(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ff5c8
	if (ctx.cr0.eq) goto loc_828FF5C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FF5C8;
	sub_823FD208(ctx, base);
loc_828FF5C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF5E8"))) PPC_WEAK_FUNC(sub_828FF5E8);
PPC_FUNC_IMPL(__imp__sub_828FF5E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828FF608;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4368
	ctx.r11.s64 = ctx.r11.s64 + -4368;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF638"))) PPC_WEAK_FUNC(sub_828FF638);
PPC_FUNC_IMPL(__imp__sub_828FF638) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4368
	ctx.r11.s64 = ctx.r11.s64 + -4368;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828FF65C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ff684
	if (ctx.cr0.eq) goto loc_828FF684;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ff684
	if (ctx.cr6.eq) goto loc_828FF684;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FF684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FF684:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828FF6A8"))) PPC_WEAK_FUNC(sub_828FF6A8);
PPC_FUNC_IMPL(__imp__sub_828FF6A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828ff638
	ctx.lr = 0x828FF6C8;
	sub_828FF638(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ff6d8
	if (ctx.cr0.eq) goto loc_828FF6D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FF6D8;
	sub_823FD208(ctx, base);
loc_828FF6D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF6F8"))) PPC_WEAK_FUNC(sub_828FF6F8);
PPC_FUNC_IMPL(__imp__sub_828FF6F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828FF718;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4316
	ctx.r11.s64 = ctx.r11.s64 + -4316;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF748"))) PPC_WEAK_FUNC(sub_828FF748);
PPC_FUNC_IMPL(__imp__sub_828FF748) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4316
	ctx.r11.s64 = ctx.r11.s64 + -4316;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828FF76C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ff794
	if (ctx.cr0.eq) goto loc_828FF794;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ff794
	if (ctx.cr6.eq) goto loc_828FF794;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FF794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FF794:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828FF7B8"))) PPC_WEAK_FUNC(sub_828FF7B8);
PPC_FUNC_IMPL(__imp__sub_828FF7B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828ff748
	ctx.lr = 0x828FF7D8;
	sub_828FF748(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ff7e8
	if (ctx.cr0.eq) goto loc_828FF7E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FF7E8;
	sub_823FD208(ctx, base);
loc_828FF7E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF808"))) PPC_WEAK_FUNC(sub_828FF808);
PPC_FUNC_IMPL(__imp__sub_828FF808) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828FF828;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4264
	ctx.r11.s64 = ctx.r11.s64 + -4264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF858"))) PPC_WEAK_FUNC(sub_828FF858);
PPC_FUNC_IMPL(__imp__sub_828FF858) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4264
	ctx.r11.s64 = ctx.r11.s64 + -4264;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828FF87C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ff8a4
	if (ctx.cr0.eq) goto loc_828FF8A4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ff8a4
	if (ctx.cr6.eq) goto loc_828FF8A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FF8A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FF8A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828FF8C8"))) PPC_WEAK_FUNC(sub_828FF8C8);
PPC_FUNC_IMPL(__imp__sub_828FF8C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828ff858
	ctx.lr = 0x828FF8E8;
	sub_828FF858(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ff8f8
	if (ctx.cr0.eq) goto loc_828FF8F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FF8F8;
	sub_823FD208(ctx, base);
loc_828FF8F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF918"))) PPC_WEAK_FUNC(sub_828FF918);
PPC_FUNC_IMPL(__imp__sub_828FF918) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828FF938;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4212
	ctx.r11.s64 = ctx.r11.s64 + -4212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF968"))) PPC_WEAK_FUNC(sub_828FF968);
PPC_FUNC_IMPL(__imp__sub_828FF968) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4212
	ctx.r11.s64 = ctx.r11.s64 + -4212;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828FF98C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ff9b4
	if (ctx.cr0.eq) goto loc_828FF9B4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ff9b4
	if (ctx.cr6.eq) goto loc_828FF9B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FF9B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FF9B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828FF9D8"))) PPC_WEAK_FUNC(sub_828FF9D8);
PPC_FUNC_IMPL(__imp__sub_828FF9D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828ff968
	ctx.lr = 0x828FF9F8;
	sub_828FF968(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ffa08
	if (ctx.cr0.eq) goto loc_828FFA08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FFA08;
	sub_823FD208(ctx, base);
loc_828FFA08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FFA28"))) PPC_WEAK_FUNC(sub_828FFA28);
PPC_FUNC_IMPL(__imp__sub_828FFA28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828FFA48;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4160
	ctx.r11.s64 = ctx.r11.s64 + -4160;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FFA78"))) PPC_WEAK_FUNC(sub_828FFA78);
PPC_FUNC_IMPL(__imp__sub_828FFA78) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4160
	ctx.r11.s64 = ctx.r11.s64 + -4160;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828FFA9C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ffac4
	if (ctx.cr0.eq) goto loc_828FFAC4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ffac4
	if (ctx.cr6.eq) goto loc_828FFAC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FFAC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FFAC4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828FFAE8"))) PPC_WEAK_FUNC(sub_828FFAE8);
PPC_FUNC_IMPL(__imp__sub_828FFAE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828ffa78
	ctx.lr = 0x828FFB08;
	sub_828FFA78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ffb18
	if (ctx.cr0.eq) goto loc_828FFB18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FFB18;
	sub_823FD208(ctx, base);
loc_828FFB18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FFB38"))) PPC_WEAK_FUNC(sub_828FFB38);
PPC_FUNC_IMPL(__imp__sub_828FFB38) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828FFB58;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4108
	ctx.r11.s64 = ctx.r11.s64 + -4108;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FFB88"))) PPC_WEAK_FUNC(sub_828FFB88);
PPC_FUNC_IMPL(__imp__sub_828FFB88) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4108
	ctx.r11.s64 = ctx.r11.s64 + -4108;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828FFBAC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ffbd4
	if (ctx.cr0.eq) goto loc_828FFBD4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ffbd4
	if (ctx.cr6.eq) goto loc_828FFBD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FFBD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FFBD4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828FFBF8"))) PPC_WEAK_FUNC(sub_828FFBF8);
PPC_FUNC_IMPL(__imp__sub_828FFBF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828ffb88
	ctx.lr = 0x828FFC18;
	sub_828FFB88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ffc28
	if (ctx.cr0.eq) goto loc_828FFC28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FFC28;
	sub_823FD208(ctx, base);
loc_828FFC28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FFC48"))) PPC_WEAK_FUNC(sub_828FFC48);
PPC_FUNC_IMPL(__imp__sub_828FFC48) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828FFC68;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4056
	ctx.r11.s64 = ctx.r11.s64 + -4056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FFC98"))) PPC_WEAK_FUNC(sub_828FFC98);
PPC_FUNC_IMPL(__imp__sub_828FFC98) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4056
	ctx.r11.s64 = ctx.r11.s64 + -4056;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828FFCBC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ffce4
	if (ctx.cr0.eq) goto loc_828FFCE4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ffce4
	if (ctx.cr6.eq) goto loc_828FFCE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FFCE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FFCE4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828FFD08"))) PPC_WEAK_FUNC(sub_828FFD08);
PPC_FUNC_IMPL(__imp__sub_828FFD08) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828ffc98
	ctx.lr = 0x828FFD28;
	sub_828FFC98(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ffd38
	if (ctx.cr0.eq) goto loc_828FFD38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FFD38;
	sub_823FD208(ctx, base);
loc_828FFD38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FFD58"))) PPC_WEAK_FUNC(sub_828FFD58);
PPC_FUNC_IMPL(__imp__sub_828FFD58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828FFD78;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4004
	ctx.r11.s64 = ctx.r11.s64 + -4004;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FFDA8"))) PPC_WEAK_FUNC(sub_828FFDA8);
PPC_FUNC_IMPL(__imp__sub_828FFDA8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4004
	ctx.r11.s64 = ctx.r11.s64 + -4004;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828FFDCC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ffdf4
	if (ctx.cr0.eq) goto loc_828FFDF4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ffdf4
	if (ctx.cr6.eq) goto loc_828FFDF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FFDF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FFDF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828FFE18"))) PPC_WEAK_FUNC(sub_828FFE18);
PPC_FUNC_IMPL(__imp__sub_828FFE18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828ffda8
	ctx.lr = 0x828FFE38;
	sub_828FFDA8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ffe48
	if (ctx.cr0.eq) goto loc_828FFE48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FFE48;
	sub_823FD208(ctx, base);
loc_828FFE48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FFE68"))) PPC_WEAK_FUNC(sub_828FFE68);
PPC_FUNC_IMPL(__imp__sub_828FFE68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828FFE88;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3952
	ctx.r11.s64 = ctx.r11.s64 + -3952;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FFEB8"))) PPC_WEAK_FUNC(sub_828FFEB8);
PPC_FUNC_IMPL(__imp__sub_828FFEB8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3952
	ctx.r11.s64 = ctx.r11.s64 + -3952;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828FFEDC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fff04
	if (ctx.cr0.eq) goto loc_828FFF04;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fff04
	if (ctx.cr6.eq) goto loc_828FFF04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FFF04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FFF04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828FFF28"))) PPC_WEAK_FUNC(sub_828FFF28);
PPC_FUNC_IMPL(__imp__sub_828FFF28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828ffeb8
	ctx.lr = 0x828FFF48;
	sub_828FFEB8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828fff58
	if (ctx.cr0.eq) goto loc_828FFF58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x828FFF58;
	sub_823FD208(ctx, base);
loc_828FFF58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FFF78"))) PPC_WEAK_FUNC(sub_828FFF78);
PPC_FUNC_IMPL(__imp__sub_828FFF78) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x828FFF98;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3900
	ctx.r11.s64 = ctx.r11.s64 + -3900;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FFFC8"))) PPC_WEAK_FUNC(sub_828FFFC8);
PPC_FUNC_IMPL(__imp__sub_828FFFC8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3900
	ctx.r11.s64 = ctx.r11.s64 + -3900;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x828FFFEC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900014
	if (ctx.cr0.eq) goto loc_82900014;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82900014
	if (ctx.cr6.eq) goto loc_82900014;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82900014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82900014:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82900038"))) PPC_WEAK_FUNC(sub_82900038);
PPC_FUNC_IMPL(__imp__sub_82900038) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828fffc8
	ctx.lr = 0x82900058;
	sub_828FFFC8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900068
	if (ctx.cr0.eq) goto loc_82900068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82900068;
	sub_823FD208(ctx, base);
loc_82900068:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900088"))) PPC_WEAK_FUNC(sub_82900088);
PPC_FUNC_IMPL(__imp__sub_82900088) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x829000A8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3848
	ctx.r11.s64 = ctx.r11.s64 + -3848;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829000D8"))) PPC_WEAK_FUNC(sub_829000D8);
PPC_FUNC_IMPL(__imp__sub_829000D8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3848
	ctx.r11.s64 = ctx.r11.s64 + -3848;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x829000FC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900124
	if (ctx.cr0.eq) goto loc_82900124;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82900124
	if (ctx.cr6.eq) goto loc_82900124;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82900124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82900124:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82900148"))) PPC_WEAK_FUNC(sub_82900148);
PPC_FUNC_IMPL(__imp__sub_82900148) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829000d8
	ctx.lr = 0x82900168;
	sub_829000D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900178
	if (ctx.cr0.eq) goto loc_82900178;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82900178;
	sub_823FD208(ctx, base);
loc_82900178:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900198"))) PPC_WEAK_FUNC(sub_82900198);
PPC_FUNC_IMPL(__imp__sub_82900198) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x829001B8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3796
	ctx.r11.s64 = ctx.r11.s64 + -3796;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829001E8"))) PPC_WEAK_FUNC(sub_829001E8);
PPC_FUNC_IMPL(__imp__sub_829001E8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3796
	ctx.r11.s64 = ctx.r11.s64 + -3796;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290020C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900234
	if (ctx.cr0.eq) goto loc_82900234;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82900234
	if (ctx.cr6.eq) goto loc_82900234;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82900234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82900234:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82900258"))) PPC_WEAK_FUNC(sub_82900258);
PPC_FUNC_IMPL(__imp__sub_82900258) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829001e8
	ctx.lr = 0x82900278;
	sub_829001E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900288
	if (ctx.cr0.eq) goto loc_82900288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82900288;
	sub_823FD208(ctx, base);
loc_82900288:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829002A8"))) PPC_WEAK_FUNC(sub_829002A8);
PPC_FUNC_IMPL(__imp__sub_829002A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x829002C8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3744
	ctx.r11.s64 = ctx.r11.s64 + -3744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829002F8"))) PPC_WEAK_FUNC(sub_829002F8);
PPC_FUNC_IMPL(__imp__sub_829002F8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3744
	ctx.r11.s64 = ctx.r11.s64 + -3744;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290031C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900344
	if (ctx.cr0.eq) goto loc_82900344;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82900344
	if (ctx.cr6.eq) goto loc_82900344;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82900344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82900344:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82900368"))) PPC_WEAK_FUNC(sub_82900368);
PPC_FUNC_IMPL(__imp__sub_82900368) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829002f8
	ctx.lr = 0x82900388;
	sub_829002F8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900398
	if (ctx.cr0.eq) goto loc_82900398;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82900398;
	sub_823FD208(ctx, base);
loc_82900398:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829003B8"))) PPC_WEAK_FUNC(sub_829003B8);
PPC_FUNC_IMPL(__imp__sub_829003B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x829003D8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3692
	ctx.r11.s64 = ctx.r11.s64 + -3692;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900408"))) PPC_WEAK_FUNC(sub_82900408);
PPC_FUNC_IMPL(__imp__sub_82900408) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3692
	ctx.r11.s64 = ctx.r11.s64 + -3692;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290042C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900454
	if (ctx.cr0.eq) goto loc_82900454;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82900454
	if (ctx.cr6.eq) goto loc_82900454;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82900454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82900454:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82900478"))) PPC_WEAK_FUNC(sub_82900478);
PPC_FUNC_IMPL(__imp__sub_82900478) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82900408
	ctx.lr = 0x82900498;
	sub_82900408(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829004a8
	if (ctx.cr0.eq) goto loc_829004A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829004A8;
	sub_823FD208(ctx, base);
loc_829004A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829004C8"))) PPC_WEAK_FUNC(sub_829004C8);
PPC_FUNC_IMPL(__imp__sub_829004C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x829004E8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3640
	ctx.r11.s64 = ctx.r11.s64 + -3640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900518"))) PPC_WEAK_FUNC(sub_82900518);
PPC_FUNC_IMPL(__imp__sub_82900518) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3640
	ctx.r11.s64 = ctx.r11.s64 + -3640;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290053C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900564
	if (ctx.cr0.eq) goto loc_82900564;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82900564
	if (ctx.cr6.eq) goto loc_82900564;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82900564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82900564:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82900588"))) PPC_WEAK_FUNC(sub_82900588);
PPC_FUNC_IMPL(__imp__sub_82900588) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82900518
	ctx.lr = 0x829005A8;
	sub_82900518(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829005b8
	if (ctx.cr0.eq) goto loc_829005B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829005B8;
	sub_823FD208(ctx, base);
loc_829005B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829005D8"))) PPC_WEAK_FUNC(sub_829005D8);
PPC_FUNC_IMPL(__imp__sub_829005D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x829005F8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3588
	ctx.r11.s64 = ctx.r11.s64 + -3588;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900628"))) PPC_WEAK_FUNC(sub_82900628);
PPC_FUNC_IMPL(__imp__sub_82900628) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3588
	ctx.r11.s64 = ctx.r11.s64 + -3588;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290064C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900674
	if (ctx.cr0.eq) goto loc_82900674;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82900674
	if (ctx.cr6.eq) goto loc_82900674;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82900674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82900674:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82900698"))) PPC_WEAK_FUNC(sub_82900698);
PPC_FUNC_IMPL(__imp__sub_82900698) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82900628
	ctx.lr = 0x829006B8;
	sub_82900628(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829006c8
	if (ctx.cr0.eq) goto loc_829006C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829006C8;
	sub_823FD208(ctx, base);
loc_829006C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829006E8"))) PPC_WEAK_FUNC(sub_829006E8);
PPC_FUNC_IMPL(__imp__sub_829006E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x82900708;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3536
	ctx.r11.s64 = ctx.r11.s64 + -3536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900738"))) PPC_WEAK_FUNC(sub_82900738);
PPC_FUNC_IMPL(__imp__sub_82900738) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3536
	ctx.r11.s64 = ctx.r11.s64 + -3536;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290075C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900784
	if (ctx.cr0.eq) goto loc_82900784;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82900784
	if (ctx.cr6.eq) goto loc_82900784;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82900784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82900784:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829007A8"))) PPC_WEAK_FUNC(sub_829007A8);
PPC_FUNC_IMPL(__imp__sub_829007A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82900738
	ctx.lr = 0x829007C8;
	sub_82900738(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829007d8
	if (ctx.cr0.eq) goto loc_829007D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829007D8;
	sub_823FD208(ctx, base);
loc_829007D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829007F8"))) PPC_WEAK_FUNC(sub_829007F8);
PPC_FUNC_IMPL(__imp__sub_829007F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x82900818;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3484
	ctx.r11.s64 = ctx.r11.s64 + -3484;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900848"))) PPC_WEAK_FUNC(sub_82900848);
PPC_FUNC_IMPL(__imp__sub_82900848) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3484
	ctx.r11.s64 = ctx.r11.s64 + -3484;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290086C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900894
	if (ctx.cr0.eq) goto loc_82900894;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82900894
	if (ctx.cr6.eq) goto loc_82900894;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82900894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82900894:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829008B8"))) PPC_WEAK_FUNC(sub_829008B8);
PPC_FUNC_IMPL(__imp__sub_829008B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82900848
	ctx.lr = 0x829008D8;
	sub_82900848(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829008e8
	if (ctx.cr0.eq) goto loc_829008E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829008E8;
	sub_823FD208(ctx, base);
loc_829008E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900908"))) PPC_WEAK_FUNC(sub_82900908);
PPC_FUNC_IMPL(__imp__sub_82900908) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x82900928;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3432
	ctx.r11.s64 = ctx.r11.s64 + -3432;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900958"))) PPC_WEAK_FUNC(sub_82900958);
PPC_FUNC_IMPL(__imp__sub_82900958) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3432
	ctx.r11.s64 = ctx.r11.s64 + -3432;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290097C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829009a4
	if (ctx.cr0.eq) goto loc_829009A4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829009a4
	if (ctx.cr6.eq) goto loc_829009A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829009A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829009A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829009C8"))) PPC_WEAK_FUNC(sub_829009C8);
PPC_FUNC_IMPL(__imp__sub_829009C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82900958
	ctx.lr = 0x829009E8;
	sub_82900958(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829009f8
	if (ctx.cr0.eq) goto loc_829009F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829009F8;
	sub_823FD208(ctx, base);
loc_829009F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900A18"))) PPC_WEAK_FUNC(sub_82900A18);
PPC_FUNC_IMPL(__imp__sub_82900A18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x82900A38;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3380
	ctx.r11.s64 = ctx.r11.s64 + -3380;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900A68"))) PPC_WEAK_FUNC(sub_82900A68);
PPC_FUNC_IMPL(__imp__sub_82900A68) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3380
	ctx.r11.s64 = ctx.r11.s64 + -3380;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82900A8C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900ab4
	if (ctx.cr0.eq) goto loc_82900AB4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82900ab4
	if (ctx.cr6.eq) goto loc_82900AB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82900AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82900AB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82900AD8"))) PPC_WEAK_FUNC(sub_82900AD8);
PPC_FUNC_IMPL(__imp__sub_82900AD8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82900a68
	ctx.lr = 0x82900AF8;
	sub_82900A68(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900b08
	if (ctx.cr0.eq) goto loc_82900B08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82900B08;
	sub_823FD208(ctx, base);
loc_82900B08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900B28"))) PPC_WEAK_FUNC(sub_82900B28);
PPC_FUNC_IMPL(__imp__sub_82900B28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x82900B48;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3328
	ctx.r11.s64 = ctx.r11.s64 + -3328;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900B78"))) PPC_WEAK_FUNC(sub_82900B78);
PPC_FUNC_IMPL(__imp__sub_82900B78) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3328
	ctx.r11.s64 = ctx.r11.s64 + -3328;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82900B9C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900bc4
	if (ctx.cr0.eq) goto loc_82900BC4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82900bc4
	if (ctx.cr6.eq) goto loc_82900BC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82900BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82900BC4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82900BE8"))) PPC_WEAK_FUNC(sub_82900BE8);
PPC_FUNC_IMPL(__imp__sub_82900BE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82900b78
	ctx.lr = 0x82900C08;
	sub_82900B78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900c18
	if (ctx.cr0.eq) goto loc_82900C18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82900C18;
	sub_823FD208(ctx, base);
loc_82900C18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900C38"))) PPC_WEAK_FUNC(sub_82900C38);
PPC_FUNC_IMPL(__imp__sub_82900C38) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x82900C58;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3276
	ctx.r11.s64 = ctx.r11.s64 + -3276;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900C88"))) PPC_WEAK_FUNC(sub_82900C88);
PPC_FUNC_IMPL(__imp__sub_82900C88) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3276
	ctx.r11.s64 = ctx.r11.s64 + -3276;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82900CAC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900cd4
	if (ctx.cr0.eq) goto loc_82900CD4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82900cd4
	if (ctx.cr6.eq) goto loc_82900CD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82900CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82900CD4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82900CF8"))) PPC_WEAK_FUNC(sub_82900CF8);
PPC_FUNC_IMPL(__imp__sub_82900CF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82900c88
	ctx.lr = 0x82900D18;
	sub_82900C88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900d28
	if (ctx.cr0.eq) goto loc_82900D28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82900D28;
	sub_823FD208(ctx, base);
loc_82900D28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900D48"))) PPC_WEAK_FUNC(sub_82900D48);
PPC_FUNC_IMPL(__imp__sub_82900D48) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x82900D68;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3224
	ctx.r11.s64 = ctx.r11.s64 + -3224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900D98"))) PPC_WEAK_FUNC(sub_82900D98);
PPC_FUNC_IMPL(__imp__sub_82900D98) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3224
	ctx.r11.s64 = ctx.r11.s64 + -3224;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82900DBC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900de4
	if (ctx.cr0.eq) goto loc_82900DE4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82900de4
	if (ctx.cr6.eq) goto loc_82900DE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82900DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82900DE4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82900E08"))) PPC_WEAK_FUNC(sub_82900E08);
PPC_FUNC_IMPL(__imp__sub_82900E08) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82900d98
	ctx.lr = 0x82900E28;
	sub_82900D98(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900e38
	if (ctx.cr0.eq) goto loc_82900E38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82900E38;
	sub_823FD208(ctx, base);
loc_82900E38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900E58"))) PPC_WEAK_FUNC(sub_82900E58);
PPC_FUNC_IMPL(__imp__sub_82900E58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x82900E78;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3172
	ctx.r11.s64 = ctx.r11.s64 + -3172;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900EA8"))) PPC_WEAK_FUNC(sub_82900EA8);
PPC_FUNC_IMPL(__imp__sub_82900EA8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3172
	ctx.r11.s64 = ctx.r11.s64 + -3172;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82900ECC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900ef4
	if (ctx.cr0.eq) goto loc_82900EF4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82900ef4
	if (ctx.cr6.eq) goto loc_82900EF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82900EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82900EF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82900F18"))) PPC_WEAK_FUNC(sub_82900F18);
PPC_FUNC_IMPL(__imp__sub_82900F18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82900ea8
	ctx.lr = 0x82900F38;
	sub_82900EA8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900f48
	if (ctx.cr0.eq) goto loc_82900F48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82900F48;
	sub_823FD208(ctx, base);
loc_82900F48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900F68"))) PPC_WEAK_FUNC(sub_82900F68);
PPC_FUNC_IMPL(__imp__sub_82900F68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x82900F88;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3120
	ctx.r11.s64 = ctx.r11.s64 + -3120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900FB8"))) PPC_WEAK_FUNC(sub_82900FB8);
PPC_FUNC_IMPL(__imp__sub_82900FB8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3120
	ctx.r11.s64 = ctx.r11.s64 + -3120;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82900FDC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82901004
	if (ctx.cr0.eq) goto loc_82901004;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901004
	if (ctx.cr6.eq) goto loc_82901004;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82901004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82901004:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82901028"))) PPC_WEAK_FUNC(sub_82901028);
PPC_FUNC_IMPL(__imp__sub_82901028) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82900fb8
	ctx.lr = 0x82901048;
	sub_82900FB8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82901058
	if (ctx.cr0.eq) goto loc_82901058;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82901058;
	sub_823FD208(ctx, base);
loc_82901058:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82901078"))) PPC_WEAK_FUNC(sub_82901078);
PPC_FUNC_IMPL(__imp__sub_82901078) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x82901098;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3068
	ctx.r11.s64 = ctx.r11.s64 + -3068;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829010C8"))) PPC_WEAK_FUNC(sub_829010C8);
PPC_FUNC_IMPL(__imp__sub_829010C8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3068
	ctx.r11.s64 = ctx.r11.s64 + -3068;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x829010EC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82901114
	if (ctx.cr0.eq) goto loc_82901114;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901114
	if (ctx.cr6.eq) goto loc_82901114;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82901114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82901114:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82901138"))) PPC_WEAK_FUNC(sub_82901138);
PPC_FUNC_IMPL(__imp__sub_82901138) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829010c8
	ctx.lr = 0x82901158;
	sub_829010C8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82901168
	if (ctx.cr0.eq) goto loc_82901168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82901168;
	sub_823FD208(ctx, base);
loc_82901168:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82901188"))) PPC_WEAK_FUNC(sub_82901188);
PPC_FUNC_IMPL(__imp__sub_82901188) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x829011A8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3016
	ctx.r11.s64 = ctx.r11.s64 + -3016;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829011D8"))) PPC_WEAK_FUNC(sub_829011D8);
PPC_FUNC_IMPL(__imp__sub_829011D8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3016
	ctx.r11.s64 = ctx.r11.s64 + -3016;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x829011FC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82901224
	if (ctx.cr0.eq) goto loc_82901224;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901224
	if (ctx.cr6.eq) goto loc_82901224;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82901224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82901224:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82901248"))) PPC_WEAK_FUNC(sub_82901248);
PPC_FUNC_IMPL(__imp__sub_82901248) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829011d8
	ctx.lr = 0x82901268;
	sub_829011D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82901278
	if (ctx.cr0.eq) goto loc_82901278;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82901278;
	sub_823FD208(ctx, base);
loc_82901278:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82901298"))) PPC_WEAK_FUNC(sub_82901298);
PPC_FUNC_IMPL(__imp__sub_82901298) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e4de08
	ctx.lr = 0x829012B8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-2964
	ctx.r11.s64 = ctx.r11.s64 + -2964;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829012E8"))) PPC_WEAK_FUNC(sub_829012E8);
PPC_FUNC_IMPL(__imp__sub_829012E8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2964
	ctx.r11.s64 = ctx.r11.s64 + -2964;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8290130C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82901334
	if (ctx.cr0.eq) goto loc_82901334;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901334
	if (ctx.cr6.eq) goto loc_82901334;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82901334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82901334:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,26008
	ctx.r11.s64 = ctx.r11.s64 + 26008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82901358"))) PPC_WEAK_FUNC(sub_82901358);
PPC_FUNC_IMPL(__imp__sub_82901358) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829012e8
	ctx.lr = 0x82901378;
	sub_829012E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82901388
	if (ctx.cr0.eq) goto loc_82901388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82901388;
	sub_823FD208(ctx, base);
loc_82901388:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829013A8"))) PPC_WEAK_FUNC(sub_829013A8);
PPC_FUNC_IMPL(__imp__sub_829013A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829013B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x829013C4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829013f0
	if (ctx.cr0.eq) goto loc_829013F0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-4452
	ctx.r10.s64 = ctx.r10.s64 + -4452;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x829013f4
	goto loc_829013F4;
loc_829013F0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_829013F4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901404
	if (ctx.cr6.eq) goto loc_82901404;
	// bl 0x823e19b0
	ctx.lr = 0x82901404;
	sub_823E19B0(ctx, base);
loc_82901404:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901418"))) PPC_WEAK_FUNC(sub_82901418);
PPC_FUNC_IMPL(__imp__sub_82901418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901420;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901434;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901460
	if (ctx.cr0.eq) goto loc_82901460;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-4400
	ctx.r10.s64 = ctx.r10.s64 + -4400;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901464
	goto loc_82901464;
loc_82901460:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901464:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901474
	if (ctx.cr6.eq) goto loc_82901474;
	// bl 0x823e19b0
	ctx.lr = 0x82901474;
	sub_823E19B0(ctx, base);
loc_82901474:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901488"))) PPC_WEAK_FUNC(sub_82901488);
PPC_FUNC_IMPL(__imp__sub_82901488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901490;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x829014A4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829014d0
	if (ctx.cr0.eq) goto loc_829014D0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-4348
	ctx.r10.s64 = ctx.r10.s64 + -4348;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x829014d4
	goto loc_829014D4;
loc_829014D0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_829014D4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829014e4
	if (ctx.cr6.eq) goto loc_829014E4;
	// bl 0x823e19b0
	ctx.lr = 0x829014E4;
	sub_823E19B0(ctx, base);
loc_829014E4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829014F8"))) PPC_WEAK_FUNC(sub_829014F8);
PPC_FUNC_IMPL(__imp__sub_829014F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901514;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901540
	if (ctx.cr0.eq) goto loc_82901540;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-4296
	ctx.r10.s64 = ctx.r10.s64 + -4296;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901544
	goto loc_82901544;
loc_82901540:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901544:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901554
	if (ctx.cr6.eq) goto loc_82901554;
	// bl 0x823e19b0
	ctx.lr = 0x82901554;
	sub_823E19B0(ctx, base);
loc_82901554:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901568"))) PPC_WEAK_FUNC(sub_82901568);
PPC_FUNC_IMPL(__imp__sub_82901568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901570;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901584;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829015b0
	if (ctx.cr0.eq) goto loc_829015B0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-4244
	ctx.r10.s64 = ctx.r10.s64 + -4244;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x829015b4
	goto loc_829015B4;
loc_829015B0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_829015B4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829015c4
	if (ctx.cr6.eq) goto loc_829015C4;
	// bl 0x823e19b0
	ctx.lr = 0x829015C4;
	sub_823E19B0(ctx, base);
loc_829015C4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829015D8"))) PPC_WEAK_FUNC(sub_829015D8);
PPC_FUNC_IMPL(__imp__sub_829015D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829015E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x829015F4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901620
	if (ctx.cr0.eq) goto loc_82901620;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-4192
	ctx.r10.s64 = ctx.r10.s64 + -4192;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901624
	goto loc_82901624;
loc_82901620:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901624:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901634
	if (ctx.cr6.eq) goto loc_82901634;
	// bl 0x823e19b0
	ctx.lr = 0x82901634;
	sub_823E19B0(ctx, base);
loc_82901634:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901648"))) PPC_WEAK_FUNC(sub_82901648);
PPC_FUNC_IMPL(__imp__sub_82901648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901650;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901664;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901690
	if (ctx.cr0.eq) goto loc_82901690;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-4140
	ctx.r10.s64 = ctx.r10.s64 + -4140;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901694
	goto loc_82901694;
loc_82901690:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901694:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829016a4
	if (ctx.cr6.eq) goto loc_829016A4;
	// bl 0x823e19b0
	ctx.lr = 0x829016A4;
	sub_823E19B0(ctx, base);
loc_829016A4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829016B8"))) PPC_WEAK_FUNC(sub_829016B8);
PPC_FUNC_IMPL(__imp__sub_829016B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829016C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x829016D4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901700
	if (ctx.cr0.eq) goto loc_82901700;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-4088
	ctx.r10.s64 = ctx.r10.s64 + -4088;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901704
	goto loc_82901704;
loc_82901700:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901704:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901714
	if (ctx.cr6.eq) goto loc_82901714;
	// bl 0x823e19b0
	ctx.lr = 0x82901714;
	sub_823E19B0(ctx, base);
loc_82901714:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901728"))) PPC_WEAK_FUNC(sub_82901728);
PPC_FUNC_IMPL(__imp__sub_82901728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901730;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901744;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901770
	if (ctx.cr0.eq) goto loc_82901770;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-4036
	ctx.r10.s64 = ctx.r10.s64 + -4036;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901774
	goto loc_82901774;
loc_82901770:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901774:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901784
	if (ctx.cr6.eq) goto loc_82901784;
	// bl 0x823e19b0
	ctx.lr = 0x82901784;
	sub_823E19B0(ctx, base);
loc_82901784:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901798"))) PPC_WEAK_FUNC(sub_82901798);
PPC_FUNC_IMPL(__imp__sub_82901798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829017A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x829017B4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829017e0
	if (ctx.cr0.eq) goto loc_829017E0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3984
	ctx.r10.s64 = ctx.r10.s64 + -3984;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x829017e4
	goto loc_829017E4;
loc_829017E0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_829017E4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829017f4
	if (ctx.cr6.eq) goto loc_829017F4;
	// bl 0x823e19b0
	ctx.lr = 0x829017F4;
	sub_823E19B0(ctx, base);
loc_829017F4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901808"))) PPC_WEAK_FUNC(sub_82901808);
PPC_FUNC_IMPL(__imp__sub_82901808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901810;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901824;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901850
	if (ctx.cr0.eq) goto loc_82901850;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3932
	ctx.r10.s64 = ctx.r10.s64 + -3932;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901854
	goto loc_82901854;
loc_82901850:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901854:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901864
	if (ctx.cr6.eq) goto loc_82901864;
	// bl 0x823e19b0
	ctx.lr = 0x82901864;
	sub_823E19B0(ctx, base);
loc_82901864:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901878"))) PPC_WEAK_FUNC(sub_82901878);
PPC_FUNC_IMPL(__imp__sub_82901878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901880;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901894;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829018c0
	if (ctx.cr0.eq) goto loc_829018C0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3880
	ctx.r10.s64 = ctx.r10.s64 + -3880;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x829018c4
	goto loc_829018C4;
loc_829018C0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_829018C4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829018d4
	if (ctx.cr6.eq) goto loc_829018D4;
	// bl 0x823e19b0
	ctx.lr = 0x829018D4;
	sub_823E19B0(ctx, base);
loc_829018D4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829018E8"))) PPC_WEAK_FUNC(sub_829018E8);
PPC_FUNC_IMPL(__imp__sub_829018E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829018F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901904;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901930
	if (ctx.cr0.eq) goto loc_82901930;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3828
	ctx.r10.s64 = ctx.r10.s64 + -3828;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901934
	goto loc_82901934;
loc_82901930:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901934:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901944
	if (ctx.cr6.eq) goto loc_82901944;
	// bl 0x823e19b0
	ctx.lr = 0x82901944;
	sub_823E19B0(ctx, base);
loc_82901944:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901958"))) PPC_WEAK_FUNC(sub_82901958);
PPC_FUNC_IMPL(__imp__sub_82901958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901960;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901974;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829019a0
	if (ctx.cr0.eq) goto loc_829019A0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3776
	ctx.r10.s64 = ctx.r10.s64 + -3776;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x829019a4
	goto loc_829019A4;
loc_829019A0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_829019A4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829019b4
	if (ctx.cr6.eq) goto loc_829019B4;
	// bl 0x823e19b0
	ctx.lr = 0x829019B4;
	sub_823E19B0(ctx, base);
loc_829019B4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829019C8"))) PPC_WEAK_FUNC(sub_829019C8);
PPC_FUNC_IMPL(__imp__sub_829019C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829019D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x829019E4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901a10
	if (ctx.cr0.eq) goto loc_82901A10;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3724
	ctx.r10.s64 = ctx.r10.s64 + -3724;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901a14
	goto loc_82901A14;
loc_82901A10:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901A14:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901a24
	if (ctx.cr6.eq) goto loc_82901A24;
	// bl 0x823e19b0
	ctx.lr = 0x82901A24;
	sub_823E19B0(ctx, base);
loc_82901A24:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901A38"))) PPC_WEAK_FUNC(sub_82901A38);
PPC_FUNC_IMPL(__imp__sub_82901A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901A54;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901a80
	if (ctx.cr0.eq) goto loc_82901A80;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3672
	ctx.r10.s64 = ctx.r10.s64 + -3672;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901a84
	goto loc_82901A84;
loc_82901A80:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901A84:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901a94
	if (ctx.cr6.eq) goto loc_82901A94;
	// bl 0x823e19b0
	ctx.lr = 0x82901A94;
	sub_823E19B0(ctx, base);
loc_82901A94:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901AA8"))) PPC_WEAK_FUNC(sub_82901AA8);
PPC_FUNC_IMPL(__imp__sub_82901AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82901AB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c0f6c0
	ctx.lr = 0x82901AC4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82901af0
	if (ctx.cr0.eq) goto loc_82901AF0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3620
	ctx.r10.s64 = ctx.r10.s64 + -3620;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82901af4
	goto loc_82901AF4;
loc_82901AF0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901AF4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901b04
	if (ctx.cr6.eq) goto loc_82901B04;
	// bl 0x823e19b0
	ctx.lr = 0x82901B04;
	sub_823E19B0(ctx, base);
loc_82901B04:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

