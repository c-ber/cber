#pragma once
#include "UUserWidget.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UW_RecoilDebugMenu_C // Size: 0x360
	: public UUserWidget // Size: 0x248
{
private:
	typedef UW_RecoilDebugMenu_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(90282); // id32("WidgetBlueprintGeneratedClass W_RecoilDebugMenu.W_RecoilDebugMenu_C")
		return ptr;
	}
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x248 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.Image_1 */
	ExternalPtr<struct UImage> Image_95; /* Ofs: 0x250 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.Image_95 */
	ExternalPtr<struct UScrollBox> InfoListScroll; /* Ofs: 0x258 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.InfoListScroll */
	ExternalPtr<struct UVerticalBox> RecoilInfoList; /* Ofs: 0x260 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.RecoilInfoList */
	ExternalPtr<struct UTextBlock> RecoilRot_Stat_CY; /* Ofs: 0x268 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.RecoilRot_Stat_CY */
	ExternalPtr<struct UImage> RecoilRot_Stat_Totals; /* Ofs: 0x270 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.RecoilRot_Stat_Totals */
	ExternalPtr<struct UTextBlock> RecoilRot_Stat_WY; /* Ofs: 0x278 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.RecoilRot_Stat_WY */
	ExternalPtr<struct UVerticalBox> RecoilRot_VB; /* Ofs: 0x280 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.RecoilRot_VB */
	ExternalPtr<struct URetainerBox> RetainerBox_1; /* Ofs: 0x288 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.RetainerBox_1 */
	ExternalPtr<struct UTextBlock> T_RHDMax; /* Ofs: 0x290 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.T_RHDMax */
	ExternalPtr<struct UTextBlock> T_RHDMin; /* Ofs: 0x298 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.T_RHDMin */
	ExternalPtr<struct UTextBlock> T_RHMax; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.T_RHMax */
	ExternalPtr<struct UTextBlock> T_RHMin; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.T_RHMin */
	ExternalPtr<struct UTextBlock> T_RRVMax; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.T_RRVMax */
	ExternalPtr<struct UTextBlock> T_RRVMin; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.T_RRVMin */
	ExternalPtr<struct UTextBlock> T_RTHMAx; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.T_RTHMAx */
	ExternalPtr<struct UTextBlock> T_RTHMin; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.T_RTHMin */
	ExternalPtr<struct UTextBlock> T_RTVMax; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.T_RTVMax */
	ExternalPtr<struct UTextBlock> T_RTVMin; /* Ofs: 0x2D8 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.T_RTVMin */
	ExternalPtr<struct UTextBlock> T_RValMax; /* Ofs: 0x2E0 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.T_RValMax */
	ExternalPtr<struct UTextBlock> T_RValMin; /* Ofs: 0x2E8 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.T_RValMin */
	ExternalPtr<struct UTextBlock> T_RVDMax; /* Ofs: 0x2F0 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.T_RVDMax */
	ExternalPtr<struct UTextBlock> T_RVDMin; /* Ofs: 0x2F8 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.T_RVDMin */
	ExternalPtr<struct UTextBlock> T_RVMax; /* Ofs: 0x300 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.T_RVMax */
	ExternalPtr<struct UTextBlock> T_RVMin; /* Ofs: 0x308 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.T_RVMin */
	ExternalPtr<struct UW_RecoilDebug_Target_C> W_RecoilDebug_Target_Panel; /* Ofs: 0x310 Size: 0x8 - ObjectProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.W_RecoilDebug_Target_Panel */
	FVector2D StatRVal; /* Ofs: 0x318 Size: 0x8 - StructProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.StatRVal */
	FVector2D StatRV; /* Ofs: 0x320 Size: 0x8 - StructProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.StatRV */
	FVector2D StatRH; /* Ofs: 0x328 Size: 0x8 - StructProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.StatRH */
	FVector2D StatRTV; /* Ofs: 0x330 Size: 0x8 - StructProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.StatRTV */
	FVector2D StatRTH; /* Ofs: 0x338 Size: 0x8 - StructProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.StatRTH */
	FVector2D StatRRV; /* Ofs: 0x340 Size: 0x8 - StructProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.StatRRV */
	FVector2D StatRVD; /* Ofs: 0x348 Size: 0x8 - StructProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.StatRVD */
	FVector2D StatRHD; /* Ofs: 0x350 Size: 0x8 - StructProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.StatRHD */
	float StatCharacterY; /* Ofs: 0x358 Size: 0x4 - FloatProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.StatCharacterY */
	float StatWeaponY; /* Ofs: 0x35C Size: 0x4 - FloatProperty W_RecoilDebugMenu.W_RecoilDebugMenu_C.StatWeaponY */


	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x248, value); }
	inline bool SetImage_95(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetInfoListScroll(t_structHelper inst, ExternalPtr<struct UScrollBox> value) { inst.WriteOffset(0x258, value); }
	inline bool SetRecoilInfoList(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x260, value); }
	inline bool SetRecoilRot_Stat_CY(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x268, value); }
	inline bool SetRecoilRot_Stat_Totals(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x270, value); }
	inline bool SetRecoilRot_Stat_WY(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x278, value); }
	inline bool SetRecoilRot_VB(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x280, value); }
	inline bool SetRetainerBox_1(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x288, value); }
	inline bool SetT_RHDMax(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x290, value); }
	inline bool SetT_RHDMin(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x298, value); }
	inline bool SetT_RHMax(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetT_RHMin(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetT_RRVMax(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetT_RRVMin(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetT_RTHMAx(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetT_RTHMin(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetT_RTVMax(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetT_RTVMin(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetT_RValMax(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetT_RValMin(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetT_RVDMax(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetT_RVDMin(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetT_RVMax(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x300, value); }
	inline bool SetT_RVMin(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x308, value); }
	inline bool SetW_RecoilDebug_Target_Panel(t_structHelper inst, ExternalPtr<struct UW_RecoilDebug_Target_C> value) { inst.WriteOffset(0x310, value); }
	inline bool SetStatRVal(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x318, value); }
	inline bool SetStatRV(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x320, value); }
	inline bool SetStatRH(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x328, value); }
	inline bool SetStatRTV(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x330, value); }
	inline bool SetStatRTH(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x338, value); }
	inline bool SetStatRRV(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x340, value); }
	inline bool SetStatRVD(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x348, value); }
	inline bool SetStatRHD(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x350, value); }
	inline bool SetStatCharacterY(t_structHelper inst, float value) { inst.WriteOffset(0x358, value); }
	inline bool SetStatWeaponY(t_structHelper inst, float value) { inst.WriteOffset(0x35C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUW_RecoilDebugMenu_C = sizeof(UW_RecoilDebugMenu_C); // 864
    static_assert(sizeof(UW_RecoilDebugMenu_C) == 0x360, "Size of UW_RecoilDebugMenu_C is not correct.");
	auto constexpr UW_RecoilDebugMenu_C_Image_1_Offset = offsetof(UW_RecoilDebugMenu_C, Image_1);
	static_assert(UW_RecoilDebugMenu_C_Image_1_Offset == 0x248, "UW_RecoilDebugMenu_C::Image_1 offset is not 248");
	auto constexpr UW_RecoilDebugMenu_C_Image_95_Offset = offsetof(UW_RecoilDebugMenu_C, Image_95);
	static_assert(UW_RecoilDebugMenu_C_Image_95_Offset == 0x250, "UW_RecoilDebugMenu_C::Image_95 offset is not 250");
	auto constexpr UW_RecoilDebugMenu_C_InfoListScroll_Offset = offsetof(UW_RecoilDebugMenu_C, InfoListScroll);
	static_assert(UW_RecoilDebugMenu_C_InfoListScroll_Offset == 0x258, "UW_RecoilDebugMenu_C::InfoListScroll offset is not 258");
	auto constexpr UW_RecoilDebugMenu_C_RecoilInfoList_Offset = offsetof(UW_RecoilDebugMenu_C, RecoilInfoList);
	static_assert(UW_RecoilDebugMenu_C_RecoilInfoList_Offset == 0x260, "UW_RecoilDebugMenu_C::RecoilInfoList offset is not 260");
	auto constexpr UW_RecoilDebugMenu_C_RecoilRot_Stat_CY_Offset = offsetof(UW_RecoilDebugMenu_C, RecoilRot_Stat_CY);
	static_assert(UW_RecoilDebugMenu_C_RecoilRot_Stat_CY_Offset == 0x268, "UW_RecoilDebugMenu_C::RecoilRot_Stat_CY offset is not 268");
	auto constexpr UW_RecoilDebugMenu_C_RecoilRot_Stat_Totals_Offset = offsetof(UW_RecoilDebugMenu_C, RecoilRot_Stat_Totals);
	static_assert(UW_RecoilDebugMenu_C_RecoilRot_Stat_Totals_Offset == 0x270, "UW_RecoilDebugMenu_C::RecoilRot_Stat_Totals offset is not 270");
	auto constexpr UW_RecoilDebugMenu_C_RecoilRot_Stat_WY_Offset = offsetof(UW_RecoilDebugMenu_C, RecoilRot_Stat_WY);
	static_assert(UW_RecoilDebugMenu_C_RecoilRot_Stat_WY_Offset == 0x278, "UW_RecoilDebugMenu_C::RecoilRot_Stat_WY offset is not 278");
	auto constexpr UW_RecoilDebugMenu_C_RecoilRot_VB_Offset = offsetof(UW_RecoilDebugMenu_C, RecoilRot_VB);
	static_assert(UW_RecoilDebugMenu_C_RecoilRot_VB_Offset == 0x280, "UW_RecoilDebugMenu_C::RecoilRot_VB offset is not 280");
	auto constexpr UW_RecoilDebugMenu_C_RetainerBox_1_Offset = offsetof(UW_RecoilDebugMenu_C, RetainerBox_1);
	static_assert(UW_RecoilDebugMenu_C_RetainerBox_1_Offset == 0x288, "UW_RecoilDebugMenu_C::RetainerBox_1 offset is not 288");
	auto constexpr UW_RecoilDebugMenu_C_T_RHDMax_Offset = offsetof(UW_RecoilDebugMenu_C, T_RHDMax);
	static_assert(UW_RecoilDebugMenu_C_T_RHDMax_Offset == 0x290, "UW_RecoilDebugMenu_C::T_RHDMax offset is not 290");
	auto constexpr UW_RecoilDebugMenu_C_T_RHDMin_Offset = offsetof(UW_RecoilDebugMenu_C, T_RHDMin);
	static_assert(UW_RecoilDebugMenu_C_T_RHDMin_Offset == 0x298, "UW_RecoilDebugMenu_C::T_RHDMin offset is not 298");
	auto constexpr UW_RecoilDebugMenu_C_T_RHMax_Offset = offsetof(UW_RecoilDebugMenu_C, T_RHMax);
	static_assert(UW_RecoilDebugMenu_C_T_RHMax_Offset == 0x2a0, "UW_RecoilDebugMenu_C::T_RHMax offset is not 2a0");
	auto constexpr UW_RecoilDebugMenu_C_T_RHMin_Offset = offsetof(UW_RecoilDebugMenu_C, T_RHMin);
	static_assert(UW_RecoilDebugMenu_C_T_RHMin_Offset == 0x2a8, "UW_RecoilDebugMenu_C::T_RHMin offset is not 2a8");
	auto constexpr UW_RecoilDebugMenu_C_T_RRVMax_Offset = offsetof(UW_RecoilDebugMenu_C, T_RRVMax);
	static_assert(UW_RecoilDebugMenu_C_T_RRVMax_Offset == 0x2b0, "UW_RecoilDebugMenu_C::T_RRVMax offset is not 2b0");
	auto constexpr UW_RecoilDebugMenu_C_T_RRVMin_Offset = offsetof(UW_RecoilDebugMenu_C, T_RRVMin);
	static_assert(UW_RecoilDebugMenu_C_T_RRVMin_Offset == 0x2b8, "UW_RecoilDebugMenu_C::T_RRVMin offset is not 2b8");
	auto constexpr UW_RecoilDebugMenu_C_T_RTHMAx_Offset = offsetof(UW_RecoilDebugMenu_C, T_RTHMAx);
	static_assert(UW_RecoilDebugMenu_C_T_RTHMAx_Offset == 0x2c0, "UW_RecoilDebugMenu_C::T_RTHMAx offset is not 2c0");
	auto constexpr UW_RecoilDebugMenu_C_T_RTHMin_Offset = offsetof(UW_RecoilDebugMenu_C, T_RTHMin);
	static_assert(UW_RecoilDebugMenu_C_T_RTHMin_Offset == 0x2c8, "UW_RecoilDebugMenu_C::T_RTHMin offset is not 2c8");
	auto constexpr UW_RecoilDebugMenu_C_T_RTVMax_Offset = offsetof(UW_RecoilDebugMenu_C, T_RTVMax);
	static_assert(UW_RecoilDebugMenu_C_T_RTVMax_Offset == 0x2d0, "UW_RecoilDebugMenu_C::T_RTVMax offset is not 2d0");
	auto constexpr UW_RecoilDebugMenu_C_T_RTVMin_Offset = offsetof(UW_RecoilDebugMenu_C, T_RTVMin);
	static_assert(UW_RecoilDebugMenu_C_T_RTVMin_Offset == 0x2d8, "UW_RecoilDebugMenu_C::T_RTVMin offset is not 2d8");
	auto constexpr UW_RecoilDebugMenu_C_T_RValMax_Offset = offsetof(UW_RecoilDebugMenu_C, T_RValMax);
	static_assert(UW_RecoilDebugMenu_C_T_RValMax_Offset == 0x2e0, "UW_RecoilDebugMenu_C::T_RValMax offset is not 2e0");
	auto constexpr UW_RecoilDebugMenu_C_T_RValMin_Offset = offsetof(UW_RecoilDebugMenu_C, T_RValMin);
	static_assert(UW_RecoilDebugMenu_C_T_RValMin_Offset == 0x2e8, "UW_RecoilDebugMenu_C::T_RValMin offset is not 2e8");
	auto constexpr UW_RecoilDebugMenu_C_T_RVDMax_Offset = offsetof(UW_RecoilDebugMenu_C, T_RVDMax);
	static_assert(UW_RecoilDebugMenu_C_T_RVDMax_Offset == 0x2f0, "UW_RecoilDebugMenu_C::T_RVDMax offset is not 2f0");
	auto constexpr UW_RecoilDebugMenu_C_T_RVDMin_Offset = offsetof(UW_RecoilDebugMenu_C, T_RVDMin);
	static_assert(UW_RecoilDebugMenu_C_T_RVDMin_Offset == 0x2f8, "UW_RecoilDebugMenu_C::T_RVDMin offset is not 2f8");
	auto constexpr UW_RecoilDebugMenu_C_T_RVMax_Offset = offsetof(UW_RecoilDebugMenu_C, T_RVMax);
	static_assert(UW_RecoilDebugMenu_C_T_RVMax_Offset == 0x300, "UW_RecoilDebugMenu_C::T_RVMax offset is not 300");
	auto constexpr UW_RecoilDebugMenu_C_T_RVMin_Offset = offsetof(UW_RecoilDebugMenu_C, T_RVMin);
	static_assert(UW_RecoilDebugMenu_C_T_RVMin_Offset == 0x308, "UW_RecoilDebugMenu_C::T_RVMin offset is not 308");
	auto constexpr UW_RecoilDebugMenu_C_W_RecoilDebug_Target_Panel_Offset = offsetof(UW_RecoilDebugMenu_C, W_RecoilDebug_Target_Panel);
	static_assert(UW_RecoilDebugMenu_C_W_RecoilDebug_Target_Panel_Offset == 0x310, "UW_RecoilDebugMenu_C::W_RecoilDebug_Target_Panel offset is not 310");
	auto constexpr UW_RecoilDebugMenu_C_StatRVal_Offset = offsetof(UW_RecoilDebugMenu_C, StatRVal);
	static_assert(UW_RecoilDebugMenu_C_StatRVal_Offset == 0x318, "UW_RecoilDebugMenu_C::StatRVal offset is not 318");
	auto constexpr UW_RecoilDebugMenu_C_StatRV_Offset = offsetof(UW_RecoilDebugMenu_C, StatRV);
	static_assert(UW_RecoilDebugMenu_C_StatRV_Offset == 0x320, "UW_RecoilDebugMenu_C::StatRV offset is not 320");
	auto constexpr UW_RecoilDebugMenu_C_StatRH_Offset = offsetof(UW_RecoilDebugMenu_C, StatRH);
	static_assert(UW_RecoilDebugMenu_C_StatRH_Offset == 0x328, "UW_RecoilDebugMenu_C::StatRH offset is not 328");
	auto constexpr UW_RecoilDebugMenu_C_StatRTV_Offset = offsetof(UW_RecoilDebugMenu_C, StatRTV);
	static_assert(UW_RecoilDebugMenu_C_StatRTV_Offset == 0x330, "UW_RecoilDebugMenu_C::StatRTV offset is not 330");
	auto constexpr UW_RecoilDebugMenu_C_StatRTH_Offset = offsetof(UW_RecoilDebugMenu_C, StatRTH);
	static_assert(UW_RecoilDebugMenu_C_StatRTH_Offset == 0x338, "UW_RecoilDebugMenu_C::StatRTH offset is not 338");
	auto constexpr UW_RecoilDebugMenu_C_StatRRV_Offset = offsetof(UW_RecoilDebugMenu_C, StatRRV);
	static_assert(UW_RecoilDebugMenu_C_StatRRV_Offset == 0x340, "UW_RecoilDebugMenu_C::StatRRV offset is not 340");
	auto constexpr UW_RecoilDebugMenu_C_StatRVD_Offset = offsetof(UW_RecoilDebugMenu_C, StatRVD);
	static_assert(UW_RecoilDebugMenu_C_StatRVD_Offset == 0x348, "UW_RecoilDebugMenu_C::StatRVD offset is not 348");
	auto constexpr UW_RecoilDebugMenu_C_StatRHD_Offset = offsetof(UW_RecoilDebugMenu_C, StatRHD);
	static_assert(UW_RecoilDebugMenu_C_StatRHD_Offset == 0x350, "UW_RecoilDebugMenu_C::StatRHD offset is not 350");
	auto constexpr UW_RecoilDebugMenu_C_StatCharacterY_Offset = offsetof(UW_RecoilDebugMenu_C, StatCharacterY);
	static_assert(UW_RecoilDebugMenu_C_StatCharacterY_Offset == 0x358, "UW_RecoilDebugMenu_C::StatCharacterY offset is not 358");
	auto constexpr UW_RecoilDebugMenu_C_StatWeaponY_Offset = offsetof(UW_RecoilDebugMenu_C, StatWeaponY);
	static_assert(UW_RecoilDebugMenu_C_StatWeaponY_Offset == 0x35c, "UW_RecoilDebugMenu_C::StatWeaponY offset is not 35c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
