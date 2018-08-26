#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_VerticalBox.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslTeamInfoListWidget // Size: 0x340
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslTeamInfoListWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1585); // id32("Class TslGame.TslTeamInfoListWidget")
		return ptr;
	}
	TArray<ExternalPtr<struct UTslTeamInfoWidget>> TeamInfoWidgetList; /* Ofs: 0x300 Size: 0x10 - ArrayProperty TslGame.TslTeamInfoListWidget.TeamInfoWidgetList */
	ExternalPtr<struct UClass> TeamInfoWidgetClass; /* Ofs: 0x310 Size: 0x8 - ClassProperty TslGame.TslTeamInfoListWidget.TeamInfoWidgetClass */
	FUmgWidgetBinder_VerticalBox VerticalBoxBinder; /* Ofs: 0x318 Size: 0x20 - StructProperty TslGame.TslTeamInfoListWidget.VerticalBoxBinder */
	ExternalPtr<struct UTeam> Team; /* Ofs: 0x338 Size: 0x8 - ObjectProperty TslGame.TslTeamInfoListWidget.Team */


	inline bool SetTeamInfoWidgetList(t_structHelper inst, TArray<ExternalPtr<struct UTslTeamInfoWidget>> value) { inst.WriteOffset(0x300, value); }
	inline bool SetTeamInfoWidgetClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x310, value); }
	inline bool SetVerticalBoxBinder(t_structHelper inst, FUmgWidgetBinder_VerticalBox value) { inst.WriteOffset(0x318, value); }
	inline bool SetTeam(t_structHelper inst, ExternalPtr<struct UTeam> value) { inst.WriteOffset(0x338, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslTeamInfoListWidget = sizeof(UTslTeamInfoListWidget); // 832
    static_assert(sizeof(UTslTeamInfoListWidget) == 0x340, "Size of UTslTeamInfoListWidget is not correct.");
	auto constexpr UTslTeamInfoListWidget_TeamInfoWidgetList_Offset = offsetof(UTslTeamInfoListWidget, TeamInfoWidgetList);
	static_assert(UTslTeamInfoListWidget_TeamInfoWidgetList_Offset == 0x300, "UTslTeamInfoListWidget::TeamInfoWidgetList offset is not 300");
	auto constexpr UTslTeamInfoListWidget_TeamInfoWidgetClass_Offset = offsetof(UTslTeamInfoListWidget, TeamInfoWidgetClass);
	static_assert(UTslTeamInfoListWidget_TeamInfoWidgetClass_Offset == 0x310, "UTslTeamInfoListWidget::TeamInfoWidgetClass offset is not 310");
	auto constexpr UTslTeamInfoListWidget_VerticalBoxBinder_Offset = offsetof(UTslTeamInfoListWidget, VerticalBoxBinder);
	static_assert(UTslTeamInfoListWidget_VerticalBoxBinder_Offset == 0x318, "UTslTeamInfoListWidget::VerticalBoxBinder offset is not 318");
	auto constexpr UTslTeamInfoListWidget_Team_Offset = offsetof(UTslTeamInfoListWidget, Team);
	static_assert(UTslTeamInfoListWidget_Team_Offset == 0x338, "UTslTeamInfoListWidget::Team offset is not 338");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
