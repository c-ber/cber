#pragma once
#include "UPlayer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULocalPlayer // Size: 0x1F0
	: public UPlayer // Size: 0x60
{
private:
	typedef ULocalPlayer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1184); // id32("Class Engine.LocalPlayer")
		return ptr;
	}
	uint8_t UnknownData60[0x1C];
	uint8_t boolField7C;
	uint8_t UnknownData7D[0x3];
	ExternalPtr<struct UClass> PendingLevelPlayerControllerClass; /* Ofs: 0x80 Size: 0x8 - ClassProperty Engine.LocalPlayer.PendingLevelPlayerControllerClass */
	uint8_t UnknownData88[0x168];


	inline bool bSentSplitJoin()
	{
		return boolField7C& 0x1;
	}
	inline bool SetbSentSplitJoin(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPendingLevelPlayerControllerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULocalPlayer = sizeof(ULocalPlayer); // 496
    static_assert(sizeof(ULocalPlayer) == 0x1F0, "Size of ULocalPlayer is not correct.");
	auto constexpr ULocalPlayer_boolField7C_Offset = offsetof(ULocalPlayer, boolField7C);
	static_assert(ULocalPlayer_boolField7C_Offset == 0x7c, "ULocalPlayer::boolField7C offset is not 7c");
	auto constexpr ULocalPlayer_PendingLevelPlayerControllerClass_Offset = offsetof(ULocalPlayer, PendingLevelPlayerControllerClass);
	static_assert(ULocalPlayer_PendingLevelPlayerControllerClass_Offset == 0x80, "ULocalPlayer::PendingLevelPlayerControllerClass offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
