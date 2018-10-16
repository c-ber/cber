#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTeamCountWidget_C // Size: 0x298
	: public UUserWidget // Size: 0x248
{
private:
	typedef UTeamCountWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(192110); // id32("WidgetBlueprintGeneratedClass TeamCountWidget.TeamCountWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty TeamCountWidget.TeamCountWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> Test; /* Ofs: 0x250 Size: 0x8 - ObjectProperty TeamCountWidget.TeamCountWidget_C.Test */
	ExternalPtr<struct UWidgetAnimation> KillCountVanishing; /* Ofs: 0x258 Size: 0x8 - ObjectProperty TeamCountWidget.TeamCountWidget_C.KillCountVanishing */
	ExternalPtr<struct UWidgetAnimation> KillCountEmerging; /* Ofs: 0x260 Size: 0x8 - ObjectProperty TeamCountWidget.TeamCountWidget_C.KillCountEmerging */
	ExternalPtr<struct UWidgetAnimation> Warning; /* Ofs: 0x268 Size: 0x8 - ObjectProperty TeamCountWidget.TeamCountWidget_C.Warning */
	ExternalPtr<struct UWidgetAnimation> Increasing; /* Ofs: 0x270 Size: 0x8 - ObjectProperty TeamCountWidget.TeamCountWidget_C.Increasing */
	ExternalPtr<struct UWidgetAnimation> Decreasing; /* Ofs: 0x278 Size: 0x8 - ObjectProperty TeamCountWidget.TeamCountWidget_C.Decreasing */
	ExternalPtr<struct UWidgetAnimation> Default; /* Ofs: 0x280 Size: 0x8 - ObjectProperty TeamCountWidget.TeamCountWidget_C.Default */
	ExternalPtr<struct UBorder> ColorOverlay; /* Ofs: 0x288 Size: 0x8 - ObjectProperty TeamCountWidget.TeamCountWidget_C.ColorOverlay */
	ExternalPtr<struct UTextBlock> TeamCount; /* Ofs: 0x290 Size: 0x8 - ObjectProperty TeamCountWidget.TeamCountWidget_C.TeamCount */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetTest(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetKillCountVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x258, value); }
	inline bool SetKillCountEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x260, value); }
	inline bool SetWarning(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x268, value); }
	inline bool SetIncreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x270, value); }
	inline bool SetDecreasing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x278, value); }
	inline bool SetDefault(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x280, value); }
	inline bool SetColorOverlay(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x288, value); }
	inline bool SetTeamCount(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x290, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTeamCountWidget_C = sizeof(UTeamCountWidget_C); // 664
    static_assert(sizeof(UTeamCountWidget_C) == 0x298, "Size of UTeamCountWidget_C is not correct.");
	auto constexpr UTeamCountWidget_C_UberGraphFrame_Offset = offsetof(UTeamCountWidget_C, UberGraphFrame);
	static_assert(UTeamCountWidget_C_UberGraphFrame_Offset == 0x248, "UTeamCountWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UTeamCountWidget_C_Test_Offset = offsetof(UTeamCountWidget_C, Test);
	static_assert(UTeamCountWidget_C_Test_Offset == 0x250, "UTeamCountWidget_C::Test offset is not 250");
	auto constexpr UTeamCountWidget_C_KillCountVanishing_Offset = offsetof(UTeamCountWidget_C, KillCountVanishing);
	static_assert(UTeamCountWidget_C_KillCountVanishing_Offset == 0x258, "UTeamCountWidget_C::KillCountVanishing offset is not 258");
	auto constexpr UTeamCountWidget_C_KillCountEmerging_Offset = offsetof(UTeamCountWidget_C, KillCountEmerging);
	static_assert(UTeamCountWidget_C_KillCountEmerging_Offset == 0x260, "UTeamCountWidget_C::KillCountEmerging offset is not 260");
	auto constexpr UTeamCountWidget_C_Warning_Offset = offsetof(UTeamCountWidget_C, Warning);
	static_assert(UTeamCountWidget_C_Warning_Offset == 0x268, "UTeamCountWidget_C::Warning offset is not 268");
	auto constexpr UTeamCountWidget_C_Increasing_Offset = offsetof(UTeamCountWidget_C, Increasing);
	static_assert(UTeamCountWidget_C_Increasing_Offset == 0x270, "UTeamCountWidget_C::Increasing offset is not 270");
	auto constexpr UTeamCountWidget_C_Decreasing_Offset = offsetof(UTeamCountWidget_C, Decreasing);
	static_assert(UTeamCountWidget_C_Decreasing_Offset == 0x278, "UTeamCountWidget_C::Decreasing offset is not 278");
	auto constexpr UTeamCountWidget_C_Default_Offset = offsetof(UTeamCountWidget_C, Default);
	static_assert(UTeamCountWidget_C_Default_Offset == 0x280, "UTeamCountWidget_C::Default offset is not 280");
	auto constexpr UTeamCountWidget_C_ColorOverlay_Offset = offsetof(UTeamCountWidget_C, ColorOverlay);
	static_assert(UTeamCountWidget_C_ColorOverlay_Offset == 0x288, "UTeamCountWidget_C::ColorOverlay offset is not 288");
	auto constexpr UTeamCountWidget_C_TeamCount_Offset = offsetof(UTeamCountWidget_C, TeamCount);
	static_assert(UTeamCountWidget_C_TeamCount_Offset == 0x290, "UTeamCountWidget_C::TeamCount offset is not 290");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
