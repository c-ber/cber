#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTextureCoordinate // Size: 0x78
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionTextureCoordinate t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1004); // id32("Class Engine.MaterialExpressionTextureCoordinate")
		return ptr;
	}
	int32_t CoordinateIndex; /* Ofs: 0x68 Size: 0x4 - IntProperty Engine.MaterialExpressionTextureCoordinate.CoordinateIndex */
	float UTiling; /* Ofs: 0x6C Size: 0x4 - FloatProperty Engine.MaterialExpressionTextureCoordinate.UTiling */
	float VTiling; /* Ofs: 0x70 Size: 0x4 - FloatProperty Engine.MaterialExpressionTextureCoordinate.VTiling */
	uint8_t boolField74;
	uint8_t UnknownData75[0x3];


	inline bool SetCoordinateIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x68, value); }
	inline bool SetUTiling(t_structHelper inst, float value) { inst.WriteOffset(0x6C, value); }
	inline bool SetVTiling(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
	inline bool UnMirrorU()
	{
		return boolField74& 0x1;
	}
	inline bool SetUnMirrorU(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x74, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool UnMirrorV()
	{
		return boolField74& 0x2;
	}
	inline bool SetUnMirrorV(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x74, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTextureCoordinate = sizeof(UMaterialExpressionTextureCoordinate); // 120
    static_assert(sizeof(UMaterialExpressionTextureCoordinate) == 0x78, "Size of UMaterialExpressionTextureCoordinate is not correct.");
	auto constexpr UMaterialExpressionTextureCoordinate_CoordinateIndex_Offset = offsetof(UMaterialExpressionTextureCoordinate, CoordinateIndex);
	static_assert(UMaterialExpressionTextureCoordinate_CoordinateIndex_Offset == 0x68, "UMaterialExpressionTextureCoordinate::CoordinateIndex offset is not 68");
	auto constexpr UMaterialExpressionTextureCoordinate_UTiling_Offset = offsetof(UMaterialExpressionTextureCoordinate, UTiling);
	static_assert(UMaterialExpressionTextureCoordinate_UTiling_Offset == 0x6c, "UMaterialExpressionTextureCoordinate::UTiling offset is not 6c");
	auto constexpr UMaterialExpressionTextureCoordinate_VTiling_Offset = offsetof(UMaterialExpressionTextureCoordinate, VTiling);
	static_assert(UMaterialExpressionTextureCoordinate_VTiling_Offset == 0x70, "UMaterialExpressionTextureCoordinate::VTiling offset is not 70");
	auto constexpr UMaterialExpressionTextureCoordinate_boolField74_Offset = offsetof(UMaterialExpressionTextureCoordinate, boolField74);
	static_assert(UMaterialExpressionTextureCoordinate_boolField74_Offset == 0x74, "UMaterialExpressionTextureCoordinate::boolField74 offset is not 74");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
