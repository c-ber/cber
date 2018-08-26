#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionBumpOffset // Size: 0x120
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionBumpOffset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(876); // id32("Class Engine.MaterialExpressionBumpOffset")
		return ptr;
	}
	FExpressionInput Coordinate; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionBumpOffset.Coordinate */
	FExpressionInput Height; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionBumpOffset.Height */
	FExpressionInput HeightRatioInput; /* Ofs: 0xD8 Size: 0x38 - StructProperty Engine.MaterialExpressionBumpOffset.HeightRatioInput */
	float HeightRatio; /* Ofs: 0x110 Size: 0x4 - FloatProperty Engine.MaterialExpressionBumpOffset.HeightRatio */
	float ReferencePlane; /* Ofs: 0x114 Size: 0x4 - FloatProperty Engine.MaterialExpressionBumpOffset.ReferencePlane */
	uint32_t ConstCoordinate; /* Ofs: 0x118 Size: 0x4 - UInt32Property Engine.MaterialExpressionBumpOffset.ConstCoordinate */
	uint8_t UnknownData11C[0x4];


	inline bool SetCoordinate(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetHeight(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetHeightRatioInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xD8, value); }
	inline bool SetHeightRatio(t_structHelper inst, float value) { inst.WriteOffset(0x110, value); }
	inline bool SetReferencePlane(t_structHelper inst, float value) { inst.WriteOffset(0x114, value); }
	inline bool SetConstCoordinate(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x118, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionBumpOffset = sizeof(UMaterialExpressionBumpOffset); // 288
    static_assert(sizeof(UMaterialExpressionBumpOffset) == 0x120, "Size of UMaterialExpressionBumpOffset is not correct.");
	auto constexpr UMaterialExpressionBumpOffset_Coordinate_Offset = offsetof(UMaterialExpressionBumpOffset, Coordinate);
	static_assert(UMaterialExpressionBumpOffset_Coordinate_Offset == 0x68, "UMaterialExpressionBumpOffset::Coordinate offset is not 68");
	auto constexpr UMaterialExpressionBumpOffset_Height_Offset = offsetof(UMaterialExpressionBumpOffset, Height);
	static_assert(UMaterialExpressionBumpOffset_Height_Offset == 0xa0, "UMaterialExpressionBumpOffset::Height offset is not a0");
	auto constexpr UMaterialExpressionBumpOffset_HeightRatioInput_Offset = offsetof(UMaterialExpressionBumpOffset, HeightRatioInput);
	static_assert(UMaterialExpressionBumpOffset_HeightRatioInput_Offset == 0xd8, "UMaterialExpressionBumpOffset::HeightRatioInput offset is not d8");
	auto constexpr UMaterialExpressionBumpOffset_HeightRatio_Offset = offsetof(UMaterialExpressionBumpOffset, HeightRatio);
	static_assert(UMaterialExpressionBumpOffset_HeightRatio_Offset == 0x110, "UMaterialExpressionBumpOffset::HeightRatio offset is not 110");
	auto constexpr UMaterialExpressionBumpOffset_ReferencePlane_Offset = offsetof(UMaterialExpressionBumpOffset, ReferencePlane);
	static_assert(UMaterialExpressionBumpOffset_ReferencePlane_Offset == 0x114, "UMaterialExpressionBumpOffset::ReferencePlane offset is not 114");
	auto constexpr UMaterialExpressionBumpOffset_ConstCoordinate_Offset = offsetof(UMaterialExpressionBumpOffset, ConstCoordinate);
	static_assert(UMaterialExpressionBumpOffset_ConstCoordinate_Offset == 0x118, "UMaterialExpressionBumpOffset::ConstCoordinate offset is not 118");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
