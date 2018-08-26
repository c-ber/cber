#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundEffectSourcePresetChain // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef USoundEffectSourcePresetChain t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1209); // id32("Class Engine.SoundEffectSourcePresetChain")
		return ptr;
	}
	TArray<struct FSourceEffectChainEntry> Chain; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.SoundEffectSourcePresetChain.Chain */
	uint8_t boolField40;
	uint8_t UnknownData41[0x7];


	inline bool SetChain(t_structHelper inst, TArray<struct FSourceEffectChainEntry> value) { inst.WriteOffset(0x30, value); }
	inline bool bPlayEffectChainTails()
	{
		return boolField40& 0x1;
	}
	inline bool SetbPlayEffectChainTails(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundEffectSourcePresetChain = sizeof(USoundEffectSourcePresetChain); // 72
    static_assert(sizeof(USoundEffectSourcePresetChain) == 0x48, "Size of USoundEffectSourcePresetChain is not correct.");
	auto constexpr USoundEffectSourcePresetChain_Chain_Offset = offsetof(USoundEffectSourcePresetChain, Chain);
	static_assert(USoundEffectSourcePresetChain_Chain_Offset == 0x30, "USoundEffectSourcePresetChain::Chain offset is not 30");
	auto constexpr USoundEffectSourcePresetChain_boolField40_Offset = offsetof(USoundEffectSourcePresetChain, boolField40);
	static_assert(USoundEffectSourcePresetChain_boolField40_Offset == 0x40, "USoundEffectSourcePresetChain::boolField40 offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
