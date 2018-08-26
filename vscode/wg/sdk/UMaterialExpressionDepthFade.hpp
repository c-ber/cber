#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionDepthFade // Size: 0xE0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionDepthFade t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(901); // id32("Class Engine.MaterialExpressionDepthFade")
		return ptr;
	}
	FExpressionInput InOpacity; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionDepthFade.InOpacity */
	FExpressionInput FadeDistance; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionDepthFade.FadeDistance */
	float OpacityDefault; /* Ofs: 0xD8 Size: 0x4 - FloatProperty Engine.MaterialExpressionDepthFade.OpacityDefault */
	float FadeDistanceDefault; /* Ofs: 0xDC Size: 0x4 - FloatProperty Engine.MaterialExpressionDepthFade.FadeDistanceDefault */


	inline bool SetInOpacity(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetFadeDistance(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetOpacityDefault(t_structHelper inst, float value) { inst.WriteOffset(0xD8, value); }
	inline bool SetFadeDistanceDefault(t_structHelper inst, float value) { inst.WriteOffset(0xDC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionDepthFade = sizeof(UMaterialExpressionDepthFade); // 224
    static_assert(sizeof(UMaterialExpressionDepthFade) == 0xE0, "Size of UMaterialExpressionDepthFade is not correct.");
	auto constexpr UMaterialExpressionDepthFade_InOpacity_Offset = offsetof(UMaterialExpressionDepthFade, InOpacity);
	static_assert(UMaterialExpressionDepthFade_InOpacity_Offset == 0x68, "UMaterialExpressionDepthFade::InOpacity offset is not 68");
	auto constexpr UMaterialExpressionDepthFade_FadeDistance_Offset = offsetof(UMaterialExpressionDepthFade, FadeDistance);
	static_assert(UMaterialExpressionDepthFade_FadeDistance_Offset == 0xa0, "UMaterialExpressionDepthFade::FadeDistance offset is not a0");
	auto constexpr UMaterialExpressionDepthFade_OpacityDefault_Offset = offsetof(UMaterialExpressionDepthFade, OpacityDefault);
	static_assert(UMaterialExpressionDepthFade_OpacityDefault_Offset == 0xd8, "UMaterialExpressionDepthFade::OpacityDefault offset is not d8");
	auto constexpr UMaterialExpressionDepthFade_FadeDistanceDefault_Offset = offsetof(UMaterialExpressionDepthFade, FadeDistanceDefault);
	static_assert(UMaterialExpressionDepthFade_FadeDistanceDefault_Offset == 0xdc, "UMaterialExpressionDepthFade::FadeDistanceDefault offset is not dc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
