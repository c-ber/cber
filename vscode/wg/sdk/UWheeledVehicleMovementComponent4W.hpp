#pragma once
#include "UWheeledVehicleMovementComponent.hpp"
#include "FVehicleEngineData.hpp"
#include "FVehicleDifferential4WData.hpp"
#include "FVehicleTransmissionData.hpp"
#include "FRuntimeFloatCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWheeledVehicleMovementComponent4W // Size: 0x540
	: public UWheeledVehicleMovementComponent // Size: 0x3E0
{
private:
	typedef UWheeledVehicleMovementComponent4W t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1990); // id32("Class PhysXVehicles.WheeledVehicleMovementComponent4W")
		return ptr;
	}
	FVehicleEngineData EngineSetup; /* Ofs: 0x3E0 Size: 0x90 - StructProperty PhysXVehicles.WheeledVehicleMovementComponent4W.EngineSetup */
	FVehicleDifferential4WData DifferentialSetup; /* Ofs: 0x470 Size: 0x1C - StructProperty PhysXVehicles.WheeledVehicleMovementComponent4W.DifferentialSetup */
	uint8_t UnknownData48C[0x4];
	FVehicleTransmissionData TransmissionSetup; /* Ofs: 0x490 Size: 0x30 - StructProperty PhysXVehicles.WheeledVehicleMovementComponent4W.TransmissionSetup */
	FRuntimeFloatCurve SteeringCurve; /* Ofs: 0x4C0 Size: 0x78 - StructProperty PhysXVehicles.WheeledVehicleMovementComponent4W.SteeringCurve */
	float AckermannAccuracy; /* Ofs: 0x538 Size: 0x4 - FloatProperty PhysXVehicles.WheeledVehicleMovementComponent4W.AckermannAccuracy */
	uint8_t UnknownData53C[0x4];


	inline bool SetEngineSetup(t_structHelper inst, FVehicleEngineData value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetDifferentialSetup(t_structHelper inst, FVehicleDifferential4WData value) { inst.WriteOffset(0x470, value); }
	inline bool SetTransmissionSetup(t_structHelper inst, FVehicleTransmissionData value) { inst.WriteOffset(0x490, value); }
	inline bool SetSteeringCurve(t_structHelper inst, FRuntimeFloatCurve value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetAckermannAccuracy(t_structHelper inst, float value) { inst.WriteOffset(0x538, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWheeledVehicleMovementComponent4W = sizeof(UWheeledVehicleMovementComponent4W); // 1344
    static_assert(sizeof(UWheeledVehicleMovementComponent4W) == 0x540, "Size of UWheeledVehicleMovementComponent4W is not correct.");
	auto constexpr UWheeledVehicleMovementComponent4W_EngineSetup_Offset = offsetof(UWheeledVehicleMovementComponent4W, EngineSetup);
	static_assert(UWheeledVehicleMovementComponent4W_EngineSetup_Offset == 0x3e0, "UWheeledVehicleMovementComponent4W::EngineSetup offset is not 3e0");
	auto constexpr UWheeledVehicleMovementComponent4W_DifferentialSetup_Offset = offsetof(UWheeledVehicleMovementComponent4W, DifferentialSetup);
	static_assert(UWheeledVehicleMovementComponent4W_DifferentialSetup_Offset == 0x470, "UWheeledVehicleMovementComponent4W::DifferentialSetup offset is not 470");
	auto constexpr UWheeledVehicleMovementComponent4W_TransmissionSetup_Offset = offsetof(UWheeledVehicleMovementComponent4W, TransmissionSetup);
	static_assert(UWheeledVehicleMovementComponent4W_TransmissionSetup_Offset == 0x490, "UWheeledVehicleMovementComponent4W::TransmissionSetup offset is not 490");
	auto constexpr UWheeledVehicleMovementComponent4W_SteeringCurve_Offset = offsetof(UWheeledVehicleMovementComponent4W, SteeringCurve);
	static_assert(UWheeledVehicleMovementComponent4W_SteeringCurve_Offset == 0x4c0, "UWheeledVehicleMovementComponent4W::SteeringCurve offset is not 4c0");
	auto constexpr UWheeledVehicleMovementComponent4W_AckermannAccuracy_Offset = offsetof(UWheeledVehicleMovementComponent4W, AckermannAccuracy);
	static_assert(UWheeledVehicleMovementComponent4W_AckermannAccuracy_Offset == 0x538, "UWheeledVehicleMovementComponent4W::AckermannAccuracy offset is not 538");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
