#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBluezoneInOutSoundEffectComponent // Size: 0x200
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UBluezoneInOutSoundEffectComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(415); // id32("Class TslGame.BluezoneInOutSoundEffectComponent")
		return ptr;
	}
//	ExternalPtr<struct UAkComponent> AkComponent; /* Ofs: 0x1E8 Size: 0x8 - ObjectProperty TslGame.BluezoneInOutSoundEffectComponent.AkComponent */
	ExternalPtr<struct UAkAudioEvent> BluezoneInSoundAk; /* Ofs: 0x1F0 Size: 0x8 - ObjectProperty TslGame.BluezoneInOutSoundEffectComponent.BluezoneInSoundAk */
	ExternalPtr<struct UAkAudioEvent> BluezoneOutSoundAk; /* Ofs: 0x1F8 Size: 0x8 - ObjectProperty TslGame.BluezoneInOutSoundEffectComponent.BluezoneOutSoundAk */


//	inline bool SetAkComponent(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetBluezoneInSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetBluezoneOutSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x1F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBluezoneInOutSoundEffectComponent = sizeof(UBluezoneInOutSoundEffectComponent); // 512
    static_assert(sizeof(UBluezoneInOutSoundEffectComponent) == 0x200, "Size of UBluezoneInOutSoundEffectComponent is not correct.");
//	auto constexpr UBluezoneInOutSoundEffectComponent_AkComponent_Offset = offsetof(UBluezoneInOutSoundEffectComponent, AkComponent);
//	static_assert(UBluezoneInOutSoundEffectComponent_AkComponent_Offset == 0x1e8, "UBluezoneInOutSoundEffectComponent::AkComponent offset is not 1e8");
	auto constexpr UBluezoneInOutSoundEffectComponent_BluezoneInSoundAk_Offset = offsetof(UBluezoneInOutSoundEffectComponent, BluezoneInSoundAk);
	static_assert(UBluezoneInOutSoundEffectComponent_BluezoneInSoundAk_Offset == 0x1f0, "UBluezoneInOutSoundEffectComponent::BluezoneInSoundAk offset is not 1f0");
	auto constexpr UBluezoneInOutSoundEffectComponent_BluezoneOutSoundAk_Offset = offsetof(UBluezoneInOutSoundEffectComponent, BluezoneOutSoundAk);
	static_assert(UBluezoneInOutSoundEffectComponent_BluezoneOutSoundAk_Offset == 0x1f8, "UBluezoneInOutSoundEffectComponent::BluezoneOutSoundAk offset is not 1f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
