#pragma once
#include "UBP_Mirado_Open_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Mirado_Open_02_C // Size: 0xA28
	: public UBP_Mirado_Open_C // Size: 0xA28
{
private:
	typedef UBP_Mirado_Open_02_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124611); // id32("BlueprintGeneratedClass BP_Mirado_Open_02.BP_Mirado_Open_02_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Mirado_Open_02_C = sizeof(UBP_Mirado_Open_02_C); // 2600
    static_assert(sizeof(UBP_Mirado_Open_02_C) == 0xA28, "Size of UBP_Mirado_Open_02_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
