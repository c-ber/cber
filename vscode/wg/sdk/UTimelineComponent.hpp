#pragma once
#include "UActorComponent.hpp"
#include "FTimeline.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTimelineComponent // Size: 0x2E0
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTimelineComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(244); // id32("Class Engine.TimelineComponent")
		return ptr;
	}
	FTimeline TheTimeline; /* Ofs: 0x1F0 Size: 0xE0 - StructProperty Engine.TimelineComponent.TheTimeline */
	uint8_t boolField2D0;
	uint8_t UnknownData2D1[0xF];


	inline bool SetTheTimeline(t_structHelper inst, FTimeline value) { inst.WriteOffset(0x1F0, value); }
	inline bool bIgnoreTimeDilation()
	{
		return boolField2D0& 0x1;
	}
	inline bool SetbIgnoreTimeDilation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2D0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTimelineComponent = sizeof(UTimelineComponent); // 736
    static_assert(sizeof(UTimelineComponent) == 0x2E0, "Size of UTimelineComponent is not correct.");
	auto constexpr UTimelineComponent_TheTimeline_Offset = offsetof(UTimelineComponent, TheTimeline);
	static_assert(UTimelineComponent_TheTimeline_Offset == 0x1f0, "UTimelineComponent::TheTimeline offset is not 1f0");
	auto constexpr UTimelineComponent_boolField2D0_Offset = offsetof(UTimelineComponent, boolField2D0);
	static_assert(UTimelineComponent_boolField2D0_Offset == 0x2d0, "UTimelineComponent::boolField2D0 offset is not 2d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
