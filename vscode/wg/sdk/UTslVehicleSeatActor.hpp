#pragma once
#include "UVehicleSeatActor.hpp"
#include "ERiderType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslVehicleSeatActor // Size: 0x4A0
	: public UVehicleSeatActor // Size: 0x490
{
private:
	typedef UTslVehicleSeatActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(56); // id32("Class TslGame.TslVehicleSeatActor")
		return ptr;
	}
	TEnumAsByte<enum ERiderType> RiderType; /* Ofs: 0x490 Size: 0x1 - EnumProperty TslGame.TslVehicleSeatActor.RiderType */
	uint8_t UnknownData491[0xF];


	inline bool SetRiderType(t_structHelper inst, TEnumAsByte<enum ERiderType> value) { inst.WriteOffset(0x490, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslVehicleSeatActor = sizeof(UTslVehicleSeatActor); // 1184
    static_assert(sizeof(UTslVehicleSeatActor) == 0x4A0, "Size of UTslVehicleSeatActor is not correct.");
	auto constexpr UTslVehicleSeatActor_RiderType_Offset = offsetof(UTslVehicleSeatActor, RiderType);
	static_assert(UTslVehicleSeatActor_RiderType_Offset == 0x490, "UTslVehicleSeatActor::RiderType offset is not 490");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
