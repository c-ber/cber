#pragma once
#include "UMaterialExpression.hpp"
#include "ETerrainCoordMappingType.hpp"
#include "ELandscapeCustomizedCoordType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionLandscapeLayerCoords // Size: 0x80
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionLandscapeLayerCoords t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1303); // id32("Class Landscape.MaterialExpressionLandscapeLayerCoords")
		return ptr;
	}
	TEnumAsByte<enum ETerrainCoordMappingType> MappingType; /* Ofs: 0x68 Size: 0x1 - ByteProperty Landscape.MaterialExpressionLandscapeLayerCoords.MappingType */
	TEnumAsByte<enum ELandscapeCustomizedCoordType> CustomUVType; /* Ofs: 0x69 Size: 0x1 - ByteProperty Landscape.MaterialExpressionLandscapeLayerCoords.CustomUVType */
	uint8_t UnknownData6A[0x2];
	float MappingScale; /* Ofs: 0x6C Size: 0x4 - FloatProperty Landscape.MaterialExpressionLandscapeLayerCoords.MappingScale */
	float MappingRotation; /* Ofs: 0x70 Size: 0x4 - FloatProperty Landscape.MaterialExpressionLandscapeLayerCoords.MappingRotation */
	float MappingPanU; /* Ofs: 0x74 Size: 0x4 - FloatProperty Landscape.MaterialExpressionLandscapeLayerCoords.MappingPanU */
	float MappingPanV; /* Ofs: 0x78 Size: 0x4 - FloatProperty Landscape.MaterialExpressionLandscapeLayerCoords.MappingPanV */
	uint8_t UnknownData7C[0x4];


	inline bool SetMappingType(t_structHelper inst, TEnumAsByte<enum ETerrainCoordMappingType> value) { inst.WriteOffset(0x68, value); }
	inline bool SetCustomUVType(t_structHelper inst, TEnumAsByte<enum ELandscapeCustomizedCoordType> value) { inst.WriteOffset(0x69, value); }
	inline bool SetMappingScale(t_structHelper inst, float value) { inst.WriteOffset(0x6C, value); }
	inline bool SetMappingRotation(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
	inline bool SetMappingPanU(t_structHelper inst, float value) { inst.WriteOffset(0x74, value); }
	inline bool SetMappingPanV(t_structHelper inst, float value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionLandscapeLayerCoords = sizeof(UMaterialExpressionLandscapeLayerCoords); // 128
    static_assert(sizeof(UMaterialExpressionLandscapeLayerCoords) == 0x80, "Size of UMaterialExpressionLandscapeLayerCoords is not correct.");
	auto constexpr UMaterialExpressionLandscapeLayerCoords_MappingType_Offset = offsetof(UMaterialExpressionLandscapeLayerCoords, MappingType);
	static_assert(UMaterialExpressionLandscapeLayerCoords_MappingType_Offset == 0x68, "UMaterialExpressionLandscapeLayerCoords::MappingType offset is not 68");
	auto constexpr UMaterialExpressionLandscapeLayerCoords_CustomUVType_Offset = offsetof(UMaterialExpressionLandscapeLayerCoords, CustomUVType);
	static_assert(UMaterialExpressionLandscapeLayerCoords_CustomUVType_Offset == 0x69, "UMaterialExpressionLandscapeLayerCoords::CustomUVType offset is not 69");
	auto constexpr UMaterialExpressionLandscapeLayerCoords_MappingScale_Offset = offsetof(UMaterialExpressionLandscapeLayerCoords, MappingScale);
	static_assert(UMaterialExpressionLandscapeLayerCoords_MappingScale_Offset == 0x6c, "UMaterialExpressionLandscapeLayerCoords::MappingScale offset is not 6c");
	auto constexpr UMaterialExpressionLandscapeLayerCoords_MappingRotation_Offset = offsetof(UMaterialExpressionLandscapeLayerCoords, MappingRotation);
	static_assert(UMaterialExpressionLandscapeLayerCoords_MappingRotation_Offset == 0x70, "UMaterialExpressionLandscapeLayerCoords::MappingRotation offset is not 70");
	auto constexpr UMaterialExpressionLandscapeLayerCoords_MappingPanU_Offset = offsetof(UMaterialExpressionLandscapeLayerCoords, MappingPanU);
	static_assert(UMaterialExpressionLandscapeLayerCoords_MappingPanU_Offset == 0x74, "UMaterialExpressionLandscapeLayerCoords::MappingPanU offset is not 74");
	auto constexpr UMaterialExpressionLandscapeLayerCoords_MappingPanV_Offset = offsetof(UMaterialExpressionLandscapeLayerCoords, MappingPanV);
	static_assert(UMaterialExpressionLandscapeLayerCoords_MappingPanV_Offset == 0x78, "UMaterialExpressionLandscapeLayerCoords::MappingPanV offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
