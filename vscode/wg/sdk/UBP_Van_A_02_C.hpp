#pragma once
#include "UBP_MiniBus_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Van_A_02_C // Size: 0xA40
	: public UBP_MiniBus_C // Size: 0xA40
{
private:
	typedef UBP_Van_A_02_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124646); // id32("BlueprintGeneratedClass BP_Van_A_02.BP_Van_A_02_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Van_A_02_C = sizeof(UBP_Van_A_02_C); // 2624
    static_assert(sizeof(UBP_Van_A_02_C) == 0xA40, "Size of UBP_Van_A_02_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
