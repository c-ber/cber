#pragma once
#include "UInterpTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackVisibility // Size: 0x90
	: public UInterpTrack // Size: 0x78
{
private:
	typedef UInterpTrackVisibility t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(821); // id32("Class Engine.InterpTrackVisibility")
		return ptr;
	}
	TArray<struct FVisibilityTrackKey> VisibilityTrack; /* Ofs: 0x78 Size: 0x10 - ArrayProperty Engine.InterpTrackVisibility.VisibilityTrack */
	uint8_t boolField88;
	uint8_t UnknownData89[0x7];


	inline bool SetVisibilityTrack(t_structHelper inst, TArray<struct FVisibilityTrackKey> value) { inst.WriteOffset(0x78, value); }
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
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackVisibility = sizeof(UInterpTrackVisibility); // 144
    static_assert(sizeof(UInterpTrackVisibility) == 0x90, "Size of UInterpTrackVisibility is not correct.");
	auto constexpr UInterpTrackVisibility_VisibilityTrack_Offset = offsetof(UInterpTrackVisibility, VisibilityTrack);
	static_assert(UInterpTrackVisibility_VisibilityTrack_Offset == 0x78, "UInterpTrackVisibility::VisibilityTrack offset is not 78");
	auto constexpr UInterpTrackVisibility_boolField88_Offset = offsetof(UInterpTrackVisibility, boolField88);
	static_assert(UInterpTrackVisibility_boolField88_Offset == 0x88, "UInterpTrackVisibility::boolField88 offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
