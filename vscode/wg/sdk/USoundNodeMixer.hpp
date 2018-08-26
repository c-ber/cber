#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeMixer // Size: 0x50
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeMixer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1225); // id32("Class Engine.SoundNodeMixer")
		return ptr;
	}
	TArray<float> InputVolume; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.SoundNodeMixer.InputVolume */


	inline bool SetInputVolume(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeMixer = sizeof(USoundNodeMixer); // 80
    static_assert(sizeof(USoundNodeMixer) == 0x50, "Size of USoundNodeMixer is not correct.");
	auto constexpr USoundNodeMixer_InputVolume_Offset = offsetof(USoundNodeMixer, InputVolume);
	static_assert(USoundNodeMixer_InputVolume_Offset == 0x40, "USoundNodeMixer::InputVolume offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
