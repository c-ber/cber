#pragma once
#include "UMeshComponent.hpp"
#include "EWidgetSpace.hpp"
#include "EWidgetTimingPolicy.hpp"
#include "FIntPoint.hpp"
#include "FVector2D.hpp"
#include "FLinearColor.hpp"
#include "EWidgetBlendMode.hpp"
#include "EWidgetGeometryMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWidgetComponent // Size: 0xB20
	: public UMeshComponent // Size: 0x9F0
{
private:
	typedef UWidgetComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(530); // id32("Class UMG.WidgetComponent")
		return ptr;
	}
	TEnumAsByte<enum EWidgetSpace> Space; /* Ofs: 0x9F0 Size: 0x1 - EnumProperty UMG.WidgetComponent.Space */
	TEnumAsByte<enum EWidgetTimingPolicy> TimingPolicy; /* Ofs: 0x9F1 Size: 0x1 - EnumProperty UMG.WidgetComponent.TimingPolicy */
	uint8_t UnknownData9F2[0x6];
	ExternalPtr<struct UClass> WidgetClass; /* Ofs: 0x9F8 Size: 0x8 - ClassProperty UMG.WidgetComponent.WidgetClass */
	FIntPoint DrawSize; /* Ofs: 0xA00 Size: 0x8 - StructProperty UMG.WidgetComponent.DrawSize */
	uint8_t boolFieldA08;
	uint8_t boolFieldA09;
	uint8_t UnknownDataA0A[0x2];
	float RedrawTime; /* Ofs: 0xA0C Size: 0x4 - FloatProperty UMG.WidgetComponent.RedrawTime */
	uint8_t UnknownDataA10[0x8];
	FIntPoint CurrentDrawSize; /* Ofs: 0xA18 Size: 0x8 - StructProperty UMG.WidgetComponent.CurrentDrawSize */
	uint8_t boolFieldA20;
	uint8_t UnknownDataA21[0x3];
	FVector2D Pivot; /* Ofs: 0xA24 Size: 0x8 - StructProperty UMG.WidgetComponent.Pivot */
	uint8_t boolFieldA2C;
	uint8_t boolFieldA2D;
	uint8_t UnknownDataA2E[0x2];
	ExternalPtr<struct ULocalPlayer> OwnerPlayer; /* Ofs: 0xA30 Size: 0x8 - ObjectProperty UMG.WidgetComponent.OwnerPlayer */
	FLinearColor BackgroundColor; /* Ofs: 0xA38 Size: 0x10 - StructProperty UMG.WidgetComponent.BackgroundColor */
	FLinearColor TintColorAndOpacity; /* Ofs: 0xA48 Size: 0x10 - StructProperty UMG.WidgetComponent.TintColorAndOpacity */
	float OpacityFromTexture; /* Ofs: 0xA58 Size: 0x4 - FloatProperty UMG.WidgetComponent.OpacityFromTexture */
	TEnumAsByte<enum EWidgetBlendMode> BlendMode; /* Ofs: 0xA5C Size: 0x1 - EnumProperty UMG.WidgetComponent.BlendMode */
	uint8_t boolFieldA5D;
	uint8_t boolFieldA5E;
	uint8_t UnknownDataA5F[0x1];
	ExternalPtr<struct UUserWidget> Widget; /* Ofs: 0xA60 Size: 0x8 - ObjectProperty UMG.WidgetComponent.Widget */
	uint8_t UnknownDataA68[0x20];
	ExternalPtr<struct UBodySetup> BodySetup; /* Ofs: 0xA88 Size: 0x8 - ObjectProperty UMG.WidgetComponent.BodySetup */
	ExternalPtr<struct UMaterialInterface> TranslucentMaterial; /* Ofs: 0xA90 Size: 0x8 - ObjectProperty UMG.WidgetComponent.TranslucentMaterial */
	ExternalPtr<struct UMaterialInterface> TranslucentMaterial_OneSided; /* Ofs: 0xA98 Size: 0x8 - ObjectProperty UMG.WidgetComponent.TranslucentMaterial_OneSided */
	ExternalPtr<struct UMaterialInterface> OpaqueMaterial; /* Ofs: 0xAA0 Size: 0x8 - ObjectProperty UMG.WidgetComponent.OpaqueMaterial */
	ExternalPtr<struct UMaterialInterface> OpaqueMaterial_OneSided; /* Ofs: 0xAA8 Size: 0x8 - ObjectProperty UMG.WidgetComponent.OpaqueMaterial_OneSided */
	ExternalPtr<struct UMaterialInterface> MaskedMaterial; /* Ofs: 0xAB0 Size: 0x8 - ObjectProperty UMG.WidgetComponent.MaskedMaterial */
	ExternalPtr<struct UMaterialInterface> MaskedMaterial_OneSided; /* Ofs: 0xAB8 Size: 0x8 - ObjectProperty UMG.WidgetComponent.MaskedMaterial_OneSided */
	ExternalPtr<struct UTextureRenderTarget2D> RenderTarget; /* Ofs: 0xAC0 Size: 0x8 - ObjectProperty UMG.WidgetComponent.RenderTarget */
	ExternalPtr<struct UMaterialInstanceDynamic> MaterialInstance; /* Ofs: 0xAC8 Size: 0x8 - ObjectProperty UMG.WidgetComponent.MaterialInstance */
	uint8_t boolFieldAD0;
	uint8_t boolFieldAD1;
	uint8_t UnknownDataAD2[0x6];
	FName SharedLayerName; /* Ofs: 0xAD8 Size: 0x8 - NameProperty UMG.WidgetComponent.SharedLayerName */
	int32_t LayerZOrder; /* Ofs: 0xAE0 Size: 0x4 - IntProperty UMG.WidgetComponent.LayerZOrder */
	TEnumAsByte<enum EWidgetGeometryMode> GeometryMode; /* Ofs: 0xAE4 Size: 0x1 - EnumProperty UMG.WidgetComponent.GeometryMode */
	uint8_t UnknownDataAE5[0x3];
	float CylinderArcAngle; /* Ofs: 0xAE8 Size: 0x4 - FloatProperty UMG.WidgetComponent.CylinderArcAngle */
	uint8_t UnknownDataAEC[0x34];


	inline bool SetSpace(t_structHelper inst, TEnumAsByte<enum EWidgetSpace> value) { inst.WriteOffset(0x9F0, value); }
	inline bool SetTimingPolicy(t_structHelper inst, TEnumAsByte<enum EWidgetTimingPolicy> value) { inst.WriteOffset(0x9F1, value); }
	inline bool SetWidgetClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x9F8, value); }
	inline bool SetDrawSize(t_structHelper inst, FIntPoint value) { inst.WriteOffset(0xA00, value); }
	inline bool bManuallyRedraw()
	{
		return boolFieldA08& 0x1;
	}
	inline bool SetbManuallyRedraw(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA08, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRedrawRequested()
	{
		return boolFieldA09& 0x1;
	}
	inline bool SetbRedrawRequested(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA09, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRedrawTime(t_structHelper inst, float value) { inst.WriteOffset(0xA0C, value); }
	inline bool SetCurrentDrawSize(t_structHelper inst, FIntPoint value) { inst.WriteOffset(0xA18, value); }
	inline bool bDrawAtDesiredSize()
	{
		return boolFieldA20& 0x1;
	}
	inline bool SetbDrawAtDesiredSize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA20, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPivot(t_structHelper inst, FVector2D value) { inst.WriteOffset(0xA24, value); }
	inline bool bReceiveHardwareInput()
	{
		return boolFieldA2C& 0x1;
	}
	inline bool SetbReceiveHardwareInput(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA2C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bWindowFocusable()
	{
		return boolFieldA2D& 0x1;
	}
	inline bool SetbWindowFocusable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA2D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOwnerPlayer(t_structHelper inst, ExternalPtr<struct ULocalPlayer> value) { inst.WriteOffset(0xA30, value); }
	inline bool SetBackgroundColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0xA38, value); }
	inline bool SetTintColorAndOpacity(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0xA48, value); }
	inline bool SetOpacityFromTexture(t_structHelper inst, float value) { inst.WriteOffset(0xA58, value); }
	inline bool SetBlendMode(t_structHelper inst, TEnumAsByte<enum EWidgetBlendMode> value) { inst.WriteOffset(0xA5C, value); }
	inline bool bIsTwoSided()
	{
		return boolFieldA5D& 0x1;
	}
	inline bool SetbIsTwoSided(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA5D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool TickWhenOffscreen()
	{
		return boolFieldA5E& 0x1;
	}
	inline bool SetTickWhenOffscreen(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA5E, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWidget(t_structHelper inst, ExternalPtr<struct UUserWidget> value) { inst.WriteOffset(0xA60, value); }
	inline bool SetBodySetup(t_structHelper inst, ExternalPtr<struct UBodySetup> value) { inst.WriteOffset(0xA88, value); }
	inline bool SetTranslucentMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0xA90, value); }
	inline bool SetTranslucentMaterial_OneSided(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0xA98, value); }
	inline bool SetOpaqueMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0xAA0, value); }
	inline bool SetOpaqueMaterial_OneSided(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0xAA8, value); }
	inline bool SetMaskedMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0xAB0, value); }
	inline bool SetMaskedMaterial_OneSided(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0xAB8, value); }
	inline bool SetRenderTarget(t_structHelper inst, ExternalPtr<struct UTextureRenderTarget2D> value) { inst.WriteOffset(0xAC0, value); }
	inline bool SetMaterialInstance(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0xAC8, value); }
	inline bool bAddedToScreen()
	{
		return boolFieldAD0& 0x1;
	}
	inline bool SetbAddedToScreen(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAD0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEditTimeUsable()
	{
		return boolFieldAD1& 0x1;
	}
	inline bool SetbEditTimeUsable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAD1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSharedLayerName(t_structHelper inst, FName value) { inst.WriteOffset(0xAD8, value); }
	inline bool SetLayerZOrder(t_structHelper inst, int32_t value) { inst.WriteOffset(0xAE0, value); }
	inline bool SetGeometryMode(t_structHelper inst, TEnumAsByte<enum EWidgetGeometryMode> value) { inst.WriteOffset(0xAE4, value); }
	inline bool SetCylinderArcAngle(t_structHelper inst, float value) { inst.WriteOffset(0xAE8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWidgetComponent = sizeof(UWidgetComponent); // 2848
    static_assert(sizeof(UWidgetComponent) == 0xB20, "Size of UWidgetComponent is not correct.");
	auto constexpr UWidgetComponent_Space_Offset = offsetof(UWidgetComponent, Space);
	static_assert(UWidgetComponent_Space_Offset == 0x9f0, "UWidgetComponent::Space offset is not 9f0");
	auto constexpr UWidgetComponent_TimingPolicy_Offset = offsetof(UWidgetComponent, TimingPolicy);
	static_assert(UWidgetComponent_TimingPolicy_Offset == 0x9f1, "UWidgetComponent::TimingPolicy offset is not 9f1");
	auto constexpr UWidgetComponent_WidgetClass_Offset = offsetof(UWidgetComponent, WidgetClass);
	static_assert(UWidgetComponent_WidgetClass_Offset == 0x9f8, "UWidgetComponent::WidgetClass offset is not 9f8");
	auto constexpr UWidgetComponent_DrawSize_Offset = offsetof(UWidgetComponent, DrawSize);
	static_assert(UWidgetComponent_DrawSize_Offset == 0xa00, "UWidgetComponent::DrawSize offset is not a00");
	auto constexpr UWidgetComponent_boolFieldA08_Offset = offsetof(UWidgetComponent, boolFieldA08);
	static_assert(UWidgetComponent_boolFieldA08_Offset == 0xa08, "UWidgetComponent::boolFieldA08 offset is not a08");
	auto constexpr UWidgetComponent_boolFieldA09_Offset = offsetof(UWidgetComponent, boolFieldA09);
	static_assert(UWidgetComponent_boolFieldA09_Offset == 0xa09, "UWidgetComponent::boolFieldA09 offset is not a09");
	auto constexpr UWidgetComponent_RedrawTime_Offset = offsetof(UWidgetComponent, RedrawTime);
	static_assert(UWidgetComponent_RedrawTime_Offset == 0xa0c, "UWidgetComponent::RedrawTime offset is not a0c");
	auto constexpr UWidgetComponent_CurrentDrawSize_Offset = offsetof(UWidgetComponent, CurrentDrawSize);
	static_assert(UWidgetComponent_CurrentDrawSize_Offset == 0xa18, "UWidgetComponent::CurrentDrawSize offset is not a18");
	auto constexpr UWidgetComponent_boolFieldA20_Offset = offsetof(UWidgetComponent, boolFieldA20);
	static_assert(UWidgetComponent_boolFieldA20_Offset == 0xa20, "UWidgetComponent::boolFieldA20 offset is not a20");
	auto constexpr UWidgetComponent_Pivot_Offset = offsetof(UWidgetComponent, Pivot);
	static_assert(UWidgetComponent_Pivot_Offset == 0xa24, "UWidgetComponent::Pivot offset is not a24");
	auto constexpr UWidgetComponent_boolFieldA2C_Offset = offsetof(UWidgetComponent, boolFieldA2C);
	static_assert(UWidgetComponent_boolFieldA2C_Offset == 0xa2c, "UWidgetComponent::boolFieldA2C offset is not a2c");
	auto constexpr UWidgetComponent_boolFieldA2D_Offset = offsetof(UWidgetComponent, boolFieldA2D);
	static_assert(UWidgetComponent_boolFieldA2D_Offset == 0xa2d, "UWidgetComponent::boolFieldA2D offset is not a2d");
	auto constexpr UWidgetComponent_OwnerPlayer_Offset = offsetof(UWidgetComponent, OwnerPlayer);
	static_assert(UWidgetComponent_OwnerPlayer_Offset == 0xa30, "UWidgetComponent::OwnerPlayer offset is not a30");
	auto constexpr UWidgetComponent_BackgroundColor_Offset = offsetof(UWidgetComponent, BackgroundColor);
	static_assert(UWidgetComponent_BackgroundColor_Offset == 0xa38, "UWidgetComponent::BackgroundColor offset is not a38");
	auto constexpr UWidgetComponent_TintColorAndOpacity_Offset = offsetof(UWidgetComponent, TintColorAndOpacity);
	static_assert(UWidgetComponent_TintColorAndOpacity_Offset == 0xa48, "UWidgetComponent::TintColorAndOpacity offset is not a48");
	auto constexpr UWidgetComponent_OpacityFromTexture_Offset = offsetof(UWidgetComponent, OpacityFromTexture);
	static_assert(UWidgetComponent_OpacityFromTexture_Offset == 0xa58, "UWidgetComponent::OpacityFromTexture offset is not a58");
	auto constexpr UWidgetComponent_BlendMode_Offset = offsetof(UWidgetComponent, BlendMode);
	static_assert(UWidgetComponent_BlendMode_Offset == 0xa5c, "UWidgetComponent::BlendMode offset is not a5c");
	auto constexpr UWidgetComponent_boolFieldA5D_Offset = offsetof(UWidgetComponent, boolFieldA5D);
	static_assert(UWidgetComponent_boolFieldA5D_Offset == 0xa5d, "UWidgetComponent::boolFieldA5D offset is not a5d");
	auto constexpr UWidgetComponent_boolFieldA5E_Offset = offsetof(UWidgetComponent, boolFieldA5E);
	static_assert(UWidgetComponent_boolFieldA5E_Offset == 0xa5e, "UWidgetComponent::boolFieldA5E offset is not a5e");
	auto constexpr UWidgetComponent_Widget_Offset = offsetof(UWidgetComponent, Widget);
	static_assert(UWidgetComponent_Widget_Offset == 0xa60, "UWidgetComponent::Widget offset is not a60");
	auto constexpr UWidgetComponent_BodySetup_Offset = offsetof(UWidgetComponent, BodySetup);
	static_assert(UWidgetComponent_BodySetup_Offset == 0xa88, "UWidgetComponent::BodySetup offset is not a88");
	auto constexpr UWidgetComponent_TranslucentMaterial_Offset = offsetof(UWidgetComponent, TranslucentMaterial);
	static_assert(UWidgetComponent_TranslucentMaterial_Offset == 0xa90, "UWidgetComponent::TranslucentMaterial offset is not a90");
	auto constexpr UWidgetComponent_TranslucentMaterial_OneSided_Offset = offsetof(UWidgetComponent, TranslucentMaterial_OneSided);
	static_assert(UWidgetComponent_TranslucentMaterial_OneSided_Offset == 0xa98, "UWidgetComponent::TranslucentMaterial_OneSided offset is not a98");
	auto constexpr UWidgetComponent_OpaqueMaterial_Offset = offsetof(UWidgetComponent, OpaqueMaterial);
	static_assert(UWidgetComponent_OpaqueMaterial_Offset == 0xaa0, "UWidgetComponent::OpaqueMaterial offset is not aa0");
	auto constexpr UWidgetComponent_OpaqueMaterial_OneSided_Offset = offsetof(UWidgetComponent, OpaqueMaterial_OneSided);
	static_assert(UWidgetComponent_OpaqueMaterial_OneSided_Offset == 0xaa8, "UWidgetComponent::OpaqueMaterial_OneSided offset is not aa8");
	auto constexpr UWidgetComponent_MaskedMaterial_Offset = offsetof(UWidgetComponent, MaskedMaterial);
	static_assert(UWidgetComponent_MaskedMaterial_Offset == 0xab0, "UWidgetComponent::MaskedMaterial offset is not ab0");
	auto constexpr UWidgetComponent_MaskedMaterial_OneSided_Offset = offsetof(UWidgetComponent, MaskedMaterial_OneSided);
	static_assert(UWidgetComponent_MaskedMaterial_OneSided_Offset == 0xab8, "UWidgetComponent::MaskedMaterial_OneSided offset is not ab8");
	auto constexpr UWidgetComponent_RenderTarget_Offset = offsetof(UWidgetComponent, RenderTarget);
	static_assert(UWidgetComponent_RenderTarget_Offset == 0xac0, "UWidgetComponent::RenderTarget offset is not ac0");
	auto constexpr UWidgetComponent_MaterialInstance_Offset = offsetof(UWidgetComponent, MaterialInstance);
	static_assert(UWidgetComponent_MaterialInstance_Offset == 0xac8, "UWidgetComponent::MaterialInstance offset is not ac8");
	auto constexpr UWidgetComponent_boolFieldAD0_Offset = offsetof(UWidgetComponent, boolFieldAD0);
	static_assert(UWidgetComponent_boolFieldAD0_Offset == 0xad0, "UWidgetComponent::boolFieldAD0 offset is not ad0");
	auto constexpr UWidgetComponent_boolFieldAD1_Offset = offsetof(UWidgetComponent, boolFieldAD1);
	static_assert(UWidgetComponent_boolFieldAD1_Offset == 0xad1, "UWidgetComponent::boolFieldAD1 offset is not ad1");
	auto constexpr UWidgetComponent_SharedLayerName_Offset = offsetof(UWidgetComponent, SharedLayerName);
	static_assert(UWidgetComponent_SharedLayerName_Offset == 0xad8, "UWidgetComponent::SharedLayerName offset is not ad8");
	auto constexpr UWidgetComponent_LayerZOrder_Offset = offsetof(UWidgetComponent, LayerZOrder);
	static_assert(UWidgetComponent_LayerZOrder_Offset == 0xae0, "UWidgetComponent::LayerZOrder offset is not ae0");
	auto constexpr UWidgetComponent_GeometryMode_Offset = offsetof(UWidgetComponent, GeometryMode);
	static_assert(UWidgetComponent_GeometryMode_Offset == 0xae4, "UWidgetComponent::GeometryMode offset is not ae4");
	auto constexpr UWidgetComponent_CylinderArcAngle_Offset = offsetof(UWidgetComponent, CylinderArcAngle);
	static_assert(UWidgetComponent_CylinderArcAngle_Offset == 0xae8, "UWidgetComponent::CylinderArcAngle offset is not ae8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
