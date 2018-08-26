#pragma once
#include "UBlockInputUserWidget.hpp"
#include "FUmgWidgetBinder_Gerneral.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslXboxTeamManageWidget // Size: 0x350
	: public UBlockInputUserWidget // Size: 0x330
{
private:
	typedef UTslXboxTeamManageWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1514); // id32("Class TslGame.TslXboxTeamManageWidget")
		return ptr;
	}
	FUmgWidgetBinder_Gerneral TeamMemberVerticalBox_Binder; /* Ofs: 0x330 Size: 0x20 - StructProperty TslGame.TslXboxTeamManageWidget.TeamMemberVerticalBox_Binder */


	inline bool SetTeamMemberVerticalBox_Binder(t_structHelper inst, FUmgWidgetBinder_Gerneral value) { inst.WriteOffset(0x330, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslXboxTeamManageWidget = sizeof(UTslXboxTeamManageWidget); // 848
    static_assert(sizeof(UTslXboxTeamManageWidget) == 0x350, "Size of UTslXboxTeamManageWidget is not correct.");
	auto constexpr UTslXboxTeamManageWidget_TeamMemberVerticalBox_Binder_Offset = offsetof(UTslXboxTeamManageWidget, TeamMemberVerticalBox_Binder);
	static_assert(UTslXboxTeamManageWidget_TeamMemberVerticalBox_Binder_Offset == 0x330, "UTslXboxTeamManageWidget::TeamMemberVerticalBox_Binder offset is not 330");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
