#pragma once
#include "UVolume.hpp"
#include "EStreamingVolumeUsage.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelStreamingVolume // Size: 0x460
	: public UVolume // Size: 0x440
{
private:
	typedef ULevelStreamingVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1711); // id32("Class Engine.LevelStreamingVolume")
		return ptr;
	}
	TArray<struct FName> StreamingLevelNames; /* Ofs: 0x440 Size: 0x10 - ArrayProperty Engine.LevelStreamingVolume.StreamingLevelNames */
	uint8_t boolField450;
	uint8_t UnknownData451[0x3];
	TEnumAsByte<enum EStreamingVolumeUsage> StreamingUsage; /* Ofs: 0x454 Size: 0x1 - ByteProperty Engine.LevelStreamingVolume.StreamingUsage */
	uint8_t UnknownData455[0xB];


	inline bool SetStreamingLevelNames(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x440, value); }
	inline bool bEditorPreVisOnly()
	{
		return boolField450& 0x1;
	}
	inline bool SetbEditorPreVisOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x450, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDisabled()
	{
		return boolField450& 0x2;
	}
	inline bool SetbDisabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x450, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetStreamingUsage(t_structHelper inst, TEnumAsByte<enum EStreamingVolumeUsage> value) { inst.WriteOffset(0x454, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelStreamingVolume = sizeof(ULevelStreamingVolume); // 1120
    static_assert(sizeof(ULevelStreamingVolume) == 0x460, "Size of ULevelStreamingVolume is not correct.");
	auto constexpr ULevelStreamingVolume_StreamingLevelNames_Offset = offsetof(ULevelStreamingVolume, StreamingLevelNames);
	static_assert(ULevelStreamingVolume_StreamingLevelNames_Offset == 0x440, "ULevelStreamingVolume::StreamingLevelNames offset is not 440");
	auto constexpr ULevelStreamingVolume_boolField450_Offset = offsetof(ULevelStreamingVolume, boolField450);
	static_assert(ULevelStreamingVolume_boolField450_Offset == 0x450, "ULevelStreamingVolume::boolField450 offset is not 450");
	auto constexpr ULevelStreamingVolume_StreamingUsage_Offset = offsetof(ULevelStreamingVolume, StreamingUsage);
	static_assert(ULevelStreamingVolume_StreamingUsage_Offset == 0x454, "ULevelStreamingVolume::StreamingUsage offset is not 454");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
