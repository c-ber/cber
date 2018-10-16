#pragma once
#include "USceneComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistanceFieldCaptureComponent // Size: 0x4A0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UDistanceFieldCaptureComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1820); // id32("Class Engine.DistanceFieldCaptureComponent")
		return ptr;
	}
	uint8_t UnknownData490[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDistanceFieldCaptureComponent = sizeof(UDistanceFieldCaptureComponent); // 1184
    static_assert(sizeof(UDistanceFieldCaptureComponent) == 0x4A0, "Size of UDistanceFieldCaptureComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
