#pragma once
#include "UGameInfoCanvasBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameInfoCanvasWidget_C // Size: 0x410
	: public UGameInfoCanvasBaseWidget // Size: 0x3C0
{
private:
	typedef UGameInfoCanvasWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(192334); // id32("WidgetBlueprintGeneratedClass GameInfoCanvasWidget.GameInfoCanvasWidget_C")
		return ptr;
	}
	ExternalPtr<struct URetainerBox> AlivePlayerInfo_RetainerBox; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty GameInfoCanvasWidget.GameInfoCanvasWidget_C.AlivePlayerInfo_RetainerBox */
	ExternalPtr<struct UBP_AliveHumansInfoWidget_C> BP_AliveHumansInfoWidget_145; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty GameInfoCanvasWidget.GameInfoCanvasWidget_C.BP_AliveHumansInfoWidget_145 */
	ExternalPtr<struct UBP_AlivePlayerInfoWidget_C> BP_AlivePlayerInfoWidget; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty GameInfoCanvasWidget.GameInfoCanvasWidget_C.BP_AlivePlayerInfoWidget */
	ExternalPtr<struct UBP_AliveZombiesInfoWidget_C> BP_AliveZombiesInfoWidget_98; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty GameInfoCanvasWidget.GameInfoCanvasWidget_C.BP_AliveZombiesInfoWidget_98 */
	ExternalPtr<struct UWidgetSwitcher> GamePlayInfoSwitcher; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty GameInfoCanvasWidget.GameInfoCanvasWidget_C.GamePlayInfoSwitcher */
	ExternalPtr<struct UWidgetSwitcher> KillCountOrTeamCountSwitcher; /* Ofs: 0x3E8 Size: 0x8 - ObjectProperty GameInfoCanvasWidget.GameInfoCanvasWidget_C.KillCountOrTeamCountSwitcher */
	ExternalPtr<struct URetainerBox> KillCountRetainer; /* Ofs: 0x3F0 Size: 0x8 - ObjectProperty GameInfoCanvasWidget.GameInfoCanvasWidget_C.KillCountRetainer */
	ExternalPtr<struct UKillCountWidget_C> KillCountWidget; /* Ofs: 0x3F8 Size: 0x8 - ObjectProperty GameInfoCanvasWidget.GameInfoCanvasWidget_C.KillCountWidget */
	ExternalPtr<struct URetainerBox> TeamCount_RetainerBox; /* Ofs: 0x400 Size: 0x8 - ObjectProperty GameInfoCanvasWidget.GameInfoCanvasWidget_C.TeamCount_RetainerBox */
	ExternalPtr<struct UTeamCountWidget_C> TeamCountWidget; /* Ofs: 0x408 Size: 0x8 - ObjectProperty GameInfoCanvasWidget.GameInfoCanvasWidget_C.TeamCountWidget */


	inline bool SetAlivePlayerInfo_RetainerBox(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetBP_AliveHumansInfoWidget_145(t_structHelper inst, ExternalPtr<struct UBP_AliveHumansInfoWidget_C> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetBP_AlivePlayerInfoWidget(t_structHelper inst, ExternalPtr<struct UBP_AlivePlayerInfoWidget_C> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetBP_AliveZombiesInfoWidget_98(t_structHelper inst, ExternalPtr<struct UBP_AliveZombiesInfoWidget_C> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetGamePlayInfoSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetKillCountOrTeamCountSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetKillCountRetainer(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetKillCountWidget(t_structHelper inst, ExternalPtr<struct UKillCountWidget_C> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetTeamCount_RetainerBox(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x400, value); }
	inline bool SetTeamCountWidget(t_structHelper inst, ExternalPtr<struct UTeamCountWidget_C> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameInfoCanvasWidget_C = sizeof(UGameInfoCanvasWidget_C); // 1040
    static_assert(sizeof(UGameInfoCanvasWidget_C) == 0x410, "Size of UGameInfoCanvasWidget_C is not correct.");
	auto constexpr UGameInfoCanvasWidget_C_AlivePlayerInfo_RetainerBox_Offset = offsetof(UGameInfoCanvasWidget_C, AlivePlayerInfo_RetainerBox);
	static_assert(UGameInfoCanvasWidget_C_AlivePlayerInfo_RetainerBox_Offset == 0x3c0, "UGameInfoCanvasWidget_C::AlivePlayerInfo_RetainerBox offset is not 3c0");
	auto constexpr UGameInfoCanvasWidget_C_BP_AliveHumansInfoWidget_145_Offset = offsetof(UGameInfoCanvasWidget_C, BP_AliveHumansInfoWidget_145);
	static_assert(UGameInfoCanvasWidget_C_BP_AliveHumansInfoWidget_145_Offset == 0x3c8, "UGameInfoCanvasWidget_C::BP_AliveHumansInfoWidget_145 offset is not 3c8");
	auto constexpr UGameInfoCanvasWidget_C_BP_AlivePlayerInfoWidget_Offset = offsetof(UGameInfoCanvasWidget_C, BP_AlivePlayerInfoWidget);
	static_assert(UGameInfoCanvasWidget_C_BP_AlivePlayerInfoWidget_Offset == 0x3d0, "UGameInfoCanvasWidget_C::BP_AlivePlayerInfoWidget offset is not 3d0");
	auto constexpr UGameInfoCanvasWidget_C_BP_AliveZombiesInfoWidget_98_Offset = offsetof(UGameInfoCanvasWidget_C, BP_AliveZombiesInfoWidget_98);
	static_assert(UGameInfoCanvasWidget_C_BP_AliveZombiesInfoWidget_98_Offset == 0x3d8, "UGameInfoCanvasWidget_C::BP_AliveZombiesInfoWidget_98 offset is not 3d8");
	auto constexpr UGameInfoCanvasWidget_C_GamePlayInfoSwitcher_Offset = offsetof(UGameInfoCanvasWidget_C, GamePlayInfoSwitcher);
	static_assert(UGameInfoCanvasWidget_C_GamePlayInfoSwitcher_Offset == 0x3e0, "UGameInfoCanvasWidget_C::GamePlayInfoSwitcher offset is not 3e0");
	auto constexpr UGameInfoCanvasWidget_C_KillCountOrTeamCountSwitcher_Offset = offsetof(UGameInfoCanvasWidget_C, KillCountOrTeamCountSwitcher);
	static_assert(UGameInfoCanvasWidget_C_KillCountOrTeamCountSwitcher_Offset == 0x3e8, "UGameInfoCanvasWidget_C::KillCountOrTeamCountSwitcher offset is not 3e8");
	auto constexpr UGameInfoCanvasWidget_C_KillCountRetainer_Offset = offsetof(UGameInfoCanvasWidget_C, KillCountRetainer);
	static_assert(UGameInfoCanvasWidget_C_KillCountRetainer_Offset == 0x3f0, "UGameInfoCanvasWidget_C::KillCountRetainer offset is not 3f0");
	auto constexpr UGameInfoCanvasWidget_C_KillCountWidget_Offset = offsetof(UGameInfoCanvasWidget_C, KillCountWidget);
	static_assert(UGameInfoCanvasWidget_C_KillCountWidget_Offset == 0x3f8, "UGameInfoCanvasWidget_C::KillCountWidget offset is not 3f8");
	auto constexpr UGameInfoCanvasWidget_C_TeamCount_RetainerBox_Offset = offsetof(UGameInfoCanvasWidget_C, TeamCount_RetainerBox);
	static_assert(UGameInfoCanvasWidget_C_TeamCount_RetainerBox_Offset == 0x400, "UGameInfoCanvasWidget_C::TeamCount_RetainerBox offset is not 400");
	auto constexpr UGameInfoCanvasWidget_C_TeamCountWidget_Offset = offsetof(UGameInfoCanvasWidget_C, TeamCountWidget);
	static_assert(UGameInfoCanvasWidget_C_TeamCountWidget_Offset == 0x408, "UGameInfoCanvasWidget_C::TeamCountWidget offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
