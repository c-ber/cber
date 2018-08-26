#pragma once
#include "UVivoxResponse.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UKeyRevokeResponse // Size: 0xC0
	: public UVivoxResponse // Size: 0xA0
{
private:
	typedef UKeyRevokeResponse t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(65); // id32("Class TslGame.KeyRevokeResponse")
		return ptr;
	}
	uint8_t UnknownDataA0[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUKeyRevokeResponse = sizeof(UKeyRevokeResponse); // 192
    static_assert(sizeof(UKeyRevokeResponse) == 0xC0, "Size of UKeyRevokeResponse is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
