#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UForceFeedbackEffect // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UForceFeedbackEffect t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1383); // id32("Class Engine.ForceFeedbackEffect")
		return ptr;
	}
	TArray<struct FForceFeedbackChannelDetails> ChannelDetails; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.ForceFeedbackEffect.ChannelDetails */
	float Duration; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.ForceFeedbackEffect.Duration */
	uint8_t UnknownData44[0x4];


	inline bool SetChannelDetails(t_structHelper inst, TArray<struct FForceFeedbackChannelDetails> value) { inst.WriteOffset(0x30, value); }
	inline bool SetDuration(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUForceFeedbackEffect = sizeof(UForceFeedbackEffect); // 72
    static_assert(sizeof(UForceFeedbackEffect) == 0x48, "Size of UForceFeedbackEffect is not correct.");
	auto constexpr UForceFeedbackEffect_ChannelDetails_Offset = offsetof(UForceFeedbackEffect, ChannelDetails);
	static_assert(UForceFeedbackEffect_ChannelDetails_Offset == 0x30, "UForceFeedbackEffect::ChannelDetails offset is not 30");
	auto constexpr UForceFeedbackEffect_Duration_Offset = offsetof(UForceFeedbackEffect, Duration);
	static_assert(UForceFeedbackEffect_Duration_Offset == 0x40, "UForceFeedbackEffect::Duration offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
