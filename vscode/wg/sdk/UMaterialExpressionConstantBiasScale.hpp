#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionConstantBiasScale // Size: 0xA8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionConstantBiasScale t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(888); // id32("Class Engine.MaterialExpressionConstantBiasScale")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionConstantBiasScale.Input */
	float Bias; /* Ofs: 0xA0 Size: 0x4 - FloatProperty Engine.MaterialExpressionConstantBiasScale.Bias */
	float Scale; /* Ofs: 0xA4 Size: 0x4 - FloatProperty Engine.MaterialExpressionConstantBiasScale.Scale */


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetBias(t_structHelper inst, float value) { inst.WriteOffset(0xA0, value); }
	inline bool SetScale(t_structHelper inst, float value) { inst.WriteOffset(0xA4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionConstantBiasScale = sizeof(UMaterialExpressionConstantBiasScale); // 168
    static_assert(sizeof(UMaterialExpressionConstantBiasScale) == 0xA8, "Size of UMaterialExpressionConstantBiasScale is not correct.");
	auto constexpr UMaterialExpressionConstantBiasScale_Input_Offset = offsetof(UMaterialExpressionConstantBiasScale, Input);
	static_assert(UMaterialExpressionConstantBiasScale_Input_Offset == 0x68, "UMaterialExpressionConstantBiasScale::Input offset is not 68");
	auto constexpr UMaterialExpressionConstantBiasScale_Bias_Offset = offsetof(UMaterialExpressionConstantBiasScale, Bias);
	static_assert(UMaterialExpressionConstantBiasScale_Bias_Offset == 0xa0, "UMaterialExpressionConstantBiasScale::Bias offset is not a0");
	auto constexpr UMaterialExpressionConstantBiasScale_Scale_Offset = offsetof(UMaterialExpressionConstantBiasScale, Scale);
	static_assert(UMaterialExpressionConstantBiasScale_Scale_Offset == 0xa4, "UMaterialExpressionConstantBiasScale::Scale offset is not a4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
