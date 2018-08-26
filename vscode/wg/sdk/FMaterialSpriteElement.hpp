#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMaterialSpriteElement // Size: 0x28
{
public:
    ExternalPtr<struct UMaterialInterface> Material; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.MaterialSpriteElement.Material */
    ExternalPtr<struct UCurveFloat> DistanceToOpacityCurve; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.MaterialSpriteElement.DistanceToOpacityCurve */
    bool bSizeIsInScreenSpace; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialSpriteElement.bSizeIsInScreenSpace */
    uint8_t UnknownData11[0x3];
    float BaseSizeX; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.MaterialSpriteElement.BaseSizeX */
    float BaseSizeY; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.MaterialSpriteElement.BaseSizeY */
    uint8_t UnknownData1C[0x4];
    ExternalPtr<struct UCurveFloat> DistanceToSizeCurve; /* Ofs: 0x20 Size: 0x8 ObjectProperty Engine.MaterialSpriteElement.DistanceToSizeCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMaterialSpriteElement = sizeof(FMaterialSpriteElement); // 40
    static_assert(sizeof(FMaterialSpriteElement) == 0x28, "Size of FMaterialSpriteElement is not correct.");
	auto constexpr FMaterialSpriteElement_Material_Offset = offsetof(FMaterialSpriteElement, Material);
	static_assert(FMaterialSpriteElement_Material_Offset == 0x0, "FMaterialSpriteElement::Material offset is not 0");
	auto constexpr FMaterialSpriteElement_DistanceToOpacityCurve_Offset = offsetof(FMaterialSpriteElement, DistanceToOpacityCurve);
	static_assert(FMaterialSpriteElement_DistanceToOpacityCurve_Offset == 0x8, "FMaterialSpriteElement::DistanceToOpacityCurve offset is not 8");
	auto constexpr FMaterialSpriteElement_BaseSizeX_Offset = offsetof(FMaterialSpriteElement, BaseSizeX);
	static_assert(FMaterialSpriteElement_BaseSizeX_Offset == 0x14, "FMaterialSpriteElement::BaseSizeX offset is not 14");
	auto constexpr FMaterialSpriteElement_BaseSizeY_Offset = offsetof(FMaterialSpriteElement, BaseSizeY);
	static_assert(FMaterialSpriteElement_BaseSizeY_Offset == 0x18, "FMaterialSpriteElement::BaseSizeY offset is not 18");
	auto constexpr FMaterialSpriteElement_DistanceToSizeCurve_Offset = offsetof(FMaterialSpriteElement, DistanceToSizeCurve);
	static_assert(FMaterialSpriteElement_DistanceToSizeCurve_Offset == 0x20, "FMaterialSpriteElement::DistanceToSizeCurve offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
