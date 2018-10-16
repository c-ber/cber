#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"
#include "ENoiseFunction.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionNoise // Size: 0x100
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionNoise t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(936); // id32("Class Engine.MaterialExpressionNoise")
		return ptr;
	}
	FExpressionInput Position; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionNoise.Position */
	FExpressionInput FilterWidth; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionNoise.FilterWidth */
	float Scale; /* Ofs: 0xD8 Size: 0x4 - FloatProperty Engine.MaterialExpressionNoise.Scale */
	int32_t Quality; /* Ofs: 0xDC Size: 0x4 - IntProperty Engine.MaterialExpressionNoise.Quality */
	TEnumAsByte<enum ENoiseFunction> NoiseFunction; /* Ofs: 0xE0 Size: 0x1 - ByteProperty Engine.MaterialExpressionNoise.NoiseFunction */
	uint8_t UnknownDataE1[0x3];
	uint8_t boolFieldE4;
	uint8_t UnknownDataE5[0x3];
	int32_t Levels; /* Ofs: 0xE8 Size: 0x4 - IntProperty Engine.MaterialExpressionNoise.Levels */
	float OutputMin; /* Ofs: 0xEC Size: 0x4 - FloatProperty Engine.MaterialExpressionNoise.OutputMin */
	float OutputMax; /* Ofs: 0xF0 Size: 0x4 - FloatProperty Engine.MaterialExpressionNoise.OutputMax */
	float LevelScale; /* Ofs: 0xF4 Size: 0x4 - FloatProperty Engine.MaterialExpressionNoise.LevelScale */
	uint8_t boolFieldF8;
	uint8_t UnknownDataF9[0x3];
	uint32_t RepeatSize; /* Ofs: 0xFC Size: 0x4 - UInt32Property Engine.MaterialExpressionNoise.RepeatSize */


	inline bool SetPosition(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetFilterWidth(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetScale(t_structHelper inst, float value) { inst.WriteOffset(0xD8, value); }
	inline bool SetQuality(t_structHelper inst, int32_t value) { inst.WriteOffset(0xDC, value); }
	inline bool SetNoiseFunction(t_structHelper inst, TEnumAsByte<enum ENoiseFunction> value) { inst.WriteOffset(0xE0, value); }
	inline bool bTurbulence()
	{
		return boolFieldE4& 0x1;
	}
	inline bool SetbTurbulence(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xE4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLevels(t_structHelper inst, int32_t value) { inst.WriteOffset(0xE8, value); }
	inline bool SetOutputMin(t_structHelper inst, float value) { inst.WriteOffset(0xEC, value); }
	inline bool SetOutputMax(t_structHelper inst, float value) { inst.WriteOffset(0xF0, value); }
	inline bool SetLevelScale(t_structHelper inst, float value) { inst.WriteOffset(0xF4, value); }
	inline bool bTiling()
	{
		return boolFieldF8& 0x1;
	}
	inline bool SetbTiling(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRepeatSize(t_structHelper inst, uint32_t value) { inst.WriteOffset(0xFC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionNoise = sizeof(UMaterialExpressionNoise); // 256
    static_assert(sizeof(UMaterialExpressionNoise) == 0x100, "Size of UMaterialExpressionNoise is not correct.");
	auto constexpr UMaterialExpressionNoise_Position_Offset = offsetof(UMaterialExpressionNoise, Position);
	static_assert(UMaterialExpressionNoise_Position_Offset == 0x68, "UMaterialExpressionNoise::Position offset is not 68");
	auto constexpr UMaterialExpressionNoise_FilterWidth_Offset = offsetof(UMaterialExpressionNoise, FilterWidth);
	static_assert(UMaterialExpressionNoise_FilterWidth_Offset == 0xa0, "UMaterialExpressionNoise::FilterWidth offset is not a0");
	auto constexpr UMaterialExpressionNoise_Scale_Offset = offsetof(UMaterialExpressionNoise, Scale);
	static_assert(UMaterialExpressionNoise_Scale_Offset == 0xd8, "UMaterialExpressionNoise::Scale offset is not d8");
	auto constexpr UMaterialExpressionNoise_Quality_Offset = offsetof(UMaterialExpressionNoise, Quality);
	static_assert(UMaterialExpressionNoise_Quality_Offset == 0xdc, "UMaterialExpressionNoise::Quality offset is not dc");
	auto constexpr UMaterialExpressionNoise_NoiseFunction_Offset = offsetof(UMaterialExpressionNoise, NoiseFunction);
	static_assert(UMaterialExpressionNoise_NoiseFunction_Offset == 0xe0, "UMaterialExpressionNoise::NoiseFunction offset is not e0");
	auto constexpr UMaterialExpressionNoise_boolFieldE4_Offset = offsetof(UMaterialExpressionNoise, boolFieldE4);
	static_assert(UMaterialExpressionNoise_boolFieldE4_Offset == 0xe4, "UMaterialExpressionNoise::boolFieldE4 offset is not e4");
	auto constexpr UMaterialExpressionNoise_Levels_Offset = offsetof(UMaterialExpressionNoise, Levels);
	static_assert(UMaterialExpressionNoise_Levels_Offset == 0xe8, "UMaterialExpressionNoise::Levels offset is not e8");
	auto constexpr UMaterialExpressionNoise_OutputMin_Offset = offsetof(UMaterialExpressionNoise, OutputMin);
	static_assert(UMaterialExpressionNoise_OutputMin_Offset == 0xec, "UMaterialExpressionNoise::OutputMin offset is not ec");
	auto constexpr UMaterialExpressionNoise_OutputMax_Offset = offsetof(UMaterialExpressionNoise, OutputMax);
	static_assert(UMaterialExpressionNoise_OutputMax_Offset == 0xf0, "UMaterialExpressionNoise::OutputMax offset is not f0");
	auto constexpr UMaterialExpressionNoise_LevelScale_Offset = offsetof(UMaterialExpressionNoise, LevelScale);
	static_assert(UMaterialExpressionNoise_LevelScale_Offset == 0xf4, "UMaterialExpressionNoise::LevelScale offset is not f4");
	auto constexpr UMaterialExpressionNoise_boolFieldF8_Offset = offsetof(UMaterialExpressionNoise, boolFieldF8);
	static_assert(UMaterialExpressionNoise_boolFieldF8_Offset == 0xf8, "UMaterialExpressionNoise::boolFieldF8 offset is not f8");
	auto constexpr UMaterialExpressionNoise_RepeatSize_Offset = offsetof(UMaterialExpressionNoise, RepeatSize);
	static_assert(UMaterialExpressionNoise_RepeatSize_Offset == 0xfc, "UMaterialExpressionNoise::RepeatSize offset is not fc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
