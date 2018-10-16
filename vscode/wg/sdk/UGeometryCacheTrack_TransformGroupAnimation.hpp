#pragma once
#include "UGeometryCacheTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGeometryCacheTrack_TransformGroupAnimation // Size: 0xA8
	: public UGeometryCacheTrack // Size: 0x58
{
private:
	typedef UGeometryCacheTrack_TransformGroupAnimation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1999); // id32("Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation")
		return ptr;
	}
	uint8_t UnknownData58[0x50];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGeometryCacheTrack_TransformGroupAnimation = sizeof(UGeometryCacheTrack_TransformGroupAnimation); // 168
    static_assert(sizeof(UGeometryCacheTrack_TransformGroupAnimation) == 0xA8, "Size of UGeometryCacheTrack_TransformGroupAnimation is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
