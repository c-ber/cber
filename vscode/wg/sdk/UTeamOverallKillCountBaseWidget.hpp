#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_WidgetSwitcher.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTeamOverallKillCountBaseWidget // Size: 0x388
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTeamOverallKillCountBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1546); // id32("Class TslGame.TeamOverallKillCountBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_TextBlock TeamOverallKillCountTextBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.TeamOverallKillCountBaseWidget.TeamOverallKillCountTextBinder */
	FUmgWidgetBinder_Image TeamIconImageBinder; /* Ofs: 0x320 Size: 0x28 - StructProperty TslGame.TeamOverallKillCountBaseWidget.TeamIconImageBinder */
	FUmgWidgetBinder_WidgetSwitcher TeamIconWidgetSwitcher; /* Ofs: 0x348 Size: 0x20 - StructProperty TslGame.TeamOverallKillCountBaseWidget.TeamIconWidgetSwitcher */
	int32_t TotalKillTextIndex; /* Ofs: 0x368 Size: 0x4 - IntProperty TslGame.TeamOverallKillCountBaseWidget.TotalKillTextIndex */
	int32_t TeamIconImageIndex; /* Ofs: 0x36C Size: 0x4 - IntProperty TslGame.TeamOverallKillCountBaseWidget.TeamIconImageIndex */
	float DesiredXStart; /* Ofs: 0x370 Size: 0x4 - FloatProperty TslGame.TeamOverallKillCountBaseWidget.DesiredXStart */
	float DesiredXEnd; /* Ofs: 0x374 Size: 0x4 - FloatProperty TslGame.TeamOverallKillCountBaseWidget.DesiredXEnd */
	float DesiredYStart; /* Ofs: 0x378 Size: 0x4 - FloatProperty TslGame.TeamOverallKillCountBaseWidget.DesiredYStart */
	float DesiredYEnd; /* Ofs: 0x37C Size: 0x4 - FloatProperty TslGame.TeamOverallKillCountBaseWidget.DesiredYEnd */
	int32_t LastTeamOverallKillCount; /* Ofs: 0x380 Size: 0x4 - IntProperty TslGame.TeamOverallKillCountBaseWidget.LastTeamOverallKillCount */
	uint8_t boolField384;
	uint8_t UnknownData385[0x3];


	inline bool SetTeamOverallKillCountTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x300, value); }
	inline bool SetTeamIconImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x320, value); }
	inline bool SetTeamIconWidgetSwitcher(t_structHelper inst, FUmgWidgetBinder_WidgetSwitcher value) { inst.WriteOffset(0x348, value); }
	inline bool SetTotalKillTextIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x368, value); }
	inline bool SetTeamIconImageIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x36C, value); }
	inline bool SetDesiredXStart(t_structHelper inst, float value) { inst.WriteOffset(0x370, value); }
	inline bool SetDesiredXEnd(t_structHelper inst, float value) { inst.WriteOffset(0x374, value); }
	inline bool SetDesiredYStart(t_structHelper inst, float value) { inst.WriteOffset(0x378, value); }
	inline bool SetDesiredYEnd(t_structHelper inst, float value) { inst.WriteOffset(0x37C, value); }
	inline bool SetLastTeamOverallKillCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x380, value); }
	inline bool bLastWantShow()
	{
		return boolField384& 0x1;
	}
	inline bool SetbLastWantShow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x384, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTeamOverallKillCountBaseWidget = sizeof(UTeamOverallKillCountBaseWidget); // 904
    static_assert(sizeof(UTeamOverallKillCountBaseWidget) == 0x388, "Size of UTeamOverallKillCountBaseWidget is not correct.");
	auto constexpr UTeamOverallKillCountBaseWidget_TeamOverallKillCountTextBinder_Offset = offsetof(UTeamOverallKillCountBaseWidget, TeamOverallKillCountTextBinder);
	static_assert(UTeamOverallKillCountBaseWidget_TeamOverallKillCountTextBinder_Offset == 0x300, "UTeamOverallKillCountBaseWidget::TeamOverallKillCountTextBinder offset is not 300");
	auto constexpr UTeamOverallKillCountBaseWidget_TeamIconImageBinder_Offset = offsetof(UTeamOverallKillCountBaseWidget, TeamIconImageBinder);
	static_assert(UTeamOverallKillCountBaseWidget_TeamIconImageBinder_Offset == 0x320, "UTeamOverallKillCountBaseWidget::TeamIconImageBinder offset is not 320");
	auto constexpr UTeamOverallKillCountBaseWidget_TeamIconWidgetSwitcher_Offset = offsetof(UTeamOverallKillCountBaseWidget, TeamIconWidgetSwitcher);
	static_assert(UTeamOverallKillCountBaseWidget_TeamIconWidgetSwitcher_Offset == 0x348, "UTeamOverallKillCountBaseWidget::TeamIconWidgetSwitcher offset is not 348");
	auto constexpr UTeamOverallKillCountBaseWidget_TotalKillTextIndex_Offset = offsetof(UTeamOverallKillCountBaseWidget, TotalKillTextIndex);
	static_assert(UTeamOverallKillCountBaseWidget_TotalKillTextIndex_Offset == 0x368, "UTeamOverallKillCountBaseWidget::TotalKillTextIndex offset is not 368");
	auto constexpr UTeamOverallKillCountBaseWidget_TeamIconImageIndex_Offset = offsetof(UTeamOverallKillCountBaseWidget, TeamIconImageIndex);
	static_assert(UTeamOverallKillCountBaseWidget_TeamIconImageIndex_Offset == 0x36c, "UTeamOverallKillCountBaseWidget::TeamIconImageIndex offset is not 36c");
	auto constexpr UTeamOverallKillCountBaseWidget_DesiredXStart_Offset = offsetof(UTeamOverallKillCountBaseWidget, DesiredXStart);
	static_assert(UTeamOverallKillCountBaseWidget_DesiredXStart_Offset == 0x370, "UTeamOverallKillCountBaseWidget::DesiredXStart offset is not 370");
	auto constexpr UTeamOverallKillCountBaseWidget_DesiredXEnd_Offset = offsetof(UTeamOverallKillCountBaseWidget, DesiredXEnd);
	static_assert(UTeamOverallKillCountBaseWidget_DesiredXEnd_Offset == 0x374, "UTeamOverallKillCountBaseWidget::DesiredXEnd offset is not 374");
	auto constexpr UTeamOverallKillCountBaseWidget_DesiredYStart_Offset = offsetof(UTeamOverallKillCountBaseWidget, DesiredYStart);
	static_assert(UTeamOverallKillCountBaseWidget_DesiredYStart_Offset == 0x378, "UTeamOverallKillCountBaseWidget::DesiredYStart offset is not 378");
	auto constexpr UTeamOverallKillCountBaseWidget_DesiredYEnd_Offset = offsetof(UTeamOverallKillCountBaseWidget, DesiredYEnd);
	static_assert(UTeamOverallKillCountBaseWidget_DesiredYEnd_Offset == 0x37c, "UTeamOverallKillCountBaseWidget::DesiredYEnd offset is not 37c");
	auto constexpr UTeamOverallKillCountBaseWidget_LastTeamOverallKillCount_Offset = offsetof(UTeamOverallKillCountBaseWidget, LastTeamOverallKillCount);
	static_assert(UTeamOverallKillCountBaseWidget_LastTeamOverallKillCount_Offset == 0x380, "UTeamOverallKillCountBaseWidget::LastTeamOverallKillCount offset is not 380");
	auto constexpr UTeamOverallKillCountBaseWidget_boolField384_Offset = offsetof(UTeamOverallKillCountBaseWidget, boolField384);
	static_assert(UTeamOverallKillCountBaseWidget_boolField384_Offset == 0x384, "UTeamOverallKillCountBaseWidget::boolField384 offset is not 384");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
