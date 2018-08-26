#pragma once
#include "UShapeComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USphereComponent // Size: 0x910
	: public UShapeComponent // Size: 0x910
{
private:
	typedef USphereComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(223); // id32("Class Engine.SphereComponent")
		return ptr;
	}
//	float SphereRadius; /* Ofs: 0x908 Size: 0x4 - FloatProperty Engine.SphereComponent.SphereRadius */


//	inline bool SetSphereRadius(t_structHelper inst, float value) { inst.WriteOffset(0x908, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSphereComponent = sizeof(USphereComponent); // 2320
    static_assert(sizeof(USphereComponent) == 0x910, "Size of USphereComponent is not correct.");
//	auto constexpr USphereComponent_SphereRadius_Offset = offsetof(USphereComponent, SphereRadius);
//	static_assert(USphereComponent_SphereRadius_Offset == 0x908, "USphereComponent::SphereRadius offset is not 908");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
