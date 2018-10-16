#pragma once
#include "UAirborneMatchPreparer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAirborneMatchPreparer_Default_C // Size: 0xE0
	: public UAirborneMatchPreparer // Size: 0xE0
{
private:
	typedef UAirborneMatchPreparer_Default_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135603); // id32("BlueprintGeneratedClass AirborneMatchPreparer_Default.AirborneMatchPreparer_Default_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAirborneMatchPreparer_Default_C = sizeof(UAirborneMatchPreparer_Default_C); // 224
    static_assert(sizeof(UAirborneMatchPreparer_Default_C) == 0xE0, "Size of UAirborneMatchPreparer_Default_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
