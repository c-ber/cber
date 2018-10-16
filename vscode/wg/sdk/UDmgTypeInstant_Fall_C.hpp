#pragma once
#include "UDmgType_Instant_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDmgTypeInstant_Fall_C // Size: 0xB0
	: public UDmgType_Instant_C // Size: 0xB0
{
private:
	typedef UDmgTypeInstant_Fall_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135956); // id32("BlueprintGeneratedClass DmgTypeInstant_Fall.DmgTypeInstant_Fall_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDmgTypeInstant_Fall_C = sizeof(UDmgTypeInstant_Fall_C); // 176
    static_assert(sizeof(UDmgTypeInstant_Fall_C) == 0xB0, "Size of UDmgTypeInstant_Fall_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
