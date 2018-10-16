#pragma once
#include "USceneComponent.hpp"
#include "FForceFeedbackAttenuationSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UForceFeedbackComponent // Size: 0x570
	: public USceneComponent // Size: 0x490
{
private:
	typedef UForceFeedbackComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(185); // id32("Class Engine.ForceFeedbackComponent")
		return ptr;
	}
	ExternalPtr<struct UForceFeedbackEffect> ForceFeedbackEffect; /* Ofs: 0x490 Size: 0x8 - ObjectProperty Engine.ForceFeedbackComponent.ForceFeedbackEffect */
	uint8_t boolField498;
	uint8_t UnknownData499[0x3];
	float IntensityMultiplier; /* Ofs: 0x49C Size: 0x4 - FloatProperty Engine.ForceFeedbackComponent.IntensityMultiplier */
	ExternalPtr<struct UForceFeedbackAttenuation> AttenuationSettings; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty Engine.ForceFeedbackComponent.AttenuationSettings */
	FForceFeedbackAttenuationSettings AttenuationOverrides; /* Ofs: 0x4A8 Size: 0xA8 - StructProperty Engine.ForceFeedbackComponent.AttenuationOverrides */
	FScriptMulticastDelegate OnForceFeedbackFinished; /* Ofs: 0x550 Size: 0x10 - MulticastDelegateProperty Engine.ForceFeedbackComponent.OnForceFeedbackFinished */
	uint8_t UnknownData560[0x10];


	inline bool SetForceFeedbackEffect(t_structHelper inst, ExternalPtr<struct UForceFeedbackEffect> value) { inst.WriteOffset(0x490, value); }
	inline bool bAutoDestroy()
	{
		return boolField498& 0x1;
	}
	inline bool SetbAutoDestroy(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x498, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bStopWhenOwnerDestroyed()
	{
		return boolField498& 0x2;
	}
	inline bool SetbStopWhenOwnerDestroyed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x498, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bLooping()
	{
		return boolField498& 0x4;
	}
	inline bool SetbLooping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x498, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bOverrideAttenuation()
	{
		return boolField498& 0x8;
	}
	inline bool SetbOverrideAttenuation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x498, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetIntensityMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x49C, value); }
	inline bool SetAttenuationSettings(t_structHelper inst, ExternalPtr<struct UForceFeedbackAttenuation> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetAttenuationOverrides(t_structHelper inst, FForceFeedbackAttenuationSettings value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetOnForceFeedbackFinished(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x550, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUForceFeedbackComponent = sizeof(UForceFeedbackComponent); // 1392
    static_assert(sizeof(UForceFeedbackComponent) == 0x570, "Size of UForceFeedbackComponent is not correct.");
	auto constexpr UForceFeedbackComponent_ForceFeedbackEffect_Offset = offsetof(UForceFeedbackComponent, ForceFeedbackEffect);
	static_assert(UForceFeedbackComponent_ForceFeedbackEffect_Offset == 0x490, "UForceFeedbackComponent::ForceFeedbackEffect offset is not 490");
	auto constexpr UForceFeedbackComponent_boolField498_Offset = offsetof(UForceFeedbackComponent, boolField498);
	static_assert(UForceFeedbackComponent_boolField498_Offset == 0x498, "UForceFeedbackComponent::boolField498 offset is not 498");
	auto constexpr UForceFeedbackComponent_IntensityMultiplier_Offset = offsetof(UForceFeedbackComponent, IntensityMultiplier);
	static_assert(UForceFeedbackComponent_IntensityMultiplier_Offset == 0x49c, "UForceFeedbackComponent::IntensityMultiplier offset is not 49c");
	auto constexpr UForceFeedbackComponent_AttenuationSettings_Offset = offsetof(UForceFeedbackComponent, AttenuationSettings);
	static_assert(UForceFeedbackComponent_AttenuationSettings_Offset == 0x4a0, "UForceFeedbackComponent::AttenuationSettings offset is not 4a0");
	auto constexpr UForceFeedbackComponent_AttenuationOverrides_Offset = offsetof(UForceFeedbackComponent, AttenuationOverrides);
	static_assert(UForceFeedbackComponent_AttenuationOverrides_Offset == 0x4a8, "UForceFeedbackComponent::AttenuationOverrides offset is not 4a8");
	auto constexpr UForceFeedbackComponent_OnForceFeedbackFinished_Offset = offsetof(UForceFeedbackComponent, OnForceFeedbackFinished);
	static_assert(UForceFeedbackComponent_OnForceFeedbackFinished_Offset == 0x550, "UForceFeedbackComponent::OnForceFeedbackFinished offset is not 550");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
