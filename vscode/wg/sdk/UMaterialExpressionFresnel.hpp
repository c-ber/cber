#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionFresnel // Size: 0x120
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionFresnel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(919); // id32("Class Engine.MaterialExpressionFresnel")
		return ptr;
	}
	FExpressionInput ExponentIn; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionFresnel.ExponentIn */
	float Exponent; /* Ofs: 0xA0 Size: 0x4 - FloatProperty Engine.MaterialExpressionFresnel.Exponent */
	uint8_t UnknownDataA4[0x4];
	FExpressionInput BaseReflectFractionIn; /* Ofs: 0xA8 Size: 0x38 - StructProperty Engine.MaterialExpressionFresnel.BaseReflectFractionIn */
	float BaseReflectFraction; /* Ofs: 0xE0 Size: 0x4 - FloatProperty Engine.MaterialExpressionFresnel.BaseReflectFraction */
	uint8_t UnknownDataE4[0x4];
	FExpressionInput Normal; /* Ofs: 0xE8 Size: 0x38 - StructProperty Engine.MaterialExpressionFresnel.Normal */


	inline bool SetExponentIn(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetExponent(t_structHelper inst, float value) { inst.WriteOffset(0xA0, value); }
	inline bool SetBaseReflectFractionIn(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA8, value); }
	inline bool SetBaseReflectFraction(t_structHelper inst, float value) { inst.WriteOffset(0xE0, value); }
	inline bool SetNormal(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xE8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionFresnel = sizeof(UMaterialExpressionFresnel); // 288
    static_assert(sizeof(UMaterialExpressionFresnel) == 0x120, "Size of UMaterialExpressionFresnel is not correct.");
	auto constexpr UMaterialExpressionFresnel_ExponentIn_Offset = offsetof(UMaterialExpressionFresnel, ExponentIn);
	static_assert(UMaterialExpressionFresnel_ExponentIn_Offset == 0x68, "UMaterialExpressionFresnel::ExponentIn offset is not 68");
	auto constexpr UMaterialExpressionFresnel_Exponent_Offset = offsetof(UMaterialExpressionFresnel, Exponent);
	static_assert(UMaterialExpressionFresnel_Exponent_Offset == 0xa0, "UMaterialExpressionFresnel::Exponent offset is not a0");
	auto constexpr UMaterialExpressionFresnel_BaseReflectFractionIn_Offset = offsetof(UMaterialExpressionFresnel, BaseReflectFractionIn);
	static_assert(UMaterialExpressionFresnel_BaseReflectFractionIn_Offset == 0xa8, "UMaterialExpressionFresnel::BaseReflectFractionIn offset is not a8");
	auto constexpr UMaterialExpressionFresnel_BaseReflectFraction_Offset = offsetof(UMaterialExpressionFresnel, BaseReflectFraction);
	static_assert(UMaterialExpressionFresnel_BaseReflectFraction_Offset == 0xe0, "UMaterialExpressionFresnel::BaseReflectFraction offset is not e0");
	auto constexpr UMaterialExpressionFresnel_Normal_Offset = offsetof(UMaterialExpressionFresnel, Normal);
	static_assert(UMaterialExpressionFresnel_Normal_Offset == 0xe8, "UMaterialExpressionFresnel::Normal offset is not e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
