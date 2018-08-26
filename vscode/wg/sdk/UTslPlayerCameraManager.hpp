#pragma once
#include "UPlayerCameraManager.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPlayerCameraManager // Size: 0x1C50
	: public UPlayerCameraManager // Size: 0x1C30
{
private:
	typedef UTslPlayerCameraManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1477); // id32("Class TslGame.TslPlayerCameraManager")
		return ptr;
	}
	uint8_t UnknownData1C30[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPlayerCameraManager = sizeof(UTslPlayerCameraManager); // 7248
    static_assert(sizeof(UTslPlayerCameraManager) == 0x1C50, "Size of UTslPlayerCameraManager is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
