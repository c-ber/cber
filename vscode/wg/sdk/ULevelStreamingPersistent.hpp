#pragma once
#include "ULevelStreaming.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelStreamingPersistent // Size: 0x170
	: public ULevelStreaming // Size: 0x170
{
private:
	typedef ULevelStreamingPersistent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(851); // id32("Class Engine.LevelStreamingPersistent")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelStreamingPersistent = sizeof(ULevelStreamingPersistent); // 368
    static_assert(sizeof(ULevelStreamingPersistent) == 0x170, "Size of ULevelStreamingPersistent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
