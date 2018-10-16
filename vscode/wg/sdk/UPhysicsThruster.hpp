#pragma once
#include "URigidBodyBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPhysicsThruster // Size: 0x410
	: public URigidBodyBase // Size: 0x410
{
private:
	typedef UPhysicsThruster t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1780); // id32("Class Engine.PhysicsThruster")
		return ptr;
	}
//	ExternalPtr<struct UPhysicsThrusterComponent> ThrusterComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.PhysicsThruster.ThrusterComponent */


//	inline bool SetThrusterComponent(t_structHelper inst, ExternalPtr<struct UPhysicsThrusterComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPhysicsThruster = sizeof(UPhysicsThruster); // 1040
    static_assert(sizeof(UPhysicsThruster) == 0x410, "Size of UPhysicsThruster is not correct.");
//	auto constexpr UPhysicsThruster_ThrusterComponent_Offset = offsetof(UPhysicsThruster, ThrusterComponent);
//	static_assert(UPhysicsThruster_ThrusterComponent_Offset == 0x408, "UPhysicsThruster::ThrusterComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
