#pragma once
#include "UTslStreamer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULODActorStreamer // Size: 0x88
	: public UTslStreamer // Size: 0x50
{
private:
	typedef ULODActorStreamer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1507); // id32("Class TslGame.LODActorStreamer")
		return ptr;
	}
	uint8_t boolField50;
	uint8_t UnknownData51[0x3];
	float PreLoadDistance; /* Ofs: 0x54 Size: 0x4 - FloatProperty TslGame.LODActorStreamer.PreLoadDistance */
	int32_t PerFrameShowCount; /* Ofs: 0x58 Size: 0x4 - IntProperty TslGame.LODActorStreamer.PerFrameShowCount */
	int32_t PerFrameShowCountLimit; /* Ofs: 0x5C Size: 0x4 - IntProperty TslGame.LODActorStreamer.PerFrameShowCountLimit */
	TArray<struct FFloatRange> MinDrawDistanceOverride; /* Ofs: 0x60 Size: 0x10 - ArrayProperty TslGame.LODActorStreamer.MinDrawDistanceOverride */
	uint8_t UnknownData70[0x18];


	inline bool bEnabled()
	{
		return boolField50& 0x1;
	}
	inline bool SetbEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPreLoadDistance(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetPerFrameShowCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x58, value); }
	inline bool SetPerFrameShowCountLimit(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5C, value); }
	inline bool SetMinDrawDistanceOverride(t_structHelper inst, TArray<struct FFloatRange> value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULODActorStreamer = sizeof(ULODActorStreamer); // 136
    static_assert(sizeof(ULODActorStreamer) == 0x88, "Size of ULODActorStreamer is not correct.");
	auto constexpr ULODActorStreamer_boolField50_Offset = offsetof(ULODActorStreamer, boolField50);
	static_assert(ULODActorStreamer_boolField50_Offset == 0x50, "ULODActorStreamer::boolField50 offset is not 50");
	auto constexpr ULODActorStreamer_PreLoadDistance_Offset = offsetof(ULODActorStreamer, PreLoadDistance);
	static_assert(ULODActorStreamer_PreLoadDistance_Offset == 0x54, "ULODActorStreamer::PreLoadDistance offset is not 54");
	auto constexpr ULODActorStreamer_PerFrameShowCount_Offset = offsetof(ULODActorStreamer, PerFrameShowCount);
	static_assert(ULODActorStreamer_PerFrameShowCount_Offset == 0x58, "ULODActorStreamer::PerFrameShowCount offset is not 58");
	auto constexpr ULODActorStreamer_PerFrameShowCountLimit_Offset = offsetof(ULODActorStreamer, PerFrameShowCountLimit);
	static_assert(ULODActorStreamer_PerFrameShowCountLimit_Offset == 0x5c, "ULODActorStreamer::PerFrameShowCountLimit offset is not 5c");
	auto constexpr ULODActorStreamer_MinDrawDistanceOverride_Offset = offsetof(ULODActorStreamer, MinDrawDistanceOverride);
	static_assert(ULODActorStreamer_MinDrawDistanceOverride_Offset == 0x60, "ULODActorStreamer::MinDrawDistanceOverride offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
