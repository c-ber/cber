#pragma once
#include "UHapticFeedbackEffect_Base.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHapticFeedbackEffect_Buffer // Size: 0x70
	: public UHapticFeedbackEffect_Base // Size: 0x30
{
private:
	typedef UHapticFeedbackEffect_Buffer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(779); // id32("Class Engine.HapticFeedbackEffect_Buffer")
		return ptr;
	}
	TArray<uint8_t> Amplitudes; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.HapticFeedbackEffect_Buffer.Amplitudes */
	int32_t SampleRate; /* Ofs: 0x40 Size: 0x4 - IntProperty Engine.HapticFeedbackEffect_Buffer.SampleRate */
	uint8_t UnknownData44[0x2C];


	inline bool SetAmplitudes(t_structHelper inst, TArray<uint8_t> value) { inst.WriteOffset(0x30, value); }
	inline bool SetSampleRate(t_structHelper inst, int32_t value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHapticFeedbackEffect_Buffer = sizeof(UHapticFeedbackEffect_Buffer); // 112
    static_assert(sizeof(UHapticFeedbackEffect_Buffer) == 0x70, "Size of UHapticFeedbackEffect_Buffer is not correct.");
	auto constexpr UHapticFeedbackEffect_Buffer_Amplitudes_Offset = offsetof(UHapticFeedbackEffect_Buffer, Amplitudes);
	static_assert(UHapticFeedbackEffect_Buffer_Amplitudes_Offset == 0x30, "UHapticFeedbackEffect_Buffer::Amplitudes offset is not 30");
	auto constexpr UHapticFeedbackEffect_Buffer_SampleRate_Offset = offsetof(UHapticFeedbackEffect_Buffer, SampleRate);
	static_assert(UHapticFeedbackEffect_Buffer_SampleRate_Offset == 0x40, "UHapticFeedbackEffect_Buffer::SampleRate offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
