#pragma once
#include "UPawn.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslAircraftVehicle // Size: 0x530
	: public UPawn // Size: 0x470
{
private:
	typedef UTslAircraftVehicle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1887); // id32("Class TslGame.TslAircraftVehicle")
		return ptr;
	}
	uint8_t UnknownData470[0x18];
	FVector2D RouteStartPointLocation; /* Ofs: 0x488 Size: 0x8 - StructProperty TslGame.TslAircraftVehicle.RouteStartPointLocation */
	FVector2D RouteEndPointLocation; /* Ofs: 0x490 Size: 0x8 - StructProperty TslGame.TslAircraftVehicle.RouteEndPointLocation */
	TArray<struct FAircraftParticle> AircraftParticles; /* Ofs: 0x498 Size: 0x10 - ArrayProperty TslGame.TslAircraftVehicle.AircraftParticles */
	TArray<ExternalPtr<struct UTslParticle>> AttachedParticles; /* Ofs: 0x4A8 Size: 0x10 - ArrayProperty TslGame.TslAircraftVehicle.AttachedParticles */
	ExternalPtr<struct UStaticMeshComponent> MeshComponent; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty TslGame.TslAircraftVehicle.MeshComponent */
	ExternalPtr<struct UTslAircraftVehicleMovement> MovementComponent; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty TslGame.TslAircraftVehicle.MovementComponent */
	ExternalPtr<struct USplineComponent> SplineComponent; /* Ofs: 0x4C8 Size: 0x8 - ObjectProperty TslGame.TslAircraftVehicle.SplineComponent */
	uint8_t UnknownData4D0[0x48];
	float TotalFlyingTime; /* Ofs: 0x518 Size: 0x4 - FloatProperty TslGame.TslAircraftVehicle.TotalFlyingTime */
	float AircraftSpeed; /* Ofs: 0x51C Size: 0x4 - FloatProperty TslGame.TslAircraftVehicle.AircraftSpeed */
	uint8_t UnknownData520[0x10];


	inline bool SetRouteStartPointLocation(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x488, value); }
	inline bool SetRouteEndPointLocation(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x490, value); }
	inline bool SetAircraftParticles(t_structHelper inst, TArray<struct FAircraftParticle> value) { inst.WriteOffset(0x498, value); }
	inline bool SetAttachedParticles(t_structHelper inst, TArray<ExternalPtr<struct UTslParticle>> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetMeshComponent(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetMovementComponent(t_structHelper inst, ExternalPtr<struct UTslAircraftVehicleMovement> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetSplineComponent(t_structHelper inst, ExternalPtr<struct USplineComponent> value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetTotalFlyingTime(t_structHelper inst, float value) { inst.WriteOffset(0x518, value); }
	inline bool SetAircraftSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x51C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslAircraftVehicle = sizeof(UTslAircraftVehicle); // 1328
    static_assert(sizeof(UTslAircraftVehicle) == 0x530, "Size of UTslAircraftVehicle is not correct.");
	auto constexpr UTslAircraftVehicle_RouteStartPointLocation_Offset = offsetof(UTslAircraftVehicle, RouteStartPointLocation);
	static_assert(UTslAircraftVehicle_RouteStartPointLocation_Offset == 0x488, "UTslAircraftVehicle::RouteStartPointLocation offset is not 488");
	auto constexpr UTslAircraftVehicle_RouteEndPointLocation_Offset = offsetof(UTslAircraftVehicle, RouteEndPointLocation);
	static_assert(UTslAircraftVehicle_RouteEndPointLocation_Offset == 0x490, "UTslAircraftVehicle::RouteEndPointLocation offset is not 490");
	auto constexpr UTslAircraftVehicle_AircraftParticles_Offset = offsetof(UTslAircraftVehicle, AircraftParticles);
	static_assert(UTslAircraftVehicle_AircraftParticles_Offset == 0x498, "UTslAircraftVehicle::AircraftParticles offset is not 498");
	auto constexpr UTslAircraftVehicle_AttachedParticles_Offset = offsetof(UTslAircraftVehicle, AttachedParticles);
	static_assert(UTslAircraftVehicle_AttachedParticles_Offset == 0x4a8, "UTslAircraftVehicle::AttachedParticles offset is not 4a8");
	auto constexpr UTslAircraftVehicle_MeshComponent_Offset = offsetof(UTslAircraftVehicle, MeshComponent);
	static_assert(UTslAircraftVehicle_MeshComponent_Offset == 0x4b8, "UTslAircraftVehicle::MeshComponent offset is not 4b8");
	auto constexpr UTslAircraftVehicle_MovementComponent_Offset = offsetof(UTslAircraftVehicle, MovementComponent);
	static_assert(UTslAircraftVehicle_MovementComponent_Offset == 0x4c0, "UTslAircraftVehicle::MovementComponent offset is not 4c0");
	auto constexpr UTslAircraftVehicle_SplineComponent_Offset = offsetof(UTslAircraftVehicle, SplineComponent);
	static_assert(UTslAircraftVehicle_SplineComponent_Offset == 0x4c8, "UTslAircraftVehicle::SplineComponent offset is not 4c8");
	auto constexpr UTslAircraftVehicle_TotalFlyingTime_Offset = offsetof(UTslAircraftVehicle, TotalFlyingTime);
	static_assert(UTslAircraftVehicle_TotalFlyingTime_Offset == 0x518, "UTslAircraftVehicle::TotalFlyingTime offset is not 518");
	auto constexpr UTslAircraftVehicle_AircraftSpeed_Offset = offsetof(UTslAircraftVehicle, AircraftSpeed);
	static_assert(UTslAircraftVehicle_AircraftSpeed_Offset == 0x51c, "UTslAircraftVehicle::AircraftSpeed offset is not 51c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
