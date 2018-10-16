#pragma once
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomInput // Size: 0x48
{
public:
    FString InputName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.CustomInput.InputName */
    FExpressionInput Input; /* Ofs: 0x10 Size: 0x38 StructProperty Engine.CustomInput.Input */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomInput = sizeof(FCustomInput); // 72
    static_assert(sizeof(FCustomInput) == 0x48, "Size of FCustomInput is not correct.");
	auto constexpr FCustomInput_InputName_Offset = offsetof(FCustomInput, InputName);
	static_assert(FCustomInput_InputName_Offset == 0x0, "FCustomInput::InputName offset is not 0");
	auto constexpr FCustomInput_Input_Offset = offsetof(FCustomInput, Input);
	static_assert(FCustomInput_Input_Offset == 0x10, "FCustomInput::Input offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
