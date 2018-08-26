#pragma once
#include "UItemPackage.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCarePackageItem // Size: 0x650
	: public UItemPackage // Size: 0x580
{
private:
	typedef UCarePackageItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1968); // id32("Class TslGame.CarePackageItem")
		return ptr;
	}
//	ExternalPtr<struct UClass> ParachuteClass; /* Ofs: 0x578 Size: 0x8 - ClassProperty TslGame.CarePackageItem.ParachuteClass */
	ExternalPtr<struct UClass> SmokeFxClass; /* Ofs: 0x580 Size: 0x8 - ClassProperty TslGame.CarePackageItem.SmokeFxClass */
	ExternalPtr<struct UClass> SmokeAirFxClass; /* Ofs: 0x588 Size: 0x8 - ClassProperty TslGame.CarePackageItem.SmokeAirFxClass */
	ExternalPtr<struct UClass> LightFxClass; /* Ofs: 0x590 Size: 0x8 - ClassProperty TslGame.CarePackageItem.LightFxClass */
	ExternalPtr<struct UAsyncStaticMeshComponent> VisualStaticMesh; /* Ofs: 0x598 Size: 0x8 - ObjectProperty TslGame.CarePackageItem.VisualStaticMesh */
	TAssetPtr<ExternalPtr<struct UStaticMesh>> VisualPackageMesh; /* Ofs: 0x5A0 Size: 0x1C - AssetObjectProperty TslGame.CarePackageItem.VisualPackageMesh */
	uint8_t UnknownData5BC[0x4];
	float SmokeTime; /* Ofs: 0x5C0 Size: 0x4 - FloatProperty TslGame.CarePackageItem.SmokeTime */
	float LimitFallSpeed; /* Ofs: 0x5C4 Size: 0x4 - FloatProperty TslGame.CarePackageItem.LimitFallSpeed */
	FName SmokeSocket; /* Ofs: 0x5C8 Size: 0x8 - NameProperty TslGame.CarePackageItem.SmokeSocket */
	FName SmokeAirSocket; /* Ofs: 0x5D0 Size: 0x8 - NameProperty TslGame.CarePackageItem.SmokeAirSocket */
	FName LightSocket; /* Ofs: 0x5D8 Size: 0x8 - NameProperty TslGame.CarePackageItem.LightSocket */
	FName ParachuteSocket; /* Ofs: 0x5E0 Size: 0x8 - NameProperty TslGame.CarePackageItem.ParachuteSocket */
	ExternalPtr<struct UAkAudioEvent> LandSoundAk; /* Ofs: 0x5E8 Size: 0x8 - ObjectProperty TslGame.CarePackageItem.LandSoundAk */
	uint8_t boolField5F0;
	uint8_t boolField5F1;
	uint8_t boolField5F2;
	uint8_t boolField5F3;
	uint8_t UnknownData5F4[0x4];
	ExternalPtr<struct UTslParticle> SmokeFx; /* Ofs: 0x5F8 Size: 0x8 - ObjectProperty TslGame.CarePackageItem.SmokeFx */
	ExternalPtr<struct UTslParticle> SmokeAirFx; /* Ofs: 0x600 Size: 0x8 - ObjectProperty TslGame.CarePackageItem.SmokeAirFx */
	ExternalPtr<struct UTslParticle> LightFx; /* Ofs: 0x608 Size: 0x8 - ObjectProperty TslGame.CarePackageItem.LightFx */
	ExternalPtr<struct UActor> Parachute; /* Ofs: 0x610 Size: 0x8 - ObjectProperty TslGame.CarePackageItem.Parachute */
	uint8_t UnknownData618[0x8];
	ExternalPtr<struct USimpleInterpolationMovement> MovementComponent; /* Ofs: 0x620 Size: 0x8 - ObjectProperty TslGame.CarePackageItem.MovementComponent */
	ExternalPtr<struct UBuoyancyForceComponent> BuoyancyForceComponent; /* Ofs: 0x628 Size: 0x8 - ObjectProperty TslGame.CarePackageItem.BuoyancyForceComponent */
	ExternalPtr<struct UAkComponent> AkComponent; /* Ofs: 0x630 Size: 0x8 - ObjectProperty TslGame.CarePackageItem.AkComponent */
	uint8_t UnknownData638[0x18];


