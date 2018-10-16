#pragma once
#include "USplineComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperTerrainSplineComponent // Size: 0xA10
	: public USplineComponent // Size: 0x9D0
{
private:
	typedef UPaperTerrainSplineComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2038); // id32("Class Paper2D.PaperTerrainSplineComponent")
		return ptr;
	}
	uint8_t UnknownData9D0[0x40];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperTerrainSplineComponent = sizeof(UPaperTerrainSplineComponent); // 2576
    static_assert(sizeof(UPaperTerrainSplineComponent) == 0xA10, "Size of UPaperTerrainSplineComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
