#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_CanvasPanel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslTeamWidget // Size: 0x338
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslTeamWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1587); // id32("Class TslGame.TslTeamWidget")
		return ptr;
	}
	TArray<ExternalPtr<struct UTeamMarkWidget>> TeamMarkWidgets; /* Ofs: 0x300 Size: 0x10 - ArrayProperty TslGame.TslTeamWidget.TeamMarkWidgets */
	ExternalPtr<struct UClass> TeamMarkWidgetClass; /* Ofs: 0x310 Size: 0x8 - ClassProperty TslGame.TslTeamWidget.TeamMarkWidgetClass */
	FUmgWidgetBinder_CanvasPanel TeamMarkerLayerBinder; /* Ofs: 0x318 Size: 0x20 - StructProperty TslGame.TslTeamWidget.TeamMarkerLayerBinder */


	inline bool SetTeamMarkWidgets(t_structHelper inst, TArray<ExternalPtr<struct UTeamMarkWidget>> value) { inst.WriteOffset(0x300, value); }
	inline bool SetTeamMarkWidgetClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x310, value); }
	inline bool SetTeamMarkerLayerBinder(t_structHelper inst, FUmgWidgetBinder_CanvasPanel value) { inst.WriteOffset(0x318, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslTeamWidget = sizeof(UTslTeamWidget); // 824
    static_assert(sizeof(UTslTeamWidget) == 0x338, "Size of UTslTeamWidget is not correct.");
	auto constexpr UTslTeamWidget_TeamMarkWidgets_Offset = offsetof(UTslTeamWidget, TeamMarkWidgets);
	static_assert(UTslTeamWidget_TeamMarkWidgets_Offset == 0x300, "UTslTeamWidget::TeamMarkWidgets offset is not 300");
	auto constexpr UTslTeamWidget_TeamMarkWidgetClass_Offset = offsetof(UTslTeamWidget, TeamMarkWidgetClass);
	static_assert(UTslTeamWidget_TeamMarkWidgetClass_Offset == 0x310, "UTslTeamWidget::TeamMarkWidgetClass offset is not 310");
	auto constexpr UTslTeamWidget_TeamMarkerLayerBinder_Offset = offsetof(UTslTeamWidget, TeamMarkerLayerBinder);
	static_assert(UTslTeamWidget_TeamMarkerLayerBinder_Offset == 0x318, "UTslTeamWidget::TeamMarkerLayerBinder offset is not 318");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
