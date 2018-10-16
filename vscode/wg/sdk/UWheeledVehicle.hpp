#pragma once
#include "UPawn.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWheeledVehicle // Size: 0x480
	: public UPawn // Size: 0x470
{
private:
	typedef UWheeledVehicle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(44); // id32("Class PhysXVehicles.WheeledVehicle")
		return ptr;
	}
	ExternalPtr<struct USkeletalMeshComponent> Mesh; /* Ofs: 0x470 Size: 0x8 - ObjectProperty PhysXVehicles.WheeledVehicle.Mesh */
	ExternalPtr<struct UWheeledVehicleMovementComponent> VehicleMovement; /* Ofs: 0x478 Size: 0x8 - ObjectProperty PhysXVehicles.WheeledVehicle.VehicleMovement */


	inline bool SetMesh(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x470, value); }
	inline bool SetVehicleMovement(t_structHelper inst, ExternalPtr<struct UWheeledVehicleMovementComponent> value) { inst.WriteOffset(0x478, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWheeledVehicle = sizeof(UWheeledVehicle); // 1152
    static_assert(sizeof(UWheeledVehicle) == 0x480, "Size of UWheeledVehicle is not correct.");
	auto constexpr UWheeledVehicle_Mesh_Offset = offsetof(UWheeledVehicle, Mesh);
	static_assert(UWheeledVehicle_Mesh_Offset == 0x470, "UWheeledVehicle::Mesh offset is not 470");
	auto constexpr UWheeledVehicle_VehicleMovement_Offset = offsetof(UWheeledVehicle, VehicleMovement);
	static_assert(UWheeledVehicle_VehicleMovement_Offset == 0x478, "UWheeledVehicle::VehicleMovement offset is not 478");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
