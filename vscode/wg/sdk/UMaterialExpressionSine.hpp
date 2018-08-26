#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionSine // Size: 0xA8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionSine t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(983); // id32("Class Engine.MaterialExpressionSine")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionSine.Input */
	float Period; /* Ofs: 0xA0 Size: 0x4 - FloatProperty Engine.MaterialExpressionSine.Period */
	uint8_t UnknownDataA4[0x4];


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetPeriod(t_structHelper inst, float value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionSine = sizeof(UMaterialExpressionSine); // 168
    static_assert(sizeof(UMaterialExpressionSine) == 0xA8, "Size of UMaterialExpressionSine is not correct.");
	auto constexpr UMaterialExpressionSine_Input_Offset = offsetof(UMaterialExpressionSine, Input);
	static_assert(UMaterialExpressionSine_Input_Offset == 0x68, "UMaterialExpressionSine::Input offset is not 68");
	auto constexpr UMaterialExpressionSine_Period_Offset = offsetof(UMaterialExpressionSine, Period);
	static_assert(UMaterialExpressionSine_Period_Offset == 0xa0, "UMaterialExpressionSine::Period offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
