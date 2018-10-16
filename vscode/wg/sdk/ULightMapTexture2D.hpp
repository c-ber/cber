#pragma once
#include "UTexture2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULightMapTexture2D // Size: 0x120
	: public UTexture2D // Size: 0x118
{
private:
	typedef ULightMapTexture2D t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1240); // id32("Class Engine.LightMapTexture2D")
		return ptr;
	}
	uint8_t UnknownData118[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULightMapTexture2D = sizeof(ULightMapTexture2D); // 288
    static_assert(sizeof(ULightMapTexture2D) == 0x120, "Size of ULightMapTexture2D is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
