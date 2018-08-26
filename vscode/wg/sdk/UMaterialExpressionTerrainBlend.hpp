#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTerrainBlend // Size: 0xC0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionTerrainBlend t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(992); // id32("Class Engine.MaterialExpressionTerrainBlend")
		return ptr;
	}
	FExpressionInput UV; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionTerrainBlend.UV */
	TArray<struct FTerrainLayer> Inputs; /* Ofs: 0xA0 Size: 0x10 - ArrayProperty Engine.MaterialExpressionTerrainBlend.Inputs */
	uint32_t ConstCoordinate; /* Ofs: 0xB0 Size: 0x4 - UInt32Property Engine.MaterialExpressionTerrainBlend.ConstCoordinate */
	uint8_t UnknownDataB4[0xC];


	inline bool SetUV(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetInputs(t_structHelper inst, TArray<struct FTerrainLayer> value) { inst.WriteOffset(0xA0, value); }
	inline bool SetConstCoordinate(t_structHelper inst, uint32_t value) { inst.WriteOffset(0xB0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTerrainBlend = sizeof(UMaterialExpressionTerrainBlend); // 192
    static_assert(sizeof(UMaterialExpressionTerrainBlend) == 0xC0, "Size of UMaterialExpressionTerrainBlend is not correct.");
	auto constexpr UMaterialExpressionTerrainBlend_UV_Offset = offsetof(UMaterialExpressionTerrainBlend, UV);
	static_assert(UMaterialExpressionTerrainBlend_UV_Offset == 0x68, "UMaterialExpressionTerrainBlend::UV offset is not 68");
	auto constexpr UMaterialExpressionTerrainBlend_Inputs_Offset = offsetof(UMaterialExpressionTerrainBlend, Inputs);
	static_assert(UMaterialExpressionTerrainBlend_Inputs_Offset == 0xa0, "UMaterialExpressionTerrainBlend::Inputs offset is not a0");
	auto constexpr UMaterialExpressionTerrainBlend_ConstCoordinate_Offset = offsetof(UMaterialExpressionTerrainBlend, ConstCoordinate);
	static_assert(UMaterialExpressionTerrainBlend_ConstCoordinate_Offset == 0xb0, "UMaterialExpressionTerrainBlend::ConstCoordinate offset is not b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
