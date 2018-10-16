#pragma once
#include "UBlueprintFunctionLibrary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFoliageStatistics // Size: 0x30
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef UFoliageStatistics t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(387); // id32("Class Foliage.FoliageStatistics")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFoliageStatistics = sizeof(UFoliageStatistics); // 48
    static_assert(sizeof(UFoliageStatistics) == 0x30, "Size of UFoliageStatistics is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
