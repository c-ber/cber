#pragma once
#include "UTslVehicleDrop.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_VehicleDrop_C // Size: 0x468
	: public UTslVehicleDrop // Size: 0x460
{
private:
	typedef UBP_VehicleDrop_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(115174); // id32("BlueprintGeneratedClass BP_VehicleDrop.BP_VehicleDrop_C")
		return ptr;
	}
	ExternalPtr<struct USkeletalMeshComponent> ParachuteMesh; /* Ofs: 0x460 Size: 0x8 - ObjectProperty BP_VehicleDrop.BP_VehicleDrop_C.ParachuteMesh */


	inline bool SetParachuteMesh(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x460, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_VehicleDrop_C = sizeof(UBP_VehicleDrop_C); // 1128
    static_assert(sizeof(UBP_VehicleDrop_C) == 0x468, "Size of UBP_VehicleDrop_C is not correct.");
	auto constexpr UBP_VehicleDrop_C_ParachuteMesh_Offset = offsetof(UBP_VehicleDrop_C, ParachuteMesh);
	static_assert(UBP_VehicleDrop_C_ParachuteMesh_Offset == 0x460, "UBP_VehicleDrop_C::ParachuteMesh offset is not 460");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
