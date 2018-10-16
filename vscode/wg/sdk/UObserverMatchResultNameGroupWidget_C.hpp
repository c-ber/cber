#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UObserverMatchResultNameGroupWidget_C // Size: 0x2CD
	: public UUserWidget // Size: 0x248
{
private:
	typedef UObserverMatchResultNameGroupWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(164896); // id32("WidgetBlueprintGeneratedClass ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C")
		return ptr;
	}
	ExternalPtr<struct UBorder> GroupLayer; /* Ofs: 0x248 Size: 0x8 - ObjectProperty ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.GroupLayer */
	ExternalPtr<struct UHorizontalBox> Hexa; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.Hexa */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_1; /* Ofs: 0x258 Size: 0x8 - ObjectProperty ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.MatchResulttInfo_1 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_2; /* Ofs: 0x260 Size: 0x8 - ObjectProperty ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.MatchResulttInfo_2 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_3; /* Ofs: 0x268 Size: 0x8 - ObjectProperty ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.MatchResulttInfo_3 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_4; /* Ofs: 0x270 Size: 0x8 - ObjectProperty ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.MatchResulttInfo_4 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_5; /* Ofs: 0x278 Size: 0x8 - ObjectProperty ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.MatchResulttInfo_5 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_6; /* Ofs: 0x280 Size: 0x8 - ObjectProperty ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.MatchResulttInfo_6 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_7; /* Ofs: 0x288 Size: 0x8 - ObjectProperty ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.MatchResulttInfo_7 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_8; /* Ofs: 0x290 Size: 0x8 - ObjectProperty ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.MatchResulttInfo_8 */
	ExternalPtr<struct UHorizontalBox> Octa; /* Ofs: 0x298 Size: 0x8 - ObjectProperty ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.Octa */
	ExternalPtr<struct UTextBlock> RankingText; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.RankingText */
	ExternalPtr<struct UHorizontalBox> SoloOrDuo; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.SoloOrDuo */
	ExternalPtr<struct UHorizontalBox> Squad; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.Squad */
	TArray<struct FTslPlayerMatchResultInfo> PlayerMatchResultInfos; /* Ofs: 0x2B8 Size: 0x10 - ArrayProperty ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.PlayerMatchResultInfos */
	int32_t Ranking; /* Ofs: 0x2C8 Size: 0x4 - IntProperty ObserverMatchResultNameGroupWidget.ObserverMatchResultNameGroupWidget_C.Ranking */
	uint8_t boolField2CC;


	inline bool SetGroupLayer(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x248, value); }
	inline bool SetHexa(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x250, value); }
	inline bool SetMatchResulttInfo_1(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x258, value); }
	inline bool SetMatchResulttInfo_2(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x260, value); }
	inline bool SetMatchResulttInfo_3(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x268, value); }
	inline bool SetMatchResulttInfo_4(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x270, value); }
	inline bool SetMatchResulttInfo_5(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x278, value); }
	inline bool SetMatchResulttInfo_6(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x280, value); }
	inline bool SetMatchResulttInfo_7(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x288, value); }
	inline bool SetMatchResulttInfo_8(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x290, value); }
	inline bool SetOcta(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x298, value); }
	inline bool SetRankingText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetSoloOrDuo(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetSquad(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetPlayerMatchResultInfos(t_structHelper inst, TArray<struct FTslPlayerMatchResultInfo> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetRanking(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2C8, value); }
	inline bool bSmall()
	{
		return boolField2CC& 0x1;
	}
	inline bool SetbSmall(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2CC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUObserverMatchResultNameGroupWidget_C = sizeof(UObserverMatchResultNameGroupWidget_C); // 717
    static_assert(sizeof(UObserverMatchResultNameGroupWidget_C) == 0x2CD, "Size of UObserverMatchResultNameGroupWidget_C is not correct.");
	auto constexpr UObserverMatchResultNameGroupWidget_C_GroupLayer_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, GroupLayer);
	static_assert(UObserverMatchResultNameGroupWidget_C_GroupLayer_Offset == 0x248, "UObserverMatchResultNameGroupWidget_C::GroupLayer offset is not 248");
	auto constexpr UObserverMatchResultNameGroupWidget_C_Hexa_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, Hexa);
	static_assert(UObserverMatchResultNameGroupWidget_C_Hexa_Offset == 0x250, "UObserverMatchResultNameGroupWidget_C::Hexa offset is not 250");
	auto constexpr UObserverMatchResultNameGroupWidget_C_MatchResulttInfo_1_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, MatchResulttInfo_1);
	static_assert(UObserverMatchResultNameGroupWidget_C_MatchResulttInfo_1_Offset == 0x258, "UObserverMatchResultNameGroupWidget_C::MatchResulttInfo_1 offset is not 258");
	auto constexpr UObserverMatchResultNameGroupWidget_C_MatchResulttInfo_2_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, MatchResulttInfo_2);
	static_assert(UObserverMatchResultNameGroupWidget_C_MatchResulttInfo_2_Offset == 0x260, "UObserverMatchResultNameGroupWidget_C::MatchResulttInfo_2 offset is not 260");
	auto constexpr UObserverMatchResultNameGroupWidget_C_MatchResulttInfo_3_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, MatchResulttInfo_3);
	static_assert(UObserverMatchResultNameGroupWidget_C_MatchResulttInfo_3_Offset == 0x268, "UObserverMatchResultNameGroupWidget_C::MatchResulttInfo_3 offset is not 268");
	auto constexpr UObserverMatchResultNameGroupWidget_C_MatchResulttInfo_4_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, MatchResulttInfo_4);
	static_assert(UObserverMatchResultNameGroupWidget_C_MatchResulttInfo_4_Offset == 0x270, "UObserverMatchResultNameGroupWidget_C::MatchResulttInfo_4 offset is not 270");
	auto constexpr UObserverMatchResultNameGroupWidget_C_MatchResulttInfo_5_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, MatchResulttInfo_5);
	static_assert(UObserverMatchResultNameGroupWidget_C_MatchResulttInfo_5_Offset == 0x278, "UObserverMatchResultNameGroupWidget_C::MatchResulttInfo_5 offset is not 278");
	auto constexpr UObserverMatchResultNameGroupWidget_C_MatchResulttInfo_6_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, MatchResulttInfo_6);
	static_assert(UObserverMatchResultNameGroupWidget_C_MatchResulttInfo_6_Offset == 0x280, "UObserverMatchResultNameGroupWidget_C::MatchResulttInfo_6 offset is not 280");
	auto constexpr UObserverMatchResultNameGroupWidget_C_MatchResulttInfo_7_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, MatchResulttInfo_7);
	static_assert(UObserverMatchResultNameGroupWidget_C_MatchResulttInfo_7_Offset == 0x288, "UObserverMatchResultNameGroupWidget_C::MatchResulttInfo_7 offset is not 288");
	auto constexpr UObserverMatchResultNameGroupWidget_C_MatchResulttInfo_8_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, MatchResulttInfo_8);
	static_assert(UObserverMatchResultNameGroupWidget_C_MatchResulttInfo_8_Offset == 0x290, "UObserverMatchResultNameGroupWidget_C::MatchResulttInfo_8 offset is not 290");
	auto constexpr UObserverMatchResultNameGroupWidget_C_Octa_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, Octa);
	static_assert(UObserverMatchResultNameGroupWidget_C_Octa_Offset == 0x298, "UObserverMatchResultNameGroupWidget_C::Octa offset is not 298");
	auto constexpr UObserverMatchResultNameGroupWidget_C_RankingText_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, RankingText);
	static_assert(UObserverMatchResultNameGroupWidget_C_RankingText_Offset == 0x2a0, "UObserverMatchResultNameGroupWidget_C::RankingText offset is not 2a0");
	auto constexpr UObserverMatchResultNameGroupWidget_C_SoloOrDuo_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, SoloOrDuo);
	static_assert(UObserverMatchResultNameGroupWidget_C_SoloOrDuo_Offset == 0x2a8, "UObserverMatchResultNameGroupWidget_C::SoloOrDuo offset is not 2a8");
	auto constexpr UObserverMatchResultNameGroupWidget_C_Squad_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, Squad);
	static_assert(UObserverMatchResultNameGroupWidget_C_Squad_Offset == 0x2b0, "UObserverMatchResultNameGroupWidget_C::Squad offset is not 2b0");
	auto constexpr UObserverMatchResultNameGroupWidget_C_PlayerMatchResultInfos_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, PlayerMatchResultInfos);
	static_assert(UObserverMatchResultNameGroupWidget_C_PlayerMatchResultInfos_Offset == 0x2b8, "UObserverMatchResultNameGroupWidget_C::PlayerMatchResultInfos offset is not 2b8");
	auto constexpr UObserverMatchResultNameGroupWidget_C_Ranking_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, Ranking);
	static_assert(UObserverMatchResultNameGroupWidget_C_Ranking_Offset == 0x2c8, "UObserverMatchResultNameGroupWidget_C::Ranking offset is not 2c8");
	auto constexpr UObserverMatchResultNameGroupWidget_C_boolField2CC_Offset = offsetof(UObserverMatchResultNameGroupWidget_C, boolField2CC);
	static_assert(UObserverMatchResultNameGroupWidget_C_boolField2CC_Offset == 0x2cc, "UObserverMatchResultNameGroupWidget_C::boolField2CC offset is not 2cc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
