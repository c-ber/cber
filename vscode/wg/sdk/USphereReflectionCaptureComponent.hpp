#pragma once
#include "UReflectionCaptureComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USphereReflectionCaptureComponent // Size: 0x530
	: public UReflectionCaptureComponent // Size: 0x520
{
private:
	typedef USphereReflectionCaptureComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(233); // id32("Class Engine.SphereReflectionCaptureComponent")
		return ptr;
	}
	float InfluenceRadius; /* Ofs: 0x520 Size: 0x4 - FloatProperty Engine.SphereReflectionCaptureComponent.InfluenceRadius */
	float CaptureDistanceScale; /* Ofs: 0x524 Size: 0x4 - FloatProperty Engine.SphereReflectionCaptureComponent.CaptureDistanceScale */
	ExternalPtr<struct UDrawSphereComponent> PreviewInfluenceRadius; /* Ofs: 0x528 Size: 0x8 - ObjectProperty Engine.SphereReflectionCaptureComponent.PreviewInfluenceRadius */


	inline bool SetInfluenceRadius(t_structHelper inst, float value) { inst.WriteOffset(0x520, value); }
	inline bool SetCaptureDistanceScale(t_structHelper inst, float value) { inst.WriteOffset(0x524, value); }
	inline bool SetPreviewInfluenceRadius(t_structHelper inst, ExternalPtr<struct UDrawSphereComponent> value) { inst.WriteOffset(0x528, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSphereReflectionCaptureComponent = sizeof(USphereReflectionCaptureComponent); // 1328
    static_assert(sizeof(USphereReflectionCaptureComponent) == 0x530, "Size of USphereReflectionCaptureComponent is not correct.");
	auto constexpr USphereReflectionCaptureComponent_InfluenceRadius_Offset = offsetof(USphereReflectionCaptureComponent, InfluenceRadius);
	static_assert(USphereReflectionCaptureComponent_InfluenceRadius_Offset == 0x520, "USphereReflectionCaptureComponent::InfluenceRadius offset is not 520");
	auto constexpr USphereReflectionCaptureComponent_CaptureDistanceScale_Offset = offsetof(USphereReflectionCaptureComponent, CaptureDistanceScale);
	static_assert(USphereReflectionCaptureComponent_CaptureDistanceScale_Offset == 0x524, "USphereReflectionCaptureComponent::CaptureDistanceScale offset is not 524");
	auto constexpr USphereReflectionCaptureComponent_PreviewInfluenceRadius_Offset = offsetof(USphereReflectionCaptureComponent, PreviewInfluenceRadius);
	static_assert(USphereReflectionCaptureComponent_PreviewInfluenceRadius_Offset == 0x528, "USphereReflectionCaptureComponent::PreviewInfluenceRadius offset is not 528");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
