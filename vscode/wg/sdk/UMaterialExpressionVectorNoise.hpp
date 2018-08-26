#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"
#include "EVectorNoiseFunction.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionVectorNoise // Size: 0xB0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionVectorNoise t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1011); // id32("Class Engine.MaterialExpressionVectorNoise")
		return ptr;
	}
	FExpressionInput Position; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionVectorNoise.Position */
	TEnumAsByte<enum EVectorNoiseFunction> NoiseFunction; /* Ofs: 0xA0 Size: 0x1 - ByteProperty Engine.MaterialExpressionVectorNoise.NoiseFunction */
	uint8_t UnknownDataA1[0x3];
	int32_t Quality; /* Ofs: 0xA4 Size: 0x4 - IntProperty Engine.MaterialExpressionVectorNoise.Quality */
	uint8_t boolFieldA8;
	uint8_t UnknownDataA9[0x3];
	uint32_t TileSize; /* Ofs: 0xAC Size: 0x4 - UInt32Property Engine.MaterialExpressionVectorNoise.TileSize */


	inline bool SetPosition(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetNoiseFunction(t_structHelper inst, TEnumAsByte<enum EVectorNoiseFunction> value) { inst.WriteOffset(0xA0, value); }
	inline bool SetQuality(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA4, value); }
	inline bool bTiling()
	{
		return boolFieldA8& 0x1;
	}
	inline bool SetbTiling(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTileSize(t_structHelper inst, uint32_t value) { inst.WriteOffset(0xAC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionVectorNoise = sizeof(UMaterialExpressionVectorNoise); // 176
    static_assert(sizeof(UMaterialExpressionVectorNoise) == 0xB0, "Size of UMaterialExpressionVectorNoise is not correct.");
	auto constexpr UMaterialExpressionVectorNoise_Position_Offset = offsetof(UMaterialExpressionVectorNoise, Position);
	static_assert(UMaterialExpressionVectorNoise_Position_Offset == 0x68, "UMaterialExpressionVectorNoise::Position offset is not 68");
	auto constexpr UMaterialExpressionVectorNoise_NoiseFunction_Offset = offsetof(UMaterialExpressionVectorNoise, NoiseFunction);
	static_assert(UMaterialExpressionVectorNoise_NoiseFunction_Offset == 0xa0, "UMaterialExpressionVectorNoise::NoiseFunction offset is not a0");
	auto constexpr UMaterialExpressionVectorNoise_Quality_Offset = offsetof(UMaterialExpressionVectorNoise, Quality);
	static_assert(UMaterialExpressionVectorNoise_Quality_Offset == 0xa4, "UMaterialExpressionVectorNoise::Quality offset is not a4");
	auto constexpr UMaterialExpressionVectorNoise_boolFieldA8_Offset = offsetof(UMaterialExpressionVectorNoise, boolFieldA8);
	static_assert(UMaterialExpressionVectorNoise_boolFieldA8_Offset == 0xa8, "UMaterialExpressionVectorNoise::boolFieldA8 offset is not a8");
	auto constexpr UMaterialExpressionVectorNoise_TileSize_Offset = offsetof(UMaterialExpressionVectorNoise, TileSize);
	static_assert(UMaterialExpressionVectorNoise_TileSize_Offset == 0xac, "UMaterialExpressionVectorNoise::TileSize offset is not ac");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
