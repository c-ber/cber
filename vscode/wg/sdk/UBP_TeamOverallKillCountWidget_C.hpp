#pragma once
#include "UTeamOverallKillCountBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_TeamOverallKillCountWidget_C // Size: 0x3E8
	: public UTeamOverallKillCountBaseWidget // Size: 0x388
{
private:
	typedef UBP_TeamOverallKillCountWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(187712); // id32("WidgetBlueprintGeneratedClass BP_TeamOverallKillCountWidget.BP_TeamOverallKillCountWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> KillCountEmerging_2; /* Ofs: 0x388 Size: 0x8 - ObjectProperty BP_TeamOverallKillCountWidget.BP_TeamOverallKillCountWidget_C.KillCountEmerging_2 */
	ExternalPtr<struct UWidgetAnimation> KillCountEmerging_1; /* Ofs: 0x390 Size: 0x8 - ObjectProperty BP_TeamOverallKillCountWidget.BP_TeamOverallKillCountWidget_C.KillCountEmerging_1 */
	ExternalPtr<struct UWidgetAnimation> Test; /* Ofs: 0x398 Size: 0x8 - ObjectProperty BP_TeamOverallKillCountWidget.BP_TeamOverallKillCountWidget_C.Test */
	ExternalPtr<struct UWidgetAnimation> KillCountVanishing; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty BP_TeamOverallKillCountWidget.BP_TeamOverallKillCountWidget_C.KillCountVanishing */
	ExternalPtr<struct UWidgetAnimation> KillCountEmerging; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty BP_TeamOverallKillCountWidget.BP_TeamOverallKillCountWidget_C.KillCountEmerging */
	ExternalPtr<struct UWidgetAnimation> Warning; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty BP_TeamOverallKillCountWidget.BP_TeamOverallKillCountWidget_C.Warning */
	ExternalPtr<struct UWidgetAnimation> Increasing; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty BP_TeamOverallKillCountWidget.BP_TeamOverallKillCountWidget_C.Increasing */
	ExternalPtr<struct UWidgetAnimation> Decreasing; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty BP_TeamOverallKillCountWidget.BP_TeamOverallKillCountWidget_C.Decreasing */
	ExternalPtr<struct UWidgetAnimation> Default; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty BP_TeamOverallKillCountWidget.BP_TeamOverallKillCountWidget_C.Default */
	ExternalPtr<struct UBorder> ColorOverlay; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty BP_TeamOverallKillCountWidget.BP_TeamOverallKillCountWidget_C.ColorOverlay */
	ExternalPtr<struct UImage> TeamIcon; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty BP_TeamOverallKillCountWidget.BP_TeamOverallKillCountWidget_C.TeamIcon */
	ExternalPtr<struct UWidgetSwitcher> TeamIconSwitcher; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty BP_TeamOverallKillCountWidget.BP_TeamOverallKillCountWidget_C.TeamIconSwitcher */


	inline bool SetKillCountEmerging_2(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x388, value); }
	inline bool SetKillCountEmerging_1(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x390, value); }
	inline bool SetTest(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x398, value); }
	inline bool SetKillCountVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetKillCountEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetWarning(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetIncreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetDecreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetDefault(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetColorOverlay(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetTeamIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetTeamIconSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x3E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_TeamOverallKillCountWidget_C = sizeof(UBP_TeamOverallKillCountWidget_C); // 1000
    static_assert(sizeof(UBP_TeamOverallKillCountWidget_C) == 0x3E8, "Size of UBP_TeamOverallKillCountWidget_C is not correct.");
	auto constexpr UBP_TeamOverallKillCountWidget_C_KillCountEmerging_2_Offset = offsetof(UBP_TeamOverallKillCountWidget_C, KillCountEmerging_2);
	static_assert(UBP_TeamOverallKillCountWidget_C_KillCountEmerging_2_Offset == 0x388, "UBP_TeamOverallKillCountWidget_C::KillCountEmerging_2 offset is not 388");
	auto constexpr UBP_TeamOverallKillCountWidget_C_KillCountEmerging_1_Offset = offsetof(UBP_TeamOverallKillCountWidget_C, KillCountEmerging_1);
	static_assert(UBP_TeamOverallKillCountWidget_C_KillCountEmerging_1_Offset == 0x390, "UBP_TeamOverallKillCountWidget_C::KillCountEmerging_1 offset is not 390");
	auto constexpr UBP_TeamOverallKillCountWidget_C_Test_Offset = offsetof(UBP_TeamOverallKillCountWidget_C, Test);
	static_assert(UBP_TeamOverallKillCountWidget_C_Test_Offset == 0x398, "UBP_TeamOverallKillCountWidget_C::Test offset is not 398");
	auto constexpr UBP_TeamOverallKillCountWidget_C_KillCountVanishing_Offset = offsetof(UBP_TeamOverallKillCountWidget_C, KillCountVanishing);
	static_assert(UBP_TeamOverallKillCountWidget_C_KillCountVanishing_Offset == 0x3a0, "UBP_TeamOverallKillCountWidget_C::KillCountVanishing offset is not 3a0");
	auto constexpr UBP_TeamOverallKillCountWidget_C_KillCountEmerging_Offset = offsetof(UBP_TeamOverallKillCountWidget_C, KillCountEmerging);
	static_assert(UBP_TeamOverallKillCountWidget_C_KillCountEmerging_Offset == 0x3a8, "UBP_TeamOverallKillCountWidget_C::KillCountEmerging offset is not 3a8");
	auto constexpr UBP_TeamOverallKillCountWidget_C_Warning_Offset = offsetof(UBP_TeamOverallKillCountWidget_C, Warning);
	static_assert(UBP_TeamOverallKillCountWidget_C_Warning_Offset == 0x3b0, "UBP_TeamOverallKillCountWidget_C::Warning offset is not 3b0");
	auto constexpr UBP_TeamOverallKillCountWidget_C_Increasing_Offset = offsetof(UBP_TeamOverallKillCountWidget_C, Increasing);
	static_assert(UBP_TeamOverallKillCountWidget_C_Increasing_Offset == 0x3b8, "UBP_TeamOverallKillCountWidget_C::Increasing offset is not 3b8");
	auto constexpr UBP_TeamOverallKillCountWidget_C_Decreasing_Offset = offsetof(UBP_TeamOverallKillCountWidget_C, Decreasing);
	static_assert(UBP_TeamOverallKillCountWidget_C_Decreasing_Offset == 0x3c0, "UBP_TeamOverallKillCountWidget_C::Decreasing offset is not 3c0");
	auto constexpr UBP_TeamOverallKillCountWidget_C_Default_Offset = offsetof(UBP_TeamOverallKillCountWidget_C, Default);
	static_assert(UBP_TeamOverallKillCountWidget_C_Default_Offset == 0x3c8, "UBP_TeamOverallKillCountWidget_C::Default offset is not 3c8");
	auto constexpr UBP_TeamOverallKillCountWidget_C_ColorOverlay_Offset = offsetof(UBP_TeamOverallKillCountWidget_C, ColorOverlay);
	static_assert(UBP_TeamOverallKillCountWidget_C_ColorOverlay_Offset == 0x3d0, "UBP_TeamOverallKillCountWidget_C::ColorOverlay offset is not 3d0");
	auto constexpr UBP_TeamOverallKillCountWidget_C_TeamIcon_Offset = offsetof(UBP_TeamOverallKillCountWidget_C, TeamIcon);
	static_assert(UBP_TeamOverallKillCountWidget_C_TeamIcon_Offset == 0x3d8, "UBP_TeamOverallKillCountWidget_C::TeamIcon offset is not 3d8");
	auto constexpr UBP_TeamOverallKillCountWidget_C_TeamIconSwitcher_Offset = offsetof(UBP_TeamOverallKillCountWidget_C, TeamIconSwitcher);
	static_assert(UBP_TeamOverallKillCountWidget_C_TeamIconSwitcher_Offset == 0x3e0, "UBP_TeamOverallKillCountWidget_C::TeamIconSwitcher offset is not 3e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
