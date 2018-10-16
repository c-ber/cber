#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslVehicleTempComponent // Size: 0x1F0
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTslVehicleTempComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(34); // id32("Class TslGame.TslVehicleTempComponent")
		return ptr;
	}
//	float TickInterval; /* Ofs: 0x1E8 Size: 0x4 - FloatProperty TslGame.TslVehicleTempComponent.TickInterval */


//	inline bool SetTickInterval(t_structHelper inst, float value) { inst.WriteOffset(0x1E8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslVehicleTempComponent = sizeof(UTslVehicleTempComponent); // 496
    static_assert(sizeof(UTslVehicleTempComponent) == 0x1F0, "Size of UTslVehicleTempComponent is not correct.");
//	auto constexpr UTslVehicleTempComponent_TickInterval_Offset = offsetof(UTslVehicleTempComponent, TickInterval);
//	static_assert(UTslVehicleTempComponent_TickInterval_Offset == 0x1e8, "UTslVehicleTempComponent::TickInterval offset is not 1e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
