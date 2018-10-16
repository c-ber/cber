#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleStanceAndTeamInfoCanvasWidget_C // Size: 0x2A9
	: public UUserWidget // Size: 0x248
{
private:
	typedef UVehicleStanceAndTeamInfoCanvasWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(187802); // id32("WidgetBlueprintGeneratedClass VehicleStanceAndTeamInfoCanvasWidget.VehicleStanceAndTeamInfoCanvasWidget_C")
		return ptr;
	}
	ExternalPtr<struct URetainerBox> _0_TeamListRetainerBox; /* Ofs: 0x248 Size: 0x8 - ObjectProperty VehicleStanceAndTeamInfoCanvasWidget.VehicleStanceAndTeamInfoCanvasWidget_C.0_TeamListRetainerBox */
	ExternalPtr<struct UBorder> Border_1; /* Ofs: 0x250 Size: 0x8 - ObjectProperty VehicleStanceAndTeamInfoCanvasWidget.VehicleStanceAndTeamInfoCanvasWidget_C.Border_1 */
	ExternalPtr<struct UBP_TeamInfoListWidget_C> BP_TeamInfoListWidget; /* Ofs: 0x258 Size: 0x8 - ObjectProperty VehicleStanceAndTeamInfoCanvasWidget.VehicleStanceAndTeamInfoCanvasWidget_C.BP_TeamInfoListWidget */
	ExternalPtr<struct UBP_TeamOverallKillCountWidget_C> BP_TeamOverallKillCountWidget_248; /* Ofs: 0x260 Size: 0x8 - ObjectProperty VehicleStanceAndTeamInfoCanvasWidget.VehicleStanceAndTeamInfoCanvasWidget_C.BP_TeamOverallKillCountWidget_248 */
	ExternalPtr<struct UBP_TeamWidget_C> BP_TeamWidget; /* Ofs: 0x268 Size: 0x8 - ObjectProperty VehicleStanceAndTeamInfoCanvasWidget.VehicleStanceAndTeamInfoCanvasWidget_C.BP_TeamWidget */
	ExternalPtr<struct UBP_VehicleStanceWidget_C> BP_VehicleStanceWidget; /* Ofs: 0x270 Size: 0x8 - ObjectProperty VehicleStanceAndTeamInfoCanvasWidget.VehicleStanceAndTeamInfoCanvasWidget_C.BP_VehicleStanceWidget */
	ExternalPtr<struct UObserverTeamInfoList_C> ObserverTeamInfoList; /* Ofs: 0x278 Size: 0x8 - ObjectProperty VehicleStanceAndTeamInfoCanvasWidget.VehicleStanceAndTeamInfoCanvasWidget_C.ObserverTeamInfoList */
	ExternalPtr<struct URetainerBox> ParachuteRetainerBox; /* Ofs: 0x280 Size: 0x8 - ObjectProperty VehicleStanceAndTeamInfoCanvasWidget.VehicleStanceAndTeamInfoCanvasWidget_C.ParachuteRetainerBox */
	ExternalPtr<struct UParachuteVehicleWidget_C> ParachuteVehicleWidget_862; /* Ofs: 0x288 Size: 0x8 - ObjectProperty VehicleStanceAndTeamInfoCanvasWidget.VehicleStanceAndTeamInfoCanvasWidget_C.ParachuteVehicleWidget_862 */
	ExternalPtr<struct UWidgetSwitcher> TeamListSwitcher; /* Ofs: 0x290 Size: 0x8 - ObjectProperty VehicleStanceAndTeamInfoCanvasWidget.VehicleStanceAndTeamInfoCanvasWidget_C.TeamListSwitcher */
	ExternalPtr<struct UHorizontalBox> VehicleStanceAndTeamListPanel; /* Ofs: 0x298 Size: 0x8 - ObjectProperty VehicleStanceAndTeamInfoCanvasWidget.VehicleStanceAndTeamInfoCanvasWidget_C.VehicleStanceAndTeamListPanel */
	ExternalPtr<struct URetainerBox> VehicleStanceRetainerBox; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty VehicleStanceAndTeamInfoCanvasWidget.VehicleStanceAndTeamInfoCanvasWidget_C.VehicleStanceRetainerBox */
	uint8_t boolField2A8;


	inline bool Set_0_TeamListRetainerBox(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x248, value); }
	inline bool SetBorder_1(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x250, value); }
	inline bool SetBP_TeamInfoListWidget(t_structHelper inst, ExternalPtr<struct UBP_TeamInfoListWidget_C> value) { inst.WriteOffset(0x258, value); }
	inline bool SetBP_TeamOverallKillCountWidget_248(t_structHelper inst, ExternalPtr<struct UBP_TeamOverallKillCountWidget_C> value) { inst.WriteOffset(0x260, value); }
	inline bool SetBP_TeamWidget(t_structHelper inst, ExternalPtr<struct UBP_TeamWidget_C> value) { inst.WriteOffset(0x268, value); }
	inline bool SetBP_VehicleStanceWidget(t_structHelper inst, ExternalPtr<struct UBP_VehicleStanceWidget_C> value) { inst.WriteOffset(0x270, value); }
	inline bool SetObserverTeamInfoList(t_structHelper inst, ExternalPtr<struct UObserverTeamInfoList_C> value) { inst.WriteOffset(0x278, value); }
	inline bool SetParachuteRetainerBox(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x280, value); }
	inline bool SetParachuteVehicleWidget_862(t_structHelper inst, ExternalPtr<struct UParachuteVehicleWidget_C> value) { inst.WriteOffset(0x288, value); }
	inline bool SetTeamListSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x290, value); }
	inline bool SetVehicleStanceAndTeamListPanel(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x298, value); }
	inline bool SetVehicleStanceRetainerBox(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x2A0, value); }
	inline bool bObserverTeamList()
	{
		return boolField2A8& 0x1;
	}
	inline bool SetbObserverTeamList(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2A8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleStanceAndTeamInfoCanvasWidget_C = sizeof(UVehicleStanceAndTeamInfoCanvasWidget_C); // 681
    static_assert(sizeof(UVehicleStanceAndTeamInfoCanvasWidget_C) == 0x2A9, "Size of UVehicleStanceAndTeamInfoCanvasWidget_C is not correct.");
	auto constexpr UVehicleStanceAndTeamInfoCanvasWidget_C_0_TeamListRetainerBox_Offset = offsetof(UVehicleStanceAndTeamInfoCanvasWidget_C, 0_TeamListRetainerBox);
	static_assert(UVehicleStanceAndTeamInfoCanvasWidget_C_0_TeamListRetainerBox_Offset == 0x248, "UVehicleStanceAndTeamInfoCanvasWidget_C::0_TeamListRetainerBox offset is not 248");
	auto constexpr UVehicleStanceAndTeamInfoCanvasWidget_C_Border_1_Offset = offsetof(UVehicleStanceAndTeamInfoCanvasWidget_C, Border_1);
	static_assert(UVehicleStanceAndTeamInfoCanvasWidget_C_Border_1_Offset == 0x250, "UVehicleStanceAndTeamInfoCanvasWidget_C::Border_1 offset is not 250");
	auto constexpr UVehicleStanceAndTeamInfoCanvasWidget_C_BP_TeamInfoListWidget_Offset = offsetof(UVehicleStanceAndTeamInfoCanvasWidget_C, BP_TeamInfoListWidget);
	static_assert(UVehicleStanceAndTeamInfoCanvasWidget_C_BP_TeamInfoListWidget_Offset == 0x258, "UVehicleStanceAndTeamInfoCanvasWidget_C::BP_TeamInfoListWidget offset is not 258");
	auto constexpr UVehicleStanceAndTeamInfoCanvasWidget_C_BP_TeamOverallKillCountWidget_248_Offset = offsetof(UVehicleStanceAndTeamInfoCanvasWidget_C, BP_TeamOverallKillCountWidget_248);
	static_assert(UVehicleStanceAndTeamInfoCanvasWidget_C_BP_TeamOverallKillCountWidget_248_Offset == 0x260, "UVehicleStanceAndTeamInfoCanvasWidget_C::BP_TeamOverallKillCountWidget_248 offset is not 260");
	auto constexpr UVehicleStanceAndTeamInfoCanvasWidget_C_BP_TeamWidget_Offset = offsetof(UVehicleStanceAndTeamInfoCanvasWidget_C, BP_TeamWidget);
	static_assert(UVehicleStanceAndTeamInfoCanvasWidget_C_BP_TeamWidget_Offset == 0x268, "UVehicleStanceAndTeamInfoCanvasWidget_C::BP_TeamWidget offset is not 268");
	auto constexpr UVehicleStanceAndTeamInfoCanvasWidget_C_BP_VehicleStanceWidget_Offset = offsetof(UVehicleStanceAndTeamInfoCanvasWidget_C, BP_VehicleStanceWidget);
	static_assert(UVehicleStanceAndTeamInfoCanvasWidget_C_BP_VehicleStanceWidget_Offset == 0x270, "UVehicleStanceAndTeamInfoCanvasWidget_C::BP_VehicleStanceWidget offset is not 270");
	auto constexpr UVehicleStanceAndTeamInfoCanvasWidget_C_ObserverTeamInfoList_Offset = offsetof(UVehicleStanceAndTeamInfoCanvasWidget_C, ObserverTeamInfoList);
	static_assert(UVehicleStanceAndTeamInfoCanvasWidget_C_ObserverTeamInfoList_Offset == 0x278, "UVehicleStanceAndTeamInfoCanvasWidget_C::ObserverTeamInfoList offset is not 278");
	auto constexpr UVehicleStanceAndTeamInfoCanvasWidget_C_ParachuteRetainerBox_Offset = offsetof(UVehicleStanceAndTeamInfoCanvasWidget_C, ParachuteRetainerBox);
	static_assert(UVehicleStanceAndTeamInfoCanvasWidget_C_ParachuteRetainerBox_Offset == 0x280, "UVehicleStanceAndTeamInfoCanvasWidget_C::ParachuteRetainerBox offset is not 280");
	auto constexpr UVehicleStanceAndTeamInfoCanvasWidget_C_ParachuteVehicleWidget_862_Offset = offsetof(UVehicleStanceAndTeamInfoCanvasWidget_C, ParachuteVehicleWidget_862);
	static_assert(UVehicleStanceAndTeamInfoCanvasWidget_C_ParachuteVehicleWidget_862_Offset == 0x288, "UVehicleStanceAndTeamInfoCanvasWidget_C::ParachuteVehicleWidget_862 offset is not 288");
	auto constexpr UVehicleStanceAndTeamInfoCanvasWidget_C_TeamListSwitcher_Offset = offsetof(UVehicleStanceAndTeamInfoCanvasWidget_C, TeamListSwitcher);
	static_assert(UVehicleStanceAndTeamInfoCanvasWidget_C_TeamListSwitcher_Offset == 0x290, "UVehicleStanceAndTeamInfoCanvasWidget_C::TeamListSwitcher offset is not 290");
	auto constexpr UVehicleStanceAndTeamInfoCanvasWidget_C_VehicleStanceAndTeamListPanel_Offset = offsetof(UVehicleStanceAndTeamInfoCanvasWidget_C, VehicleStanceAndTeamListPanel);
	static_assert(UVehicleStanceAndTeamInfoCanvasWidget_C_VehicleStanceAndTeamListPanel_Offset == 0x298, "UVehicleStanceAndTeamInfoCanvasWidget_C::VehicleStanceAndTeamListPanel offset is not 298");
	auto constexpr UVehicleStanceAndTeamInfoCanvasWidget_C_VehicleStanceRetainerBox_Offset = offsetof(UVehicleStanceAndTeamInfoCanvasWidget_C, VehicleStanceRetainerBox);
	static_assert(UVehicleStanceAndTeamInfoCanvasWidget_C_VehicleStanceRetainerBox_Offset == 0x2a0, "UVehicleStanceAndTeamInfoCanvasWidget_C::VehicleStanceRetainerBox offset is not 2a0");
	auto constexpr UVehicleStanceAndTeamInfoCanvasWidget_C_boolField2A8_Offset = offsetof(UVehicleStanceAndTeamInfoCanvasWidget_C, boolField2A8);
	static_assert(UVehicleStanceAndTeamInfoCanvasWidget_C_boolField2A8_Offset == 0x2a8, "UVehicleStanceAndTeamInfoCanvasWidget_C::boolField2A8 offset is not 2a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
