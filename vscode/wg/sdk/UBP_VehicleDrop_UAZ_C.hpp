#pragma once
#include "UBP_VehicleDrop_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_VehicleDrop_UAZ_C // Size: 0x470
	: public UBP_VehicleDrop_C // Size: 0x468
{
private:
	typedef UBP_VehicleDrop_UAZ_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(115183); // id32("BlueprintGeneratedClass BP_VehicleDrop_UAZ.BP_VehicleDrop_UAZ_C")
		return ptr;
	}
	ExternalPtr<struct UStaticMeshComponent> FakeArmor; /* Ofs: 0x468 Size: 0x8 - ObjectProperty BP_VehicleDrop_UAZ.BP_VehicleDrop_UAZ_C.FakeArmor */


	inline bool SetFakeArmor(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x468, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_VehicleDrop_UAZ_C = sizeof(UBP_VehicleDrop_UAZ_C); // 1136
    static_assert(sizeof(UBP_VehicleDrop_UAZ_C) == 0x470, "Size of UBP_VehicleDrop_UAZ_C is not correct.");
	auto constexpr UBP_VehicleDrop_UAZ_C_FakeArmor_Offset = offsetof(UBP_VehicleDrop_UAZ_C, FakeArmor);
	static_assert(UBP_VehicleDrop_UAZ_C_FakeArmor_Offset == 0x468, "UBP_VehicleDrop_UAZ_C::FakeArmor offset is not 468");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
