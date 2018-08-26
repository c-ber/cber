#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionQualitySwitch // Size: 0x148
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionQualitySwitch t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(969); // id32("Class Engine.MaterialExpressionQualitySwitch")
		return ptr;
	}
	FExpressionInput Default; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionQualitySwitch.Default */
	FExpressionInput Inputs[3]; /* Ofs: 0x3 Size: 0x38 - StructProperty Engine.MaterialExpressionQualitySwitch.Inputs */


	inline bool SetDefault(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionQualitySwitch = sizeof(UMaterialExpressionQualitySwitch); // 328
    static_assert(sizeof(UMaterialExpressionQualitySwitch) == 0x148, "Size of UMaterialExpressionQualitySwitch is not correct.");
	auto constexpr UMaterialExpressionQualitySwitch_Default_Offset = offsetof(UMaterialExpressionQualitySwitch, Default);
	static_assert(UMaterialExpressionQualitySwitch_Default_Offset == 0x68, "UMaterialExpressionQualitySwitch::Default offset is not 68");
	auto constexpr UMaterialExpressionQualitySwitch_Inputs_Offset = offsetof(UMaterialExpressionQualitySwitch, Inputs);
	static_assert(UMaterialExpressionQualitySwitch_Inputs_Offset == 0xa0, "UMaterialExpressionQualitySwitch::Inputs offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
