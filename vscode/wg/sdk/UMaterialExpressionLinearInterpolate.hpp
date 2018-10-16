#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionLinearInterpolate // Size: 0x120
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionLinearInterpolate t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(928); // id32("Class Engine.MaterialExpressionLinearInterpolate")
		return ptr;
	}
	FExpressionInput A; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionLinearInterpolate.A */
	FExpressionInput B; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionLinearInterpolate.B */
	FExpressionInput Alpha; /* Ofs: 0xD8 Size: 0x38 - StructProperty Engine.MaterialExpressionLinearInterpolate.Alpha */
	float ConstA; /* Ofs: 0x110 Size: 0x4 - FloatProperty Engine.MaterialExpressionLinearInterpolate.ConstA */
	float ConstB; /* Ofs: 0x114 Size: 0x4 - FloatProperty Engine.MaterialExpressionLinearInterpolate.ConstB */
	float ConstAlpha; /* Ofs: 0x118 Size: 0x4 - FloatProperty Engine.MaterialExpressionLinearInterpolate.ConstAlpha */
	uint8_t UnknownData11C[0x4];


	inline bool SetA(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetB(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetAlpha(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xD8, value); }
	inline bool SetConstA(t_structHelper inst, float value) { inst.WriteOffset(0x110, value); }
	inline bool SetConstB(t_structHelper inst, float value) { inst.WriteOffset(0x114, value); }
	inline bool SetConstAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x118, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionLinearInterpolate = sizeof(UMaterialExpressionLinearInterpolate); // 288
    static_assert(sizeof(UMaterialExpressionLinearInterpolate) == 0x120, "Size of UMaterialExpressionLinearInterpolate is not correct.");
	auto constexpr UMaterialExpressionLinearInterpolate_A_Offset = offsetof(UMaterialExpressionLinearInterpolate, A);
	static_assert(UMaterialExpressionLinearInterpolate_A_Offset == 0x68, "UMaterialExpressionLinearInterpolate::A offset is not 68");
	auto constexpr UMaterialExpressionLinearInterpolate_B_Offset = offsetof(UMaterialExpressionLinearInterpolate, B);
	static_assert(UMaterialExpressionLinearInterpolate_B_Offset == 0xa0, "UMaterialExpressionLinearInterpolate::B offset is not a0");
	auto constexpr UMaterialExpressionLinearInterpolate_Alpha_Offset = offsetof(UMaterialExpressionLinearInterpolate, Alpha);
	static_assert(UMaterialExpressionLinearInterpolate_Alpha_Offset == 0xd8, "UMaterialExpressionLinearInterpolate::Alpha offset is not d8");
	auto constexpr UMaterialExpressionLinearInterpolate_ConstA_Offset = offsetof(UMaterialExpressionLinearInterpolate, ConstA);
	static_assert(UMaterialExpressionLinearInterpolate_ConstA_Offset == 0x110, "UMaterialExpressionLinearInterpolate::ConstA offset is not 110");
	auto constexpr UMaterialExpressionLinearInterpolate_ConstB_Offset = offsetof(UMaterialExpressionLinearInterpolate, ConstB);
	static_assert(UMaterialExpressionLinearInterpolate_ConstB_Offset == 0x114, "UMaterialExpressionLinearInterpolate::ConstB offset is not 114");
	auto constexpr UMaterialExpressionLinearInterpolate_ConstAlpha_Offset = offsetof(UMaterialExpressionLinearInterpolate, ConstAlpha);
	static_assert(UMaterialExpressionLinearInterpolate_ConstAlpha_Offset == 0x118, "UMaterialExpressionLinearInterpolate::ConstAlpha offset is not 118");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
