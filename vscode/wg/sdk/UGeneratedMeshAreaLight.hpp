#pragma once
#include "USpotLight.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGeneratedMeshAreaLight // Size: 0x420
	: public USpotLight // Size: 0x420
{
private:
	typedef UGeneratedMeshAreaLight t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1752); // id32("Class Engine.GeneratedMeshAreaLight")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGeneratedMeshAreaLight = sizeof(UGeneratedMeshAreaLight); // 1056
    static_assert(sizeof(UGeneratedMeshAreaLight) == 0x420, "Size of UGeneratedMeshAreaLight is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
