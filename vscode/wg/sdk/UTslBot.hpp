#pragma once
#include "UTslCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslBot // Size: 0x19C0
	: public UTslCharacter // Size: 0x19C0
{
private:
	typedef UTslBot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1936); // id32("Class TslGame.TslBot")
		return ptr;
	}
//	ExternalPtr<struct UBehaviorTree> BotBehavior; /* Ofs: 0x19B8 Size: 0x8 - ObjectProperty TslGame.TslBot.BotBehavior */


//	inline bool SetBotBehavior(t_structHelper inst, ExternalPtr<struct UBehaviorTree> value) { inst.WriteOffset(0x19B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslBot = sizeof(UTslBot); // 6592
    static_assert(sizeof(UTslBot) == 0x19C0, "Size of UTslBot is not correct.");
//	auto constexpr UTslBot_BotBehavior_Offset = offsetof(UTslBot, BotBehavior);
//	static_assert(UTslBot_BotBehavior_Offset == 0x19b8, "UTslBot::BotBehavior offset is not 19b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
