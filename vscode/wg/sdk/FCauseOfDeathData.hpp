#pragma once
#include "FTableRowBase.hpp"
#include "EDamageTypeCategory.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCauseOfDeathData // Size: 0x20
 : public FTableRowBase // Size: 0x8
{
public:
    TEnumAsByte<enum EDamageTypeCategory> DamageTypeCategory; /* Ofs: 0x8 Size: 0x1 EnumProperty TslGame.CauseOfDeathData.DamageTypeCategory */
    uint8_t UnknownData9[0x7];
    ExternalPtr<struct UTexture> CauseOfDeathIcon; /* Ofs: 0x10 Size: 0x8 ObjectProperty TslGame.CauseOfDeathData.CauseOfDeathIcon */
    float IconRatio; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.CauseOfDeathData.IconRatio */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCauseOfDeathData = sizeof(FCauseOfDeathData); // 32
    static_assert(sizeof(FCauseOfDeathData) == 0x20, "Size of FCauseOfDeathData is not correct.");
	auto constexpr FCauseOfDeathData_DamageTypeCategory_Offset = offsetof(FCauseOfDeathData, DamageTypeCategory);
	static_assert(FCauseOfDeathData_DamageTypeCategory_Offset == 0x8, "FCauseOfDeathData::DamageTypeCategory offset is not 8");
	auto constexpr FCauseOfDeathData_CauseOfDeathIcon_Offset = offsetof(FCauseOfDeathData, CauseOfDeathIcon);
	static_assert(FCauseOfDeathData_CauseOfDeathIcon_Offset == 0x10, "FCauseOfDeathData::CauseOfDeathIcon offset is not 10");
	auto constexpr FCauseOfDeathData_IconRatio_Offset = offsetof(FCauseOfDeathData, IconRatio);
	static_assert(FCauseOfDeathData_IconRatio_Offset == 0x18, "FCauseOfDeathData::IconRatio offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
