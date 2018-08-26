#pragma once
#include "UCameraComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslCameraComponent // Size: 0xA50
	: public UCameraComponent // Size: 0xA40
{
private:
	typedef UTslCameraComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1344); // id32("Class TslGame.TslCameraComponent")
		return ptr;
	}
	uint8_t UnknownDataA40[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslCameraComponent = sizeof(UTslCameraComponent); // 2640
    static_assert(sizeof(UTslCameraComponent) == 0xA50, "Size of UTslCameraComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
