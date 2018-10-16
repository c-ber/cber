#pragma once
#include "ULandscapeProxy.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeStreamingProxy // Size: 0x880
	: public ULandscapeProxy // Size: 0x860
{
private:
	typedef ULandscapeStreamingProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1297); // id32("Class Landscape.LandscapeStreamingProxy")
		return ptr;
	}
//	TLazyObjectPtr<ExternalPtr<struct ULandscape>> LandscapeActor; /* Ofs: 0x858 Size: 0x1C - LazyObjectProperty Landscape.LandscapeStreamingProxy.LandscapeActor */
	uint8_t UnknownData860[0x20];


//	inline bool SetLandscapeActor(t_structHelper inst, TLazyObjectPtr<ExternalPtr<struct ULandscape>> value) { inst.WriteOffset(0x858, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeStreamingProxy = sizeof(ULandscapeStreamingProxy); // 2176
    static_assert(sizeof(ULandscapeStreamingProxy) == 0x880, "Size of ULandscapeStreamingProxy is not correct.");
//	auto constexpr ULandscapeStreamingProxy_LandscapeActor_Offset = offsetof(ULandscapeStreamingProxy, LandscapeActor);
//	static_assert(ULandscapeStreamingProxy_LandscapeActor_Offset == 0x858, "ULandscapeStreamingProxy::LandscapeActor offset is not 858");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
