#pragma once
#include "FGuid.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFunctionExpressionInput // Size: 0x50
{
public:
    ExternalPtr<struct UMaterialExpressionFunctionInput> ExpressionInput; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.FunctionExpressionInput.ExpressionInput */
    FGuid ExpressionInputId; /* Ofs: 0x8 Size: 0x10 StructProperty Engine.FunctionExpressionInput.ExpressionInputId */
    FExpressionInput Input; /* Ofs: 0x18 Size: 0x38 StructProperty Engine.FunctionExpressionInput.Input */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFunctionExpressionInput = sizeof(FFunctionExpressionInput); // 80
    static_assert(sizeof(FFunctionExpressionInput) == 0x50, "Size of FFunctionExpressionInput is not correct.");
	auto constexpr FFunctionExpressionInput_ExpressionInput_Offset = offsetof(FFunctionExpressionInput, ExpressionInput);
	static_assert(FFunctionExpressionInput_ExpressionInput_Offset == 0x0, "FFunctionExpressionInput::ExpressionInput offset is not 0");
	auto constexpr FFunctionExpressionInput_ExpressionInputId_Offset = offsetof(FFunctionExpressionInput, ExpressionInputId);
	static_assert(FFunctionExpressionInput_ExpressionInputId_Offset == 0x8, "FFunctionExpressionInput::ExpressionInputId offset is not 8");
	auto constexpr FFunctionExpressionInput_Input_Offset = offsetof(FFunctionExpressionInput, Input);
	static_assert(FFunctionExpressionInput_Input_Offset == 0x18, "FFunctionExpressionInput::Input offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
