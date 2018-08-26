#pragma once
#include "UReflectionCaptureComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBoxReflectionCaptureComponent // Size: 0x540
	: public UReflectionCaptureComponent // Size: 0x520
{
private:
	typedef UBoxReflectionCaptureComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(230); // id32("Class Engine.BoxReflectionCaptureComponent")
		return ptr;
	}
	float BoxTransitionDistance; /* Ofs: 0x520 Size: 0x4 - FloatProperty Engine.BoxReflectionCaptureComponent.BoxTransitionDistance */
	uint8_t UnknownData524[0x4];
	ExternalPtr<struct UBoxComponent> PreviewInfluenceBox; /* Ofs: 0x528 Size: 0x8 - ObjectProperty Engine.BoxReflectionCaptureComponent.PreviewInfluenceBox */
	ExternalPtr<struct UBoxComponent> PreviewCaptureBox; /* Ofs: 0x530 Size: 0x8 - ObjectProperty Engine.BoxReflectionCaptureComponent.PreviewCaptureBox */
	uint8_t UnknownData538[0x8];


	inline bool SetBoxTransitionDistance(t_structHelper inst, float value) { inst.WriteOffset(0x520, value); }
	inline bool SetPreviewInfluenceBox(t_structHelper inst, ExternalPtr<struct UBoxComponent> value) { inst.WriteOffset(0x528, value); }
	inline bool SetPreviewCaptureBox(t_structHelper inst, ExternalPtr<struct UBoxComponent> value) { inst.WriteOffset(0x530, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBoxReflectionCaptureComponent = sizeof(UBoxReflectionCaptureComponent); // 1344
    static_assert(sizeof(UBoxReflectionCaptureComponent) == 0x540, "Size of UBoxReflectionCaptureComponent is not correct.");
	auto constexpr UBoxReflectionCaptureComponent_BoxTransitionDistance_Offset = offsetof(UBoxReflectionCaptureComponent, BoxTransitionDistance);
	static_assert(UBoxReflectionCaptureComponent_BoxTransitionDistance_Offset == 0x520, "UBoxReflectionCaptureComponent::BoxTransitionDistance offset is not 520");
	auto constexpr UBoxReflectionCaptureComponent_PreviewInfluenceBox_Offset = offsetof(UBoxReflectionCaptureComponent, PreviewInfluenceBox);
	static_assert(UBoxReflectionCaptureComponent_PreviewInfluenceBox_Offset == 0x528, "UBoxReflectionCaptureComponent::PreviewInfluenceBox offset is not 528");
	auto constexpr UBoxReflectionCaptureComponent_PreviewCaptureBox_Offset = offsetof(UBoxReflectionCaptureComponent, PreviewCaptureBox);
	static_assert(UBoxReflectionCaptureComponent_PreviewCaptureBox_Offset == 0x530, "UBoxReflectionCaptureComponent::PreviewCaptureBox offset is not 530");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
