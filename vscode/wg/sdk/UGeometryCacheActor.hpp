#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGeometryCacheActor // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UGeometryCacheActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1994); // id32("Class GeometryCache.GeometryCacheActor")
		return ptr;
	}
//	ExternalPtr<struct UGeometryCacheComponent> GeometryCacheComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty GeometryCache.GeometryCacheActor.GeometryCacheComponent */


//	inline bool SetGeometryCacheComponent(t_structHelper inst, ExternalPtr<struct UGeometryCacheComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGeometryCacheActor = sizeof(UGeometryCacheActor); // 1040
    static_assert(sizeof(UGeometryCacheActor) == 0x410, "Size of UGeometryCacheActor is not correct.");
//	auto constexpr UGeometryCacheActor_GeometryCacheComponent_Offset = offsetof(UGeometryCacheActor, GeometryCacheComponent);
//	static_assert(UGeometryCacheActor_GeometryCacheComponent_Offset == 0x408, "UGeometryCacheActor::GeometryCacheComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
