#pragma once
#include "FGuid.hpp"
#include "FExpressionOutput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFunctionExpressionOutput // Size: 0x40
{
public:
    ExternalPtr<struct UMaterialExpressionFunctionOutput> ExpressionOutput; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.FunctionExpressionOutput.ExpressionOutput */
    FGuid ExpressionOutputId; /* Ofs: 0x8 Size: 0x10 StructProperty Engine.FunctionExpressionOutput.ExpressionOutputId */
    FExpressionOutput Output; /* Ofs: 0x18 Size: 0x28 StructProperty Engine.FunctionExpressionOutput.Output */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFunctionExpressionOutput = sizeof(FFunctionExpressionOutput); // 64
    static_assert(sizeof(FFunctionExpressionOutput) == 0x40, "Size of FFunctionExpressionOutput is not correct.");
	auto constexpr FFunctionExpressionOutput_ExpressionOutput_Offset = offsetof(FFunctionExpressionOutput, ExpressionOutput);
	static_assert(FFunctionExpressionOutput_ExpressionOutput_Offset == 0x0, "FFunctionExpressionOutput::ExpressionOutput offset is not 0");
	auto constexpr FFunctionExpressionOutput_ExpressionOutputId_Offset = offsetof(FFunctionExpressionOutput, ExpressionOutputId);
	static_assert(FFunctionExpressionOutput_ExpressionOutputId_Offset == 0x8, "FFunctionExpressionOutput::ExpressionOutputId offset is not 8");
	auto constexpr FFunctionExpressionOutput_Output_Offset = offsetof(FFunctionExpressionOutput, Output);
	static_assert(FFunctionExpressionOutput_Output_Offset == 0x18, "FFunctionExpressionOutput::Output offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
