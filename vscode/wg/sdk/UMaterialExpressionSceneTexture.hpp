#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"
#include "ESceneTextureId.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionSceneTexture // Size: 0xA8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionSceneTexture t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(979); // id32("Class Engine.MaterialExpressionSceneTexture")
		return ptr;
	}
	FExpressionInput Coordinates; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionSceneTexture.Coordinates */
	TEnumAsByte<enum ESceneTextureId> SceneTextureId; /* Ofs: 0xA0 Size: 0x1 - ByteProperty Engine.MaterialExpressionSceneTexture.SceneTextureId */
	uint8_t boolFieldA1;
	uint8_t boolFieldA2;
	uint8_t UnknownDataA3[0x5];


	inline bool SetCoordinates(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetSceneTextureId(t_structHelper inst, TEnumAsByte<enum ESceneTextureId> value) { inst.WriteOffset(0xA0, value); }
	inline bool bClampUVs()
	{
		return boolFieldA1& 0x1;
	}
	inline bool SetbClampUVs(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bFiltered()
	{
		return boolFieldA2& 0x1;
	}
	inline bool SetbFiltered(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA2, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionSceneTexture = sizeof(UMaterialExpressionSceneTexture); // 168
    static_assert(sizeof(UMaterialExpressionSceneTexture) == 0xA8, "Size of UMaterialExpressionSceneTexture is not correct.");
	auto constexpr UMaterialExpressionSceneTexture_Coordinates_Offset = offsetof(UMaterialExpressionSceneTexture, Coordinates);
	static_assert(UMaterialExpressionSceneTexture_Coordinates_Offset == 0x68, "UMaterialExpressionSceneTexture::Coordinates offset is not 68");
	auto constexpr UMaterialExpressionSceneTexture_SceneTextureId_Offset = offsetof(UMaterialExpressionSceneTexture, SceneTextureId);
	static_assert(UMaterialExpressionSceneTexture_SceneTextureId_Offset == 0xa0, "UMaterialExpressionSceneTexture::SceneTextureId offset is not a0");
	auto constexpr UMaterialExpressionSceneTexture_boolFieldA1_Offset = offsetof(UMaterialExpressionSceneTexture, boolFieldA1);
	static_assert(UMaterialExpressionSceneTexture_boolFieldA1_Offset == 0xa1, "UMaterialExpressionSceneTexture::boolFieldA1 offset is not a1");
	auto constexpr UMaterialExpressionSceneTexture_boolFieldA2_Offset = offsetof(UMaterialExpressionSceneTexture, boolFieldA2);
	static_assert(UMaterialExpressionSceneTexture_boolFieldA2_Offset == 0xa2, "UMaterialExpressionSceneTexture::boolFieldA2 offset is not a2");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
