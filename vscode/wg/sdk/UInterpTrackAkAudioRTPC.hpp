#pragma once
#include "UInterpTrackFloatBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackAkAudioRTPC // Size: 0xB0
	: public UInterpTrackFloatBase // Size: 0x98
{
private:
	typedef UInterpTrackAkAudioRTPC t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2143); // id32("Class AkAudio.InterpTrackAkAudioRTPC")
		return ptr;
	}
	FString Param; /* Ofs: 0x98 Size: 0x10 - StrProperty AkAudio.InterpTrackAkAudioRTPC.Param */
	uint8_t boolFieldA8;
	uint8_t UnknownDataA9[0x7];


	inline bool SetParam(t_structHelper inst, FString value) { inst.WriteOffset(0x98, value); }
	inline bool bPlayOnReverse()
	{
		return boolFieldA8& 0x1;
	}
	inline bool SetbPlayOnReverse(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bContinueRTPCOnMatineeEnd()
	{
		return boolFieldA8& 0x2;
	}
	inline bool SetbContinueRTPCOnMatineeEnd(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackAkAudioRTPC = sizeof(UInterpTrackAkAudioRTPC); // 176
    static_assert(sizeof(UInterpTrackAkAudioRTPC) == 0xB0, "Size of UInterpTrackAkAudioRTPC is not correct.");
	auto constexpr UInterpTrackAkAudioRTPC_Param_Offset = offsetof(UInterpTrackAkAudioRTPC, Param);
	static_assert(UInterpTrackAkAudioRTPC_Param_Offset == 0x98, "UInterpTrackAkAudioRTPC::Param offset is not 98");
	auto constexpr UInterpTrackAkAudioRTPC_boolFieldA8_Offset = offsetof(UInterpTrackAkAudioRTPC, boolFieldA8);
	static_assert(UInterpTrackAkAudioRTPC_boolFieldA8_Offset == 0xa8, "UInterpTrackAkAudioRTPC::boolFieldA8 offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
