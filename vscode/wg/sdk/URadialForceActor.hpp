#pragma once
#include "URigidBodyBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URadialForceActor // Size: 0x410
	: public URigidBodyBase // Size: 0x410
{
private:
	typedef URadialForceActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1781); // id32("Class Engine.RadialForceActor")
		return ptr;
	}
//	ExternalPtr<struct URadialForceComponent> ForceComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.RadialForceActor.ForceComponent */


//	inline bool SetForceComponent(t_structHelper inst, ExternalPtr<struct URadialForceComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURadialForceActor = sizeof(URadialForceActor); // 1040
    static_assert(sizeof(URadialForceActor) == 0x410, "Size of URadialForceActor is not correct.");
//	auto constexpr URadialForceActor_ForceComponent_Offset = offsetof(URadialForceActor, ForceComponent);
//	static_assert(URadialForceActor_ForceComponent_Offset == 0x408, "URadialForceActor::ForceComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
