#pragma once
#include "UMediaSource.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlatformMediaSource // Size: 0x40
	: public UMediaSource // Size: 0x38
{
private:
	typedef UPlatformMediaSource t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(355); // id32("Class MediaAssets.PlatformMediaSource")
		return ptr;
	}
	ExternalPtr<struct UMediaSource> MediaSource; /* Ofs: 0x38 Size: 0x8 - ObjectProperty MediaAssets.PlatformMediaSource.MediaSource */


	inline bool SetMediaSource(t_structHelper inst, ExternalPtr<struct UMediaSource> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlatformMediaSource = sizeof(UPlatformMediaSource); // 64
    static_assert(sizeof(UPlatformMediaSource) == 0x40, "Size of UPlatformMediaSource is not correct.");
	auto constexpr UPlatformMediaSource_MediaSource_Offset = offsetof(UPlatformMediaSource, MediaSource);
	static_assert(UPlatformMediaSource_MediaSource_Offset == 0x38, "UPlatformMediaSource::MediaSource offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
