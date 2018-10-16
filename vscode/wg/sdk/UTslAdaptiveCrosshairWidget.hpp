#pragma once
#include "UUmgBaseWidget.hpp"
#include "EWeaponClass.hpp"
#include "FColorBlindColorSet.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_CanvasPanel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslAdaptiveCrosshairWidget // Size: 0x6C8
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslAdaptiveCrosshairWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1547); // id32("Class TslGame.TslAdaptiveCrosshairWidget")
		return ptr;
	}
	TEnumAsByte<enum EWeaponClass> WeaponClass; /* Ofs: 0x300 Size: 0x1 - EnumProperty TslGame.TslAdaptiveCrosshairWidget.WeaponClass */
	uint8_t boolField301;
	uint8_t UnknownData302[0x6];
	FColorBlindColorSet ColorBlindColors; /* Ofs: 0x308 Size: 0x10 - StructProperty TslGame.TslAdaptiveCrosshairWidget.ColorBlindColors */
	FUmgWidgetBinder_Image AdaptiveCrosshair_Binder; /* Ofs: 0x318 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.AdaptiveCrosshair_Binder */
	FUmgWidgetBinder_CanvasPanel CanvasBase_Binder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.TslAdaptiveCrosshairWidget.CanvasBase_Binder */
	FUmgWidgetBinder_CanvasPanel CenterCenter_Binder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.TslAdaptiveCrosshairWidget.CenterCenter_Binder */
	FUmgWidgetBinder_CanvasPanel CenterCrosshair_Binder; /* Ofs: 0x380 Size: 0x20 - StructProperty TslGame.TslAdaptiveCrosshairWidget.CenterCrosshair_Binder */
	FUmgWidgetBinder_CanvasPanel CenterD_Binder; /* Ofs: 0x3A0 Size: 0x20 - StructProperty TslGame.TslAdaptiveCrosshairWidget.CenterD_Binder */
	FUmgWidgetBinder_Image CenterDOT_Binder; /* Ofs: 0x3C0 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.CenterDOT_Binder */
	FUmgWidgetBinder_CanvasPanel CenterL_Binder; /* Ofs: 0x3E8 Size: 0x20 - StructProperty TslGame.TslAdaptiveCrosshairWidget.CenterL_Binder */
	FUmgWidgetBinder_CanvasPanel CenterR_Binder; /* Ofs: 0x408 Size: 0x20 - StructProperty TslGame.TslAdaptiveCrosshairWidget.CenterR_Binder */
	FUmgWidgetBinder_CanvasPanel CenterU_Binder; /* Ofs: 0x428 Size: 0x20 - StructProperty TslGame.TslAdaptiveCrosshairWidget.CenterU_Binder */
	FUmgWidgetBinder_Image Pistol_C_Binder; /* Ofs: 0x448 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.Pistol_C_Binder */
	FUmgWidgetBinder_Image Pistol_C_Gradient_Binder; /* Ofs: 0x470 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.Pistol_C_Gradient_Binder */
	FUmgWidgetBinder_Image Pistol_L_Binder; /* Ofs: 0x498 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.Pistol_L_Binder */
	FUmgWidgetBinder_Image Pistol_R_Binder; /* Ofs: 0x4C0 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.Pistol_R_Binder */
	FUmgWidgetBinder_Image Rifle_D_Binder; /* Ofs: 0x4E8 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.Rifle_D_Binder */
	FUmgWidgetBinder_Image Rifle_D_Arrow_Binder; /* Ofs: 0x510 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.Rifle_D_Arrow_Binder */
	FUmgWidgetBinder_Image Rifle_L_Binder; /* Ofs: 0x538 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.Rifle_L_Binder */
	FUmgWidgetBinder_Image Rifle_L_Arrow_Binder; /* Ofs: 0x560 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.Rifle_L_Arrow_Binder */
	FUmgWidgetBinder_Image Rifle_R_Binder; /* Ofs: 0x588 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.Rifle_R_Binder */
	FUmgWidgetBinder_Image Rifle_R_Arrow_Binder; /* Ofs: 0x5B0 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.Rifle_R_Arrow_Binder */
	FUmgWidgetBinder_Image Rifle_U_Binder; /* Ofs: 0x5D8 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.Rifle_U_Binder */
	FUmgWidgetBinder_Image Rifle_U_Arrow_Binder; /* Ofs: 0x600 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.Rifle_U_Arrow_Binder */
	FUmgWidgetBinder_Image Shotgun_D_Binder; /* Ofs: 0x628 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.Shotgun_D_Binder */
	FUmgWidgetBinder_Image Shotgun_L_Binder; /* Ofs: 0x650 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.Shotgun_L_Binder */
	FUmgWidgetBinder_Image Shotgun_R_Binder; /* Ofs: 0x678 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.Shotgun_R_Binder */
	FUmgWidgetBinder_Image Shotgun_U_Binder; /* Ofs: 0x6A0 Size: 0x28 - StructProperty TslGame.TslAdaptiveCrosshairWidget.Shotgun_U_Binder */


	inline bool SetWeaponClass(t_structHelper inst, TEnumAsByte<enum EWeaponClass> value) { inst.WriteOffset(0x300, value); }
	inline bool bIsShowWidget()
	{
		return boolField301& 0x1;
	}
	inline bool SetbIsShowWidget(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x301, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetColorBlindColors(t_structHelper inst, FColorBlindColorSet value) { inst.WriteOffset(0x308, value); }
	inline bool SetAdaptiveCrosshair_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x318, value); }
	inline bool SetCanvasBase_Binder(t_structHelper inst, FUmgWidgetBinder_CanvasPanel value) { inst.WriteOffset(0x340, value); }
	inline bool SetCenterCenter_Binder(t_structHelper inst, FUmgWidgetBinder_CanvasPanel value) { inst.WriteOffset(0x360, value); }
	inline bool SetCenterCrosshair_Binder(t_structHelper inst, FUmgWidgetBinder_CanvasPanel value) { inst.WriteOffset(0x380, value); }
	inline bool SetCenterD_Binder(t_structHelper inst, FUmgWidgetBinder_CanvasPanel value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetCenterDOT_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetCenterL_Binder(t_structHelper inst, FUmgWidgetBinder_CanvasPanel value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetCenterR_Binder(t_structHelper inst, FUmgWidgetBinder_CanvasPanel value) { inst.WriteOffset(0x408, value); }
	inline bool SetCenterU_Binder(t_structHelper inst, FUmgWidgetBinder_CanvasPanel value) { inst.WriteOffset(0x428, value); }
	inline bool SetPistol_C_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x448, value); }
	inline bool SetPistol_C_Gradient_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x470, value); }
	inline bool SetPistol_L_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x498, value); }
	inline bool SetPistol_R_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetRifle_D_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetRifle_D_Arrow_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x510, value); }
	inline bool SetRifle_L_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x538, value); }
	inline bool SetRifle_L_Arrow_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x560, value); }
	inline bool SetRifle_R_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x588, value); }
	inline bool SetRifle_R_Arrow_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetRifle_U_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetRifle_U_Arrow_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x600, value); }
	inline bool SetShotgun_D_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x628, value); }
	inline bool SetShotgun_L_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x650, value); }
	inline bool SetShotgun_R_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x678, value); }
	inline bool SetShotgun_U_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x6A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslAdaptiveCrosshairWidget = sizeof(UTslAdaptiveCrosshairWidget); // 1736
    static_assert(sizeof(UTslAdaptiveCrosshairWidget) == 0x6C8, "Size of UTslAdaptiveCrosshairWidget is not correct.");
	auto constexpr UTslAdaptiveCrosshairWidget_WeaponClass_Offset = offsetof(UTslAdaptiveCrosshairWidget, WeaponClass);
	static_assert(UTslAdaptiveCrosshairWidget_WeaponClass_Offset == 0x300, "UTslAdaptiveCrosshairWidget::WeaponClass offset is not 300");
	auto constexpr UTslAdaptiveCrosshairWidget_boolField301_Offset = offsetof(UTslAdaptiveCrosshairWidget, boolField301);
	static_assert(UTslAdaptiveCrosshairWidget_boolField301_Offset == 0x301, "UTslAdaptiveCrosshairWidget::boolField301 offset is not 301");
	auto constexpr UTslAdaptiveCrosshairWidget_ColorBlindColors_Offset = offsetof(UTslAdaptiveCrosshairWidget, ColorBlindColors);
	static_assert(UTslAdaptiveCrosshairWidget_ColorBlindColors_Offset == 0x308, "UTslAdaptiveCrosshairWidget::ColorBlindColors offset is not 308");
	auto constexpr UTslAdaptiveCrosshairWidget_AdaptiveCrosshair_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, AdaptiveCrosshair_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_AdaptiveCrosshair_Binder_Offset == 0x318, "UTslAdaptiveCrosshairWidget::AdaptiveCrosshair_Binder offset is not 318");
	auto constexpr UTslAdaptiveCrosshairWidget_CanvasBase_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, CanvasBase_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_CanvasBase_Binder_Offset == 0x340, "UTslAdaptiveCrosshairWidget::CanvasBase_Binder offset is not 340");
	auto constexpr UTslAdaptiveCrosshairWidget_CenterCenter_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, CenterCenter_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_CenterCenter_Binder_Offset == 0x360, "UTslAdaptiveCrosshairWidget::CenterCenter_Binder offset is not 360");
	auto constexpr UTslAdaptiveCrosshairWidget_CenterCrosshair_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, CenterCrosshair_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_CenterCrosshair_Binder_Offset == 0x380, "UTslAdaptiveCrosshairWidget::CenterCrosshair_Binder offset is not 380");
	auto constexpr UTslAdaptiveCrosshairWidget_CenterD_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, CenterD_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_CenterD_Binder_Offset == 0x3a0, "UTslAdaptiveCrosshairWidget::CenterD_Binder offset is not 3a0");
	auto constexpr UTslAdaptiveCrosshairWidget_CenterDOT_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, CenterDOT_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_CenterDOT_Binder_Offset == 0x3c0, "UTslAdaptiveCrosshairWidget::CenterDOT_Binder offset is not 3c0");
	auto constexpr UTslAdaptiveCrosshairWidget_CenterL_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, CenterL_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_CenterL_Binder_Offset == 0x3e8, "UTslAdaptiveCrosshairWidget::CenterL_Binder offset is not 3e8");
	auto constexpr UTslAdaptiveCrosshairWidget_CenterR_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, CenterR_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_CenterR_Binder_Offset == 0x408, "UTslAdaptiveCrosshairWidget::CenterR_Binder offset is not 408");
	auto constexpr UTslAdaptiveCrosshairWidget_CenterU_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, CenterU_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_CenterU_Binder_Offset == 0x428, "UTslAdaptiveCrosshairWidget::CenterU_Binder offset is not 428");
	auto constexpr UTslAdaptiveCrosshairWidget_Pistol_C_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, Pistol_C_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_Pistol_C_Binder_Offset == 0x448, "UTslAdaptiveCrosshairWidget::Pistol_C_Binder offset is not 448");
	auto constexpr UTslAdaptiveCrosshairWidget_Pistol_C_Gradient_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, Pistol_C_Gradient_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_Pistol_C_Gradient_Binder_Offset == 0x470, "UTslAdaptiveCrosshairWidget::Pistol_C_Gradient_Binder offset is not 470");
	auto constexpr UTslAdaptiveCrosshairWidget_Pistol_L_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, Pistol_L_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_Pistol_L_Binder_Offset == 0x498, "UTslAdaptiveCrosshairWidget::Pistol_L_Binder offset is not 498");
	auto constexpr UTslAdaptiveCrosshairWidget_Pistol_R_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, Pistol_R_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_Pistol_R_Binder_Offset == 0x4c0, "UTslAdaptiveCrosshairWidget::Pistol_R_Binder offset is not 4c0");
	auto constexpr UTslAdaptiveCrosshairWidget_Rifle_D_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, Rifle_D_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_Rifle_D_Binder_Offset == 0x4e8, "UTslAdaptiveCrosshairWidget::Rifle_D_Binder offset is not 4e8");
	auto constexpr UTslAdaptiveCrosshairWidget_Rifle_D_Arrow_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, Rifle_D_Arrow_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_Rifle_D_Arrow_Binder_Offset == 0x510, "UTslAdaptiveCrosshairWidget::Rifle_D_Arrow_Binder offset is not 510");
	auto constexpr UTslAdaptiveCrosshairWidget_Rifle_L_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, Rifle_L_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_Rifle_L_Binder_Offset == 0x538, "UTslAdaptiveCrosshairWidget::Rifle_L_Binder offset is not 538");
	auto constexpr UTslAdaptiveCrosshairWidget_Rifle_L_Arrow_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, Rifle_L_Arrow_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_Rifle_L_Arrow_Binder_Offset == 0x560, "UTslAdaptiveCrosshairWidget::Rifle_L_Arrow_Binder offset is not 560");
	auto constexpr UTslAdaptiveCrosshairWidget_Rifle_R_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, Rifle_R_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_Rifle_R_Binder_Offset == 0x588, "UTslAdaptiveCrosshairWidget::Rifle_R_Binder offset is not 588");
	auto constexpr UTslAdaptiveCrosshairWidget_Rifle_R_Arrow_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, Rifle_R_Arrow_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_Rifle_R_Arrow_Binder_Offset == 0x5b0, "UTslAdaptiveCrosshairWidget::Rifle_R_Arrow_Binder offset is not 5b0");
	auto constexpr UTslAdaptiveCrosshairWidget_Rifle_U_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, Rifle_U_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_Rifle_U_Binder_Offset == 0x5d8, "UTslAdaptiveCrosshairWidget::Rifle_U_Binder offset is not 5d8");
	auto constexpr UTslAdaptiveCrosshairWidget_Rifle_U_Arrow_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, Rifle_U_Arrow_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_Rifle_U_Arrow_Binder_Offset == 0x600, "UTslAdaptiveCrosshairWidget::Rifle_U_Arrow_Binder offset is not 600");
	auto constexpr UTslAdaptiveCrosshairWidget_Shotgun_D_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, Shotgun_D_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_Shotgun_D_Binder_Offset == 0x628, "UTslAdaptiveCrosshairWidget::Shotgun_D_Binder offset is not 628");
	auto constexpr UTslAdaptiveCrosshairWidget_Shotgun_L_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, Shotgun_L_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_Shotgun_L_Binder_Offset == 0x650, "UTslAdaptiveCrosshairWidget::Shotgun_L_Binder offset is not 650");
	auto constexpr UTslAdaptiveCrosshairWidget_Shotgun_R_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, Shotgun_R_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_Shotgun_R_Binder_Offset == 0x678, "UTslAdaptiveCrosshairWidget::Shotgun_R_Binder offset is not 678");
	auto constexpr UTslAdaptiveCrosshairWidget_Shotgun_U_Binder_Offset = offsetof(UTslAdaptiveCrosshairWidget, Shotgun_U_Binder);
	static_assert(UTslAdaptiveCrosshairWidget_Shotgun_U_Binder_Offset == 0x6a0, "UTslAdaptiveCrosshairWidget::Shotgun_U_Binder offset is not 6a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
