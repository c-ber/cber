#pragma once
#include "UDataAsset.hpp"
#include "ELandingSoundSwitchState.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslWheelSuspensionAudioData // Size: 0x88
	: public UDataAsset // Size: 0x38
{
private:
	typedef UTslWheelSuspensionAudioData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1827); // id32("Class TslGame.TslWheelSuspensionAudioData")
		return ptr;
	}
	TMap<ELandingSoundSwitchState, float> LandingSoundSwitchesPerHorVelocity; /* Ofs: 0x38 Size: 0x50 - MapProperty TslGame.TslWheelSuspensionAudioData.LandingSoundSwitchesPerHorVelocity */


	inline bool SetLandingSoundSwitchesPerHorVelocity(t_structHelper inst, TMap<ELandingSoundSwitchState, float> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslWheelSuspensionAudioData = sizeof(UTslWheelSuspensionAudioData); // 136
    static_assert(sizeof(UTslWheelSuspensionAudioData) == 0x88, "Size of UTslWheelSuspensionAudioData is not correct.");
	auto constexpr UTslWheelSuspensionAudioData_LandingSoundSwitchesPerHorVelocity_Offset = offsetof(UTslWheelSuspensionAudioData, LandingSoundSwitchesPerHorVelocity);
	static_assert(UTslWheelSuspensionAudioData_LandingSoundSwitchesPerHorVelocity_Offset == 0x38, "UTslWheelSuspensionAudioData::LandingSoundSwitchesPerHorVelocity offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
