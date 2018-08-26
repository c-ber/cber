#pragma once
#include "UPawnAction.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPawnAction_Move // Size: 0x120
	: public UPawnAction // Size: 0xD0
{
private:
	typedef UPawnAction_Move t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(661); // id32("Class AIModule.PawnAction_Move")
		return ptr;
	}
	ExternalPtr<struct UActor> GoalActor; /* Ofs: 0xD0 Size: 0x8 - ObjectProperty AIModule.PawnAction_Move.GoalActor */
	FVector GoalLocation; /* Ofs: 0xD8 Size: 0xC - StructProperty AIModule.PawnAction_Move.GoalLocation */
	float AcceptableRadius; /* Ofs: 0xE4 Size: 0x4 - FloatProperty AIModule.PawnAction_Move.AcceptableRadius */
	ExternalPtr<struct UClass> FilterClass; /* Ofs: 0xE8 Size: 0x8 - ClassProperty AIModule.PawnAction_Move.FilterClass */
	uint8_t boolFieldF0;
	uint8_t UnknownDataF1[0x2F];


	inline bool SetGoalActor(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0xD0, value); }
	inline bool SetGoalLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0xD8, value); }
	inline bool SetAcceptableRadius(t_structHelper inst, float value) { inst.WriteOffset(0xE4, value); }
	inline bool SetFilterClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xE8, value); }
	inline bool bAllowStrafe()
	{
		return boolFieldF0& 0x1;
	}
	inline bool SetbAllowStrafe(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bFinishOnOverlap()
	{
		return boolFieldF0& 0x2;
	}
	inline bool SetbFinishOnOverlap(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bUsePathfinding()
	{
		return boolFieldF0& 0x4;
	}
	inline bool SetbUsePathfinding(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bAllowPartialPath()
	{
		return boolFieldF0& 0x8;
	}
	inline bool SetbAllowPartialPath(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bProjectGoalToNavigation()
	{
		return boolFieldF0& 0x10;
	}
	inline bool SetbProjectGoalToNavigation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bUpdatePathToGoal()
	{
		return boolFieldF0& 0x20;
	}
	inline bool SetbUpdatePathToGoal(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bAbortChildActionOnPathChange()
	{
		return boolFieldF0& 0x40;
	}
	inline bool SetbAbortChildActionOnPathChange(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPawnAction_Move = sizeof(UPawnAction_Move); // 288
    static_assert(sizeof(UPawnAction_Move) == 0x120, "Size of UPawnAction_Move is not correct.");
	auto constexpr UPawnAction_Move_GoalActor_Offset = offsetof(UPawnAction_Move, GoalActor);
	static_assert(UPawnAction_Move_GoalActor_Offset == 0xd0, "UPawnAction_Move::GoalActor offset is not d0");
	auto constexpr UPawnAction_Move_GoalLocation_Offset = offsetof(UPawnAction_Move, GoalLocation);
	static_assert(UPawnAction_Move_GoalLocation_Offset == 0xd8, "UPawnAction_Move::GoalLocation offset is not d8");
	auto constexpr UPawnAction_Move_AcceptableRadius_Offset = offsetof(UPawnAction_Move, AcceptableRadius);
	static_assert(UPawnAction_Move_AcceptableRadius_Offset == 0xe4, "UPawnAction_Move::AcceptableRadius offset is not e4");
	auto constexpr UPawnAction_Move_FilterClass_Offset = offsetof(UPawnAction_Move, FilterClass);
	static_assert(UPawnAction_Move_FilterClass_Offset == 0xe8, "UPawnAction_Move::FilterClass offset is not e8");
	auto constexpr UPawnAction_Move_boolFieldF0_Offset = offsetof(UPawnAction_Move, boolFieldF0);
	static_assert(UPawnAction_Move_boolFieldF0_Offset == 0xf0, "UPawnAction_Move::boolFieldF0 offset is not f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
