#pragma once
#include "EUINavigationRule.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWidgetNavigationData // Size: 0x18
{
public:
    TEnumAsByte<enum EUINavigationRule> Rule; /* Ofs: 0x0 Size: 0x1 EnumProperty UMG.WidgetNavigationData.Rule */
    uint8_t UnknownData1[0x7];
    FName WidgetToFocus; /* Ofs: 0x8 Size: 0x8 NameProperty UMG.WidgetNavigationData.WidgetToFocus */
    TWeakObjectPtr<ExternalPtr<struct UWidget>> Widget; /* Ofs: 0x10 Size: 0x8 WeakObjectProperty UMG.WidgetNavigationData.Widget */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWidgetNavigationData = sizeof(FWidgetNavigationData); // 24
    static_assert(sizeof(FWidgetNavigationData) == 0x18, "Size of FWidgetNavigationData is not correct.");
	auto constexpr FWidgetNavigationData_Rule_Offset = offsetof(FWidgetNavigationData, Rule);
	static_assert(FWidgetNavigationData_Rule_Offset == 0x0, "FWidgetNavigationData::Rule offset is not 0");
	auto constexpr FWidgetNavigationData_WidgetToFocus_Offset = offsetof(FWidgetNavigationData, WidgetToFocus);
	static_assert(FWidgetNavigationData_WidgetToFocus_Offset == 0x8, "FWidgetNavigationData::WidgetToFocus offset is not 8");
	auto constexpr FWidgetNavigationData_Widget_Offset = offsetof(FWidgetNavigationData, Widget);
	static_assert(FWidgetNavigationData_Widget_Offset == 0x10, "FWidgetNavigationData::Widget offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
