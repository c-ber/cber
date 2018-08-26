#pragma once
#include "UInterpTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackToggle // Size: 0x90
	: public UInterpTrack // Size: 0x78
{
private:
	typedef UInterpTrackToggle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(813); // id32("Class Engine.InterpTrackToggle")
		return ptr;
	}
	TArray<struct FToggleTrackKey> ToggleTrack; /* Ofs: 0x78 Size: 0x10 - ArrayProperty Engine.InterpTrackToggle.ToggleTrack */
	uint8_t boolField88;
	uint8_t UnknownData89[0x7];


	inline bool SetToggleTrack(t_structHelper inst, TArray<struct FToggleTrackKey> value) { inst.WriteOffset(0x78, value); }
	inline bool bActivateSystemEachUpdate()
	{
		return boolField88& 0x1;
	}
	inline bool SetbActivateSystemEachUpdate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bActivateWithJustAttachedFlag()
	{
		return boolField88& 0x2;
	}
	inline bool SetbActivateWithJustAttachedFlag(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bFireEventsWhenForwards()
	{
		return boolField88& 0x4;
	}
	inline bool SetbFireEventsWhenForwards(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bFireEventsWhenBackwards()
	{
		return boolField88& 0x8;
	}
	inline bool SetbFireEventsWhenBackwards(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bFireEventsWhenJumpingForwards()
	{
		return boolField88& 0x10;
	}
	inline bool SetbFireEventsWhenJumpingForwards(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackToggle = sizeof(UInterpTrackToggle); // 144
    static_assert(sizeof(UInterpTrackToggle) == 0x90, "Size of UInterpTrackToggle is not correct.");
	auto constexpr UInterpTrackToggle_ToggleTrack_Offset = offsetof(UInterpTrackToggle, ToggleTrack);
	static_assert(UInterpTrackToggle_ToggleTrack_Offset == 0x78, "UInterpTrackToggle::ToggleTrack offset is not 78");
	auto constexpr UInterpTrackToggle_boolField88_Offset = offsetof(UInterpTrackToggle, boolField88);
	static_assert(UInterpTrackToggle_boolField88_Offset == 0x88, "UInterpTrackToggle::boolField88 offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
