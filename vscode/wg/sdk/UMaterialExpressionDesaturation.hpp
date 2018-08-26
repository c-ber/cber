#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionDesaturation // Size: 0xE8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionDesaturation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(904); // id32("Class Engine.MaterialExpressionDesaturation")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionDesaturation.Input */
	FExpressionInput Fraction; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionDesaturation.Fraction */
	FLinearColor LuminanceFactors; /* Ofs: 0xD8 Size: 0x10 - StructProperty Engine.MaterialExpressionDesaturation.LuminanceFactors */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetFraction(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetLuminanceFactors(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0xD8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionDesaturation = sizeof(UMaterialExpressionDesaturation); // 232
    static_assert(sizeof(UMaterialExpressionDesaturation) == 0xE8, "Size of UMaterialExpressionDesaturation is not correct.");
	auto constexpr UMaterialExpressionDesaturation_Input_Offset = offsetof(UMaterialExpressionDesaturation, Input);
	static_assert(UMaterialExpressionDesaturation_Input_Offset == 0x68, "UMaterialExpressionDesaturation::Input offset is not 68");
	auto constexpr UMaterialExpressionDesaturation_Fraction_Offset = offsetof(UMaterialExpressionDesaturation, Fraction);
	static_assert(UMaterialExpressionDesaturation_Fraction_Offset == 0xa0, "UMaterialExpressionDesaturation::Fraction offset is not a0");
	auto constexpr UMaterialExpressionDesaturation_LuminanceFactors_Offset = offsetof(UMaterialExpressionDesaturation, LuminanceFactors);
	static_assert(UMaterialExpressionDesaturation_LuminanceFactors_Offset == 0xd8, "UMaterialExpressionDesaturation::LuminanceFactors offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
