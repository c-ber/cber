#pragma once
#include "UAnimInstance.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleAnimInstance // Size: 0x890
	: public UAnimInstance // Size: 0x380
{
private:
	typedef UVehicleAnimInstance t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1603); // id32("Class PhysXVehicles.VehicleAnimInstance")
		return ptr;
	}
	uint8_t UnknownData380[0x4F0];
	ExternalPtr<struct UWheeledVehicleMovementComponent> WheeledVehicleMovementComponent; /* Ofs: 0x870 Size: 0x8 - ObjectProperty PhysXVehicles.VehicleAnimInstance.WheeledVehicleMovementComponent */
	uint8_t boolField878;
	uint8_t UnknownData879[0x3];
	float VehicleSuspensionInterpSpeed_ContactUpwards; /* Ofs: 0x87C Size: 0x4 - FloatProperty PhysXVehicles.VehicleAnimInstance.VehicleSuspensionInterpSpeed_ContactUpwards */
	float VehicleSuspensionInterpSpeed_Contact; /* Ofs: 0x880 Size: 0x4 - FloatProperty PhysXVehicles.VehicleAnimInstance.VehicleSuspensionInterpSpeed_Contact */
	float VehicleSuspensionInterpSpeed_NoContact; /* Ofs: 0x884 Size: 0x4 - FloatProperty PhysXVehicles.VehicleAnimInstance.VehicleSuspensionInterpSpeed_NoContact */
	uint8_t UnknownData888[0x8];


	inline bool SetWheeledVehicleMovementComponent(t_structHelper inst, ExternalPtr<struct UWheeledVehicleMovementComponent> value) { inst.WriteOffset(0x870, value); }
	inline bool bUseSupsensionInterpolation()
	{
		return boolField878& 0x1;
	}
	inline bool SetbUseSupsensionInterpolation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x878, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetVehicleSuspensionInterpSpeed_ContactUpwards(t_structHelper inst, float value) { inst.WriteOffset(0x87C, value); }
	inline bool SetVehicleSuspensionInterpSpeed_Contact(t_structHelper inst, float value) { inst.WriteOffset(0x880, value); }
	inline bool SetVehicleSuspensionInterpSpeed_NoContact(t_structHelper inst, float value) { inst.WriteOffset(0x884, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleAnimInstance = sizeof(UVehicleAnimInstance); // 2192
    static_assert(sizeof(UVehicleAnimInstance) == 0x890, "Size of UVehicleAnimInstance is not correct.");
	auto constexpr UVehicleAnimInstance_WheeledVehicleMovementComponent_Offset = offsetof(UVehicleAnimInstance, WheeledVehicleMovementComponent);
	static_assert(UVehicleAnimInstance_WheeledVehicleMovementComponent_Offset == 0x870, "UVehicleAnimInstance::WheeledVehicleMovementComponent offset is not 870");
	auto constexpr UVehicleAnimInstance_boolField878_Offset = offsetof(UVehicleAnimInstance, boolField878);
	static_assert(UVehicleAnimInstance_boolField878_Offset == 0x878, "UVehicleAnimInstance::boolField878 offset is not 878");
	auto constexpr UVehicleAnimInstance_VehicleSuspensionInterpSpeed_ContactUpwards_Offset = offsetof(UVehicleAnimInstance, VehicleSuspensionInterpSpeed_ContactUpwards);
	static_assert(UVehicleAnimInstance_VehicleSuspensionInterpSpeed_ContactUpwards_Offset == 0x87c, "UVehicleAnimInstance::VehicleSuspensionInterpSpeed_ContactUpwards offset is not 87c");
	auto constexpr UVehicleAnimInstance_VehicleSuspensionInterpSpeed_Contact_Offset = offsetof(UVehicleAnimInstance, VehicleSuspensionInterpSpeed_Contact);
	static_assert(UVehicleAnimInstance_VehicleSuspensionInterpSpeed_Contact_Offset == 0x880, "UVehicleAnimInstance::VehicleSuspensionInterpSpeed_Contact offset is not 880");
	auto constexpr UVehicleAnimInstance_VehicleSuspensionInterpSpeed_NoContact_Offset = offsetof(UVehicleAnimInstance, VehicleSuspensionInterpSpeed_NoContact);
	static_assert(UVehicleAnimInstance_VehicleSuspensionInterpSpeed_NoContact_Offset == 0x884, "UVehicleAnimInstance::VehicleSuspensionInterpSpeed_NoContact offset is not 884");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
