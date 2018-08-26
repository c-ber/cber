#pragma once
#include "UTslAdaptiveCrosshairWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_AdaptiveCrosshairWidget_C // Size: 0x790
	: public UTslAdaptiveCrosshairWidget // Size: 0x6C8
{
private:
	typedef UBP_AdaptiveCrosshairWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88927); // id32("WidgetBlueprintGeneratedClass BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C")
		return ptr;
	}
	ExternalPtr<struct UImage> AdaptiveCrosshair; /* Ofs: 0x6C8 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.AdaptiveCrosshair */
	ExternalPtr<struct UCanvasPanel> CanvasBase; /* Ofs: 0x6D0 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.CanvasBase */
	ExternalPtr<struct UCanvasPanel> CenterCenter; /* Ofs: 0x6D8 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.CenterCenter */
	ExternalPtr<struct UCanvasPanel> CenterCrosshair; /* Ofs: 0x6E0 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.CenterCrosshair */
	ExternalPtr<struct UCanvasPanel> CenterD; /* Ofs: 0x6E8 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.CenterD */
	ExternalPtr<struct UImage> CenterDOT; /* Ofs: 0x6F0 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.CenterDOT */
	ExternalPtr<struct UCanvasPanel> CenterL; /* Ofs: 0x6F8 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.CenterL */
	ExternalPtr<struct UCanvasPanel> CenterR; /* Ofs: 0x700 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.CenterR */
	ExternalPtr<struct UCanvasPanel> CenterU; /* Ofs: 0x708 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.CenterU */
	ExternalPtr<struct UImage> Pistol_C; /* Ofs: 0x710 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.Pistol_C */
	ExternalPtr<struct UImage> Pistol_C_Gradient; /* Ofs: 0x718 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.Pistol_C_Gradient */
	ExternalPtr<struct UImage> Pistol_L; /* Ofs: 0x720 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.Pistol_L */
	ExternalPtr<struct UImage> Pistol_R; /* Ofs: 0x728 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.Pistol_R */
	ExternalPtr<struct UImage> Rifle_D; /* Ofs: 0x730 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.Rifle_D */
	ExternalPtr<struct UImage> Rifle_D_Arrow; /* Ofs: 0x738 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.Rifle_D_Arrow */
	ExternalPtr<struct UImage> Rifle_L; /* Ofs: 0x740 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.Rifle_L */
	ExternalPtr<struct UImage> Rifle_L_Arrow; /* Ofs: 0x748 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.Rifle_L_Arrow */
	ExternalPtr<struct UImage> Rifle_R; /* Ofs: 0x750 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.Rifle_R */
	ExternalPtr<struct UImage> Rifle_R_Arrow; /* Ofs: 0x758 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.Rifle_R_Arrow */
	ExternalPtr<struct UImage> Rifle_U; /* Ofs: 0x760 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.Rifle_U */
	ExternalPtr<struct UImage> Rifle_U_Arrow; /* Ofs: 0x768 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.Rifle_U_Arrow */
	ExternalPtr<struct UImage> Shotgun_D; /* Ofs: 0x770 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.Shotgun_D */
	ExternalPtr<struct UImage> Shotgun_L; /* Ofs: 0x778 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.Shotgun_L */
	ExternalPtr<struct UImage> Shotgun_R; /* Ofs: 0x780 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.Shotgun_R */
	ExternalPtr<struct UImage> Shotgun_U; /* Ofs: 0x788 Size: 0x8 - ObjectProperty BP_AdaptiveCrosshairWidget.BP_AdaptiveCrosshairWidget_C.Shotgun_U */


	inline bool SetAdaptiveCrosshair(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x6C8, value); }
	inline bool SetCanvasBase(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x6D0, value); }
	inline bool SetCenterCenter(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x6D8, value); }
	inline bool SetCenterCrosshair(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x6E0, value); }
	inline bool SetCenterD(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x6E8, value); }
	inline bool SetCenterDOT(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x6F0, value); }
	inline bool SetCenterL(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x6F8, value); }
	inline bool SetCenterR(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x700, value); }
	inline bool SetCenterU(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x708, value); }
	inline bool SetPistol_C(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x710, value); }
	inline bool SetPistol_C_Gradient(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x718, value); }
	inline bool SetPistol_L(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x720, value); }
	inline bool SetPistol_R(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x728, value); }
	inline bool SetRifle_D(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x730, value); }
	inline bool SetRifle_D_Arrow(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x738, value); }
	inline bool SetRifle_L(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x740, value); }
	inline bool SetRifle_L_Arrow(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x748, value); }
	inline bool SetRifle_R(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x750, value); }
	inline bool SetRifle_R_Arrow(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x758, value); }
	inline bool SetRifle_U(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x760, value); }
	inline bool SetRifle_U_Arrow(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x768, value); }
	inline bool SetShotgun_D(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x770, value); }
	inline bool SetShotgun_L(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x778, value); }
	inline bool SetShotgun_R(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x780, value); }
	inline bool SetShotgun_U(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x788, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_AdaptiveCrosshairWidget_C = sizeof(UBP_AdaptiveCrosshairWidget_C); // 1936
    static_assert(sizeof(UBP_AdaptiveCrosshairWidget_C) == 0x790, "Size of UBP_AdaptiveCrosshairWidget_C is not correct.");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_AdaptiveCrosshair_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, AdaptiveCrosshair);
	static_assert(UBP_AdaptiveCrosshairWidget_C_AdaptiveCrosshair_Offset == 0x6c8, "UBP_AdaptiveCrosshairWidget_C::AdaptiveCrosshair offset is not 6c8");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_CanvasBase_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, CanvasBase);
	static_assert(UBP_AdaptiveCrosshairWidget_C_CanvasBase_Offset == 0x6d0, "UBP_AdaptiveCrosshairWidget_C::CanvasBase offset is not 6d0");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_CenterCenter_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, CenterCenter);
	static_assert(UBP_AdaptiveCrosshairWidget_C_CenterCenter_Offset == 0x6d8, "UBP_AdaptiveCrosshairWidget_C::CenterCenter offset is not 6d8");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_CenterCrosshair_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, CenterCrosshair);
	static_assert(UBP_AdaptiveCrosshairWidget_C_CenterCrosshair_Offset == 0x6e0, "UBP_AdaptiveCrosshairWidget_C::CenterCrosshair offset is not 6e0");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_CenterD_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, CenterD);
	static_assert(UBP_AdaptiveCrosshairWidget_C_CenterD_Offset == 0x6e8, "UBP_AdaptiveCrosshairWidget_C::CenterD offset is not 6e8");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_CenterDOT_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, CenterDOT);
	static_assert(UBP_AdaptiveCrosshairWidget_C_CenterDOT_Offset == 0x6f0, "UBP_AdaptiveCrosshairWidget_C::CenterDOT offset is not 6f0");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_CenterL_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, CenterL);
	static_assert(UBP_AdaptiveCrosshairWidget_C_CenterL_Offset == 0x6f8, "UBP_AdaptiveCrosshairWidget_C::CenterL offset is not 6f8");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_CenterR_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, CenterR);
	static_assert(UBP_AdaptiveCrosshairWidget_C_CenterR_Offset == 0x700, "UBP_AdaptiveCrosshairWidget_C::CenterR offset is not 700");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_CenterU_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, CenterU);
	static_assert(UBP_AdaptiveCrosshairWidget_C_CenterU_Offset == 0x708, "UBP_AdaptiveCrosshairWidget_C::CenterU offset is not 708");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_Pistol_C_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, Pistol_C);
	static_assert(UBP_AdaptiveCrosshairWidget_C_Pistol_C_Offset == 0x710, "UBP_AdaptiveCrosshairWidget_C::Pistol_C offset is not 710");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_Pistol_C_Gradient_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, Pistol_C_Gradient);
	static_assert(UBP_AdaptiveCrosshairWidget_C_Pistol_C_Gradient_Offset == 0x718, "UBP_AdaptiveCrosshairWidget_C::Pistol_C_Gradient offset is not 718");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_Pistol_L_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, Pistol_L);
	static_assert(UBP_AdaptiveCrosshairWidget_C_Pistol_L_Offset == 0x720, "UBP_AdaptiveCrosshairWidget_C::Pistol_L offset is not 720");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_Pistol_R_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, Pistol_R);
	static_assert(UBP_AdaptiveCrosshairWidget_C_Pistol_R_Offset == 0x728, "UBP_AdaptiveCrosshairWidget_C::Pistol_R offset is not 728");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_Rifle_D_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, Rifle_D);
	static_assert(UBP_AdaptiveCrosshairWidget_C_Rifle_D_Offset == 0x730, "UBP_AdaptiveCrosshairWidget_C::Rifle_D offset is not 730");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_Rifle_D_Arrow_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, Rifle_D_Arrow);
	static_assert(UBP_AdaptiveCrosshairWidget_C_Rifle_D_Arrow_Offset == 0x738, "UBP_AdaptiveCrosshairWidget_C::Rifle_D_Arrow offset is not 738");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_Rifle_L_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, Rifle_L);
	static_assert(UBP_AdaptiveCrosshairWidget_C_Rifle_L_Offset == 0x740, "UBP_AdaptiveCrosshairWidget_C::Rifle_L offset is not 740");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_Rifle_L_Arrow_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, Rifle_L_Arrow);
	static_assert(UBP_AdaptiveCrosshairWidget_C_Rifle_L_Arrow_Offset == 0x748, "UBP_AdaptiveCrosshairWidget_C::Rifle_L_Arrow offset is not 748");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_Rifle_R_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, Rifle_R);
	static_assert(UBP_AdaptiveCrosshairWidget_C_Rifle_R_Offset == 0x750, "UBP_AdaptiveCrosshairWidget_C::Rifle_R offset is not 750");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_Rifle_R_Arrow_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, Rifle_R_Arrow);
	static_assert(UBP_AdaptiveCrosshairWidget_C_Rifle_R_Arrow_Offset == 0x758, "UBP_AdaptiveCrosshairWidget_C::Rifle_R_Arrow offset is not 758");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_Rifle_U_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, Rifle_U);
	static_assert(UBP_AdaptiveCrosshairWidget_C_Rifle_U_Offset == 0x760, "UBP_AdaptiveCrosshairWidget_C::Rifle_U offset is not 760");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_Rifle_U_Arrow_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, Rifle_U_Arrow);
	static_assert(UBP_AdaptiveCrosshairWidget_C_Rifle_U_Arrow_Offset == 0x768, "UBP_AdaptiveCrosshairWidget_C::Rifle_U_Arrow offset is not 768");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_Shotgun_D_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, Shotgun_D);
	static_assert(UBP_AdaptiveCrosshairWidget_C_Shotgun_D_Offset == 0x770, "UBP_AdaptiveCrosshairWidget_C::Shotgun_D offset is not 770");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_Shotgun_L_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, Shotgun_L);
	static_assert(UBP_AdaptiveCrosshairWidget_C_Shotgun_L_Offset == 0x778, "UBP_AdaptiveCrosshairWidget_C::Shotgun_L offset is not 778");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_Shotgun_R_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, Shotgun_R);
	static_assert(UBP_AdaptiveCrosshairWidget_C_Shotgun_R_Offset == 0x780, "UBP_AdaptiveCrosshairWidget_C::Shotgun_R offset is not 780");
	auto constexpr UBP_AdaptiveCrosshairWidget_C_Shotgun_U_Offset = offsetof(UBP_AdaptiveCrosshairWidget_C, Shotgun_U);
	static_assert(UBP_AdaptiveCrosshairWidget_C_Shotgun_U_Offset == 0x788, "UBP_AdaptiveCrosshairWidget_C::Shotgun_U offset is not 788");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
