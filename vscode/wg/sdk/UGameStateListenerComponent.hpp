#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameStateListenerComponent // Size: 0x210
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UGameStateListenerComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1866); // id32("Class TslGame.GameStateListenerComponent")
		return ptr;
	}
//	FScriptMulticastDelegate OnMatchStateChange; /* Ofs: 0x1E8 Size: 0x10 - MulticastDelegateProperty TslGame.GameStateListenerComponent.OnMatchStateChange */
	uint8_t UnknownData1F0[0x8];
	FScriptMulticastDelegate OnGameModeEvent; /* Ofs: 0x1F8 Size: 0x10 - MulticastDelegateProperty TslGame.GameStateListenerComponent.OnGameModeEvent */
	uint8_t UnknownData208[0x8];


//	inline bool SetOnMatchStateChange(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetOnGameModeEvent(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameStateListenerComponent = sizeof(UGameStateListenerComponent); // 528
    static_assert(sizeof(UGameStateListenerComponent) == 0x210, "Size of UGameStateListenerComponent is not correct.");
//	auto constexpr UGameStateListenerComponent_OnMatchStateChange_Offset = offsetof(UGameStateListenerComponent, OnMatchStateChange);
//	static_assert(UGameStateListenerComponent_OnMatchStateChange_Offset == 0x1e8, "UGameStateListenerComponent::OnMatchStateChange offset is not 1e8");
	auto constexpr UGameStateListenerComponent_OnGameModeEvent_Offset = offsetof(UGameStateListenerComponent, OnGameModeEvent);
	static_assert(UGameStateListenerComponent_OnGameModeEvent_Offset == 0x1f8, "UGameStateListenerComponent::OnGameModeEvent offset is not 1f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
