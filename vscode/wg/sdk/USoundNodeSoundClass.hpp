#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeSoundClass // Size: 0x48
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeSoundClass t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1231); // id32("Class Engine.SoundNodeSoundClass")
		return ptr;
	}
	ExternalPtr<struct USoundClass> SoundClassOverride; /* Ofs: 0x40 Size: 0x8 - ObjectProperty Engine.SoundNodeSoundClass.SoundClassOverride */


	inline bool SetSoundClassOverride(t_structHelper inst, ExternalPtr<struct USoundClass> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeSoundClass = sizeof(USoundNodeSoundClass); // 72
    static_assert(sizeof(USoundNodeSoundClass) == 0x48, "Size of USoundNodeSoundClass is not correct.");
	auto constexpr USoundNodeSoundClass_SoundClassOverride_Offset = offsetof(USoundNodeSoundClass, SoundClassOverride);
	static_assert(USoundNodeSoundClass_SoundClassOverride_Offset == 0x40, "USoundNodeSoundClass::SoundClassOverride offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
