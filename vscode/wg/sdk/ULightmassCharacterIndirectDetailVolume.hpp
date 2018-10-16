#pragma once
#include "UVolume.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULightmassCharacterIndirectDetailVolume // Size: 0x440
	: public UVolume // Size: 0x440
{
private:
	typedef ULightmassCharacterIndirectDetailVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1712); // id32("Class Engine.LightmassCharacterIndirectDetailVolume")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULightmassCharacterIndirectDetailVolume = sizeof(ULightmassCharacterIndirectDetailVolume); // 1088
    static_assert(sizeof(ULightmassCharacterIndirectDetailVolume) == 0x440, "Size of ULightmassCharacterIndirectDetailVolume is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
