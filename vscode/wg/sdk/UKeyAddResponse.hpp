#pragma once
#include "UVivoxResponse.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UKeyAddResponse // Size: 0xD0
	: public UVivoxResponse // Size: 0xA0
{
private:
	typedef UKeyAddResponse t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(66); // id32("Class TslGame.KeyAddResponse")
		return ptr;
	}
	uint8_t UnknownDataA0[0x30];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUKeyAddResponse = sizeof(UKeyAddResponse); // 208
    static_assert(sizeof(UKeyAddResponse) == 0xD0, "Size of UKeyAddResponse is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
