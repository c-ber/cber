#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCoherentUIGTInputActor // Size: 0x460
	: public UActor // Size: 0x410
{
private:
	typedef UCoherentUIGTInputActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2076); // id32("Class CoherentUIGTPlugin.CoherentUIGTInputActor")
		return ptr;
	}
//	FScriptMulticastDelegate OnCoherentUIGTInputActorMouseButtonDown; /* Ofs: 0x408 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTInputActor.OnCoherentUIGTInputActorMouseButtonDown */
	uint8_t UnknownData410[0x8];
	FScriptMulticastDelegate OnCoherentUIGTInputActorMouseButtonUp; /* Ofs: 0x418 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTInputActor.OnCoherentUIGTInputActorMouseButtonUp */
	FScriptMulticastDelegate OnCoherentUIGTInputActorKeyDown; /* Ofs: 0x428 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTInputActor.OnCoherentUIGTInputActorKeyDown */
	FScriptMulticastDelegate OnCoherentUIGTInputActorKeyUp; /* Ofs: 0x438 Size: 0x10 - MulticastDelegateProperty CoherentUIGTPlugin.CoherentUIGTInputActor.OnCoherentUIGTInputActorKeyUp */
	uint8_t UnknownData448[0x18];


//	inline bool SetOnCoherentUIGTInputActorMouseButtonDown(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x408, value); }
	inline bool SetOnCoherentUIGTInputActorMouseButtonUp(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x418, value); }
	inline bool SetOnCoherentUIGTInputActorKeyDown(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x428, value); }
	inline bool SetOnCoherentUIGTInputActorKeyUp(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x438, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCoherentUIGTInputActor = sizeof(UCoherentUIGTInputActor); // 1120
    static_assert(sizeof(UCoherentUIGTInputActor) == 0x460, "Size of UCoherentUIGTInputActor is not correct.");
//	auto constexpr UCoherentUIGTInputActor_OnCoherentUIGTInputActorMouseButtonDown_Offset = offsetof(UCoherentUIGTInputActor, OnCoherentUIGTInputActorMouseButtonDown);
//	static_assert(UCoherentUIGTInputActor_OnCoherentUIGTInputActorMouseButtonDown_Offset == 0x408, "UCoherentUIGTInputActor::OnCoherentUIGTInputActorMouseButtonDown offset is not 408");
	auto constexpr UCoherentUIGTInputActor_OnCoherentUIGTInputActorMouseButtonUp_Offset = offsetof(UCoherentUIGTInputActor, OnCoherentUIGTInputActorMouseButtonUp);
	static_assert(UCoherentUIGTInputActor_OnCoherentUIGTInputActorMouseButtonUp_Offset == 0x418, "UCoherentUIGTInputActor::OnCoherentUIGTInputActorMouseButtonUp offset is not 418");
	auto constexpr UCoherentUIGTInputActor_OnCoherentUIGTInputActorKeyDown_Offset = offsetof(UCoherentUIGTInputActor, OnCoherentUIGTInputActorKeyDown);
	static_assert(UCoherentUIGTInputActor_OnCoherentUIGTInputActorKeyDown_Offset == 0x428, "UCoherentUIGTInputActor::OnCoherentUIGTInputActorKeyDown offset is not 428");
	auto constexpr UCoherentUIGTInputActor_OnCoherentUIGTInputActorKeyUp_Offset = offsetof(UCoherentUIGTInputActor, OnCoherentUIGTInputActorKeyUp);
	static_assert(UCoherentUIGTInputActor_OnCoherentUIGTInputActorKeyUp_Offset == 0x438, "UCoherentUIGTInputActor::OnCoherentUIGTInputActorKeyUp offset is not 438");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
