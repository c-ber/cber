#pragma once
#include "USoundNodeAssetReferencer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeWavePlayer // Size: 0x70
	: public USoundNodeAssetReferencer // Size: 0x40
{
private:
	typedef USoundNodeWavePlayer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1212); // id32("Class Engine.SoundNodeWavePlayer")
		return ptr;
	}
	TAssetPtr<ExternalPtr<struct USoundWave>> SoundWaveAssetPtr; /* Ofs: 0x40 Size: 0x1C - AssetObjectProperty Engine.SoundNodeWavePlayer.SoundWaveAssetPtr */
	uint8_t UnknownData5C[0x4];
	ExternalPtr<struct USoundWave> SoundWave; /* Ofs: 0x60 Size: 0x8 - ObjectProperty Engine.SoundNodeWavePlayer.SoundWave */
	uint8_t boolField68;
	uint8_t UnknownData69[0x7];


	inline bool SetSoundWaveAssetPtr(t_structHelper inst, TAssetPtr<ExternalPtr<struct USoundWave>> value) { inst.WriteOffset(0x40, value); }
	inline bool SetSoundWave(t_structHelper inst, ExternalPtr<struct USoundWave> value) { inst.WriteOffset(0x60, value); }
	inline bool bLooping()
	{
		return boolField68& 0x2;
	}
	inline bool SetbLooping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeWavePlayer = sizeof(USoundNodeWavePlayer); // 112
    static_assert(sizeof(USoundNodeWavePlayer) == 0x70, "Size of USoundNodeWavePlayer is not correct.");
	auto constexpr USoundNodeWavePlayer_SoundWaveAssetPtr_Offset = offsetof(USoundNodeWavePlayer, SoundWaveAssetPtr);
	static_assert(USoundNodeWavePlayer_SoundWaveAssetPtr_Offset == 0x40, "USoundNodeWavePlayer::SoundWaveAssetPtr offset is not 40");
	auto constexpr USoundNodeWavePlayer_SoundWave_Offset = offsetof(USoundNodeWavePlayer, SoundWave);
	static_assert(USoundNodeWavePlayer_SoundWave_Offset == 0x60, "USoundNodeWavePlayer::SoundWave offset is not 60");
	auto constexpr USoundNodeWavePlayer_boolField68_Offset = offsetof(USoundNodeWavePlayer, boolField68);
	static_assert(USoundNodeWavePlayer_boolField68_Offset == 0x68, "USoundNodeWavePlayer::boolField68 offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
