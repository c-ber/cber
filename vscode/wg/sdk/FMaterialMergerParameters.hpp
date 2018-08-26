#pragma once
#include "EMaterialParameterType.hpp"
#include "EParameterLUTChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMaterialMergerParameters // Size: 0x18
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.MaterialMergerParameters.Name */
    TEnumAsByte<enum EMaterialParameterType> Type; /* Ofs: 0x8 Size: 0x1 EnumProperty TslGame.MaterialMergerParameters.Type */
    bool bStoreToLUT; /* Ofs: 0x9 Size: 0x1 BitMask: 01 BoolProperty TslGame.MaterialMergerParameters.bStoreToLUT */
    uint8_t UnknownDataA[0x2];
    int32_t LUTIndex; /* Ofs: 0xC Size: 0x4 IntProperty TslGame.MaterialMergerParameters.LUTIndex */
    TEnumAsByte<enum EParameterLUTChannel> LUTChannel; /* Ofs: 0x10 Size: 0x1 EnumProperty TslGame.MaterialMergerParameters.LUTChannel */
    uint8_t UnknownData11[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMaterialMergerParameters = sizeof(FMaterialMergerParameters); // 24
    static_assert(sizeof(FMaterialMergerParameters) == 0x18, "Size of FMaterialMergerParameters is not correct.");
	auto constexpr FMaterialMergerParameters_Name_Offset = offsetof(FMaterialMergerParameters, Name);
	static_assert(FMaterialMergerParameters_Name_Offset == 0x0, "FMaterialMergerParameters::Name offset is not 0");
	auto constexpr FMaterialMergerParameters_Type_Offset = offsetof(FMaterialMergerParameters, Type);
	static_assert(FMaterialMergerParameters_Type_Offset == 0x8, "FMaterialMergerParameters::Type offset is not 8");
	auto constexpr FMaterialMergerParameters_LUTIndex_Offset = offsetof(FMaterialMergerParameters, LUTIndex);
	static_assert(FMaterialMergerParameters_LUTIndex_Offset == 0xc, "FMaterialMergerParameters::LUTIndex offset is not c");
	auto constexpr FMaterialMergerParameters_LUTChannel_Offset = offsetof(FMaterialMergerParameters, LUTChannel);
	static_assert(FMaterialMergerParameters_LUTChannel_Offset == 0x10, "FMaterialMergerParameters::LUTChannel offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
