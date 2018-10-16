#pragma once
#include "UBTTask_BlackboardBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_MoveTo // Size: 0xB8
	: public UBTTask_BlackboardBase // Size: 0xA0
{
private:
	typedef UBTTask_MoveTo t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(596); // id32("Class AIModule.BTTask_MoveTo")
		return ptr;
	}
	float AcceptableRadius; /* Ofs: 0xA0 Size: 0x4 - FloatProperty AIModule.BTTask_MoveTo.AcceptableRadius */
	uint8_t UnknownDataA4[0x4];
	ExternalPtr<struct UClass> FilterClass; /* Ofs: 0xA8 Size: 0x8 - ClassProperty AIModule.BTTask_MoveTo.FilterClass */
	float ObservedBlackboardValueTolerance; /* Ofs: 0xB0 Size: 0x4 - FloatProperty AIModule.BTTask_MoveTo.ObservedBlackboardValueTolerance */
	uint8_t boolFieldB4;
	uint8_t UnknownDataB5[0x3];


	inline bool SetAcceptableRadius(t_structHelper inst, float value) { inst.WriteOffset(0xA0, value); }
	inline bool SetFilterClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xA8, value); }
	inline bool SetObservedBlackboardValueTolerance(t_structHelper inst, float value) { inst.WriteOffset(0xB0, value); }
	inline bool bObserveBlackboardValue()
	{
		return boolFieldB4& 0x1;
	}
	inline bool SetbObserveBlackboardValue(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAllowStrafe()
	{
		return boolFieldB4& 0x2;
	}
	inline bool SetbAllowStrafe(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bAllowPartialPath()
	{
		return boolFieldB4& 0x4;
	}
	inline bool SetbAllowPartialPath(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bTrackMovingGoal()
	{
		return boolFieldB4& 0x8;
	}
	inline bool SetbTrackMovingGoal(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bProjectGoalLocation()
	{
		return boolFieldB4& 0x10;
	}
	inline bool SetbProjectGoalLocation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bStopOnOverlap()
	{
		return boolFieldB4& 0x20;
	}
	inline bool SetbStopOnOverlap(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_MoveTo = sizeof(UBTTask_MoveTo); // 184
    static_assert(sizeof(UBTTask_MoveTo) == 0xB8, "Size of UBTTask_MoveTo is not correct.");
	auto constexpr UBTTask_MoveTo_AcceptableRadius_Offset = offsetof(UBTTask_MoveTo, AcceptableRadius);
	static_assert(UBTTask_MoveTo_AcceptableRadius_Offset == 0xa0, "UBTTask_MoveTo::AcceptableRadius offset is not a0");
	auto constexpr UBTTask_MoveTo_FilterClass_Offset = offsetof(UBTTask_MoveTo, FilterClass);
	static_assert(UBTTask_MoveTo_FilterClass_Offset == 0xa8, "UBTTask_MoveTo::FilterClass offset is not a8");
	auto constexpr UBTTask_MoveTo_ObservedBlackboardValueTolerance_Offset = offsetof(UBTTask_MoveTo, ObservedBlackboardValueTolerance);
	static_assert(UBTTask_MoveTo_ObservedBlackboardValueTolerance_Offset == 0xb0, "UBTTask_MoveTo::ObservedBlackboardValueTolerance offset is not b0");
	auto constexpr UBTTask_MoveTo_boolFieldB4_Offset = offsetof(UBTTask_MoveTo, boolFieldB4);
	static_assert(UBTTask_MoveTo_boolFieldB4_Offset == 0xb4, "UBTTask_MoveTo::boolFieldB4 offset is not b4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
