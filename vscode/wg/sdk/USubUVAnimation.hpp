#pragma once
#include "ESubUVBoundingVertexCount.hpp"
#include "EOpacitySourceMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USubUVAnimation // Size: 0x68
	: public UObject // Size: 0x30
{
private:
	typedef USubUVAnimation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1121); // id32("Class Engine.SubUVAnimation")
		return ptr;
	}
	ExternalPtr<struct UTexture2D> SubUVTexture; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.SubUVAnimation.SubUVTexture */
	int32_t SubImages_Horizontal; /* Ofs: 0x38 Size: 0x4 - IntProperty Engine.SubUVAnimation.SubImages_Horizontal */
	int32_t SubImages_Vertical; /* Ofs: 0x3C Size: 0x4 - IntProperty Engine.SubUVAnimation.SubImages_Vertical */
	TEnumAsByte<enum ESubUVBoundingVertexCount> BoundingMode; /* Ofs: 0x40 Size: 0x1 - ByteProperty Engine.SubUVAnimation.BoundingMode */
	TEnumAsByte<enum EOpacitySourceMode> OpacitySourceMode; /* Ofs: 0x41 Size: 0x1 - ByteProperty Engine.SubUVAnimation.OpacitySourceMode */
	uint8_t UnknownData42[0x2];
	float AlphaThreshold; /* Ofs: 0x44 Size: 0x4 - FloatProperty Engine.SubUVAnimation.AlphaThreshold */
	uint8_t UnknownData48[0x20];


	inline bool SetSubUVTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x30, value); }
	inline bool SetSubImages_Horizontal(t_structHelper inst, int32_t value) { inst.WriteOffset(0x38, value); }
	inline bool SetSubImages_Vertical(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3C, value); }
	inline bool SetBoundingMode(t_structHelper inst, TEnumAsByte<enum ESubUVBoundingVertexCount> value) { inst.WriteOffset(0x40, value); }
	inline bool SetOpacitySourceMode(t_structHelper inst, TEnumAsByte<enum EOpacitySourceMode> value) { inst.WriteOffset(0x41, value); }
	inline bool SetAlphaThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSubUVAnimation = sizeof(USubUVAnimation); // 104
    static_assert(sizeof(USubUVAnimation) == 0x68, "Size of USubUVAnimation is not correct.");
	auto constexpr USubUVAnimation_SubUVTexture_Offset = offsetof(USubUVAnimation, SubUVTexture);
	static_assert(USubUVAnimation_SubUVTexture_Offset == 0x30, "USubUVAnimation::SubUVTexture offset is not 30");
	auto constexpr USubUVAnimation_SubImages_Horizontal_Offset = offsetof(USubUVAnimation, SubImages_Horizontal);
	static_assert(USubUVAnimation_SubImages_Horizontal_Offset == 0x38, "USubUVAnimation::SubImages_Horizontal offset is not 38");
	auto constexpr USubUVAnimation_SubImages_Vertical_Offset = offsetof(USubUVAnimation, SubImages_Vertical);
	static_assert(USubUVAnimation_SubImages_Vertical_Offset == 0x3c, "USubUVAnimation::SubImages_Vertical offset is not 3c");
	auto constexpr USubUVAnimation_BoundingMode_Offset = offsetof(USubUVAnimation, BoundingMode);
	static_assert(USubUVAnimation_BoundingMode_Offset == 0x40, "USubUVAnimation::BoundingMode offset is not 40");
	auto constexpr USubUVAnimation_OpacitySourceMode_Offset = offsetof(USubUVAnimation, OpacitySourceMode);
	static_assert(USubUVAnimation_OpacitySourceMode_Offset == 0x41, "USubUVAnimation::OpacitySourceMode offset is not 41");
	auto constexpr USubUVAnimation_AlphaThreshold_Offset = offsetof(USubUVAnimation, AlphaThreshold);
	static_assert(USubUVAnimation_AlphaThreshold_Offset == 0x44, "USubUVAnimation::AlphaThreshold offset is not 44");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
