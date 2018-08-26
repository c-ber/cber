#pragma once
#include "UBlueprintFunctionLibrary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAudioMixerBlueprintLibrary // Size: 0x30
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef UAudioMixerBlueprintLibrary t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(367); // id32("Class AudioMixer.AudioMixerBlueprintLibrary")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAudioMixerBlueprintLibrary = sizeof(UAudioMixerBlueprintLibrary); // 48
    static_assert(sizeof(UAudioMixerBlueprintLibrary) == 0x30, "Size of UAudioMixerBlueprintLibrary is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
