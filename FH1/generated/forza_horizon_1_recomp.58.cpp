#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_8296C838"))) PPC_WEAK_FUNC(sub_8296C838);
PPC_FUNC_IMPL(__imp__sub_8296C838) {
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
	// bl 0x8296c7c8
	ctx.lr = 0x8296C858;
	sub_8296C7C8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296c868
	if (ctx.cr0.eq) goto loc_8296C868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296C868;
	sub_823FD208(ctx, base);
loc_8296C868:
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

__attribute__((alias("__imp__sub_8296C888"))) PPC_WEAK_FUNC(sub_8296C888);
PPC_FUNC_IMPL(__imp__sub_8296C888) {
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
	ctx.lr = 0x8296C8A8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24028
	ctx.r11.s64 = ctx.r11.s64 + -24028;
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

__attribute__((alias("__imp__sub_8296C8D8"))) PPC_WEAK_FUNC(sub_8296C8D8);
PPC_FUNC_IMPL(__imp__sub_8296C8D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24028
	ctx.r11.s64 = ctx.r11.s64 + -24028;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8296C8FC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296c924
	if (ctx.cr0.eq) goto loc_8296C924;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296c924
	if (ctx.cr6.eq) goto loc_8296C924;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8296C924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8296C924:
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

__attribute__((alias("__imp__sub_8296C948"))) PPC_WEAK_FUNC(sub_8296C948);
PPC_FUNC_IMPL(__imp__sub_8296C948) {
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
	// bl 0x8296c8d8
	ctx.lr = 0x8296C968;
	sub_8296C8D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296c978
	if (ctx.cr0.eq) goto loc_8296C978;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296C978;
	sub_823FD208(ctx, base);
loc_8296C978:
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

__attribute__((alias("__imp__sub_8296C998"))) PPC_WEAK_FUNC(sub_8296C998);
PPC_FUNC_IMPL(__imp__sub_8296C998) {
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
	ctx.lr = 0x8296C9B8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23976
	ctx.r11.s64 = ctx.r11.s64 + -23976;
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

__attribute__((alias("__imp__sub_8296C9E8"))) PPC_WEAK_FUNC(sub_8296C9E8);
PPC_FUNC_IMPL(__imp__sub_8296C9E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23976
	ctx.r11.s64 = ctx.r11.s64 + -23976;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8296CA0C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296ca34
	if (ctx.cr0.eq) goto loc_8296CA34;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296ca34
	if (ctx.cr6.eq) goto loc_8296CA34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8296CA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8296CA34:
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

__attribute__((alias("__imp__sub_8296CA58"))) PPC_WEAK_FUNC(sub_8296CA58);
PPC_FUNC_IMPL(__imp__sub_8296CA58) {
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
	// bl 0x8296c9e8
	ctx.lr = 0x8296CA78;
	sub_8296C9E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296ca88
	if (ctx.cr0.eq) goto loc_8296CA88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296CA88;
	sub_823FD208(ctx, base);
loc_8296CA88:
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

__attribute__((alias("__imp__sub_8296CAA8"))) PPC_WEAK_FUNC(sub_8296CAA8);
PPC_FUNC_IMPL(__imp__sub_8296CAA8) {
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
	ctx.lr = 0x8296CAC8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23924
	ctx.r11.s64 = ctx.r11.s64 + -23924;
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

__attribute__((alias("__imp__sub_8296CAF8"))) PPC_WEAK_FUNC(sub_8296CAF8);
PPC_FUNC_IMPL(__imp__sub_8296CAF8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23924
	ctx.r11.s64 = ctx.r11.s64 + -23924;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8296CB1C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296cb44
	if (ctx.cr0.eq) goto loc_8296CB44;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296cb44
	if (ctx.cr6.eq) goto loc_8296CB44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8296CB44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8296CB44:
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

__attribute__((alias("__imp__sub_8296CB68"))) PPC_WEAK_FUNC(sub_8296CB68);
PPC_FUNC_IMPL(__imp__sub_8296CB68) {
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
	// bl 0x8296caf8
	ctx.lr = 0x8296CB88;
	sub_8296CAF8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296cb98
	if (ctx.cr0.eq) goto loc_8296CB98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296CB98;
	sub_823FD208(ctx, base);
loc_8296CB98:
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

__attribute__((alias("__imp__sub_8296CBB8"))) PPC_WEAK_FUNC(sub_8296CBB8);
PPC_FUNC_IMPL(__imp__sub_8296CBB8) {
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
	// bl 0x82e512a0
	ctx.lr = 0x8296CBCC;
	sub_82E512A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82de7330
	ctx.lr = 0x8296CBD8;
	sub_82DE7330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x8296CBE0;
	sub_82DE7330(ctx, base);
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

__attribute__((alias("__imp__sub_8296CBF8"))) PPC_WEAK_FUNC(sub_8296CBF8);
PPC_FUNC_IMPL(__imp__sub_8296CBF8) {
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
	ctx.lr = 0x8296CC18;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23872
	ctx.r11.s64 = ctx.r11.s64 + -23872;
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

__attribute__((alias("__imp__sub_8296CC48"))) PPC_WEAK_FUNC(sub_8296CC48);
PPC_FUNC_IMPL(__imp__sub_8296CC48) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23872
	ctx.r11.s64 = ctx.r11.s64 + -23872;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8296CC6C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296cc94
	if (ctx.cr0.eq) goto loc_8296CC94;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296cc94
	if (ctx.cr6.eq) goto loc_8296CC94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8296CC94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8296CC94:
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

__attribute__((alias("__imp__sub_8296CCB8"))) PPC_WEAK_FUNC(sub_8296CCB8);
PPC_FUNC_IMPL(__imp__sub_8296CCB8) {
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
	// bl 0x8296cc48
	ctx.lr = 0x8296CCD8;
	sub_8296CC48(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296cce8
	if (ctx.cr0.eq) goto loc_8296CCE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296CCE8;
	sub_823FD208(ctx, base);
loc_8296CCE8:
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

__attribute__((alias("__imp__sub_8296CD08"))) PPC_WEAK_FUNC(sub_8296CD08);
PPC_FUNC_IMPL(__imp__sub_8296CD08) {
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
	ctx.lr = 0x8296CD28;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23820
	ctx.r11.s64 = ctx.r11.s64 + -23820;
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

__attribute__((alias("__imp__sub_8296CD58"))) PPC_WEAK_FUNC(sub_8296CD58);
PPC_FUNC_IMPL(__imp__sub_8296CD58) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23820
	ctx.r11.s64 = ctx.r11.s64 + -23820;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8296CD7C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296cda4
	if (ctx.cr0.eq) goto loc_8296CDA4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296cda4
	if (ctx.cr6.eq) goto loc_8296CDA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8296CDA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8296CDA4:
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

__attribute__((alias("__imp__sub_8296CDC8"))) PPC_WEAK_FUNC(sub_8296CDC8);
PPC_FUNC_IMPL(__imp__sub_8296CDC8) {
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
	// bl 0x8296cd58
	ctx.lr = 0x8296CDE8;
	sub_8296CD58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296cdf8
	if (ctx.cr0.eq) goto loc_8296CDF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296CDF8;
	sub_823FD208(ctx, base);
loc_8296CDF8:
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

__attribute__((alias("__imp__sub_8296CE18"))) PPC_WEAK_FUNC(sub_8296CE18);
PPC_FUNC_IMPL(__imp__sub_8296CE18) {
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
	ctx.lr = 0x8296CE38;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23768
	ctx.r11.s64 = ctx.r11.s64 + -23768;
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

__attribute__((alias("__imp__sub_8296CE68"))) PPC_WEAK_FUNC(sub_8296CE68);
PPC_FUNC_IMPL(__imp__sub_8296CE68) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23768
	ctx.r11.s64 = ctx.r11.s64 + -23768;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8296CE8C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296ceb4
	if (ctx.cr0.eq) goto loc_8296CEB4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296ceb4
	if (ctx.cr6.eq) goto loc_8296CEB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8296CEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8296CEB4:
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

__attribute__((alias("__imp__sub_8296CED8"))) PPC_WEAK_FUNC(sub_8296CED8);
PPC_FUNC_IMPL(__imp__sub_8296CED8) {
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
	// bl 0x8296ce68
	ctx.lr = 0x8296CEF8;
	sub_8296CE68(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296cf08
	if (ctx.cr0.eq) goto loc_8296CF08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296CF08;
	sub_823FD208(ctx, base);
loc_8296CF08:
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

__attribute__((alias("__imp__sub_8296CF28"))) PPC_WEAK_FUNC(sub_8296CF28);
PPC_FUNC_IMPL(__imp__sub_8296CF28) {
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
	ctx.lr = 0x8296CF48;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23716
	ctx.r11.s64 = ctx.r11.s64 + -23716;
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

__attribute__((alias("__imp__sub_8296CF78"))) PPC_WEAK_FUNC(sub_8296CF78);
PPC_FUNC_IMPL(__imp__sub_8296CF78) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23716
	ctx.r11.s64 = ctx.r11.s64 + -23716;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8296CF9C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296cfc4
	if (ctx.cr0.eq) goto loc_8296CFC4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296cfc4
	if (ctx.cr6.eq) goto loc_8296CFC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8296CFC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8296CFC4:
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

__attribute__((alias("__imp__sub_8296CFE8"))) PPC_WEAK_FUNC(sub_8296CFE8);
PPC_FUNC_IMPL(__imp__sub_8296CFE8) {
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
	// bl 0x8296cf78
	ctx.lr = 0x8296D008;
	sub_8296CF78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296d018
	if (ctx.cr0.eq) goto loc_8296D018;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296D018;
	sub_823FD208(ctx, base);
loc_8296D018:
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

__attribute__((alias("__imp__sub_8296D038"))) PPC_WEAK_FUNC(sub_8296D038);
PPC_FUNC_IMPL(__imp__sub_8296D038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e512a0
	ctx.lr = 0x8296D048;
	sub_82E512A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82967460
	ctx.lr = 0x8296D050;
	sub_82967460(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8296D060"))) PPC_WEAK_FUNC(sub_8296D060);
PPC_FUNC_IMPL(__imp__sub_8296D060) {
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
	ctx.lr = 0x8296D080;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23664
	ctx.r11.s64 = ctx.r11.s64 + -23664;
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

__attribute__((alias("__imp__sub_8296D0B0"))) PPC_WEAK_FUNC(sub_8296D0B0);
PPC_FUNC_IMPL(__imp__sub_8296D0B0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23664
	ctx.r11.s64 = ctx.r11.s64 + -23664;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8296D0D4;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296d0fc
	if (ctx.cr0.eq) goto loc_8296D0FC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d0fc
	if (ctx.cr6.eq) goto loc_8296D0FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8296D0FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8296D0FC:
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

__attribute__((alias("__imp__sub_8296D120"))) PPC_WEAK_FUNC(sub_8296D120);
PPC_FUNC_IMPL(__imp__sub_8296D120) {
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
	// bl 0x8296d0b0
	ctx.lr = 0x8296D140;
	sub_8296D0B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296d150
	if (ctx.cr0.eq) goto loc_8296D150;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296D150;
	sub_823FD208(ctx, base);
loc_8296D150:
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

__attribute__((alias("__imp__sub_8296D170"))) PPC_WEAK_FUNC(sub_8296D170);
PPC_FUNC_IMPL(__imp__sub_8296D170) {
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
	ctx.lr = 0x8296D190;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23612
	ctx.r11.s64 = ctx.r11.s64 + -23612;
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

__attribute__((alias("__imp__sub_8296D1C0"))) PPC_WEAK_FUNC(sub_8296D1C0);
PPC_FUNC_IMPL(__imp__sub_8296D1C0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23612
	ctx.r11.s64 = ctx.r11.s64 + -23612;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8296D1E4;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296d20c
	if (ctx.cr0.eq) goto loc_8296D20C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d20c
	if (ctx.cr6.eq) goto loc_8296D20C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8296D20C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8296D20C:
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

__attribute__((alias("__imp__sub_8296D230"))) PPC_WEAK_FUNC(sub_8296D230);
PPC_FUNC_IMPL(__imp__sub_8296D230) {
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
	// bl 0x8296d1c0
	ctx.lr = 0x8296D250;
	sub_8296D1C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296d260
	if (ctx.cr0.eq) goto loc_8296D260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296D260;
	sub_823FD208(ctx, base);
loc_8296D260:
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

__attribute__((alias("__imp__sub_8296D280"))) PPC_WEAK_FUNC(sub_8296D280);
PPC_FUNC_IMPL(__imp__sub_8296D280) {
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
	ctx.lr = 0x8296D2A0;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23560
	ctx.r11.s64 = ctx.r11.s64 + -23560;
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

__attribute__((alias("__imp__sub_8296D2D0"))) PPC_WEAK_FUNC(sub_8296D2D0);
PPC_FUNC_IMPL(__imp__sub_8296D2D0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23560
	ctx.r11.s64 = ctx.r11.s64 + -23560;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8296D2F4;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296d31c
	if (ctx.cr0.eq) goto loc_8296D31C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d31c
	if (ctx.cr6.eq) goto loc_8296D31C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8296D31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8296D31C:
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

__attribute__((alias("__imp__sub_8296D340"))) PPC_WEAK_FUNC(sub_8296D340);
PPC_FUNC_IMPL(__imp__sub_8296D340) {
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
	// bl 0x8296d2d0
	ctx.lr = 0x8296D360;
	sub_8296D2D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296d370
	if (ctx.cr0.eq) goto loc_8296D370;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296D370;
	sub_823FD208(ctx, base);
loc_8296D370:
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

__attribute__((alias("__imp__sub_8296D390"))) PPC_WEAK_FUNC(sub_8296D390);
PPC_FUNC_IMPL(__imp__sub_8296D390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296D398;
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
	ctx.lr = 0x8296D3AC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296d3d8
	if (ctx.cr0.eq) goto loc_8296D3D8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-25152
	ctx.r10.s64 = ctx.r10.s64 + -25152;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296d3dc
	goto loc_8296D3DC;
loc_8296D3D8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296D3DC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d3ec
	if (ctx.cr6.eq) goto loc_8296D3EC;
	// bl 0x823e19b0
	ctx.lr = 0x8296D3EC;
	sub_823E19B0(ctx, base);
loc_8296D3EC:
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

__attribute__((alias("__imp__sub_8296D400"))) PPC_WEAK_FUNC(sub_8296D400);
PPC_FUNC_IMPL(__imp__sub_8296D400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296D408;
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
	ctx.lr = 0x8296D41C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296d448
	if (ctx.cr0.eq) goto loc_8296D448;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-25100
	ctx.r10.s64 = ctx.r10.s64 + -25100;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296d44c
	goto loc_8296D44C;
loc_8296D448:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296D44C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d45c
	if (ctx.cr6.eq) goto loc_8296D45C;
	// bl 0x823e19b0
	ctx.lr = 0x8296D45C;
	sub_823E19B0(ctx, base);
loc_8296D45C:
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

__attribute__((alias("__imp__sub_8296D470"))) PPC_WEAK_FUNC(sub_8296D470);
PPC_FUNC_IMPL(__imp__sub_8296D470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296D478;
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
	ctx.lr = 0x8296D48C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296d4b8
	if (ctx.cr0.eq) goto loc_8296D4B8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-25048
	ctx.r10.s64 = ctx.r10.s64 + -25048;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296d4bc
	goto loc_8296D4BC;
loc_8296D4B8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296D4BC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d4cc
	if (ctx.cr6.eq) goto loc_8296D4CC;
	// bl 0x823e19b0
	ctx.lr = 0x8296D4CC;
	sub_823E19B0(ctx, base);
loc_8296D4CC:
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

__attribute__((alias("__imp__sub_8296D4E0"))) PPC_WEAK_FUNC(sub_8296D4E0);
PPC_FUNC_IMPL(__imp__sub_8296D4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296D4E8;
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
	ctx.lr = 0x8296D4FC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296d528
	if (ctx.cr0.eq) goto loc_8296D528;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24996
	ctx.r10.s64 = ctx.r10.s64 + -24996;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296d52c
	goto loc_8296D52C;
loc_8296D528:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296D52C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d53c
	if (ctx.cr6.eq) goto loc_8296D53C;
	// bl 0x823e19b0
	ctx.lr = 0x8296D53C;
	sub_823E19B0(ctx, base);
loc_8296D53C:
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

__attribute__((alias("__imp__sub_8296D550"))) PPC_WEAK_FUNC(sub_8296D550);
PPC_FUNC_IMPL(__imp__sub_8296D550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296D558;
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
	ctx.lr = 0x8296D56C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296d598
	if (ctx.cr0.eq) goto loc_8296D598;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24944
	ctx.r10.s64 = ctx.r10.s64 + -24944;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296d59c
	goto loc_8296D59C;
loc_8296D598:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296D59C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d5ac
	if (ctx.cr6.eq) goto loc_8296D5AC;
	// bl 0x823e19b0
	ctx.lr = 0x8296D5AC;
	sub_823E19B0(ctx, base);
loc_8296D5AC:
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

__attribute__((alias("__imp__sub_8296D5C0"))) PPC_WEAK_FUNC(sub_8296D5C0);
PPC_FUNC_IMPL(__imp__sub_8296D5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296D5C8;
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
	ctx.lr = 0x8296D5DC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296d608
	if (ctx.cr0.eq) goto loc_8296D608;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24892
	ctx.r10.s64 = ctx.r10.s64 + -24892;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296d60c
	goto loc_8296D60C;
loc_8296D608:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296D60C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d61c
	if (ctx.cr6.eq) goto loc_8296D61C;
	// bl 0x823e19b0
	ctx.lr = 0x8296D61C;
	sub_823E19B0(ctx, base);
loc_8296D61C:
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

__attribute__((alias("__imp__sub_8296D630"))) PPC_WEAK_FUNC(sub_8296D630);
PPC_FUNC_IMPL(__imp__sub_8296D630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296D638;
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
	ctx.lr = 0x8296D64C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296d678
	if (ctx.cr0.eq) goto loc_8296D678;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24840
	ctx.r10.s64 = ctx.r10.s64 + -24840;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296d67c
	goto loc_8296D67C;
loc_8296D678:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296D67C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d68c
	if (ctx.cr6.eq) goto loc_8296D68C;
	// bl 0x823e19b0
	ctx.lr = 0x8296D68C;
	sub_823E19B0(ctx, base);
loc_8296D68C:
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

__attribute__((alias("__imp__sub_8296D6A0"))) PPC_WEAK_FUNC(sub_8296D6A0);
PPC_FUNC_IMPL(__imp__sub_8296D6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296D6A8;
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
	ctx.lr = 0x8296D6BC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296d6e8
	if (ctx.cr0.eq) goto loc_8296D6E8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24788
	ctx.r10.s64 = ctx.r10.s64 + -24788;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296d6ec
	goto loc_8296D6EC;
loc_8296D6E8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296D6EC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d6fc
	if (ctx.cr6.eq) goto loc_8296D6FC;
	// bl 0x823e19b0
	ctx.lr = 0x8296D6FC;
	sub_823E19B0(ctx, base);
loc_8296D6FC:
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

__attribute__((alias("__imp__sub_8296D710"))) PPC_WEAK_FUNC(sub_8296D710);
PPC_FUNC_IMPL(__imp__sub_8296D710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296D718;
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
	ctx.lr = 0x8296D72C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296d758
	if (ctx.cr0.eq) goto loc_8296D758;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24736
	ctx.r10.s64 = ctx.r10.s64 + -24736;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296d75c
	goto loc_8296D75C;
loc_8296D758:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296D75C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d76c
	if (ctx.cr6.eq) goto loc_8296D76C;
	// bl 0x823e19b0
	ctx.lr = 0x8296D76C;
	sub_823E19B0(ctx, base);
loc_8296D76C:
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

__attribute__((alias("__imp__sub_8296D780"))) PPC_WEAK_FUNC(sub_8296D780);
PPC_FUNC_IMPL(__imp__sub_8296D780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296D788;
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
	ctx.lr = 0x8296D79C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296d7c8
	if (ctx.cr0.eq) goto loc_8296D7C8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24684
	ctx.r10.s64 = ctx.r10.s64 + -24684;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296d7cc
	goto loc_8296D7CC;
loc_8296D7C8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296D7CC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d7dc
	if (ctx.cr6.eq) goto loc_8296D7DC;
	// bl 0x823e19b0
	ctx.lr = 0x8296D7DC;
	sub_823E19B0(ctx, base);
loc_8296D7DC:
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

__attribute__((alias("__imp__sub_8296D7F0"))) PPC_WEAK_FUNC(sub_8296D7F0);
PPC_FUNC_IMPL(__imp__sub_8296D7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296D7F8;
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
	ctx.lr = 0x8296D80C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296d838
	if (ctx.cr0.eq) goto loc_8296D838;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24632
	ctx.r10.s64 = ctx.r10.s64 + -24632;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296d83c
	goto loc_8296D83C;
loc_8296D838:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296D83C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d84c
	if (ctx.cr6.eq) goto loc_8296D84C;
	// bl 0x823e19b0
	ctx.lr = 0x8296D84C;
	sub_823E19B0(ctx, base);
loc_8296D84C:
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

__attribute__((alias("__imp__sub_8296D860"))) PPC_WEAK_FUNC(sub_8296D860);
PPC_FUNC_IMPL(__imp__sub_8296D860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296D868;
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
	ctx.lr = 0x8296D87C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296d8a8
	if (ctx.cr0.eq) goto loc_8296D8A8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24580
	ctx.r10.s64 = ctx.r10.s64 + -24580;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296d8ac
	goto loc_8296D8AC;
loc_8296D8A8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296D8AC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d8bc
	if (ctx.cr6.eq) goto loc_8296D8BC;
	// bl 0x823e19b0
	ctx.lr = 0x8296D8BC;
	sub_823E19B0(ctx, base);
loc_8296D8BC:
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

__attribute__((alias("__imp__sub_8296D8D0"))) PPC_WEAK_FUNC(sub_8296D8D0);
PPC_FUNC_IMPL(__imp__sub_8296D8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296D8D8;
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
	ctx.lr = 0x8296D8EC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296d918
	if (ctx.cr0.eq) goto loc_8296D918;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24528
	ctx.r10.s64 = ctx.r10.s64 + -24528;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296d91c
	goto loc_8296D91C;
loc_8296D918:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296D91C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d92c
	if (ctx.cr6.eq) goto loc_8296D92C;
	// bl 0x823e19b0
	ctx.lr = 0x8296D92C;
	sub_823E19B0(ctx, base);
loc_8296D92C:
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

__attribute__((alias("__imp__sub_8296D940"))) PPC_WEAK_FUNC(sub_8296D940);
PPC_FUNC_IMPL(__imp__sub_8296D940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296D948;
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
	ctx.lr = 0x8296D95C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296d988
	if (ctx.cr0.eq) goto loc_8296D988;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24476
	ctx.r10.s64 = ctx.r10.s64 + -24476;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296d98c
	goto loc_8296D98C;
loc_8296D988:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296D98C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296d99c
	if (ctx.cr6.eq) goto loc_8296D99C;
	// bl 0x823e19b0
	ctx.lr = 0x8296D99C;
	sub_823E19B0(ctx, base);
loc_8296D99C:
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

__attribute__((alias("__imp__sub_8296D9B0"))) PPC_WEAK_FUNC(sub_8296D9B0);
PPC_FUNC_IMPL(__imp__sub_8296D9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296D9B8;
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
	ctx.lr = 0x8296D9CC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296d9f8
	if (ctx.cr0.eq) goto loc_8296D9F8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24424
	ctx.r10.s64 = ctx.r10.s64 + -24424;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296d9fc
	goto loc_8296D9FC;
loc_8296D9F8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296D9FC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296da0c
	if (ctx.cr6.eq) goto loc_8296DA0C;
	// bl 0x823e19b0
	ctx.lr = 0x8296DA0C;
	sub_823E19B0(ctx, base);
loc_8296DA0C:
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

__attribute__((alias("__imp__sub_8296DA20"))) PPC_WEAK_FUNC(sub_8296DA20);
PPC_FUNC_IMPL(__imp__sub_8296DA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296DA28;
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
	ctx.lr = 0x8296DA3C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296da68
	if (ctx.cr0.eq) goto loc_8296DA68;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24372
	ctx.r10.s64 = ctx.r10.s64 + -24372;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296da6c
	goto loc_8296DA6C;
loc_8296DA68:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296DA6C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296da7c
	if (ctx.cr6.eq) goto loc_8296DA7C;
	// bl 0x823e19b0
	ctx.lr = 0x8296DA7C;
	sub_823E19B0(ctx, base);
loc_8296DA7C:
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

__attribute__((alias("__imp__sub_8296DA90"))) PPC_WEAK_FUNC(sub_8296DA90);
PPC_FUNC_IMPL(__imp__sub_8296DA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296DA98;
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
	ctx.lr = 0x8296DAAC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296dad8
	if (ctx.cr0.eq) goto loc_8296DAD8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24320
	ctx.r10.s64 = ctx.r10.s64 + -24320;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296dadc
	goto loc_8296DADC;
loc_8296DAD8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296DADC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296daec
	if (ctx.cr6.eq) goto loc_8296DAEC;
	// bl 0x823e19b0
	ctx.lr = 0x8296DAEC;
	sub_823E19B0(ctx, base);
loc_8296DAEC:
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

__attribute__((alias("__imp__sub_8296DB00"))) PPC_WEAK_FUNC(sub_8296DB00);
PPC_FUNC_IMPL(__imp__sub_8296DB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296DB08;
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
	ctx.lr = 0x8296DB1C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296db48
	if (ctx.cr0.eq) goto loc_8296DB48;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24268
	ctx.r10.s64 = ctx.r10.s64 + -24268;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296db4c
	goto loc_8296DB4C;
loc_8296DB48:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296DB4C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296db5c
	if (ctx.cr6.eq) goto loc_8296DB5C;
	// bl 0x823e19b0
	ctx.lr = 0x8296DB5C;
	sub_823E19B0(ctx, base);
loc_8296DB5C:
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

__attribute__((alias("__imp__sub_8296DB70"))) PPC_WEAK_FUNC(sub_8296DB70);
PPC_FUNC_IMPL(__imp__sub_8296DB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296DB78;
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
	ctx.lr = 0x8296DB8C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296dbb8
	if (ctx.cr0.eq) goto loc_8296DBB8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24216
	ctx.r10.s64 = ctx.r10.s64 + -24216;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296dbbc
	goto loc_8296DBBC;
loc_8296DBB8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296DBBC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296dbcc
	if (ctx.cr6.eq) goto loc_8296DBCC;
	// bl 0x823e19b0
	ctx.lr = 0x8296DBCC;
	sub_823E19B0(ctx, base);
loc_8296DBCC:
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

__attribute__((alias("__imp__sub_8296DBE0"))) PPC_WEAK_FUNC(sub_8296DBE0);
PPC_FUNC_IMPL(__imp__sub_8296DBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296DBE8;
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
	ctx.lr = 0x8296DBFC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296dc28
	if (ctx.cr0.eq) goto loc_8296DC28;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24164
	ctx.r10.s64 = ctx.r10.s64 + -24164;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296dc2c
	goto loc_8296DC2C;
loc_8296DC28:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296DC2C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296dc3c
	if (ctx.cr6.eq) goto loc_8296DC3C;
	// bl 0x823e19b0
	ctx.lr = 0x8296DC3C;
	sub_823E19B0(ctx, base);
loc_8296DC3C:
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

__attribute__((alias("__imp__sub_8296DC50"))) PPC_WEAK_FUNC(sub_8296DC50);
PPC_FUNC_IMPL(__imp__sub_8296DC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296DC58;
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
	ctx.lr = 0x8296DC6C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296dc98
	if (ctx.cr0.eq) goto loc_8296DC98;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24112
	ctx.r10.s64 = ctx.r10.s64 + -24112;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296dc9c
	goto loc_8296DC9C;
loc_8296DC98:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296DC9C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296dcac
	if (ctx.cr6.eq) goto loc_8296DCAC;
	// bl 0x823e19b0
	ctx.lr = 0x8296DCAC;
	sub_823E19B0(ctx, base);
loc_8296DCAC:
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

__attribute__((alias("__imp__sub_8296DCC0"))) PPC_WEAK_FUNC(sub_8296DCC0);
PPC_FUNC_IMPL(__imp__sub_8296DCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296DCC8;
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
	ctx.lr = 0x8296DCDC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296dd08
	if (ctx.cr0.eq) goto loc_8296DD08;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24060
	ctx.r10.s64 = ctx.r10.s64 + -24060;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296dd0c
	goto loc_8296DD0C;
loc_8296DD08:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296DD0C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296dd1c
	if (ctx.cr6.eq) goto loc_8296DD1C;
	// bl 0x823e19b0
	ctx.lr = 0x8296DD1C;
	sub_823E19B0(ctx, base);
loc_8296DD1C:
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

__attribute__((alias("__imp__sub_8296DD30"))) PPC_WEAK_FUNC(sub_8296DD30);
PPC_FUNC_IMPL(__imp__sub_8296DD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296DD38;
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
	ctx.lr = 0x8296DD4C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296dd78
	if (ctx.cr0.eq) goto loc_8296DD78;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24008
	ctx.r10.s64 = ctx.r10.s64 + -24008;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296dd7c
	goto loc_8296DD7C;
loc_8296DD78:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296DD7C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296dd8c
	if (ctx.cr6.eq) goto loc_8296DD8C;
	// bl 0x823e19b0
	ctx.lr = 0x8296DD8C;
	sub_823E19B0(ctx, base);
loc_8296DD8C:
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

__attribute__((alias("__imp__sub_8296DDA0"))) PPC_WEAK_FUNC(sub_8296DDA0);
PPC_FUNC_IMPL(__imp__sub_8296DDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296DDA8;
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
	ctx.lr = 0x8296DDBC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296dde8
	if (ctx.cr0.eq) goto loc_8296DDE8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-23956
	ctx.r10.s64 = ctx.r10.s64 + -23956;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296ddec
	goto loc_8296DDEC;
loc_8296DDE8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296DDEC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296ddfc
	if (ctx.cr6.eq) goto loc_8296DDFC;
	// bl 0x823e19b0
	ctx.lr = 0x8296DDFC;
	sub_823E19B0(ctx, base);
loc_8296DDFC:
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

__attribute__((alias("__imp__sub_8296DE10"))) PPC_WEAK_FUNC(sub_8296DE10);
PPC_FUNC_IMPL(__imp__sub_8296DE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296DE18;
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
	ctx.lr = 0x8296DE2C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296de58
	if (ctx.cr0.eq) goto loc_8296DE58;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-23904
	ctx.r10.s64 = ctx.r10.s64 + -23904;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296de5c
	goto loc_8296DE5C;
loc_8296DE58:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296DE5C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296de6c
	if (ctx.cr6.eq) goto loc_8296DE6C;
	// bl 0x823e19b0
	ctx.lr = 0x8296DE6C;
	sub_823E19B0(ctx, base);
loc_8296DE6C:
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

__attribute__((alias("__imp__sub_8296DE80"))) PPC_WEAK_FUNC(sub_8296DE80);
PPC_FUNC_IMPL(__imp__sub_8296DE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296DE88;
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
	ctx.lr = 0x8296DE9C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296dec8
	if (ctx.cr0.eq) goto loc_8296DEC8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-23852
	ctx.r10.s64 = ctx.r10.s64 + -23852;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296decc
	goto loc_8296DECC;
loc_8296DEC8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296DECC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296dedc
	if (ctx.cr6.eq) goto loc_8296DEDC;
	// bl 0x823e19b0
	ctx.lr = 0x8296DEDC;
	sub_823E19B0(ctx, base);
loc_8296DEDC:
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

__attribute__((alias("__imp__sub_8296DEF0"))) PPC_WEAK_FUNC(sub_8296DEF0);
PPC_FUNC_IMPL(__imp__sub_8296DEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296DEF8;
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
	ctx.lr = 0x8296DF0C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296df38
	if (ctx.cr0.eq) goto loc_8296DF38;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-23800
	ctx.r10.s64 = ctx.r10.s64 + -23800;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296df3c
	goto loc_8296DF3C;
loc_8296DF38:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296DF3C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296df4c
	if (ctx.cr6.eq) goto loc_8296DF4C;
	// bl 0x823e19b0
	ctx.lr = 0x8296DF4C;
	sub_823E19B0(ctx, base);
loc_8296DF4C:
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

__attribute__((alias("__imp__sub_8296DF60"))) PPC_WEAK_FUNC(sub_8296DF60);
PPC_FUNC_IMPL(__imp__sub_8296DF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296DF68;
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
	ctx.lr = 0x8296DF7C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296dfa8
	if (ctx.cr0.eq) goto loc_8296DFA8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-23748
	ctx.r10.s64 = ctx.r10.s64 + -23748;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296dfac
	goto loc_8296DFAC;
loc_8296DFA8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296DFAC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296dfbc
	if (ctx.cr6.eq) goto loc_8296DFBC;
	// bl 0x823e19b0
	ctx.lr = 0x8296DFBC;
	sub_823E19B0(ctx, base);
loc_8296DFBC:
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

__attribute__((alias("__imp__sub_8296DFD0"))) PPC_WEAK_FUNC(sub_8296DFD0);
PPC_FUNC_IMPL(__imp__sub_8296DFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296DFD8;
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
	ctx.lr = 0x8296DFEC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296e018
	if (ctx.cr0.eq) goto loc_8296E018;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-23696
	ctx.r10.s64 = ctx.r10.s64 + -23696;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296e01c
	goto loc_8296E01C;
loc_8296E018:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296E01C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296e02c
	if (ctx.cr6.eq) goto loc_8296E02C;
	// bl 0x823e19b0
	ctx.lr = 0x8296E02C;
	sub_823E19B0(ctx, base);
loc_8296E02C:
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

__attribute__((alias("__imp__sub_8296E040"))) PPC_WEAK_FUNC(sub_8296E040);
PPC_FUNC_IMPL(__imp__sub_8296E040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296E048;
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
	ctx.lr = 0x8296E05C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296e088
	if (ctx.cr0.eq) goto loc_8296E088;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-23644
	ctx.r10.s64 = ctx.r10.s64 + -23644;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296e08c
	goto loc_8296E08C;
loc_8296E088:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296E08C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296e09c
	if (ctx.cr6.eq) goto loc_8296E09C;
	// bl 0x823e19b0
	ctx.lr = 0x8296E09C;
	sub_823E19B0(ctx, base);
loc_8296E09C:
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

__attribute__((alias("__imp__sub_8296E0B0"))) PPC_WEAK_FUNC(sub_8296E0B0);
PPC_FUNC_IMPL(__imp__sub_8296E0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296E0B8;
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
	ctx.lr = 0x8296E0CC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296e0f8
	if (ctx.cr0.eq) goto loc_8296E0F8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-23592
	ctx.r10.s64 = ctx.r10.s64 + -23592;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296e0fc
	goto loc_8296E0FC;
loc_8296E0F8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296E0FC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296e10c
	if (ctx.cr6.eq) goto loc_8296E10C;
	// bl 0x823e19b0
	ctx.lr = 0x8296E10C;
	sub_823E19B0(ctx, base);
loc_8296E10C:
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

__attribute__((alias("__imp__sub_8296E120"))) PPC_WEAK_FUNC(sub_8296E120);
PPC_FUNC_IMPL(__imp__sub_8296E120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296E128;
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
	ctx.lr = 0x8296E13C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8296e168
	if (ctx.cr0.eq) goto loc_8296E168;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-23540
	ctx.r10.s64 = ctx.r10.s64 + -23540;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8296e16c
	goto loc_8296E16C;
loc_8296E168:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8296E16C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8296e17c
	if (ctx.cr6.eq) goto loc_8296E17C;
	// bl 0x823e19b0
	ctx.lr = 0x8296E17C;
	sub_823E19B0(ctx, base);
loc_8296E17C:
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

__attribute__((alias("__imp__sub_8296E190"))) PPC_WEAK_FUNC(sub_8296E190);
PPC_FUNC_IMPL(__imp__sub_8296E190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296E198;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20856);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e1dc
	if (!ctx.cr0.eq) goto loc_8296E1DC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20856, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296E1BC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82965b88
	ctx.lr = 0x8296E1C4;
	sub_82965B88(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23524
	ctx.r4.s64 = ctx.r11.s64 + -23524;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296E1D8;
	sub_82E4E838(ctx, base);
	// lwz r11,-20856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20856);
loc_8296E1DC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e208
	if (!ctx.cr0.eq) goto loc_8296E208;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20856, ctx.r11.u32);
	// addi r3,r10,-20864
	ctx.r3.s64 = ctx.r10.s64 + -20864;
	// bl 0x829674c0
	ctx.lr = 0x8296E1F8;
	sub_829674C0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7080
	ctx.r3.s64 = ctx.r11.s64 + 7080;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296E204;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20856);
loc_8296E208:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e24c
	if (!ctx.cr0.eq) goto loc_8296E24C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20856, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20880
	ctx.r31.s64 = ctx.r29.s64 + -20880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296E22C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25184
	ctx.r11.s64 = ctx.r11.s64 + -25184;
	// stw r11,-20880(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20880, ctx.r11.u32);
	// bl 0x82967ec0
	ctx.lr = 0x8296E240;
	sub_82967EC0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7064
	ctx.r3.s64 = ctx.r11.s64 + 7064;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296E24C;
	sub_82A7E6B0(ctx, base);
loc_8296E24C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296E258"))) PPC_WEAK_FUNC(sub_8296E258);
PPC_FUNC_IMPL(__imp__sub_8296E258) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-27372
	ctx.r11.s64 = ctx.r11.s64 + -27372;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296E290;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296e2a0
	if (ctx.cr0.eq) goto loc_8296E2A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296E2A0;
	sub_823FD208(ctx, base);
loc_8296E2A0:
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

__attribute__((alias("__imp__sub_8296E2C0"))) PPC_WEAK_FUNC(sub_8296E2C0);
PPC_FUNC_IMPL(__imp__sub_8296E2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296E2C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20828);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e30c
	if (!ctx.cr0.eq) goto loc_8296E30C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20828, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296E2EC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82965bd8
	ctx.lr = 0x8296E2F4;
	sub_82965BD8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23500
	ctx.r4.s64 = ctx.r11.s64 + -23500;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296E308;
	sub_82E4E838(ctx, base);
	// lwz r11,-20828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20828);
loc_8296E30C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e338
	if (!ctx.cr0.eq) goto loc_8296E338;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20828, ctx.r11.u32);
	// addi r3,r10,-20836
	ctx.r3.s64 = ctx.r10.s64 + -20836;
	// bl 0x82967510
	ctx.lr = 0x8296E328;
	sub_82967510(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7120
	ctx.r3.s64 = ctx.r11.s64 + 7120;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296E334;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20828);
loc_8296E338:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e37c
	if (!ctx.cr0.eq) goto loc_8296E37C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20828, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20852
	ctx.r31.s64 = ctx.r29.s64 + -20852;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296E35C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25132
	ctx.r11.s64 = ctx.r11.s64 + -25132;
	// stw r11,-20852(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20852, ctx.r11.u32);
	// bl 0x82967f08
	ctx.lr = 0x8296E370;
	sub_82967F08(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7104
	ctx.r3.s64 = ctx.r11.s64 + 7104;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296E37C;
	sub_82A7E6B0(ctx, base);
loc_8296E37C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296E388"))) PPC_WEAK_FUNC(sub_8296E388);
PPC_FUNC_IMPL(__imp__sub_8296E388) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-27312
	ctx.r11.s64 = ctx.r11.s64 + -27312;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296E3C0;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296e3d0
	if (ctx.cr0.eq) goto loc_8296E3D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296E3D0;
	sub_823FD208(ctx, base);
loc_8296E3D0:
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

__attribute__((alias("__imp__sub_8296E3F0"))) PPC_WEAK_FUNC(sub_8296E3F0);
PPC_FUNC_IMPL(__imp__sub_8296E3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296E3F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20800);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e43c
	if (!ctx.cr0.eq) goto loc_8296E43C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20800(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20800, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296E41C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82965c28
	ctx.lr = 0x8296E424;
	sub_82965C28(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23480
	ctx.r4.s64 = ctx.r11.s64 + -23480;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296E438;
	sub_82E4E838(ctx, base);
	// lwz r11,-20800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20800);
loc_8296E43C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e468
	if (!ctx.cr0.eq) goto loc_8296E468;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20800(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20800, ctx.r11.u32);
	// addi r3,r10,-20808
	ctx.r3.s64 = ctx.r10.s64 + -20808;
	// bl 0x82967560
	ctx.lr = 0x8296E458;
	sub_82967560(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7160
	ctx.r3.s64 = ctx.r11.s64 + 7160;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296E464;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20800);
loc_8296E468:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e4ac
	if (!ctx.cr0.eq) goto loc_8296E4AC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20800(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20800, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20824
	ctx.r31.s64 = ctx.r29.s64 + -20824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296E48C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25080
	ctx.r11.s64 = ctx.r11.s64 + -25080;
	// stw r11,-20824(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20824, ctx.r11.u32);
	// bl 0x82967f50
	ctx.lr = 0x8296E4A0;
	sub_82967F50(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7144
	ctx.r3.s64 = ctx.r11.s64 + 7144;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296E4AC;
	sub_82A7E6B0(ctx, base);
loc_8296E4AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296E4B8"))) PPC_WEAK_FUNC(sub_8296E4B8);
PPC_FUNC_IMPL(__imp__sub_8296E4B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-27252
	ctx.r11.s64 = ctx.r11.s64 + -27252;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296E4F0;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296e500
	if (ctx.cr0.eq) goto loc_8296E500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296E500;
	sub_823FD208(ctx, base);
loc_8296E500:
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

__attribute__((alias("__imp__sub_8296E520"))) PPC_WEAK_FUNC(sub_8296E520);
PPC_FUNC_IMPL(__imp__sub_8296E520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296E528;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20772);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e56c
	if (!ctx.cr0.eq) goto loc_8296E56C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20772, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296E54C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82965c78
	ctx.lr = 0x8296E554;
	sub_82965C78(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23440
	ctx.r4.s64 = ctx.r11.s64 + -23440;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296E568;
	sub_82E4E838(ctx, base);
	// lwz r11,-20772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20772);
loc_8296E56C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e598
	if (!ctx.cr0.eq) goto loc_8296E598;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20772, ctx.r11.u32);
	// addi r3,r10,-20780
	ctx.r3.s64 = ctx.r10.s64 + -20780;
	// bl 0x829675b0
	ctx.lr = 0x8296E588;
	sub_829675B0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7200
	ctx.r3.s64 = ctx.r11.s64 + 7200;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296E594;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20772);
loc_8296E598:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e5dc
	if (!ctx.cr0.eq) goto loc_8296E5DC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20772, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20796
	ctx.r31.s64 = ctx.r29.s64 + -20796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296E5BC;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25028
	ctx.r11.s64 = ctx.r11.s64 + -25028;
	// stw r11,-20796(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20796, ctx.r11.u32);
	// bl 0x82967f98
	ctx.lr = 0x8296E5D0;
	sub_82967F98(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7184
	ctx.r3.s64 = ctx.r11.s64 + 7184;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296E5DC;
	sub_82A7E6B0(ctx, base);
loc_8296E5DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296E5E8"))) PPC_WEAK_FUNC(sub_8296E5E8);
PPC_FUNC_IMPL(__imp__sub_8296E5E8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-27176
	ctx.r11.s64 = ctx.r11.s64 + -27176;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296E620;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296e630
	if (ctx.cr0.eq) goto loc_8296E630;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296E630;
	sub_823FD208(ctx, base);
loc_8296E630:
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

__attribute__((alias("__imp__sub_8296E650"))) PPC_WEAK_FUNC(sub_8296E650);
PPC_FUNC_IMPL(__imp__sub_8296E650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296E658;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20744);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e69c
	if (!ctx.cr0.eq) goto loc_8296E69C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20744, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296E67C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82965cc8
	ctx.lr = 0x8296E684;
	sub_82965CC8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23396
	ctx.r4.s64 = ctx.r11.s64 + -23396;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296E698;
	sub_82E4E838(ctx, base);
	// lwz r11,-20744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20744);
loc_8296E69C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e6c8
	if (!ctx.cr0.eq) goto loc_8296E6C8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20744, ctx.r11.u32);
	// addi r3,r10,-20752
	ctx.r3.s64 = ctx.r10.s64 + -20752;
	// bl 0x82967600
	ctx.lr = 0x8296E6B8;
	sub_82967600(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7240
	ctx.r3.s64 = ctx.r11.s64 + 7240;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296E6C4;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20744);
loc_8296E6C8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e70c
	if (!ctx.cr0.eq) goto loc_8296E70C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20744, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20768
	ctx.r31.s64 = ctx.r29.s64 + -20768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296E6EC;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24976
	ctx.r11.s64 = ctx.r11.s64 + -24976;
	// stw r11,-20768(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20768, ctx.r11.u32);
	// bl 0x82967fe0
	ctx.lr = 0x8296E700;
	sub_82967FE0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7224
	ctx.r3.s64 = ctx.r11.s64 + 7224;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296E70C;
	sub_82A7E6B0(ctx, base);
loc_8296E70C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296E718"))) PPC_WEAK_FUNC(sub_8296E718);
PPC_FUNC_IMPL(__imp__sub_8296E718) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-27116
	ctx.r11.s64 = ctx.r11.s64 + -27116;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296E750;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296e760
	if (ctx.cr0.eq) goto loc_8296E760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296E760;
	sub_823FD208(ctx, base);
loc_8296E760:
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

__attribute__((alias("__imp__sub_8296E780"))) PPC_WEAK_FUNC(sub_8296E780);
PPC_FUNC_IMPL(__imp__sub_8296E780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296E788;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20716);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e7cc
	if (!ctx.cr0.eq) goto loc_8296E7CC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20716, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296E7AC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82965d18
	ctx.lr = 0x8296E7B4;
	sub_82965D18(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23356
	ctx.r4.s64 = ctx.r11.s64 + -23356;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296E7C8;
	sub_82E4E838(ctx, base);
	// lwz r11,-20716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20716);
loc_8296E7CC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e7f8
	if (!ctx.cr0.eq) goto loc_8296E7F8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20716, ctx.r11.u32);
	// addi r3,r10,-20724
	ctx.r3.s64 = ctx.r10.s64 + -20724;
	// bl 0x82967650
	ctx.lr = 0x8296E7E8;
	sub_82967650(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7280
	ctx.r3.s64 = ctx.r11.s64 + 7280;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296E7F4;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20716);
loc_8296E7F8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e83c
	if (!ctx.cr0.eq) goto loc_8296E83C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20716, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20740
	ctx.r31.s64 = ctx.r29.s64 + -20740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296E81C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24924
	ctx.r11.s64 = ctx.r11.s64 + -24924;
	// stw r11,-20740(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20740, ctx.r11.u32);
	// bl 0x82968028
	ctx.lr = 0x8296E830;
	sub_82968028(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7264
	ctx.r3.s64 = ctx.r11.s64 + 7264;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296E83C;
	sub_82A7E6B0(ctx, base);
loc_8296E83C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296E848"))) PPC_WEAK_FUNC(sub_8296E848);
PPC_FUNC_IMPL(__imp__sub_8296E848) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-27056
	ctx.r11.s64 = ctx.r11.s64 + -27056;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296E880;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296e890
	if (ctx.cr0.eq) goto loc_8296E890;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296E890;
	sub_823FD208(ctx, base);
loc_8296E890:
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

__attribute__((alias("__imp__sub_8296E8B0"))) PPC_WEAK_FUNC(sub_8296E8B0);
PPC_FUNC_IMPL(__imp__sub_8296E8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296E8B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20688);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e8fc
	if (!ctx.cr0.eq) goto loc_8296E8FC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20688, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296E8DC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82965d68
	ctx.lr = 0x8296E8E4;
	sub_82965D68(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23336
	ctx.r4.s64 = ctx.r11.s64 + -23336;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296E8F8;
	sub_82E4E838(ctx, base);
	// lwz r11,-20688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20688);
loc_8296E8FC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e928
	if (!ctx.cr0.eq) goto loc_8296E928;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20688, ctx.r11.u32);
	// addi r3,r10,-20696
	ctx.r3.s64 = ctx.r10.s64 + -20696;
	// bl 0x829676a0
	ctx.lr = 0x8296E918;
	sub_829676A0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7320
	ctx.r3.s64 = ctx.r11.s64 + 7320;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296E924;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20688);
loc_8296E928:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296e96c
	if (!ctx.cr0.eq) goto loc_8296E96C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20688, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20712
	ctx.r31.s64 = ctx.r29.s64 + -20712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296E94C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24872
	ctx.r11.s64 = ctx.r11.s64 + -24872;
	// stw r11,-20712(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20712, ctx.r11.u32);
	// bl 0x82968070
	ctx.lr = 0x8296E960;
	sub_82968070(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7304
	ctx.r3.s64 = ctx.r11.s64 + 7304;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296E96C;
	sub_82A7E6B0(ctx, base);
loc_8296E96C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296E978"))) PPC_WEAK_FUNC(sub_8296E978);
PPC_FUNC_IMPL(__imp__sub_8296E978) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-26996
	ctx.r11.s64 = ctx.r11.s64 + -26996;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296E9B0;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296e9c0
	if (ctx.cr0.eq) goto loc_8296E9C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296E9C0;
	sub_823FD208(ctx, base);
loc_8296E9C0:
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

__attribute__((alias("__imp__sub_8296E9E0"))) PPC_WEAK_FUNC(sub_8296E9E0);
PPC_FUNC_IMPL(__imp__sub_8296E9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296E9E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20660);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296ea2c
	if (!ctx.cr0.eq) goto loc_8296EA2C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20660(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20660, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296EA0C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82965db8
	ctx.lr = 0x8296EA14;
	sub_82965DB8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23312
	ctx.r4.s64 = ctx.r11.s64 + -23312;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296EA28;
	sub_82E4E838(ctx, base);
	// lwz r11,-20660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20660);
loc_8296EA2C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296ea58
	if (!ctx.cr0.eq) goto loc_8296EA58;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20660(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20660, ctx.r11.u32);
	// addi r3,r10,-20668
	ctx.r3.s64 = ctx.r10.s64 + -20668;
	// bl 0x829676f0
	ctx.lr = 0x8296EA48;
	sub_829676F0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7360
	ctx.r3.s64 = ctx.r11.s64 + 7360;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296EA54;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20660);
loc_8296EA58:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296ea9c
	if (!ctx.cr0.eq) goto loc_8296EA9C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20660(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20660, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20684
	ctx.r31.s64 = ctx.r29.s64 + -20684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296EA7C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24820
	ctx.r11.s64 = ctx.r11.s64 + -24820;
	// stw r11,-20684(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20684, ctx.r11.u32);
	// bl 0x829680b8
	ctx.lr = 0x8296EA90;
	sub_829680B8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7344
	ctx.r3.s64 = ctx.r11.s64 + 7344;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296EA9C;
	sub_82A7E6B0(ctx, base);
loc_8296EA9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296EAA8"))) PPC_WEAK_FUNC(sub_8296EAA8);
PPC_FUNC_IMPL(__imp__sub_8296EAA8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-26936
	ctx.r11.s64 = ctx.r11.s64 + -26936;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296EAE0;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296eaf0
	if (ctx.cr0.eq) goto loc_8296EAF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296EAF0;
	sub_823FD208(ctx, base);
loc_8296EAF0:
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

__attribute__((alias("__imp__sub_8296EB10"))) PPC_WEAK_FUNC(sub_8296EB10);
PPC_FUNC_IMPL(__imp__sub_8296EB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296EB18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20632);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296eb5c
	if (!ctx.cr0.eq) goto loc_8296EB5C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20632, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296EB3C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82965e08
	ctx.lr = 0x8296EB44;
	sub_82965E08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23292
	ctx.r4.s64 = ctx.r11.s64 + -23292;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296EB58;
	sub_82E4E838(ctx, base);
	// lwz r11,-20632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20632);
loc_8296EB5C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296eb88
	if (!ctx.cr0.eq) goto loc_8296EB88;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20632, ctx.r11.u32);
	// addi r3,r10,-20640
	ctx.r3.s64 = ctx.r10.s64 + -20640;
	// bl 0x82967740
	ctx.lr = 0x8296EB78;
	sub_82967740(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7400
	ctx.r3.s64 = ctx.r11.s64 + 7400;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296EB84;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20632);
loc_8296EB88:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296ebcc
	if (!ctx.cr0.eq) goto loc_8296EBCC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20632, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20656
	ctx.r31.s64 = ctx.r29.s64 + -20656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296EBAC;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24768
	ctx.r11.s64 = ctx.r11.s64 + -24768;
	// stw r11,-20656(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20656, ctx.r11.u32);
	// bl 0x82968100
	ctx.lr = 0x8296EBC0;
	sub_82968100(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7384
	ctx.r3.s64 = ctx.r11.s64 + 7384;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296EBCC;
	sub_82A7E6B0(ctx, base);
loc_8296EBCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296EBD8"))) PPC_WEAK_FUNC(sub_8296EBD8);
PPC_FUNC_IMPL(__imp__sub_8296EBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296EBE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20604);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296ec24
	if (!ctx.cr0.eq) goto loc_8296EC24;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20604(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20604, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296EC04;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82965e58
	ctx.lr = 0x8296EC0C;
	sub_82965E58(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23268
	ctx.r4.s64 = ctx.r11.s64 + -23268;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296EC20;
	sub_82E4E838(ctx, base);
	// lwz r11,-20604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20604);
loc_8296EC24:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296ec50
	if (!ctx.cr0.eq) goto loc_8296EC50;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20604(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20604, ctx.r11.u32);
	// addi r3,r10,-20612
	ctx.r3.s64 = ctx.r10.s64 + -20612;
	// bl 0x82967790
	ctx.lr = 0x8296EC40;
	sub_82967790(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7440
	ctx.r3.s64 = ctx.r11.s64 + 7440;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296EC4C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20604);
loc_8296EC50:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296ec94
	if (!ctx.cr0.eq) goto loc_8296EC94;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20604(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20604, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20628
	ctx.r31.s64 = ctx.r29.s64 + -20628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296EC74;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24716
	ctx.r11.s64 = ctx.r11.s64 + -24716;
	// stw r11,-20628(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20628, ctx.r11.u32);
	// bl 0x82968148
	ctx.lr = 0x8296EC88;
	sub_82968148(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7424
	ctx.r3.s64 = ctx.r11.s64 + 7424;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296EC94;
	sub_82A7E6B0(ctx, base);
loc_8296EC94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296ECA0"))) PPC_WEAK_FUNC(sub_8296ECA0);
PPC_FUNC_IMPL(__imp__sub_8296ECA0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-26764
	ctx.r11.s64 = ctx.r11.s64 + -26764;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296ECD8;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296ece8
	if (ctx.cr0.eq) goto loc_8296ECE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296ECE8;
	sub_823FD208(ctx, base);
loc_8296ECE8:
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

__attribute__((alias("__imp__sub_8296ED08"))) PPC_WEAK_FUNC(sub_8296ED08);
PPC_FUNC_IMPL(__imp__sub_8296ED08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296ED10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20576);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296ed54
	if (!ctx.cr0.eq) goto loc_8296ED54;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20576(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20576, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296ED34;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82965ea8
	ctx.lr = 0x8296ED3C;
	sub_82965EA8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23244
	ctx.r4.s64 = ctx.r11.s64 + -23244;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296ED50;
	sub_82E4E838(ctx, base);
	// lwz r11,-20576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20576);
loc_8296ED54:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296ed80
	if (!ctx.cr0.eq) goto loc_8296ED80;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20576(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20576, ctx.r11.u32);
	// addi r3,r10,-20584
	ctx.r3.s64 = ctx.r10.s64 + -20584;
	// bl 0x829677e0
	ctx.lr = 0x8296ED70;
	sub_829677E0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7480
	ctx.r3.s64 = ctx.r11.s64 + 7480;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296ED7C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20576);
loc_8296ED80:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296edc4
	if (!ctx.cr0.eq) goto loc_8296EDC4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20576(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20576, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20600
	ctx.r31.s64 = ctx.r29.s64 + -20600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296EDA4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24664
	ctx.r11.s64 = ctx.r11.s64 + -24664;
	// stw r11,-20600(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20600, ctx.r11.u32);
	// bl 0x82968190
	ctx.lr = 0x8296EDB8;
	sub_82968190(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7464
	ctx.r3.s64 = ctx.r11.s64 + 7464;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296EDC4;
	sub_82A7E6B0(ctx, base);
loc_8296EDC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296EDD0"))) PPC_WEAK_FUNC(sub_8296EDD0);
PPC_FUNC_IMPL(__imp__sub_8296EDD0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-26688
	ctx.r11.s64 = ctx.r11.s64 + -26688;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296EE08;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296ee18
	if (ctx.cr0.eq) goto loc_8296EE18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296EE18;
	sub_823FD208(ctx, base);
loc_8296EE18:
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

__attribute__((alias("__imp__sub_8296EE38"))) PPC_WEAK_FUNC(sub_8296EE38);
PPC_FUNC_IMPL(__imp__sub_8296EE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296EE40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20548);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296ee84
	if (!ctx.cr0.eq) goto loc_8296EE84;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20548(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20548, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296EE64;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82965ef8
	ctx.lr = 0x8296EE6C;
	sub_82965EF8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23216
	ctx.r4.s64 = ctx.r11.s64 + -23216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296EE80;
	sub_82E4E838(ctx, base);
	// lwz r11,-20548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20548);
loc_8296EE84:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296eeb0
	if (!ctx.cr0.eq) goto loc_8296EEB0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20548(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20548, ctx.r11.u32);
	// addi r3,r10,-20556
	ctx.r3.s64 = ctx.r10.s64 + -20556;
	// bl 0x82967830
	ctx.lr = 0x8296EEA0;
	sub_82967830(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7520
	ctx.r3.s64 = ctx.r11.s64 + 7520;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296EEAC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20548);
loc_8296EEB0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296eef4
	if (!ctx.cr0.eq) goto loc_8296EEF4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20548(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20548, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20572
	ctx.r31.s64 = ctx.r29.s64 + -20572;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296EED4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24612
	ctx.r11.s64 = ctx.r11.s64 + -24612;
	// stw r11,-20572(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20572, ctx.r11.u32);
	// bl 0x829681d8
	ctx.lr = 0x8296EEE8;
	sub_829681D8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7504
	ctx.r3.s64 = ctx.r11.s64 + 7504;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296EEF4;
	sub_82A7E6B0(ctx, base);
loc_8296EEF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296EF00"))) PPC_WEAK_FUNC(sub_8296EF00);
PPC_FUNC_IMPL(__imp__sub_8296EF00) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-26628
	ctx.r11.s64 = ctx.r11.s64 + -26628;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296EF38;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296ef48
	if (ctx.cr0.eq) goto loc_8296EF48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296EF48;
	sub_823FD208(ctx, base);
loc_8296EF48:
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

__attribute__((alias("__imp__sub_8296EF68"))) PPC_WEAK_FUNC(sub_8296EF68);
PPC_FUNC_IMPL(__imp__sub_8296EF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296EF70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20520);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296efb4
	if (!ctx.cr0.eq) goto loc_8296EFB4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20520, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296EF94;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82965f48
	ctx.lr = 0x8296EF9C;
	sub_82965F48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23192
	ctx.r4.s64 = ctx.r11.s64 + -23192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296EFB0;
	sub_82E4E838(ctx, base);
	// lwz r11,-20520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20520);
loc_8296EFB4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296efe0
	if (!ctx.cr0.eq) goto loc_8296EFE0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20520, ctx.r11.u32);
	// addi r3,r10,-20528
	ctx.r3.s64 = ctx.r10.s64 + -20528;
	// bl 0x82967880
	ctx.lr = 0x8296EFD0;
	sub_82967880(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7560
	ctx.r3.s64 = ctx.r11.s64 + 7560;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296EFDC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20520);
loc_8296EFE0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f024
	if (!ctx.cr0.eq) goto loc_8296F024;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20520, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20544
	ctx.r31.s64 = ctx.r29.s64 + -20544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296F004;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24560
	ctx.r11.s64 = ctx.r11.s64 + -24560;
	// stw r11,-20544(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20544, ctx.r11.u32);
	// bl 0x82968220
	ctx.lr = 0x8296F018;
	sub_82968220(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7544
	ctx.r3.s64 = ctx.r11.s64 + 7544;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F024;
	sub_82A7E6B0(ctx, base);
loc_8296F024:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296F030"))) PPC_WEAK_FUNC(sub_8296F030);
PPC_FUNC_IMPL(__imp__sub_8296F030) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-26436
	ctx.r11.s64 = ctx.r11.s64 + -26436;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296F068;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296f078
	if (ctx.cr0.eq) goto loc_8296F078;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296F078;
	sub_823FD208(ctx, base);
loc_8296F078:
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

__attribute__((alias("__imp__sub_8296F098"))) PPC_WEAK_FUNC(sub_8296F098);
PPC_FUNC_IMPL(__imp__sub_8296F098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296F0A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20492);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f0e4
	if (!ctx.cr0.eq) goto loc_8296F0E4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20492(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20492, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296F0C4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82965f98
	ctx.lr = 0x8296F0CC;
	sub_82965F98(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23172
	ctx.r4.s64 = ctx.r11.s64 + -23172;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296F0E0;
	sub_82E4E838(ctx, base);
	// lwz r11,-20492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20492);
loc_8296F0E4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f110
	if (!ctx.cr0.eq) goto loc_8296F110;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20492(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20492, ctx.r11.u32);
	// addi r3,r10,-20500
	ctx.r3.s64 = ctx.r10.s64 + -20500;
	// bl 0x829678d0
	ctx.lr = 0x8296F100;
	sub_829678D0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7600
	ctx.r3.s64 = ctx.r11.s64 + 7600;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F10C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20492);
loc_8296F110:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f154
	if (!ctx.cr0.eq) goto loc_8296F154;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20492(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20492, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20516
	ctx.r31.s64 = ctx.r29.s64 + -20516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296F134;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24508
	ctx.r11.s64 = ctx.r11.s64 + -24508;
	// stw r11,-20516(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20516, ctx.r11.u32);
	// bl 0x82968268
	ctx.lr = 0x8296F148;
	sub_82968268(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7584
	ctx.r3.s64 = ctx.r11.s64 + 7584;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F154;
	sub_82A7E6B0(ctx, base);
loc_8296F154:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296F160"))) PPC_WEAK_FUNC(sub_8296F160);
PPC_FUNC_IMPL(__imp__sub_8296F160) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-26376
	ctx.r11.s64 = ctx.r11.s64 + -26376;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296F198;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296f1a8
	if (ctx.cr0.eq) goto loc_8296F1A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296F1A8;
	sub_823FD208(ctx, base);
loc_8296F1A8:
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

__attribute__((alias("__imp__sub_8296F1C8"))) PPC_WEAK_FUNC(sub_8296F1C8);
PPC_FUNC_IMPL(__imp__sub_8296F1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296F1D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20464);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f214
	if (!ctx.cr0.eq) goto loc_8296F214;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20464(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20464, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296F1F4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82965fe8
	ctx.lr = 0x8296F1FC;
	sub_82965FE8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23156
	ctx.r4.s64 = ctx.r11.s64 + -23156;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296F210;
	sub_82E4E838(ctx, base);
	// lwz r11,-20464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20464);
loc_8296F214:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f240
	if (!ctx.cr0.eq) goto loc_8296F240;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20464(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20464, ctx.r11.u32);
	// addi r3,r10,-20472
	ctx.r3.s64 = ctx.r10.s64 + -20472;
	// bl 0x82967920
	ctx.lr = 0x8296F230;
	sub_82967920(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7640
	ctx.r3.s64 = ctx.r11.s64 + 7640;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F23C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20464);
loc_8296F240:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f284
	if (!ctx.cr0.eq) goto loc_8296F284;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20464(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20464, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20488
	ctx.r31.s64 = ctx.r29.s64 + -20488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296F264;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24456
	ctx.r11.s64 = ctx.r11.s64 + -24456;
	// stw r11,-20488(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20488, ctx.r11.u32);
	// bl 0x829682b0
	ctx.lr = 0x8296F278;
	sub_829682B0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7624
	ctx.r3.s64 = ctx.r11.s64 + 7624;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F284;
	sub_82A7E6B0(ctx, base);
loc_8296F284:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296F290"))) PPC_WEAK_FUNC(sub_8296F290);
PPC_FUNC_IMPL(__imp__sub_8296F290) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-26316
	ctx.r11.s64 = ctx.r11.s64 + -26316;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296F2C8;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296f2d8
	if (ctx.cr0.eq) goto loc_8296F2D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296F2D8;
	sub_823FD208(ctx, base);
loc_8296F2D8:
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

__attribute__((alias("__imp__sub_8296F2F8"))) PPC_WEAK_FUNC(sub_8296F2F8);
PPC_FUNC_IMPL(__imp__sub_8296F2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296F300;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20436);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f344
	if (!ctx.cr0.eq) goto loc_8296F344;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20436(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20436, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296F324;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82966038
	ctx.lr = 0x8296F32C;
	sub_82966038(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23132
	ctx.r4.s64 = ctx.r11.s64 + -23132;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296F340;
	sub_82E4E838(ctx, base);
	// lwz r11,-20436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20436);
loc_8296F344:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f370
	if (!ctx.cr0.eq) goto loc_8296F370;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20436(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20436, ctx.r11.u32);
	// addi r3,r10,-20444
	ctx.r3.s64 = ctx.r10.s64 + -20444;
	// bl 0x82967970
	ctx.lr = 0x8296F360;
	sub_82967970(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7680
	ctx.r3.s64 = ctx.r11.s64 + 7680;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F36C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20436);
loc_8296F370:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f3b4
	if (!ctx.cr0.eq) goto loc_8296F3B4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20436(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20436, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20460
	ctx.r31.s64 = ctx.r29.s64 + -20460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296F394;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24404
	ctx.r11.s64 = ctx.r11.s64 + -24404;
	// stw r11,-20460(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20460, ctx.r11.u32);
	// bl 0x829682f8
	ctx.lr = 0x8296F3A8;
	sub_829682F8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7664
	ctx.r3.s64 = ctx.r11.s64 + 7664;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F3B4;
	sub_82A7E6B0(ctx, base);
loc_8296F3B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296F3C0"))) PPC_WEAK_FUNC(sub_8296F3C0);
PPC_FUNC_IMPL(__imp__sub_8296F3C0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-26240
	ctx.r11.s64 = ctx.r11.s64 + -26240;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296F3F8;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296f408
	if (ctx.cr0.eq) goto loc_8296F408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296F408;
	sub_823FD208(ctx, base);
loc_8296F408:
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

__attribute__((alias("__imp__sub_8296F428"))) PPC_WEAK_FUNC(sub_8296F428);
PPC_FUNC_IMPL(__imp__sub_8296F428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296F430;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20408);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f474
	if (!ctx.cr0.eq) goto loc_8296F474;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20408, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296F454;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82966088
	ctx.lr = 0x8296F45C;
	sub_82966088(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23108
	ctx.r4.s64 = ctx.r11.s64 + -23108;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296F470;
	sub_82E4E838(ctx, base);
	// lwz r11,-20408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20408);
loc_8296F474:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f4a0
	if (!ctx.cr0.eq) goto loc_8296F4A0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20408, ctx.r11.u32);
	// addi r3,r10,-20416
	ctx.r3.s64 = ctx.r10.s64 + -20416;
	// bl 0x829679c0
	ctx.lr = 0x8296F490;
	sub_829679C0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7720
	ctx.r3.s64 = ctx.r11.s64 + 7720;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F49C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20408);
loc_8296F4A0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f4e4
	if (!ctx.cr0.eq) goto loc_8296F4E4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20408, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20432
	ctx.r31.s64 = ctx.r29.s64 + -20432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296F4C4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24352
	ctx.r11.s64 = ctx.r11.s64 + -24352;
	// stw r11,-20432(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20432, ctx.r11.u32);
	// bl 0x82968340
	ctx.lr = 0x8296F4D8;
	sub_82968340(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7704
	ctx.r3.s64 = ctx.r11.s64 + 7704;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F4E4;
	sub_82A7E6B0(ctx, base);
loc_8296F4E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296F4F0"))) PPC_WEAK_FUNC(sub_8296F4F0);
PPC_FUNC_IMPL(__imp__sub_8296F4F0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-26180
	ctx.r11.s64 = ctx.r11.s64 + -26180;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296F528;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296f538
	if (ctx.cr0.eq) goto loc_8296F538;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296F538;
	sub_823FD208(ctx, base);
loc_8296F538:
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

__attribute__((alias("__imp__sub_8296F558"))) PPC_WEAK_FUNC(sub_8296F558);
PPC_FUNC_IMPL(__imp__sub_8296F558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296F560;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20380);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f5a4
	if (!ctx.cr0.eq) goto loc_8296F5A4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20380, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296F584;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x829660d8
	ctx.lr = 0x8296F58C;
	sub_829660D8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23084
	ctx.r4.s64 = ctx.r11.s64 + -23084;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296F5A0;
	sub_82E4E838(ctx, base);
	// lwz r11,-20380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20380);
loc_8296F5A4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f5d0
	if (!ctx.cr0.eq) goto loc_8296F5D0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20380, ctx.r11.u32);
	// addi r3,r10,-20388
	ctx.r3.s64 = ctx.r10.s64 + -20388;
	// bl 0x82967a10
	ctx.lr = 0x8296F5C0;
	sub_82967A10(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7760
	ctx.r3.s64 = ctx.r11.s64 + 7760;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F5CC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20380);
loc_8296F5D0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f614
	if (!ctx.cr0.eq) goto loc_8296F614;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20380, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20404
	ctx.r31.s64 = ctx.r29.s64 + -20404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296F5F4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24300
	ctx.r11.s64 = ctx.r11.s64 + -24300;
	// stw r11,-20404(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20404, ctx.r11.u32);
	// bl 0x82968388
	ctx.lr = 0x8296F608;
	sub_82968388(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7744
	ctx.r3.s64 = ctx.r11.s64 + 7744;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F614;
	sub_82A7E6B0(ctx, base);
loc_8296F614:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296F620"))) PPC_WEAK_FUNC(sub_8296F620);
PPC_FUNC_IMPL(__imp__sub_8296F620) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-26112
	ctx.r11.s64 = ctx.r11.s64 + -26112;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296F658;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296f668
	if (ctx.cr0.eq) goto loc_8296F668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296F668;
	sub_823FD208(ctx, base);
loc_8296F668:
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

__attribute__((alias("__imp__sub_8296F688"))) PPC_WEAK_FUNC(sub_8296F688);
PPC_FUNC_IMPL(__imp__sub_8296F688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296F690;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20352);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f6d4
	if (!ctx.cr0.eq) goto loc_8296F6D4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20352, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296F6B4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82966128
	ctx.lr = 0x8296F6BC;
	sub_82966128(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23064
	ctx.r4.s64 = ctx.r11.s64 + -23064;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296F6D0;
	sub_82E4E838(ctx, base);
	// lwz r11,-20352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20352);
loc_8296F6D4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f700
	if (!ctx.cr0.eq) goto loc_8296F700;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20352, ctx.r11.u32);
	// addi r3,r10,-20360
	ctx.r3.s64 = ctx.r10.s64 + -20360;
	// bl 0x82967a60
	ctx.lr = 0x8296F6F0;
	sub_82967A60(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7800
	ctx.r3.s64 = ctx.r11.s64 + 7800;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F6FC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20352);
loc_8296F700:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f744
	if (!ctx.cr0.eq) goto loc_8296F744;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20352, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20376
	ctx.r31.s64 = ctx.r29.s64 + -20376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296F724;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24248
	ctx.r11.s64 = ctx.r11.s64 + -24248;
	// stw r11,-20376(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20376, ctx.r11.u32);
	// bl 0x829683d0
	ctx.lr = 0x8296F738;
	sub_829683D0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7784
	ctx.r3.s64 = ctx.r11.s64 + 7784;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F744;
	sub_82A7E6B0(ctx, base);
loc_8296F744:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296F750"))) PPC_WEAK_FUNC(sub_8296F750);
PPC_FUNC_IMPL(__imp__sub_8296F750) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-26052
	ctx.r11.s64 = ctx.r11.s64 + -26052;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296F788;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296f798
	if (ctx.cr0.eq) goto loc_8296F798;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296F798;
	sub_823FD208(ctx, base);
loc_8296F798:
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

__attribute__((alias("__imp__sub_8296F7B8"))) PPC_WEAK_FUNC(sub_8296F7B8);
PPC_FUNC_IMPL(__imp__sub_8296F7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296F7C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20324);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f804
	if (!ctx.cr0.eq) goto loc_8296F804;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20324(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20324, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296F7E4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82966178
	ctx.lr = 0x8296F7EC;
	sub_82966178(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23040
	ctx.r4.s64 = ctx.r11.s64 + -23040;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296F800;
	sub_82E4E838(ctx, base);
	// lwz r11,-20324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20324);
loc_8296F804:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f830
	if (!ctx.cr0.eq) goto loc_8296F830;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20324(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20324, ctx.r11.u32);
	// addi r3,r10,-20332
	ctx.r3.s64 = ctx.r10.s64 + -20332;
	// bl 0x82967ab0
	ctx.lr = 0x8296F820;
	sub_82967AB0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7840
	ctx.r3.s64 = ctx.r11.s64 + 7840;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F82C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20324);
loc_8296F830:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f874
	if (!ctx.cr0.eq) goto loc_8296F874;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20324(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20324, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20348
	ctx.r31.s64 = ctx.r29.s64 + -20348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296F854;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24196
	ctx.r11.s64 = ctx.r11.s64 + -24196;
	// stw r11,-20348(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20348, ctx.r11.u32);
	// bl 0x82968418
	ctx.lr = 0x8296F868;
	sub_82968418(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7824
	ctx.r3.s64 = ctx.r11.s64 + 7824;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F874;
	sub_82A7E6B0(ctx, base);
loc_8296F874:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296F880"))) PPC_WEAK_FUNC(sub_8296F880);
PPC_FUNC_IMPL(__imp__sub_8296F880) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-25992
	ctx.r11.s64 = ctx.r11.s64 + -25992;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296F8B8;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296f8c8
	if (ctx.cr0.eq) goto loc_8296F8C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296F8C8;
	sub_823FD208(ctx, base);
loc_8296F8C8:
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

__attribute__((alias("__imp__sub_8296F8E8"))) PPC_WEAK_FUNC(sub_8296F8E8);
PPC_FUNC_IMPL(__imp__sub_8296F8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296F8F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20296);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f934
	if (!ctx.cr0.eq) goto loc_8296F934;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20296, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296F914;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x829661c8
	ctx.lr = 0x8296F91C;
	sub_829661C8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-23020
	ctx.r4.s64 = ctx.r11.s64 + -23020;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296F930;
	sub_82E4E838(ctx, base);
	// lwz r11,-20296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20296);
loc_8296F934:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f960
	if (!ctx.cr0.eq) goto loc_8296F960;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20296, ctx.r11.u32);
	// addi r3,r10,-20304
	ctx.r3.s64 = ctx.r10.s64 + -20304;
	// bl 0x82967b00
	ctx.lr = 0x8296F950;
	sub_82967B00(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7880
	ctx.r3.s64 = ctx.r11.s64 + 7880;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F95C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20296);
loc_8296F960:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296f9a4
	if (!ctx.cr0.eq) goto loc_8296F9A4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20296, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20320
	ctx.r31.s64 = ctx.r29.s64 + -20320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296F984;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24144
	ctx.r11.s64 = ctx.r11.s64 + -24144;
	// stw r11,-20320(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20320, ctx.r11.u32);
	// bl 0x82968460
	ctx.lr = 0x8296F998;
	sub_82968460(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7864
	ctx.r3.s64 = ctx.r11.s64 + 7864;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296F9A4;
	sub_82A7E6B0(ctx, base);
loc_8296F9A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296F9B0"))) PPC_WEAK_FUNC(sub_8296F9B0);
PPC_FUNC_IMPL(__imp__sub_8296F9B0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-25932
	ctx.r11.s64 = ctx.r11.s64 + -25932;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296F9E8;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296f9f8
	if (ctx.cr0.eq) goto loc_8296F9F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296F9F8;
	sub_823FD208(ctx, base);
loc_8296F9F8:
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

__attribute__((alias("__imp__sub_8296FA18"))) PPC_WEAK_FUNC(sub_8296FA18);
PPC_FUNC_IMPL(__imp__sub_8296FA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296FA20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20268);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296fa64
	if (!ctx.cr0.eq) goto loc_8296FA64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20268, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296FA44;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82966218
	ctx.lr = 0x8296FA4C;
	sub_82966218(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22988
	ctx.r4.s64 = ctx.r11.s64 + -22988;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296FA60;
	sub_82E4E838(ctx, base);
	// lwz r11,-20268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20268);
loc_8296FA64:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296fa90
	if (!ctx.cr0.eq) goto loc_8296FA90;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20268, ctx.r11.u32);
	// addi r3,r10,-20276
	ctx.r3.s64 = ctx.r10.s64 + -20276;
	// bl 0x82967b50
	ctx.lr = 0x8296FA80;
	sub_82967B50(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7920
	ctx.r3.s64 = ctx.r11.s64 + 7920;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296FA8C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20268);
loc_8296FA90:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296fad4
	if (!ctx.cr0.eq) goto loc_8296FAD4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20268, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20292
	ctx.r31.s64 = ctx.r29.s64 + -20292;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296FAB4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24092
	ctx.r11.s64 = ctx.r11.s64 + -24092;
	// stw r11,-20292(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20292, ctx.r11.u32);
	// bl 0x829684a8
	ctx.lr = 0x8296FAC8;
	sub_829684A8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7904
	ctx.r3.s64 = ctx.r11.s64 + 7904;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296FAD4;
	sub_82A7E6B0(ctx, base);
loc_8296FAD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296FAE0"))) PPC_WEAK_FUNC(sub_8296FAE0);
PPC_FUNC_IMPL(__imp__sub_8296FAE0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296FB18;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296fb28
	if (ctx.cr0.eq) goto loc_8296FB28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296FB28;
	sub_823FD208(ctx, base);
loc_8296FB28:
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

__attribute__((alias("__imp__sub_8296FB48"))) PPC_WEAK_FUNC(sub_8296FB48);
PPC_FUNC_IMPL(__imp__sub_8296FB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296FB50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20240);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296fb94
	if (!ctx.cr0.eq) goto loc_8296FB94;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20240, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296FB74;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82966268
	ctx.lr = 0x8296FB7C;
	sub_82966268(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22956
	ctx.r4.s64 = ctx.r11.s64 + -22956;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296FB90;
	sub_82E4E838(ctx, base);
	// lwz r11,-20240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20240);
loc_8296FB94:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296fbc0
	if (!ctx.cr0.eq) goto loc_8296FBC0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20240, ctx.r11.u32);
	// addi r3,r10,-20248
	ctx.r3.s64 = ctx.r10.s64 + -20248;
	// bl 0x82967ba0
	ctx.lr = 0x8296FBB0;
	sub_82967BA0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7960
	ctx.r3.s64 = ctx.r11.s64 + 7960;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296FBBC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20240);
loc_8296FBC0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296fc04
	if (!ctx.cr0.eq) goto loc_8296FC04;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20240, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20264
	ctx.r31.s64 = ctx.r29.s64 + -20264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296FBE4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24040
	ctx.r11.s64 = ctx.r11.s64 + -24040;
	// stw r11,-20264(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20264, ctx.r11.u32);
	// bl 0x829684f0
	ctx.lr = 0x8296FBF8;
	sub_829684F0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7944
	ctx.r3.s64 = ctx.r11.s64 + 7944;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296FC04;
	sub_82A7E6B0(ctx, base);
loc_8296FC04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296FC10"))) PPC_WEAK_FUNC(sub_8296FC10);
PPC_FUNC_IMPL(__imp__sub_8296FC10) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-25812
	ctx.r11.s64 = ctx.r11.s64 + -25812;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296FC48;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296fc58
	if (ctx.cr0.eq) goto loc_8296FC58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296FC58;
	sub_823FD208(ctx, base);
loc_8296FC58:
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

__attribute__((alias("__imp__sub_8296FC78"))) PPC_WEAK_FUNC(sub_8296FC78);
PPC_FUNC_IMPL(__imp__sub_8296FC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296FC80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20212);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296fcc4
	if (!ctx.cr0.eq) goto loc_8296FCC4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20212(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20212, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296FCA4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x829662b8
	ctx.lr = 0x8296FCAC;
	sub_829662B8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22924
	ctx.r4.s64 = ctx.r11.s64 + -22924;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296FCC0;
	sub_82E4E838(ctx, base);
	// lwz r11,-20212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20212);
loc_8296FCC4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296fcf0
	if (!ctx.cr0.eq) goto loc_8296FCF0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20212(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20212, ctx.r11.u32);
	// addi r3,r10,-20220
	ctx.r3.s64 = ctx.r10.s64 + -20220;
	// bl 0x82967bf0
	ctx.lr = 0x8296FCE0;
	sub_82967BF0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8000
	ctx.r3.s64 = ctx.r11.s64 + 8000;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296FCEC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20212);
loc_8296FCF0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296fd34
	if (!ctx.cr0.eq) goto loc_8296FD34;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20212(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20212, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20236
	ctx.r31.s64 = ctx.r29.s64 + -20236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296FD14;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23988
	ctx.r11.s64 = ctx.r11.s64 + -23988;
	// stw r11,-20236(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20236, ctx.r11.u32);
	// bl 0x82968538
	ctx.lr = 0x8296FD28;
	sub_82968538(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,7984
	ctx.r3.s64 = ctx.r11.s64 + 7984;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296FD34;
	sub_82A7E6B0(ctx, base);
loc_8296FD34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296FD40"))) PPC_WEAK_FUNC(sub_8296FD40);
PPC_FUNC_IMPL(__imp__sub_8296FD40) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-25752
	ctx.r11.s64 = ctx.r11.s64 + -25752;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296FD78;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296fd88
	if (ctx.cr0.eq) goto loc_8296FD88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296FD88;
	sub_823FD208(ctx, base);
loc_8296FD88:
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

__attribute__((alias("__imp__sub_8296FDA8"))) PPC_WEAK_FUNC(sub_8296FDA8);
PPC_FUNC_IMPL(__imp__sub_8296FDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296FDB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20184);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296fdf4
	if (!ctx.cr0.eq) goto loc_8296FDF4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20184, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296FDD4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82966308
	ctx.lr = 0x8296FDDC;
	sub_82966308(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22904
	ctx.r4.s64 = ctx.r11.s64 + -22904;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296FDF0;
	sub_82E4E838(ctx, base);
	// lwz r11,-20184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20184);
loc_8296FDF4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296fe20
	if (!ctx.cr0.eq) goto loc_8296FE20;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20184, ctx.r11.u32);
	// addi r3,r10,-20192
	ctx.r3.s64 = ctx.r10.s64 + -20192;
	// bl 0x82967c40
	ctx.lr = 0x8296FE10;
	sub_82967C40(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8040
	ctx.r3.s64 = ctx.r11.s64 + 8040;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296FE1C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20184);
loc_8296FE20:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296fe64
	if (!ctx.cr0.eq) goto loc_8296FE64;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20184, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20208
	ctx.r31.s64 = ctx.r29.s64 + -20208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296FE44;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23936
	ctx.r11.s64 = ctx.r11.s64 + -23936;
	// stw r11,-20208(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20208, ctx.r11.u32);
	// bl 0x82968580
	ctx.lr = 0x8296FE58;
	sub_82968580(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8024
	ctx.r3.s64 = ctx.r11.s64 + 8024;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296FE64;
	sub_82A7E6B0(ctx, base);
loc_8296FE64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296FE70"))) PPC_WEAK_FUNC(sub_8296FE70);
PPC_FUNC_IMPL(__imp__sub_8296FE70) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-25692
	ctx.r11.s64 = ctx.r11.s64 + -25692;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296FEA8;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296feb8
	if (ctx.cr0.eq) goto loc_8296FEB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296FEB8;
	sub_823FD208(ctx, base);
loc_8296FEB8:
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

__attribute__((alias("__imp__sub_8296FED8"))) PPC_WEAK_FUNC(sub_8296FED8);
PPC_FUNC_IMPL(__imp__sub_8296FED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8296FEE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20156);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296ff24
	if (!ctx.cr0.eq) goto loc_8296FF24;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20156, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8296FF04;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82966358
	ctx.lr = 0x8296FF0C;
	sub_82966358(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22868
	ctx.r4.s64 = ctx.r11.s64 + -22868;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8296FF20;
	sub_82E4E838(ctx, base);
	// lwz r11,-20156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20156);
loc_8296FF24:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296ff50
	if (!ctx.cr0.eq) goto loc_8296FF50;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20156, ctx.r11.u32);
	// addi r3,r10,-20164
	ctx.r3.s64 = ctx.r10.s64 + -20164;
	// bl 0x82967c90
	ctx.lr = 0x8296FF40;
	sub_82967C90(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8080
	ctx.r3.s64 = ctx.r11.s64 + 8080;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296FF4C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20156);
loc_8296FF50:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8296ff94
	if (!ctx.cr0.eq) goto loc_8296FF94;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20156, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20180
	ctx.r31.s64 = ctx.r29.s64 + -20180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8296FF74;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23884
	ctx.r11.s64 = ctx.r11.s64 + -23884;
	// stw r11,-20180(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20180, ctx.r11.u32);
	// bl 0x829685c8
	ctx.lr = 0x8296FF88;
	sub_829685C8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8064
	ctx.r3.s64 = ctx.r11.s64 + 8064;
	// bl 0x82a7e6b0
	ctx.lr = 0x8296FF94;
	sub_82A7E6B0(ctx, base);
loc_8296FF94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8296FFA0"))) PPC_WEAK_FUNC(sub_8296FFA0);
PPC_FUNC_IMPL(__imp__sub_8296FFA0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-25632
	ctx.r11.s64 = ctx.r11.s64 + -25632;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8296FFD8;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8296ffe8
	if (ctx.cr0.eq) goto loc_8296FFE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8296FFE8;
	sub_823FD208(ctx, base);
loc_8296FFE8:
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

__attribute__((alias("__imp__sub_82970008"))) PPC_WEAK_FUNC(sub_82970008);
PPC_FUNC_IMPL(__imp__sub_82970008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82970010;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20128);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82970054
	if (!ctx.cr0.eq) goto loc_82970054;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20128, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82970034;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x829663a8
	ctx.lr = 0x8297003C;
	sub_829663A8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22828
	ctx.r4.s64 = ctx.r11.s64 + -22828;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82970050;
	sub_82E4E838(ctx, base);
	// lwz r11,-20128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20128);
loc_82970054:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82970080
	if (!ctx.cr0.eq) goto loc_82970080;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20128, ctx.r11.u32);
	// addi r3,r10,-20136
	ctx.r3.s64 = ctx.r10.s64 + -20136;
	// bl 0x82967ce0
	ctx.lr = 0x82970070;
	sub_82967CE0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8120
	ctx.r3.s64 = ctx.r11.s64 + 8120;
	// bl 0x82a7e6b0
	ctx.lr = 0x8297007C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20128);
loc_82970080:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829700c4
	if (!ctx.cr0.eq) goto loc_829700C4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20128, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20152
	ctx.r31.s64 = ctx.r29.s64 + -20152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x829700A4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23832
	ctx.r11.s64 = ctx.r11.s64 + -23832;
	// stw r11,-20152(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20152, ctx.r11.u32);
	// bl 0x82968610
	ctx.lr = 0x829700B8;
	sub_82968610(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8104
	ctx.r3.s64 = ctx.r11.s64 + 8104;
	// bl 0x82a7e6b0
	ctx.lr = 0x829700C4;
	sub_82A7E6B0(ctx, base);
loc_829700C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829700D0"))) PPC_WEAK_FUNC(sub_829700D0);
PPC_FUNC_IMPL(__imp__sub_829700D0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-25572
	ctx.r11.s64 = ctx.r11.s64 + -25572;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x82970108;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82970118
	if (ctx.cr0.eq) goto loc_82970118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82970118;
	sub_823FD208(ctx, base);
loc_82970118:
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

__attribute__((alias("__imp__sub_82970138"))) PPC_WEAK_FUNC(sub_82970138);
PPC_FUNC_IMPL(__imp__sub_82970138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82970140;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20100);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82970184
	if (!ctx.cr0.eq) goto loc_82970184;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20100, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82970164;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x829663f8
	ctx.lr = 0x8297016C;
	sub_829663F8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22800
	ctx.r4.s64 = ctx.r11.s64 + -22800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82970180;
	sub_82E4E838(ctx, base);
	// lwz r11,-20100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20100);
loc_82970184:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829701b0
	if (!ctx.cr0.eq) goto loc_829701B0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20100, ctx.r11.u32);
	// addi r3,r10,-20108
	ctx.r3.s64 = ctx.r10.s64 + -20108;
	// bl 0x82967d30
	ctx.lr = 0x829701A0;
	sub_82967D30(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8160
	ctx.r3.s64 = ctx.r11.s64 + 8160;
	// bl 0x82a7e6b0
	ctx.lr = 0x829701AC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20100);
loc_829701B0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829701f4
	if (!ctx.cr0.eq) goto loc_829701F4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20100, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20124
	ctx.r31.s64 = ctx.r29.s64 + -20124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x829701D4;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23780
	ctx.r11.s64 = ctx.r11.s64 + -23780;
	// stw r11,-20124(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20124, ctx.r11.u32);
	// bl 0x82968658
	ctx.lr = 0x829701E8;
	sub_82968658(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8144
	ctx.r3.s64 = ctx.r11.s64 + 8144;
	// bl 0x82a7e6b0
	ctx.lr = 0x829701F4;
	sub_82A7E6B0(ctx, base);
loc_829701F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970200"))) PPC_WEAK_FUNC(sub_82970200);
PPC_FUNC_IMPL(__imp__sub_82970200) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-25512
	ctx.r11.s64 = ctx.r11.s64 + -25512;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x82970238;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82970248
	if (ctx.cr0.eq) goto loc_82970248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82970248;
	sub_823FD208(ctx, base);
loc_82970248:
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

__attribute__((alias("__imp__sub_82970268"))) PPC_WEAK_FUNC(sub_82970268);
PPC_FUNC_IMPL(__imp__sub_82970268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82970270;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20072);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829702b4
	if (!ctx.cr0.eq) goto loc_829702B4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20072(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20072, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82970294;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82966448
	ctx.lr = 0x8297029C;
	sub_82966448(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22776
	ctx.r4.s64 = ctx.r11.s64 + -22776;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x829702B0;
	sub_82E4E838(ctx, base);
	// lwz r11,-20072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20072);
loc_829702B4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829702e0
	if (!ctx.cr0.eq) goto loc_829702E0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20072(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20072, ctx.r11.u32);
	// addi r3,r10,-20080
	ctx.r3.s64 = ctx.r10.s64 + -20080;
	// bl 0x82967d80
	ctx.lr = 0x829702D0;
	sub_82967D80(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8200
	ctx.r3.s64 = ctx.r11.s64 + 8200;
	// bl 0x82a7e6b0
	ctx.lr = 0x829702DC;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20072);
loc_829702E0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82970324
	if (!ctx.cr0.eq) goto loc_82970324;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20072(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20072, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20096
	ctx.r31.s64 = ctx.r29.s64 + -20096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82970304;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23728
	ctx.r11.s64 = ctx.r11.s64 + -23728;
	// stw r11,-20096(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20096, ctx.r11.u32);
	// bl 0x829686a0
	ctx.lr = 0x82970318;
	sub_829686A0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8184
	ctx.r3.s64 = ctx.r11.s64 + 8184;
	// bl 0x82a7e6b0
	ctx.lr = 0x82970324;
	sub_82A7E6B0(ctx, base);
loc_82970324:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970330"))) PPC_WEAK_FUNC(sub_82970330);
PPC_FUNC_IMPL(__imp__sub_82970330) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-25452
	ctx.r11.s64 = ctx.r11.s64 + -25452;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x82970368;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82970378
	if (ctx.cr0.eq) goto loc_82970378;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82970378;
	sub_823FD208(ctx, base);
loc_82970378:
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

__attribute__((alias("__imp__sub_82970398"))) PPC_WEAK_FUNC(sub_82970398);
PPC_FUNC_IMPL(__imp__sub_82970398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829703A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20044);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829703e4
	if (!ctx.cr0.eq) goto loc_829703E4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20044(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20044, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x829703C4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82966498
	ctx.lr = 0x829703CC;
	sub_82966498(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22756
	ctx.r4.s64 = ctx.r11.s64 + -22756;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x829703E0;
	sub_82E4E838(ctx, base);
	// lwz r11,-20044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20044);
loc_829703E4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82970410
	if (!ctx.cr0.eq) goto loc_82970410;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20044(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20044, ctx.r11.u32);
	// addi r3,r10,-20052
	ctx.r3.s64 = ctx.r10.s64 + -20052;
	// bl 0x82967dd0
	ctx.lr = 0x82970400;
	sub_82967DD0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8240
	ctx.r3.s64 = ctx.r11.s64 + 8240;
	// bl 0x82a7e6b0
	ctx.lr = 0x8297040C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20044);
loc_82970410:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82970454
	if (!ctx.cr0.eq) goto loc_82970454;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20044(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20044, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20068
	ctx.r31.s64 = ctx.r29.s64 + -20068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82970434;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23676
	ctx.r11.s64 = ctx.r11.s64 + -23676;
	// stw r11,-20068(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20068, ctx.r11.u32);
	// bl 0x829686e8
	ctx.lr = 0x82970448;
	sub_829686E8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8224
	ctx.r3.s64 = ctx.r11.s64 + 8224;
	// bl 0x82a7e6b0
	ctx.lr = 0x82970454;
	sub_82A7E6B0(ctx, base);
loc_82970454:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970460"))) PPC_WEAK_FUNC(sub_82970460);
PPC_FUNC_IMPL(__imp__sub_82970460) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-25364
	ctx.r11.s64 = ctx.r11.s64 + -25364;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x82970498;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829704a8
	if (ctx.cr0.eq) goto loc_829704A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829704A8;
	sub_823FD208(ctx, base);
loc_829704A8:
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

__attribute__((alias("__imp__sub_829704C8"))) PPC_WEAK_FUNC(sub_829704C8);
PPC_FUNC_IMPL(__imp__sub_829704C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829704D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-20016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20016);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82970514
	if (!ctx.cr0.eq) goto loc_82970514;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-20016(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20016, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x829704F4;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x829664e8
	ctx.lr = 0x829704FC;
	sub_829664E8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22732
	ctx.r4.s64 = ctx.r11.s64 + -22732;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82970510;
	sub_82E4E838(ctx, base);
	// lwz r11,-20016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20016);
loc_82970514:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82970540
	if (!ctx.cr0.eq) goto loc_82970540;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-20016(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20016, ctx.r11.u32);
	// addi r3,r10,-20024
	ctx.r3.s64 = ctx.r10.s64 + -20024;
	// bl 0x82967e20
	ctx.lr = 0x82970530;
	sub_82967E20(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8280
	ctx.r3.s64 = ctx.r11.s64 + 8280;
	// bl 0x82a7e6b0
	ctx.lr = 0x8297053C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-20016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20016);
loc_82970540:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82970584
	if (!ctx.cr0.eq) goto loc_82970584;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-20016(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20016, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20040
	ctx.r31.s64 = ctx.r29.s64 + -20040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82970564;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23624
	ctx.r11.s64 = ctx.r11.s64 + -23624;
	// stw r11,-20040(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20040, ctx.r11.u32);
	// bl 0x82968730
	ctx.lr = 0x82970578;
	sub_82968730(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8264
	ctx.r3.s64 = ctx.r11.s64 + 8264;
	// bl 0x82a7e6b0
	ctx.lr = 0x82970584;
	sub_82A7E6B0(ctx, base);
loc_82970584:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970590"))) PPC_WEAK_FUNC(sub_82970590);
PPC_FUNC_IMPL(__imp__sub_82970590) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-25304
	ctx.r11.s64 = ctx.r11.s64 + -25304;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x829705C8;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829705d8
	if (ctx.cr0.eq) goto loc_829705D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829705D8;
	sub_823FD208(ctx, base);
loc_829705D8:
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

__attribute__((alias("__imp__sub_829705F8"))) PPC_WEAK_FUNC(sub_829705F8);
PPC_FUNC_IMPL(__imp__sub_829705F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82970600;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-19988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19988);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82970644
	if (!ctx.cr0.eq) goto loc_82970644;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-19988(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19988, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x82970624;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82966538
	ctx.lr = 0x8297062C;
	sub_82966538(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22708
	ctx.r4.s64 = ctx.r11.s64 + -22708;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x82970640;
	sub_82E4E838(ctx, base);
	// lwz r11,-19988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19988);
loc_82970644:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82970670
	if (!ctx.cr0.eq) goto loc_82970670;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-19988(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19988, ctx.r11.u32);
	// addi r3,r10,-19996
	ctx.r3.s64 = ctx.r10.s64 + -19996;
	// bl 0x82967e70
	ctx.lr = 0x82970660;
	sub_82967E70(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8320
	ctx.r3.s64 = ctx.r11.s64 + 8320;
	// bl 0x82a7e6b0
	ctx.lr = 0x8297066C;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-19988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19988);
loc_82970670:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829706b4
	if (!ctx.cr0.eq) goto loc_829706B4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-19988(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19988, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-20012
	ctx.r31.s64 = ctx.r29.s64 + -20012;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x82970694;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23572
	ctx.r11.s64 = ctx.r11.s64 + -23572;
	// stw r11,-20012(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20012, ctx.r11.u32);
	// bl 0x82968778
	ctx.lr = 0x829706A8;
	sub_82968778(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8304
	ctx.r3.s64 = ctx.r11.s64 + 8304;
	// bl 0x82a7e6b0
	ctx.lr = 0x829706B4;
	sub_82A7E6B0(ctx, base);
loc_829706B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829706C0"))) PPC_WEAK_FUNC(sub_829706C0);
PPC_FUNC_IMPL(__imp__sub_829706C0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-25244
	ctx.r11.s64 = ctx.r11.s64 + -25244;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x829706F8;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82970708
	if (ctx.cr0.eq) goto loc_82970708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82970708;
	sub_823FD208(ctx, base);
loc_82970708:
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

__attribute__((alias("__imp__sub_82970728"))) PPC_WEAK_FUNC(sub_82970728);
PPC_FUNC_IMPL(__imp__sub_82970728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82970730;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82965b88
	ctx.lr = 0x82970740;
	sub_82965B88(ctx, base);
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
	ctx.lr = 0x8297075C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82970774
	if (ctx.cr0.eq) goto loc_82970774;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296b0d8
	ctx.lr = 0x8297076C;
	sub_8296B0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970778
	goto loc_82970778;
loc_82970774:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970778:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296d390
	ctx.lr = 0x82970788;
	sub_8296D390(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82970794;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829707a4
	if (ctx.cr6.eq) goto loc_829707A4;
	// bl 0x823e19b0
	ctx.lr = 0x829707A4;
	sub_823E19B0(ctx, base);
loc_829707A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829707B0"))) PPC_WEAK_FUNC(sub_829707B0);
PPC_FUNC_IMPL(__imp__sub_829707B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829707B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82965bd8
	ctx.lr = 0x829707C8;
	sub_82965BD8(ctx, base);
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
	ctx.lr = 0x829707E4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829707fc
	if (ctx.cr0.eq) goto loc_829707FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296b1e8
	ctx.lr = 0x829707F4;
	sub_8296B1E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970800
	goto loc_82970800;
loc_829707FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970800:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296d400
	ctx.lr = 0x82970810;
	sub_8296D400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x8297081C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297082c
	if (ctx.cr6.eq) goto loc_8297082C;
	// bl 0x823e19b0
	ctx.lr = 0x8297082C;
	sub_823E19B0(ctx, base);
loc_8297082C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970838"))) PPC_WEAK_FUNC(sub_82970838);
PPC_FUNC_IMPL(__imp__sub_82970838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82970840;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82965c28
	ctx.lr = 0x82970850;
	sub_82965C28(ctx, base);
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
	ctx.lr = 0x8297086C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82970884
	if (ctx.cr0.eq) goto loc_82970884;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296b2f8
	ctx.lr = 0x8297087C;
	sub_8296B2F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970888
	goto loc_82970888;
loc_82970884:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970888:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296d470
	ctx.lr = 0x82970898;
	sub_8296D470(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x829708A4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829708b4
	if (ctx.cr6.eq) goto loc_829708B4;
	// bl 0x823e19b0
	ctx.lr = 0x829708B4;
	sub_823E19B0(ctx, base);
loc_829708B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829708C0"))) PPC_WEAK_FUNC(sub_829708C0);
PPC_FUNC_IMPL(__imp__sub_829708C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829708C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82965c78
	ctx.lr = 0x829708D8;
	sub_82965C78(ctx, base);
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
	ctx.lr = 0x829708F4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297090c
	if (ctx.cr0.eq) goto loc_8297090C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296b408
	ctx.lr = 0x82970904;
	sub_8296B408(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970910
	goto loc_82970910;
loc_8297090C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970910:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296d4e0
	ctx.lr = 0x82970920;
	sub_8296D4E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x8297092C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297093c
	if (ctx.cr6.eq) goto loc_8297093C;
	// bl 0x823e19b0
	ctx.lr = 0x8297093C;
	sub_823E19B0(ctx, base);
loc_8297093C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970948"))) PPC_WEAK_FUNC(sub_82970948);
PPC_FUNC_IMPL(__imp__sub_82970948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82970950;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82965cc8
	ctx.lr = 0x82970960;
	sub_82965CC8(ctx, base);
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
	ctx.lr = 0x8297097C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82970994
	if (ctx.cr0.eq) goto loc_82970994;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296b540
	ctx.lr = 0x8297098C;
	sub_8296B540(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970998
	goto loc_82970998;
loc_82970994:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970998:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296d550
	ctx.lr = 0x829709A8;
	sub_8296D550(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x829709B4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829709c4
	if (ctx.cr6.eq) goto loc_829709C4;
	// bl 0x823e19b0
	ctx.lr = 0x829709C4;
	sub_823E19B0(ctx, base);
loc_829709C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829709D0"))) PPC_WEAK_FUNC(sub_829709D0);
PPC_FUNC_IMPL(__imp__sub_829709D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829709D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82965d18
	ctx.lr = 0x829709E8;
	sub_82965D18(ctx, base);
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
	ctx.lr = 0x82970A04;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82970a1c
	if (ctx.cr0.eq) goto loc_82970A1C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296b650
	ctx.lr = 0x82970A14;
	sub_8296B650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970a20
	goto loc_82970A20;
loc_82970A1C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970A20:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296d5c0
	ctx.lr = 0x82970A30;
	sub_8296D5C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82970A3C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82970a4c
	if (ctx.cr6.eq) goto loc_82970A4C;
	// bl 0x823e19b0
	ctx.lr = 0x82970A4C;
	sub_823E19B0(ctx, base);
loc_82970A4C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970A58"))) PPC_WEAK_FUNC(sub_82970A58);
PPC_FUNC_IMPL(__imp__sub_82970A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82970A60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82965d68
	ctx.lr = 0x82970A70;
	sub_82965D68(ctx, base);
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
	ctx.lr = 0x82970A8C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82970aa4
	if (ctx.cr0.eq) goto loc_82970AA4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296b760
	ctx.lr = 0x82970A9C;
	sub_8296B760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970aa8
	goto loc_82970AA8;
loc_82970AA4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970AA8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296d630
	ctx.lr = 0x82970AB8;
	sub_8296D630(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82970AC4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82970ad4
	if (ctx.cr6.eq) goto loc_82970AD4;
	// bl 0x823e19b0
	ctx.lr = 0x82970AD4;
	sub_823E19B0(ctx, base);
loc_82970AD4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970AE0"))) PPC_WEAK_FUNC(sub_82970AE0);
PPC_FUNC_IMPL(__imp__sub_82970AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82970AE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82965db8
	ctx.lr = 0x82970AF8;
	sub_82965DB8(ctx, base);
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
	ctx.lr = 0x82970B14;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82970b2c
	if (ctx.cr0.eq) goto loc_82970B2C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296b870
	ctx.lr = 0x82970B24;
	sub_8296B870(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970b30
	goto loc_82970B30;
loc_82970B2C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970B30:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296d6a0
	ctx.lr = 0x82970B40;
	sub_8296D6A0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82970B4C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82970b5c
	if (ctx.cr6.eq) goto loc_82970B5C;
	// bl 0x823e19b0
	ctx.lr = 0x82970B5C;
	sub_823E19B0(ctx, base);
loc_82970B5C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970B68"))) PPC_WEAK_FUNC(sub_82970B68);
PPC_FUNC_IMPL(__imp__sub_82970B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82970B70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82965e08
	ctx.lr = 0x82970B80;
	sub_82965E08(ctx, base);
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
	ctx.lr = 0x82970B9C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82970bb4
	if (ctx.cr0.eq) goto loc_82970BB4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296b980
	ctx.lr = 0x82970BAC;
	sub_8296B980(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970bb8
	goto loc_82970BB8;
loc_82970BB4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970BB8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296d710
	ctx.lr = 0x82970BC8;
	sub_8296D710(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82970BD4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82970be4
	if (ctx.cr6.eq) goto loc_82970BE4;
	// bl 0x823e19b0
	ctx.lr = 0x82970BE4;
	sub_823E19B0(ctx, base);
loc_82970BE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970BF0"))) PPC_WEAK_FUNC(sub_82970BF0);
PPC_FUNC_IMPL(__imp__sub_82970BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82970BF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82965e58
	ctx.lr = 0x82970C08;
	sub_82965E58(ctx, base);
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
	ctx.lr = 0x82970C24;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82970c3c
	if (ctx.cr0.eq) goto loc_82970C3C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296ba90
	ctx.lr = 0x82970C34;
	sub_8296BA90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970c40
	goto loc_82970C40;
loc_82970C3C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970C40:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296d780
	ctx.lr = 0x82970C50;
	sub_8296D780(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82970C5C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82970c6c
	if (ctx.cr6.eq) goto loc_82970C6C;
	// bl 0x823e19b0
	ctx.lr = 0x82970C6C;
	sub_823E19B0(ctx, base);
loc_82970C6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970C78"))) PPC_WEAK_FUNC(sub_82970C78);
PPC_FUNC_IMPL(__imp__sub_82970C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82970C80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82965ea8
	ctx.lr = 0x82970C90;
	sub_82965EA8(ctx, base);
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
	ctx.lr = 0x82970CAC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82970cc4
	if (ctx.cr0.eq) goto loc_82970CC4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296bba0
	ctx.lr = 0x82970CBC;
	sub_8296BBA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970cc8
	goto loc_82970CC8;
loc_82970CC4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970CC8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296d7f0
	ctx.lr = 0x82970CD8;
	sub_8296D7F0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82970CE4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82970cf4
	if (ctx.cr6.eq) goto loc_82970CF4;
	// bl 0x823e19b0
	ctx.lr = 0x82970CF4;
	sub_823E19B0(ctx, base);
loc_82970CF4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970D00"))) PPC_WEAK_FUNC(sub_82970D00);
PPC_FUNC_IMPL(__imp__sub_82970D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82970D08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82965ef8
	ctx.lr = 0x82970D18;
	sub_82965EF8(ctx, base);
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
	ctx.lr = 0x82970D34;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82970d4c
	if (ctx.cr0.eq) goto loc_82970D4C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296bcb0
	ctx.lr = 0x82970D44;
	sub_8296BCB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970d50
	goto loc_82970D50;
loc_82970D4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970D50:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296d860
	ctx.lr = 0x82970D60;
	sub_8296D860(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82970D6C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82970d7c
	if (ctx.cr6.eq) goto loc_82970D7C;
	// bl 0x823e19b0
	ctx.lr = 0x82970D7C;
	sub_823E19B0(ctx, base);
loc_82970D7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970D88"))) PPC_WEAK_FUNC(sub_82970D88);
PPC_FUNC_IMPL(__imp__sub_82970D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82970D90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82965f48
	ctx.lr = 0x82970DA0;
	sub_82965F48(ctx, base);
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
	ctx.lr = 0x82970DBC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82970dd4
	if (ctx.cr0.eq) goto loc_82970DD4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296bde8
	ctx.lr = 0x82970DCC;
	sub_8296BDE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970dd8
	goto loc_82970DD8;
loc_82970DD4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970DD8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296d8d0
	ctx.lr = 0x82970DE8;
	sub_8296D8D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82970DF4;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82970e04
	if (ctx.cr6.eq) goto loc_82970E04;
	// bl 0x823e19b0
	ctx.lr = 0x82970E04;
	sub_823E19B0(ctx, base);
loc_82970E04:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970E10"))) PPC_WEAK_FUNC(sub_82970E10);
PPC_FUNC_IMPL(__imp__sub_82970E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82970E18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82965f98
	ctx.lr = 0x82970E28;
	sub_82965F98(ctx, base);
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
	ctx.lr = 0x82970E44;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82970e5c
	if (ctx.cr0.eq) goto loc_82970E5C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296bef8
	ctx.lr = 0x82970E54;
	sub_8296BEF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970e60
	goto loc_82970E60;
loc_82970E5C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970E60:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296d940
	ctx.lr = 0x82970E70;
	sub_8296D940(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82970E7C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82970e8c
	if (ctx.cr6.eq) goto loc_82970E8C;
	// bl 0x823e19b0
	ctx.lr = 0x82970E8C;
	sub_823E19B0(ctx, base);
loc_82970E8C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970E98"))) PPC_WEAK_FUNC(sub_82970E98);
PPC_FUNC_IMPL(__imp__sub_82970E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82970EA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82965fe8
	ctx.lr = 0x82970EB0;
	sub_82965FE8(ctx, base);
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
	ctx.lr = 0x82970ECC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82970ee4
	if (ctx.cr0.eq) goto loc_82970EE4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296c008
	ctx.lr = 0x82970EDC;
	sub_8296C008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970ee8
	goto loc_82970EE8;
loc_82970EE4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970EE8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296d9b0
	ctx.lr = 0x82970EF8;
	sub_8296D9B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82970F04;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82970f14
	if (ctx.cr6.eq) goto loc_82970F14;
	// bl 0x823e19b0
	ctx.lr = 0x82970F14;
	sub_823E19B0(ctx, base);
loc_82970F14:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970F20"))) PPC_WEAK_FUNC(sub_82970F20);
PPC_FUNC_IMPL(__imp__sub_82970F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82970F28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82966038
	ctx.lr = 0x82970F38;
	sub_82966038(ctx, base);
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
	ctx.lr = 0x82970F54;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82970f6c
	if (ctx.cr0.eq) goto loc_82970F6C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296c118
	ctx.lr = 0x82970F64;
	sub_8296C118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970f70
	goto loc_82970F70;
loc_82970F6C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970F70:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296da20
	ctx.lr = 0x82970F80;
	sub_8296DA20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82970F8C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82970f9c
	if (ctx.cr6.eq) goto loc_82970F9C;
	// bl 0x823e19b0
	ctx.lr = 0x82970F9C;
	sub_823E19B0(ctx, base);
loc_82970F9C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82970FA8"))) PPC_WEAK_FUNC(sub_82970FA8);
PPC_FUNC_IMPL(__imp__sub_82970FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82970FB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82966088
	ctx.lr = 0x82970FC0;
	sub_82966088(ctx, base);
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
	ctx.lr = 0x82970FDC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82970ff4
	if (ctx.cr0.eq) goto loc_82970FF4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296c228
	ctx.lr = 0x82970FEC;
	sub_8296C228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82970ff8
	goto loc_82970FF8;
loc_82970FF4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82970FF8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296da90
	ctx.lr = 0x82971008;
	sub_8296DA90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82971014;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971024
	if (ctx.cr6.eq) goto loc_82971024;
	// bl 0x823e19b0
	ctx.lr = 0x82971024;
	sub_823E19B0(ctx, base);
loc_82971024:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971030"))) PPC_WEAK_FUNC(sub_82971030);
PPC_FUNC_IMPL(__imp__sub_82971030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971038;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x829660d8
	ctx.lr = 0x82971048;
	sub_829660D8(ctx, base);
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
	ctx.lr = 0x82971064;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297107c
	if (ctx.cr0.eq) goto loc_8297107C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296c338
	ctx.lr = 0x82971074;
	sub_8296C338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82971080
	goto loc_82971080;
loc_8297107C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82971080:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296db00
	ctx.lr = 0x82971090;
	sub_8296DB00(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x8297109C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829710ac
	if (ctx.cr6.eq) goto loc_829710AC;
	// bl 0x823e19b0
	ctx.lr = 0x829710AC;
	sub_823E19B0(ctx, base);
loc_829710AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829710B8"))) PPC_WEAK_FUNC(sub_829710B8);
PPC_FUNC_IMPL(__imp__sub_829710B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829710C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82966128
	ctx.lr = 0x829710D0;
	sub_82966128(ctx, base);
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
	ctx.lr = 0x829710EC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82971104
	if (ctx.cr0.eq) goto loc_82971104;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296c448
	ctx.lr = 0x829710FC;
	sub_8296C448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82971108
	goto loc_82971108;
loc_82971104:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82971108:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296db70
	ctx.lr = 0x82971118;
	sub_8296DB70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82971124;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971134
	if (ctx.cr6.eq) goto loc_82971134;
	// bl 0x823e19b0
	ctx.lr = 0x82971134;
	sub_823E19B0(ctx, base);
loc_82971134:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971140"))) PPC_WEAK_FUNC(sub_82971140);
PPC_FUNC_IMPL(__imp__sub_82971140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82966178
	ctx.lr = 0x82971158;
	sub_82966178(ctx, base);
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
	ctx.lr = 0x82971174;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297118c
	if (ctx.cr0.eq) goto loc_8297118C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296c558
	ctx.lr = 0x82971184;
	sub_8296C558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82971190
	goto loc_82971190;
loc_8297118C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82971190:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296dbe0
	ctx.lr = 0x829711A0;
	sub_8296DBE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x829711AC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829711bc
	if (ctx.cr6.eq) goto loc_829711BC;
	// bl 0x823e19b0
	ctx.lr = 0x829711BC;
	sub_823E19B0(ctx, base);
loc_829711BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829711C8"))) PPC_WEAK_FUNC(sub_829711C8);
PPC_FUNC_IMPL(__imp__sub_829711C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829711D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x829661c8
	ctx.lr = 0x829711E0;
	sub_829661C8(ctx, base);
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
	ctx.lr = 0x829711FC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82971214
	if (ctx.cr0.eq) goto loc_82971214;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296c668
	ctx.lr = 0x8297120C;
	sub_8296C668(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82971218
	goto loc_82971218;
loc_82971214:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82971218:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296dc50
	ctx.lr = 0x82971228;
	sub_8296DC50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82971234;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971244
	if (ctx.cr6.eq) goto loc_82971244;
	// bl 0x823e19b0
	ctx.lr = 0x82971244;
	sub_823E19B0(ctx, base);
loc_82971244:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971250"))) PPC_WEAK_FUNC(sub_82971250);
PPC_FUNC_IMPL(__imp__sub_82971250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971258;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82966218
	ctx.lr = 0x82971268;
	sub_82966218(ctx, base);
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
	ctx.lr = 0x82971284;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297129c
	if (ctx.cr0.eq) goto loc_8297129C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296c778
	ctx.lr = 0x82971294;
	sub_8296C778(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829712a0
	goto loc_829712A0;
loc_8297129C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_829712A0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296dcc0
	ctx.lr = 0x829712B0;
	sub_8296DCC0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x829712BC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829712cc
	if (ctx.cr6.eq) goto loc_829712CC;
	// bl 0x823e19b0
	ctx.lr = 0x829712CC;
	sub_823E19B0(ctx, base);
loc_829712CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829712D8"))) PPC_WEAK_FUNC(sub_829712D8);
PPC_FUNC_IMPL(__imp__sub_829712D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829712E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82966268
	ctx.lr = 0x829712F0;
	sub_82966268(ctx, base);
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
	ctx.lr = 0x8297130C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82971324
	if (ctx.cr0.eq) goto loc_82971324;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296c888
	ctx.lr = 0x8297131C;
	sub_8296C888(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82971328
	goto loc_82971328;
loc_82971324:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82971328:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296dd30
	ctx.lr = 0x82971338;
	sub_8296DD30(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82971344;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971354
	if (ctx.cr6.eq) goto loc_82971354;
	// bl 0x823e19b0
	ctx.lr = 0x82971354;
	sub_823E19B0(ctx, base);
loc_82971354:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971360"))) PPC_WEAK_FUNC(sub_82971360);
PPC_FUNC_IMPL(__imp__sub_82971360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971368;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x829662b8
	ctx.lr = 0x82971378;
	sub_829662B8(ctx, base);
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
	ctx.lr = 0x82971394;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829713ac
	if (ctx.cr0.eq) goto loc_829713AC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296c998
	ctx.lr = 0x829713A4;
	sub_8296C998(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829713b0
	goto loc_829713B0;
loc_829713AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_829713B0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296dda0
	ctx.lr = 0x829713C0;
	sub_8296DDA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x829713CC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829713dc
	if (ctx.cr6.eq) goto loc_829713DC;
	// bl 0x823e19b0
	ctx.lr = 0x829713DC;
	sub_823E19B0(ctx, base);
loc_829713DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829713E8"))) PPC_WEAK_FUNC(sub_829713E8);
PPC_FUNC_IMPL(__imp__sub_829713E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829713F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82966308
	ctx.lr = 0x82971400;
	sub_82966308(ctx, base);
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
	ctx.lr = 0x8297141C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82971434
	if (ctx.cr0.eq) goto loc_82971434;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296caa8
	ctx.lr = 0x8297142C;
	sub_8296CAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82971438
	goto loc_82971438;
loc_82971434:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82971438:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296de10
	ctx.lr = 0x82971448;
	sub_8296DE10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82971454;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971464
	if (ctx.cr6.eq) goto loc_82971464;
	// bl 0x823e19b0
	ctx.lr = 0x82971464;
	sub_823E19B0(ctx, base);
loc_82971464:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971470"))) PPC_WEAK_FUNC(sub_82971470);
PPC_FUNC_IMPL(__imp__sub_82971470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971478;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82966358
	ctx.lr = 0x82971488;
	sub_82966358(ctx, base);
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
	ctx.lr = 0x829714A4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829714bc
	if (ctx.cr0.eq) goto loc_829714BC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296cbf8
	ctx.lr = 0x829714B4;
	sub_8296CBF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829714c0
	goto loc_829714C0;
loc_829714BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_829714C0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296de80
	ctx.lr = 0x829714D0;
	sub_8296DE80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x829714DC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829714ec
	if (ctx.cr6.eq) goto loc_829714EC;
	// bl 0x823e19b0
	ctx.lr = 0x829714EC;
	sub_823E19B0(ctx, base);
loc_829714EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829714F8"))) PPC_WEAK_FUNC(sub_829714F8);
PPC_FUNC_IMPL(__imp__sub_829714F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971500;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x829663a8
	ctx.lr = 0x82971510;
	sub_829663A8(ctx, base);
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
	ctx.lr = 0x8297152C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82971544
	if (ctx.cr0.eq) goto loc_82971544;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296cd08
	ctx.lr = 0x8297153C;
	sub_8296CD08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82971548
	goto loc_82971548;
loc_82971544:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82971548:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296def0
	ctx.lr = 0x82971558;
	sub_8296DEF0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82971564;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971574
	if (ctx.cr6.eq) goto loc_82971574;
	// bl 0x823e19b0
	ctx.lr = 0x82971574;
	sub_823E19B0(ctx, base);
loc_82971574:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971580"))) PPC_WEAK_FUNC(sub_82971580);
PPC_FUNC_IMPL(__imp__sub_82971580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971588;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x829663f8
	ctx.lr = 0x82971598;
	sub_829663F8(ctx, base);
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
	ctx.lr = 0x829715B4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829715cc
	if (ctx.cr0.eq) goto loc_829715CC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296ce18
	ctx.lr = 0x829715C4;
	sub_8296CE18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829715d0
	goto loc_829715D0;
loc_829715CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_829715D0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296df60
	ctx.lr = 0x829715E0;
	sub_8296DF60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x829715EC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829715fc
	if (ctx.cr6.eq) goto loc_829715FC;
	// bl 0x823e19b0
	ctx.lr = 0x829715FC;
	sub_823E19B0(ctx, base);
loc_829715FC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971608"))) PPC_WEAK_FUNC(sub_82971608);
PPC_FUNC_IMPL(__imp__sub_82971608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82966448
	ctx.lr = 0x82971620;
	sub_82966448(ctx, base);
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
	ctx.lr = 0x8297163C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82971654
	if (ctx.cr0.eq) goto loc_82971654;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296cf28
	ctx.lr = 0x8297164C;
	sub_8296CF28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82971658
	goto loc_82971658;
loc_82971654:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82971658:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296dfd0
	ctx.lr = 0x82971668;
	sub_8296DFD0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82971674;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971684
	if (ctx.cr6.eq) goto loc_82971684;
	// bl 0x823e19b0
	ctx.lr = 0x82971684;
	sub_823E19B0(ctx, base);
loc_82971684:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971690"))) PPC_WEAK_FUNC(sub_82971690);
PPC_FUNC_IMPL(__imp__sub_82971690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971698;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82966498
	ctx.lr = 0x829716A8;
	sub_82966498(ctx, base);
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
	ctx.lr = 0x829716C4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829716dc
	if (ctx.cr0.eq) goto loc_829716DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296d060
	ctx.lr = 0x829716D4;
	sub_8296D060(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829716e0
	goto loc_829716E0;
loc_829716DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_829716E0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296e040
	ctx.lr = 0x829716F0;
	sub_8296E040(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x829716FC;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297170c
	if (ctx.cr6.eq) goto loc_8297170C;
	// bl 0x823e19b0
	ctx.lr = 0x8297170C;
	sub_823E19B0(ctx, base);
loc_8297170C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971718"))) PPC_WEAK_FUNC(sub_82971718);
PPC_FUNC_IMPL(__imp__sub_82971718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971720;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x829664e8
	ctx.lr = 0x82971730;
	sub_829664E8(ctx, base);
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
	ctx.lr = 0x8297174C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82971764
	if (ctx.cr0.eq) goto loc_82971764;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296d170
	ctx.lr = 0x8297175C;
	sub_8296D170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82971768
	goto loc_82971768;
loc_82971764:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82971768:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296e0b0
	ctx.lr = 0x82971778;
	sub_8296E0B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x82971784;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971794
	if (ctx.cr6.eq) goto loc_82971794;
	// bl 0x823e19b0
	ctx.lr = 0x82971794;
	sub_823E19B0(ctx, base);
loc_82971794:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829717A0"))) PPC_WEAK_FUNC(sub_829717A0);
PPC_FUNC_IMPL(__imp__sub_829717A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829717A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82966538
	ctx.lr = 0x829717B8;
	sub_82966538(ctx, base);
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
	ctx.lr = 0x829717D4;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829717ec
	if (ctx.cr0.eq) goto loc_829717EC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8296d280
	ctx.lr = 0x829717E4;
	sub_8296D280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829717f0
	goto loc_829717F0;
loc_829717EC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_829717F0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8296e120
	ctx.lr = 0x82971800;
	sub_8296E120(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c02d0
	ctx.lr = 0x8297180C;
	sub_825C02D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297181c
	if (ctx.cr6.eq) goto loc_8297181C;
	// bl 0x823e19b0
	ctx.lr = 0x8297181C;
	sub_823E19B0(ctx, base);
loc_8297181C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971828"))) PPC_WEAK_FUNC(sub_82971828);
PPC_FUNC_IMPL(__imp__sub_82971828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971830;
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
	// bne cr6,0x82971910
	if (!ctx.cr6.eq) goto loc_82971910;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297185C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971910
	if (ctx.cr0.eq) goto loc_82971910;
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297186C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829718c4
	if (ctx.cr0.eq) goto loc_829718C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82971888;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82971898;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829718A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829718AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x829687c0
	ctx.lr = 0x829718BC;
	sub_829687C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829718c8
	goto loc_829718C8;
loc_829718C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829718C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82970728
	ctx.lr = 0x829718D0;
	sub_82970728(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829718D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829718f4
	if (ctx.cr0.eq) goto loc_829718F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829718f4
	if (ctx.cr6.eq) goto loc_829718F4;
	// bl 0x823e19b0
	ctx.lr = 0x829718F4;
	sub_823E19B0(ctx, base);
loc_829718F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971918
	if (ctx.cr0.eq) goto loc_82971918;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971918
	if (ctx.cr6.eq) goto loc_82971918;
	// bl 0x823e19b0
	ctx.lr = 0x8297190C;
	sub_823E19B0(ctx, base);
	// b 0x82971918
	goto loc_82971918;
loc_82971910:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82971918;
	sub_8289D980(ctx, base);
loc_82971918:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971928"))) PPC_WEAK_FUNC(sub_82971928);
PPC_FUNC_IMPL(__imp__sub_82971928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971930;
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
	// bne cr6,0x82971a10
	if (!ctx.cr6.eq) goto loc_82971A10;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297195C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971a10
	if (ctx.cr0.eq) goto loc_82971A10;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297196C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829719c4
	if (ctx.cr0.eq) goto loc_829719C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82971988;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82971998;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829719A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829719AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x829688e8
	ctx.lr = 0x829719BC;
	sub_829688E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829719c8
	goto loc_829719C8;
loc_829719C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829719C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829707b0
	ctx.lr = 0x829719D0;
	sub_829707B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829719D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829719f4
	if (ctx.cr0.eq) goto loc_829719F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829719f4
	if (ctx.cr6.eq) goto loc_829719F4;
	// bl 0x823e19b0
	ctx.lr = 0x829719F4;
	sub_823E19B0(ctx, base);
loc_829719F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971a18
	if (ctx.cr0.eq) goto loc_82971A18;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971a18
	if (ctx.cr6.eq) goto loc_82971A18;
	// bl 0x823e19b0
	ctx.lr = 0x82971A0C;
	sub_823E19B0(ctx, base);
	// b 0x82971a18
	goto loc_82971A18;
loc_82971A10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82971A18;
	sub_8289D980(ctx, base);
loc_82971A18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971A28"))) PPC_WEAK_FUNC(sub_82971A28);
PPC_FUNC_IMPL(__imp__sub_82971A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971A30;
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
	// bne cr6,0x82971b10
	if (!ctx.cr6.eq) goto loc_82971B10;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82971A5C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971b10
	if (ctx.cr0.eq) goto loc_82971B10;
	// li r3,212
	ctx.r3.s64 = 212;
	// bl 0x82c0f6c0
	ctx.lr = 0x82971A6C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82971ac4
	if (ctx.cr0.eq) goto loc_82971AC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82971A88;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82971A98;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82971AA0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82971AAC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82968960
	ctx.lr = 0x82971ABC;
	sub_82968960(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82971ac8
	goto loc_82971AC8;
loc_82971AC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82971AC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82970838
	ctx.lr = 0x82971AD0;
	sub_82970838(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82971AD8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971af4
	if (ctx.cr0.eq) goto loc_82971AF4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971af4
	if (ctx.cr6.eq) goto loc_82971AF4;
	// bl 0x823e19b0
	ctx.lr = 0x82971AF4;
	sub_823E19B0(ctx, base);
loc_82971AF4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971b18
	if (ctx.cr0.eq) goto loc_82971B18;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971b18
	if (ctx.cr6.eq) goto loc_82971B18;
	// bl 0x823e19b0
	ctx.lr = 0x82971B0C;
	sub_823E19B0(ctx, base);
	// b 0x82971b18
	goto loc_82971B18;
loc_82971B10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82971B18;
	sub_8289D980(ctx, base);
loc_82971B18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971B28"))) PPC_WEAK_FUNC(sub_82971B28);
PPC_FUNC_IMPL(__imp__sub_82971B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971B30;
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
	// bne cr6,0x82971c10
	if (!ctx.cr6.eq) goto loc_82971C10;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82971B5C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971c10
	if (ctx.cr0.eq) goto loc_82971C10;
	// li r3,236
	ctx.r3.s64 = 236;
	// bl 0x82c0f6c0
	ctx.lr = 0x82971B6C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82971bc4
	if (ctx.cr0.eq) goto loc_82971BC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82971B88;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82971B98;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82971BA0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82971BAC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82968a00
	ctx.lr = 0x82971BBC;
	sub_82968A00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82971bc8
	goto loc_82971BC8;
loc_82971BC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82971BC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829708c0
	ctx.lr = 0x82971BD0;
	sub_829708C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82971BD8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971bf4
	if (ctx.cr0.eq) goto loc_82971BF4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971bf4
	if (ctx.cr6.eq) goto loc_82971BF4;
	// bl 0x823e19b0
	ctx.lr = 0x82971BF4;
	sub_823E19B0(ctx, base);
loc_82971BF4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971c18
	if (ctx.cr0.eq) goto loc_82971C18;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971c18
	if (ctx.cr6.eq) goto loc_82971C18;
	// bl 0x823e19b0
	ctx.lr = 0x82971C0C;
	sub_823E19B0(ctx, base);
	// b 0x82971c18
	goto loc_82971C18;
loc_82971C10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82971C18;
	sub_8289D980(ctx, base);
loc_82971C18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971C28"))) PPC_WEAK_FUNC(sub_82971C28);
PPC_FUNC_IMPL(__imp__sub_82971C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971C30;
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
	// bne cr6,0x82971d10
	if (!ctx.cr6.eq) goto loc_82971D10;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82971C5C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971d10
	if (ctx.cr0.eq) goto loc_82971D10;
	// li r3,236
	ctx.r3.s64 = 236;
	// bl 0x82c0f6c0
	ctx.lr = 0x82971C6C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82971cc4
	if (ctx.cr0.eq) goto loc_82971CC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82971C88;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82971C98;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82971CA0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82971CAC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82968d28
	ctx.lr = 0x82971CBC;
	sub_82968D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82971cc8
	goto loc_82971CC8;
loc_82971CC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82971CC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82970948
	ctx.lr = 0x82971CD0;
	sub_82970948(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82971CD8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971cf4
	if (ctx.cr0.eq) goto loc_82971CF4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971cf4
	if (ctx.cr6.eq) goto loc_82971CF4;
	// bl 0x823e19b0
	ctx.lr = 0x82971CF4;
	sub_823E19B0(ctx, base);
loc_82971CF4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971d18
	if (ctx.cr0.eq) goto loc_82971D18;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971d18
	if (ctx.cr6.eq) goto loc_82971D18;
	// bl 0x823e19b0
	ctx.lr = 0x82971D0C;
	sub_823E19B0(ctx, base);
	// b 0x82971d18
	goto loc_82971D18;
loc_82971D10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82971D18;
	sub_8289D980(ctx, base);
loc_82971D18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971D28"))) PPC_WEAK_FUNC(sub_82971D28);
PPC_FUNC_IMPL(__imp__sub_82971D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971D30;
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
	// bne cr6,0x82971e10
	if (!ctx.cr6.eq) goto loc_82971E10;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82971D5C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971e10
	if (ctx.cr0.eq) goto loc_82971E10;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82c0f6c0
	ctx.lr = 0x82971D6C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82971dc4
	if (ctx.cr0.eq) goto loc_82971DC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82971D88;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82971D98;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82971DA0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82971DAC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82968ea8
	ctx.lr = 0x82971DBC;
	sub_82968EA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82971dc8
	goto loc_82971DC8;
loc_82971DC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82971DC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829709d0
	ctx.lr = 0x82971DD0;
	sub_829709D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82971DD8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971df4
	if (ctx.cr0.eq) goto loc_82971DF4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971df4
	if (ctx.cr6.eq) goto loc_82971DF4;
	// bl 0x823e19b0
	ctx.lr = 0x82971DF4;
	sub_823E19B0(ctx, base);
loc_82971DF4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971e18
	if (ctx.cr0.eq) goto loc_82971E18;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971e18
	if (ctx.cr6.eq) goto loc_82971E18;
	// bl 0x823e19b0
	ctx.lr = 0x82971E0C;
	sub_823E19B0(ctx, base);
	// b 0x82971e18
	goto loc_82971E18;
loc_82971E10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82971E18;
	sub_8289D980(ctx, base);
loc_82971E18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971E28"))) PPC_WEAK_FUNC(sub_82971E28);
PPC_FUNC_IMPL(__imp__sub_82971E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971E30;
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
	// bne cr6,0x82971f10
	if (!ctx.cr6.eq) goto loc_82971F10;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82971E5C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971f10
	if (ctx.cr0.eq) goto loc_82971F10;
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82c0f6c0
	ctx.lr = 0x82971E6C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82971ec4
	if (ctx.cr0.eq) goto loc_82971EC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82971E88;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82971E98;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82971EA0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82971EAC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82968f20
	ctx.lr = 0x82971EBC;
	sub_82968F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82971ec8
	goto loc_82971EC8;
loc_82971EC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82971EC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82970a58
	ctx.lr = 0x82971ED0;
	sub_82970A58(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82971ED8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971ef4
	if (ctx.cr0.eq) goto loc_82971EF4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971ef4
	if (ctx.cr6.eq) goto loc_82971EF4;
	// bl 0x823e19b0
	ctx.lr = 0x82971EF4;
	sub_823E19B0(ctx, base);
loc_82971EF4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971f18
	if (ctx.cr0.eq) goto loc_82971F18;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971f18
	if (ctx.cr6.eq) goto loc_82971F18;
	// bl 0x823e19b0
	ctx.lr = 0x82971F0C;
	sub_823E19B0(ctx, base);
	// b 0x82971f18
	goto loc_82971F18;
loc_82971F10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82971F18;
	sub_8289D980(ctx, base);
loc_82971F18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82971F28"))) PPC_WEAK_FUNC(sub_82971F28);
PPC_FUNC_IMPL(__imp__sub_82971F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82971F30;
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
	// bne cr6,0x82972010
	if (!ctx.cr6.eq) goto loc_82972010;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82971F5C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972010
	if (ctx.cr0.eq) goto loc_82972010;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82c0f6c0
	ctx.lr = 0x82971F6C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82971fc4
	if (ctx.cr0.eq) goto loc_82971FC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82971F88;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82971F98;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82971FA0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82971FAC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82969050
	ctx.lr = 0x82971FBC;
	sub_82969050(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82971fc8
	goto loc_82971FC8;
loc_82971FC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82971FC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82970ae0
	ctx.lr = 0x82971FD0;
	sub_82970AE0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82971FD8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82971ff4
	if (ctx.cr0.eq) goto loc_82971FF4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82971ff4
	if (ctx.cr6.eq) goto loc_82971FF4;
	// bl 0x823e19b0
	ctx.lr = 0x82971FF4;
	sub_823E19B0(ctx, base);
loc_82971FF4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972018
	if (ctx.cr0.eq) goto loc_82972018;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972018
	if (ctx.cr6.eq) goto loc_82972018;
	// bl 0x823e19b0
	ctx.lr = 0x8297200C;
	sub_823E19B0(ctx, base);
	// b 0x82972018
	goto loc_82972018;
loc_82972010:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82972018;
	sub_8289D980(ctx, base);
loc_82972018:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82972028"))) PPC_WEAK_FUNC(sub_82972028);
PPC_FUNC_IMPL(__imp__sub_82972028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82972030;
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
	// bne cr6,0x82972110
	if (!ctx.cr6.eq) goto loc_82972110;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297205C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972110
	if (ctx.cr0.eq) goto loc_82972110;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297206C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829720c4
	if (ctx.cr0.eq) goto loc_829720C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82972088;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82972098;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829720A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829720AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82969328
	ctx.lr = 0x829720BC;
	sub_82969328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829720c8
	goto loc_829720C8;
loc_829720C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829720C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82970b68
	ctx.lr = 0x829720D0;
	sub_82970B68(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829720D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829720f4
	if (ctx.cr0.eq) goto loc_829720F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829720f4
	if (ctx.cr6.eq) goto loc_829720F4;
	// bl 0x823e19b0
	ctx.lr = 0x829720F4;
	sub_823E19B0(ctx, base);
loc_829720F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972118
	if (ctx.cr0.eq) goto loc_82972118;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972118
	if (ctx.cr6.eq) goto loc_82972118;
	// bl 0x823e19b0
	ctx.lr = 0x8297210C;
	sub_823E19B0(ctx, base);
	// b 0x82972118
	goto loc_82972118;
loc_82972110:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82972118;
	sub_8289D980(ctx, base);
loc_82972118:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82972128"))) PPC_WEAK_FUNC(sub_82972128);
PPC_FUNC_IMPL(__imp__sub_82972128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82972130;
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
	// bne cr6,0x82972210
	if (!ctx.cr6.eq) goto loc_82972210;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297215C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972210
	if (ctx.cr0.eq) goto loc_82972210;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297216C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829721c4
	if (ctx.cr0.eq) goto loc_829721C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82972188;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82972198;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829721A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829721AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x829693f0
	ctx.lr = 0x829721BC;
	sub_829693F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829721c8
	goto loc_829721C8;
loc_829721C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829721C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82970bf0
	ctx.lr = 0x829721D0;
	sub_82970BF0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829721D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829721f4
	if (ctx.cr0.eq) goto loc_829721F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829721f4
	if (ctx.cr6.eq) goto loc_829721F4;
	// bl 0x823e19b0
	ctx.lr = 0x829721F4;
	sub_823E19B0(ctx, base);
loc_829721F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972218
	if (ctx.cr0.eq) goto loc_82972218;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972218
	if (ctx.cr6.eq) goto loc_82972218;
	// bl 0x823e19b0
	ctx.lr = 0x8297220C;
	sub_823E19B0(ctx, base);
	// b 0x82972218
	goto loc_82972218;
loc_82972210:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82972218;
	sub_8289D980(ctx, base);
loc_82972218:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82972228"))) PPC_WEAK_FUNC(sub_82972228);
PPC_FUNC_IMPL(__imp__sub_82972228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82972230;
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
	// bne cr6,0x82972310
	if (!ctx.cr6.eq) goto loc_82972310;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297225C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972310
	if (ctx.cr0.eq) goto loc_82972310;
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297226C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829722c4
	if (ctx.cr0.eq) goto loc_829722C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82972288;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82972298;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829722A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829722AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82969468
	ctx.lr = 0x829722BC;
	sub_82969468(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829722c8
	goto loc_829722C8;
loc_829722C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829722C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82970c78
	ctx.lr = 0x829722D0;
	sub_82970C78(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829722D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829722f4
	if (ctx.cr0.eq) goto loc_829722F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829722f4
	if (ctx.cr6.eq) goto loc_829722F4;
	// bl 0x823e19b0
	ctx.lr = 0x829722F4;
	sub_823E19B0(ctx, base);
loc_829722F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972318
	if (ctx.cr0.eq) goto loc_82972318;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972318
	if (ctx.cr6.eq) goto loc_82972318;
	// bl 0x823e19b0
	ctx.lr = 0x8297230C;
	sub_823E19B0(ctx, base);
	// b 0x82972318
	goto loc_82972318;
loc_82972310:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82972318;
	sub_8289D980(ctx, base);
loc_82972318:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82972328"))) PPC_WEAK_FUNC(sub_82972328);
PPC_FUNC_IMPL(__imp__sub_82972328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82972330;
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
	// bne cr6,0x82972410
	if (!ctx.cr6.eq) goto loc_82972410;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297235C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972410
	if (ctx.cr0.eq) goto loc_82972410;
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297236C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829723c4
	if (ctx.cr0.eq) goto loc_829723C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82972388;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82972398;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829723A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829723AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82969620
	ctx.lr = 0x829723BC;
	sub_82969620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829723c8
	goto loc_829723C8;
loc_829723C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829723C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82970d00
	ctx.lr = 0x829723D0;
	sub_82970D00(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829723D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829723f4
	if (ctx.cr0.eq) goto loc_829723F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829723f4
	if (ctx.cr6.eq) goto loc_829723F4;
	// bl 0x823e19b0
	ctx.lr = 0x829723F4;
	sub_823E19B0(ctx, base);
loc_829723F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972418
	if (ctx.cr0.eq) goto loc_82972418;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972418
	if (ctx.cr6.eq) goto loc_82972418;
	// bl 0x823e19b0
	ctx.lr = 0x8297240C;
	sub_823E19B0(ctx, base);
	// b 0x82972418
	goto loc_82972418;
loc_82972410:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82972418;
	sub_8289D980(ctx, base);
loc_82972418:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82972428"))) PPC_WEAK_FUNC(sub_82972428);
PPC_FUNC_IMPL(__imp__sub_82972428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82972430;
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
	// bne cr6,0x82972510
	if (!ctx.cr6.eq) goto loc_82972510;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297245C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972510
	if (ctx.cr0.eq) goto loc_82972510;
	// li r3,404
	ctx.r3.s64 = 404;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297246C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829724c4
	if (ctx.cr0.eq) goto loc_829724C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82972488;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82972498;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829724A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829724AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82969740
	ctx.lr = 0x829724BC;
	sub_82969740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829724c8
	goto loc_829724C8;
loc_829724C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829724C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82970d88
	ctx.lr = 0x829724D0;
	sub_82970D88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829724D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829724f4
	if (ctx.cr0.eq) goto loc_829724F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829724f4
	if (ctx.cr6.eq) goto loc_829724F4;
	// bl 0x823e19b0
	ctx.lr = 0x829724F4;
	sub_823E19B0(ctx, base);
loc_829724F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972518
	if (ctx.cr0.eq) goto loc_82972518;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972518
	if (ctx.cr6.eq) goto loc_82972518;
	// bl 0x823e19b0
	ctx.lr = 0x8297250C;
	sub_823E19B0(ctx, base);
	// b 0x82972518
	goto loc_82972518;
loc_82972510:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82972518;
	sub_8289D980(ctx, base);
loc_82972518:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82972528"))) PPC_WEAK_FUNC(sub_82972528);
PPC_FUNC_IMPL(__imp__sub_82972528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82972530;
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
	// bne cr6,0x82972610
	if (!ctx.cr6.eq) goto loc_82972610;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297255C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972610
	if (ctx.cr0.eq) goto loc_82972610;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297256C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829725c4
	if (ctx.cr0.eq) goto loc_829725C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82972588;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82972598;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829725A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829725AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82969c78
	ctx.lr = 0x829725BC;
	sub_82969C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829725c8
	goto loc_829725C8;
loc_829725C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829725C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82970e10
	ctx.lr = 0x829725D0;
	sub_82970E10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829725D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829725f4
	if (ctx.cr0.eq) goto loc_829725F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829725f4
	if (ctx.cr6.eq) goto loc_829725F4;
	// bl 0x823e19b0
	ctx.lr = 0x829725F4;
	sub_823E19B0(ctx, base);
loc_829725F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972618
	if (ctx.cr0.eq) goto loc_82972618;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972618
	if (ctx.cr6.eq) goto loc_82972618;
	// bl 0x823e19b0
	ctx.lr = 0x8297260C;
	sub_823E19B0(ctx, base);
	// b 0x82972618
	goto loc_82972618;
loc_82972610:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82972618;
	sub_8289D980(ctx, base);
loc_82972618:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82972628"))) PPC_WEAK_FUNC(sub_82972628);
PPC_FUNC_IMPL(__imp__sub_82972628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82972630;
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
	// bne cr6,0x82972710
	if (!ctx.cr6.eq) goto loc_82972710;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297265C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972710
	if (ctx.cr0.eq) goto loc_82972710;
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297266C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829726c4
	if (ctx.cr0.eq) goto loc_829726C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82972688;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82972698;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829726A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829726AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82969d50
	ctx.lr = 0x829726BC;
	sub_82969D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829726c8
	goto loc_829726C8;
loc_829726C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829726C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82970e98
	ctx.lr = 0x829726D0;
	sub_82970E98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829726D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829726f4
	if (ctx.cr0.eq) goto loc_829726F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829726f4
	if (ctx.cr6.eq) goto loc_829726F4;
	// bl 0x823e19b0
	ctx.lr = 0x829726F4;
	sub_823E19B0(ctx, base);
loc_829726F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972718
	if (ctx.cr0.eq) goto loc_82972718;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972718
	if (ctx.cr6.eq) goto loc_82972718;
	// bl 0x823e19b0
	ctx.lr = 0x8297270C;
	sub_823E19B0(ctx, base);
	// b 0x82972718
	goto loc_82972718;
loc_82972710:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82972718;
	sub_8289D980(ctx, base);
loc_82972718:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82972728"))) PPC_WEAK_FUNC(sub_82972728);
PPC_FUNC_IMPL(__imp__sub_82972728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82972730;
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
	// bne cr6,0x82972810
	if (!ctx.cr6.eq) goto loc_82972810;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297275C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972810
	if (ctx.cr0.eq) goto loc_82972810;
	// li r3,212
	ctx.r3.s64 = 212;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297276C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829727c4
	if (ctx.cr0.eq) goto loc_829727C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82972788;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82972798;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829727A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829727AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82969e68
	ctx.lr = 0x829727BC;
	sub_82969E68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829727c8
	goto loc_829727C8;
loc_829727C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829727C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82970f20
	ctx.lr = 0x829727D0;
	sub_82970F20(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829727D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829727f4
	if (ctx.cr0.eq) goto loc_829727F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829727f4
	if (ctx.cr6.eq) goto loc_829727F4;
	// bl 0x823e19b0
	ctx.lr = 0x829727F4;
	sub_823E19B0(ctx, base);
loc_829727F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972818
	if (ctx.cr0.eq) goto loc_82972818;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972818
	if (ctx.cr6.eq) goto loc_82972818;
	// bl 0x823e19b0
	ctx.lr = 0x8297280C;
	sub_823E19B0(ctx, base);
	// b 0x82972818
	goto loc_82972818;
loc_82972810:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82972818;
	sub_8289D980(ctx, base);
loc_82972818:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82972828"))) PPC_WEAK_FUNC(sub_82972828);
PPC_FUNC_IMPL(__imp__sub_82972828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82972830;
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
	// bne cr6,0x82972910
	if (!ctx.cr6.eq) goto loc_82972910;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297285C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972910
	if (ctx.cr0.eq) goto loc_82972910;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297286C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829728c4
	if (ctx.cr0.eq) goto loc_829728C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82972888;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82972898;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829728A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829728AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8296a048
	ctx.lr = 0x829728BC;
	sub_8296A048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829728c8
	goto loc_829728C8;
loc_829728C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829728C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82970fa8
	ctx.lr = 0x829728D0;
	sub_82970FA8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829728D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829728f4
	if (ctx.cr0.eq) goto loc_829728F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829728f4
	if (ctx.cr6.eq) goto loc_829728F4;
	// bl 0x823e19b0
	ctx.lr = 0x829728F4;
	sub_823E19B0(ctx, base);
loc_829728F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972918
	if (ctx.cr0.eq) goto loc_82972918;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972918
	if (ctx.cr6.eq) goto loc_82972918;
	// bl 0x823e19b0
	ctx.lr = 0x8297290C;
	sub_823E19B0(ctx, base);
	// b 0x82972918
	goto loc_82972918;
loc_82972910:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82972918;
	sub_8289D980(ctx, base);
loc_82972918:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82972928"))) PPC_WEAK_FUNC(sub_82972928);
PPC_FUNC_IMPL(__imp__sub_82972928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82972930;
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
	// bne cr6,0x82972a10
	if (!ctx.cr6.eq) goto loc_82972A10;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297295C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972a10
	if (ctx.cr0.eq) goto loc_82972A10;
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297296C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829729c4
	if (ctx.cr0.eq) goto loc_829729C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82972988;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82972998;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829729A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829729AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8296a0c0
	ctx.lr = 0x829729BC;
	sub_8296A0C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829729c8
	goto loc_829729C8;
loc_829729C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829729C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82971030
	ctx.lr = 0x829729D0;
	sub_82971030(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829729D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829729f4
	if (ctx.cr0.eq) goto loc_829729F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829729f4
	if (ctx.cr6.eq) goto loc_829729F4;
	// bl 0x823e19b0
	ctx.lr = 0x829729F4;
	sub_823E19B0(ctx, base);
loc_829729F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972a18
	if (ctx.cr0.eq) goto loc_82972A18;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972a18
	if (ctx.cr6.eq) goto loc_82972A18;
	// bl 0x823e19b0
	ctx.lr = 0x82972A0C;
	sub_823E19B0(ctx, base);
	// b 0x82972a18
	goto loc_82972A18;
loc_82972A10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82972A18;
	sub_8289D980(ctx, base);
loc_82972A18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82972A28"))) PPC_WEAK_FUNC(sub_82972A28);
PPC_FUNC_IMPL(__imp__sub_82972A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82972A30;
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
	// bne cr6,0x82972b10
	if (!ctx.cr6.eq) goto loc_82972B10;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82972A5C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972b10
	if (ctx.cr0.eq) goto loc_82972B10;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82c0f6c0
	ctx.lr = 0x82972A6C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82972ac4
	if (ctx.cr0.eq) goto loc_82972AC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82972A88;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82972A98;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82972AA0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82972AAC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8296a1e0
	ctx.lr = 0x82972ABC;
	sub_8296A1E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82972ac8
	goto loc_82972AC8;
loc_82972AC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82972AC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829710b8
	ctx.lr = 0x82972AD0;
	sub_829710B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82972AD8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972af4
	if (ctx.cr0.eq) goto loc_82972AF4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972af4
	if (ctx.cr6.eq) goto loc_82972AF4;
	// bl 0x823e19b0
	ctx.lr = 0x82972AF4;
	sub_823E19B0(ctx, base);
loc_82972AF4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972b18
	if (ctx.cr0.eq) goto loc_82972B18;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972b18
	if (ctx.cr6.eq) goto loc_82972B18;
	// bl 0x823e19b0
	ctx.lr = 0x82972B0C;
	sub_823E19B0(ctx, base);
	// b 0x82972b18
	goto loc_82972B18;
loc_82972B10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82972B18;
	sub_8289D980(ctx, base);
loc_82972B18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82972B28"))) PPC_WEAK_FUNC(sub_82972B28);
PPC_FUNC_IMPL(__imp__sub_82972B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82972B30;
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
	// bne cr6,0x82972c10
	if (!ctx.cr6.eq) goto loc_82972C10;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82972B5C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972c10
	if (ctx.cr0.eq) goto loc_82972C10;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82c0f6c0
	ctx.lr = 0x82972B6C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82972bc4
	if (ctx.cr0.eq) goto loc_82972BC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82972B88;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82972B98;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82972BA0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82972BAC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8296a2b8
	ctx.lr = 0x82972BBC;
	sub_8296A2B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82972bc8
	goto loc_82972BC8;
loc_82972BC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82972BC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82971140
	ctx.lr = 0x82972BD0;
	sub_82971140(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82972BD8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972bf4
	if (ctx.cr0.eq) goto loc_82972BF4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972bf4
	if (ctx.cr6.eq) goto loc_82972BF4;
	// bl 0x823e19b0
	ctx.lr = 0x82972BF4;
	sub_823E19B0(ctx, base);
loc_82972BF4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972c18
	if (ctx.cr0.eq) goto loc_82972C18;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972c18
	if (ctx.cr6.eq) goto loc_82972C18;
	// bl 0x823e19b0
	ctx.lr = 0x82972C0C;
	sub_823E19B0(ctx, base);
	// b 0x82972c18
	goto loc_82972C18;
loc_82972C10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82972C18;
	sub_8289D980(ctx, base);
loc_82972C18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82972C28"))) PPC_WEAK_FUNC(sub_82972C28);
PPC_FUNC_IMPL(__imp__sub_82972C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82972C30;
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
	// bne cr6,0x82972d10
	if (!ctx.cr6.eq) goto loc_82972D10;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82972C5C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972d10
	if (ctx.cr0.eq) goto loc_82972D10;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82c0f6c0
	ctx.lr = 0x82972C6C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82972cc4
	if (ctx.cr0.eq) goto loc_82972CC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82972C88;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82972C98;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82972CA0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82972CAC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8296a330
	ctx.lr = 0x82972CBC;
	sub_8296A330(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82972cc8
	goto loc_82972CC8;
loc_82972CC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82972CC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829711c8
	ctx.lr = 0x82972CD0;
	sub_829711C8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82972CD8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972cf4
	if (ctx.cr0.eq) goto loc_82972CF4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972cf4
	if (ctx.cr6.eq) goto loc_82972CF4;
	// bl 0x823e19b0
	ctx.lr = 0x82972CF4;
	sub_823E19B0(ctx, base);
loc_82972CF4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972d18
	if (ctx.cr0.eq) goto loc_82972D18;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972d18
	if (ctx.cr6.eq) goto loc_82972D18;
	// bl 0x823e19b0
	ctx.lr = 0x82972D0C;
	sub_823E19B0(ctx, base);
	// b 0x82972d18
	goto loc_82972D18;
loc_82972D10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82972D18;
	sub_8289D980(ctx, base);
loc_82972D18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82972D28"))) PPC_WEAK_FUNC(sub_82972D28);
PPC_FUNC_IMPL(__imp__sub_82972D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82972D30;
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
	// bne cr6,0x82972e10
	if (!ctx.cr6.eq) goto loc_82972E10;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82972D5C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972e10
	if (ctx.cr0.eq) goto loc_82972E10;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82c0f6c0
	ctx.lr = 0x82972D6C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82972dc4
	if (ctx.cr0.eq) goto loc_82972DC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82972D88;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82972D98;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82972DA0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82972DAC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8296a418
	ctx.lr = 0x82972DBC;
	sub_8296A418(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82972dc8
	goto loc_82972DC8;
loc_82972DC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82972DC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82971250
	ctx.lr = 0x82972DD0;
	sub_82971250(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82972DD8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972df4
	if (ctx.cr0.eq) goto loc_82972DF4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972df4
	if (ctx.cr6.eq) goto loc_82972DF4;
	// bl 0x823e19b0
	ctx.lr = 0x82972DF4;
	sub_823E19B0(ctx, base);
loc_82972DF4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972e18
	if (ctx.cr0.eq) goto loc_82972E18;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972e18
	if (ctx.cr6.eq) goto loc_82972E18;
	// bl 0x823e19b0
	ctx.lr = 0x82972E0C;
	sub_823E19B0(ctx, base);
	// b 0x82972e18
	goto loc_82972E18;
loc_82972E10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82972E18;
	sub_8289D980(ctx, base);
loc_82972E18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82972E28"))) PPC_WEAK_FUNC(sub_82972E28);
PPC_FUNC_IMPL(__imp__sub_82972E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82972E30;
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
	// bne cr6,0x82972f10
	if (!ctx.cr6.eq) goto loc_82972F10;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82972E5C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972f10
	if (ctx.cr0.eq) goto loc_82972F10;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82c0f6c0
	ctx.lr = 0x82972E6C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82972ec4
	if (ctx.cr0.eq) goto loc_82972EC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82972E88;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82972E98;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82972EA0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82972EAC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8296a490
	ctx.lr = 0x82972EBC;
	sub_8296A490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82972ec8
	goto loc_82972EC8;
loc_82972EC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82972EC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829712d8
	ctx.lr = 0x82972ED0;
	sub_829712D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82972ED8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972ef4
	if (ctx.cr0.eq) goto loc_82972EF4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972ef4
	if (ctx.cr6.eq) goto loc_82972EF4;
	// bl 0x823e19b0
	ctx.lr = 0x82972EF4;
	sub_823E19B0(ctx, base);
loc_82972EF4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972f18
	if (ctx.cr0.eq) goto loc_82972F18;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972f18
	if (ctx.cr6.eq) goto loc_82972F18;
	// bl 0x823e19b0
	ctx.lr = 0x82972F0C;
	sub_823E19B0(ctx, base);
	// b 0x82972f18
	goto loc_82972F18;
loc_82972F10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82972F18;
	sub_8289D980(ctx, base);
loc_82972F18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82972F28"))) PPC_WEAK_FUNC(sub_82972F28);
PPC_FUNC_IMPL(__imp__sub_82972F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82972F30;
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
	// bne cr6,0x82973010
	if (!ctx.cr6.eq) goto loc_82973010;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x82972F5C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973010
	if (ctx.cr0.eq) goto loc_82973010;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82c0f6c0
	ctx.lr = 0x82972F6C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82972fc4
	if (ctx.cr0.eq) goto loc_82972FC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82972F88;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82972F98;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x82972FA0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x82972FAC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8296a508
	ctx.lr = 0x82972FBC;
	sub_8296A508(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82972fc8
	goto loc_82972FC8;
loc_82972FC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82972FC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82971360
	ctx.lr = 0x82972FD0;
	sub_82971360(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x82972FD8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82972ff4
	if (ctx.cr0.eq) goto loc_82972FF4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82972ff4
	if (ctx.cr6.eq) goto loc_82972FF4;
	// bl 0x823e19b0
	ctx.lr = 0x82972FF4;
	sub_823E19B0(ctx, base);
loc_82972FF4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973018
	if (ctx.cr0.eq) goto loc_82973018;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82973018
	if (ctx.cr6.eq) goto loc_82973018;
	// bl 0x823e19b0
	ctx.lr = 0x8297300C;
	sub_823E19B0(ctx, base);
	// b 0x82973018
	goto loc_82973018;
loc_82973010:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82973018;
	sub_8289D980(ctx, base);
loc_82973018:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82973028"))) PPC_WEAK_FUNC(sub_82973028);
PPC_FUNC_IMPL(__imp__sub_82973028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82973030;
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
	// bne cr6,0x82973110
	if (!ctx.cr6.eq) goto loc_82973110;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297305C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973110
	if (ctx.cr0.eq) goto loc_82973110;
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297306C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829730c4
	if (ctx.cr0.eq) goto loc_829730C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82973088;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82973098;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829730A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829730AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8296a580
	ctx.lr = 0x829730BC;
	sub_8296A580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829730c8
	goto loc_829730C8;
loc_829730C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829730C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829713e8
	ctx.lr = 0x829730D0;
	sub_829713E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829730D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829730f4
	if (ctx.cr0.eq) goto loc_829730F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829730f4
	if (ctx.cr6.eq) goto loc_829730F4;
	// bl 0x823e19b0
	ctx.lr = 0x829730F4;
	sub_823E19B0(ctx, base);
loc_829730F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973118
	if (ctx.cr0.eq) goto loc_82973118;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82973118
	if (ctx.cr6.eq) goto loc_82973118;
	// bl 0x823e19b0
	ctx.lr = 0x8297310C;
	sub_823E19B0(ctx, base);
	// b 0x82973118
	goto loc_82973118;
loc_82973110:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82973118;
	sub_8289D980(ctx, base);
loc_82973118:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82973128"))) PPC_WEAK_FUNC(sub_82973128);
PPC_FUNC_IMPL(__imp__sub_82973128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82973130;
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
	// bne cr6,0x82973210
	if (!ctx.cr6.eq) goto loc_82973210;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297315C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973210
	if (ctx.cr0.eq) goto loc_82973210;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297316C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829731c4
	if (ctx.cr0.eq) goto loc_829731C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82973188;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82973198;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829731A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829731AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8296a790
	ctx.lr = 0x829731BC;
	sub_8296A790(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829731c8
	goto loc_829731C8;
loc_829731C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829731C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82971470
	ctx.lr = 0x829731D0;
	sub_82971470(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829731D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829731f4
	if (ctx.cr0.eq) goto loc_829731F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829731f4
	if (ctx.cr6.eq) goto loc_829731F4;
	// bl 0x823e19b0
	ctx.lr = 0x829731F4;
	sub_823E19B0(ctx, base);
loc_829731F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973218
	if (ctx.cr0.eq) goto loc_82973218;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82973218
	if (ctx.cr6.eq) goto loc_82973218;
	// bl 0x823e19b0
	ctx.lr = 0x8297320C;
	sub_823E19B0(ctx, base);
	// b 0x82973218
	goto loc_82973218;
loc_82973210:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82973218;
	sub_8289D980(ctx, base);
loc_82973218:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82973228"))) PPC_WEAK_FUNC(sub_82973228);
PPC_FUNC_IMPL(__imp__sub_82973228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82973230;
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
	// bne cr6,0x82973310
	if (!ctx.cr6.eq) goto loc_82973310;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297325C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973310
	if (ctx.cr0.eq) goto loc_82973310;
	// li r3,212
	ctx.r3.s64 = 212;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297326C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829732c4
	if (ctx.cr0.eq) goto loc_829732C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82973288;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82973298;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829732A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829732AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8296a918
	ctx.lr = 0x829732BC;
	sub_8296A918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829732c8
	goto loc_829732C8;
loc_829732C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829732C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829714f8
	ctx.lr = 0x829732D0;
	sub_829714F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829732D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829732f4
	if (ctx.cr0.eq) goto loc_829732F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829732f4
	if (ctx.cr6.eq) goto loc_829732F4;
	// bl 0x823e19b0
	ctx.lr = 0x829732F4;
	sub_823E19B0(ctx, base);
loc_829732F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973318
	if (ctx.cr0.eq) goto loc_82973318;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82973318
	if (ctx.cr6.eq) goto loc_82973318;
	// bl 0x823e19b0
	ctx.lr = 0x8297330C;
	sub_823E19B0(ctx, base);
	// b 0x82973318
	goto loc_82973318;
loc_82973310:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82973318;
	sub_8289D980(ctx, base);
loc_82973318:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82973328"))) PPC_WEAK_FUNC(sub_82973328);
PPC_FUNC_IMPL(__imp__sub_82973328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82973330;
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
	// bne cr6,0x82973410
	if (!ctx.cr6.eq) goto loc_82973410;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297335C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973410
	if (ctx.cr0.eq) goto loc_82973410;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297336C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829733c4
	if (ctx.cr0.eq) goto loc_829733C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82973388;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82973398;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829733A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829733AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8296aa88
	ctx.lr = 0x829733BC;
	sub_8296AA88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829733c8
	goto loc_829733C8;
loc_829733C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829733C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82971580
	ctx.lr = 0x829733D0;
	sub_82971580(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829733D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829733f4
	if (ctx.cr0.eq) goto loc_829733F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829733f4
	if (ctx.cr6.eq) goto loc_829733F4;
	// bl 0x823e19b0
	ctx.lr = 0x829733F4;
	sub_823E19B0(ctx, base);
loc_829733F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973418
	if (ctx.cr0.eq) goto loc_82973418;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82973418
	if (ctx.cr6.eq) goto loc_82973418;
	// bl 0x823e19b0
	ctx.lr = 0x8297340C;
	sub_823E19B0(ctx, base);
	// b 0x82973418
	goto loc_82973418;
loc_82973410:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82973418;
	sub_8289D980(ctx, base);
loc_82973418:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82973428"))) PPC_WEAK_FUNC(sub_82973428);
PPC_FUNC_IMPL(__imp__sub_82973428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82973430;
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
	// bne cr6,0x82973510
	if (!ctx.cr6.eq) goto loc_82973510;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297345C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973510
	if (ctx.cr0.eq) goto loc_82973510;
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297346C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829734c4
	if (ctx.cr0.eq) goto loc_829734C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82973488;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82973498;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829734A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829734AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8296ab00
	ctx.lr = 0x829734BC;
	sub_8296AB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829734c8
	goto loc_829734C8;
loc_829734C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829734C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82971608
	ctx.lr = 0x829734D0;
	sub_82971608(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829734D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829734f4
	if (ctx.cr0.eq) goto loc_829734F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829734f4
	if (ctx.cr6.eq) goto loc_829734F4;
	// bl 0x823e19b0
	ctx.lr = 0x829734F4;
	sub_823E19B0(ctx, base);
loc_829734F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973518
	if (ctx.cr0.eq) goto loc_82973518;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82973518
	if (ctx.cr6.eq) goto loc_82973518;
	// bl 0x823e19b0
	ctx.lr = 0x8297350C;
	sub_823E19B0(ctx, base);
	// b 0x82973518
	goto loc_82973518;
loc_82973510:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82973518;
	sub_8289D980(ctx, base);
loc_82973518:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82973528"))) PPC_WEAK_FUNC(sub_82973528);
PPC_FUNC_IMPL(__imp__sub_82973528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82973530;
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
	// bne cr6,0x82973610
	if (!ctx.cr6.eq) goto loc_82973610;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297355C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973610
	if (ctx.cr0.eq) goto loc_82973610;
	// li r3,212
	ctx.r3.s64 = 212;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297356C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829735c4
	if (ctx.cr0.eq) goto loc_829735C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82973588;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82973598;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829735A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829735AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8296ac28
	ctx.lr = 0x829735BC;
	sub_8296AC28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829735c8
	goto loc_829735C8;
loc_829735C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829735C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82971690
	ctx.lr = 0x829735D0;
	sub_82971690(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829735D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829735f4
	if (ctx.cr0.eq) goto loc_829735F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829735f4
	if (ctx.cr6.eq) goto loc_829735F4;
	// bl 0x823e19b0
	ctx.lr = 0x829735F4;
	sub_823E19B0(ctx, base);
loc_829735F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973618
	if (ctx.cr0.eq) goto loc_82973618;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82973618
	if (ctx.cr6.eq) goto loc_82973618;
	// bl 0x823e19b0
	ctx.lr = 0x8297360C;
	sub_823E19B0(ctx, base);
	// b 0x82973618
	goto loc_82973618;
loc_82973610:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82973618;
	sub_8289D980(ctx, base);
loc_82973618:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82973628"))) PPC_WEAK_FUNC(sub_82973628);
PPC_FUNC_IMPL(__imp__sub_82973628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82973630;
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
	// bne cr6,0x82973710
	if (!ctx.cr6.eq) goto loc_82973710;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297365C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973710
	if (ctx.cr0.eq) goto loc_82973710;
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297366C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829736c4
	if (ctx.cr0.eq) goto loc_829736C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82973688;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82973698;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829736A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829736AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8296ae38
	ctx.lr = 0x829736BC;
	sub_8296AE38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829736c8
	goto loc_829736C8;
loc_829736C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829736C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82971718
	ctx.lr = 0x829736D0;
	sub_82971718(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829736D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829736f4
	if (ctx.cr0.eq) goto loc_829736F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829736f4
	if (ctx.cr6.eq) goto loc_829736F4;
	// bl 0x823e19b0
	ctx.lr = 0x829736F4;
	sub_823E19B0(ctx, base);
loc_829736F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973718
	if (ctx.cr0.eq) goto loc_82973718;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82973718
	if (ctx.cr6.eq) goto loc_82973718;
	// bl 0x823e19b0
	ctx.lr = 0x8297370C;
	sub_823E19B0(ctx, base);
	// b 0x82973718
	goto loc_82973718;
loc_82973710:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82973718;
	sub_8289D980(ctx, base);
loc_82973718:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82973728"))) PPC_WEAK_FUNC(sub_82973728);
PPC_FUNC_IMPL(__imp__sub_82973728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82973730;
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
	// bne cr6,0x82973810
	if (!ctx.cr6.eq) goto loc_82973810;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825a71c8
	ctx.lr = 0x8297375C;
	sub_825A71C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973810
	if (ctx.cr0.eq) goto loc_82973810;
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82c0f6c0
	ctx.lr = 0x8297376C;
	sub_82C0F6C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829737c4
	if (ctx.cr0.eq) goto loc_829737C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x82e4e730
	ctx.lr = 0x82973788;
	sub_82E4E730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e4e730
	ctx.lr = 0x82973798;
	sub_82E4E730(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824992b0
	ctx.lr = 0x829737A0;
	sub_824992B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825a6f58
	ctx.lr = 0x829737AC;
	sub_825A6F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8296af60
	ctx.lr = 0x829737BC;
	sub_8296AF60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829737c8
	goto loc_829737C8;
loc_829737C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829737C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829717a0
	ctx.lr = 0x829737D0;
	sub_829717A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e4e058
	ctx.lr = 0x829737D8;
	sub_82E4E058(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829737f4
	if (ctx.cr0.eq) goto loc_829737F4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829737f4
	if (ctx.cr6.eq) goto loc_829737F4;
	// bl 0x823e19b0
	ctx.lr = 0x829737F4;
	sub_823E19B0(ctx, base);
loc_829737F4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973818
	if (ctx.cr0.eq) goto loc_82973818;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82973818
	if (ctx.cr6.eq) goto loc_82973818;
	// bl 0x823e19b0
	ctx.lr = 0x8297380C;
	sub_823E19B0(ctx, base);
	// b 0x82973818
	goto loc_82973818;
loc_82973810:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8289d980
	ctx.lr = 0x82973818;
	sub_8289D980(ctx, base);
loc_82973818:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82973828"))) PPC_WEAK_FUNC(sub_82973828);
PPC_FUNC_IMPL(__imp__sub_82973828) {
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
	ctx.lr = 0x82973840;
	sub_829095B0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22584
	ctx.r11.s64 = ctx.r11.s64 + -22584;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_82973878"))) PPC_WEAK_FUNC(sub_82973878);
PPC_FUNC_IMPL(__imp__sub_82973878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	ctx.lr = 0x82973890;
	sub_829095B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,-22044
	ctx.r9.s64 = ctx.r9.s64 + -22044;
	// lfs f0,3608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3648(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
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

__attribute__((alias("__imp__sub_829738D0"))) PPC_WEAK_FUNC(sub_829738D0);
PPC_FUNC_IMPL(__imp__sub_829738D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,9348
	ctx.r11.s64 = ctx.r11.s64 + 9348;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x829738fc
	if (ctx.cr0.eq) goto loc_829738FC;
	// bl 0x823fd208
	ctx.lr = 0x829738FC;
	sub_823FD208(ctx, base);
loc_829738FC:
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

__attribute__((alias("__imp__sub_82973918"))) PPC_WEAK_FUNC(sub_82973918);
PPC_FUNC_IMPL(__imp__sub_82973918) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19536
	ctx.r31.s64 = ctx.r11.s64 + -19536;
	// lwz r11,-19524(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19524);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973950
	if (!ctx.cr0.eq) goto loc_82973950;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19524, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973950;
	sub_8289D980(ctx, base);
loc_82973950:
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

__attribute__((alias("__imp__sub_82973968"))) PPC_WEAK_FUNC(sub_82973968);
PPC_FUNC_IMPL(__imp__sub_82973968) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19520
	ctx.r31.s64 = ctx.r11.s64 + -19520;
	// lwz r11,-19508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19508);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829739a0
	if (!ctx.cr0.eq) goto loc_829739A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19508, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829739A0;
	sub_8289D980(ctx, base);
loc_829739A0:
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

__attribute__((alias("__imp__sub_829739B8"))) PPC_WEAK_FUNC(sub_829739B8);
PPC_FUNC_IMPL(__imp__sub_829739B8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19504
	ctx.r31.s64 = ctx.r11.s64 + -19504;
	// lwz r11,-19492(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19492);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829739f0
	if (!ctx.cr0.eq) goto loc_829739F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19492, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829739F0;
	sub_8289D980(ctx, base);
loc_829739F0:
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

__attribute__((alias("__imp__sub_82973A08"))) PPC_WEAK_FUNC(sub_82973A08);
PPC_FUNC_IMPL(__imp__sub_82973A08) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19488
	ctx.r31.s64 = ctx.r11.s64 + -19488;
	// lwz r11,-19476(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19476);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973a40
	if (!ctx.cr0.eq) goto loc_82973A40;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19476, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973A40;
	sub_8289D980(ctx, base);
loc_82973A40:
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

__attribute__((alias("__imp__sub_82973A58"))) PPC_WEAK_FUNC(sub_82973A58);
PPC_FUNC_IMPL(__imp__sub_82973A58) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19472
	ctx.r31.s64 = ctx.r11.s64 + -19472;
	// lwz r11,-19460(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19460);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973a90
	if (!ctx.cr0.eq) goto loc_82973A90;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19460(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19460, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973A90;
	sub_8289D980(ctx, base);
loc_82973A90:
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

__attribute__((alias("__imp__sub_82973AA8"))) PPC_WEAK_FUNC(sub_82973AA8);
PPC_FUNC_IMPL(__imp__sub_82973AA8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19456
	ctx.r31.s64 = ctx.r11.s64 + -19456;
	// lwz r11,-19444(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19444);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973ae0
	if (!ctx.cr0.eq) goto loc_82973AE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19444, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973AE0;
	sub_8289D980(ctx, base);
loc_82973AE0:
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

__attribute__((alias("__imp__sub_82973AF8"))) PPC_WEAK_FUNC(sub_82973AF8);
PPC_FUNC_IMPL(__imp__sub_82973AF8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19440
	ctx.r31.s64 = ctx.r11.s64 + -19440;
	// lwz r11,-19428(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19428);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973b30
	if (!ctx.cr0.eq) goto loc_82973B30;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19428, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973B30;
	sub_8289D980(ctx, base);
loc_82973B30:
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

__attribute__((alias("__imp__sub_82973B48"))) PPC_WEAK_FUNC(sub_82973B48);
PPC_FUNC_IMPL(__imp__sub_82973B48) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19424
	ctx.r31.s64 = ctx.r11.s64 + -19424;
	// lwz r11,-19412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19412);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973b80
	if (!ctx.cr0.eq) goto loc_82973B80;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19412, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973B80;
	sub_8289D980(ctx, base);
loc_82973B80:
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

__attribute__((alias("__imp__sub_82973B98"))) PPC_WEAK_FUNC(sub_82973B98);
PPC_FUNC_IMPL(__imp__sub_82973B98) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19408
	ctx.r31.s64 = ctx.r11.s64 + -19408;
	// lwz r11,-19396(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19396);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973bd0
	if (!ctx.cr0.eq) goto loc_82973BD0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19396, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973BD0;
	sub_8289D980(ctx, base);
loc_82973BD0:
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

__attribute__((alias("__imp__sub_82973BE8"))) PPC_WEAK_FUNC(sub_82973BE8);
PPC_FUNC_IMPL(__imp__sub_82973BE8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19392
	ctx.r31.s64 = ctx.r11.s64 + -19392;
	// lwz r11,-19380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19380);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973c20
	if (!ctx.cr0.eq) goto loc_82973C20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19380(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19380, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973C20;
	sub_8289D980(ctx, base);
loc_82973C20:
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

__attribute__((alias("__imp__sub_82973C38"))) PPC_WEAK_FUNC(sub_82973C38);
PPC_FUNC_IMPL(__imp__sub_82973C38) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19376
	ctx.r31.s64 = ctx.r11.s64 + -19376;
	// lwz r11,-19364(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19364);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973c70
	if (!ctx.cr0.eq) goto loc_82973C70;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19364, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973C70;
	sub_8289D980(ctx, base);
loc_82973C70:
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

__attribute__((alias("__imp__sub_82973C88"))) PPC_WEAK_FUNC(sub_82973C88);
PPC_FUNC_IMPL(__imp__sub_82973C88) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19360
	ctx.r31.s64 = ctx.r11.s64 + -19360;
	// lwz r11,-19348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19348);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973cc0
	if (!ctx.cr0.eq) goto loc_82973CC0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19348, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973CC0;
	sub_8289D980(ctx, base);
loc_82973CC0:
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

__attribute__((alias("__imp__sub_82973CD8"))) PPC_WEAK_FUNC(sub_82973CD8);
PPC_FUNC_IMPL(__imp__sub_82973CD8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19344
	ctx.r31.s64 = ctx.r11.s64 + -19344;
	// lwz r11,-19332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19332);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973d10
	if (!ctx.cr0.eq) goto loc_82973D10;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19332(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19332, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973D10;
	sub_8289D980(ctx, base);
loc_82973D10:
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

__attribute__((alias("__imp__sub_82973D28"))) PPC_WEAK_FUNC(sub_82973D28);
PPC_FUNC_IMPL(__imp__sub_82973D28) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19328
	ctx.r31.s64 = ctx.r11.s64 + -19328;
	// lwz r11,-19316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19316);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973d60
	if (!ctx.cr0.eq) goto loc_82973D60;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19316, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973D60;
	sub_8289D980(ctx, base);
loc_82973D60:
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

__attribute__((alias("__imp__sub_82973D78"))) PPC_WEAK_FUNC(sub_82973D78);
PPC_FUNC_IMPL(__imp__sub_82973D78) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19312
	ctx.r31.s64 = ctx.r11.s64 + -19312;
	// lwz r11,-19300(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19300);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973db0
	if (!ctx.cr0.eq) goto loc_82973DB0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19300(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19300, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973DB0;
	sub_8289D980(ctx, base);
loc_82973DB0:
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

__attribute__((alias("__imp__sub_82973DC8"))) PPC_WEAK_FUNC(sub_82973DC8);
PPC_FUNC_IMPL(__imp__sub_82973DC8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19296
	ctx.r31.s64 = ctx.r11.s64 + -19296;
	// lwz r11,-19284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19284);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973e00
	if (!ctx.cr0.eq) goto loc_82973E00;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19284(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19284, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973E00;
	sub_8289D980(ctx, base);
loc_82973E00:
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

__attribute__((alias("__imp__sub_82973E18"))) PPC_WEAK_FUNC(sub_82973E18);
PPC_FUNC_IMPL(__imp__sub_82973E18) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19280
	ctx.r31.s64 = ctx.r11.s64 + -19280;
	// lwz r11,-19268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19268);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973e50
	if (!ctx.cr0.eq) goto loc_82973E50;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19268, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973E50;
	sub_8289D980(ctx, base);
loc_82973E50:
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

__attribute__((alias("__imp__sub_82973E68"))) PPC_WEAK_FUNC(sub_82973E68);
PPC_FUNC_IMPL(__imp__sub_82973E68) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19264
	ctx.r31.s64 = ctx.r11.s64 + -19264;
	// lwz r11,-19252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19252);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973ea0
	if (!ctx.cr0.eq) goto loc_82973EA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19252, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973EA0;
	sub_8289D980(ctx, base);
loc_82973EA0:
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

__attribute__((alias("__imp__sub_82973EB8"))) PPC_WEAK_FUNC(sub_82973EB8);
PPC_FUNC_IMPL(__imp__sub_82973EB8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19248
	ctx.r31.s64 = ctx.r11.s64 + -19248;
	// lwz r11,-19236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19236);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973ef0
	if (!ctx.cr0.eq) goto loc_82973EF0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19236(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19236, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973EF0;
	sub_8289D980(ctx, base);
loc_82973EF0:
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

__attribute__((alias("__imp__sub_82973F08"))) PPC_WEAK_FUNC(sub_82973F08);
PPC_FUNC_IMPL(__imp__sub_82973F08) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19232
	ctx.r31.s64 = ctx.r11.s64 + -19232;
	// lwz r11,-19220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19220);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973f40
	if (!ctx.cr0.eq) goto loc_82973F40;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19220(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19220, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973F40;
	sub_8289D980(ctx, base);
loc_82973F40:
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

__attribute__((alias("__imp__sub_82973F58"))) PPC_WEAK_FUNC(sub_82973F58);
PPC_FUNC_IMPL(__imp__sub_82973F58) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19216
	ctx.r31.s64 = ctx.r11.s64 + -19216;
	// lwz r11,-19204(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19204);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973f90
	if (!ctx.cr0.eq) goto loc_82973F90;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19204(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19204, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973F90;
	sub_8289D980(ctx, base);
loc_82973F90:
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

__attribute__((alias("__imp__sub_82973FA8"))) PPC_WEAK_FUNC(sub_82973FA8);
PPC_FUNC_IMPL(__imp__sub_82973FA8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19200
	ctx.r31.s64 = ctx.r11.s64 + -19200;
	// lwz r11,-19188(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19188);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973fe0
	if (!ctx.cr0.eq) goto loc_82973FE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19188(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19188, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82973FE0;
	sub_8289D980(ctx, base);
loc_82973FE0:
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

__attribute__((alias("__imp__sub_82973FF8"))) PPC_WEAK_FUNC(sub_82973FF8);
PPC_FUNC_IMPL(__imp__sub_82973FF8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19184
	ctx.r31.s64 = ctx.r11.s64 + -19184;
	// lwz r11,-19172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19172);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82974030
	if (!ctx.cr0.eq) goto loc_82974030;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19172(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19172, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82974030;
	sub_8289D980(ctx, base);
loc_82974030:
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

__attribute__((alias("__imp__sub_82974048"))) PPC_WEAK_FUNC(sub_82974048);
PPC_FUNC_IMPL(__imp__sub_82974048) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19168
	ctx.r31.s64 = ctx.r11.s64 + -19168;
	// lwz r11,-19156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19156);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82974080
	if (!ctx.cr0.eq) goto loc_82974080;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19156(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19156, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82974080;
	sub_8289D980(ctx, base);
loc_82974080:
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

__attribute__((alias("__imp__sub_82974098"))) PPC_WEAK_FUNC(sub_82974098);
PPC_FUNC_IMPL(__imp__sub_82974098) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19152
	ctx.r31.s64 = ctx.r11.s64 + -19152;
	// lwz r11,-19140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19140);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829740d0
	if (!ctx.cr0.eq) goto loc_829740D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19140(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19140, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829740D0;
	sub_8289D980(ctx, base);
loc_829740D0:
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

__attribute__((alias("__imp__sub_829740E8"))) PPC_WEAK_FUNC(sub_829740E8);
PPC_FUNC_IMPL(__imp__sub_829740E8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19136
	ctx.r31.s64 = ctx.r11.s64 + -19136;
	// lwz r11,-19124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19124);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82974120
	if (!ctx.cr0.eq) goto loc_82974120;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19124, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82974120;
	sub_8289D980(ctx, base);
loc_82974120:
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

__attribute__((alias("__imp__sub_82974138"))) PPC_WEAK_FUNC(sub_82974138);
PPC_FUNC_IMPL(__imp__sub_82974138) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19120
	ctx.r31.s64 = ctx.r11.s64 + -19120;
	// lwz r11,-19108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19108);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82974170
	if (!ctx.cr0.eq) goto loc_82974170;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19108, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82974170;
	sub_8289D980(ctx, base);
loc_82974170:
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

__attribute__((alias("__imp__sub_82974188"))) PPC_WEAK_FUNC(sub_82974188);
PPC_FUNC_IMPL(__imp__sub_82974188) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19104
	ctx.r31.s64 = ctx.r11.s64 + -19104;
	// lwz r11,-19092(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19092);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829741c0
	if (!ctx.cr0.eq) goto loc_829741C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19092(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19092, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829741C0;
	sub_8289D980(ctx, base);
loc_829741C0:
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

__attribute__((alias("__imp__sub_829741D8"))) PPC_WEAK_FUNC(sub_829741D8);
PPC_FUNC_IMPL(__imp__sub_829741D8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19088
	ctx.r31.s64 = ctx.r11.s64 + -19088;
	// lwz r11,-19076(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19076);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82974210
	if (!ctx.cr0.eq) goto loc_82974210;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19076(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19076, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82974210;
	sub_8289D980(ctx, base);
loc_82974210:
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

__attribute__((alias("__imp__sub_82974228"))) PPC_WEAK_FUNC(sub_82974228);
PPC_FUNC_IMPL(__imp__sub_82974228) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19072
	ctx.r31.s64 = ctx.r11.s64 + -19072;
	// lwz r11,-19060(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19060);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82974260
	if (!ctx.cr0.eq) goto loc_82974260;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19060, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82974260;
	sub_8289D980(ctx, base);
loc_82974260:
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

__attribute__((alias("__imp__sub_82974278"))) PPC_WEAK_FUNC(sub_82974278);
PPC_FUNC_IMPL(__imp__sub_82974278) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19056
	ctx.r31.s64 = ctx.r11.s64 + -19056;
	// lwz r11,-19044(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19044);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829742b0
	if (!ctx.cr0.eq) goto loc_829742B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19044(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19044, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x829742B0;
	sub_8289D980(ctx, base);
loc_829742B0:
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

__attribute__((alias("__imp__sub_829742C8"))) PPC_WEAK_FUNC(sub_829742C8);
PPC_FUNC_IMPL(__imp__sub_829742C8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r31,r11,-19040
	ctx.r31.s64 = ctx.r11.s64 + -19040;
	// lwz r11,-19028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19028);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82974300
	if (!ctx.cr0.eq) goto loc_82974300;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-19028(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19028, ctx.r11.u32);
	// bl 0x8289d980
	ctx.lr = 0x82974300;
	sub_8289D980(ctx, base);
loc_82974300:
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

__attribute__((alias("__imp__sub_82974318"))) PPC_WEAK_FUNC(sub_82974318);
PPC_FUNC_IMPL(__imp__sub_82974318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82974320;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82e512a0
	ctx.lr = 0x82974340;
	sub_82E512A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830b2320
	ctx.lr = 0x82974358;
	sub_830B2320(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c017d8
	ctx.lr = 0x82974360;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297437c
	if (ctx.cr0.eq) goto loc_8297437C;
	// addi r4,r30,128
	ctx.r4.s64 = ctx.r30.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e51010
	ctx.lr = 0x82974374;
	sub_82E51010(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x829743c0
	goto loc_829743C0;
loc_8297437C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c017d8
	ctx.lr = 0x82974384;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829743a0
	if (ctx.cr0.eq) goto loc_829743A0;
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e51010
	ctx.lr = 0x82974398;
	sub_82E51010(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x829743c0
	goto loc_829743C0;
loc_829743A0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c017d8
	ctx.lr = 0x829743A8;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829743c4
	if (ctx.cr0.eq) goto loc_829743C4;
	// addi r4,r30,176
	ctx.r4.s64 = ctx.r30.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e51010
	ctx.lr = 0x829743BC;
	sub_82E51010(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_829743C0:
	// bl 0x824e57a8
	ctx.lr = 0x829743C4;
	sub_824E57A8(ctx, base);
loc_829743C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829743D0"))) PPC_WEAK_FUNC(sub_829743D0);
PPC_FUNC_IMPL(__imp__sub_829743D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829743D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830b2320
	ctx.lr = 0x829743F8;
	sub_830B2320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82e512a0
	ctx.lr = 0x82974404;
	sub_82E512A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82c017d8
	ctx.lr = 0x82974410;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297442c
	if (ctx.cr0.eq) goto loc_8297442C;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e51010
	ctx.lr = 0x82974424;
	sub_82E51010(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824e57a8
	ctx.lr = 0x8297442C;
	sub_824E57A8(ctx, base);
loc_8297442C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c017d8
	ctx.lr = 0x82974434;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974450
	if (ctx.cr0.eq) goto loc_82974450;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e51010
	ctx.lr = 0x82974448;
	sub_82E51010(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x824e57a8
	ctx.lr = 0x82974450;
	sub_824E57A8(ctx, base);
loc_82974450:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82974458"))) PPC_WEAK_FUNC(sub_82974458);
PPC_FUNC_IMPL(__imp__sub_82974458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82974460;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82e512a0
	ctx.lr = 0x82974480;
	sub_82E512A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830b2320
	ctx.lr = 0x82974498;
	sub_830B2320(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c017d8
	ctx.lr = 0x829744A0;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829744bc
	if (ctx.cr0.eq) goto loc_829744BC;
	// addi r4,r30,128
	ctx.r4.s64 = ctx.r30.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e51010
	ctx.lr = 0x829744B4;
	sub_82E51010(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824e57a8
	ctx.lr = 0x829744BC;
	sub_824E57A8(ctx, base);
loc_829744BC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c017d8
	ctx.lr = 0x829744C4;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829744e0
	if (ctx.cr0.eq) goto loc_829744E0;
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e51010
	ctx.lr = 0x829744D8;
	sub_82E51010(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824e57a8
	ctx.lr = 0x829744E0;
	sub_824E57A8(ctx, base);
loc_829744E0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c017d8
	ctx.lr = 0x829744E8;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974504
	if (ctx.cr0.eq) goto loc_82974504;
	// addi r4,r30,176
	ctx.r4.s64 = ctx.r30.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e51010
	ctx.lr = 0x829744FC;
	sub_82E51010(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x824e57a8
	ctx.lr = 0x82974504;
	sub_824E57A8(ctx, base);
loc_82974504:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82c017d8
	ctx.lr = 0x8297450C;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974528
	if (ctx.cr0.eq) goto loc_82974528;
	// addi r4,r30,200
	ctx.r4.s64 = ctx.r30.s64 + 200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e51010
	ctx.lr = 0x82974520;
	sub_82E51010(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x824e57a8
	ctx.lr = 0x82974528;
	sub_824E57A8(ctx, base);
loc_82974528:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82c017d8
	ctx.lr = 0x82974530;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297454c
	if (ctx.cr0.eq) goto loc_8297454C;
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e51010
	ctx.lr = 0x82974544;
	sub_82E51010(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x824e57a8
	ctx.lr = 0x8297454C;
	sub_824E57A8(ctx, base);
loc_8297454C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82c017d8
	ctx.lr = 0x82974554;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974570
	if (ctx.cr0.eq) goto loc_82974570;
	// addi r4,r30,248
	ctx.r4.s64 = ctx.r30.s64 + 248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e51010
	ctx.lr = 0x82974568;
	sub_82E51010(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x824e57a8
	ctx.lr = 0x82974570;
	sub_824E57A8(ctx, base);
loc_82974570:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82974578"))) PPC_WEAK_FUNC(sub_82974578);
PPC_FUNC_IMPL(__imp__sub_82974578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82974580;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82e512a0
	ctx.lr = 0x829745A0;
	sub_82E512A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x829745B8;
	sub_830B2320(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c017d8
	ctx.lr = 0x829745C0;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829745dc
	if (ctx.cr0.eq) goto loc_829745DC;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e51010
	ctx.lr = 0x829745D4;
	sub_82E51010(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x829745fc
	goto loc_829745FC;
loc_829745DC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c017d8
	ctx.lr = 0x829745E4;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974600
	if (ctx.cr0.eq) goto loc_82974600;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e51010
	ctx.lr = 0x829745F8;
	sub_82E51010(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_829745FC:
	// bl 0x824e57a8
	ctx.lr = 0x82974600;
	sub_824E57A8(ctx, base);
loc_82974600:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82974608"))) PPC_WEAK_FUNC(sub_82974608);
PPC_FUNC_IMPL(__imp__sub_82974608) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22584
	ctx.r11.s64 = ctx.r11.s64 + -22584;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x82974634;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974644
	if (ctx.cr0.eq) goto loc_82974644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82974644;
	sub_823FD208(ctx, base);
loc_82974644:
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

__attribute__((alias("__imp__sub_82974660"))) PPC_WEAK_FUNC(sub_82974660);
PPC_FUNC_IMPL(__imp__sub_82974660) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22524
	ctx.r11.s64 = ctx.r11.s64 + -22524;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x8297468C;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297469c
	if (ctx.cr0.eq) goto loc_8297469C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8297469C;
	sub_823FD208(ctx, base);
loc_8297469C:
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

__attribute__((alias("__imp__sub_829746B8"))) PPC_WEAK_FUNC(sub_829746B8);
PPC_FUNC_IMPL(__imp__sub_829746B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22464
	ctx.r11.s64 = ctx.r11.s64 + -22464;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x829746E4;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829746f4
	if (ctx.cr0.eq) goto loc_829746F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829746F4;
	sub_823FD208(ctx, base);
loc_829746F4:
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

__attribute__((alias("__imp__sub_82974710"))) PPC_WEAK_FUNC(sub_82974710);
PPC_FUNC_IMPL(__imp__sub_82974710) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22404
	ctx.r11.s64 = ctx.r11.s64 + -22404;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x8297473C;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297474c
	if (ctx.cr0.eq) goto loc_8297474C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8297474C;
	sub_823FD208(ctx, base);
loc_8297474C:
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

__attribute__((alias("__imp__sub_82974768"))) PPC_WEAK_FUNC(sub_82974768);
PPC_FUNC_IMPL(__imp__sub_82974768) {
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
	ctx.lr = 0x82974788;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x82974790;
	sub_82C01030(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r5,r11,-21652
	ctx.r5.s64 = ctx.r11.s64 + -21652;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829747AC;
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

__attribute__((alias("__imp__sub_829747C8"))) PPC_WEAK_FUNC(sub_829747C8);
PPC_FUNC_IMPL(__imp__sub_829747C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22344
	ctx.r11.s64 = ctx.r11.s64 + -22344;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x829747F4;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974804
	if (ctx.cr0.eq) goto loc_82974804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82974804;
	sub_823FD208(ctx, base);
loc_82974804:
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

__attribute__((alias("__imp__sub_82974820"))) PPC_WEAK_FUNC(sub_82974820);
PPC_FUNC_IMPL(__imp__sub_82974820) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22284
	ctx.r11.s64 = ctx.r11.s64 + -22284;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x8297484C;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297485c
	if (ctx.cr0.eq) goto loc_8297485C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8297485C;
	sub_823FD208(ctx, base);
loc_8297485C:
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

__attribute__((alias("__imp__sub_82974878"))) PPC_WEAK_FUNC(sub_82974878);
PPC_FUNC_IMPL(__imp__sub_82974878) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22224
	ctx.r11.s64 = ctx.r11.s64 + -22224;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x829748A4;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829748b4
	if (ctx.cr0.eq) goto loc_829748B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829748B4;
	sub_823FD208(ctx, base);
loc_829748B4:
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

__attribute__((alias("__imp__sub_829748D0"))) PPC_WEAK_FUNC(sub_829748D0);
PPC_FUNC_IMPL(__imp__sub_829748D0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22164
	ctx.r11.s64 = ctx.r11.s64 + -22164;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x829748FC;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297490c
	if (ctx.cr0.eq) goto loc_8297490C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8297490C;
	sub_823FD208(ctx, base);
loc_8297490C:
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

__attribute__((alias("__imp__sub_82974928"))) PPC_WEAK_FUNC(sub_82974928);
PPC_FUNC_IMPL(__imp__sub_82974928) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22104
	ctx.r11.s64 = ctx.r11.s64 + -22104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x82974954;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974964
	if (ctx.cr0.eq) goto loc_82974964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82974964;
	sub_823FD208(ctx, base);
loc_82974964:
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

__attribute__((alias("__imp__sub_82974980"))) PPC_WEAK_FUNC(sub_82974980);
PPC_FUNC_IMPL(__imp__sub_82974980) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22044
	ctx.r11.s64 = ctx.r11.s64 + -22044;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x829082e8
	ctx.lr = 0x829749AC;
	sub_829082E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829749bc
	if (ctx.cr0.eq) goto loc_829749BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829749BC;
	sub_823FD208(ctx, base);
loc_829749BC:
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

__attribute__((alias("__imp__sub_829749D8"))) PPC_WEAK_FUNC(sub_829749D8);
PPC_FUNC_IMPL(__imp__sub_829749D8) {
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
	ctx.lr = 0x829749F8;
	sub_82E53A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x82974A00;
	sub_82C01030(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r5,r11,-21632
	ctx.r5.s64 = ctx.r11.s64 + -21632;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82974A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c01030
	ctx.lr = 0x82974A24;
	sub_82C01030(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r5,r11,-21640
	ctx.r5.s64 = ctx.r11.s64 + -21640;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82974A40;
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

__attribute__((alias("__imp__sub_82974A58"))) PPC_WEAK_FUNC(sub_82974A58);
PPC_FUNC_IMPL(__imp__sub_82974A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82974A60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82e512a0
	ctx.lr = 0x82974A80;
	sub_82E512A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830b2320
	ctx.lr = 0x82974A98;
	sub_830B2320(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c017d8
	ctx.lr = 0x82974AA0;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974abc
	if (ctx.cr0.eq) goto loc_82974ABC;
	// addi r4,r29,128
	ctx.r4.s64 = ctx.r29.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e51010
	ctx.lr = 0x82974AB4;
	sub_82E51010(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82974b58
	goto loc_82974B58;
loc_82974ABC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c017d8
	ctx.lr = 0x82974AC4;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974ae0
	if (ctx.cr0.eq) goto loc_82974AE0;
	// addi r4,r29,152
	ctx.r4.s64 = ctx.r29.s64 + 152;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e51010
	ctx.lr = 0x82974AD8;
	sub_82E51010(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82974b58
	goto loc_82974B58;
loc_82974AE0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c017d8
	ctx.lr = 0x82974AE8;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974b5c
	if (ctx.cr0.eq) goto loc_82974B5C;
	// lis r30,-31952
	ctx.r30.s64 = -2094006272;
	// lwz r3,23748(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23748);
	// bl 0x828653d8
	ctx.lr = 0x82974AFC;
	sub_828653D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82974b48
	if (ctx.cr0.eq) goto loc_82974B48;
	// lwz r3,23748(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23748);
	// bl 0x828653d8
	ctx.lr = 0x82974B0C;
	sub_828653D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82974B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8252a630
	ctx.lr = 0x82974B24;
	sub_8252A630(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82974b38
	if (ctx.cr6.eq) goto loc_82974B38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825517d8
	ctx.lr = 0x82974B38;
	sub_825517D8(ctx, base);
loc_82974B38:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82974b48
	if (ctx.cr0.eq) goto loc_82974B48;
	// bl 0x82651b90
	ctx.lr = 0x82974B48;
	sub_82651B90(ctx, base);
loc_82974B48:
	// addi r4,r29,176
	ctx.r4.s64 = ctx.r29.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e51010
	ctx.lr = 0x82974B54;
	sub_82E51010(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82974B58:
	// bl 0x824e57a8
	ctx.lr = 0x82974B5C;
	sub_824E57A8(ctx, base);
loc_82974B5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82974B68"))) PPC_WEAK_FUNC(sub_82974B68);
PPC_FUNC_IMPL(__imp__sub_82974B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x82974B70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82e512a0
	ctx.lr = 0x82974B90;
	sub_82E512A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b2320
	ctx.lr = 0x82974BA8;
	sub_830B2320(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,-4024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4024);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82c017d8
	ctx.lr = 0x82974BC8;
	sub_82C017D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82974be8
	if (!ctx.cr0.eq) goto loc_82974BE8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82974bfc
	if (ctx.cr6.eq) goto loc_82974BFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828c7780
	ctx.lr = 0x82974BE0;
	sub_828C7780(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974bfc
	if (ctx.cr0.eq) goto loc_82974BFC;
loc_82974BE8:
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e51010
	ctx.lr = 0x82974BF4;
	sub_82E51010(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x824e57a8
	ctx.lr = 0x82974BFC;
	sub_824E57A8(ctx, base);
loc_82974BFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82974C08"))) PPC_WEAK_FUNC(sub_82974C08);
PPC_FUNC_IMPL(__imp__sub_82974C08) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82974C1C;
	sub_830B2320(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x82d6add0
	ctx.lr = 0x82974C28;
	sub_82D6ADD0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8251ca08
	ctx.lr = 0x82974C30;
	sub_8251CA08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82974C40"))) PPC_WEAK_FUNC(sub_82974C40);
PPC_FUNC_IMPL(__imp__sub_82974C40) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82974C54;
	sub_830B2320(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x82974C58;
	sub_825F6FB0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,19096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19096);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82974c78
	if (ctx.cr6.eq) goto loc_82974C78;
	// bl 0x824e41e8
	ctx.lr = 0x82974C78;
	sub_824E41E8(ctx, base);
loc_82974C78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82974C88"))) PPC_WEAK_FUNC(sub_82974C88);
PPC_FUNC_IMPL(__imp__sub_82974C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82974C90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828fc1a0
	ctx.lr = 0x82974C9C;
	sub_828FC1A0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,9800(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9800);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82974CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lbz r10,-19760(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -19760);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82974cd4
	if (!ctx.cr0.eq) goto loc_82974CD4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,-19760(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19760, ctx.r10.u8);
loc_82974CD4:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r30,32636(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32636);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82974d6c
	if (ctx.cr0.eq) goto loc_82974D6C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82589580
	ctx.lr = 0x82974CF4;
	sub_82589580(ctx, base);
	// lbz r10,163(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 163);
	// li r11,1
	ctx.r11.s64 = 1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x825f6fb0
	ctx.lr = 0x82974D0C;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4468);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82974d68
	if (ctx.cr6.eq) goto loc_82974D68;
	// bl 0x82487268
	ctx.lr = 0x82974D2C;
	sub_82487268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af580
	ctx.lr = 0x82974D3C;
	sub_828AF580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82974d68
	if (ctx.cr0.eq) goto loc_82974D68;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82974d64
	if (ctx.cr6.eq) goto loc_82974D64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82974d64
	if (ctx.cr6.eq) goto loc_82974D64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82974d68
	if (!ctx.cr6.eq) goto loc_82974D68;
loc_82974D64:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82974D68:
	// stb r29,161(r30)
	PPC_STORE_U8(ctx.r30.u32 + 161, ctx.r29.u8);
loc_82974D6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82974D78"))) PPC_WEAK_FUNC(sub_82974D78);
PPC_FUNC_IMPL(__imp__sub_82974D78) {
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
	// bl 0x830b2320
	ctx.lr = 0x82974D90;
	sub_830B2320(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x82974D94;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4468);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82974ddc
	if (ctx.cr6.eq) goto loc_82974DDC;
	// bl 0x82497828
	ctx.lr = 0x82974DB4;
	sub_82497828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af580
	ctx.lr = 0x82974DC4;
	sub_828AF580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82974ddc
	if (ctx.cr0.eq) goto loc_82974DDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82974DDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82974DDC:
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

__attribute__((alias("__imp__sub_82974DF0"))) PPC_WEAK_FUNC(sub_82974DF0);
PPC_FUNC_IMPL(__imp__sub_82974DF0) {
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
	// bl 0x830b2320
	ctx.lr = 0x82974E08;
	sub_830B2320(ctx, base);
	// bl 0x825f6fb0
	ctx.lr = 0x82974E0C;
	sub_825F6FB0(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4468);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82974e48
	if (ctx.cr6.eq) goto loc_82974E48;
	// bl 0x827640e8
	ctx.lr = 0x82974E2C;
	sub_827640E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af580
	ctx.lr = 0x82974E3C;
	sub_828AF580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82974e48
	if (ctx.cr0.eq) goto loc_82974E48;
	// bl 0x828a6818
	ctx.lr = 0x82974E48;
	sub_828A6818(ctx, base);
loc_82974E48:
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

__attribute__((alias("__imp__sub_82974E60"))) PPC_WEAK_FUNC(sub_82974E60);
PPC_FUNC_IMPL(__imp__sub_82974E60) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82974E74;
	sub_830B2320(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x82d6add0
	ctx.lr = 0x82974E80;
	sub_82D6ADD0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8251ca08
	ctx.lr = 0x82974E88;
	sub_8251CA08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82974E98"))) PPC_WEAK_FUNC(sub_82974E98);
PPC_FUNC_IMPL(__imp__sub_82974E98) {
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
	ctx.lr = 0x82974EB4;
	sub_830B2320(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,-4024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4024);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82974edc
	if (ctx.cr6.eq) goto loc_82974EDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828db028
	ctx.lr = 0x82974EDC;
	sub_828DB028(ctx, base);
loc_82974EDC:
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

__attribute__((alias("__imp__sub_82974EF0"))) PPC_WEAK_FUNC(sub_82974EF0);
PPC_FUNC_IMPL(__imp__sub_82974EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	ctx.lr = 0x82974F08;
	sub_828FC1A0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,9800(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9800);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82974F24;
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

__attribute__((alias("__imp__sub_82974F38"))) PPC_WEAK_FUNC(sub_82974F38);
PPC_FUNC_IMPL(__imp__sub_82974F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e512a0
	ctx.lr = 0x82974F48;
	sub_82E512A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82974f68
	if (ctx.cr0.eq) goto loc_82974F68;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
loc_82974F68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82974F78"))) PPC_WEAK_FUNC(sub_82974F78);
PPC_FUNC_IMPL(__imp__sub_82974F78) {
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
	ctx.lr = 0x82974F90;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21612
	ctx.r11.s64 = ctx.r11.s64 + -21612;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973918
	ctx.lr = 0x82974FA0;
	sub_82973918(ctx, base);
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

__attribute__((alias("__imp__sub_82974FC8"))) PPC_WEAK_FUNC(sub_82974FC8);
PPC_FUNC_IMPL(__imp__sub_82974FC8) {
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
	ctx.lr = 0x82974FE0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21600
	ctx.r11.s64 = ctx.r11.s64 + -21600;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973968
	ctx.lr = 0x82974FF0;
	sub_82973968(ctx, base);
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

__attribute__((alias("__imp__sub_82975018"))) PPC_WEAK_FUNC(sub_82975018);
PPC_FUNC_IMPL(__imp__sub_82975018) {
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
	ctx.lr = 0x82975030;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21588
	ctx.r11.s64 = ctx.r11.s64 + -21588;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829739b8
	ctx.lr = 0x82975040;
	sub_829739B8(ctx, base);
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

__attribute__((alias("__imp__sub_82975068"))) PPC_WEAK_FUNC(sub_82975068);
PPC_FUNC_IMPL(__imp__sub_82975068) {
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
	ctx.lr = 0x82975080;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21576
	ctx.r11.s64 = ctx.r11.s64 + -21576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973a08
	ctx.lr = 0x82975090;
	sub_82973A08(ctx, base);
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

__attribute__((alias("__imp__sub_829750B8"))) PPC_WEAK_FUNC(sub_829750B8);
PPC_FUNC_IMPL(__imp__sub_829750B8) {
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
	ctx.lr = 0x829750D0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21564
	ctx.r11.s64 = ctx.r11.s64 + -21564;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973a58
	ctx.lr = 0x829750E0;
	sub_82973A58(ctx, base);
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

__attribute__((alias("__imp__sub_82975108"))) PPC_WEAK_FUNC(sub_82975108);
PPC_FUNC_IMPL(__imp__sub_82975108) {
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
	ctx.lr = 0x82975120;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21552
	ctx.r11.s64 = ctx.r11.s64 + -21552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973aa8
	ctx.lr = 0x82975130;
	sub_82973AA8(ctx, base);
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

__attribute__((alias("__imp__sub_82975158"))) PPC_WEAK_FUNC(sub_82975158);
PPC_FUNC_IMPL(__imp__sub_82975158) {
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
	ctx.lr = 0x82975170;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21540
	ctx.r11.s64 = ctx.r11.s64 + -21540;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973af8
	ctx.lr = 0x82975180;
	sub_82973AF8(ctx, base);
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

__attribute__((alias("__imp__sub_829751A8"))) PPC_WEAK_FUNC(sub_829751A8);
PPC_FUNC_IMPL(__imp__sub_829751A8) {
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
	ctx.lr = 0x829751C0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21528
	ctx.r11.s64 = ctx.r11.s64 + -21528;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973b48
	ctx.lr = 0x829751D0;
	sub_82973B48(ctx, base);
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

__attribute__((alias("__imp__sub_829751F8"))) PPC_WEAK_FUNC(sub_829751F8);
PPC_FUNC_IMPL(__imp__sub_829751F8) {
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
	ctx.lr = 0x82975210;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21516
	ctx.r11.s64 = ctx.r11.s64 + -21516;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973b98
	ctx.lr = 0x82975220;
	sub_82973B98(ctx, base);
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

__attribute__((alias("__imp__sub_82975248"))) PPC_WEAK_FUNC(sub_82975248);
PPC_FUNC_IMPL(__imp__sub_82975248) {
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
	ctx.lr = 0x82975260;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21504
	ctx.r11.s64 = ctx.r11.s64 + -21504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973be8
	ctx.lr = 0x82975270;
	sub_82973BE8(ctx, base);
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

__attribute__((alias("__imp__sub_82975298"))) PPC_WEAK_FUNC(sub_82975298);
PPC_FUNC_IMPL(__imp__sub_82975298) {
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
	ctx.lr = 0x829752B0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21492
	ctx.r11.s64 = ctx.r11.s64 + -21492;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973c38
	ctx.lr = 0x829752C0;
	sub_82973C38(ctx, base);
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

__attribute__((alias("__imp__sub_829752E8"))) PPC_WEAK_FUNC(sub_829752E8);
PPC_FUNC_IMPL(__imp__sub_829752E8) {
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
	ctx.lr = 0x82975300;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21480
	ctx.r11.s64 = ctx.r11.s64 + -21480;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973c88
	ctx.lr = 0x82975310;
	sub_82973C88(ctx, base);
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

__attribute__((alias("__imp__sub_82975338"))) PPC_WEAK_FUNC(sub_82975338);
PPC_FUNC_IMPL(__imp__sub_82975338) {
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
	ctx.lr = 0x82975350;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21468
	ctx.r11.s64 = ctx.r11.s64 + -21468;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973cd8
	ctx.lr = 0x82975360;
	sub_82973CD8(ctx, base);
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

__attribute__((alias("__imp__sub_82975388"))) PPC_WEAK_FUNC(sub_82975388);
PPC_FUNC_IMPL(__imp__sub_82975388) {
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
	ctx.lr = 0x829753A0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21456
	ctx.r11.s64 = ctx.r11.s64 + -21456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973d28
	ctx.lr = 0x829753B0;
	sub_82973D28(ctx, base);
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

__attribute__((alias("__imp__sub_829753D8"))) PPC_WEAK_FUNC(sub_829753D8);
PPC_FUNC_IMPL(__imp__sub_829753D8) {
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
	ctx.lr = 0x829753F0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21444
	ctx.r11.s64 = ctx.r11.s64 + -21444;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973d78
	ctx.lr = 0x82975400;
	sub_82973D78(ctx, base);
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

__attribute__((alias("__imp__sub_82975428"))) PPC_WEAK_FUNC(sub_82975428);
PPC_FUNC_IMPL(__imp__sub_82975428) {
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
	ctx.lr = 0x82975440;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21432
	ctx.r11.s64 = ctx.r11.s64 + -21432;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973dc8
	ctx.lr = 0x82975450;
	sub_82973DC8(ctx, base);
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

__attribute__((alias("__imp__sub_82975478"))) PPC_WEAK_FUNC(sub_82975478);
PPC_FUNC_IMPL(__imp__sub_82975478) {
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
	ctx.lr = 0x82975490;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21420
	ctx.r11.s64 = ctx.r11.s64 + -21420;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973e18
	ctx.lr = 0x829754A0;
	sub_82973E18(ctx, base);
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

__attribute__((alias("__imp__sub_829754C8"))) PPC_WEAK_FUNC(sub_829754C8);
PPC_FUNC_IMPL(__imp__sub_829754C8) {
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
	ctx.lr = 0x829754E0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21408
	ctx.r11.s64 = ctx.r11.s64 + -21408;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973e68
	ctx.lr = 0x829754F0;
	sub_82973E68(ctx, base);
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

__attribute__((alias("__imp__sub_82975518"))) PPC_WEAK_FUNC(sub_82975518);
PPC_FUNC_IMPL(__imp__sub_82975518) {
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
	ctx.lr = 0x82975530;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21396
	ctx.r11.s64 = ctx.r11.s64 + -21396;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973eb8
	ctx.lr = 0x82975540;
	sub_82973EB8(ctx, base);
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

__attribute__((alias("__imp__sub_82975568"))) PPC_WEAK_FUNC(sub_82975568);
PPC_FUNC_IMPL(__imp__sub_82975568) {
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
	ctx.lr = 0x82975580;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21384
	ctx.r11.s64 = ctx.r11.s64 + -21384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973f08
	ctx.lr = 0x82975590;
	sub_82973F08(ctx, base);
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

__attribute__((alias("__imp__sub_829755B8"))) PPC_WEAK_FUNC(sub_829755B8);
PPC_FUNC_IMPL(__imp__sub_829755B8) {
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
	ctx.lr = 0x829755D0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21372
	ctx.r11.s64 = ctx.r11.s64 + -21372;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973f58
	ctx.lr = 0x829755E0;
	sub_82973F58(ctx, base);
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

__attribute__((alias("__imp__sub_82975608"))) PPC_WEAK_FUNC(sub_82975608);
PPC_FUNC_IMPL(__imp__sub_82975608) {
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
	ctx.lr = 0x82975620;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21360
	ctx.r11.s64 = ctx.r11.s64 + -21360;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973fa8
	ctx.lr = 0x82975630;
	sub_82973FA8(ctx, base);
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

__attribute__((alias("__imp__sub_82975658"))) PPC_WEAK_FUNC(sub_82975658);
PPC_FUNC_IMPL(__imp__sub_82975658) {
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
	ctx.lr = 0x82975670;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21348
	ctx.r11.s64 = ctx.r11.s64 + -21348;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82973ff8
	ctx.lr = 0x82975680;
	sub_82973FF8(ctx, base);
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

__attribute__((alias("__imp__sub_829756A8"))) PPC_WEAK_FUNC(sub_829756A8);
PPC_FUNC_IMPL(__imp__sub_829756A8) {
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
	ctx.lr = 0x829756C0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21336
	ctx.r11.s64 = ctx.r11.s64 + -21336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82974048
	ctx.lr = 0x829756D0;
	sub_82974048(ctx, base);
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

__attribute__((alias("__imp__sub_829756F8"))) PPC_WEAK_FUNC(sub_829756F8);
PPC_FUNC_IMPL(__imp__sub_829756F8) {
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
	ctx.lr = 0x82975710;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21324
	ctx.r11.s64 = ctx.r11.s64 + -21324;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82974098
	ctx.lr = 0x82975720;
	sub_82974098(ctx, base);
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

__attribute__((alias("__imp__sub_82975748"))) PPC_WEAK_FUNC(sub_82975748);
PPC_FUNC_IMPL(__imp__sub_82975748) {
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
	ctx.lr = 0x82975760;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21312
	ctx.r11.s64 = ctx.r11.s64 + -21312;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829740e8
	ctx.lr = 0x82975770;
	sub_829740E8(ctx, base);
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

__attribute__((alias("__imp__sub_82975798"))) PPC_WEAK_FUNC(sub_82975798);
PPC_FUNC_IMPL(__imp__sub_82975798) {
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
	ctx.lr = 0x829757B0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21300
	ctx.r11.s64 = ctx.r11.s64 + -21300;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82974138
	ctx.lr = 0x829757C0;
	sub_82974138(ctx, base);
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

__attribute__((alias("__imp__sub_829757E8"))) PPC_WEAK_FUNC(sub_829757E8);
PPC_FUNC_IMPL(__imp__sub_829757E8) {
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
	ctx.lr = 0x82975800;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21288
	ctx.r11.s64 = ctx.r11.s64 + -21288;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82974188
	ctx.lr = 0x82975810;
	sub_82974188(ctx, base);
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

__attribute__((alias("__imp__sub_82975838"))) PPC_WEAK_FUNC(sub_82975838);
PPC_FUNC_IMPL(__imp__sub_82975838) {
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
	ctx.lr = 0x82975850;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21276
	ctx.r11.s64 = ctx.r11.s64 + -21276;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829741d8
	ctx.lr = 0x82975860;
	sub_829741D8(ctx, base);
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

__attribute__((alias("__imp__sub_82975888"))) PPC_WEAK_FUNC(sub_82975888);
PPC_FUNC_IMPL(__imp__sub_82975888) {
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
	ctx.lr = 0x829758A0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21264
	ctx.r11.s64 = ctx.r11.s64 + -21264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82974228
	ctx.lr = 0x829758B0;
	sub_82974228(ctx, base);
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

__attribute__((alias("__imp__sub_829758D8"))) PPC_WEAK_FUNC(sub_829758D8);
PPC_FUNC_IMPL(__imp__sub_829758D8) {
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
	ctx.lr = 0x829758F0;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21252
	ctx.r11.s64 = ctx.r11.s64 + -21252;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82974278
	ctx.lr = 0x82975900;
	sub_82974278(ctx, base);
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

__attribute__((alias("__imp__sub_82975928"))) PPC_WEAK_FUNC(sub_82975928);
PPC_FUNC_IMPL(__imp__sub_82975928) {
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
	ctx.lr = 0x82975940;
	sub_82E4DE48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21240
	ctx.r11.s64 = ctx.r11.s64 + -21240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829742c8
	ctx.lr = 0x82975950;
	sub_829742C8(ctx, base);
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

__attribute__((alias("__imp__sub_82975978"))) PPC_WEAK_FUNC(sub_82975978);
PPC_FUNC_IMPL(__imp__sub_82975978) {
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
	// bl 0x82973918
	ctx.lr = 0x82975990;
	sub_82973918(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x829759a4
	if (ctx.cr6.eq) goto loc_829759A4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_829759A4:
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

__attribute__((alias("__imp__sub_829759C0"))) PPC_WEAK_FUNC(sub_829759C0);
PPC_FUNC_IMPL(__imp__sub_829759C0) {
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
	// bl 0x82973968
	ctx.lr = 0x829759D8;
	sub_82973968(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x829759ec
	if (ctx.cr6.eq) goto loc_829759EC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_829759EC:
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

__attribute__((alias("__imp__sub_82975A08"))) PPC_WEAK_FUNC(sub_82975A08);
PPC_FUNC_IMPL(__imp__sub_82975A08) {
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
	// bl 0x829739b8
	ctx.lr = 0x82975A20;
	sub_829739B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975a34
	if (ctx.cr6.eq) goto loc_82975A34;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975A34:
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

__attribute__((alias("__imp__sub_82975A50"))) PPC_WEAK_FUNC(sub_82975A50);
PPC_FUNC_IMPL(__imp__sub_82975A50) {
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
	// bl 0x82973a08
	ctx.lr = 0x82975A68;
	sub_82973A08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975a7c
	if (ctx.cr6.eq) goto loc_82975A7C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975A7C:
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

__attribute__((alias("__imp__sub_82975A98"))) PPC_WEAK_FUNC(sub_82975A98);
PPC_FUNC_IMPL(__imp__sub_82975A98) {
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
	// bl 0x82973a58
	ctx.lr = 0x82975AB0;
	sub_82973A58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975ac4
	if (ctx.cr6.eq) goto loc_82975AC4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975AC4:
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

__attribute__((alias("__imp__sub_82975AE0"))) PPC_WEAK_FUNC(sub_82975AE0);
PPC_FUNC_IMPL(__imp__sub_82975AE0) {
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
	// bl 0x82973aa8
	ctx.lr = 0x82975AF8;
	sub_82973AA8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975b0c
	if (ctx.cr6.eq) goto loc_82975B0C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975B0C:
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

__attribute__((alias("__imp__sub_82975B28"))) PPC_WEAK_FUNC(sub_82975B28);
PPC_FUNC_IMPL(__imp__sub_82975B28) {
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
	// bl 0x82973af8
	ctx.lr = 0x82975B40;
	sub_82973AF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975b54
	if (ctx.cr6.eq) goto loc_82975B54;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975B54:
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

__attribute__((alias("__imp__sub_82975B70"))) PPC_WEAK_FUNC(sub_82975B70);
PPC_FUNC_IMPL(__imp__sub_82975B70) {
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
	// bl 0x82973b48
	ctx.lr = 0x82975B88;
	sub_82973B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975b9c
	if (ctx.cr6.eq) goto loc_82975B9C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975B9C:
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

__attribute__((alias("__imp__sub_82975BB8"))) PPC_WEAK_FUNC(sub_82975BB8);
PPC_FUNC_IMPL(__imp__sub_82975BB8) {
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
	// bl 0x82973b98
	ctx.lr = 0x82975BD0;
	sub_82973B98(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975be4
	if (ctx.cr6.eq) goto loc_82975BE4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975BE4:
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

__attribute__((alias("__imp__sub_82975C00"))) PPC_WEAK_FUNC(sub_82975C00);
PPC_FUNC_IMPL(__imp__sub_82975C00) {
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
	// bl 0x82973be8
	ctx.lr = 0x82975C18;
	sub_82973BE8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975c2c
	if (ctx.cr6.eq) goto loc_82975C2C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975C2C:
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

__attribute__((alias("__imp__sub_82975C48"))) PPC_WEAK_FUNC(sub_82975C48);
PPC_FUNC_IMPL(__imp__sub_82975C48) {
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
	// bl 0x82973c38
	ctx.lr = 0x82975C60;
	sub_82973C38(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975c74
	if (ctx.cr6.eq) goto loc_82975C74;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975C74:
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

__attribute__((alias("__imp__sub_82975C90"))) PPC_WEAK_FUNC(sub_82975C90);
PPC_FUNC_IMPL(__imp__sub_82975C90) {
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
	// bl 0x82973c88
	ctx.lr = 0x82975CA8;
	sub_82973C88(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975cbc
	if (ctx.cr6.eq) goto loc_82975CBC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975CBC:
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

__attribute__((alias("__imp__sub_82975CD8"))) PPC_WEAK_FUNC(sub_82975CD8);
PPC_FUNC_IMPL(__imp__sub_82975CD8) {
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
	// bl 0x82973cd8
	ctx.lr = 0x82975CF0;
	sub_82973CD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975d04
	if (ctx.cr6.eq) goto loc_82975D04;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975D04:
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

__attribute__((alias("__imp__sub_82975D20"))) PPC_WEAK_FUNC(sub_82975D20);
PPC_FUNC_IMPL(__imp__sub_82975D20) {
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
	// bl 0x82973d28
	ctx.lr = 0x82975D38;
	sub_82973D28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975d4c
	if (ctx.cr6.eq) goto loc_82975D4C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975D4C:
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

__attribute__((alias("__imp__sub_82975D68"))) PPC_WEAK_FUNC(sub_82975D68);
PPC_FUNC_IMPL(__imp__sub_82975D68) {
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
	// bl 0x82973d78
	ctx.lr = 0x82975D80;
	sub_82973D78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975d94
	if (ctx.cr6.eq) goto loc_82975D94;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975D94:
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

__attribute__((alias("__imp__sub_82975DB0"))) PPC_WEAK_FUNC(sub_82975DB0);
PPC_FUNC_IMPL(__imp__sub_82975DB0) {
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
	// bl 0x82973dc8
	ctx.lr = 0x82975DC8;
	sub_82973DC8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975ddc
	if (ctx.cr6.eq) goto loc_82975DDC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975DDC:
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

__attribute__((alias("__imp__sub_82975DF8"))) PPC_WEAK_FUNC(sub_82975DF8);
PPC_FUNC_IMPL(__imp__sub_82975DF8) {
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
	// bl 0x82973e18
	ctx.lr = 0x82975E10;
	sub_82973E18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975e24
	if (ctx.cr6.eq) goto loc_82975E24;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975E24:
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

__attribute__((alias("__imp__sub_82975E40"))) PPC_WEAK_FUNC(sub_82975E40);
PPC_FUNC_IMPL(__imp__sub_82975E40) {
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
	// bl 0x82973e68
	ctx.lr = 0x82975E58;
	sub_82973E68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975e6c
	if (ctx.cr6.eq) goto loc_82975E6C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975E6C:
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

__attribute__((alias("__imp__sub_82975E88"))) PPC_WEAK_FUNC(sub_82975E88);
PPC_FUNC_IMPL(__imp__sub_82975E88) {
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
	// bl 0x82973eb8
	ctx.lr = 0x82975EA0;
	sub_82973EB8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975eb4
	if (ctx.cr6.eq) goto loc_82975EB4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975EB4:
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

__attribute__((alias("__imp__sub_82975ED0"))) PPC_WEAK_FUNC(sub_82975ED0);
PPC_FUNC_IMPL(__imp__sub_82975ED0) {
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
	// bl 0x82973f08
	ctx.lr = 0x82975EE8;
	sub_82973F08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975efc
	if (ctx.cr6.eq) goto loc_82975EFC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975EFC:
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

__attribute__((alias("__imp__sub_82975F18"))) PPC_WEAK_FUNC(sub_82975F18);
PPC_FUNC_IMPL(__imp__sub_82975F18) {
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
	// bl 0x82973f58
	ctx.lr = 0x82975F30;
	sub_82973F58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975f44
	if (ctx.cr6.eq) goto loc_82975F44;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975F44:
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

__attribute__((alias("__imp__sub_82975F60"))) PPC_WEAK_FUNC(sub_82975F60);
PPC_FUNC_IMPL(__imp__sub_82975F60) {
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
	// bl 0x82973fa8
	ctx.lr = 0x82975F78;
	sub_82973FA8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975f8c
	if (ctx.cr6.eq) goto loc_82975F8C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975F8C:
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

__attribute__((alias("__imp__sub_82975FA8"))) PPC_WEAK_FUNC(sub_82975FA8);
PPC_FUNC_IMPL(__imp__sub_82975FA8) {
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
	// bl 0x82973ff8
	ctx.lr = 0x82975FC0;
	sub_82973FF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82975fd4
	if (ctx.cr6.eq) goto loc_82975FD4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82975FD4:
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

__attribute__((alias("__imp__sub_82975FF0"))) PPC_WEAK_FUNC(sub_82975FF0);
PPC_FUNC_IMPL(__imp__sub_82975FF0) {
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
	// bl 0x82974048
	ctx.lr = 0x82976008;
	sub_82974048(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8297601c
	if (ctx.cr6.eq) goto loc_8297601C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8297601C:
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

__attribute__((alias("__imp__sub_82976038"))) PPC_WEAK_FUNC(sub_82976038);
PPC_FUNC_IMPL(__imp__sub_82976038) {
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
	// bl 0x82974098
	ctx.lr = 0x82976050;
	sub_82974098(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82976064
	if (ctx.cr6.eq) goto loc_82976064;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82976064:
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

__attribute__((alias("__imp__sub_82976080"))) PPC_WEAK_FUNC(sub_82976080);
PPC_FUNC_IMPL(__imp__sub_82976080) {
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
	// bl 0x829740e8
	ctx.lr = 0x82976098;
	sub_829740E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x829760ac
	if (ctx.cr6.eq) goto loc_829760AC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_829760AC:
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

__attribute__((alias("__imp__sub_829760C8"))) PPC_WEAK_FUNC(sub_829760C8);
PPC_FUNC_IMPL(__imp__sub_829760C8) {
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
	// bl 0x82974138
	ctx.lr = 0x829760E0;
	sub_82974138(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x829760f4
	if (ctx.cr6.eq) goto loc_829760F4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_829760F4:
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

__attribute__((alias("__imp__sub_82976110"))) PPC_WEAK_FUNC(sub_82976110);
PPC_FUNC_IMPL(__imp__sub_82976110) {
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
	// bl 0x82974188
	ctx.lr = 0x82976128;
	sub_82974188(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8297613c
	if (ctx.cr6.eq) goto loc_8297613C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8297613C:
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

__attribute__((alias("__imp__sub_82976158"))) PPC_WEAK_FUNC(sub_82976158);
PPC_FUNC_IMPL(__imp__sub_82976158) {
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
	// bl 0x829741d8
	ctx.lr = 0x82976170;
	sub_829741D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82976184
	if (ctx.cr6.eq) goto loc_82976184;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82976184:
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

__attribute__((alias("__imp__sub_829761A0"))) PPC_WEAK_FUNC(sub_829761A0);
PPC_FUNC_IMPL(__imp__sub_829761A0) {
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
	// bl 0x82974228
	ctx.lr = 0x829761B8;
	sub_82974228(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x829761cc
	if (ctx.cr6.eq) goto loc_829761CC;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_829761CC:
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

__attribute__((alias("__imp__sub_829761E8"))) PPC_WEAK_FUNC(sub_829761E8);
PPC_FUNC_IMPL(__imp__sub_829761E8) {
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
	// bl 0x82974278
	ctx.lr = 0x82976200;
	sub_82974278(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82976214
	if (ctx.cr6.eq) goto loc_82976214;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_82976214:
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

__attribute__((alias("__imp__sub_82976230"))) PPC_WEAK_FUNC(sub_82976230);
PPC_FUNC_IMPL(__imp__sub_82976230) {
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
	// bl 0x829742c8
	ctx.lr = 0x82976248;
	sub_829742C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8297625c
	if (ctx.cr6.eq) goto loc_8297625C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_8297625C:
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

__attribute__((alias("__imp__sub_82976278"))) PPC_WEAK_FUNC(sub_82976278);
PPC_FUNC_IMPL(__imp__sub_82976278) {
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
	// li r6,290
	ctx.r6.s64 = 290;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x82976294;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-21228
	ctx.r11.s64 = ctx.r11.s64 + -21228;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x829762B4;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82e51260
	ctx.lr = 0x829762C8;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21984
	ctx.r11.s64 = ctx.r11.s64 + -21984;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829762F0"))) PPC_WEAK_FUNC(sub_829762F0);
PPC_FUNC_IMPL(__imp__sub_829762F0) {
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
	// li r6,295
	ctx.r6.s64 = 295;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x8297630C;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-21136
	ctx.r11.s64 = ctx.r11.s64 + -21136;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12988
	ctx.r5.s64 = ctx.r10.s64 + 12988;
	// bl 0x82e50ea8
	ctx.lr = 0x8297632C;
	sub_82E50EA8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r5,r11,-21152
	ctx.r5.s64 = ctx.r11.s64 + -21152;
	// bl 0x82e50ea8
	ctx.lr = 0x82976340;
	sub_82E50EA8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// addi r5,r11,-21172
	ctx.r5.s64 = ctx.r11.s64 + -21172;
	// bl 0x82e50ea8
	ctx.lr = 0x82976354;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82e51260
	ctx.lr = 0x82976368;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21968
	ctx.r11.s64 = ctx.r11.s64 + -21968;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82976390"))) PPC_WEAK_FUNC(sub_82976390);
PPC_FUNC_IMPL(__imp__sub_82976390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82976398;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e512a0
	ctx.lr = 0x829763B4;
	sub_82E512A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,29088
	ctx.r6.s64 = ctx.r11.s64 + 29088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x829763D0;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x829763DC;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x829763E4;
	sub_82DE7330(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,-24268
	ctx.r6.s64 = ctx.r11.s64 + -24268;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x829763FC;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x826e1b10
	ctx.lr = 0x82976408;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82976410;
	sub_82DE7330(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,-24284
	ctx.r6.s64 = ctx.r11.s64 + -24284;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x82976428;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x826e1b10
	ctx.lr = 0x82976434;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8297643C;
	sub_82DE7330(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294d2a8
	ctx.lr = 0x8297644C;
	sub_8294D2A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82976458"))) PPC_WEAK_FUNC(sub_82976458);
PPC_FUNC_IMPL(__imp__sub_82976458) {
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
	// li r6,95
	ctx.r6.s64 = 95;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x82976474;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-21076
	ctx.r11.s64 = ctx.r11.s64 + -21076;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x82976494;
	sub_82E50EA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r5,r11,17928
	ctx.r5.s64 = ctx.r11.s64 + 17928;
	// bl 0x82e50ea8
	ctx.lr = 0x829764A8;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82e51260
	ctx.lr = 0x829764BC;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21952
	ctx.r11.s64 = ctx.r11.s64 + -21952;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829764E0"))) PPC_WEAK_FUNC(sub_829764E0);
PPC_FUNC_IMPL(__imp__sub_829764E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829764E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e512a0
	ctx.lr = 0x82976504;
	sub_82E512A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,12900
	ctx.r6.s64 = ctx.r11.s64 + 12900;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x82976520;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x8297652C;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82976534;
	sub_82DE7330(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,18012
	ctx.r6.s64 = ctx.r11.s64 + 18012;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x8297654C;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x826e1b10
	ctx.lr = 0x82976558;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82976560;
	sub_82DE7330(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-4084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// stw r10,3348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3348, ctx.r10.u32);
	// bl 0x8294d2a8
	ctx.lr = 0x82976580;
	sub_8294D2A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82976588"))) PPC_WEAK_FUNC(sub_82976588);
PPC_FUNC_IMPL(__imp__sub_82976588) {
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
	// li r6,297
	ctx.r6.s64 = 297;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x829765A4;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-21016
	ctx.r11.s64 = ctx.r11.s64 + -21016;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x829765C4;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82e51260
	ctx.lr = 0x829765D8;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21936
	ctx.r11.s64 = ctx.r11.s64 + -21936;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82976600"))) PPC_WEAK_FUNC(sub_82976600);
PPC_FUNC_IMPL(__imp__sub_82976600) {
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
	// li r6,298
	ctx.r6.s64 = 298;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x8297661C;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-20956
	ctx.r11.s64 = ctx.r11.s64 + -20956;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,28804
	ctx.r5.s64 = ctx.r10.s64 + 28804;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82e50ed8
	ctx.lr = 0x82976640;
	sub_82E50ED8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r5,r11,28792
	ctx.r5.s64 = ctx.r11.s64 + 28792;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82e50ed8
	ctx.lr = 0x82976658;
	sub_82E50ED8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// addi r5,r11,28752
	ctx.r5.s64 = ctx.r11.s64 + 28752;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82e50ed8
	ctx.lr = 0x82976670;
	sub_82E50ED8(ctx, base);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x82e51260
	ctx.lr = 0x82976684;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21920
	ctx.r11.s64 = ctx.r11.s64 + -21920;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829766A8"))) PPC_WEAK_FUNC(sub_829766A8);
PPC_FUNC_IMPL(__imp__sub_829766A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de04
	ctx.lr = 0x829766B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82e512a0
	ctx.lr = 0x829766CC;
	sub_82E512A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r11,-17036
	ctx.r6.s64 = ctx.r11.s64 + -17036;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x829766E8;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e1b10
	ctx.lr = 0x829766F4;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x829766FC;
	sub_82DE7330(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r11,-17048
	ctx.r6.s64 = ctx.r11.s64 + -17048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x82976714;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x826e1b10
	ctx.lr = 0x82976720;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82976728;
	sub_82DE7330(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r11,-17056
	ctx.r6.s64 = ctx.r11.s64 + -17056;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x82976740;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x826e1b10
	ctx.lr = 0x8297674C;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82976754;
	sub_82DE7330(ctx, base);
	// lis r28,-31952
	ctx.r28.s64 = -2094006272;
	// lwz r3,23748(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23748);
	// bl 0x828653d8
	ctx.lr = 0x82976760;
	sub_828653D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829767a8
	if (ctx.cr0.eq) goto loc_829767A8;
	// lwz r3,23748(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23748);
	// bl 0x828653d8
	ctx.lr = 0x82976770;
	sub_828653D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82976780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8252a630
	ctx.lr = 0x82976784;
	sub_8252A630(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r3,23748(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23748);
	// bl 0x828653d8
	ctx.lr = 0x82976790;
	sub_828653D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829767A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,648(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 648);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
loc_829767A8:
	// bl 0x829b2318
	ctx.lr = 0x829767AC;
	sub_829B2318(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8294d2a8
	ctx.lr = 0x829767BC;
	sub_8294D2A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a7de54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829767C8"))) PPC_WEAK_FUNC(sub_829767C8);
PPC_FUNC_IMPL(__imp__sub_829767C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x829767D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e512a0
	ctx.lr = 0x829767EC;
	sub_82E512A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824afb20
	ctx.lr = 0x829767FC;
	sub_824AFB20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294f290
	ctx.lr = 0x8297680C;
	sub_8294F290(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x82976818;
	sub_824AFB20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294f290
	ctx.lr = 0x82976828;
	sub_8294F290(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x82976834;
	sub_824AFB20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294f290
	ctx.lr = 0x82976844;
	sub_8294F290(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r3,9792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9792);
	// bl 0x824a5320
	ctx.lr = 0x82976850;
	sub_824A5320(ctx, base);
	// bl 0x829aedd8
	ctx.lr = 0x82976854;
	sub_829AEDD8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294ca68
	ctx.lr = 0x82976864;
	sub_8294CA68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82976870"))) PPC_WEAK_FUNC(sub_82976870);
PPC_FUNC_IMPL(__imp__sub_82976870) {
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
	// li r6,308
	ctx.r6.s64 = 308;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x8297688C;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20896
	ctx.r11.s64 = ctx.r11.s64 + -20896;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x829768AC;
	sub_82E50EA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r5,r11,12980
	ctx.r5.s64 = ctx.r11.s64 + 12980;
	// bl 0x82e50ea8
	ctx.lr = 0x829768C0;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82e51260
	ctx.lr = 0x829768D4;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21904
	ctx.r11.s64 = ctx.r11.s64 + -21904;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829768F8"))) PPC_WEAK_FUNC(sub_829768F8);
PPC_FUNC_IMPL(__imp__sub_829768F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82976900;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e512a0
	ctx.lr = 0x8297691C;
	sub_82E512A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,12900
	ctx.r6.s64 = ctx.r11.s64 + 12900;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x82976938;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x82976944;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8297694C;
	sub_82DE7330(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,31804
	ctx.r6.s64 = ctx.r11.s64 + 31804;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x82976964;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x826e1b10
	ctx.lr = 0x82976970;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82976978;
	sub_82DE7330(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294d2a8
	ctx.lr = 0x82976988;
	sub_8294D2A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82976990"))) PPC_WEAK_FUNC(sub_82976990);
PPC_FUNC_IMPL(__imp__sub_82976990) {
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
	// li r6,309
	ctx.r6.s64 = 309;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x829769AC;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20836
	ctx.r11.s64 = ctx.r11.s64 + -20836;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x829769CC;
	sub_82E50EA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r5,r11,17928
	ctx.r5.s64 = ctx.r11.s64 + 17928;
	// bl 0x82e50ea8
	ctx.lr = 0x829769E0;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82e51260
	ctx.lr = 0x829769F4;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21888
	ctx.r11.s64 = ctx.r11.s64 + -21888;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82976A18"))) PPC_WEAK_FUNC(sub_82976A18);
PPC_FUNC_IMPL(__imp__sub_82976A18) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20836
	ctx.r11.s64 = ctx.r11.s64 + -20836;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x82976A50;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82976a60
	if (ctx.cr0.eq) goto loc_82976A60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82976A60;
	sub_823FD208(ctx, base);
loc_82976A60:
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

__attribute__((alias("__imp__sub_82976A80"))) PPC_WEAK_FUNC(sub_82976A80);
PPC_FUNC_IMPL(__imp__sub_82976A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82976A88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8294d2a8
	ctx.lr = 0x82976A9C;
	sub_8294D2A8(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e512a0
	ctx.lr = 0x82976AA8;
	sub_82E512A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,12900
	ctx.r6.s64 = ctx.r11.s64 + 12900;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x82976AC4;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x82976AD0;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82976AD8;
	sub_82DE7330(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r11,18012
	ctx.r6.s64 = ctx.r11.s64 + 18012;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x82976AF0;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x826e1b10
	ctx.lr = 0x82976AFC;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82976B04;
	sub_82DE7330(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r10,11
	ctx.r10.s64 = 11;
	// lwz r11,-4084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// stw r10,3348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3348, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82976B20"))) PPC_WEAK_FUNC(sub_82976B20);
PPC_FUNC_IMPL(__imp__sub_82976B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82976B28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e512a0
	ctx.lr = 0x82976B44;
	sub_82E512A0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,-4084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// stw r10,3348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3348, ctx.r10.u32);
	// bl 0x824afb20
	ctx.lr = 0x82976B64;
	sub_824AFB20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294f290
	ctx.lr = 0x82976B74;
	sub_8294F290(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x82976B80;
	sub_824AFB20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294f290
	ctx.lr = 0x82976B90;
	sub_8294F290(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294ca68
	ctx.lr = 0x82976BA0;
	sub_8294CA68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82976BA8"))) PPC_WEAK_FUNC(sub_82976BA8);
PPC_FUNC_IMPL(__imp__sub_82976BA8) {
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
	// li r6,310
	ctx.r6.s64 = 310;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x82976BC4;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20776
	ctx.r11.s64 = ctx.r11.s64 + -20776;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x82976BE4;
	sub_82E50EA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r5,r11,17928
	ctx.r5.s64 = ctx.r11.s64 + 17928;
	// bl 0x82e50ea8
	ctx.lr = 0x82976BF8;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82e51260
	ctx.lr = 0x82976C0C;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21872
	ctx.r11.s64 = ctx.r11.s64 + -21872;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82976C30"))) PPC_WEAK_FUNC(sub_82976C30);
PPC_FUNC_IMPL(__imp__sub_82976C30) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20776
	ctx.r11.s64 = ctx.r11.s64 + -20776;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x82976C68;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82976c78
	if (ctx.cr0.eq) goto loc_82976C78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82976C78;
	sub_823FD208(ctx, base);
loc_82976C78:
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

__attribute__((alias("__imp__sub_82976C98"))) PPC_WEAK_FUNC(sub_82976C98);
PPC_FUNC_IMPL(__imp__sub_82976C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82976CA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e512a0
	ctx.lr = 0x82976CBC;
	sub_82E512A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,12900
	ctx.r6.s64 = ctx.r11.s64 + 12900;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x82976CD8;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x82976CE4;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82976CEC;
	sub_82DE7330(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,18012
	ctx.r6.s64 = ctx.r11.s64 + 18012;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x82976D04;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x826e1b10
	ctx.lr = 0x82976D10;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82976D18;
	sub_82DE7330(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-4084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// stw r10,3348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3348, ctx.r10.u32);
	// bl 0x8294d2a8
	ctx.lr = 0x82976D38;
	sub_8294D2A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82976D40"))) PPC_WEAK_FUNC(sub_82976D40);
PPC_FUNC_IMPL(__imp__sub_82976D40) {
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
	// li r6,311
	ctx.r6.s64 = 311;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x82976D5C;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20716
	ctx.r11.s64 = ctx.r11.s64 + -20716;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x82976D7C;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82e51260
	ctx.lr = 0x82976D90;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21856
	ctx.r11.s64 = ctx.r11.s64 + -21856;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82976DB8"))) PPC_WEAK_FUNC(sub_82976DB8);
PPC_FUNC_IMPL(__imp__sub_82976DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82976DC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82e512a0
	ctx.lr = 0x82976DDC;
	sub_82E512A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r6,r11,12900
	ctx.r6.s64 = ctx.r11.s64 + 12900;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x82976DF8;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826e1b10
	ctx.lr = 0x82976E04;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82976E0C;
	sub_82DE7330(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,-4024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4024);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82976e30
	if (ctx.cr6.eq) goto loc_82976E30;
	// bl 0x828daf80
	ctx.lr = 0x82976E30;
	sub_828DAF80(ctx, base);
loc_82976E30:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x82976E40;
	sub_8247FC10(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,624(r11)
	PPC_STORE_U8(ctx.r11.u32 + 624, ctx.r10.u8);
	// bl 0x8294d2a8
	ctx.lr = 0x82976E60;
	sub_8294D2A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82976E68"))) PPC_WEAK_FUNC(sub_82976E68);
PPC_FUNC_IMPL(__imp__sub_82976E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82976E70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82e512a0
	ctx.lr = 0x82976E8C;
	sub_82E512A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x82976E98;
	sub_824AFB20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294f290
	ctx.lr = 0x82976EA8;
	sub_8294F290(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,-4024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4024);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82976ed0
	if (ctx.cr6.eq) goto loc_82976ED0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828db028
	ctx.lr = 0x82976ED0;
	sub_828DB028(ctx, base);
loc_82976ED0:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x82976EE0;
	sub_8247FC10(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,624(r11)
	PPC_STORE_U8(ctx.r11.u32 + 624, ctx.r10.u8);
	// bl 0x8294ca68
	ctx.lr = 0x82976F00;
	sub_8294CA68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82976F08"))) PPC_WEAK_FUNC(sub_82976F08);
PPC_FUNC_IMPL(__imp__sub_82976F08) {
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
	// li r6,318
	ctx.r6.s64 = 318;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x82976F24;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x82976F44;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82e51260
	ctx.lr = 0x82976F58;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21840
	ctx.r11.s64 = ctx.r11.s64 + -21840;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82976F80"))) PPC_WEAK_FUNC(sub_82976F80);
PPC_FUNC_IMPL(__imp__sub_82976F80) {
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
	// li r6,323
	ctx.r6.s64 = 323;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x82976F9C;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20596
	ctx.r11.s64 = ctx.r11.s64 + -20596;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x82976FBC;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82e51260
	ctx.lr = 0x82976FD0;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21824
	ctx.r11.s64 = ctx.r11.s64 + -21824;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82976FF8"))) PPC_WEAK_FUNC(sub_82976FF8);
PPC_FUNC_IMPL(__imp__sub_82976FF8) {
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
	// li r6,325
	ctx.r6.s64 = 325;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x82977014;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20536
	ctx.r11.s64 = ctx.r11.s64 + -20536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x82977034;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82e51260
	ctx.lr = 0x82977048;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21808
	ctx.r11.s64 = ctx.r11.s64 + -21808;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82977070"))) PPC_WEAK_FUNC(sub_82977070);
PPC_FUNC_IMPL(__imp__sub_82977070) {
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
	// li r6,331
	ctx.r6.s64 = 331;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x8297708C;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20476
	ctx.r11.s64 = ctx.r11.s64 + -20476;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x829770AC;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82e51260
	ctx.lr = 0x829770C0;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21792
	ctx.r11.s64 = ctx.r11.s64 + -21792;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829770E8"))) PPC_WEAK_FUNC(sub_829770E8);
PPC_FUNC_IMPL(__imp__sub_829770E8) {
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
	// li r6,22
	ctx.r6.s64 = 22;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x82977104;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20416
	ctx.r11.s64 = ctx.r11.s64 + -20416;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x82977124;
	sub_82E50EA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r5,r11,29068
	ctx.r5.s64 = ctx.r11.s64 + 29068;
	// bl 0x82e50ea8
	ctx.lr = 0x82977138;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82e51260
	ctx.lr = 0x8297714C;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21776
	ctx.r11.s64 = ctx.r11.s64 + -21776;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82977170"))) PPC_WEAK_FUNC(sub_82977170);
PPC_FUNC_IMPL(__imp__sub_82977170) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20416
	ctx.r11.s64 = ctx.r11.s64 + -20416;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x829771A8;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829771b8
	if (ctx.cr0.eq) goto loc_829771B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829771B8;
	sub_823FD208(ctx, base);
loc_829771B8:
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

__attribute__((alias("__imp__sub_829771D8"))) PPC_WEAK_FUNC(sub_829771D8);
PPC_FUNC_IMPL(__imp__sub_829771D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829771E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8294d2a8
	ctx.lr = 0x829771F4;
	sub_8294D2A8(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e512a0
	ctx.lr = 0x82977200;
	sub_82E512A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,12900
	ctx.r6.s64 = ctx.r11.s64 + 12900;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x8297721C;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x82977228;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82977230;
	sub_82DE7330(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r11,-17572
	ctx.r6.s64 = ctx.r11.s64 + -17572;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x82977248;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x826e1b10
	ctx.lr = 0x82977254;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x8297725C;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82977268"))) PPC_WEAK_FUNC(sub_82977268);
PPC_FUNC_IMPL(__imp__sub_82977268) {
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
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x82977284;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20356
	ctx.r11.s64 = ctx.r11.s64 + -20356;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x829772A4;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82e51260
	ctx.lr = 0x829772B8;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21760
	ctx.r11.s64 = ctx.r11.s64 + -21760;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829772E0"))) PPC_WEAK_FUNC(sub_829772E0);
PPC_FUNC_IMPL(__imp__sub_829772E0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20356
	ctx.r11.s64 = ctx.r11.s64 + -20356;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x82977318;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82977328
	if (ctx.cr0.eq) goto loc_82977328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82977328;
	sub_823FD208(ctx, base);
loc_82977328:
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

__attribute__((alias("__imp__sub_82977348"))) PPC_WEAK_FUNC(sub_82977348);
PPC_FUNC_IMPL(__imp__sub_82977348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82977350;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8294d2a8
	ctx.lr = 0x82977364;
	sub_8294D2A8(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e512a0
	ctx.lr = 0x82977370;
	sub_82E512A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r6,r11,12900
	ctx.r6.s64 = ctx.r11.s64 + 12900;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x8297738C;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826e1b10
	ctx.lr = 0x82977398;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x829773A0;
	sub_82DE7330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829773A8"))) PPC_WEAK_FUNC(sub_829773A8);
PPC_FUNC_IMPL(__imp__sub_829773A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x829773B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82e512a0
	ctx.lr = 0x829773CC;
	sub_82E512A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x829773D8;
	sub_824AFB20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294f290
	ctx.lr = 0x829773E8;
	sub_8294F290(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294ca68
	ctx.lr = 0x829773F8;
	sub_8294CA68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82977400"))) PPC_WEAK_FUNC(sub_82977400);
PPC_FUNC_IMPL(__imp__sub_82977400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82977408;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e512a0
	ctx.lr = 0x82977424;
	sub_82E512A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,12900
	ctx.r6.s64 = ctx.r11.s64 + 12900;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x82977440;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x8297744C;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82977454;
	sub_82DE7330(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,14608
	ctx.r6.s64 = ctx.r11.s64 + 14608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x8297746C;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x826e1b10
	ctx.lr = 0x82977478;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82977480;
	sub_82DE7330(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,-7972
	ctx.r6.s64 = ctx.r11.s64 + -7972;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x82977498;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x826e1b10
	ctx.lr = 0x829774A4;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x829774AC;
	sub_82DE7330(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,-7988
	ctx.r6.s64 = ctx.r11.s64 + -7988;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x829774C4;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x826e1b10
	ctx.lr = 0x829774D0;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x829774D8;
	sub_82DE7330(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,-8000
	ctx.r6.s64 = ctx.r11.s64 + -8000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x829774F0;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x826e1b10
	ctx.lr = 0x829774FC;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82977504;
	sub_82DE7330(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,-8016
	ctx.r6.s64 = ctx.r11.s64 + -8016;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x8297751C;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x826e1b10
	ctx.lr = 0x82977528;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82977530;
	sub_82DE7330(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294d2a8
	ctx.lr = 0x82977540;
	sub_8294D2A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82977548"))) PPC_WEAK_FUNC(sub_82977548);
PPC_FUNC_IMPL(__imp__sub_82977548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82977550;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e512a0
	ctx.lr = 0x8297756C;
	sub_82E512A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824afb20
	ctx.lr = 0x8297757C;
	sub_824AFB20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294f290
	ctx.lr = 0x8297758C;
	sub_8294F290(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x82977598;
	sub_824AFB20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294f290
	ctx.lr = 0x829775A8;
	sub_8294F290(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x829775B4;
	sub_824AFB20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294f290
	ctx.lr = 0x829775C4;
	sub_8294F290(ctx, base);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x829775D0;
	sub_824AFB20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294f290
	ctx.lr = 0x829775E0;
	sub_8294F290(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x829775EC;
	sub_824AFB20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294f290
	ctx.lr = 0x829775FC;
	sub_8294F290(ctx, base);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824afb20
	ctx.lr = 0x82977608;
	sub_824AFB20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294f290
	ctx.lr = 0x82977618;
	sub_8294F290(ctx, base);
	// bl 0x829aedd8
	ctx.lr = 0x8297761C;
	sub_829AEDD8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294ca68
	ctx.lr = 0x8297762C;
	sub_8294CA68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82977638"))) PPC_WEAK_FUNC(sub_82977638);
PPC_FUNC_IMPL(__imp__sub_82977638) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20296
	ctx.r11.s64 = ctx.r11.s64 + -20296;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x82977670;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82977680
	if (ctx.cr0.eq) goto loc_82977680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82977680;
	sub_823FD208(ctx, base);
loc_82977680:
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

__attribute__((alias("__imp__sub_829776A0"))) PPC_WEAK_FUNC(sub_829776A0);
PPC_FUNC_IMPL(__imp__sub_829776A0) {
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
	// li r6,339
	ctx.r6.s64 = 339;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x829776BC;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20296
	ctx.r11.s64 = ctx.r11.s64 + -20296;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x829776DC;
	sub_82E50EA8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r5,r11,31000
	ctx.r5.s64 = ctx.r11.s64 + 31000;
	// bl 0x82e50ea8
	ctx.lr = 0x829776F0;
	sub_82E50EA8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// addi r5,r11,-20192
	ctx.r5.s64 = ctx.r11.s64 + -20192;
	// bl 0x82e50ea8
	ctx.lr = 0x82977704;
	sub_82E50EA8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// addi r5,r11,-20208
	ctx.r5.s64 = ctx.r11.s64 + -20208;
	// bl 0x82e50ea8
	ctx.lr = 0x82977718;
	sub_82E50EA8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r5,r11,-20224
	ctx.r5.s64 = ctx.r11.s64 + -20224;
	// bl 0x82e50ea8
	ctx.lr = 0x8297772C;
	sub_82E50EA8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// addi r5,r11,-20240
	ctx.r5.s64 = ctx.r11.s64 + -20240;
	// bl 0x82e50ea8
	ctx.lr = 0x82977740;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82e51260
	ctx.lr = 0x82977754;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21744
	ctx.r11.s64 = ctx.r11.s64 + -21744;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82977778"))) PPC_WEAK_FUNC(sub_82977778);
PPC_FUNC_IMPL(__imp__sub_82977778) {
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
	// li r6,330
	ctx.r6.s64 = 330;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x82977794;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20172
	ctx.r11.s64 = ctx.r11.s64 + -20172;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x829777B4;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82e51260
	ctx.lr = 0x829777C8;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21728
	ctx.r11.s64 = ctx.r11.s64 + -21728;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829777F0"))) PPC_WEAK_FUNC(sub_829777F0);
PPC_FUNC_IMPL(__imp__sub_829777F0) {
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
	// li r6,323
	ctx.r6.s64 = 323;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x8297780C;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20112
	ctx.r11.s64 = ctx.r11.s64 + -20112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x8297782C;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82e51260
	ctx.lr = 0x82977840;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21712
	ctx.r11.s64 = ctx.r11.s64 + -21712;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82977868"))) PPC_WEAK_FUNC(sub_82977868);
PPC_FUNC_IMPL(__imp__sub_82977868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82977870;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82e512a0
	ctx.lr = 0x8297788C;
	sub_82E512A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,12900
	ctx.r6.s64 = ctx.r11.s64 + 12900;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x829778A8;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826e1b10
	ctx.lr = 0x829778B4;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x829778BC;
	sub_82DE7330(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294d2a8
	ctx.lr = 0x829778CC;
	sub_8294D2A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829778D8"))) PPC_WEAK_FUNC(sub_829778D8);
PPC_FUNC_IMPL(__imp__sub_829778D8) {
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
	// li r6,324
	ctx.r6.s64 = 324;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x829778F4;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-20052
	ctx.r11.s64 = ctx.r11.s64 + -20052;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x82977914;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82e51260
	ctx.lr = 0x82977928;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21696
	ctx.r11.s64 = ctx.r11.s64 + -21696;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82977950"))) PPC_WEAK_FUNC(sub_82977950);
PPC_FUNC_IMPL(__imp__sub_82977950) {
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
	// li r6,340
	ctx.r6.s64 = 340;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x8297796C;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-19992
	ctx.r11.s64 = ctx.r11.s64 + -19992;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x8297798C;
	sub_82E50EA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r5,r11,17928
	ctx.r5.s64 = ctx.r11.s64 + 17928;
	// bl 0x82e50ea8
	ctx.lr = 0x829779A0;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82e51260
	ctx.lr = 0x829779B4;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21680
	ctx.r11.s64 = ctx.r11.s64 + -21680;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829779D8"))) PPC_WEAK_FUNC(sub_829779D8);
PPC_FUNC_IMPL(__imp__sub_829779D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-19992
	ctx.r11.s64 = ctx.r11.s64 + -19992;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x82977A10;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82977a20
	if (ctx.cr0.eq) goto loc_82977A20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82977A20;
	sub_823FD208(ctx, base);
loc_82977A20:
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

__attribute__((alias("__imp__sub_82977A40"))) PPC_WEAK_FUNC(sub_82977A40);
PPC_FUNC_IMPL(__imp__sub_82977A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82977A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8294d2a8
	ctx.lr = 0x82977A5C;
	sub_8294D2A8(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e512a0
	ctx.lr = 0x82977A68;
	sub_82E512A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,12900
	ctx.r6.s64 = ctx.r11.s64 + 12900;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x82977A84;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e1b10
	ctx.lr = 0x82977A90;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82977A98;
	sub_82DE7330(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r11,18012
	ctx.r6.s64 = ctx.r11.s64 + 18012;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8294d368
	ctx.lr = 0x82977AB0;
	sub_8294D368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x826e1b10
	ctx.lr = 0x82977ABC;
	sub_826E1B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7330
	ctx.lr = 0x82977AC4;
	sub_82DE7330(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r11,-4084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4084);
	// stw r10,3348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3348, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82977AE0"))) PPC_WEAK_FUNC(sub_82977AE0);
PPC_FUNC_IMPL(__imp__sub_82977AE0) {
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
	// li r6,341
	ctx.r6.s64 = 341;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8294f0e0
	ctx.lr = 0x82977AFC;
	sub_8294F0E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-19932
	ctx.r11.s64 = ctx.r11.s64 + -19932;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r10,12820
	ctx.r5.s64 = ctx.r10.s64 + 12820;
	// bl 0x82e50ea8
	ctx.lr = 0x82977B1C;
	sub_82E50EA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r5,r11,12980
	ctx.r5.s64 = ctx.r11.s64 + 12980;
	// bl 0x82e50ea8
	ctx.lr = 0x82977B30;
	sub_82E50EA8(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82e51260
	ctx.lr = 0x82977B44;
	sub_82E51260(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21664
	ctx.r11.s64 = ctx.r11.s64 + -21664;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82977B68"))) PPC_WEAK_FUNC(sub_82977B68);
PPC_FUNC_IMPL(__imp__sub_82977B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de08
	ctx.lr = 0x82977B70;
	__savegprlr_28(ctx, base);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828fc1a0
	ctx.lr = 0x82977B84;
	sub_828FC1A0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// bl 0x8247fc10
	ctx.lr = 0x82977B94;
	sub_8247FC10(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82486ce8
	ctx.lr = 0x82977B9C;
	sub_82486CE8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82977c5c
	goto loc_82977C5C;
loc_82977BA8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r3,11856
	ctx.r11.s64 = ctx.r3.s64 + 11856;
	// lbz r10,12562(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12562);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82977c58
	if (!ctx.cr0.eq) goto loc_82977C58;
	// lwz r10,1096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1096);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82977c58
	if (ctx.cr6.eq) goto loc_82977C58;
	// lbz r9,36(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82977bdc
	if (!ctx.cr0.eq) goto loc_82977BDC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82977c58
	if (!ctx.cr6.eq) goto loc_82977C58;
loc_82977BDC:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82977c30
	if (ctx.cr6.eq) goto loc_82977C30;
	// bl 0x8249e4b8
	ctx.lr = 0x82977BEC;
	sub_8249E4B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82977C08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lvx128 v127,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,372(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82977C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82977c48
	goto loc_82977C48;
loc_82977C30:
	// li r10,672
	ctx.r10.s64 = 672;
	// li r9,656
	ctx.r9.s64 = 656;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v1,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v127,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82cb75d0
	ctx.lr = 0x82977C48;
	sub_82CB75D0(ctx, base);
loc_82977C48:
	// vor128 v1,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824b87a8
	ctx.lr = 0x82977C58;
	sub_824B87A8(ctx, base);
loc_82977C58:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82977C5C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82977ba8
	if (!ctx.cr6.eq) goto loc_82977BA8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82a7de58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82977C78"))) PPC_WEAK_FUNC(sub_82977C78);
PPC_FUNC_IMPL(__imp__sub_82977C78) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r11,r11,-19872
	ctx.r11.s64 = ctx.r11.s64 + -19872;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82411478
	ctx.lr = 0x82977CA8;
	sub_82411478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829082e8
	ctx.lr = 0x82977CB0;
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

__attribute__((alias("__imp__sub_82977CC8"))) PPC_WEAK_FUNC(sub_82977CC8);
PPC_FUNC_IMPL(__imp__sub_82977CC8) {
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
	ctx.lr = 0x82977CE8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19800
	ctx.r11.s64 = ctx.r11.s64 + -19800;
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

__attribute__((alias("__imp__sub_82977D18"))) PPC_WEAK_FUNC(sub_82977D18);
PPC_FUNC_IMPL(__imp__sub_82977D18) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19800
	ctx.r11.s64 = ctx.r11.s64 + -19800;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82977D3C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82977d64
	if (ctx.cr0.eq) goto loc_82977D64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82977d64
	if (ctx.cr6.eq) goto loc_82977D64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82977D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82977D64:
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

__attribute__((alias("__imp__sub_82977D88"))) PPC_WEAK_FUNC(sub_82977D88);
PPC_FUNC_IMPL(__imp__sub_82977D88) {
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
	// bl 0x82977d18
	ctx.lr = 0x82977DA8;
	sub_82977D18(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82977db8
	if (ctx.cr0.eq) goto loc_82977DB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82977DB8;
	sub_823FD208(ctx, base);
loc_82977DB8:
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

__attribute__((alias("__imp__sub_82977DD8"))) PPC_WEAK_FUNC(sub_82977DD8);
PPC_FUNC_IMPL(__imp__sub_82977DD8) {
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
	ctx.lr = 0x82977DF8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19748
	ctx.r11.s64 = ctx.r11.s64 + -19748;
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

__attribute__((alias("__imp__sub_82977E28"))) PPC_WEAK_FUNC(sub_82977E28);
PPC_FUNC_IMPL(__imp__sub_82977E28) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19748
	ctx.r11.s64 = ctx.r11.s64 + -19748;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82977E4C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82977e74
	if (ctx.cr0.eq) goto loc_82977E74;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82977e74
	if (ctx.cr6.eq) goto loc_82977E74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82977E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82977E74:
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

__attribute__((alias("__imp__sub_82977E98"))) PPC_WEAK_FUNC(sub_82977E98);
PPC_FUNC_IMPL(__imp__sub_82977E98) {
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
	// bl 0x82977e28
	ctx.lr = 0x82977EB8;
	sub_82977E28(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82977ec8
	if (ctx.cr0.eq) goto loc_82977EC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82977EC8;
	sub_823FD208(ctx, base);
loc_82977EC8:
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

__attribute__((alias("__imp__sub_82977EE8"))) PPC_WEAK_FUNC(sub_82977EE8);
PPC_FUNC_IMPL(__imp__sub_82977EE8) {
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
	ctx.lr = 0x82977F08;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19696
	ctx.r11.s64 = ctx.r11.s64 + -19696;
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

__attribute__((alias("__imp__sub_82977F38"))) PPC_WEAK_FUNC(sub_82977F38);
PPC_FUNC_IMPL(__imp__sub_82977F38) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19696
	ctx.r11.s64 = ctx.r11.s64 + -19696;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82977F5C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82977f84
	if (ctx.cr0.eq) goto loc_82977F84;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82977f84
	if (ctx.cr6.eq) goto loc_82977F84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82977F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82977F84:
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

__attribute__((alias("__imp__sub_82977FA8"))) PPC_WEAK_FUNC(sub_82977FA8);
PPC_FUNC_IMPL(__imp__sub_82977FA8) {
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
	// bl 0x82977f38
	ctx.lr = 0x82977FC8;
	sub_82977F38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82977fd8
	if (ctx.cr0.eq) goto loc_82977FD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82977FD8;
	sub_823FD208(ctx, base);
loc_82977FD8:
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

__attribute__((alias("__imp__sub_82977FF8"))) PPC_WEAK_FUNC(sub_82977FF8);
PPC_FUNC_IMPL(__imp__sub_82977FF8) {
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
	ctx.lr = 0x82978018;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19644
	ctx.r11.s64 = ctx.r11.s64 + -19644;
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

__attribute__((alias("__imp__sub_82978048"))) PPC_WEAK_FUNC(sub_82978048);
PPC_FUNC_IMPL(__imp__sub_82978048) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19644
	ctx.r11.s64 = ctx.r11.s64 + -19644;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8297806C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978094
	if (ctx.cr0.eq) goto loc_82978094;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82978094
	if (ctx.cr6.eq) goto loc_82978094;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82978094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82978094:
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

__attribute__((alias("__imp__sub_829780B8"))) PPC_WEAK_FUNC(sub_829780B8);
PPC_FUNC_IMPL(__imp__sub_829780B8) {
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
	// bl 0x82978048
	ctx.lr = 0x829780D8;
	sub_82978048(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829780e8
	if (ctx.cr0.eq) goto loc_829780E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829780E8;
	sub_823FD208(ctx, base);
loc_829780E8:
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

__attribute__((alias("__imp__sub_82978108"))) PPC_WEAK_FUNC(sub_82978108);
PPC_FUNC_IMPL(__imp__sub_82978108) {
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
	ctx.lr = 0x82978128;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19592
	ctx.r11.s64 = ctx.r11.s64 + -19592;
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

__attribute__((alias("__imp__sub_82978158"))) PPC_WEAK_FUNC(sub_82978158);
PPC_FUNC_IMPL(__imp__sub_82978158) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19592
	ctx.r11.s64 = ctx.r11.s64 + -19592;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8297817C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829781a4
	if (ctx.cr0.eq) goto loc_829781A4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829781a4
	if (ctx.cr6.eq) goto loc_829781A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829781A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829781A4:
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

__attribute__((alias("__imp__sub_829781C8"))) PPC_WEAK_FUNC(sub_829781C8);
PPC_FUNC_IMPL(__imp__sub_829781C8) {
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
	// bl 0x82978158
	ctx.lr = 0x829781E8;
	sub_82978158(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829781f8
	if (ctx.cr0.eq) goto loc_829781F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x829781F8;
	sub_823FD208(ctx, base);
loc_829781F8:
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

__attribute__((alias("__imp__sub_82978218"))) PPC_WEAK_FUNC(sub_82978218);
PPC_FUNC_IMPL(__imp__sub_82978218) {
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
	ctx.lr = 0x82978238;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19540
	ctx.r11.s64 = ctx.r11.s64 + -19540;
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

__attribute__((alias("__imp__sub_82978268"))) PPC_WEAK_FUNC(sub_82978268);
PPC_FUNC_IMPL(__imp__sub_82978268) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19540
	ctx.r11.s64 = ctx.r11.s64 + -19540;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8297828C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829782b4
	if (ctx.cr0.eq) goto loc_829782B4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829782b4
	if (ctx.cr6.eq) goto loc_829782B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829782B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829782B4:
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

__attribute__((alias("__imp__sub_829782D8"))) PPC_WEAK_FUNC(sub_829782D8);
PPC_FUNC_IMPL(__imp__sub_829782D8) {
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
	// bl 0x82978268
	ctx.lr = 0x829782F8;
	sub_82978268(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978308
	if (ctx.cr0.eq) goto loc_82978308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82978308;
	sub_823FD208(ctx, base);
loc_82978308:
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

__attribute__((alias("__imp__sub_82978328"))) PPC_WEAK_FUNC(sub_82978328);
PPC_FUNC_IMPL(__imp__sub_82978328) {
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
	ctx.lr = 0x82978348;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19488
	ctx.r11.s64 = ctx.r11.s64 + -19488;
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

__attribute__((alias("__imp__sub_82978378"))) PPC_WEAK_FUNC(sub_82978378);
PPC_FUNC_IMPL(__imp__sub_82978378) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19488
	ctx.r11.s64 = ctx.r11.s64 + -19488;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x8297839C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829783c4
	if (ctx.cr0.eq) goto loc_829783C4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829783c4
	if (ctx.cr6.eq) goto loc_829783C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829783C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829783C4:
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

__attribute__((alias("__imp__sub_829783E8"))) PPC_WEAK_FUNC(sub_829783E8);
PPC_FUNC_IMPL(__imp__sub_829783E8) {
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
	// bl 0x82978378
	ctx.lr = 0x82978408;
	sub_82978378(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978418
	if (ctx.cr0.eq) goto loc_82978418;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82978418;
	sub_823FD208(ctx, base);
loc_82978418:
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

__attribute__((alias("__imp__sub_82978438"))) PPC_WEAK_FUNC(sub_82978438);
PPC_FUNC_IMPL(__imp__sub_82978438) {
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
	ctx.lr = 0x82978458;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19436
	ctx.r11.s64 = ctx.r11.s64 + -19436;
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

__attribute__((alias("__imp__sub_82978488"))) PPC_WEAK_FUNC(sub_82978488);
PPC_FUNC_IMPL(__imp__sub_82978488) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19436
	ctx.r11.s64 = ctx.r11.s64 + -19436;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x829784AC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829784d4
	if (ctx.cr0.eq) goto loc_829784D4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829784d4
	if (ctx.cr6.eq) goto loc_829784D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829784D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829784D4:
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

__attribute__((alias("__imp__sub_829784F8"))) PPC_WEAK_FUNC(sub_829784F8);
PPC_FUNC_IMPL(__imp__sub_829784F8) {
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
	// bl 0x82978488
	ctx.lr = 0x82978518;
	sub_82978488(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978528
	if (ctx.cr0.eq) goto loc_82978528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82978528;
	sub_823FD208(ctx, base);
loc_82978528:
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

__attribute__((alias("__imp__sub_82978548"))) PPC_WEAK_FUNC(sub_82978548);
PPC_FUNC_IMPL(__imp__sub_82978548) {
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
	ctx.lr = 0x82978568;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19384
	ctx.r11.s64 = ctx.r11.s64 + -19384;
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

__attribute__((alias("__imp__sub_82978598"))) PPC_WEAK_FUNC(sub_82978598);
PPC_FUNC_IMPL(__imp__sub_82978598) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19384
	ctx.r11.s64 = ctx.r11.s64 + -19384;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x829785BC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829785e4
	if (ctx.cr0.eq) goto loc_829785E4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829785e4
	if (ctx.cr6.eq) goto loc_829785E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829785E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829785E4:
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

__attribute__((alias("__imp__sub_82978608"))) PPC_WEAK_FUNC(sub_82978608);
PPC_FUNC_IMPL(__imp__sub_82978608) {
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
	// bl 0x82978598
	ctx.lr = 0x82978628;
	sub_82978598(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978638
	if (ctx.cr0.eq) goto loc_82978638;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82978638;
	sub_823FD208(ctx, base);
loc_82978638:
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

__attribute__((alias("__imp__sub_82978658"))) PPC_WEAK_FUNC(sub_82978658);
PPC_FUNC_IMPL(__imp__sub_82978658) {
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
	ctx.lr = 0x82978678;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19332
	ctx.r11.s64 = ctx.r11.s64 + -19332;
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

__attribute__((alias("__imp__sub_829786A8"))) PPC_WEAK_FUNC(sub_829786A8);
PPC_FUNC_IMPL(__imp__sub_829786A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19332
	ctx.r11.s64 = ctx.r11.s64 + -19332;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x829786CC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829786f4
	if (ctx.cr0.eq) goto loc_829786F4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829786f4
	if (ctx.cr6.eq) goto loc_829786F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829786F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829786F4:
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

__attribute__((alias("__imp__sub_82978718"))) PPC_WEAK_FUNC(sub_82978718);
PPC_FUNC_IMPL(__imp__sub_82978718) {
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
	// bl 0x829786a8
	ctx.lr = 0x82978738;
	sub_829786A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978748
	if (ctx.cr0.eq) goto loc_82978748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82978748;
	sub_823FD208(ctx, base);
loc_82978748:
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

__attribute__((alias("__imp__sub_82978768"))) PPC_WEAK_FUNC(sub_82978768);
PPC_FUNC_IMPL(__imp__sub_82978768) {
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
	ctx.lr = 0x82978788;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19280
	ctx.r11.s64 = ctx.r11.s64 + -19280;
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

__attribute__((alias("__imp__sub_829787B8"))) PPC_WEAK_FUNC(sub_829787B8);
PPC_FUNC_IMPL(__imp__sub_829787B8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19280
	ctx.r11.s64 = ctx.r11.s64 + -19280;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x829787DC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978804
	if (ctx.cr0.eq) goto loc_82978804;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82978804
	if (ctx.cr6.eq) goto loc_82978804;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82978804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82978804:
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

__attribute__((alias("__imp__sub_82978828"))) PPC_WEAK_FUNC(sub_82978828);
PPC_FUNC_IMPL(__imp__sub_82978828) {
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
	// bl 0x829787b8
	ctx.lr = 0x82978848;
	sub_829787B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978858
	if (ctx.cr0.eq) goto loc_82978858;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82978858;
	sub_823FD208(ctx, base);
loc_82978858:
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

__attribute__((alias("__imp__sub_82978878"))) PPC_WEAK_FUNC(sub_82978878);
PPC_FUNC_IMPL(__imp__sub_82978878) {
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
	ctx.lr = 0x82978898;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19228
	ctx.r11.s64 = ctx.r11.s64 + -19228;
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

__attribute__((alias("__imp__sub_829788C8"))) PPC_WEAK_FUNC(sub_829788C8);
PPC_FUNC_IMPL(__imp__sub_829788C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19228
	ctx.r11.s64 = ctx.r11.s64 + -19228;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x829788EC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978914
	if (ctx.cr0.eq) goto loc_82978914;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82978914
	if (ctx.cr6.eq) goto loc_82978914;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82978914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82978914:
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

__attribute__((alias("__imp__sub_82978938"))) PPC_WEAK_FUNC(sub_82978938);
PPC_FUNC_IMPL(__imp__sub_82978938) {
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
	// bl 0x829788c8
	ctx.lr = 0x82978958;
	sub_829788C8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978968
	if (ctx.cr0.eq) goto loc_82978968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82978968;
	sub_823FD208(ctx, base);
loc_82978968:
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

__attribute__((alias("__imp__sub_82978988"))) PPC_WEAK_FUNC(sub_82978988);
PPC_FUNC_IMPL(__imp__sub_82978988) {
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
	ctx.lr = 0x829789A8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19176
	ctx.r11.s64 = ctx.r11.s64 + -19176;
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

__attribute__((alias("__imp__sub_829789D8"))) PPC_WEAK_FUNC(sub_829789D8);
PPC_FUNC_IMPL(__imp__sub_829789D8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19176
	ctx.r11.s64 = ctx.r11.s64 + -19176;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x829789FC;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978a24
	if (ctx.cr0.eq) goto loc_82978A24;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82978a24
	if (ctx.cr6.eq) goto loc_82978A24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82978A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82978A24:
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

__attribute__((alias("__imp__sub_82978A48"))) PPC_WEAK_FUNC(sub_82978A48);
PPC_FUNC_IMPL(__imp__sub_82978A48) {
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
	// bl 0x829789d8
	ctx.lr = 0x82978A68;
	sub_829789D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978a78
	if (ctx.cr0.eq) goto loc_82978A78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82978A78;
	sub_823FD208(ctx, base);
loc_82978A78:
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

__attribute__((alias("__imp__sub_82978A98"))) PPC_WEAK_FUNC(sub_82978A98);
PPC_FUNC_IMPL(__imp__sub_82978A98) {
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
	ctx.lr = 0x82978AB8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19124
	ctx.r11.s64 = ctx.r11.s64 + -19124;
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

__attribute__((alias("__imp__sub_82978AE8"))) PPC_WEAK_FUNC(sub_82978AE8);
PPC_FUNC_IMPL(__imp__sub_82978AE8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19124
	ctx.r11.s64 = ctx.r11.s64 + -19124;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82978B0C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978b34
	if (ctx.cr0.eq) goto loc_82978B34;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82978b34
	if (ctx.cr6.eq) goto loc_82978B34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82978B34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82978B34:
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

__attribute__((alias("__imp__sub_82978B58"))) PPC_WEAK_FUNC(sub_82978B58);
PPC_FUNC_IMPL(__imp__sub_82978B58) {
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
	// bl 0x82978ae8
	ctx.lr = 0x82978B78;
	sub_82978AE8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978b88
	if (ctx.cr0.eq) goto loc_82978B88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82978B88;
	sub_823FD208(ctx, base);
loc_82978B88:
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

__attribute__((alias("__imp__sub_82978BA8"))) PPC_WEAK_FUNC(sub_82978BA8);
PPC_FUNC_IMPL(__imp__sub_82978BA8) {
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
	ctx.lr = 0x82978BC8;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19072
	ctx.r11.s64 = ctx.r11.s64 + -19072;
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

__attribute__((alias("__imp__sub_82978BF8"))) PPC_WEAK_FUNC(sub_82978BF8);
PPC_FUNC_IMPL(__imp__sub_82978BF8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19072
	ctx.r11.s64 = ctx.r11.s64 + -19072;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82978C1C;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978c44
	if (ctx.cr0.eq) goto loc_82978C44;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82978c44
	if (ctx.cr6.eq) goto loc_82978C44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82978C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82978C44:
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

__attribute__((alias("__imp__sub_82978C68"))) PPC_WEAK_FUNC(sub_82978C68);
PPC_FUNC_IMPL(__imp__sub_82978C68) {
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
	// bl 0x82978bf8
	ctx.lr = 0x82978C88;
	sub_82978BF8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978c98
	if (ctx.cr0.eq) goto loc_82978C98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82978C98;
	sub_823FD208(ctx, base);
loc_82978C98:
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

__attribute__((alias("__imp__sub_82978CB8"))) PPC_WEAK_FUNC(sub_82978CB8);
PPC_FUNC_IMPL(__imp__sub_82978CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e512a0
	ctx.lr = 0x82978CC8;
	sub_82E512A0(ctx, base);
	// bl 0x82de7330
	ctx.lr = 0x82978CCC;
	sub_82DE7330(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82978CE0"))) PPC_WEAK_FUNC(sub_82978CE0);
PPC_FUNC_IMPL(__imp__sub_82978CE0) {
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
	ctx.lr = 0x82978D00;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19020
	ctx.r11.s64 = ctx.r11.s64 + -19020;
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

__attribute__((alias("__imp__sub_82978D30"))) PPC_WEAK_FUNC(sub_82978D30);
PPC_FUNC_IMPL(__imp__sub_82978D30) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19020
	ctx.r11.s64 = ctx.r11.s64 + -19020;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82978D54;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978d7c
	if (ctx.cr0.eq) goto loc_82978D7C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82978d7c
	if (ctx.cr6.eq) goto loc_82978D7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82978D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82978D7C:
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

__attribute__((alias("__imp__sub_82978DA0"))) PPC_WEAK_FUNC(sub_82978DA0);
PPC_FUNC_IMPL(__imp__sub_82978DA0) {
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
	// bl 0x82978d30
	ctx.lr = 0x82978DC0;
	sub_82978D30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978dd0
	if (ctx.cr0.eq) goto loc_82978DD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82978DD0;
	sub_823FD208(ctx, base);
loc_82978DD0:
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

__attribute__((alias("__imp__sub_82978DF0"))) PPC_WEAK_FUNC(sub_82978DF0);
PPC_FUNC_IMPL(__imp__sub_82978DF0) {
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
	ctx.lr = 0x82978E10;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18968
	ctx.r11.s64 = ctx.r11.s64 + -18968;
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

__attribute__((alias("__imp__sub_82978E40"))) PPC_WEAK_FUNC(sub_82978E40);
PPC_FUNC_IMPL(__imp__sub_82978E40) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18968
	ctx.r11.s64 = ctx.r11.s64 + -18968;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82978E64;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978e8c
	if (ctx.cr0.eq) goto loc_82978E8C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82978e8c
	if (ctx.cr6.eq) goto loc_82978E8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82978E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82978E8C:
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

__attribute__((alias("__imp__sub_82978EB0"))) PPC_WEAK_FUNC(sub_82978EB0);
PPC_FUNC_IMPL(__imp__sub_82978EB0) {
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
	// bl 0x82978e40
	ctx.lr = 0x82978ED0;
	sub_82978E40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978ee0
	if (ctx.cr0.eq) goto loc_82978EE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82978EE0;
	sub_823FD208(ctx, base);
loc_82978EE0:
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

__attribute__((alias("__imp__sub_82978F00"))) PPC_WEAK_FUNC(sub_82978F00);
PPC_FUNC_IMPL(__imp__sub_82978F00) {
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
	ctx.lr = 0x82978F20;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18916
	ctx.r11.s64 = ctx.r11.s64 + -18916;
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

__attribute__((alias("__imp__sub_82978F50"))) PPC_WEAK_FUNC(sub_82978F50);
PPC_FUNC_IMPL(__imp__sub_82978F50) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18916
	ctx.r11.s64 = ctx.r11.s64 + -18916;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82978F74;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978f9c
	if (ctx.cr0.eq) goto loc_82978F9C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82978f9c
	if (ctx.cr6.eq) goto loc_82978F9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82978F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82978F9C:
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

__attribute__((alias("__imp__sub_82978FC0"))) PPC_WEAK_FUNC(sub_82978FC0);
PPC_FUNC_IMPL(__imp__sub_82978FC0) {
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
	// bl 0x82978f50
	ctx.lr = 0x82978FE0;
	sub_82978F50(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978ff0
	if (ctx.cr0.eq) goto loc_82978FF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82978FF0;
	sub_823FD208(ctx, base);
loc_82978FF0:
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

__attribute__((alias("__imp__sub_82979010"))) PPC_WEAK_FUNC(sub_82979010);
PPC_FUNC_IMPL(__imp__sub_82979010) {
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
	ctx.lr = 0x82979030;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18864
	ctx.r11.s64 = ctx.r11.s64 + -18864;
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

__attribute__((alias("__imp__sub_82979060"))) PPC_WEAK_FUNC(sub_82979060);
PPC_FUNC_IMPL(__imp__sub_82979060) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18864
	ctx.r11.s64 = ctx.r11.s64 + -18864;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82979084;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829790ac
	if (ctx.cr0.eq) goto loc_829790AC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829790ac
	if (ctx.cr6.eq) goto loc_829790AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829790AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829790AC:
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

__attribute__((alias("__imp__sub_829790D0"))) PPC_WEAK_FUNC(sub_829790D0);
PPC_FUNC_IMPL(__imp__sub_829790D0) {
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
	// bl 0x82979060
	ctx.lr = 0x829790F0;
	sub_82979060(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979100
	if (ctx.cr0.eq) goto loc_82979100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82979100;
	sub_823FD208(ctx, base);
loc_82979100:
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

__attribute__((alias("__imp__sub_82979120"))) PPC_WEAK_FUNC(sub_82979120);
PPC_FUNC_IMPL(__imp__sub_82979120) {
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
	ctx.lr = 0x82979140;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18812
	ctx.r11.s64 = ctx.r11.s64 + -18812;
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

__attribute__((alias("__imp__sub_82979170"))) PPC_WEAK_FUNC(sub_82979170);
PPC_FUNC_IMPL(__imp__sub_82979170) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18812
	ctx.r11.s64 = ctx.r11.s64 + -18812;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82979194;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829791bc
	if (ctx.cr0.eq) goto loc_829791BC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829791bc
	if (ctx.cr6.eq) goto loc_829791BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829791BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829791BC:
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

__attribute__((alias("__imp__sub_829791E0"))) PPC_WEAK_FUNC(sub_829791E0);
PPC_FUNC_IMPL(__imp__sub_829791E0) {
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
	// bl 0x82979170
	ctx.lr = 0x82979200;
	sub_82979170(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979210
	if (ctx.cr0.eq) goto loc_82979210;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82979210;
	sub_823FD208(ctx, base);
loc_82979210:
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

__attribute__((alias("__imp__sub_82979230"))) PPC_WEAK_FUNC(sub_82979230);
PPC_FUNC_IMPL(__imp__sub_82979230) {
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
	ctx.lr = 0x82979250;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18760
	ctx.r11.s64 = ctx.r11.s64 + -18760;
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

__attribute__((alias("__imp__sub_82979280"))) PPC_WEAK_FUNC(sub_82979280);
PPC_FUNC_IMPL(__imp__sub_82979280) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18760
	ctx.r11.s64 = ctx.r11.s64 + -18760;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x829792A4;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829792cc
	if (ctx.cr0.eq) goto loc_829792CC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829792cc
	if (ctx.cr6.eq) goto loc_829792CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829792CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829792CC:
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

__attribute__((alias("__imp__sub_829792F0"))) PPC_WEAK_FUNC(sub_829792F0);
PPC_FUNC_IMPL(__imp__sub_829792F0) {
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
	// bl 0x82979280
	ctx.lr = 0x82979310;
	sub_82979280(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979320
	if (ctx.cr0.eq) goto loc_82979320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82979320;
	sub_823FD208(ctx, base);
loc_82979320:
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

__attribute__((alias("__imp__sub_82979340"))) PPC_WEAK_FUNC(sub_82979340);
PPC_FUNC_IMPL(__imp__sub_82979340) {
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
	ctx.lr = 0x82979360;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18708
	ctx.r11.s64 = ctx.r11.s64 + -18708;
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

__attribute__((alias("__imp__sub_82979390"))) PPC_WEAK_FUNC(sub_82979390);
PPC_FUNC_IMPL(__imp__sub_82979390) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18708
	ctx.r11.s64 = ctx.r11.s64 + -18708;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x829793B4;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829793dc
	if (ctx.cr0.eq) goto loc_829793DC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829793dc
	if (ctx.cr6.eq) goto loc_829793DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829793DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829793DC:
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

__attribute__((alias("__imp__sub_82979400"))) PPC_WEAK_FUNC(sub_82979400);
PPC_FUNC_IMPL(__imp__sub_82979400) {
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
	// bl 0x82979390
	ctx.lr = 0x82979420;
	sub_82979390(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979430
	if (ctx.cr0.eq) goto loc_82979430;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82979430;
	sub_823FD208(ctx, base);
loc_82979430:
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

__attribute__((alias("__imp__sub_82979450"))) PPC_WEAK_FUNC(sub_82979450);
PPC_FUNC_IMPL(__imp__sub_82979450) {
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
	ctx.lr = 0x82979470;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18656
	ctx.r11.s64 = ctx.r11.s64 + -18656;
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

__attribute__((alias("__imp__sub_829794A0"))) PPC_WEAK_FUNC(sub_829794A0);
PPC_FUNC_IMPL(__imp__sub_829794A0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18656
	ctx.r11.s64 = ctx.r11.s64 + -18656;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x829794C4;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829794ec
	if (ctx.cr0.eq) goto loc_829794EC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829794ec
	if (ctx.cr6.eq) goto loc_829794EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829794EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829794EC:
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

__attribute__((alias("__imp__sub_82979510"))) PPC_WEAK_FUNC(sub_82979510);
PPC_FUNC_IMPL(__imp__sub_82979510) {
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
	// bl 0x829794a0
	ctx.lr = 0x82979530;
	sub_829794A0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979540
	if (ctx.cr0.eq) goto loc_82979540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82979540;
	sub_823FD208(ctx, base);
loc_82979540:
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

__attribute__((alias("__imp__sub_82979560"))) PPC_WEAK_FUNC(sub_82979560);
PPC_FUNC_IMPL(__imp__sub_82979560) {
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
	ctx.lr = 0x82979580;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18604
	ctx.r11.s64 = ctx.r11.s64 + -18604;
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

__attribute__((alias("__imp__sub_829795B0"))) PPC_WEAK_FUNC(sub_829795B0);
PPC_FUNC_IMPL(__imp__sub_829795B0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18604
	ctx.r11.s64 = ctx.r11.s64 + -18604;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x829795D4;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829795fc
	if (ctx.cr0.eq) goto loc_829795FC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829795fc
	if (ctx.cr6.eq) goto loc_829795FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829795FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829795FC:
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

__attribute__((alias("__imp__sub_82979620"))) PPC_WEAK_FUNC(sub_82979620);
PPC_FUNC_IMPL(__imp__sub_82979620) {
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
	// bl 0x829795b0
	ctx.lr = 0x82979640;
	sub_829795B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979650
	if (ctx.cr0.eq) goto loc_82979650;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82979650;
	sub_823FD208(ctx, base);
loc_82979650:
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

__attribute__((alias("__imp__sub_82979670"))) PPC_WEAK_FUNC(sub_82979670);
PPC_FUNC_IMPL(__imp__sub_82979670) {
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
	ctx.lr = 0x82979690;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18552
	ctx.r11.s64 = ctx.r11.s64 + -18552;
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

__attribute__((alias("__imp__sub_829796C0"))) PPC_WEAK_FUNC(sub_829796C0);
PPC_FUNC_IMPL(__imp__sub_829796C0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18552
	ctx.r11.s64 = ctx.r11.s64 + -18552;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x829796E4;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297970c
	if (ctx.cr0.eq) goto loc_8297970C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297970c
	if (ctx.cr6.eq) goto loc_8297970C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297970C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8297970C:
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

__attribute__((alias("__imp__sub_82979730"))) PPC_WEAK_FUNC(sub_82979730);
PPC_FUNC_IMPL(__imp__sub_82979730) {
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
	// bl 0x829796c0
	ctx.lr = 0x82979750;
	sub_829796C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979760
	if (ctx.cr0.eq) goto loc_82979760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82979760;
	sub_823FD208(ctx, base);
loc_82979760:
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

__attribute__((alias("__imp__sub_82979780"))) PPC_WEAK_FUNC(sub_82979780);
PPC_FUNC_IMPL(__imp__sub_82979780) {
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
	ctx.lr = 0x829797A0;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18500
	ctx.r11.s64 = ctx.r11.s64 + -18500;
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

__attribute__((alias("__imp__sub_829797D0"))) PPC_WEAK_FUNC(sub_829797D0);
PPC_FUNC_IMPL(__imp__sub_829797D0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18500
	ctx.r11.s64 = ctx.r11.s64 + -18500;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x829797F4;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297981c
	if (ctx.cr0.eq) goto loc_8297981C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297981c
	if (ctx.cr6.eq) goto loc_8297981C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297981C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8297981C:
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

__attribute__((alias("__imp__sub_82979840"))) PPC_WEAK_FUNC(sub_82979840);
PPC_FUNC_IMPL(__imp__sub_82979840) {
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
	// bl 0x829797d0
	ctx.lr = 0x82979860;
	sub_829797D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979870
	if (ctx.cr0.eq) goto loc_82979870;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82979870;
	sub_823FD208(ctx, base);
loc_82979870:
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

__attribute__((alias("__imp__sub_82979890"))) PPC_WEAK_FUNC(sub_82979890);
PPC_FUNC_IMPL(__imp__sub_82979890) {
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
	ctx.lr = 0x829798B0;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18448
	ctx.r11.s64 = ctx.r11.s64 + -18448;
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

__attribute__((alias("__imp__sub_829798E0"))) PPC_WEAK_FUNC(sub_829798E0);
PPC_FUNC_IMPL(__imp__sub_829798E0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18448
	ctx.r11.s64 = ctx.r11.s64 + -18448;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82979904;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297992c
	if (ctx.cr0.eq) goto loc_8297992C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297992c
	if (ctx.cr6.eq) goto loc_8297992C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297992C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8297992C:
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

__attribute__((alias("__imp__sub_82979950"))) PPC_WEAK_FUNC(sub_82979950);
PPC_FUNC_IMPL(__imp__sub_82979950) {
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
	// bl 0x829798e0
	ctx.lr = 0x82979970;
	sub_829798E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979980
	if (ctx.cr0.eq) goto loc_82979980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82979980;
	sub_823FD208(ctx, base);
loc_82979980:
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

__attribute__((alias("__imp__sub_829799A0"))) PPC_WEAK_FUNC(sub_829799A0);
PPC_FUNC_IMPL(__imp__sub_829799A0) {
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
	ctx.lr = 0x829799C0;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18396
	ctx.r11.s64 = ctx.r11.s64 + -18396;
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

__attribute__((alias("__imp__sub_829799F0"))) PPC_WEAK_FUNC(sub_829799F0);
PPC_FUNC_IMPL(__imp__sub_829799F0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18396
	ctx.r11.s64 = ctx.r11.s64 + -18396;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82979A14;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979a3c
	if (ctx.cr0.eq) goto loc_82979A3C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82979a3c
	if (ctx.cr6.eq) goto loc_82979A3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82979A3C:
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

__attribute__((alias("__imp__sub_82979A60"))) PPC_WEAK_FUNC(sub_82979A60);
PPC_FUNC_IMPL(__imp__sub_82979A60) {
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
	// bl 0x829799f0
	ctx.lr = 0x82979A80;
	sub_829799F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979a90
	if (ctx.cr0.eq) goto loc_82979A90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82979A90;
	sub_823FD208(ctx, base);
loc_82979A90:
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

__attribute__((alias("__imp__sub_82979AB0"))) PPC_WEAK_FUNC(sub_82979AB0);
PPC_FUNC_IMPL(__imp__sub_82979AB0) {
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
	ctx.lr = 0x82979AD0;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18344
	ctx.r11.s64 = ctx.r11.s64 + -18344;
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

__attribute__((alias("__imp__sub_82979B00"))) PPC_WEAK_FUNC(sub_82979B00);
PPC_FUNC_IMPL(__imp__sub_82979B00) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18344
	ctx.r11.s64 = ctx.r11.s64 + -18344;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82979B24;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979b4c
	if (ctx.cr0.eq) goto loc_82979B4C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82979b4c
	if (ctx.cr6.eq) goto loc_82979B4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82979B4C:
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

__attribute__((alias("__imp__sub_82979B70"))) PPC_WEAK_FUNC(sub_82979B70);
PPC_FUNC_IMPL(__imp__sub_82979B70) {
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
	// bl 0x82979b00
	ctx.lr = 0x82979B90;
	sub_82979B00(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979ba0
	if (ctx.cr0.eq) goto loc_82979BA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82979BA0;
	sub_823FD208(ctx, base);
loc_82979BA0:
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

__attribute__((alias("__imp__sub_82979BC0"))) PPC_WEAK_FUNC(sub_82979BC0);
PPC_FUNC_IMPL(__imp__sub_82979BC0) {
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
	ctx.lr = 0x82979BE0;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18292
	ctx.r11.s64 = ctx.r11.s64 + -18292;
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

__attribute__((alias("__imp__sub_82979C10"))) PPC_WEAK_FUNC(sub_82979C10);
PPC_FUNC_IMPL(__imp__sub_82979C10) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18292
	ctx.r11.s64 = ctx.r11.s64 + -18292;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82979C34;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979c5c
	if (ctx.cr0.eq) goto loc_82979C5C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82979c5c
	if (ctx.cr6.eq) goto loc_82979C5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82979C5C:
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

__attribute__((alias("__imp__sub_82979C80"))) PPC_WEAK_FUNC(sub_82979C80);
PPC_FUNC_IMPL(__imp__sub_82979C80) {
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
	// bl 0x82979c10
	ctx.lr = 0x82979CA0;
	sub_82979C10(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979cb0
	if (ctx.cr0.eq) goto loc_82979CB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82979CB0;
	sub_823FD208(ctx, base);
loc_82979CB0:
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

__attribute__((alias("__imp__sub_82979CD0"))) PPC_WEAK_FUNC(sub_82979CD0);
PPC_FUNC_IMPL(__imp__sub_82979CD0) {
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
	ctx.lr = 0x82979CF0;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18240
	ctx.r11.s64 = ctx.r11.s64 + -18240;
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

__attribute__((alias("__imp__sub_82979D20"))) PPC_WEAK_FUNC(sub_82979D20);
PPC_FUNC_IMPL(__imp__sub_82979D20) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18240
	ctx.r11.s64 = ctx.r11.s64 + -18240;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82979D44;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979d6c
	if (ctx.cr0.eq) goto loc_82979D6C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82979d6c
	if (ctx.cr6.eq) goto loc_82979D6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82979D6C:
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

__attribute__((alias("__imp__sub_82979D90"))) PPC_WEAK_FUNC(sub_82979D90);
PPC_FUNC_IMPL(__imp__sub_82979D90) {
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
	// bl 0x82979d20
	ctx.lr = 0x82979DB0;
	sub_82979D20(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979dc0
	if (ctx.cr0.eq) goto loc_82979DC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82979DC0;
	sub_823FD208(ctx, base);
loc_82979DC0:
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

__attribute__((alias("__imp__sub_82979DE0"))) PPC_WEAK_FUNC(sub_82979DE0);
PPC_FUNC_IMPL(__imp__sub_82979DE0) {
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
	ctx.lr = 0x82979E00;
	sub_82E4DE08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18188
	ctx.r11.s64 = ctx.r11.s64 + -18188;
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

__attribute__((alias("__imp__sub_82979E30"))) PPC_WEAK_FUNC(sub_82979E30);
PPC_FUNC_IMPL(__imp__sub_82979E30) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18188
	ctx.r11.s64 = ctx.r11.s64 + -18188;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629a38
	ctx.lr = 0x82979E54;
	sub_82629A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979e7c
	if (ctx.cr0.eq) goto loc_82979E7C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82979e7c
	if (ctx.cr6.eq) goto loc_82979E7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82979E7C:
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

__attribute__((alias("__imp__sub_82979EA0"))) PPC_WEAK_FUNC(sub_82979EA0);
PPC_FUNC_IMPL(__imp__sub_82979EA0) {
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
	// bl 0x82979e30
	ctx.lr = 0x82979EC0;
	sub_82979E30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82979ed0
	if (ctx.cr0.eq) goto loc_82979ED0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x82979ED0;
	sub_823FD208(ctx, base);
loc_82979ED0:
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

__attribute__((alias("__imp__sub_82979EF0"))) PPC_WEAK_FUNC(sub_82979EF0);
PPC_FUNC_IMPL(__imp__sub_82979EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82979EF8;
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
	ctx.lr = 0x82979F0C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82979f38
	if (ctx.cr0.eq) goto loc_82979F38;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19780
	ctx.r10.s64 = ctx.r10.s64 + -19780;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82979f3c
	goto loc_82979F3C;
loc_82979F38:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82979F3C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82979f4c
	if (ctx.cr6.eq) goto loc_82979F4C;
	// bl 0x823e19b0
	ctx.lr = 0x82979F4C;
	sub_823E19B0(ctx, base);
loc_82979F4C:
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

__attribute__((alias("__imp__sub_82979F60"))) PPC_WEAK_FUNC(sub_82979F60);
PPC_FUNC_IMPL(__imp__sub_82979F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82979F68;
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
	ctx.lr = 0x82979F7C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82979fa8
	if (ctx.cr0.eq) goto loc_82979FA8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19728
	ctx.r10.s64 = ctx.r10.s64 + -19728;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82979fac
	goto loc_82979FAC;
loc_82979FA8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82979FAC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82979fbc
	if (ctx.cr6.eq) goto loc_82979FBC;
	// bl 0x823e19b0
	ctx.lr = 0x82979FBC;
	sub_823E19B0(ctx, base);
loc_82979FBC:
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

__attribute__((alias("__imp__sub_82979FD0"))) PPC_WEAK_FUNC(sub_82979FD0);
PPC_FUNC_IMPL(__imp__sub_82979FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x82979FD8;
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
	ctx.lr = 0x82979FEC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a018
	if (ctx.cr0.eq) goto loc_8297A018;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19676
	ctx.r10.s64 = ctx.r10.s64 + -19676;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a01c
	goto loc_8297A01C;
loc_8297A018:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A01C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a02c
	if (ctx.cr6.eq) goto loc_8297A02C;
	// bl 0x823e19b0
	ctx.lr = 0x8297A02C;
	sub_823E19B0(ctx, base);
loc_8297A02C:
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

__attribute__((alias("__imp__sub_8297A040"))) PPC_WEAK_FUNC(sub_8297A040);
PPC_FUNC_IMPL(__imp__sub_8297A040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A048;
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
	ctx.lr = 0x8297A05C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a088
	if (ctx.cr0.eq) goto loc_8297A088;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19624
	ctx.r10.s64 = ctx.r10.s64 + -19624;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a08c
	goto loc_8297A08C;
loc_8297A088:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A08C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a09c
	if (ctx.cr6.eq) goto loc_8297A09C;
	// bl 0x823e19b0
	ctx.lr = 0x8297A09C;
	sub_823E19B0(ctx, base);
loc_8297A09C:
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

__attribute__((alias("__imp__sub_8297A0B0"))) PPC_WEAK_FUNC(sub_8297A0B0);
PPC_FUNC_IMPL(__imp__sub_8297A0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A0B8;
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
	ctx.lr = 0x8297A0CC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a0f8
	if (ctx.cr0.eq) goto loc_8297A0F8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19572
	ctx.r10.s64 = ctx.r10.s64 + -19572;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a0fc
	goto loc_8297A0FC;
loc_8297A0F8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A0FC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a10c
	if (ctx.cr6.eq) goto loc_8297A10C;
	// bl 0x823e19b0
	ctx.lr = 0x8297A10C;
	sub_823E19B0(ctx, base);
loc_8297A10C:
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

__attribute__((alias("__imp__sub_8297A120"))) PPC_WEAK_FUNC(sub_8297A120);
PPC_FUNC_IMPL(__imp__sub_8297A120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A128;
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
	ctx.lr = 0x8297A13C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a168
	if (ctx.cr0.eq) goto loc_8297A168;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19520
	ctx.r10.s64 = ctx.r10.s64 + -19520;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a16c
	goto loc_8297A16C;
loc_8297A168:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A16C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a17c
	if (ctx.cr6.eq) goto loc_8297A17C;
	// bl 0x823e19b0
	ctx.lr = 0x8297A17C;
	sub_823E19B0(ctx, base);
loc_8297A17C:
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

__attribute__((alias("__imp__sub_8297A190"))) PPC_WEAK_FUNC(sub_8297A190);
PPC_FUNC_IMPL(__imp__sub_8297A190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A198;
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
	ctx.lr = 0x8297A1AC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a1d8
	if (ctx.cr0.eq) goto loc_8297A1D8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19468
	ctx.r10.s64 = ctx.r10.s64 + -19468;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a1dc
	goto loc_8297A1DC;
loc_8297A1D8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A1DC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a1ec
	if (ctx.cr6.eq) goto loc_8297A1EC;
	// bl 0x823e19b0
	ctx.lr = 0x8297A1EC;
	sub_823E19B0(ctx, base);
loc_8297A1EC:
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

__attribute__((alias("__imp__sub_8297A200"))) PPC_WEAK_FUNC(sub_8297A200);
PPC_FUNC_IMPL(__imp__sub_8297A200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A208;
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
	ctx.lr = 0x8297A21C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a248
	if (ctx.cr0.eq) goto loc_8297A248;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19416
	ctx.r10.s64 = ctx.r10.s64 + -19416;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a24c
	goto loc_8297A24C;
loc_8297A248:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A24C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a25c
	if (ctx.cr6.eq) goto loc_8297A25C;
	// bl 0x823e19b0
	ctx.lr = 0x8297A25C;
	sub_823E19B0(ctx, base);
loc_8297A25C:
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

__attribute__((alias("__imp__sub_8297A270"))) PPC_WEAK_FUNC(sub_8297A270);
PPC_FUNC_IMPL(__imp__sub_8297A270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A278;
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
	ctx.lr = 0x8297A28C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a2b8
	if (ctx.cr0.eq) goto loc_8297A2B8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19364
	ctx.r10.s64 = ctx.r10.s64 + -19364;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a2bc
	goto loc_8297A2BC;
loc_8297A2B8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A2BC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a2cc
	if (ctx.cr6.eq) goto loc_8297A2CC;
	// bl 0x823e19b0
	ctx.lr = 0x8297A2CC;
	sub_823E19B0(ctx, base);
loc_8297A2CC:
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

__attribute__((alias("__imp__sub_8297A2E0"))) PPC_WEAK_FUNC(sub_8297A2E0);
PPC_FUNC_IMPL(__imp__sub_8297A2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A2E8;
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
	ctx.lr = 0x8297A2FC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a328
	if (ctx.cr0.eq) goto loc_8297A328;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19312
	ctx.r10.s64 = ctx.r10.s64 + -19312;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a32c
	goto loc_8297A32C;
loc_8297A328:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A32C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a33c
	if (ctx.cr6.eq) goto loc_8297A33C;
	// bl 0x823e19b0
	ctx.lr = 0x8297A33C;
	sub_823E19B0(ctx, base);
loc_8297A33C:
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

__attribute__((alias("__imp__sub_8297A350"))) PPC_WEAK_FUNC(sub_8297A350);
PPC_FUNC_IMPL(__imp__sub_8297A350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A358;
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
	ctx.lr = 0x8297A36C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a398
	if (ctx.cr0.eq) goto loc_8297A398;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19260
	ctx.r10.s64 = ctx.r10.s64 + -19260;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a39c
	goto loc_8297A39C;
loc_8297A398:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A39C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a3ac
	if (ctx.cr6.eq) goto loc_8297A3AC;
	// bl 0x823e19b0
	ctx.lr = 0x8297A3AC;
	sub_823E19B0(ctx, base);
loc_8297A3AC:
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

__attribute__((alias("__imp__sub_8297A3C0"))) PPC_WEAK_FUNC(sub_8297A3C0);
PPC_FUNC_IMPL(__imp__sub_8297A3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A3C8;
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
	ctx.lr = 0x8297A3DC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a408
	if (ctx.cr0.eq) goto loc_8297A408;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19208
	ctx.r10.s64 = ctx.r10.s64 + -19208;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a40c
	goto loc_8297A40C;
loc_8297A408:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A40C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a41c
	if (ctx.cr6.eq) goto loc_8297A41C;
	// bl 0x823e19b0
	ctx.lr = 0x8297A41C;
	sub_823E19B0(ctx, base);
loc_8297A41C:
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

__attribute__((alias("__imp__sub_8297A430"))) PPC_WEAK_FUNC(sub_8297A430);
PPC_FUNC_IMPL(__imp__sub_8297A430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A438;
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
	ctx.lr = 0x8297A44C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a478
	if (ctx.cr0.eq) goto loc_8297A478;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19156
	ctx.r10.s64 = ctx.r10.s64 + -19156;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a47c
	goto loc_8297A47C;
loc_8297A478:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A47C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a48c
	if (ctx.cr6.eq) goto loc_8297A48C;
	// bl 0x823e19b0
	ctx.lr = 0x8297A48C;
	sub_823E19B0(ctx, base);
loc_8297A48C:
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

__attribute__((alias("__imp__sub_8297A4A0"))) PPC_WEAK_FUNC(sub_8297A4A0);
PPC_FUNC_IMPL(__imp__sub_8297A4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A4A8;
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
	ctx.lr = 0x8297A4BC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a4e8
	if (ctx.cr0.eq) goto loc_8297A4E8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19104
	ctx.r10.s64 = ctx.r10.s64 + -19104;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a4ec
	goto loc_8297A4EC;
loc_8297A4E8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A4EC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a4fc
	if (ctx.cr6.eq) goto loc_8297A4FC;
	// bl 0x823e19b0
	ctx.lr = 0x8297A4FC;
	sub_823E19B0(ctx, base);
loc_8297A4FC:
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

__attribute__((alias("__imp__sub_8297A510"))) PPC_WEAK_FUNC(sub_8297A510);
PPC_FUNC_IMPL(__imp__sub_8297A510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A518;
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
	ctx.lr = 0x8297A52C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a558
	if (ctx.cr0.eq) goto loc_8297A558;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19052
	ctx.r10.s64 = ctx.r10.s64 + -19052;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a55c
	goto loc_8297A55C;
loc_8297A558:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A55C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a56c
	if (ctx.cr6.eq) goto loc_8297A56C;
	// bl 0x823e19b0
	ctx.lr = 0x8297A56C;
	sub_823E19B0(ctx, base);
loc_8297A56C:
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

__attribute__((alias("__imp__sub_8297A580"))) PPC_WEAK_FUNC(sub_8297A580);
PPC_FUNC_IMPL(__imp__sub_8297A580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A588;
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
	ctx.lr = 0x8297A59C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a5c8
	if (ctx.cr0.eq) goto loc_8297A5C8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19000
	ctx.r10.s64 = ctx.r10.s64 + -19000;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a5cc
	goto loc_8297A5CC;
loc_8297A5C8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A5CC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a5dc
	if (ctx.cr6.eq) goto loc_8297A5DC;
	// bl 0x823e19b0
	ctx.lr = 0x8297A5DC;
	sub_823E19B0(ctx, base);
loc_8297A5DC:
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

__attribute__((alias("__imp__sub_8297A5F0"))) PPC_WEAK_FUNC(sub_8297A5F0);
PPC_FUNC_IMPL(__imp__sub_8297A5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A5F8;
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
	ctx.lr = 0x8297A60C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a638
	if (ctx.cr0.eq) goto loc_8297A638;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18948
	ctx.r10.s64 = ctx.r10.s64 + -18948;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a63c
	goto loc_8297A63C;
loc_8297A638:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A63C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a64c
	if (ctx.cr6.eq) goto loc_8297A64C;
	// bl 0x823e19b0
	ctx.lr = 0x8297A64C;
	sub_823E19B0(ctx, base);
loc_8297A64C:
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

__attribute__((alias("__imp__sub_8297A660"))) PPC_WEAK_FUNC(sub_8297A660);
PPC_FUNC_IMPL(__imp__sub_8297A660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A668;
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
	ctx.lr = 0x8297A67C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a6a8
	if (ctx.cr0.eq) goto loc_8297A6A8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18896
	ctx.r10.s64 = ctx.r10.s64 + -18896;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a6ac
	goto loc_8297A6AC;
loc_8297A6A8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A6AC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a6bc
	if (ctx.cr6.eq) goto loc_8297A6BC;
	// bl 0x823e19b0
	ctx.lr = 0x8297A6BC;
	sub_823E19B0(ctx, base);
loc_8297A6BC:
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

__attribute__((alias("__imp__sub_8297A6D0"))) PPC_WEAK_FUNC(sub_8297A6D0);
PPC_FUNC_IMPL(__imp__sub_8297A6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A6D8;
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
	ctx.lr = 0x8297A6EC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a718
	if (ctx.cr0.eq) goto loc_8297A718;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18844
	ctx.r10.s64 = ctx.r10.s64 + -18844;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a71c
	goto loc_8297A71C;
loc_8297A718:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A71C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a72c
	if (ctx.cr6.eq) goto loc_8297A72C;
	// bl 0x823e19b0
	ctx.lr = 0x8297A72C;
	sub_823E19B0(ctx, base);
loc_8297A72C:
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

__attribute__((alias("__imp__sub_8297A740"))) PPC_WEAK_FUNC(sub_8297A740);
PPC_FUNC_IMPL(__imp__sub_8297A740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A748;
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
	ctx.lr = 0x8297A75C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a788
	if (ctx.cr0.eq) goto loc_8297A788;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18792
	ctx.r10.s64 = ctx.r10.s64 + -18792;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a78c
	goto loc_8297A78C;
loc_8297A788:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A78C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a79c
	if (ctx.cr6.eq) goto loc_8297A79C;
	// bl 0x823e19b0
	ctx.lr = 0x8297A79C;
	sub_823E19B0(ctx, base);
loc_8297A79C:
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

__attribute__((alias("__imp__sub_8297A7B0"))) PPC_WEAK_FUNC(sub_8297A7B0);
PPC_FUNC_IMPL(__imp__sub_8297A7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A7B8;
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
	ctx.lr = 0x8297A7CC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a7f8
	if (ctx.cr0.eq) goto loc_8297A7F8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18740
	ctx.r10.s64 = ctx.r10.s64 + -18740;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a7fc
	goto loc_8297A7FC;
loc_8297A7F8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A7FC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a80c
	if (ctx.cr6.eq) goto loc_8297A80C;
	// bl 0x823e19b0
	ctx.lr = 0x8297A80C;
	sub_823E19B0(ctx, base);
loc_8297A80C:
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

__attribute__((alias("__imp__sub_8297A820"))) PPC_WEAK_FUNC(sub_8297A820);
PPC_FUNC_IMPL(__imp__sub_8297A820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A828;
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
	ctx.lr = 0x8297A83C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a868
	if (ctx.cr0.eq) goto loc_8297A868;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18688
	ctx.r10.s64 = ctx.r10.s64 + -18688;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a86c
	goto loc_8297A86C;
loc_8297A868:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A86C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a87c
	if (ctx.cr6.eq) goto loc_8297A87C;
	// bl 0x823e19b0
	ctx.lr = 0x8297A87C;
	sub_823E19B0(ctx, base);
loc_8297A87C:
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

__attribute__((alias("__imp__sub_8297A890"))) PPC_WEAK_FUNC(sub_8297A890);
PPC_FUNC_IMPL(__imp__sub_8297A890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A898;
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
	ctx.lr = 0x8297A8AC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a8d8
	if (ctx.cr0.eq) goto loc_8297A8D8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18636
	ctx.r10.s64 = ctx.r10.s64 + -18636;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a8dc
	goto loc_8297A8DC;
loc_8297A8D8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A8DC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a8ec
	if (ctx.cr6.eq) goto loc_8297A8EC;
	// bl 0x823e19b0
	ctx.lr = 0x8297A8EC;
	sub_823E19B0(ctx, base);
loc_8297A8EC:
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

__attribute__((alias("__imp__sub_8297A900"))) PPC_WEAK_FUNC(sub_8297A900);
PPC_FUNC_IMPL(__imp__sub_8297A900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A908;
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
	ctx.lr = 0x8297A91C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a948
	if (ctx.cr0.eq) goto loc_8297A948;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18584
	ctx.r10.s64 = ctx.r10.s64 + -18584;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a94c
	goto loc_8297A94C;
loc_8297A948:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A94C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a95c
	if (ctx.cr6.eq) goto loc_8297A95C;
	// bl 0x823e19b0
	ctx.lr = 0x8297A95C;
	sub_823E19B0(ctx, base);
loc_8297A95C:
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

__attribute__((alias("__imp__sub_8297A970"))) PPC_WEAK_FUNC(sub_8297A970);
PPC_FUNC_IMPL(__imp__sub_8297A970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A978;
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
	ctx.lr = 0x8297A98C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297a9b8
	if (ctx.cr0.eq) goto loc_8297A9B8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18532
	ctx.r10.s64 = ctx.r10.s64 + -18532;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297a9bc
	goto loc_8297A9BC;
loc_8297A9B8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297A9BC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297a9cc
	if (ctx.cr6.eq) goto loc_8297A9CC;
	// bl 0x823e19b0
	ctx.lr = 0x8297A9CC;
	sub_823E19B0(ctx, base);
loc_8297A9CC:
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

__attribute__((alias("__imp__sub_8297A9E0"))) PPC_WEAK_FUNC(sub_8297A9E0);
PPC_FUNC_IMPL(__imp__sub_8297A9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297A9E8;
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
	ctx.lr = 0x8297A9FC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297aa28
	if (ctx.cr0.eq) goto loc_8297AA28;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18480
	ctx.r10.s64 = ctx.r10.s64 + -18480;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297aa2c
	goto loc_8297AA2C;
loc_8297AA28:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297AA2C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297aa3c
	if (ctx.cr6.eq) goto loc_8297AA3C;
	// bl 0x823e19b0
	ctx.lr = 0x8297AA3C;
	sub_823E19B0(ctx, base);
loc_8297AA3C:
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

__attribute__((alias("__imp__sub_8297AA50"))) PPC_WEAK_FUNC(sub_8297AA50);
PPC_FUNC_IMPL(__imp__sub_8297AA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297AA58;
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
	ctx.lr = 0x8297AA6C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297aa98
	if (ctx.cr0.eq) goto loc_8297AA98;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18428
	ctx.r10.s64 = ctx.r10.s64 + -18428;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297aa9c
	goto loc_8297AA9C;
loc_8297AA98:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297AA9C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297aaac
	if (ctx.cr6.eq) goto loc_8297AAAC;
	// bl 0x823e19b0
	ctx.lr = 0x8297AAAC;
	sub_823E19B0(ctx, base);
loc_8297AAAC:
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

__attribute__((alias("__imp__sub_8297AAC0"))) PPC_WEAK_FUNC(sub_8297AAC0);
PPC_FUNC_IMPL(__imp__sub_8297AAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297AAC8;
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
	ctx.lr = 0x8297AADC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297ab08
	if (ctx.cr0.eq) goto loc_8297AB08;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18376
	ctx.r10.s64 = ctx.r10.s64 + -18376;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297ab0c
	goto loc_8297AB0C;
loc_8297AB08:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297AB0C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297ab1c
	if (ctx.cr6.eq) goto loc_8297AB1C;
	// bl 0x823e19b0
	ctx.lr = 0x8297AB1C;
	sub_823E19B0(ctx, base);
loc_8297AB1C:
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

__attribute__((alias("__imp__sub_8297AB30"))) PPC_WEAK_FUNC(sub_8297AB30);
PPC_FUNC_IMPL(__imp__sub_8297AB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297AB38;
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
	ctx.lr = 0x8297AB4C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297ab78
	if (ctx.cr0.eq) goto loc_8297AB78;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18324
	ctx.r10.s64 = ctx.r10.s64 + -18324;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297ab7c
	goto loc_8297AB7C;
loc_8297AB78:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297AB7C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297ab8c
	if (ctx.cr6.eq) goto loc_8297AB8C;
	// bl 0x823e19b0
	ctx.lr = 0x8297AB8C;
	sub_823E19B0(ctx, base);
loc_8297AB8C:
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

__attribute__((alias("__imp__sub_8297ABA0"))) PPC_WEAK_FUNC(sub_8297ABA0);
PPC_FUNC_IMPL(__imp__sub_8297ABA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297ABA8;
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
	ctx.lr = 0x8297ABBC;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297abe8
	if (ctx.cr0.eq) goto loc_8297ABE8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18272
	ctx.r10.s64 = ctx.r10.s64 + -18272;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297abec
	goto loc_8297ABEC;
loc_8297ABE8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297ABEC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297abfc
	if (ctx.cr6.eq) goto loc_8297ABFC;
	// bl 0x823e19b0
	ctx.lr = 0x8297ABFC;
	sub_823E19B0(ctx, base);
loc_8297ABFC:
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

__attribute__((alias("__imp__sub_8297AC10"))) PPC_WEAK_FUNC(sub_8297AC10);
PPC_FUNC_IMPL(__imp__sub_8297AC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297AC18;
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
	ctx.lr = 0x8297AC2C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297ac58
	if (ctx.cr0.eq) goto loc_8297AC58;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18220
	ctx.r10.s64 = ctx.r10.s64 + -18220;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297ac5c
	goto loc_8297AC5C;
loc_8297AC58:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297AC5C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297ac6c
	if (ctx.cr6.eq) goto loc_8297AC6C;
	// bl 0x823e19b0
	ctx.lr = 0x8297AC6C;
	sub_823E19B0(ctx, base);
loc_8297AC6C:
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

__attribute__((alias("__imp__sub_8297AC80"))) PPC_WEAK_FUNC(sub_8297AC80);
PPC_FUNC_IMPL(__imp__sub_8297AC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297AC88;
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
	ctx.lr = 0x8297AC9C;
	sub_82C0F6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297acc8
	if (ctx.cr0.eq) goto loc_8297ACC8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18168
	ctx.r10.s64 = ctx.r10.s64 + -18168;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8297accc
	goto loc_8297ACCC;
loc_8297ACC8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8297ACCC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297acdc
	if (ctx.cr6.eq) goto loc_8297ACDC;
	// bl 0x823e19b0
	ctx.lr = 0x8297ACDC;
	sub_823E19B0(ctx, base);
loc_8297ACDC:
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

__attribute__((alias("__imp__sub_8297ACF0"))) PPC_WEAK_FUNC(sub_8297ACF0);
PPC_FUNC_IMPL(__imp__sub_8297ACF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297ACF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-19000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19000);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8297ad3c
	if (!ctx.cr0.eq) goto loc_8297AD3C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-19000(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19000, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8297AD1C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82973918
	ctx.lr = 0x8297AD24;
	sub_82973918(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-18152
	ctx.r4.s64 = ctx.r11.s64 + -18152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8297AD38;
	sub_82E4E838(ctx, base);
	// lwz r11,-19000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19000);
loc_8297AD3C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8297ad68
	if (!ctx.cr0.eq) goto loc_8297AD68;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-19000(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19000, ctx.r11.u32);
	// addi r3,r10,-19008
	ctx.r3.s64 = ctx.r10.s64 + -19008;
	// bl 0x82974f78
	ctx.lr = 0x8297AD58;
	sub_82974F78(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8376
	ctx.r3.s64 = ctx.r11.s64 + 8376;
	// bl 0x82a7e6b0
	ctx.lr = 0x8297AD64;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-19000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19000);
loc_8297AD68:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8297adac
	if (!ctx.cr0.eq) goto loc_8297ADAC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-19000(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19000, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-19024
	ctx.r31.s64 = ctx.r29.s64 + -19024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8297AD8C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19812
	ctx.r11.s64 = ctx.r11.s64 + -19812;
	// stw r11,-19024(r29)
	PPC_STORE_U32(ctx.r29.u32 + -19024, ctx.r11.u32);
	// bl 0x82975978
	ctx.lr = 0x8297ADA0;
	sub_82975978(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8360
	ctx.r3.s64 = ctx.r11.s64 + 8360;
	// bl 0x82a7e6b0
	ctx.lr = 0x8297ADAC;
	sub_82A7E6B0(ctx, base);
loc_8297ADAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297ADB8"))) PPC_WEAK_FUNC(sub_8297ADB8);
PPC_FUNC_IMPL(__imp__sub_8297ADB8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-21228
	ctx.r11.s64 = ctx.r11.s64 + -21228;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8297ADF0;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297ae00
	if (ctx.cr0.eq) goto loc_8297AE00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8297AE00;
	sub_823FD208(ctx, base);
loc_8297AE00:
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

__attribute__((alias("__imp__sub_8297AE20"))) PPC_WEAK_FUNC(sub_8297AE20);
PPC_FUNC_IMPL(__imp__sub_8297AE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297AE28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-18972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18972);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8297ae6c
	if (!ctx.cr0.eq) goto loc_8297AE6C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-18972(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18972, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8297AE4C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82973968
	ctx.lr = 0x8297AE54;
	sub_82973968(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-18132
	ctx.r4.s64 = ctx.r11.s64 + -18132;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8297AE68;
	sub_82E4E838(ctx, base);
	// lwz r11,-18972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18972);
loc_8297AE6C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8297ae98
	if (!ctx.cr0.eq) goto loc_8297AE98;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-18972(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18972, ctx.r11.u32);
	// addi r3,r10,-18980
	ctx.r3.s64 = ctx.r10.s64 + -18980;
	// bl 0x82974fc8
	ctx.lr = 0x8297AE88;
	sub_82974FC8(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8416
	ctx.r3.s64 = ctx.r11.s64 + 8416;
	// bl 0x82a7e6b0
	ctx.lr = 0x8297AE94;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-18972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18972);
loc_8297AE98:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8297aedc
	if (!ctx.cr0.eq) goto loc_8297AEDC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-18972(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18972, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-18996
	ctx.r31.s64 = ctx.r29.s64 + -18996;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8297AEBC;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19760
	ctx.r11.s64 = ctx.r11.s64 + -19760;
	// stw r11,-18996(r29)
	PPC_STORE_U32(ctx.r29.u32 + -18996, ctx.r11.u32);
	// bl 0x829759c0
	ctx.lr = 0x8297AED0;
	sub_829759C0(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8400
	ctx.r3.s64 = ctx.r11.s64 + 8400;
	// bl 0x82a7e6b0
	ctx.lr = 0x8297AEDC;
	sub_82A7E6B0(ctx, base);
loc_8297AEDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297AEE8"))) PPC_WEAK_FUNC(sub_8297AEE8);
PPC_FUNC_IMPL(__imp__sub_8297AEE8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-21136
	ctx.r11.s64 = ctx.r11.s64 + -21136;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8297AF20;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297af30
	if (ctx.cr0.eq) goto loc_8297AF30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8297AF30;
	sub_823FD208(ctx, base);
loc_8297AF30:
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

__attribute__((alias("__imp__sub_8297AF50"))) PPC_WEAK_FUNC(sub_8297AF50);
PPC_FUNC_IMPL(__imp__sub_8297AF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297AF58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-18944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18944);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8297af9c
	if (!ctx.cr0.eq) goto loc_8297AF9C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-18944(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18944, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8297AF7C;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x829739b8
	ctx.lr = 0x8297AF84;
	sub_829739B8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-18116
	ctx.r4.s64 = ctx.r11.s64 + -18116;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8297AF98;
	sub_82E4E838(ctx, base);
	// lwz r11,-18944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18944);
loc_8297AF9C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8297afc8
	if (!ctx.cr0.eq) goto loc_8297AFC8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-18944(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18944, ctx.r11.u32);
	// addi r3,r10,-18952
	ctx.r3.s64 = ctx.r10.s64 + -18952;
	// bl 0x82975018
	ctx.lr = 0x8297AFB8;
	sub_82975018(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8456
	ctx.r3.s64 = ctx.r11.s64 + 8456;
	// bl 0x82a7e6b0
	ctx.lr = 0x8297AFC4;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-18944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18944);
loc_8297AFC8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8297b00c
	if (!ctx.cr0.eq) goto loc_8297B00C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-18944(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18944, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-18968
	ctx.r31.s64 = ctx.r29.s64 + -18968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8297AFEC;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19708
	ctx.r11.s64 = ctx.r11.s64 + -19708;
	// stw r11,-18968(r29)
	PPC_STORE_U32(ctx.r29.u32 + -18968, ctx.r11.u32);
	// bl 0x82975a08
	ctx.lr = 0x8297B000;
	sub_82975A08(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8440
	ctx.r3.s64 = ctx.r11.s64 + 8440;
	// bl 0x82a7e6b0
	ctx.lr = 0x8297B00C;
	sub_82A7E6B0(ctx, base);
loc_8297B00C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297B018"))) PPC_WEAK_FUNC(sub_8297B018);
PPC_FUNC_IMPL(__imp__sub_8297B018) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-21076
	ctx.r11.s64 = ctx.r11.s64 + -21076;
	// addi r10,r10,9348
	ctx.r10.s64 = ctx.r10.s64 + 9348;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825af270
	ctx.lr = 0x8297B050;
	sub_825AF270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297b060
	if (ctx.cr0.eq) goto loc_8297B060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd208
	ctx.lr = 0x8297B060;
	sub_823FD208(ctx, base);
loc_8297B060:
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

__attribute__((alias("__imp__sub_8297B080"))) PPC_WEAK_FUNC(sub_8297B080);
PPC_FUNC_IMPL(__imp__sub_8297B080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7de0c
	ctx.lr = 0x8297B088;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31951
	ctx.r31.s64 = -2093940736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-18916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18916);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8297b0cc
	if (!ctx.cr0.eq) goto loc_8297B0CC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-18916(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18916, ctx.r11.u32);
	// bl 0x82e4e8c0
	ctx.lr = 0x8297B0AC;
	sub_82E4E8C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82973a08
	ctx.lr = 0x8297B0B4;
	sub_82973A08(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-18080
	ctx.r4.s64 = ctx.r11.s64 + -18080;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4e838
	ctx.lr = 0x8297B0C8;
	sub_82E4E838(ctx, base);
	// lwz r11,-18916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18916);
loc_8297B0CC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8297b0f8
	if (!ctx.cr0.eq) goto loc_8297B0F8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// stw r11,-18916(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18916, ctx.r11.u32);
	// addi r3,r10,-18924
	ctx.r3.s64 = ctx.r10.s64 + -18924;
	// bl 0x82975068
	ctx.lr = 0x8297B0E8;
	sub_82975068(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8496
	ctx.r3.s64 = ctx.r11.s64 + 8496;
	// bl 0x82a7e6b0
	ctx.lr = 0x8297B0F4;
	sub_82A7E6B0(ctx, base);
	// lwz r11,-18916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18916);
loc_8297B0F8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8297b13c
	if (!ctx.cr0.eq) goto loc_8297B13C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r29,-31951
	ctx.r29.s64 = -2093940736;
	// stw r11,-18916(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18916, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r29,-18940
	ctx.r31.s64 = ctx.r29.s64 + -18940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4ddb0
	ctx.lr = 0x8297B11C;
	sub_82E4DDB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19656
	ctx.r11.s64 = ctx.r11.s64 + -19656;
	// stw r11,-18940(r29)
	PPC_STORE_U32(ctx.r29.u32 + -18940, ctx.r11.u32);
	// bl 0x82975a50
	ctx.lr = 0x8297B130;
	sub_82975A50(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,8480
	ctx.r3.s64 = ctx.r11.s64 + 8480;
	// bl 0x82a7e6b0
	ctx.lr = 0x8297B13C;
	sub_82A7E6B0(ctx, base);
loc_8297B13C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a7de5c
	__restgprlr_29(ctx, base);
	return;
}

