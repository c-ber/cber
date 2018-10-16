#pragma once
#include "UInfo.hpp"
#include "FBox2D.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelAttribute // Size: 0x4B0
	: public UInfo // Size: 0x410
{
private:
	typedef ULevelAttribute t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1922); // id32("Class TslGame.LevelAttribute")
		return ptr;
	}
//	int32_t NumMapBlock; /* Ofs: 0x408 Size: 0x4 - IntProperty TslGame.LevelAttribute.NumMapBlock */
//	FBox2D MapRect2D; /* Ofs: 0x40C Size: 0x14 - StructProperty TslGame.LevelAttribute.MapRect2D */
	uint8_t UnknownData410[0x10];
	TAssetPtr<ExternalPtr<struct UMaterialInterface>> MapImageMaterial; /* Ofs: 0x420 Size: 0x1C - AssetObjectProperty TslGame.LevelAttribute.MapImageMaterial */
	uint8_t UnknownData43C[0x4];
	FStringAssetReference TencentMapTexture; /* Ofs: 0x440 Size: 0x10 - StructProperty TslGame.LevelAttribute.TencentMapTexture */
	FStringAssetReference WeatherLevelForGI; /* Ofs: 0x450 Size: 0x10 - StructProperty TslGame.LevelAttribute.WeatherLevelForGI */
	FStringAssetReference LandscapeMaterialForGI; /* Ofs: 0x460 Size: 0x10 - StructProperty TslGame.LevelAttribute.LandscapeMaterialForGI */
	FVector LandscapeOriginOffset; /* Ofs: 0x470 Size: 0xC - StructProperty TslGame.LevelAttribute.LandscapeOriginOffset */
	int32_t LandscapeTileCount; /* Ofs: 0x47C Size: 0x4 - IntProperty TslGame.LevelAttribute.LandscapeTileCount */
	int32_t LandscapeTileWidth; /* Ofs: 0x480 Size: 0x4 - IntProperty TslGame.LevelAttribute.LandscapeTileWidth */
	uint8_t boolField484;
	uint8_t UnknownData485[0x3];
	FBox2D MapBox; /* Ofs: 0x488 Size: 0x14 - StructProperty TslGame.LevelAttribute.MapBox */
	int32_t MainSplitCount; /* Ofs: 0x49C Size: 0x4 - IntProperty TslGame.LevelAttribute.MainSplitCount */
	int32_t GridMaxDepth; /* Ofs: 0x4A0 Size: 0x4 - IntProperty TslGame.LevelAttribute.GridMaxDepth */
	int32_t NumOfGrid; /* Ofs: 0x4A4 Size: 0x4 - IntProperty TslGame.LevelAttribute.NumOfGrid */
	uint8_t UnknownData4A8[0x8];


