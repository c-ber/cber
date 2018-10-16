#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPawnAction // Size: 0xD0
	: public UObject // Size: 0x30
{
private:
	typedef UPawnAction t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(659); // id32("Class AIModule.PawnAction")
		return ptr;
	}
	ExternalPtr<struct UPawnAction> ChildAction; /* Ofs: 0x30 Size: 0x8 - ObjectProperty AIModule.PawnAction.ChildAction */
	ExternalPtr<struct UPawnAction> ParentAction; /* Ofs: 0x38 Size: 0x8 - ObjectProperty AIModule.PawnAction.ParentAction */
	ExternalPtr<struct UPawnActionsComponent> OwnerComponent; /* Ofs: 0x40 Size: 0x8 - ObjectProperty AIModule.PawnAction.OwnerComponent */
	ExternalPtr<struct UObject> Instigator; /* Ofs: 0x48 Size: 0x8 - ObjectProperty AIModule.PawnAction.Instigator */
	ExternalPtr<struct UBrainComponent> BrainComp; /* Ofs: 0x50 Size: 0x8 - ObjectProperty AIModule.PawnAction.BrainComp */
	uint8_t UnknownData58[0x60];
	uint8_t boolFieldB8;
	uint8_t UnknownDataB9[0x17];


	inline bool SetChildAction(t_structHelper inst, ExternalPtr<struct UPawnAction> value) { inst.WriteOffset(0x30, value); }
	inline bool SetParentAction(t_structHelper inst, ExternalPtr<struct UPawnAction> value) { inst.WriteOffset(0x38, value); }
	inline bool SetOwnerComponent(t_structHelper inst, ExternalPtr<struct UPawnActionsComponent> value) { inst.WriteOffset(0x40, value); }
	inline bool SetInstigator(t_structHelper inst, ExternalPtr<struct UObject> value) { inst.WriteOffset(0x48, value); }
	inline bool SetBrainComp(t_structHelper inst, ExternalPtr<struct UBrainComponent> value) { inst.WriteOffset(0x50, value); }
	inline bool bAllowNewSameClassInstance()
	{
		return boolFieldB8& 0x1;
	}
	inline bool SetbAllowNewSameClassInstance(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bReplaceActiveSameClassInstance()
	{
		return boolFieldB8& 0x2;
	}
	inline bool SetbReplaceActiveSameClassInstance(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bShouldPauseMovement()
	{
		return boolFieldB8& 0x4;
	}
	inline bool SetbShouldPauseMovement(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bAlwaysNotifyOnFinished()
	{
		return boolFieldB8& 0x8;
	}
	inline bool SetbAlwaysNotifyOnFinished(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB8, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPawnAction = sizeof(UPawnAction); // 208
    static_assert(sizeof(UPawnAction) == 0xD0, "Size of UPawnAction is not correct.");
	auto constexpr UPawnAction_ChildAction_Offset = offsetof(UPawnAction, ChildAction);
	static_assert(UPawnAction_ChildAction_Offset == 0x30, "UPawnAction::ChildAction offset is not 30");
	auto constexpr UPawnAction_ParentAction_Offset = offsetof(UPawnAction, ParentAction);
	static_assert(UPawnAction_ParentAction_Offset == 0x38, "UPawnAction::ParentAction offset is not 38");
	auto constexpr UPawnAction_OwnerComponent_Offset = offsetof(UPawnAction, OwnerComponent);
	static_assert(UPawnAction_OwnerComponent_Offset == 0x40, "UPawnAction::OwnerComponent offset is not 40");
	auto constexpr UPawnAction_Instigator_Offset = offsetof(UPawnAction, Instigator);
	static_assert(UPawnAction_Instigator_Offset == 0x48, "UPawnAction::Instigator offset is not 48");
	auto constexpr UPawnAction_BrainComp_Offset = offsetof(UPawnAction, BrainComp);
	static_assert(UPawnAction_BrainComp_Offset == 0x50, "UPawnAction::BrainComp offset is not 50");
	auto constexpr UPawnAction_boolFieldB8_Offset = offsetof(UPawnAction, boolFieldB8);
	static_assert(UPawnAction_boolFieldB8_Offset == 0xb8, "UPawnAction::boolFieldB8 offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
