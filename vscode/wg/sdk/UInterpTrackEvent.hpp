#pragma once
#include "UInterpTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackEvent // Size: 0x90
	: public UInterpTrack // Size: 0x78
{
private:
	typedef UInterpTrackEvent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(799); // id32("Class Engine.InterpTrackEvent")
		return ptr;
	}
	TArray<struct FEventTrackKey> EventTrack; /* Ofs: 0x78 Size: 0x10 - ArrayProperty Engine.InterpTrackEvent.EventTrack */
	uint8_t boolField88;
	uint8_t UnknownData89[0x7];


	inline bool SetEventTrack(t_structHelper inst, TArray<struct FEventTrackKey> value) { inst.WriteOffset(0x78, value); }
	inline bool bFireEventsWhenForwards()
	{
		return boolField88& 0x1;
	}
	inline bool SetbFireEventsWhenForwards(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bFireEventsWhenBackwards()
	{
		return boolField88& 0x2;
	}
	inline bool SetbFireEventsWhenBackwards(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bFireEventsWhenJumpingForwards()
	{
		return boolField88& 0x4;
	}
	inline bool SetbFireEventsWhenJumpingForwards(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bUseCustomEventName()
	{
		return boolField88& 0x8;
	}
	inline bool SetbUseCustomEventName(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackEvent = sizeof(UInterpTrackEvent); // 144
    static_assert(sizeof(UInterpTrackEvent) == 0x90, "Size of UInterpTrackEvent is not correct.");
	auto constexpr UInterpTrackEvent_EventTrack_Offset = offsetof(UInterpTrackEvent, EventTrack);
	static_assert(UInterpTrackEvent_EventTrack_Offset == 0x78, "UInterpTrackEvent::EventTrack offset is not 78");
	auto constexpr UInterpTrackEvent_boolField88_Offset = offsetof(UInterpTrackEvent, boolField88);
	static_assert(UInterpTrackEvent_boolField88_Offset == 0x88, "UInterpTrackEvent::boolField88 offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
