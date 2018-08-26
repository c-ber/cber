#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_UserWidget.hpp"
#include "FUmgWidgetBinder_RetainerBox.hpp"
#include "FSaveDataForLifegauge.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCharacterStateCanvasBaseWidget // Size: 0x458
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UCharacterStateCanvasBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1520); // id32("Class TslGame.CharacterStateCanvasBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_UserWidget LifeGaugeWidgetBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.CharacterStateCanvasBaseWidget.LifeGaugeWidgetBinder */
	FUmgWidgetBinder_RetainerBox LifeGaugeRetainerBoxBinder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.CharacterStateCanvasBaseWidget.LifeGaugeRetainerBoxBinder */
	FUmgWidgetBinder_UserWidget CharacterStanceWidgetBinder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.CharacterStateCanvasBaseWidget.CharacterStanceWidgetBinder */
	FUmgWidgetBinder_RetainerBox CharacterStanceRetainerBoxBinder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.CharacterStateCanvasBaseWidget.CharacterStanceRetainerBoxBinder */
	FUmgWidgetBinder_UserWidget BreathBarWidgetBinder; /* Ofs: 0x380 Size: 0x20 - StructProperty TslGame.CharacterStateCanvasBaseWidget.BreathBarWidgetBinder */
	FUmgWidgetBinder_UserWidget BreathADSBarWidgetBinder; /* Ofs: 0x3A0 Size: 0x20 - StructProperty TslGame.CharacterStateCanvasBaseWidget.BreathADSBarWidgetBinder */
	FUmgWidgetBinder_RetainerBox BreathBarRetainerBoxBinder; /* Ofs: 0x3C0 Size: 0x20 - StructProperty TslGame.CharacterStateCanvasBaseWidget.BreathBarRetainerBoxBinder */
	FUmgWidgetBinder_RetainerBox BreathADSBarRetainerBoxBinder; /* Ofs: 0x3E0 Size: 0x20 - StructProperty TslGame.CharacterStateCanvasBaseWidget.BreathADSBarRetainerBoxBinder */
	FUmgWidgetBinder_UserWidget EquipableIconHudWidgetBinder; /* Ofs: 0x400 Size: 0x20 - StructProperty TslGame.CharacterStateCanvasBaseWidget.EquipableIconHudWidgetBinder */
	FUmgWidgetBinder_RetainerBox EquipableIconHudRetainerBoxBinder; /* Ofs: 0x420 Size: 0x20 - StructProperty TslGame.CharacterStateCanvasBaseWidget.EquipableIconHudRetainerBoxBinder */
	FSaveDataForLifegauge SaveLifegaugeData; /* Ofs: 0x440 Size: 0x18 - StructProperty TslGame.CharacterStateCanvasBaseWidget.SaveLifegaugeData */


	inline bool SetLifeGaugeWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x300, value); }
	inline bool SetLifeGaugeRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x320, value); }
	inline bool SetCharacterStanceWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x340, value); }
	inline bool SetCharacterStanceRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x360, value); }
	inline bool SetBreathBarWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x380, value); }
	inline bool SetBreathADSBarWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetBreathBarRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetBreathADSBarRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetEquipableIconHudWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x400, value); }
	inline bool SetEquipableIconHudRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x420, value); }
	inline bool SetSaveLifegaugeData(t_structHelper inst, FSaveDataForLifegauge value) { inst.WriteOffset(0x440, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCharacterStateCanvasBaseWidget = sizeof(UCharacterStateCanvasBaseWidget); // 1112
    static_assert(sizeof(UCharacterStateCanvasBaseWidget) == 0x458, "Size of UCharacterStateCanvasBaseWidget is not correct.");
	auto constexpr UCharacterStateCanvasBaseWidget_LifeGaugeWidgetBinder_Offset = offsetof(UCharacterStateCanvasBaseWidget, LifeGaugeWidgetBinder);
	static_assert(UCharacterStateCanvasBaseWidget_LifeGaugeWidgetBinder_Offset == 0x300, "UCharacterStateCanvasBaseWidget::LifeGaugeWidgetBinder offset is not 300");
	auto constexpr UCharacterStateCanvasBaseWidget_LifeGaugeRetainerBoxBinder_Offset = offsetof(UCharacterStateCanvasBaseWidget, LifeGaugeRetainerBoxBinder);
	static_assert(UCharacterStateCanvasBaseWidget_LifeGaugeRetainerBoxBinder_Offset == 0x320, "UCharacterStateCanvasBaseWidget::LifeGaugeRetainerBoxBinder offset is not 320");
	auto constexpr UCharacterStateCanvasBaseWidget_CharacterStanceWidgetBinder_Offset = offsetof(UCharacterStateCanvasBaseWidget, CharacterStanceWidgetBinder);
	static_assert(UCharacterStateCanvasBaseWidget_CharacterStanceWidgetBinder_Offset == 0x340, "UCharacterStateCanvasBaseWidget::CharacterStanceWidgetBinder offset is not 340");
	auto constexpr UCharacterStateCanvasBaseWidget_CharacterStanceRetainerBoxBinder_Offset = offsetof(UCharacterStateCanvasBaseWidget, CharacterStanceRetainerBoxBinder);
	static_assert(UCharacterStateCanvasBaseWidget_CharacterStanceRetainerBoxBinder_Offset == 0x360, "UCharacterStateCanvasBaseWidget::CharacterStanceRetainerBoxBinder offset is not 360");
	auto constexpr UCharacterStateCanvasBaseWidget_BreathBarWidgetBinder_Offset = offsetof(UCharacterStateCanvasBaseWidget, BreathBarWidgetBinder);
	static_assert(UCharacterStateCanvasBaseWidget_BreathBarWidgetBinder_Offset == 0x380, "UCharacterStateCanvasBaseWidget::BreathBarWidgetBinder offset is not 380");
	auto constexpr UCharacterStateCanvasBaseWidget_BreathADSBarWidgetBinder_Offset = offsetof(UCharacterStateCanvasBaseWidget, BreathADSBarWidgetBinder);
	static_assert(UCharacterStateCanvasBaseWidget_BreathADSBarWidgetBinder_Offset == 0x3a0, "UCharacterStateCanvasBaseWidget::BreathADSBarWidgetBinder offset is not 3a0");
	auto constexpr UCharacterStateCanvasBaseWidget_BreathBarRetainerBoxBinder_Offset = offsetof(UCharacterStateCanvasBaseWidget, BreathBarRetainerBoxBinder);
	static_assert(UCharacterStateCanvasBaseWidget_BreathBarRetainerBoxBinder_Offset == 0x3c0, "UCharacterStateCanvasBaseWidget::BreathBarRetainerBoxBinder offset is not 3c0");
	auto constexpr UCharacterStateCanvasBaseWidget_BreathADSBarRetainerBoxBinder_Offset = offsetof(UCharacterStateCanvasBaseWidget, BreathADSBarRetainerBoxBinder);
	static_assert(UCharacterStateCanvasBaseWidget_BreathADSBarRetainerBoxBinder_Offset == 0x3e0, "UCharacterStateCanvasBaseWidget::BreathADSBarRetainerBoxBinder offset is not 3e0");
	auto constexpr UCharacterStateCanvasBaseWidget_EquipableIconHudWidgetBinder_Offset = offsetof(UCharacterStateCanvasBaseWidget, EquipableIconHudWidgetBinder);
	static_assert(UCharacterStateCanvasBaseWidget_EquipableIconHudWidgetBinder_Offset == 0x400, "UCharacterStateCanvasBaseWidget::EquipableIconHudWidgetBinder offset is not 400");
	auto constexpr UCharacterStateCanvasBaseWidget_EquipableIconHudRetainerBoxBinder_Offset = offsetof(UCharacterStateCanvasBaseWidget, EquipableIconHudRetainerBoxBinder);
	static_assert(UCharacterStateCanvasBaseWidget_EquipableIconHudRetainerBoxBinder_Offset == 0x420, "UCharacterStateCanvasBaseWidget::EquipableIconHudRetainerBoxBinder offset is not 420");
	auto constexpr UCharacterStateCanvasBaseWidget_SaveLifegaugeData_Offset = offsetof(UCharacterStateCanvasBaseWidget, SaveLifegaugeData);
	static_assert(UCharacterStateCanvasBaseWidget_SaveLifegaugeData_Offset == 0x440, "UCharacterStateCanvasBaseWidget::SaveLifegaugeData offset is not 440");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
