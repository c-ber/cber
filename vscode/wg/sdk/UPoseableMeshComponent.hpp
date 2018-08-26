#pragma once
#include "USkinnedMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPoseableMeshComponent // Size: 0xC60
	: public USkinnedMeshComponent // Size: 0xB80
{
private:
	typedef UPoseableMeshComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(208); // id32("Class Engine.PoseableMeshComponent")
		return ptr;
	}
	uint8_t UnknownDataB80[0xE0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPoseableMeshComponent = sizeof(UPoseableMeshComponent); // 3168
    static_assert(sizeof(UPoseableMeshComponent) == 0xC60, "Size of UPoseableMeshComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
