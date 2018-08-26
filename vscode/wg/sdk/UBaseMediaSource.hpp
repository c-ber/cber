#pragma once
#include "UMediaSource.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBaseMediaSource // Size: 0x40
	: public UMediaSource // Size: 0x38
{
private:
	typedef UBaseMediaSource t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(352); // id32("Class MediaAssets.BaseMediaSource")
		return ptr;
	}
	FName PlayerName; /* Ofs: 0x38 Size: 0x8 - NameProperty MediaAssets.BaseMediaSource.PlayerName */


	inline bool SetPlayerName(t_structHelper inst, FName value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBaseMediaSource = sizeof(UBaseMediaSource); // 64
    static_assert(sizeof(UBaseMediaSource) == 0x40, "Size of UBaseMediaSource is not correct.");
	auto constexpr UBaseMediaSource_PlayerName_Offset = offsetof(UBaseMediaSource, PlayerName);
	static_assert(UBaseMediaSource_PlayerName_Offset == 0x38, "UBaseMediaSource::PlayerName offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
