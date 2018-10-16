#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USplineMeshActor // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef USplineMeshActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1788); // id32("Class Engine.SplineMeshActor")
		return ptr;
	}
//	ExternalPtr<struct USplineMeshComponent> SplineMeshComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.SplineMeshActor.SplineMeshComponent */


//	inline bool SetSplineMeshComponent(t_structHelper inst, ExternalPtr<struct USplineMeshComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSplineMeshActor = sizeof(USplineMeshActor); // 1040
    static_assert(sizeof(USplineMeshActor) == 0x410, "Size of USplineMeshActor is not correct.");
//	auto constexpr USplineMeshActor_SplineMeshComponent_Offset = offsetof(USplineMeshActor, SplineMeshComponent);
//	static_assert(USplineMeshActor_SplineMeshComponent_Offset == 0x408, "USplineMeshActor::SplineMeshComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
