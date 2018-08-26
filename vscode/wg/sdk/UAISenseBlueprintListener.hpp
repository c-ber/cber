#pragma once
#include "UUserDefinedStruct.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISenseBlueprintListener // Size: 0x108
	: public UUserDefinedStruct // Size: 0x108
{
private:
	typedef UAISenseBlueprintListener t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1688); // id32("Class AIModule.AISenseBlueprintListener")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISenseBlueprintListener = sizeof(UAISenseBlueprintListener); // 264
    static_assert(sizeof(UAISenseBlueprintListener) == 0x108, "Size of UAISenseBlueprintListener is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
