#pragma once
#include "UVolume.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAkReverbVolume // Size: 0x480
	: public UVolume // Size: 0x440
{
private:
	typedef UAkReverbVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2140); // id32("Class AkAudio.AkReverbVolume")
		return ptr;
	}
	uint8_t boolField440;
	uint8_t UnknownData441[0x7];
	ExternalPtr<struct UAkAuxBus> AuxBus; /* Ofs: 0x448 Size: 0x8 - ObjectProperty AkAudio.AkReverbVolume.AuxBus */
	FString AuxBusName; /* Ofs: 0x450 Size: 0x10 - StrProperty AkAudio.AkReverbVolume.AuxBusName */
	float SendLevel; /* Ofs: 0x460 Size: 0x4 - FloatProperty AkAudio.AkReverbVolume.SendLevel */
	float FadeRate; /* Ofs: 0x464 Size: 0x4 - FloatProperty AkAudio.AkReverbVolume.FadeRate */
	float Priority; /* Ofs: 0x468 Size: 0x4 - FloatProperty AkAudio.AkReverbVolume.Priority */
	uint8_t UnknownData46C[0x4];
	ExternalPtr<struct UAkReverbVolume> NextLowerPriorityAkReverbVolume; /* Ofs: 0x470 Size: 0x8 - ObjectProperty AkAudio.AkReverbVolume.NextLowerPriorityAkReverbVolume */
	uint8_t UnknownData478[0x8];


	inline bool bEnabled()
	{
		return boolField440& 0x1;
	}
	inline bool SetbEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x440, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAuxBus(t_structHelper inst, ExternalPtr<struct UAkAuxBus> value) { inst.WriteOffset(0x448, value); }
	inline bool SetAuxBusName(t_structHelper inst, FString value) { inst.WriteOffset(0x450, value); }
	inline bool SetSendLevel(t_structHelper inst, float value) { inst.WriteOffset(0x460, value); }
	inline bool SetFadeRate(t_structHelper inst, float value) { inst.WriteOffset(0x464, value); }
	inline bool SetPriority(t_structHelper inst, float value) { inst.WriteOffset(0x468, value); }
	inline bool SetNextLowerPriorityAkReverbVolume(t_structHelper inst, ExternalPtr<struct UAkReverbVolume> value) { inst.WriteOffset(0x470, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAkReverbVolume = sizeof(UAkReverbVolume); // 1152
    static_assert(sizeof(UAkReverbVolume) == 0x480, "Size of UAkReverbVolume is not correct.");
	auto constexpr UAkReverbVolume_boolField440_Offset = offsetof(UAkReverbVolume, boolField440);
	static_assert(UAkReverbVolume_boolField440_Offset == 0x440, "UAkReverbVolume::boolField440 offset is not 440");
	auto constexpr UAkReverbVolume_AuxBus_Offset = offsetof(UAkReverbVolume, AuxBus);
	static_assert(UAkReverbVolume_AuxBus_Offset == 0x448, "UAkReverbVolume::AuxBus offset is not 448");
	auto constexpr UAkReverbVolume_AuxBusName_Offset = offsetof(UAkReverbVolume, AuxBusName);
	static_assert(UAkReverbVolume_AuxBusName_Offset == 0x450, "UAkReverbVolume::AuxBusName offset is not 450");
	auto constexpr UAkReverbVolume_SendLevel_Offset = offsetof(UAkReverbVolume, SendLevel);
	static_assert(UAkReverbVolume_SendLevel_Offset == 0x460, "UAkReverbVolume::SendLevel offset is not 460");
	auto constexpr UAkReverbVolume_FadeRate_Offset = offsetof(UAkReverbVolume, FadeRate);
	static_assert(UAkReverbVolume_FadeRate_Offset == 0x464, "UAkReverbVolume::FadeRate offset is not 464");
	auto constexpr UAkReverbVolume_Priority_Offset = offsetof(UAkReverbVolume, Priority);
	static_assert(UAkReverbVolume_Priority_Offset == 0x468, "UAkReverbVolume::Priority offset is not 468");
	auto constexpr UAkReverbVolume_NextLowerPriorityAkReverbVolume_Offset = offsetof(UAkReverbVolume, NextLowerPriorityAkReverbVolume);
	static_assert(UAkReverbVolume_NextLowerPriorityAkReverbVolume_Offset == 0x470, "UAkReverbVolume::NextLowerPriorityAkReverbVolume offset is not 470");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
