#pragma once
#include "UAudioComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAudioCurveSourceComponent // Size: 0x7A0
	: public UAudioComponent // Size: 0x760
{
private:
	typedef UAudioCurveSourceComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2168); // id32("Class FacialAnimation.AudioCurveSourceComponent")
		return ptr;
	}
	uint8_t UnknownData760[0x8];
	FName CurveSourceBindingName; /* Ofs: 0x768 Size: 0x8 - NameProperty FacialAnimation.AudioCurveSourceComponent.CurveSourceBindingName */
	float CurveSyncOffset; /* Ofs: 0x770 Size: 0x4 - FloatProperty FacialAnimation.AudioCurveSourceComponent.CurveSyncOffset */
	uint8_t UnknownData774[0x2C];


	inline bool SetCurveSourceBindingName(t_structHelper inst, FName value) { inst.WriteOffset(0x768, value); }
	inline bool SetCurveSyncOffset(t_structHelper inst, float value) { inst.WriteOffset(0x770, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAudioCurveSourceComponent = sizeof(UAudioCurveSourceComponent); // 1952
    static_assert(sizeof(UAudioCurveSourceComponent) == 0x7A0, "Size of UAudioCurveSourceComponent is not correct.");
	auto constexpr UAudioCurveSourceComponent_CurveSourceBindingName_Offset = offsetof(UAudioCurveSourceComponent, CurveSourceBindingName);
	static_assert(UAudioCurveSourceComponent_CurveSourceBindingName_Offset == 0x768, "UAudioCurveSourceComponent::CurveSourceBindingName offset is not 768");
	auto constexpr UAudioCurveSourceComponent_CurveSyncOffset_Offset = offsetof(UAudioCurveSourceComponent, CurveSyncOffset);
	static_assert(UAudioCurveSourceComponent_CurveSyncOffset_Offset == 0x770, "UAudioCurveSourceComponent::CurveSyncOffset offset is not 770");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