//	inline bool SetNumMapBlock(t_structHelper inst, int32_t value) { inst.WriteOffset(0x408, value); }
//	inline bool SetMapRect2D(t_structHelper inst, FBox2D value) { inst.WriteOffset(0x40C, value); }
	inline bool SetMapImageMaterial(t_structHelper inst, TAssetPtr<ExternalPtr<struct UMaterialInterface>> value) { inst.WriteOffset(0x420, value); }
	inline bool SetTencentMapTexture(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x440, value); }
	inline bool SetWeatherLevelForGI(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x450, value); }
	inline bool SetLandscapeMaterialForGI(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x460, value); }
	inline bool SetLandscapeOriginOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x470, value); }
	inline bool SetLandscapeTileCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x47C, value); }
	inline bool SetLandscapeTileWidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x480, value); }
	inline bool bOverrideSplitLevelSettings()
	{
		return boolField484& 0x1;
	}
	inline bool SetbOverrideSplitLevelSettings(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x484, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMapBox(t_structHelper inst, FBox2D value) { inst.WriteOffset(0x488, value); }
	inline bool SetMainSplitCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x49C, value); }
	inline bool SetGridMaxDepth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetNumOfGrid(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4A4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelAttribute = sizeof(ULevelAttribute); // 1200
    static_assert(sizeof(ULevelAttribute) == 0x4B0, "Size of ULevelAttribute is not correct.");
//	auto constexpr ULevelAttribute_NumMapBlock_Offset = offsetof(ULevelAttribute, NumMapBlock);
//	static_assert(ULevelAttribute_NumMapBlock_Offset == 0x408, "ULevelAttribute::NumMapBlock offset is not 408");
//	auto constexpr ULevelAttribute_MapRect2D_Offset = offsetof(ULevelAttribute, MapRect2D);
//	static_assert(ULevelAttribute_MapRect2D_Offset == 0x40c, "ULevelAttribute::MapRect2D offset is not 40c");
	auto constexpr ULevelAttribute_MapImageMaterial_Offset = offsetof(ULevelAttribute, MapImageMaterial);
	static_assert(ULevelAttribute_MapImageMaterial_Offset == 0x420, "ULevelAttribute::MapImageMaterial offset is not 420");
	auto constexpr ULevelAttribute_TencentMapTexture_Offset = offsetof(ULevelAttribute, TencentMapTexture);
	static_assert(ULevelAttribute_TencentMapTexture_Offset == 0x440, "ULevelAttribute::TencentMapTexture offset is not 440");
	auto constexpr ULevelAttribute_WeatherLevelForGI_Offset = offsetof(ULevelAttribute, WeatherLevelForGI);
	static_assert(ULevelAttribute_WeatherLevelForGI_Offset == 0x450, "ULevelAttribute::WeatherLevelForGI offset is not 450");
	auto constexpr ULevelAttribute_LandscapeMaterialForGI_Offset = offsetof(ULevelAttribute, LandscapeMaterialForGI);
	static_assert(ULevelAttribute_LandscapeMaterialForGI_Offset == 0x460, "ULevelAttribute::LandscapeMaterialForGI offset is not 460");
	auto constexpr ULevelAttribute_LandscapeOriginOffset_Offset = offsetof(ULevelAttribute, LandscapeOriginOffset);
	static_assert(ULevelAttribute_LandscapeOriginOffset_Offset == 0x470, "ULevelAttribute::LandscapeOriginOffset offset is not 470");
	auto constexpr ULevelAttribute_LandscapeTileCount_Offset = offsetof(ULevelAttribute, LandscapeTileCount);
	static_assert(ULevelAttribute_LandscapeTileCount_Offset == 0x47c, "ULevelAttribute::LandscapeTileCount offset is not 47c");
	auto constexpr ULevelAttribute_LandscapeTileWidth_Offset = offsetof(ULevelAttribute, LandscapeTileWidth);
	static_assert(ULevelAttribute_LandscapeTileWidth_Offset == 0x480, "ULevelAttribute::LandscapeTileWidth offset is not 480");
	auto constexpr ULevelAttribute_boolField484_Offset = offsetof(ULevelAttribute, boolField484);
	static_assert(ULevelAttribute_boolField484_Offset == 0x484, "ULevelAttribute::boolField484 offset is not 484");
	auto constexpr ULevelAttribute_MapBox_Offset = offsetof(ULevelAttribute, MapBox);
	static_assert(ULevelAttribute_MapBox_Offset == 0x488, "ULevelAttribute::MapBox offset is not 488");
	auto constexpr ULevelAttribute_MainSplitCount_Offset = offsetof(ULevelAttribute, MainSplitCount);
	static_assert(ULevelAttribute_MainSplitCount_Offset == 0x49c, "ULevelAttribute::MainSplitCount offset is not 49c");
	auto constexpr ULevelAttribute_GridMaxDepth_Offset = offsetof(ULevelAttribute, GridMaxDepth);
	static_assert(ULevelAttribute_GridMaxDepth_Offset == 0x4a0, "ULevelAttribute::GridMaxDepth offset is not 4a0");
	auto constexpr ULevelAttribute_NumOfGrid_Offset = offsetof(ULevelAttribute, NumOfGrid);
	static_assert(ULevelAttribute_NumOfGrid_Offset == 0x4a4, "ULevelAttribute::NumOfGrid offset is not 4a4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
