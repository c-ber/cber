#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReplayTimelineKillEventItem_C // Size: 0x2C8
	: public UUserWidget // Size: 0x248
{
private:
	typedef UReplayTimelineKillEventItem_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(69019); // id32("WidgetBlueprintGeneratedClass ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C")
		return ptr;
	}
	ExternalPtr<struct UBorder> Border_44; /* Ofs: 0x248 Size: 0x8 - ObjectProperty ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.Border_44 */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.Image_1 */
	FText KillTooltipText; /* Ofs: 0x258 Size: 0x18 - TextProperty ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.KillTooltipText */
	int32_t KillTime; /* Ofs: 0x270 Size: 0x4 - IntProperty ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.KillTime */
	int32_t TotalReplayTime; /* Ofs: 0x274 Size: 0x4 - IntProperty ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.TotalReplayTime */
	FString KillerNetId; /* Ofs: 0x278 Size: 0x10 - StrProperty ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.KillerNetId */
	FString KillerName; /* Ofs: 0x288 Size: 0x10 - StrProperty ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.KillerName */
	FString VictimNetId; /* Ofs: 0x298 Size: 0x10 - StrProperty ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.VictimNetId */
	FString VictimName; /* Ofs: 0x2A8 Size: 0x10 - StrProperty ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.VictimName */
	int32_t CountForFindingCharacter; /* Ofs: 0x2B8 Size: 0x4 - IntProperty ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.CountForFindingCharacter */
	uint8_t UnknownData2BC[0x4];
	ExternalPtr<struct UReplayTimeline_C> ReplayTimeline; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.ReplayTimeline */


	inline bool SetBorder_44(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x248, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetKillTooltipText(t_structHelper inst, FText value) { inst.WriteOffset(0x258, value); }
	inline bool SetKillTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x270, value); }
	inline bool SetTotalReplayTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x274, value); }
	inline bool SetKillerNetId(t_structHelper inst, FString value) { inst.WriteOffset(0x278, value); }
	inline bool SetKillerName(t_structHelper inst, FString value) { inst.WriteOffset(0x288, value); }
	inline bool SetVictimNetId(t_structHelper inst, FString value) { inst.WriteOffset(0x298, value); }
	inline bool SetVictimName(t_structHelper inst, FString value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetCountForFindingCharacter(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetReplayTimeline(t_structHelper inst, ExternalPtr<struct UReplayTimeline_C> value) { inst.WriteOffset(0x2C0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReplayTimelineKillEventItem_C = sizeof(UReplayTimelineKillEventItem_C); // 712
    static_assert(sizeof(UReplayTimelineKillEventItem_C) == 0x2C8, "Size of UReplayTimelineKillEventItem_C is not correct.");
	auto constexpr UReplayTimelineKillEventItem_C_Border_44_Offset = offsetof(UReplayTimelineKillEventItem_C, Border_44);
	static_assert(UReplayTimelineKillEventItem_C_Border_44_Offset == 0x248, "UReplayTimelineKillEventItem_C::Border_44 offset is not 248");
	auto constexpr UReplayTimelineKillEventItem_C_Image_1_Offset = offsetof(UReplayTimelineKillEventItem_C, Image_1);
	static_assert(UReplayTimelineKillEventItem_C_Image_1_Offset == 0x250, "UReplayTimelineKillEventItem_C::Image_1 offset is not 250");
	auto constexpr UReplayTimelineKillEventItem_C_KillTooltipText_Offset = offsetof(UReplayTimelineKillEventItem_C, KillTooltipText);
	static_assert(UReplayTimelineKillEventItem_C_KillTooltipText_Offset == 0x258, "UReplayTimelineKillEventItem_C::KillTooltipText offset is not 258");
	auto constexpr UReplayTimelineKillEventItem_C_KillTime_Offset = offsetof(UReplayTimelineKillEventItem_C, KillTime);
	static_assert(UReplayTimelineKillEventItem_C_KillTime_Offset == 0x270, "UReplayTimelineKillEventItem_C::KillTime offset is not 270");
	auto constexpr UReplayTimelineKillEventItem_C_TotalReplayTime_Offset = offsetof(UReplayTimelineKillEventItem_C, TotalReplayTime);
	static_assert(UReplayTimelineKillEventItem_C_TotalReplayTime_Offset == 0x274, "UReplayTimelineKillEventItem_C::TotalReplayTime offset is not 274");
	auto constexpr UReplayTimelineKillEventItem_C_KillerNetId_Offset = offsetof(UReplayTimelineKillEventItem_C, KillerNetId);
	static_assert(UReplayTimelineKillEventItem_C_KillerNetId_Offset == 0x278, "UReplayTimelineKillEventItem_C::KillerNetId offset is not 278");
	auto constexpr UReplayTimelineKillEventItem_C_KillerName_Offset = offsetof(UReplayTimelineKillEventItem_C, KillerName);
	static_assert(UReplayTimelineKillEventItem_C_KillerName_Offset == 0x288, "UReplayTimelineKillEventItem_C::KillerName offset is not 288");
	auto constexpr UReplayTimelineKillEventItem_C_VictimNetId_Offset = offsetof(UReplayTimelineKillEventItem_C, VictimNetId);
	static_assert(UReplayTimelineKillEventItem_C_VictimNetId_Offset == 0x298, "UReplayTimelineKillEventItem_C::VictimNetId offset is not 298");
	auto constexpr UReplayTimelineKillEventItem_C_VictimName_Offset = offsetof(UReplayTimelineKillEventItem_C, VictimName);
	static_assert(UReplayTimelineKillEventItem_C_VictimName_Offset == 0x2a8, "UReplayTimelineKillEventItem_C::VictimName offset is not 2a8");
	auto constexpr UReplayTimelineKillEventItem_C_CountForFindingCharacter_Offset = offsetof(UReplayTimelineKillEventItem_C, CountForFindingCharacter);
	static_assert(UReplayTimelineKillEventItem_C_CountForFindingCharacter_Offset == 0x2b8, "UReplayTimelineKillEventItem_C::CountForFindingCharacter offset is not 2b8");
	auto constexpr UReplayTimelineKillEventItem_C_ReplayTimeline_Offset = offsetof(UReplayTimelineKillEventItem_C, ReplayTimeline);
	static_assert(UReplayTimelineKillEventItem_C_ReplayTimeline_Offset == 0x2c0, "UReplayTimelineKillEventItem_C::ReplayTimeline offset is not 2c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
