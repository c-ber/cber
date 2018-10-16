#pragma once
#include "UBP_Mirado_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Mirado_Open_C // Size: 0xA28
	: public UBP_Mirado_C // Size: 0xA28
{
private:
	typedef UBP_Mirado_Open_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124022); // id32("BlueprintGeneratedClass BP_Mirado_Open.BP_Mirado_Open_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Mirado_Open_C = sizeof(UBP_Mirado_Open_C); // 2600
    static_assert(sizeof(UBP_Mirado_Open_C) == 0xA28, "Size of UBP_Mirado_Open_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
