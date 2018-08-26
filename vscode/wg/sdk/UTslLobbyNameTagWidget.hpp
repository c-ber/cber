#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FUmgWidgetBinder_WidgetSwitcher.hpp"
#include "FUmgWidgetBinder_SizeBox.hpp"
#include "FUmgWidgetBinder_Border.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslLobbyNameTagWidget // Size: 0x3D8
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslLobbyNameTagWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1579); // id32("Class TslGame.TslLobbyNameTagWidget")
		return ptr;
	}
	FUmgWidgetBinder_TextBlock NickName_Binder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.TslLobbyNameTagWidget.NickName_Binder */
	FUmgWidgetBinder_WidgetSwitcher VoiceSwitcher_Binder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.TslLobbyNameTagWidget.VoiceSwitcher_Binder */
	FUmgWidgetBinder_SizeBox VoiceSizeBox_Binder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.TslLobbyNameTagWidget.VoiceSizeBox_Binder */
	FUmgWidgetBinder_SizeBox HostSizeBox_Binder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.TslLobbyNameTagWidget.HostSizeBox_Binder */
	FUmgWidgetBinder_SizeBox ReadySizeBox_Binder; /* Ofs: 0x380 Size: 0x20 - StructProperty TslGame.TslLobbyNameTagWidget.ReadySizeBox_Binder */
	FUmgWidgetBinder_Border BackgroundBorder_Binder; /* Ofs: 0x3A0 Size: 0x20 - StructProperty TslGame.TslLobbyNameTagWidget.BackgroundBorder_Binder */
	uint8_t boolField3C0;
	uint8_t UnknownData3C1[0x3];
	int32_t SlotIndex; /* Ofs: 0x3C4 Size: 0x4 - IntProperty TslGame.TslLobbyNameTagWidget.SlotIndex */
	FVector NameTagOffsetTranslation; /* Ofs: 0x3C8 Size: 0xC - StructProperty TslGame.TslLobbyNameTagWidget.NameTagOffsetTranslation */
	uint8_t boolField3D4;
	uint8_t boolField3D5;
	uint8_t boolField3D6;
	uint8_t UnknownData3D7[0x1];


	inline bool SetNickName_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x300, value); }
	inline bool SetVoiceSwitcher_Binder(t_structHelper inst, FUmgWidgetBinder_WidgetSwitcher value) { inst.WriteOffset(0x320, value); }
	inline bool SetVoiceSizeBox_Binder(t_structHelper inst, FUmgWidgetBinder_SizeBox value) { inst.WriteOffset(0x340, value); }
	inline bool SetHostSizeBox_Binder(t_structHelper inst, FUmgWidgetBinder_SizeBox value) { inst.WriteOffset(0x360, value); }
	inline bool SetReadySizeBox_Binder(t_structHelper inst, FUmgWidgetBinder_SizeBox value) { inst.WriteOffset(0x380, value); }
	inline bool SetBackgroundBorder_Binder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x3A0, value); }
	inline bool bTestAlwaysShowIcons()
	{
		return boolField3C0& 0x1;
	}
	inline bool SetbTestAlwaysShowIcons(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3C0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSlotIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3C4, value); }
	inline bool SetNameTagOffsetTranslation(t_structHelper inst, FVector value) { inst.WriteOffset(0x3C8, value); }
	inline bool bIsHost()
	{
		return boolField3D4& 0x1;
	}
	inline bool SetbIsHost(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3D4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsReady()
	{
		return boolField3D5& 0x1;
	}
	inline bool SetbIsReady(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3D5, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsSpeaking()
	{
		return boolField3D6& 0x1;
	}
	inline bool SetbIsSpeaking(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3D6, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslLobbyNameTagWidget = sizeof(UTslLobbyNameTagWidget); // 984
    static_assert(sizeof(UTslLobbyNameTagWidget) == 0x3D8, "Size of UTslLobbyNameTagWidget is not correct.");
	auto constexpr UTslLobbyNameTagWidget_NickName_Binder_Offset = offsetof(UTslLobbyNameTagWidget, NickName_Binder);
	static_assert(UTslLobbyNameTagWidget_NickName_Binder_Offset == 0x300, "UTslLobbyNameTagWidget::NickName_Binder offset is not 300");
	auto constexpr UTslLobbyNameTagWidget_VoiceSwitcher_Binder_Offset = offsetof(UTslLobbyNameTagWidget, VoiceSwitcher_Binder);
	static_assert(UTslLobbyNameTagWidget_VoiceSwitcher_Binder_Offset == 0x320, "UTslLobbyNameTagWidget::VoiceSwitcher_Binder offset is not 320");
	auto constexpr UTslLobbyNameTagWidget_VoiceSizeBox_Binder_Offset = offsetof(UTslLobbyNameTagWidget, VoiceSizeBox_Binder);
	static_assert(UTslLobbyNameTagWidget_VoiceSizeBox_Binder_Offset == 0x340, "UTslLobbyNameTagWidget::VoiceSizeBox_Binder offset is not 340");
	auto constexpr UTslLobbyNameTagWidget_HostSizeBox_Binder_Offset = offsetof(UTslLobbyNameTagWidget, HostSizeBox_Binder);
	static_assert(UTslLobbyNameTagWidget_HostSizeBox_Binder_Offset == 0x360, "UTslLobbyNameTagWidget::HostSizeBox_Binder offset is not 360");
	auto constexpr UTslLobbyNameTagWidget_ReadySizeBox_Binder_Offset = offsetof(UTslLobbyNameTagWidget, ReadySizeBox_Binder);
	static_assert(UTslLobbyNameTagWidget_ReadySizeBox_Binder_Offset == 0x380, "UTslLobbyNameTagWidget::ReadySizeBox_Binder offset is not 380");
	auto constexpr UTslLobbyNameTagWidget_BackgroundBorder_Binder_Offset = offsetof(UTslLobbyNameTagWidget, BackgroundBorder_Binder);
	static_assert(UTslLobbyNameTagWidget_BackgroundBorder_Binder_Offset == 0x3a0, "UTslLobbyNameTagWidget::BackgroundBorder_Binder offset is not 3a0");
	auto constexpr UTslLobbyNameTagWidget_boolField3C0_Offset = offsetof(UTslLobbyNameTagWidget, boolField3C0);
	static_assert(UTslLobbyNameTagWidget_boolField3C0_Offset == 0x3c0, "UTslLobbyNameTagWidget::boolField3C0 offset is not 3c0");
	auto constexpr UTslLobbyNameTagWidget_SlotIndex_Offset = offsetof(UTslLobbyNameTagWidget, SlotIndex);
	static_assert(UTslLobbyNameTagWidget_SlotIndex_Offset == 0x3c4, "UTslLobbyNameTagWidget::SlotIndex offset is not 3c4");
	auto constexpr UTslLobbyNameTagWidget_NameTagOffsetTranslation_Offset = offsetof(UTslLobbyNameTagWidget, NameTagOffsetTranslation);
	static_assert(UTslLobbyNameTagWidget_NameTagOffsetTranslation_Offset == 0x3c8, "UTslLobbyNameTagWidget::NameTagOffsetTranslation offset is not 3c8");
	auto constexpr UTslLobbyNameTagWidget_boolField3D4_Offset = offsetof(UTslLobbyNameTagWidget, boolField3D4);
	static_assert(UTslLobbyNameTagWidget_boolField3D4_Offset == 0x3d4, "UTslLobbyNameTagWidget::boolField3D4 offset is not 3d4");
	auto constexpr UTslLobbyNameTagWidget_boolField3D5_Offset = offsetof(UTslLobbyNameTagWidget, boolField3D5);
	static_assert(UTslLobbyNameTagWidget_boolField3D5_Offset == 0x3d5, "UTslLobbyNameTagWidget::boolField3D5 offset is not 3d5");
	auto constexpr UTslLobbyNameTagWidget_boolField3D6_Offset = offsetof(UTslLobbyNameTagWidget, boolField3D6);
	static_assert(UTslLobbyNameTagWidget_boolField3D6_Offset == 0x3d6, "UTslLobbyNameTagWidget::boolField3D6 offset is not 3d6");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
