#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_SizeBox.hpp"
#include "FUmgWidgetBinder_Image.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslBuffIconListWidget // Size: 0x3A8
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslBuffIconListWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1559); // id32("Class TslGame.TslBuffIconListWidget")
		return ptr;
	}
	FUmgWidgetBinder_SizeBox RunBuffIconBlock_Binder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.TslBuffIconListWidget.RunBuffIconBlock_Binder */
	FUmgWidgetBinder_Image RunBuffIcon_Binder; /* Ofs: 0x320 Size: 0x28 - StructProperty TslGame.TslBuffIconListWidget.RunBuffIcon_Binder */
	FUmgWidgetBinder_SizeBox HealBuffIconBlock_Binder; /* Ofs: 0x348 Size: 0x20 - StructProperty TslGame.TslBuffIconListWidget.HealBuffIconBlock_Binder */
	FUmgWidgetBinder_Image HealBuffIcon_Binder; /* Ofs: 0x368 Size: 0x28 - StructProperty TslGame.TslBuffIconListWidget.HealBuffIcon_Binder */
	ExternalPtr<struct UTexture> HealBuffIconTex; /* Ofs: 0x390 Size: 0x8 - ObjectProperty TslGame.TslBuffIconListWidget.HealBuffIconTex */
	ExternalPtr<struct UTexture> RunBuffIconTex; /* Ofs: 0x398 Size: 0x8 - ObjectProperty TslGame.TslBuffIconListWidget.RunBuffIconTex */
	float SaveBoostPercentage; /* Ofs: 0x3A0 Size: 0x4 - FloatProperty TslGame.TslBuffIconListWidget.SaveBoostPercentage */
	uint8_t UnknownData3A4[0x4];


	inline bool SetRunBuffIconBlock_Binder(t_structHelper inst, FUmgWidgetBinder_SizeBox value) { inst.WriteOffset(0x300, value); }
	inline bool SetRunBuffIcon_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x320, value); }
	inline bool SetHealBuffIconBlock_Binder(t_structHelper inst, FUmgWidgetBinder_SizeBox value) { inst.WriteOffset(0x348, value); }
	inline bool SetHealBuffIcon_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x368, value); }
	inline bool SetHealBuffIconTex(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x390, value); }
	inline bool SetRunBuffIconTex(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x398, value); }
	inline bool SetSaveBoostPercentage(t_structHelper inst, float value) { inst.WriteOffset(0x3A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslBuffIconListWidget = sizeof(UTslBuffIconListWidget); // 936
    static_assert(sizeof(UTslBuffIconListWidget) == 0x3A8, "Size of UTslBuffIconListWidget is not correct.");
	auto constexpr UTslBuffIconListWidget_RunBuffIconBlock_Binder_Offset = offsetof(UTslBuffIconListWidget, RunBuffIconBlock_Binder);
	static_assert(UTslBuffIconListWidget_RunBuffIconBlock_Binder_Offset == 0x300, "UTslBuffIconListWidget::RunBuffIconBlock_Binder offset is not 300");
	auto constexpr UTslBuffIconListWidget_RunBuffIcon_Binder_Offset = offsetof(UTslBuffIconListWidget, RunBuffIcon_Binder);
	static_assert(UTslBuffIconListWidget_RunBuffIcon_Binder_Offset == 0x320, "UTslBuffIconListWidget::RunBuffIcon_Binder offset is not 320");
	auto constexpr UTslBuffIconListWidget_HealBuffIconBlock_Binder_Offset = offsetof(UTslBuffIconListWidget, HealBuffIconBlock_Binder);
	static_assert(UTslBuffIconListWidget_HealBuffIconBlock_Binder_Offset == 0x348, "UTslBuffIconListWidget::HealBuffIconBlock_Binder offset is not 348");
	auto constexpr UTslBuffIconListWidget_HealBuffIcon_Binder_Offset = offsetof(UTslBuffIconListWidget, HealBuffIcon_Binder);
	static_assert(UTslBuffIconListWidget_HealBuffIcon_Binder_Offset == 0x368, "UTslBuffIconListWidget::HealBuffIcon_Binder offset is not 368");
	auto constexpr UTslBuffIconListWidget_HealBuffIconTex_Offset = offsetof(UTslBuffIconListWidget, HealBuffIconTex);
	static_assert(UTslBuffIconListWidget_HealBuffIconTex_Offset == 0x390, "UTslBuffIconListWidget::HealBuffIconTex offset is not 390");
	auto constexpr UTslBuffIconListWidget_RunBuffIconTex_Offset = offsetof(UTslBuffIconListWidget, RunBuffIconTex);
	static_assert(UTslBuffIconListWidget_RunBuffIconTex_Offset == 0x398, "UTslBuffIconListWidget::RunBuffIconTex offset is not 398");
	auto constexpr UTslBuffIconListWidget_SaveBoostPercentage_Offset = offsetof(UTslBuffIconListWidget, SaveBoostPercentage);
	static_assert(UTslBuffIconListWidget_SaveBoostPercentage_Offset == 0x3a0, "UTslBuffIconListWidget::SaveBoostPercentage offset is not 3a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
