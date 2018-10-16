#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGeometryCacheTrack // Size: 0x58
	: public UObject // Size: 0x30
{
private:
	typedef UGeometryCacheTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1996); // id32("Class GeometryCache.GeometryCacheTrack")
		return ptr;
	}
	uint8_t UnknownData30[0x28];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGeometryCacheTrack = sizeof(UGeometryCacheTrack); // 88
    static_assert(sizeof(UGeometryCacheTrack) == 0x58, "Size of UGeometryCacheTrack is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
