#pragma once
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGrassInput // Size: 0x48
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty Landscape.GrassInput.Name */
    ExternalPtr<struct ULandscapeGrassType> GrassType; /* Ofs: 0x8 Size: 0x8 ObjectProperty Landscape.GrassInput.GrassType */
    FExpressionInput Input; /* Ofs: 0x10 Size: 0x38 StructProperty Landscape.GrassInput.Input */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGrassInput = sizeof(FGrassInput); // 72
    static_assert(sizeof(FGrassInput) == 0x48, "Size of FGrassInput is not correct.");
	auto constexpr FGrassInput_Name_Offset = offsetof(FGrassInput, Name);
	static_assert(FGrassInput_Name_Offset == 0x0, "FGrassInput::Name offset is not 0");
	auto constexpr FGrassInput_GrassType_Offset = offsetof(FGrassInput, GrassType);
	static_assert(FGrassInput_GrassType_Offset == 0x8, "FGrassInput::GrassType offset is not 8");
	auto constexpr FGrassInput_Input_Offset = offsetof(FGrassInput, Input);
	static_assert(FGrassInput_Input_Offset == 0x10, "FGrassInput::Input offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
