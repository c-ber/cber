#pragma once
#include "UBaseMediaSource.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UStreamMediaSource // Size: 0x50
	: public UBaseMediaSource // Size: 0x40
{
private:
	typedef UStreamMediaSource t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(354); // id32("Class MediaAssets.StreamMediaSource")
		return ptr;
	}
	FString StreamUrl; /* Ofs: 0x40 Size: 0x10 - StrProperty MediaAssets.StreamMediaSource.StreamUrl */


	inline bool SetStreamUrl(t_structHelper inst, FString value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUStreamMediaSource = sizeof(UStreamMediaSource); // 80
    static_assert(sizeof(UStreamMediaSource) == 0x50, "Size of UStreamMediaSource is not correct.");
	auto constexpr UStreamMediaSource_StreamUrl_Offset = offsetof(UStreamMediaSource, StreamUrl);
	static_assert(UStreamMediaSource_StreamUrl_Offset == 0x40, "UStreamMediaSource::StreamUrl offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
