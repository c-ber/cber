#pragma once
#include "UTexture.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTextureCube // Size: 0x128
	: public UTexture // Size: 0xD0
{
private:
	typedef UTextureCube t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1244); // id32("Class Engine.TextureCube")
		return ptr;
	}
	uint8_t UnknownDataD0[0x58];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTextureCube = sizeof(UTextureCube); // 296
    static_assert(sizeof(UTextureCube) == 0x128, "Size of UTextureCube is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
