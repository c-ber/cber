#pragma once
#include "USoundNode.hpp"
#include "FDialogueWaveParameter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeDialoguePlayer // Size: 0x68
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeDialoguePlayer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1217); // id32("Class Engine.SoundNodeDialoguePlayer")
		return ptr;
	}
	FDialogueWaveParameter DialogueWaveParameter; /* Ofs: 0x40 Size: 0x20 - StructProperty Engine.SoundNodeDialoguePlayer.DialogueWaveParameter */
	uint8_t boolField60;
	uint8_t UnknownData61[0x7];


	inline bool SetDialogueWaveParameter(t_structHelper inst, FDialogueWaveParameter value) { inst.WriteOffset(0x40, value); }
	inline bool bLooping()
	{
		return boolField60& 0x1;
	}
	inline bool SetbLooping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x60, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeDialoguePlayer = sizeof(USoundNodeDialoguePlayer); // 104
    static_assert(sizeof(USoundNodeDialoguePlayer) == 0x68, "Size of USoundNodeDialoguePlayer is not correct.");
	auto constexpr USoundNodeDialoguePlayer_DialogueWaveParameter_Offset = offsetof(USoundNodeDialoguePlayer, DialogueWaveParameter);
	static_assert(USoundNodeDialoguePlayer_DialogueWaveParameter_Offset == 0x40, "USoundNodeDialoguePlayer::DialogueWaveParameter offset is not 40");
	auto constexpr USoundNodeDialoguePlayer_boolField60_Offset = offsetof(USoundNodeDialoguePlayer, boolField60);
	static_assert(USoundNodeDialoguePlayer_boolField60_Offset == 0x60, "USoundNodeDialoguePlayer::boolField60 offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
