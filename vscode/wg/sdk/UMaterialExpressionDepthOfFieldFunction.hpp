#pragma once
#include "UMaterialExpression.hpp"
#include "EDepthOfFieldFunctionValue.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionDepthOfFieldFunction // Size: 0xA8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionDepthOfFieldFunction t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(902); // id32("Class Engine.MaterialExpressionDepthOfFieldFunction")
		return ptr;
	}
	TEnumAsByte<enum EDepthOfFieldFunctionValue> FunctionValue; /* Ofs: 0x68 Size: 0x1 - ByteProperty Engine.MaterialExpressionDepthOfFieldFunction.FunctionValue */
	uint8_t UnknownData69[0x7];
	FExpressionInput Depth; /* Ofs: 0x70 Size: 0x38 - StructProperty Engine.MaterialExpressionDepthOfFieldFunction.Depth */


	inline bool SetFunctionValue(t_structHelper inst, TEnumAsByte<enum EDepthOfFieldFunctionValue> value) { inst.WriteOffset(0x68, value); }
	inline bool SetDepth(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionDepthOfFieldFunction = sizeof(UMaterialExpressionDepthOfFieldFunction); // 168
    static_assert(sizeof(UMaterialExpressionDepthOfFieldFunction) == 0xA8, "Size of UMaterialExpressionDepthOfFieldFunction is not correct.");
	auto constexpr UMaterialExpressionDepthOfFieldFunction_FunctionValue_Offset = offsetof(UMaterialExpressionDepthOfFieldFunction, FunctionValue);
	static_assert(UMaterialExpressionDepthOfFieldFunction_FunctionValue_Offset == 0x68, "UMaterialExpressionDepthOfFieldFunction::FunctionValue offset is not 68");
	auto constexpr UMaterialExpressionDepthOfFieldFunction_Depth_Offset = offsetof(UMaterialExpressionDepthOfFieldFunction, Depth);
	static_assert(UMaterialExpressionDepthOfFieldFunction_Depth_Offset == 0x70, "UMaterialExpressionDepthOfFieldFunction::Depth offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
