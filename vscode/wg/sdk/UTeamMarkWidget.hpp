#pragma once
#include "UUmgBaseWidget.hpp"
#include "FVector2D.hpp"
#include "FUmgWidgetBinder_Gerneral.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_Animation.hpp"
#include "FUmgWidgetBinder_Border.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTeamMarkWidget // Size: 0x560
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTeamMarkWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1545); // id32("Class TslGame.TeamMarkWidget")
		return ptr;
	}
	ExternalPtr<struct UTeam> TeamMember; /* Ofs: 0x300 Size: 0x8 - ObjectProperty TslGame.TeamMarkWidget.TeamMember */
	float OffsetZ; /* Ofs: 0x308 Size: 0x4 - FloatProperty TslGame.TeamMarkWidget.OffsetZ */
	float DeadMarkInvisibleTime; /* Ofs: 0x30C Size: 0x4 - FloatProperty TslGame.TeamMarkWidget.DeadMarkInvisibleTime */
	float DeadMarkInvisibleDistance; /* Ofs: 0x310 Size: 0x4 - FloatProperty TslGame.TeamMarkWidget.DeadMarkInvisibleDistance */
	FVector2D OffScreenEdgeSize; /* Ofs: 0x314 Size: 0x8 - StructProperty TslGame.TeamMarkWidget.OffScreenEdgeSize */
	FVector2D OffScreenImageEdgeSize; /* Ofs: 0x31C Size: 0x8 - StructProperty TslGame.TeamMarkWidget.OffScreenImageEdgeSize */
	float AnimationMaxPercent; /* Ofs: 0x324 Size: 0x4 - FloatProperty TslGame.TeamMarkWidget.AnimationMaxPercent */
	float AnimationMaxDistance; /* Ofs: 0x328 Size: 0x4 - FloatProperty TslGame.TeamMarkWidget.AnimationMaxDistance */
	uint8_t UnknownData32C[0x4];
	FUmgWidgetBinder_Gerneral StateSwitcherBinder; /* Ofs: 0x330 Size: 0x20 - StructProperty TslGame.TeamMarkWidget.StateSwitcherBinder */
	FUmgWidgetBinder_TextBlock PlayerNameTextBinder; /* Ofs: 0x350 Size: 0x20 - StructProperty TslGame.TeamMarkWidget.PlayerNameTextBinder */
	FUmgWidgetBinder_Image OutLineImageBinder; /* Ofs: 0x370 Size: 0x28 - StructProperty TslGame.TeamMarkWidget.OutLineImageBinder */
	FUmgWidgetBinder_Image DirectionImageBinder; /* Ofs: 0x398 Size: 0x28 - StructProperty TslGame.TeamMarkWidget.DirectionImageBinder */
	FUmgWidgetBinder_Image NormalImageBinder; /* Ofs: 0x3C0 Size: 0x28 - StructProperty TslGame.TeamMarkWidget.NormalImageBinder */
	FUmgWidgetBinder_Image GroggyImageBinder; /* Ofs: 0x3E8 Size: 0x28 - StructProperty TslGame.TeamMarkWidget.GroggyImageBinder */
	FUmgWidgetBinder_Image DeadImageBinder; /* Ofs: 0x410 Size: 0x28 - StructProperty TslGame.TeamMarkWidget.DeadImageBinder */
	FUmgWidgetBinder_Image VehicleImageBinder; /* Ofs: 0x438 Size: 0x28 - StructProperty TslGame.TeamMarkWidget.VehicleImageBinder */
	FUmgWidgetBinder_Image ParachuteImageBinder; /* Ofs: 0x460 Size: 0x28 - StructProperty TslGame.TeamMarkWidget.ParachuteImageBinder */
	FUmgWidgetBinder_Image QuitterImageBinder; /* Ofs: 0x488 Size: 0x28 - StructProperty TslGame.TeamMarkWidget.QuitterImageBinder */
	FUmgWidgetBinder_Animation OpacityByRadiusPercentAnim; /* Ofs: 0x4B0 Size: 0x20 - StructProperty TslGame.TeamMarkWidget.OpacityByRadiusPercentAnim */
	FUmgWidgetBinder_Animation ScaleByDistanceAnim; /* Ofs: 0x4D0 Size: 0x20 - StructProperty TslGame.TeamMarkWidget.ScaleByDistanceAnim */
	FUmgWidgetBinder_Border ImageMarkBorderBinder; /* Ofs: 0x4F0 Size: 0x20 - StructProperty TslGame.TeamMarkWidget.ImageMarkBorderBinder */
	float AmingImageAlpha; /* Ofs: 0x510 Size: 0x4 - FloatProperty TslGame.TeamMarkWidget.AmingImageAlpha */
	float ScopingImageAlpha; /* Ofs: 0x514 Size: 0x4 - FloatProperty TslGame.TeamMarkWidget.ScopingImageAlpha */
	float AmingTextAlpha; /* Ofs: 0x518 Size: 0x4 - FloatProperty TslGame.TeamMarkWidget.AmingTextAlpha */
	float ScopingTextAlpha; /* Ofs: 0x51C Size: 0x4 - FloatProperty TslGame.TeamMarkWidget.ScopingTextAlpha */
	ExternalPtr<struct UTexture> OutScreenImage; /* Ofs: 0x520 Size: 0x8 - ObjectProperty TslGame.TeamMarkWidget.OutScreenImage */
	ExternalPtr<struct UTexture> GroggyImage; /* Ofs: 0x528 Size: 0x8 - ObjectProperty TslGame.TeamMarkWidget.GroggyImage */
	ExternalPtr<struct UTexture> VehicleImage; /* Ofs: 0x530 Size: 0x8 - ObjectProperty TslGame.TeamMarkWidget.VehicleImage */
	ExternalPtr<struct UTexture> ParachuteImage; /* Ofs: 0x538 Size: 0x8 - ObjectProperty TslGame.TeamMarkWidget.ParachuteImage */
	uint8_t UnknownData540[0x20];


	inline bool SetTeamMember(t_structHelper inst, ExternalPtr<struct UTeam> value) { inst.WriteOffset(0x300, value); }
	inline bool SetOffsetZ(t_structHelper inst, float value) { inst.WriteOffset(0x308, value); }
	inline bool SetDeadMarkInvisibleTime(t_structHelper inst, float value) { inst.WriteOffset(0x30C, value); }
	inline bool SetDeadMarkInvisibleDistance(t_structHelper inst, float value) { inst.WriteOffset(0x310, value); }
	inline bool SetOffScreenEdgeSize(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x314, value); }
	inline bool SetOffScreenImageEdgeSize(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x31C, value); }
	inline bool SetAnimationMaxPercent(t_structHelper inst, float value) { inst.WriteOffset(0x324, value); }
	inline bool SetAnimationMaxDistance(t_structHelper inst, float value) { inst.WriteOffset(0x328, value); }
	inline bool SetStateSwitcherBinder(t_structHelper inst, FUmgWidgetBinder_Gerneral value) { inst.WriteOffset(0x330, value); }
	inline bool SetPlayerNameTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x350, value); }
	inline bool SetOutLineImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x370, value); }
	inline bool SetDirectionImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x398, value); }
	inline bool SetNormalImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetGroggyImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetDeadImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x410, value); }
	inline bool SetVehicleImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x438, value); }
	inline bool SetParachuteImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x460, value); }
	inline bool SetQuitterImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x488, value); }
	inline bool SetOpacityByRadiusPercentAnim(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetScaleByDistanceAnim(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetImageMarkBorderBinder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetAmingImageAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x510, value); }
	inline bool SetScopingImageAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x514, value); }
	inline bool SetAmingTextAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x518, value); }
	inline bool SetScopingTextAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x51C, value); }
	inline bool SetOutScreenImage(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x520, value); }
	inline bool SetGroggyImage(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x528, value); }
	inline bool SetVehicleImage(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x530, value); }
	inline bool SetParachuteImage(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x538, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTeamMarkWidget = sizeof(UTeamMarkWidget); // 1376
    static_assert(sizeof(UTeamMarkWidget) == 0x560, "Size of UTeamMarkWidget is not correct.");
	auto constexpr UTeamMarkWidget_TeamMember_Offset = offsetof(UTeamMarkWidget, TeamMember);
	static_assert(UTeamMarkWidget_TeamMember_Offset == 0x300, "UTeamMarkWidget::TeamMember offset is not 300");
	auto constexpr UTeamMarkWidget_OffsetZ_Offset = offsetof(UTeamMarkWidget, OffsetZ);
	static_assert(UTeamMarkWidget_OffsetZ_Offset == 0x308, "UTeamMarkWidget::OffsetZ offset is not 308");
	auto constexpr UTeamMarkWidget_DeadMarkInvisibleTime_Offset = offsetof(UTeamMarkWidget, DeadMarkInvisibleTime);
	static_assert(UTeamMarkWidget_DeadMarkInvisibleTime_Offset == 0x30c, "UTeamMarkWidget::DeadMarkInvisibleTime offset is not 30c");
	auto constexpr UTeamMarkWidget_DeadMarkInvisibleDistance_Offset = offsetof(UTeamMarkWidget, DeadMarkInvisibleDistance);
	static_assert(UTeamMarkWidget_DeadMarkInvisibleDistance_Offset == 0x310, "UTeamMarkWidget::DeadMarkInvisibleDistance offset is not 310");
	auto constexpr UTeamMarkWidget_OffScreenEdgeSize_Offset = offsetof(UTeamMarkWidget, OffScreenEdgeSize);
	static_assert(UTeamMarkWidget_OffScreenEdgeSize_Offset == 0x314, "UTeamMarkWidget::OffScreenEdgeSize offset is not 314");
	auto constexpr UTeamMarkWidget_OffScreenImageEdgeSize_Offset = offsetof(UTeamMarkWidget, OffScreenImageEdgeSize);
	static_assert(UTeamMarkWidget_OffScreenImageEdgeSize_Offset == 0x31c, "UTeamMarkWidget::OffScreenImageEdgeSize offset is not 31c");
	auto constexpr UTeamMarkWidget_AnimationMaxPercent_Offset = offsetof(UTeamMarkWidget, AnimationMaxPercent);
	static_assert(UTeamMarkWidget_AnimationMaxPercent_Offset == 0x324, "UTeamMarkWidget::AnimationMaxPercent offset is not 324");
	auto constexpr UTeamMarkWidget_AnimationMaxDistance_Offset = offsetof(UTeamMarkWidget, AnimationMaxDistance);
	static_assert(UTeamMarkWidget_AnimationMaxDistance_Offset == 0x328, "UTeamMarkWidget::AnimationMaxDistance offset is not 328");
	auto constexpr UTeamMarkWidget_StateSwitcherBinder_Offset = offsetof(UTeamMarkWidget, StateSwitcherBinder);
	static_assert(UTeamMarkWidget_StateSwitcherBinder_Offset == 0x330, "UTeamMarkWidget::StateSwitcherBinder offset is not 330");
	auto constexpr UTeamMarkWidget_PlayerNameTextBinder_Offset = offsetof(UTeamMarkWidget, PlayerNameTextBinder);
	static_assert(UTeamMarkWidget_PlayerNameTextBinder_Offset == 0x350, "UTeamMarkWidget::PlayerNameTextBinder offset is not 350");
	auto constexpr UTeamMarkWidget_OutLineImageBinder_Offset = offsetof(UTeamMarkWidget, OutLineImageBinder);
	static_assert(UTeamMarkWidget_OutLineImageBinder_Offset == 0x370, "UTeamMarkWidget::OutLineImageBinder offset is not 370");
	auto constexpr UTeamMarkWidget_DirectionImageBinder_Offset = offsetof(UTeamMarkWidget, DirectionImageBinder);
	static_assert(UTeamMarkWidget_DirectionImageBinder_Offset == 0x398, "UTeamMarkWidget::DirectionImageBinder offset is not 398");
	auto constexpr UTeamMarkWidget_NormalImageBinder_Offset = offsetof(UTeamMarkWidget, NormalImageBinder);
	static_assert(UTeamMarkWidget_NormalImageBinder_Offset == 0x3c0, "UTeamMarkWidget::NormalImageBinder offset is not 3c0");
	auto constexpr UTeamMarkWidget_GroggyImageBinder_Offset = offsetof(UTeamMarkWidget, GroggyImageBinder);
	static_assert(UTeamMarkWidget_GroggyImageBinder_Offset == 0x3e8, "UTeamMarkWidget::GroggyImageBinder offset is not 3e8");
	auto constexpr UTeamMarkWidget_DeadImageBinder_Offset = offsetof(UTeamMarkWidget, DeadImageBinder);
	static_assert(UTeamMarkWidget_DeadImageBinder_Offset == 0x410, "UTeamMarkWidget::DeadImageBinder offset is not 410");
	auto constexpr UTeamMarkWidget_VehicleImageBinder_Offset = offsetof(UTeamMarkWidget, VehicleImageBinder);
	static_assert(UTeamMarkWidget_VehicleImageBinder_Offset == 0x438, "UTeamMarkWidget::VehicleImageBinder offset is not 438");
	auto constexpr UTeamMarkWidget_ParachuteImageBinder_Offset = offsetof(UTeamMarkWidget, ParachuteImageBinder);
	static_assert(UTeamMarkWidget_ParachuteImageBinder_Offset == 0x460, "UTeamMarkWidget::ParachuteImageBinder offset is not 460");
	auto constexpr UTeamMarkWidget_QuitterImageBinder_Offset = offsetof(UTeamMarkWidget, QuitterImageBinder);
	static_assert(UTeamMarkWidget_QuitterImageBinder_Offset == 0x488, "UTeamMarkWidget::QuitterImageBinder offset is not 488");
	auto constexpr UTeamMarkWidget_OpacityByRadiusPercentAnim_Offset = offsetof(UTeamMarkWidget, OpacityByRadiusPercentAnim);
	static_assert(UTeamMarkWidget_OpacityByRadiusPercentAnim_Offset == 0x4b0, "UTeamMarkWidget::OpacityByRadiusPercentAnim offset is not 4b0");
	auto constexpr UTeamMarkWidget_ScaleByDistanceAnim_Offset = offsetof(UTeamMarkWidget, ScaleByDistanceAnim);
	static_assert(UTeamMarkWidget_ScaleByDistanceAnim_Offset == 0x4d0, "UTeamMarkWidget::ScaleByDistanceAnim offset is not 4d0");
	auto constexpr UTeamMarkWidget_ImageMarkBorderBinder_Offset = offsetof(UTeamMarkWidget, ImageMarkBorderBinder);
	static_assert(UTeamMarkWidget_ImageMarkBorderBinder_Offset == 0x4f0, "UTeamMarkWidget::ImageMarkBorderBinder offset is not 4f0");
	auto constexpr UTeamMarkWidget_AmingImageAlpha_Offset = offsetof(UTeamMarkWidget, AmingImageAlpha);
	static_assert(UTeamMarkWidget_AmingImageAlpha_Offset == 0x510, "UTeamMarkWidget::AmingImageAlpha offset is not 510");
	auto constexpr UTeamMarkWidget_ScopingImageAlpha_Offset = offsetof(UTeamMarkWidget, ScopingImageAlpha);
	static_assert(UTeamMarkWidget_ScopingImageAlpha_Offset == 0x514, "UTeamMarkWidget::ScopingImageAlpha offset is not 514");
	auto constexpr UTeamMarkWidget_AmingTextAlpha_Offset = offsetof(UTeamMarkWidget, AmingTextAlpha);
	static_assert(UTeamMarkWidget_AmingTextAlpha_Offset == 0x518, "UTeamMarkWidget::AmingTextAlpha offset is not 518");
	auto constexpr UTeamMarkWidget_ScopingTextAlpha_Offset = offsetof(UTeamMarkWidget, ScopingTextAlpha);
	static_assert(UTeamMarkWidget_ScopingTextAlpha_Offset == 0x51c, "UTeamMarkWidget::ScopingTextAlpha offset is not 51c");
	auto constexpr UTeamMarkWidget_OutScreenImage_Offset = offsetof(UTeamMarkWidget, OutScreenImage);
	static_assert(UTeamMarkWidget_OutScreenImage_Offset == 0x520, "UTeamMarkWidget::OutScreenImage offset is not 520");
	auto constexpr UTeamMarkWidget_GroggyImage_Offset = offsetof(UTeamMarkWidget, GroggyImage);
	static_assert(UTeamMarkWidget_GroggyImage_Offset == 0x528, "UTeamMarkWidget::GroggyImage offset is not 528");
	auto constexpr UTeamMarkWidget_VehicleImage_Offset = offsetof(UTeamMarkWidget, VehicleImage);
	static_assert(UTeamMarkWidget_VehicleImage_Offset == 0x530, "UTeamMarkWidget::VehicleImage offset is not 530");
	auto constexpr UTeamMarkWidget_ParachuteImage_Offset = offsetof(UTeamMarkWidget, ParachuteImage);
	static_assert(UTeamMarkWidget_ParachuteImage_Offset == 0x538, "UTeamMarkWidget::ParachuteImage offset is not 538");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
