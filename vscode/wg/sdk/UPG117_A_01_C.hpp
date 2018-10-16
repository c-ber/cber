#pragma once
#include "UBoat_PG117_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPG117_A_01_C // Size: 0x608
	: public UBoat_PG117_C // Size: 0x608
{
private:
	typedef UPG117_A_01_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124676); // id32("BlueprintGeneratedClass PG117_A_01.PG117_A_01_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPG117_A_01_C = sizeof(UPG117_A_01_C); // 1544
    static_assert(sizeof(UPG117_A_01_C) == 0x608, "Size of UPG117_A_01_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
