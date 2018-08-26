#pragma once
#include "UUserWidget.hpp"
#include "EWeaponClass.hpp"
#include "FColorBlindColorSet.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UW_AdaptiveCrosshair_C // Size: 0x328
	: public UUserWidget // Size: 0x248
{
private:
	typedef UW_AdaptiveCrosshair_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(90057); // id32("WidgetBlueprintGeneratedClass W_AdaptiveCrosshair.W_AdaptiveCrosshair_C")
		return ptr;
	}
	ExternalPtr<struct UImage> AdaptiveCrosshair; /* Ofs: 0x248 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.AdaptiveCrosshair */
	ExternalPtr<struct UCanvasPanel> CanvasBase; /* Ofs: 0x250 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.CanvasBase */
	ExternalPtr<struct UCanvasPanel> CenterCenter; /* Ofs: 0x258 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.CenterCenter */
	ExternalPtr<struct UCanvasPanel> CenterCrosshair; /* Ofs: 0x260 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.CenterCrosshair */
	ExternalPtr<struct UCanvasPanel> CenterD; /* Ofs: 0x268 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.CenterD */
	ExternalPtr<struct UImage> CenterDOT; /* Ofs: 0x270 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.CenterDOT */
	ExternalPtr<struct UCanvasPanel> CenterL; /* Ofs: 0x278 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.CenterL */
	ExternalPtr<struct UCanvasPanel> CenterR; /* Ofs: 0x280 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.CenterR */
	ExternalPtr<struct UCanvasPanel> CenterU; /* Ofs: 0x288 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.CenterU */
	ExternalPtr<struct UImage> Pistol_C; /* Ofs: 0x290 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.Pistol_C */
	ExternalPtr<struct UImage> Pistol_C_Gradient; /* Ofs: 0x298 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.Pistol_C_Gradient */
	ExternalPtr<struct UImage> Pistol_L; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.Pistol_L */
	ExternalPtr<struct UImage> Pistol_R; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.Pistol_R */
	ExternalPtr<struct UImage> Rifle_D; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.Rifle_D */
	ExternalPtr<struct UImage> Rifle_D_Arrow; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.Rifle_D_Arrow */
	ExternalPtr<struct UImage> Rifle_L; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.Rifle_L */
	ExternalPtr<struct UImage> Rifle_L_Arrow; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.Rifle_L_Arrow */
	ExternalPtr<struct UImage> Rifle_R; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.Rifle_R */
	ExternalPtr<struct UImage> Rifle_R_Arrow; /* Ofs: 0x2D8 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.Rifle_R_Arrow */
	ExternalPtr<struct UImage> Rifle_U; /* Ofs: 0x2E0 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.Rifle_U */
	ExternalPtr<struct UImage> Rifle_U_Arrow; /* Ofs: 0x2E8 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.Rifle_U_Arrow */
	ExternalPtr<struct UImage> Shotgun_D; /* Ofs: 0x2F0 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.Shotgun_D */
	ExternalPtr<struct UImage> Shotgun_L; /* Ofs: 0x2F8 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.Shotgun_L */
	ExternalPtr<struct UImage> Shotgun_R; /* Ofs: 0x300 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.Shotgun_R */
	ExternalPtr<struct UImage> Shotgun_U; /* Ofs: 0x308 Size: 0x8 - ObjectProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.Shotgun_U */
	TEnumAsByte<enum EWeaponClass> WeaponClass; /* Ofs: 0x310 Size: 0x1 - EnumProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.WeaponClass */
	uint8_t boolField311;
	uint8_t UnknownData312[0x6];
	FColorBlindColorSet ColorBlindColors; /* Ofs: 0x318 Size: 0x10 - StructProperty W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.ColorBlindColors */


	inline bool SetAdaptiveCrosshair(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x248, value); }
	inline bool SetCanvasBase(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x250, value); }
	inline bool SetCenterCenter(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x258, value); }
	inline bool SetCenterCrosshair(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x260, value); }
	inline bool SetCenterD(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x268, value); }
	inline bool SetCenterDOT(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x270, value); }
	inline bool SetCenterL(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x278, value); }
	inline bool SetCenterR(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x280, value); }
	inline bool SetCenterU(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x288, value); }
	inline bool SetPistol_C(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x290, value); }
	inline bool SetPistol_C_Gradient(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x298, value); }
	inline bool SetPistol_L(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetPistol_R(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetRifle_D(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetRifle_D_Arrow(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetRifle_L(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetRifle_L_Arrow(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetRifle_R(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetRifle_R_Arrow(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetRifle_U(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetRifle_U_Arrow(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetShotgun_D(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetShotgun_L(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetShotgun_R(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x300, value); }
	inline bool SetShotgun_U(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x308, value); }
	inline bool SetWeaponClass(t_structHelper inst, TEnumAsByte<enum EWeaponClass> value) { inst.WriteOffset(0x310, value); }
	inline bool IsShowWidget()
	{
		return boolField311& 0x1;
	}
	inline bool SetIsShowWidget(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x311, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetColorBlindColors(t_structHelper inst, FColorBlindColorSet value) { inst.WriteOffset(0x318, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUW_AdaptiveCrosshair_C = sizeof(UW_AdaptiveCrosshair_C); // 808
    static_assert(sizeof(UW_AdaptiveCrosshair_C) == 0x328, "Size of UW_AdaptiveCrosshair_C is not correct.");
	auto constexpr UW_AdaptiveCrosshair_C_AdaptiveCrosshair_Offset = offsetof(UW_AdaptiveCrosshair_C, AdaptiveCrosshair);
	static_assert(UW_AdaptiveCrosshair_C_AdaptiveCrosshair_Offset == 0x248, "UW_AdaptiveCrosshair_C::AdaptiveCrosshair offset is not 248");
	auto constexpr UW_AdaptiveCrosshair_C_CanvasBase_Offset = offsetof(UW_AdaptiveCrosshair_C, CanvasBase);
	static_assert(UW_AdaptiveCrosshair_C_CanvasBase_Offset == 0x250, "UW_AdaptiveCrosshair_C::CanvasBase offset is not 250");
	auto constexpr UW_AdaptiveCrosshair_C_CenterCenter_Offset = offsetof(UW_AdaptiveCrosshair_C, CenterCenter);
	static_assert(UW_AdaptiveCrosshair_C_CenterCenter_Offset == 0x258, "UW_AdaptiveCrosshair_C::CenterCenter offset is not 258");
	auto constexpr UW_AdaptiveCrosshair_C_CenterCrosshair_Offset = offsetof(UW_AdaptiveCrosshair_C, CenterCrosshair);
	static_assert(UW_AdaptiveCrosshair_C_CenterCrosshair_Offset == 0x260, "UW_AdaptiveCrosshair_C::CenterCrosshair offset is not 260");
	auto constexpr UW_AdaptiveCrosshair_C_CenterD_Offset = offsetof(UW_AdaptiveCrosshair_C, CenterD);
	static_assert(UW_AdaptiveCrosshair_C_CenterD_Offset == 0x268, "UW_AdaptiveCrosshair_C::CenterD offset is not 268");
	auto constexpr UW_AdaptiveCrosshair_C_CenterDOT_Offset = offsetof(UW_AdaptiveCrosshair_C, CenterDOT);
	static_assert(UW_AdaptiveCrosshair_C_CenterDOT_Offset == 0x270, "UW_AdaptiveCrosshair_C::CenterDOT offset is not 270");
	auto constexpr UW_AdaptiveCrosshair_C_CenterL_Offset = offsetof(UW_AdaptiveCrosshair_C, CenterL);
	static_assert(UW_AdaptiveCrosshair_C_CenterL_Offset == 0x278, "UW_AdaptiveCrosshair_C::CenterL offset is not 278");
	auto constexpr UW_AdaptiveCrosshair_C_CenterR_Offset = offsetof(UW_AdaptiveCrosshair_C, CenterR);
	static_assert(UW_AdaptiveCrosshair_C_CenterR_Offset == 0x280, "UW_AdaptiveCrosshair_C::CenterR offset is not 280");
	auto constexpr UW_AdaptiveCrosshair_C_CenterU_Offset = offsetof(UW_AdaptiveCrosshair_C, CenterU);
	static_assert(UW_AdaptiveCrosshair_C_CenterU_Offset == 0x288, "UW_AdaptiveCrosshair_C::CenterU offset is not 288");
	auto constexpr UW_AdaptiveCrosshair_C_Pistol_C_Offset = offsetof(UW_AdaptiveCrosshair_C, Pistol_C);
	static_assert(UW_AdaptiveCrosshair_C_Pistol_C_Offset == 0x290, "UW_AdaptiveCrosshair_C::Pistol_C offset is not 290");
	auto constexpr UW_AdaptiveCrosshair_C_Pistol_C_Gradient_Offset = offsetof(UW_AdaptiveCrosshair_C, Pistol_C_Gradient);
	static_assert(UW_AdaptiveCrosshair_C_Pistol_C_Gradient_Offset == 0x298, "UW_AdaptiveCrosshair_C::Pistol_C_Gradient offset is not 298");
	auto constexpr UW_AdaptiveCrosshair_C_Pistol_L_Offset = offsetof(UW_AdaptiveCrosshair_C, Pistol_L);
	static_assert(UW_AdaptiveCrosshair_C_Pistol_L_Offset == 0x2a0, "UW_AdaptiveCrosshair_C::Pistol_L offset is not 2a0");
	auto constexpr UW_AdaptiveCrosshair_C_Pistol_R_Offset = offsetof(UW_AdaptiveCrosshair_C, Pistol_R);
	static_assert(UW_AdaptiveCrosshair_C_Pistol_R_Offset == 0x2a8, "UW_AdaptiveCrosshair_C::Pistol_R offset is not 2a8");
	auto constexpr UW_AdaptiveCrosshair_C_Rifle_D_Offset = offsetof(UW_AdaptiveCrosshair_C, Rifle_D);
	static_assert(UW_AdaptiveCrosshair_C_Rifle_D_Offset == 0x2b0, "UW_AdaptiveCrosshair_C::Rifle_D offset is not 2b0");
	auto constexpr UW_AdaptiveCrosshair_C_Rifle_D_Arrow_Offset = offsetof(UW_AdaptiveCrosshair_C, Rifle_D_Arrow);
	static_assert(UW_AdaptiveCrosshair_C_Rifle_D_Arrow_Offset == 0x2b8, "UW_AdaptiveCrosshair_C::Rifle_D_Arrow offset is not 2b8");
	auto constexpr UW_AdaptiveCrosshair_C_Rifle_L_Offset = offsetof(UW_AdaptiveCrosshair_C, Rifle_L);
	static_assert(UW_AdaptiveCrosshair_C_Rifle_L_Offset == 0x2c0, "UW_AdaptiveCrosshair_C::Rifle_L offset is not 2c0");
	auto constexpr UW_AdaptiveCrosshair_C_Rifle_L_Arrow_Offset = offsetof(UW_AdaptiveCrosshair_C, Rifle_L_Arrow);
	static_assert(UW_AdaptiveCrosshair_C_Rifle_L_Arrow_Offset == 0x2c8, "UW_AdaptiveCrosshair_C::Rifle_L_Arrow offset is not 2c8");
	auto constexpr UW_AdaptiveCrosshair_C_Rifle_R_Offset = offsetof(UW_AdaptiveCrosshair_C, Rifle_R);
	static_assert(UW_AdaptiveCrosshair_C_Rifle_R_Offset == 0x2d0, "UW_AdaptiveCrosshair_C::Rifle_R offset is not 2d0");
	auto constexpr UW_AdaptiveCrosshair_C_Rifle_R_Arrow_Offset = offsetof(UW_AdaptiveCrosshair_C, Rifle_R_Arrow);
	static_assert(UW_AdaptiveCrosshair_C_Rifle_R_Arrow_Offset == 0x2d8, "UW_AdaptiveCrosshair_C::Rifle_R_Arrow offset is not 2d8");
	auto constexpr UW_AdaptiveCrosshair_C_Rifle_U_Offset = offsetof(UW_AdaptiveCrosshair_C, Rifle_U);
	static_assert(UW_AdaptiveCrosshair_C_Rifle_U_Offset == 0x2e0, "UW_AdaptiveCrosshair_C::Rifle_U offset is not 2e0");
	auto constexpr UW_AdaptiveCrosshair_C_Rifle_U_Arrow_Offset = offsetof(UW_AdaptiveCrosshair_C, Rifle_U_Arrow);
	static_assert(UW_AdaptiveCrosshair_C_Rifle_U_Arrow_Offset == 0x2e8, "UW_AdaptiveCrosshair_C::Rifle_U_Arrow offset is not 2e8");
	auto constexpr UW_AdaptiveCrosshair_C_Shotgun_D_Offset = offsetof(UW_AdaptiveCrosshair_C, Shotgun_D);
	static_assert(UW_AdaptiveCrosshair_C_Shotgun_D_Offset == 0x2f0, "UW_AdaptiveCrosshair_C::Shotgun_D offset is not 2f0");
	auto constexpr UW_AdaptiveCrosshair_C_Shotgun_L_Offset = offsetof(UW_AdaptiveCrosshair_C, Shotgun_L);
	static_assert(UW_AdaptiveCrosshair_C_Shotgun_L_Offset == 0x2f8, "UW_AdaptiveCrosshair_C::Shotgun_L offset is not 2f8");
	auto constexpr UW_AdaptiveCrosshair_C_Shotgun_R_Offset = offsetof(UW_AdaptiveCrosshair_C, Shotgun_R);
	static_assert(UW_AdaptiveCrosshair_C_Shotgun_R_Offset == 0x300, "UW_AdaptiveCrosshair_C::Shotgun_R offset is not 300");
	auto constexpr UW_AdaptiveCrosshair_C_Shotgun_U_Offset = offsetof(UW_AdaptiveCrosshair_C, Shotgun_U);
	static_assert(UW_AdaptiveCrosshair_C_Shotgun_U_Offset == 0x308, "UW_AdaptiveCrosshair_C::Shotgun_U offset is not 308");
	auto constexpr UW_AdaptiveCrosshair_C_WeaponClass_Offset = offsetof(UW_AdaptiveCrosshair_C, WeaponClass);
	static_assert(UW_AdaptiveCrosshair_C_WeaponClass_Offset == 0x310, "UW_AdaptiveCrosshair_C::WeaponClass offset is not 310");
	auto constexpr UW_AdaptiveCrosshair_C_boolField311_Offset = offsetof(UW_AdaptiveCrosshair_C, boolField311);
	static_assert(UW_AdaptiveCrosshair_C_boolField311_Offset == 0x311, "UW_AdaptiveCrosshair_C::boolField311 offset is not 311");
	auto constexpr UW_AdaptiveCrosshair_C_ColorBlindColors_Offset = offsetof(UW_AdaptiveCrosshair_C, ColorBlindColors);
	static_assert(UW_AdaptiveCrosshair_C_ColorBlindColors_Offset == 0x318, "UW_AdaptiveCrosshair_C::ColorBlindColors offset is not 318");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
