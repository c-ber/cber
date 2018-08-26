#pragma once
#include "UNormalMatchPreparer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNormalMatchPreparer_Default_C // Size: 0x78
	: public UNormalMatchPreparer // Size: 0x78
{
private:
	typedef UNormalMatchPreparer_Default_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135570); // id32("BlueprintGeneratedClass NormalMatchPreparer_Default.NormalMatchPreparer_Default_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNormalMatchPreparer_Default_C = sizeof(UNormalMatchPreparer_Default_C); // 120
    static_assert(sizeof(UNormalMatchPreparer_Default_C) == 0x78, "Size of UNormalMatchPreparer_Default_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
