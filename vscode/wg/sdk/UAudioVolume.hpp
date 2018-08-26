#pragma once
#include "UVolume.hpp"
#include "FReverbSettings.hpp"
#include "FInteriorSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAudioVolume // Size: 0x490
	: public UVolume // Size: 0x440
{
private:
	typedef UAudioVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1707); // id32("Class Engine.AudioVolume")
		return ptr;
	}
	float Priority; /* Ofs: 0x440 Size: 0x4 - FloatProperty Engine.AudioVolume.Priority */
	uint8_t boolField444;
	uint8_t UnknownData445[0x3];
	FReverbSettings Settings; /* Ofs: 0x448 Size: 0x18 - StructProperty Engine.AudioVolume.Settings */
	FInteriorSettings AmbientZoneSettings; /* Ofs: 0x460 Size: 0x24 - StructProperty Engine.AudioVolume.AmbientZoneSettings */
	uint8_t UnknownData484[0xC];


	inline bool SetPriority(t_structHelper inst, float value) { inst.WriteOffset(0x440, value); }
	inline bool bEnabled()
	{
		return boolField444& 0x1;
	}
	inline bool SetbEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x444, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSettings(t_structHelper inst, FReverbSettings value) { inst.WriteOffset(0x448, value); }
	inline bool SetAmbientZoneSettings(t_structHelper inst, FInteriorSettings value) { inst.WriteOffset(0x460, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAudioVolume = sizeof(UAudioVolume); // 1168
    static_assert(sizeof(UAudioVolume) == 0x490, "Size of UAudioVolume is not correct.");
	auto constexpr UAudioVolume_Priority_Offset = offsetof(UAudioVolume, Priority);
	static_assert(UAudioVolume_Priority_Offset == 0x440, "UAudioVolume::Priority offset is not 440");
	auto constexpr UAudioVolume_boolField444_Offset = offsetof(UAudioVolume, boolField444);
	static_assert(UAudioVolume_boolField444_Offset == 0x444, "UAudioVolume::boolField444 offset is not 444");
	auto constexpr UAudioVolume_Settings_Offset = offsetof(UAudioVolume, Settings);
	static_assert(UAudioVolume_Settings_Offset == 0x448, "UAudioVolume::Settings offset is not 448");
	auto constexpr UAudioVolume_AmbientZoneSettings_Offset = offsetof(UAudioVolume, AmbientZoneSettings);
	static_assert(UAudioVolume_AmbientZoneSettings_Offset == 0x460, "UAudioVolume::AmbientZoneSettings offset is not 460");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
