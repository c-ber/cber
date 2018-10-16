#pragma once
#include "UInterpTrackVectorBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackSound // Size: 0xB0
	: public UInterpTrackVectorBase // Size: 0x98
{
private:
	typedef UInterpTrackSound t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(818); // id32("Class Engine.InterpTrackSound")
		return ptr;
	}
	TArray<struct FSoundTrackKey> Sounds; /* Ofs: 0x98 Size: 0x10 - ArrayProperty Engine.InterpTrackSound.Sounds */
	uint8_t boolFieldA8;
	uint8_t UnknownDataA9[0x7];


	inline bool SetSounds(t_structHelper inst, TArray<struct FSoundTrackKey> value) { inst.WriteOffset(0x98, value); }
	inline bool bPlayOnReverse()
	{
		return boolFieldA8& 0x1;
	}
	inline bool SetbPlayOnReverse(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bContinueSoundOnMatineeEnd()
	{
		return boolFieldA8& 0x2;
	}
	inline bool SetbContinueSoundOnMatineeEnd(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bSuppressSubtitles()
	{
		return boolFieldA8& 0x4;
	}
	inline bool SetbSuppressSubtitles(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bTreatAsDialogue()
	{
		return boolFieldA8& 0x8;
	}
	inline bool SetbTreatAsDialogue(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bAttach()
	{
		return boolFieldA8& 0x10;
	}
	inline bool SetbAttach(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackSound = sizeof(UInterpTrackSound); // 176
    static_assert(sizeof(UInterpTrackSound) == 0xB0, "Size of UInterpTrackSound is not correct.");
	auto constexpr UInterpTrackSound_Sounds_Offset = offsetof(UInterpTrackSound, Sounds);
	static_assert(UInterpTrackSound_Sounds_Offset == 0x98, "UInterpTrackSound::Sounds offset is not 98");
	auto constexpr UInterpTrackSound_boolFieldA8_Offset = offsetof(UInterpTrackSound, boolFieldA8);
	static_assert(UInterpTrackSound_boolFieldA8_Offset == 0xa8, "UInterpTrackSound::boolFieldA8 offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
