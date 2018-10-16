#pragma once
#include "USceneComponent.hpp"
#include "FVector2D.hpp"
#include "FBox2D.hpp"
#include "EStereoLayerType.hpp"
#include "EStereoLayerShape.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UStereoLayerComponent // Size: 0x530
	: public USceneComponent // Size: 0x490
{
private:
	typedef UStereoLayerComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(242); // id32("Class Engine.StereoLayerComponent")
		return ptr;
	}
	uint8_t boolField490;
	uint8_t UnknownData491[0x7];
	ExternalPtr<struct UTexture> Texture; /* Ofs: 0x498 Size: 0x8 - ObjectProperty Engine.StereoLayerComponent.Texture */
	ExternalPtr<struct UTexture> LeftTexture; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty Engine.StereoLayerComponent.LeftTexture */
	uint8_t boolField4A8;
	uint8_t UnknownData4A9[0x3];
	FVector2D QuadSize; /* Ofs: 0x4AC Size: 0x8 - StructProperty Engine.StereoLayerComponent.QuadSize */
	FBox2D UVRect; /* Ofs: 0x4B4 Size: 0x14 - StructProperty Engine.StereoLayerComponent.UVRect */
	float CylinderRadius; /* Ofs: 0x4C8 Size: 0x4 - FloatProperty Engine.StereoLayerComponent.CylinderRadius */
	float CylinderOverlayArc; /* Ofs: 0x4CC Size: 0x4 - FloatProperty Engine.StereoLayerComponent.CylinderOverlayArc */
	int32_t CylinderHeight; /* Ofs: 0x4D0 Size: 0x4 - IntProperty Engine.StereoLayerComponent.CylinderHeight */
	TEnumAsByte<enum EStereoLayerType> StereoLayerType; /* Ofs: 0x4D4 Size: 0x1 - ByteProperty Engine.StereoLayerComponent.StereoLayerType */
	TEnumAsByte<enum EStereoLayerShape> StereoLayerShape; /* Ofs: 0x4D5 Size: 0x1 - ByteProperty Engine.StereoLayerComponent.StereoLayerShape */
	uint8_t UnknownData4D6[0x2];
	int32_t Priority; /* Ofs: 0x4D8 Size: 0x4 - IntProperty Engine.StereoLayerComponent.Priority */
	uint8_t UnknownData4DC[0x54];


	inline bool bLiveTexture()
	{
		return boolField490& 0x1;
	}
	inline bool SetbLiveTexture(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x490, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSupportsDepth()
	{
		return boolField490& 0x2;
	}
	inline bool SetbSupportsDepth(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x490, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bNoAlphaChannel()
	{
		return boolField490& 0x4;
	}
	inline bool SetbNoAlphaChannel(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x490, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetTexture(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x498, value); }
	inline bool SetLeftTexture(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x4A0, value); }
	inline bool bQuadPreserveTextureRatio()
	{
		return boolField4A8& 0x1;
	}
	inline bool SetbQuadPreserveTextureRatio(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetQuadSize(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x4AC, value); }
	inline bool SetUVRect(t_structHelper inst, FBox2D value) { inst.WriteOffset(0x4B4, value); }
	inline bool SetCylinderRadius(t_structHelper inst, float value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetCylinderOverlayArc(t_structHelper inst, float value) { inst.WriteOffset(0x4CC, value); }
	inline bool SetCylinderHeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetStereoLayerType(t_structHelper inst, TEnumAsByte<enum EStereoLayerType> value) { inst.WriteOffset(0x4D4, value); }
	inline bool SetStereoLayerShape(t_structHelper inst, TEnumAsByte<enum EStereoLayerShape> value) { inst.WriteOffset(0x4D5, value); }
	inline bool SetPriority(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4D8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUStereoLayerComponent = sizeof(UStereoLayerComponent); // 1328
    static_assert(sizeof(UStereoLayerComponent) == 0x530, "Size of UStereoLayerComponent is not correct.");
	auto constexpr UStereoLayerComponent_boolField490_Offset = offsetof(UStereoLayerComponent, boolField490);
	static_assert(UStereoLayerComponent_boolField490_Offset == 0x490, "UStereoLayerComponent::boolField490 offset is not 490");
	auto constexpr UStereoLayerComponent_Texture_Offset = offsetof(UStereoLayerComponent, Texture);
	static_assert(UStereoLayerComponent_Texture_Offset == 0x498, "UStereoLayerComponent::Texture offset is not 498");
	auto constexpr UStereoLayerComponent_LeftTexture_Offset = offsetof(UStereoLayerComponent, LeftTexture);
	static_assert(UStereoLayerComponent_LeftTexture_Offset == 0x4a0, "UStereoLayerComponent::LeftTexture offset is not 4a0");
	auto constexpr UStereoLayerComponent_boolField4A8_Offset = offsetof(UStereoLayerComponent, boolField4A8);
	static_assert(UStereoLayerComponent_boolField4A8_Offset == 0x4a8, "UStereoLayerComponent::boolField4A8 offset is not 4a8");
	auto constexpr UStereoLayerComponent_QuadSize_Offset = offsetof(UStereoLayerComponent, QuadSize);
	static_assert(UStereoLayerComponent_QuadSize_Offset == 0x4ac, "UStereoLayerComponent::QuadSize offset is not 4ac");
	auto constexpr UStereoLayerComponent_UVRect_Offset = offsetof(UStereoLayerComponent, UVRect);
	static_assert(UStereoLayerComponent_UVRect_Offset == 0x4b4, "UStereoLayerComponent::UVRect offset is not 4b4");
	auto constexpr UStereoLayerComponent_CylinderRadius_Offset = offsetof(UStereoLayerComponent, CylinderRadius);
	static_assert(UStereoLayerComponent_CylinderRadius_Offset == 0x4c8, "UStereoLayerComponent::CylinderRadius offset is not 4c8");
	auto constexpr UStereoLayerComponent_CylinderOverlayArc_Offset = offsetof(UStereoLayerComponent, CylinderOverlayArc);
	static_assert(UStereoLayerComponent_CylinderOverlayArc_Offset == 0x4cc, "UStereoLayerComponent::CylinderOverlayArc offset is not 4cc");
	auto constexpr UStereoLayerComponent_CylinderHeight_Offset = offsetof(UStereoLayerComponent, CylinderHeight);
	static_assert(UStereoLayerComponent_CylinderHeight_Offset == 0x4d0, "UStereoLayerComponent::CylinderHeight offset is not 4d0");
	auto constexpr UStereoLayerComponent_StereoLayerType_Offset = offsetof(UStereoLayerComponent, StereoLayerType);
	static_assert(UStereoLayerComponent_StereoLayerType_Offset == 0x4d4, "UStereoLayerComponent::StereoLayerType offset is not 4d4");
	auto constexpr UStereoLayerComponent_StereoLayerShape_Offset = offsetof(UStereoLayerComponent, StereoLayerShape);
	static_assert(UStereoLayerComponent_StereoLayerShape_Offset == 0x4d5, "UStereoLayerComponent::StereoLayerShape offset is not 4d5");
	auto constexpr UStereoLayerComponent_Priority_Offset = offsetof(UStereoLayerComponent, Priority);
	static_assert(UStereoLayerComponent_Priority_Offset == 0x4d8, "UStereoLayerComponent::Priority offset is not 4d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
