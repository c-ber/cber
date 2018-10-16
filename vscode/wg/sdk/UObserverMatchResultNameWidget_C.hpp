#pragma once
#include "UUserWidget.hpp"
#include "FTslPlayerMatchResultInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UObserverMatchResultNameWidget_C // Size: 0x2A0
	: public UUserWidget // Size: 0x248
{
private:
	typedef UObserverMatchResultNameWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(165012); // id32("WidgetBlueprintGeneratedClass ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C")
		return ptr;
	}
	ExternalPtr<struct UTextBlock> KillCount; /* Ofs: 0x248 Size: 0x8 - ObjectProperty ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.KillCount */
	ExternalPtr<struct UTextBlock> Kills; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.Kills */
	ExternalPtr<struct UTextBlock> PlayerName; /* Ofs: 0x258 Size: 0x8 - ObjectProperty ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.PlayerName */
	ExternalPtr<struct USizeBox> SizeBox_1; /* Ofs: 0x260 Size: 0x8 - ObjectProperty ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.SizeBox_1 */
	ExternalPtr<struct UTextBlock> Slash; /* Ofs: 0x268 Size: 0x8 - ObjectProperty ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.Slash */
	uint8_t boolField270;
	uint8_t boolField271;
	uint8_t UnknownData272[0x6];
	FTslPlayerMatchResultInfo PlayerMatchResultInfo; /* Ofs: 0x278 Size: 0x28 - StructProperty ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.PlayerMatchResultInfo */


	inline bool SetKillCount(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x248, value); }
	inline bool SetKills(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x250, value); }
	inline bool SetPlayerName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x258, value); }
	inline bool SetSizeBox_1(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x260, value); }
	inline bool SetSlash(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x268, value); }
	inline bool bShow()
	{
		return boolField270& 0x1;
	}
	inline bool SetbShow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x270, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSmall()
	{
		return boolField271& 0x1;
	}
	inline bool SetbSmall(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x271, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPlayerMatchResultInfo(t_structHelper inst, FTslPlayerMatchResultInfo value) { inst.WriteOffset(0x278, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUObserverMatchResultNameWidget_C = sizeof(UObserverMatchResultNameWidget_C); // 672
    static_assert(sizeof(UObserverMatchResultNameWidget_C) == 0x2A0, "Size of UObserverMatchResultNameWidget_C is not correct.");
	auto constexpr UObserverMatchResultNameWidget_C_KillCount_Offset = offsetof(UObserverMatchResultNameWidget_C, KillCount);
	static_assert(UObserverMatchResultNameWidget_C_KillCount_Offset == 0x248, "UObserverMatchResultNameWidget_C::KillCount offset is not 248");
	auto constexpr UObserverMatchResultNameWidget_C_Kills_Offset = offsetof(UObserverMatchResultNameWidget_C, Kills);
	static_assert(UObserverMatchResultNameWidget_C_Kills_Offset == 0x250, "UObserverMatchResultNameWidget_C::Kills offset is not 250");
	auto constexpr UObserverMatchResultNameWidget_C_PlayerName_Offset = offsetof(UObserverMatchResultNameWidget_C, PlayerName);
	static_assert(UObserverMatchResultNameWidget_C_PlayerName_Offset == 0x258, "UObserverMatchResultNameWidget_C::PlayerName offset is not 258");
	auto constexpr UObserverMatchResultNameWidget_C_SizeBox_1_Offset = offsetof(UObserverMatchResultNameWidget_C, SizeBox_1);
	static_assert(UObserverMatchResultNameWidget_C_SizeBox_1_Offset == 0x260, "UObserverMatchResultNameWidget_C::SizeBox_1 offset is not 260");
	auto constexpr UObserverMatchResultNameWidget_C_Slash_Offset = offsetof(UObserverMatchResultNameWidget_C, Slash);
	static_assert(UObserverMatchResultNameWidget_C_Slash_Offset == 0x268, "UObserverMatchResultNameWidget_C::Slash offset is not 268");
	auto constexpr UObserverMatchResultNameWidget_C_boolField270_Offset = offsetof(UObserverMatchResultNameWidget_C, boolField270);
	static_assert(UObserverMatchResultNameWidget_C_boolField270_Offset == 0x270, "UObserverMatchResultNameWidget_C::boolField270 offset is not 270");
	auto constexpr UObserverMatchResultNameWidget_C_boolField271_Offset = offsetof(UObserverMatchResultNameWidget_C, boolField271);
	static_assert(UObserverMatchResultNameWidget_C_boolField271_Offset == 0x271, "UObserverMatchResultNameWidget_C::boolField271 offset is not 271");
	auto constexpr UObserverMatchResultNameWidget_C_PlayerMatchResultInfo_Offset = offsetof(UObserverMatchResultNameWidget_C, PlayerMatchResultInfo);
	static_assert(UObserverMatchResultNameWidget_C_PlayerMatchResultInfo_Offset == 0x278, "UObserverMatchResultNameWidget_C::PlayerMatchResultInfo offset is not 278");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
