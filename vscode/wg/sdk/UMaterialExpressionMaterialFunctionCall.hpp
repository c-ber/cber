#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionMaterialFunctionCall // Size: 0x90
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionMaterialFunctionCall t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(931); // id32("Class Engine.MaterialExpressionMaterialFunctionCall")
		return ptr;
	}
	ExternalPtr<struct UMaterialFunction> MaterialFunction; /* Ofs: 0x68 Size: 0x8 - ObjectProperty Engine.MaterialExpressionMaterialFunctionCall.MaterialFunction */
	TArray<struct FFunctionExpressionInput> FunctionInputs; /* Ofs: 0x70 Size: 0x10 - ArrayProperty Engine.MaterialExpressionMaterialFunctionCall.FunctionInputs */
	TArray<struct FFunctionExpressionOutput> FunctionOutputs; /* Ofs: 0x80 Size: 0x10 - ArrayProperty Engine.MaterialExpressionMaterialFunctionCall.FunctionOutputs */


	inline bool SetMaterialFunction(t_structHelper inst, ExternalPtr<struct UMaterialFunction> value) { inst.WriteOffset(0x68, value); }
	inline bool SetFunctionInputs(t_structHelper inst, TArray<struct FFunctionExpressionInput> value) { inst.WriteOffset(0x70, value); }
	inline bool SetFunctionOutputs(t_structHelper inst, TArray<struct FFunctionExpressionOutput> value) { inst.WriteOffset(0x80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionMaterialFunctionCall = sizeof(UMaterialExpressionMaterialFunctionCall); // 144
    static_assert(sizeof(UMaterialExpressionMaterialFunctionCall) == 0x90, "Size of UMaterialExpressionMaterialFunctionCall is not correct.");
	auto constexpr UMaterialExpressionMaterialFunctionCall_MaterialFunction_Offset = offsetof(UMaterialExpressionMaterialFunctionCall, MaterialFunction);
	static_assert(UMaterialExpressionMaterialFunctionCall_MaterialFunction_Offset == 0x68, "UMaterialExpressionMaterialFunctionCall::MaterialFunction offset is not 68");
	auto constexpr UMaterialExpressionMaterialFunctionCall_FunctionInputs_Offset = offsetof(UMaterialExpressionMaterialFunctionCall, FunctionInputs);
	static_assert(UMaterialExpressionMaterialFunctionCall_FunctionInputs_Offset == 0x70, "UMaterialExpressionMaterialFunctionCall::FunctionInputs offset is not 70");
	auto constexpr UMaterialExpressionMaterialFunctionCall_FunctionOutputs_Offset = offsetof(UMaterialExpressionMaterialFunctionCall, FunctionOutputs);
	static_assert(UMaterialExpressionMaterialFunctionCall_FunctionOutputs_Offset == 0x80, "UMaterialExpressionMaterialFunctionCall::FunctionOutputs offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
