#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_VerticalBox.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeRankingWidget // Size: 0x338
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UWarModeRankingWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1597); // id32("Class TslGame.WarModeRankingWidget")
		return ptr;
	}
	TArray<ExternalPtr<struct UWarModeRankingItemWidget>> RankingItemWidgets; /* Ofs: 0x300 Size: 0x10 - ArrayProperty TslGame.WarModeRankingWidget.RankingItemWidgets */
	FUmgWidgetBinder_VerticalBox RankingWidget; /* Ofs: 0x310 Size: 0x20 - StructProperty TslGame.WarModeRankingWidget.RankingWidget */
	ExternalPtr<struct UClass> RankingItemWidgetClass; /* Ofs: 0x330 Size: 0x8 - ClassProperty TslGame.WarModeRankingWidget.RankingItemWidgetClass */


	inline bool SetRankingItemWidgets(t_structHelper inst, TArray<ExternalPtr<struct UWarModeRankingItemWidget>> value) { inst.WriteOffset(0x300, value); }
	inline bool SetRankingWidget(t_structHelper inst, FUmgWidgetBinder_VerticalBox value) { inst.WriteOffset(0x310, value); }
	inline bool SetRankingItemWidgetClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x330, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeRankingWidget = sizeof(UWarModeRankingWidget); // 824
    static_assert(sizeof(UWarModeRankingWidget) == 0x338, "Size of UWarModeRankingWidget is not correct.");
	auto constexpr UWarModeRankingWidget_RankingItemWidgets_Offset = offsetof(UWarModeRankingWidget, RankingItemWidgets);
	static_assert(UWarModeRankingWidget_RankingItemWidgets_Offset == 0x300, "UWarModeRankingWidget::RankingItemWidgets offset is not 300");
	auto constexpr UWarModeRankingWidget_RankingWidget_Offset = offsetof(UWarModeRankingWidget, RankingWidget);
	static_assert(UWarModeRankingWidget_RankingWidget_Offset == 0x310, "UWarModeRankingWidget::RankingWidget offset is not 310");
	auto constexpr UWarModeRankingWidget_RankingItemWidgetClass_Offset = offsetof(UWarModeRankingWidget, RankingItemWidgetClass);
	static_assert(UWarModeRankingWidget_RankingItemWidgetClass_Offset == 0x330, "UWarModeRankingWidget::RankingItemWidgetClass offset is not 330");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
