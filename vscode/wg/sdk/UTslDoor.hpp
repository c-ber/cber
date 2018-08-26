#pragma once
#include "UStaticMeshActor.hpp"
#include "FDoorBreakingStateLegacy.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslDoor // Size: 0x6A0
	: public UStaticMeshActor // Size: 0x420
{
private:
	typedef UTslDoor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1364); // id32("Class TslGame.TslDoor")
		return ptr;
	}
//	ExternalPtr<struct UStaticMeshComponent> DoorMeshComponent; /* Ofs: 0x418 Size: 0x8 - ObjectProperty TslGame.TslDoor.DoorMeshComponent */
	ExternalPtr<struct UAkComponent> AkSound; /* Ofs: 0x420 Size: 0x8 - ObjectProperty TslGame.TslDoor.AkSound */
	ExternalPtr<struct UInteractionComponent> Interaction; /* Ofs: 0x428 Size: 0x8 - ObjectProperty TslGame.TslDoor.Interaction */
	uint8_t UnknownData430[0x20];
	ExternalPtr<struct UDestructibleMesh> DoorDestructibleMesh; /* Ofs: 0x450 Size: 0x8 - ObjectProperty TslGame.TslDoor.DoorDestructibleMesh */
	uint8_t boolField458;
	uint8_t UnknownData459[0x3];
	float OpenAngle; /* Ofs: 0x45C Size: 0x4 - FloatProperty TslGame.TslDoor.OpenAngle */
	ExternalPtr<struct UAkAudioEvent> OpenSound; /* Ofs: 0x460 Size: 0x8 - ObjectProperty TslGame.TslDoor.OpenSound */
	ExternalPtr<struct UAkAudioEvent> CloseSound; /* Ofs: 0x468 Size: 0x8 - ObjectProperty TslGame.TslDoor.CloseSound */
	ExternalPtr<struct UCurveFloat> OpenCurve; /* Ofs: 0x470 Size: 0x8 - ObjectProperty TslGame.TslDoor.OpenCurve */
	float OpenCurveDuration; /* Ofs: 0x478 Size: 0x4 - FloatProperty TslGame.TslDoor.OpenCurveDuration */
	uint8_t UnknownData47C[0x4];
	ExternalPtr<struct UCurveFloat> CloseCurve; /* Ofs: 0x480 Size: 0x8 - ObjectProperty TslGame.TslDoor.CloseCurve */
	float CloseCurveDuration; /* Ofs: 0x488 Size: 0x4 - FloatProperty TslGame.TslDoor.CloseCurveDuration */
	float PointDamageImpulse; /* Ofs: 0x48C Size: 0x4 - FloatProperty TslGame.TslDoor.PointDamageImpulse */
	float PointDamageRadius; /* Ofs: 0x490 Size: 0x4 - FloatProperty TslGame.TslDoor.PointDamageRadius */
	float BreakingRadius; /* Ofs: 0x494 Size: 0x4 - FloatProperty TslGame.TslDoor.BreakingRadius */
	float BreakingImpulse; /* Ofs: 0x498 Size: 0x4 - FloatProperty TslGame.TslDoor.BreakingImpulse */
	float BreakingMinDamage; /* Ofs: 0x49C Size: 0x4 - FloatProperty TslGame.TslDoor.BreakingMinDamage */
	float DamageAccumulateTimeout; /* Ofs: 0x4A0 Size: 0x4 - FloatProperty TslGame.TslDoor.DamageAccumulateTimeout */
	uint8_t UnknownData4A4[0x4];
	FName TopImpactSoketName; /* Ofs: 0x4A8 Size: 0x8 - NameProperty TslGame.TslDoor.TopImpactSoketName */
	FName CenterImpactSoketName; /* Ofs: 0x4B0 Size: 0x8 - NameProperty TslGame.TslDoor.CenterImpactSoketName */
	FName BottomImpactSoketName; /* Ofs: 0x4B8 Size: 0x8 - NameProperty TslGame.TslDoor.BottomImpactSoketName */
	uint8_t UnknownData4C0[0x1C0];
	FDoorBreakingStateLegacy DoorBreakingState; /* Ofs: 0x680 Size: 0x1 - StructProperty TslGame.TslDoor.DoorBreakingState */
	uint8_t UnknownData681[0x1F];