//	inline bool SetParachuteClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x578, value); }
	inline bool SetSmokeFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x580, value); }
	inline bool SetSmokeAirFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x588, value); }
	inline bool SetLightFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x590, value); }
	inline bool SetVisualStaticMesh(t_structHelper inst, ExternalPtr<struct UAsyncStaticMeshComponent> value) { inst.WriteOffset(0x598, value); }
	inline bool SetVisualPackageMesh(t_structHelper inst, TAssetPtr<ExternalPtr<struct UStaticMesh>> value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetSmokeTime(t_structHelper inst, float value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetLimitFallSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x5C4, value); }
	inline bool SetSmokeSocket(t_structHelper inst, FName value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetSmokeAirSocket(t_structHelper inst, FName value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetLightSocket(t_structHelper inst, FName value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetParachuteSocket(t_structHelper inst, FName value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetLandSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x5E8, value); }
	inline bool bIsFalling()
	{
		return boolField5F0& 0x1;
	}
	inline bool SetbIsFalling(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5F0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsPickupedItem()
	{
		return boolField5F1& 0x1;
	}
	inline bool SetbIsPickupedItem(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5F1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsHideIconOnMap()
	{
		return boolField5F2& 0x1;
	}
	inline bool SetbIsHideIconOnMap(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5F2, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsTranslucentIconOnMap()
	{
		return boolField5F3& 0x1;
	}
	inline bool SetbIsTranslucentIconOnMap(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5F3, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSmokeFx(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetSmokeAirFx(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x600, value); }
	inline bool SetLightFx(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x608, value); }
	inline bool SetParachute(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x610, value); }
	inline bool SetMovementComponent(t_structHelper inst, ExternalPtr<struct USimpleInterpolationMovement> value) { inst.WriteOffset(0x620, value); }
	inline bool SetBuoyancyForceComponent(t_structHelper inst, ExternalPtr<struct UBuoyancyForceComponent> value) { inst.WriteOffset(0x628, value); }
	inline bool SetAkComponent(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x630, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCarePackageItem = sizeof(UCarePackageItem); // 1616
    static_assert(sizeof(UCarePackageItem) == 0x650, "Size of UCarePackageItem is not correct.");
//	auto constexpr UCarePackageItem_ParachuteClass_Offset = offsetof(UCarePackageItem, ParachuteClass);
//	static_assert(UCarePackageItem_ParachuteClass_Offset == 0x578, "UCarePackageItem::ParachuteClass offset is not 578");
	auto constexpr UCarePackageItem_SmokeFxClass_Offset = offsetof(UCarePackageItem, SmokeFxClass);
	static_assert(UCarePackageItem_SmokeFxClass_Offset == 0x580, "UCarePackageItem::SmokeFxClass offset is not 580");
	auto constexpr UCarePackageItem_SmokeAirFxClass_Offset = offsetof(UCarePackageItem, SmokeAirFxClass);
	static_assert(UCarePackageItem_SmokeAirFxClass_Offset == 0x588, "UCarePackageItem::SmokeAirFxClass offset is not 588");
	auto constexpr UCarePackageItem_LightFxClass_Offset = offsetof(UCarePackageItem, LightFxClass);
	static_assert(UCarePackageItem_LightFxClass_Offset == 0x590, "UCarePackageItem::LightFxClass offset is not 590");
	auto constexpr UCarePackageItem_VisualStaticMesh_Offset = offsetof(UCarePackageItem, VisualStaticMesh);
	static_assert(UCarePackageItem_VisualStaticMesh_Offset == 0x598, "UCarePackageItem::VisualStaticMesh offset is not 598");
	auto constexpr UCarePackageItem_VisualPackageMesh_Offset = offsetof(UCarePackageItem, VisualPackageMesh);
	static_assert(UCarePackageItem_VisualPackageMesh_Offset == 0x5a0, "UCarePackageItem::VisualPackageMesh offset is not 5a0");
	auto constexpr UCarePackageItem_SmokeTime_Offset = offsetof(UCarePackageItem, SmokeTime);
	static_assert(UCarePackageItem_SmokeTime_Offset == 0x5c0, "UCarePackageItem::SmokeTime offset is not 5c0");
	auto constexpr UCarePackageItem_LimitFallSpeed_Offset = offsetof(UCarePackageItem, LimitFallSpeed);
	static_assert(UCarePackageItem_LimitFallSpeed_Offset == 0x5c4, "UCarePackageItem::LimitFallSpeed offset is not 5c4");
	auto constexpr UCarePackageItem_SmokeSocket_Offset = offsetof(UCarePackageItem, SmokeSocket);
	static_assert(UCarePackageItem_SmokeSocket_Offset == 0x5c8, "UCarePackageItem::SmokeSocket offset is not 5c8");
	auto constexpr UCarePackageItem_SmokeAirSocket_Offset = offsetof(UCarePackageItem, SmokeAirSocket);
	static_assert(UCarePackageItem_SmokeAirSocket_Offset == 0x5d0, "UCarePackageItem::SmokeAirSocket offset is not 5d0");
	auto constexpr UCarePackageItem_LightSocket_Offset = offsetof(UCarePackageItem, LightSocket);
	static_assert(UCarePackageItem_LightSocket_Offset == 0x5d8, "UCarePackageItem::LightSocket offset is not 5d8");
	auto constexpr UCarePackageItem_ParachuteSocket_Offset = offsetof(UCarePackageItem, ParachuteSocket);
	static_assert(UCarePackageItem_ParachuteSocket_Offset == 0x5e0, "UCarePackageItem::ParachuteSocket offset is not 5e0");
	auto constexpr UCarePackageItem_LandSoundAk_Offset = offsetof(UCarePackageItem, LandSoundAk);
	static_assert(UCarePackageItem_LandSoundAk_Offset == 0x5e8, "UCarePackageItem::LandSoundAk offset is not 5e8");
	auto constexpr UCarePackageItem_boolField5F0_Offset = offsetof(UCarePackageItem, boolField5F0);
	static_assert(UCarePackageItem_boolField5F0_Offset == 0x5f0, "UCarePackageItem::boolField5F0 offset is not 5f0");
	auto constexpr UCarePackageItem_boolField5F1_Offset = offsetof(UCarePackageItem, boolField5F1);
	static_assert(UCarePackageItem_boolField5F1_Offset == 0x5f1, "UCarePackageItem::boolField5F1 offset is not 5f1");
	auto constexpr UCarePackageItem_boolField5F2_Offset = offsetof(UCarePackageItem, boolField5F2);
	static_assert(UCarePackageItem_boolField5F2_Offset == 0x5f2, "UCarePackageItem::boolField5F2 offset is not 5f2");
	auto constexpr UCarePackageItem_boolField5F3_Offset = offsetof(UCarePackageItem, boolField5F3);
	static_assert(UCarePackageItem_boolField5F3_Offset == 0x5f3, "UCarePackageItem::boolField5F3 offset is not 5f3");
	auto constexpr UCarePackageItem_SmokeFx_Offset = offsetof(UCarePackageItem, SmokeFx);
	static_assert(UCarePackageItem_SmokeFx_Offset == 0x5f8, "UCarePackageItem::SmokeFx offset is not 5f8");
	auto constexpr UCarePackageItem_SmokeAirFx_Offset = offsetof(UCarePackageItem, SmokeAirFx);
	static_assert(UCarePackageItem_SmokeAirFx_Offset == 0x600, "UCarePackageItem::SmokeAirFx offset is not 600");
	auto constexpr UCarePackageItem_LightFx_Offset = offsetof(UCarePackageItem, LightFx);
	static_assert(UCarePackageItem_LightFx_Offset == 0x608, "UCarePackageItem::LightFx offset is not 608");
	auto constexpr UCarePackageItem_Parachute_Offset = offsetof(UCarePackageItem, Parachute);
	static_assert(UCarePackageItem_Parachute_Offset == 0x610, "UCarePackageItem::Parachute offset is not 610");
	auto constexpr UCarePackageItem_MovementComponent_Offset = offsetof(UCarePackageItem, MovementComponent);
	static_assert(UCarePackageItem_MovementComponent_Offset == 0x620, "UCarePackageItem::MovementComponent offset is not 620");
	auto constexpr UCarePackageItem_BuoyancyForceComponent_Offset = offsetof(UCarePackageItem, BuoyancyForceComponent);
	static_assert(UCarePackageItem_BuoyancyForceComponent_Offset == 0x628, "UCarePackageItem::BuoyancyForceComponent offset is not 628");
	auto constexpr UCarePackageItem_AkComponent_Offset = offsetof(UCarePackageItem, AkComponent);
	static_assert(UCarePackageItem_AkComponent_Offset == 0x630, "UCarePackageItem::AkComponent offset is not 630");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
