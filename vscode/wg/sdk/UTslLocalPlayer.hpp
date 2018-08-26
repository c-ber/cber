#pragma once
#include "ULocalPlayer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslLocalPlayer // Size: 0x1F0
	: public ULocalPlayer // Size: 0x1F0
{
private:
	typedef UTslLocalPlayer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1427); // id32("Class TslGame.TslLocalPlayer")
		return ptr;
	}
//	ExternalPtr<struct UTslPersistentUser> PersistentUser; /* Ofs: 0x1E8 Size: 0x8 - ObjectProperty TslGame.TslLocalPlayer.PersistentUser */


//	inline bool SetPersistentUser(t_structHelper inst, ExternalPtr<struct UTslPersistentUser> value) { inst.WriteOffset(0x1E8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslLocalPlayer = sizeof(UTslLocalPlayer); // 496
    static_assert(sizeof(UTslLocalPlayer) == 0x1F0, "Size of UTslLocalPlayer is not correct.");
//	auto constexpr UTslLocalPlayer_PersistentUser_Offset = offsetof(UTslLocalPlayer, PersistentUser);
//	static_assert(UTslLocalPlayer_PersistentUser_Offset == 0x1e8, "UTslLocalPlayer::PersistentUser offset is not 1e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
