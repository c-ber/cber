#pragma once
#include "UStaticMeshActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslBreakableObject // Size: 0x420
	: public UStaticMeshActor // Size: 0x420
{
private:
	typedef UTslBreakableObject t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1333); // id32("Class TslGame.TslBreakableObject")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslBreakableObject = sizeof(UTslBreakableObject); // 1056
    static_assert(sizeof(UTslBreakableObject) == 0x420, "Size of UTslBreakableObject is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
