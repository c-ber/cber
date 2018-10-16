#pragma once
#include "UChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVoiceChannel // Size: 0x80
	: public UChannel // Size: 0x70
{
private:
	typedef UVoiceChannel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(695); // id32("Class Engine.VoiceChannel")
		return ptr;
	}
	uint8_t UnknownData70[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVoiceChannel = sizeof(UVoiceChannel); // 128
    static_assert(sizeof(UVoiceChannel) == 0x80, "Size of UVoiceChannel is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
