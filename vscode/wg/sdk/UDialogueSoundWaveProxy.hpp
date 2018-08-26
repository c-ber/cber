#pragma once
#include "USoundBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDialogueSoundWaveProxy // Size: 0xC8
	: public USoundBase // Size: 0xA8
{
private:
	typedef UDialogueSoundWaveProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1203); // id32("Class Engine.DialogueSoundWaveProxy")
		return ptr;
	}
	uint8_t UnknownDataA8[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDialogueSoundWaveProxy = sizeof(UDialogueSoundWaveProxy); // 200
    static_assert(sizeof(UDialogueSoundWaveProxy) == 0xC8, "Size of UDialogueSoundWaveProxy is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
