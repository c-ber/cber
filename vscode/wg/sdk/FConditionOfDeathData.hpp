#pragma once
#include "FTableRowBase.hpp"
#include "EConditionOfDeath.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FConditionOfDeathData // Size: 0x20
 : public FTableRowBase // Size: 0x8
{
public:
    TEnumAsByte<enum EConditionOfDeath> ConditionOfDeathCategory; /* Ofs: 0x8 Size: 0x1 EnumProperty TslGame.ConditionOfDeathData.ConditionOfDeathCategory */
    uint8_t UnknownData9[0x7];
    ExternalPtr<struct UTexture> ConditionOfDeathIcon; /* Ofs: 0x10 Size: 0x8 ObjectProperty TslGame.ConditionOfDeathData.ConditionOfDeathIcon */
    float IconRatio; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.ConditionOfDeathData.IconRatio */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFConditionOfDeathData = sizeof(FConditionOfDeathData); // 32
    static_assert(sizeof(FConditionOfDeathData) == 0x20, "Size of FConditionOfDeathData is not correct.");
	auto constexpr FConditionOfDeathData_ConditionOfDeathCategory_Offset = offsetof(FConditionOfDeathData, ConditionOfDeathCategory);
	static_assert(FConditionOfDeathData_ConditionOfDeathCategory_Offset == 0x8, "FConditionOfDeathData::ConditionOfDeathCategory offset is not 8");
	auto constexpr FConditionOfDeathData_ConditionOfDeathIcon_Offset = offsetof(FConditionOfDeathData, ConditionOfDeathIcon);
	static_assert(FConditionOfDeathData_ConditionOfDeathIcon_Offset == 0x10, "FConditionOfDeathData::ConditionOfDeathIcon offset is not 10");
	auto constexpr FConditionOfDeathData_IconRatio_Offset = offsetof(FConditionOfDeathData, IconRatio);
	static_assert(FConditionOfDeathData_IconRatio_Offset == 0x18, "FConditionOfDeathData::IconRatio offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
