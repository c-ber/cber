#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTangent // Size: 0xA8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionTangent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(991); // id32("Class Engine.MaterialExpressionTangent")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionTangent.Input */
	float Period; /* Ofs: 0xA0 Size: 0x4 - FloatProperty Engine.MaterialExpressionTangent.Period */
	uint8_t UnknownDataA4[0x4];


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetPeriod(t_structHelper inst, float value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTangent = sizeof(UMaterialExpressionTangent); // 168
    static_assert(sizeof(UMaterialExpressionTangent) == 0xA8, "Size of UMaterialExpressionTangent is not correct.");
	auto constexpr UMaterialExpressionTangent_Input_Offset = offsetof(UMaterialExpressionTangent, Input);
	static_assert(UMaterialExpressionTangent_Input_Offset == 0x68, "UMaterialExpressionTangent::Input offset is not 68");
	auto constexpr UMaterialExpressionTangent_Period_Offset = offsetof(UMaterialExpressionTangent, Period);
	static_assert(UMaterialExpressionTangent_Period_Offset == 0xa0, "UMaterialExpressionTangent::Period offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
