#pragma once
#include "UTslBaseHUD.hpp"
#include "EWelcomeState.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslWelcomeBaseHUD // Size: 0x660
	: public UTslBaseHUD // Size: 0x610
{
private:
	typedef UTslWelcomeBaseHUD t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1323); // id32("Class TslGame.TslWelcomeBaseHUD")
		return ptr;
	}
	uint8_t UnknownData610[0x10];
	FScriptMulticastDelegate OnStateChanged; /* Ofs: 0x620 Size: 0x10 - MulticastDelegateProperty TslGame.TslWelcomeBaseHUD.OnStateChanged */
	TEnumAsByte<enum EWelcomeState> WelcomeState; /* Ofs: 0x630 Size: 0x1 - EnumProperty TslGame.TslWelcomeBaseHUD.WelcomeState */
	uint8_t UnknownData631[0x2F];


	inline bool SetOnStateChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x620, value); }
	inline bool SetWelcomeState(t_structHelper inst, TEnumAsByte<enum EWelcomeState> value) { inst.WriteOffset(0x630, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslWelcomeBaseHUD = sizeof(UTslWelcomeBaseHUD); // 1632
    static_assert(sizeof(UTslWelcomeBaseHUD) == 0x660, "Size of UTslWelcomeBaseHUD is not correct.");
	auto constexpr UTslWelcomeBaseHUD_OnStateChanged_Offset = offsetof(UTslWelcomeBaseHUD, OnStateChanged);
	static_assert(UTslWelcomeBaseHUD_OnStateChanged_Offset == 0x620, "UTslWelcomeBaseHUD::OnStateChanged offset is not 620");
	auto constexpr UTslWelcomeBaseHUD_WelcomeState_Offset = offsetof(UTslWelcomeBaseHUD, WelcomeState);
	static_assert(UTslWelcomeBaseHUD_WelcomeState_Offset == 0x630, "UTslWelcomeBaseHUD::WelcomeState offset is not 630");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
