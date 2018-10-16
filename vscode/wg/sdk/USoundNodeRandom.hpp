#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeRandom // Size: 0x70
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeRandom t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1230); // id32("Class Engine.SoundNodeRandom")
		return ptr;
	}
	TArray<float> Weights; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.SoundNodeRandom.Weights */
	int32_t PreselectAtLevelLoad; /* Ofs: 0x50 Size: 0x4 - IntProperty Engine.SoundNodeRandom.PreselectAtLevelLoad */
	uint8_t boolField54;
	uint8_t UnknownData55[0x3];
	TArray<bool> HasBeenUsed; /* Ofs: 0x58 Size: 0x10 - ArrayProperty Engine.SoundNodeRandom.HasBeenUsed */
	int32_t NumRandomUsed; /* Ofs: 0x68 Size: 0x4 - IntProperty Engine.SoundNodeRandom.NumRandomUsed */
	uint8_t UnknownData6C[0x4];


	inline bool SetWeights(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x40, value); }
	inline bool SetPreselectAtLevelLoad(t_structHelper inst, int32_t value) { inst.WriteOffset(0x50, value); }
	inline bool bRandomizeWithoutReplacement()
	{
		return boolField54& 0x1;
	}
	inline bool SetbRandomizeWithoutReplacement(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetHasBeenUsed(t_structHelper inst, TArray<bool> value) { inst.WriteOffset(0x58, value); }
	inline bool SetNumRandomUsed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeRandom = sizeof(USoundNodeRandom); // 112
    static_assert(sizeof(USoundNodeRandom) == 0x70, "Size of USoundNodeRandom is not correct.");
	auto constexpr USoundNodeRandom_Weights_Offset = offsetof(USoundNodeRandom, Weights);
	static_assert(USoundNodeRandom_Weights_Offset == 0x40, "USoundNodeRandom::Weights offset is not 40");
	auto constexpr USoundNodeRandom_PreselectAtLevelLoad_Offset = offsetof(USoundNodeRandom, PreselectAtLevelLoad);
	static_assert(USoundNodeRandom_PreselectAtLevelLoad_Offset == 0x50, "USoundNodeRandom::PreselectAtLevelLoad offset is not 50");
	auto constexpr USoundNodeRandom_boolField54_Offset = offsetof(USoundNodeRandom, boolField54);
	static_assert(USoundNodeRandom_boolField54_Offset == 0x54, "USoundNodeRandom::boolField54 offset is not 54");
	auto constexpr USoundNodeRandom_HasBeenUsed_Offset = offsetof(USoundNodeRandom, HasBeenUsed);
	static_assert(USoundNodeRandom_HasBeenUsed_Offset == 0x58, "USoundNodeRandom::HasBeenUsed offset is not 58");
	auto constexpr USoundNodeRandom_NumRandomUsed_Offset = offsetof(USoundNodeRandom, NumRandomUsed);
	static_assert(USoundNodeRandom_NumRandomUsed_Offset == 0x68, "USoundNodeRandom::NumRandomUsed offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