//	inline bool SetDoorMeshComponent(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetAkSound(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x420, value); }
	inline bool SetInteraction(t_structHelper inst, ExternalPtr<struct UInteractionComponent> value) { inst.WriteOffset(0x428, value); }
	inline bool SetDoorDestructibleMesh(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0x450, value); }
	inline bool bDoorOpened()
	{
		return boolField458& 0x1;
	}
	inline bool SetbDoorOpened(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x458, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bReverseRotation()
	{
		return boolField458& 0x2;
	}
	inline bool SetbReverseRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x458, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetOpenAngle(t_structHelper inst, float value) { inst.WriteOffset(0x45C, value); }
	inline bool SetOpenSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x460, value); }
	inline bool SetCloseSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x468, value); }
	inline bool SetOpenCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x470, value); }
	inline bool SetOpenCurveDuration(t_structHelper inst, float value) { inst.WriteOffset(0x478, value); }
	inline bool SetCloseCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x480, value); }
	inline bool SetCloseCurveDuration(t_structHelper inst, float value) { inst.WriteOffset(0x488, value); }
	inline bool SetPointDamageImpulse(t_structHelper inst, float value) { inst.WriteOffset(0x48C, value); }
	inline bool SetPointDamageRadius(t_structHelper inst, float value) { inst.WriteOffset(0x490, value); }
	inline bool SetBreakingRadius(t_structHelper inst, float value) { inst.WriteOffset(0x494, value); }
	inline bool SetBreakingImpulse(t_structHelper inst, float value) { inst.WriteOffset(0x498, value); }
	inline bool SetBreakingMinDamage(t_structHelper inst, float value) { inst.WriteOffset(0x49C, value); }
	inline bool SetDamageAccumulateTimeout(t_structHelper inst, float value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetTopImpactSoketName(t_structHelper inst, FName value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetCenterImpactSoketName(t_structHelper inst, FName value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetBottomImpactSoketName(t_structHelper inst, FName value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetDoorBreakingState(t_structHelper inst, FDoorBreakingStateLegacy value) { inst.WriteOffset(0x680, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslDoor = sizeof(UTslDoor); // 1696
    static_assert(sizeof(UTslDoor) == 0x6A0, "Size of UTslDoor is not correct.");
//	auto constexpr UTslDoor_DoorMeshComponent_Offset = offsetof(UTslDoor, DoorMeshComponent);
//	static_assert(UTslDoor_DoorMeshComponent_Offset == 0x418, "UTslDoor::DoorMeshComponent offset is not 418");
	auto constexpr UTslDoor_AkSound_Offset = offsetof(UTslDoor, AkSound);
	static_assert(UTslDoor_AkSound_Offset == 0x420, "UTslDoor::AkSound offset is not 420");
	auto constexpr UTslDoor_Interaction_Offset = offsetof(UTslDoor, Interaction);
	static_assert(UTslDoor_Interaction_Offset == 0x428, "UTslDoor::Interaction offset is not 428");
	auto constexpr UTslDoor_DoorDestructibleMesh_Offset = offsetof(UTslDoor, DoorDestructibleMesh);
	static_assert(UTslDoor_DoorDestructibleMesh_Offset == 0x450, "UTslDoor::DoorDestructibleMesh offset is not 450");
	auto constexpr UTslDoor_boolField458_Offset = offsetof(UTslDoor, boolField458);
	static_assert(UTslDoor_boolField458_Offset == 0x458, "UTslDoor::boolField458 offset is not 458");
	auto constexpr UTslDoor_OpenAngle_Offset = offsetof(UTslDoor, OpenAngle);
	static_assert(UTslDoor_OpenAngle_Offset == 0x45c, "UTslDoor::OpenAngle offset is not 45c");
	auto constexpr UTslDoor_OpenSound_Offset = offsetof(UTslDoor, OpenSound);
	static_assert(UTslDoor_OpenSound_Offset == 0x460, "UTslDoor::OpenSound offset is not 460");
	auto constexpr UTslDoor_CloseSound_Offset = offsetof(UTslDoor, CloseSound);
	static_assert(UTslDoor_CloseSound_Offset == 0x468, "UTslDoor::CloseSound offset is not 468");
	auto constexpr UTslDoor_OpenCurve_Offset = offsetof(UTslDoor, OpenCurve);
	static_assert(UTslDoor_OpenCurve_Offset == 0x470, "UTslDoor::OpenCurve offset is not 470");
	auto constexpr UTslDoor_OpenCurveDuration_Offset = offsetof(UTslDoor, OpenCurveDuration);
	static_assert(UTslDoor_OpenCurveDuration_Offset == 0x478, "UTslDoor::OpenCurveDuration offset is not 478");
	auto constexpr UTslDoor_CloseCurve_Offset = offsetof(UTslDoor, CloseCurve);
	static_assert(UTslDoor_CloseCurve_Offset == 0x480, "UTslDoor::CloseCurve offset is not 480");
	auto constexpr UTslDoor_CloseCurveDuration_Offset = offsetof(UTslDoor, CloseCurveDuration);
	static_assert(UTslDoor_CloseCurveDuration_Offset == 0x488, "UTslDoor::CloseCurveDuration offset is not 488");
	auto constexpr UTslDoor_PointDamageImpulse_Offset = offsetof(UTslDoor, PointDamageImpulse);
	static_assert(UTslDoor_PointDamageImpulse_Offset == 0x48c, "UTslDoor::PointDamageImpulse offset is not 48c");
	auto constexpr UTslDoor_PointDamageRadius_Offset = offsetof(UTslDoor, PointDamageRadius);
	static_assert(UTslDoor_PointDamageRadius_Offset == 0x490, "UTslDoor::PointDamageRadius offset is not 490");
	auto constexpr UTslDoor_BreakingRadius_Offset = offsetof(UTslDoor, BreakingRadius);
	static_assert(UTslDoor_BreakingRadius_Offset == 0x494, "UTslDoor::BreakingRadius offset is not 494");
	auto constexpr UTslDoor_BreakingImpulse_Offset = offsetof(UTslDoor, BreakingImpulse);
	static_assert(UTslDoor_BreakingImpulse_Offset == 0x498, "UTslDoor::BreakingImpulse offset is not 498");
	auto constexpr UTslDoor_BreakingMinDamage_Offset = offsetof(UTslDoor, BreakingMinDamage);
	static_assert(UTslDoor_BreakingMinDamage_Offset == 0x49c, "UTslDoor::BreakingMinDamage offset is not 49c");
	auto constexpr UTslDoor_DamageAccumulateTimeout_Offset = offsetof(UTslDoor, DamageAccumulateTimeout);
	static_assert(UTslDoor_DamageAccumulateTimeout_Offset == 0x4a0, "UTslDoor::DamageAccumulateTimeout offset is not 4a0");
	auto constexpr UTslDoor_TopImpactSoketName_Offset = offsetof(UTslDoor, TopImpactSoketName);
	static_assert(UTslDoor_TopImpactSoketName_Offset == 0x4a8, "UTslDoor::TopImpactSoketName offset is not 4a8");
	auto constexpr UTslDoor_CenterImpactSoketName_Offset = offsetof(UTslDoor, CenterImpactSoketName);
	static_assert(UTslDoor_CenterImpactSoketName_Offset == 0x4b0, "UTslDoor::CenterImpactSoketName offset is not 4b0");
	auto constexpr UTslDoor_BottomImpactSoketName_Offset = offsetof(UTslDoor, BottomImpactSoketName);
	static_assert(UTslDoor_BottomImpactSoketName_Offset == 0x4b8, "UTslDoor::BottomImpactSoketName offset is not 4b8");
	auto constexpr UTslDoor_DoorBreakingState_Offset = offsetof(UTslDoor, DoorBreakingState);
	static_assert(UTslDoor_DoorBreakingState_Offset == 0x680, "UTslDoor::DoorBreakingState offset is not 680");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
