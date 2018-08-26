#pragma once
#include "UTslStaticFence.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UStatic_City_ResidentialFence_01_TallOnly_C // Size: 0x4B0
	: public UTslStaticFence // Size: 0x4B0
{
private:
	typedef UStatic_City_ResidentialFence_01_TallOnly_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(208824); // id32("BlueprintGeneratedClass Static_City_ResidentialFence_01_TallOnly.Static_City_ResidentialFence_01_TallOnly_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUStatic_City_ResidentialFence_01_TallOnly_C = sizeof(UStatic_City_ResidentialFence_01_TallOnly_C); // 1200
    static_assert(sizeof(UStatic_City_ResidentialFence_01_TallOnly_C) == 0x4B0, "Size of UStatic_City_ResidentialFence_01_TallOnly_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
