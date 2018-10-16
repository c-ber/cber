#pragma once
#include "EQualityType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FQualityLevelInfo // Size: 0x20
{
public:
    TEnumAsByte<enum EQualityType> QualityType; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.QualityLevelInfo.QualityType */
    uint8_t UnknownData1[0x7];
    FText DisplayQualityLevelName; /* Ofs: 0x8 Size: 0x18 TextProperty TslGame.QualityLevelInfo.DisplayQualityLevelName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFQualityLevelInfo = sizeof(FQualityLevelInfo); // 32
    static_assert(sizeof(FQualityLevelInfo) == 0x20, "Size of FQualityLevelInfo is not correct.");
	auto constexpr FQualityLevelInfo_QualityType_Offset = offsetof(FQualityLevelInfo, QualityType);
	static_assert(FQualityLevelInfo_QualityType_Offset == 0x0, "FQualityLevelInfo::QualityType offset is not 0");
	auto constexpr FQualityLevelInfo_DisplayQualityLevelName_Offset = offsetof(FQualityLevelInfo, DisplayQualityLevelName);
	static_assert(FQualityLevelInfo_DisplayQualityLevelName_Offset == 0x8, "FQualityLevelInfo::DisplayQualityLevelName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
