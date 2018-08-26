#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReplayTimelineDBNOEventItem_C // Size: 0x2C8
	: public UUserWidget // Size: 0x248
{
private:
	typedef UReplayTimelineDBNOEventItem_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(69058); // id32("WidgetBlueprintGeneratedClass ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C")
		return ptr;
	}
	ExternalPtr<struct UBorder> Border_44; /* Ofs: 0x248 Size: 0x8 - ObjectProperty ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.Border_44 */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.Image_1 */
	FText DBNOTooltipText; /* Ofs: 0x258 Size: 0x18 - TextProperty ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.DBNOTooltipText */
	int32_t DBNOTime; /* Ofs: 0x270 Size: 0x4 - IntProperty ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.DBNOTime */
	int32_t TotalReplayTime; /* Ofs: 0x274 Size: 0x4 - IntProperty ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.TotalReplayTime */
	FString DBNOInstigatorNetID; /* Ofs: 0x278 Size: 0x10 - StrProperty ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.DBNOInstigatorNetID */
	FString DBNOInstigatorName; /* Ofs: 0x288 Size: 0x10 - StrProperty ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.DBNOInstigatorName */
	FString VictimID; /* Ofs: 0x298 Size: 0x10 - StrProperty ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.VictimID */
	FString VictimName; /* Ofs: 0x2A8 Size: 0x10 - StrProperty ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.VictimName */
	int32_t CountForFindingCharacter; /* Ofs: 0x2B8 Size: 0x4 - IntProperty ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.CountForFindingCharacter */
	uint8_t UnknownData2BC[0x4];
	ExternalPtr<struct UReplayTimeline_C> ReplayTimeline; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.ReplayTimeline */


	inline bool SetBorder_44(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x248, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetDBNOTooltipText(t_structHelper inst, FText value) { inst.WriteOffset(0x258, value); }
	inline bool SetDBNOTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x270, value); }
	inline bool SetTotalReplayTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x274, value); }
	inline bool SetDBNOInstigatorNetID(t_structHelper inst, FString value) { inst.WriteOffset(0x278, value); }
	inline bool SetDBNOInstigatorName(t_structHelper inst, FString value) { inst.WriteOffset(0x288, value); }
	inline bool SetVictimID(t_structHelper inst, FString value) { inst.WriteOffset(0x298, value); }
	inline bool SetVictimName(t_structHelper inst, FString value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetCountForFindingCharacter(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetReplayTimeline(t_structHelper inst, ExternalPtr<struct UReplayTimeline_C> value) { inst.WriteOffset(0x2C0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReplayTimelineDBNOEventItem_C = sizeof(UReplayTimelineDBNOEventItem_C); // 712
    static_assert(sizeof(UReplayTimelineDBNOEventItem_C) == 0x2C8, "Size of UReplayTimelineDBNOEventItem_C is not correct.");
	auto constexpr UReplayTimelineDBNOEventItem_C_Border_44_Offset = offsetof(UReplayTimelineDBNOEventItem_C, Border_44);
	static_assert(UReplayTimelineDBNOEventItem_C_Border_44_Offset == 0x248, "UReplayTimelineDBNOEventItem_C::Border_44 offset is not 248");
	auto constexpr UReplayTimelineDBNOEventItem_C_Image_1_Offset = offsetof(UReplayTimelineDBNOEventItem_C, Image_1);
	static_assert(UReplayTimelineDBNOEventItem_C_Image_1_Offset == 0x250, "UReplayTimelineDBNOEventItem_C::Image_1 offset is not 250");
	auto constexpr UReplayTimelineDBNOEventItem_C_DBNOTooltipText_Offset = offsetof(UReplayTimelineDBNOEventItem_C, DBNOTooltipText);
	static_assert(UReplayTimelineDBNOEventItem_C_DBNOTooltipText_Offset == 0x258, "UReplayTimelineDBNOEventItem_C::DBNOTooltipText offset is not 258");
	auto constexpr UReplayTimelineDBNOEventItem_C_DBNOTime_Offset = offsetof(UReplayTimelineDBNOEventItem_C, DBNOTime);
	static_assert(UReplayTimelineDBNOEventItem_C_DBNOTime_Offset == 0x270, "UReplayTimelineDBNOEventItem_C::DBNOTime offset is not 270");
	auto constexpr UReplayTimelineDBNOEventItem_C_TotalReplayTime_Offset = offsetof(UReplayTimelineDBNOEventItem_C, TotalReplayTime);
	static_assert(UReplayTimelineDBNOEventItem_C_TotalReplayTime_Offset == 0x274, "UReplayTimelineDBNOEventItem_C::TotalReplayTime offset is not 274");
	auto constexpr UReplayTimelineDBNOEventItem_C_DBNOInstigatorNetID_Offset = offsetof(UReplayTimelineDBNOEventItem_C, DBNOInstigatorNetID);
	static_assert(UReplayTimelineDBNOEventItem_C_DBNOInstigatorNetID_Offset == 0x278, "UReplayTimelineDBNOEventItem_C::DBNOInstigatorNetID offset is not 278");
	auto constexpr UReplayTimelineDBNOEventItem_C_DBNOInstigatorName_Offset = offsetof(UReplayTimelineDBNOEventItem_C, DBNOInstigatorName);
	static_assert(UReplayTimelineDBNOEventItem_C_DBNOInstigatorName_Offset == 0x288, "UReplayTimelineDBNOEventItem_C::DBNOInstigatorName offset is not 288");
	auto constexpr UReplayTimelineDBNOEventItem_C_VictimID_Offset = offsetof(UReplayTimelineDBNOEventItem_C, VictimID);
	static_assert(UReplayTimelineDBNOEventItem_C_VictimID_Offset == 0x298, "UReplayTimelineDBNOEventItem_C::VictimID offset is not 298");
	auto constexpr UReplayTimelineDBNOEventItem_C_VictimName_Offset = offsetof(UReplayTimelineDBNOEventItem_C, VictimName);
	static_assert(UReplayTimelineDBNOEventItem_C_VictimName_Offset == 0x2a8, "UReplayTimelineDBNOEventItem_C::VictimName offset is not 2a8");
	auto constexpr UReplayTimelineDBNOEventItem_C_CountForFindingCharacter_Offset = offsetof(UReplayTimelineDBNOEventItem_C, CountForFindingCharacter);
	static_assert(UReplayTimelineDBNOEventItem_C_CountForFindingCharacter_Offset == 0x2b8, "UReplayTimelineDBNOEventItem_C::CountForFindingCharacter offset is not 2b8");
	auto constexpr UReplayTimelineDBNOEventItem_C_ReplayTimeline_Offset = offsetof(UReplayTimelineDBNOEventItem_C, ReplayTimeline);
	static_assert(UReplayTimelineDBNOEventItem_C_ReplayTimeline_Offset == 0x2c0, "UReplayTimelineDBNOEventItem_C::ReplayTimeline offset is not 2c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
