#pragma once
#include "FMutableParamUIMetadata.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FIntegerParameterUIData // Size: 0xF8
{
public:
    FString Name; /* Ofs: 0x0 Size: 0x10 StrProperty CustomizableObject.IntegerParameterUIData.Name */
    FMutableParamUIMetadata ParamUIMetadata; /* Ofs: 0x10 Size: 0xE8 StructProperty CustomizableObject.IntegerParameterUIData.ParamUIMetadata */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFIntegerParameterUIData = sizeof(FIntegerParameterUIData); // 248
    static_assert(sizeof(FIntegerParameterUIData) == 0xF8, "Size of FIntegerParameterUIData is not correct.");
	auto constexpr FIntegerParameterUIData_Name_Offset = offsetof(FIntegerParameterUIData, Name);
	static_assert(FIntegerParameterUIData_Name_Offset == 0x0, "FIntegerParameterUIData::Name offset is not 0");
	auto constexpr FIntegerParameterUIData_ParamUIMetadata_Offset = offsetof(FIntegerParameterUIData, ParamUIMetadata);
	static_assert(FIntegerParameterUIData_ParamUIMetadata_Offset == 0x10, "FIntegerParameterUIData::ParamUIMetadata offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
