#pragma once
#include "UMaterialExpression.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionDynamicParameter // Size: 0x88
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionDynamicParameter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(911); // id32("Class Engine.MaterialExpressionDynamicParameter")
		return ptr;
	}
	TArray<struct FString> ParamNames; /* Ofs: 0x68 Size: 0x10 - ArrayProperty Engine.MaterialExpressionDynamicParameter.ParamNames */
	FLinearColor DefaultValue; /* Ofs: 0x78 Size: 0x10 - StructProperty Engine.MaterialExpressionDynamicParameter.DefaultValue */


	inline bool SetParamNames(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x68, value); }
	inline bool SetDefaultValue(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionDynamicParameter = sizeof(UMaterialExpressionDynamicParameter); // 136
    static_assert(sizeof(UMaterialExpressionDynamicParameter) == 0x88, "Size of UMaterialExpressionDynamicParameter is not correct.");
	auto constexpr UMaterialExpressionDynamicParameter_ParamNames_Offset = offsetof(UMaterialExpressionDynamicParameter, ParamNames);
	static_assert(UMaterialExpressionDynamicParameter_ParamNames_Offset == 0x68, "UMaterialExpressionDynamicParameter::ParamNames offset is not 68");
	auto constexpr UMaterialExpressionDynamicParameter_DefaultValue_Offset = offsetof(UMaterialExpressionDynamicParameter, DefaultValue);
	static_assert(UMaterialExpressionDynamicParameter_DefaultValue_Offset == 0x78, "UMaterialExpressionDynamicParameter::DefaultValue offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
