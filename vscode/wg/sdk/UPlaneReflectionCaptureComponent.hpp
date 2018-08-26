#pragma once
#include "UReflectionCaptureComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlaneReflectionCaptureComponent // Size: 0x540
	: public UReflectionCaptureComponent // Size: 0x520
{
private:
	typedef UPlaneReflectionCaptureComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(232); // id32("Class Engine.PlaneReflectionCaptureComponent")
		return ptr;
	}
	float InfluenceRadiusScale; /* Ofs: 0x520 Size: 0x4 - FloatProperty Engine.PlaneReflectionCaptureComponent.InfluenceRadiusScale */
	uint8_t UnknownData524[0x4];
	ExternalPtr<struct UDrawSphereComponent> PreviewInfluenceRadius; /* Ofs: 0x528 Size: 0x8 - ObjectProperty Engine.PlaneReflectionCaptureComponent.PreviewInfluenceRadius */
	ExternalPtr<struct UBoxComponent> PreviewCaptureBox; /* Ofs: 0x530 Size: 0x8 - ObjectProperty Engine.PlaneReflectionCaptureComponent.PreviewCaptureBox */
	uint8_t UnknownData538[0x8];


	inline bool SetInfluenceRadiusScale(t_structHelper inst, float value) { inst.WriteOffset(0x520, value); }
	inline bool SetPreviewInfluenceRadius(t_structHelper inst, ExternalPtr<struct UDrawSphereComponent> value) { inst.WriteOffset(0x528, value); }
	inline bool SetPreviewCaptureBox(t_structHelper inst, ExternalPtr<struct UBoxComponent> value) { inst.WriteOffset(0x530, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlaneReflectionCaptureComponent = sizeof(UPlaneReflectionCaptureComponent); // 1344
    static_assert(sizeof(UPlaneReflectionCaptureComponent) == 0x540, "Size of UPlaneReflectionCaptureComponent is not correct.");
	auto constexpr UPlaneReflectionCaptureComponent_InfluenceRadiusScale_Offset = offsetof(UPlaneReflectionCaptureComponent, InfluenceRadiusScale);
	static_assert(UPlaneReflectionCaptureComponent_InfluenceRadiusScale_Offset == 0x520, "UPlaneReflectionCaptureComponent::InfluenceRadiusScale offset is not 520");
	auto constexpr UPlaneReflectionCaptureComponent_PreviewInfluenceRadius_Offset = offsetof(UPlaneReflectionCaptureComponent, PreviewInfluenceRadius);
	static_assert(UPlaneReflectionCaptureComponent_PreviewInfluenceRadius_Offset == 0x528, "UPlaneReflectionCaptureComponent::PreviewInfluenceRadius offset is not 528");
	auto constexpr UPlaneReflectionCaptureComponent_PreviewCaptureBox_Offset = offsetof(UPlaneReflectionCaptureComponent, PreviewCaptureBox);
	static_assert(UPlaneReflectionCaptureComponent_PreviewCaptureBox_Offset == 0x530, "UPlaneReflectionCaptureComponent::PreviewCaptureBox offset is not 530");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
