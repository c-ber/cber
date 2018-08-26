#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionCosine // Size: 0xA8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionCosine t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(889); // id32("Class Engine.MaterialExpressionCosine")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionCosine.Input */
	float Period; /* Ofs: 0xA0 Size: 0x4 - FloatProperty Engine.MaterialExpressionCosine.Period */
	uint8_t UnknownDataA4[0x4];


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetPeriod(t_structHelper inst, float value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionCosine = sizeof(UMaterialExpressionCosine); // 168
    static_assert(sizeof(UMaterialExpressionCosine) == 0xA8, "Size of UMaterialExpressionCosine is not correct.");
	auto constexpr UMaterialExpressionCosine_Input_Offset = offsetof(UMaterialExpressionCosine, Input);
	static_assert(UMaterialExpressionCosine_Input_Offset == 0x68, "UMaterialExpressionCosine::Input offset is not 68");
	auto constexpr UMaterialExpressionCosine_Period_Offset = offsetof(UMaterialExpressionCosine, Period);
	static_assert(UMaterialExpressionCosine_Period_Offset == 0xa0, "UMaterialExpressionCosine::Period offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
