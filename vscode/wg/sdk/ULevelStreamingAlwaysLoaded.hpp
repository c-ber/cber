#pragma once
#include "ULevelStreaming.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelStreamingAlwaysLoaded // Size: 0x170
	: public ULevelStreaming // Size: 0x170
{
private:
	typedef ULevelStreamingAlwaysLoaded t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(849); // id32("Class Engine.LevelStreamingAlwaysLoaded")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelStreamingAlwaysLoaded = sizeof(ULevelStreamingAlwaysLoaded); // 368
    static_assert(sizeof(ULevelStreamingAlwaysLoaded) == 0x170, "Size of ULevelStreamingAlwaysLoaded is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
