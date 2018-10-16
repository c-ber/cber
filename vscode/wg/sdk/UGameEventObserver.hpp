#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameEventObserver // Size: 0x90
	: public UObject // Size: 0x30
{
private:
	typedef UGameEventObserver t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1864); // id32("Class TslGame.GameEventObserver")
		return ptr;
	}
	FScriptMulticastDelegate OnMatchStarted; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty TslGame.GameEventObserver.OnMatchStarted */
	FScriptMulticastDelegate OnMatchEnded; /* Ofs: 0x40 Size: 0x10 - MulticastDelegateProperty TslGame.GameEventObserver.OnMatchEnded */
	FScriptMulticastDelegate OnKillOtherPlayer; /* Ofs: 0x50 Size: 0x10 - MulticastDelegateProperty TslGame.GameEventObserver.OnKillOtherPlayer */
	FScriptMulticastDelegate OnDie; /* Ofs: 0x60 Size: 0x10 - MulticastDelegateProperty TslGame.GameEventObserver.OnDie */
	FScriptMulticastDelegate OnDamage; /* Ofs: 0x70 Size: 0x10 - MulticastDelegateProperty TslGame.GameEventObserver.OnDamage */
	FScriptMulticastDelegate OnDeathCamFinished; /* Ofs: 0x80 Size: 0x10 - MulticastDelegateProperty TslGame.GameEventObserver.OnDeathCamFinished */


	inline bool SetOnMatchStarted(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetOnMatchEnded(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x40, value); }
	inline bool SetOnKillOtherPlayer(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x50, value); }
	inline bool SetOnDie(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x60, value); }
	inline bool SetOnDamage(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x70, value); }
	inline bool SetOnDeathCamFinished(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameEventObserver = sizeof(UGameEventObserver); // 144
    static_assert(sizeof(UGameEventObserver) == 0x90, "Size of UGameEventObserver is not correct.");
	auto constexpr UGameEventObserver_OnMatchStarted_Offset = offsetof(UGameEventObserver, OnMatchStarted);
	static_assert(UGameEventObserver_OnMatchStarted_Offset == 0x30, "UGameEventObserver::OnMatchStarted offset is not 30");
	auto constexpr UGameEventObserver_OnMatchEnded_Offset = offsetof(UGameEventObserver, OnMatchEnded);
	static_assert(UGameEventObserver_OnMatchEnded_Offset == 0x40, "UGameEventObserver::OnMatchEnded offset is not 40");
	auto constexpr UGameEventObserver_OnKillOtherPlayer_Offset = offsetof(UGameEventObserver, OnKillOtherPlayer);
	static_assert(UGameEventObserver_OnKillOtherPlayer_Offset == 0x50, "UGameEventObserver::OnKillOtherPlayer offset is not 50");
	auto constexpr UGameEventObserver_OnDie_Offset = offsetof(UGameEventObserver, OnDie);
	static_assert(UGameEventObserver_OnDie_Offset == 0x60, "UGameEventObserver::OnDie offset is not 60");
	auto constexpr UGameEventObserver_OnDamage_Offset = offsetof(UGameEventObserver, OnDamage);
	static_assert(UGameEventObserver_OnDamage_Offset == 0x70, "UGameEventObserver::OnDamage offset is not 70");
	auto constexpr UGameEventObserver_OnDeathCamFinished_Offset = offsetof(UGameEventObserver, OnDeathCamFinished);
	static_assert(UGameEventObserver_OnDeathCamFinished_Offset == 0x80, "UGameEventObserver::OnDeathCamFinished offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
