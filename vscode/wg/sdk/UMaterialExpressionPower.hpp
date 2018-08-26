#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionPower // Size: 0xE0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionPower t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(964); // id32("Class Engine.MaterialExpressionPower")
		return ptr;
	}
	FExpressionInput Base; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionPower.Base */
	FExpressionInput Exponent; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionPower.Exponent */
	float ConstExponent; /* Ofs: 0xD8 Size: 0x4 - FloatProperty Engine.MaterialExpressionPower.ConstExponent */
	uint8_t UnknownDataDC[0x4];


	inline bool SetBase(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetExponent(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetConstExponent(t_structHelper inst, float value) { inst.WriteOffset(0xD8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionPower = sizeof(UMaterialExpressionPower); // 224
    static_assert(sizeof(UMaterialExpressionPower) == 0xE0, "Size of UMaterialExpressionPower is not correct.");
	auto constexpr UMaterialExpressionPower_Base_Offset = offsetof(UMaterialExpressionPower, Base);
	static_assert(UMaterialExpressionPower_Base_Offset == 0x68, "UMaterialExpressionPower::Base offset is not 68");
	auto constexpr UMaterialExpressionPower_Exponent_Offset = offsetof(UMaterialExpressionPower, Exponent);
	static_assert(UMaterialExpressionPower_Exponent_Offset == 0xa0, "UMaterialExpressionPower::Exponent offset is not a0");
	auto constexpr UMaterialExpressionPower_ConstExponent_Offset = offsetof(UMaterialExpressionPower, ConstExponent);
	static_assert(UMaterialExpressionPower_ConstExponent_Offset == 0xd8, "UMaterialExpressionPower::ConstExponent offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
