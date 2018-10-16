#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleSystemReplay // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UParticleSystemReplay t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1171); // id32("Class Engine.ParticleSystemReplay")
		return ptr;
	}
	int32_t ClipIDNumber; /* Ofs: 0x30 Size: 0x4 - IntProperty Engine.ParticleSystemReplay.ClipIDNumber */
	uint8_t UnknownData34[0x14];


	inline bool SetClipIDNumber(t_structHelper inst, int32_t value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleSystemReplay = sizeof(UParticleSystemReplay); // 72
    static_assert(sizeof(UParticleSystemReplay) == 0x48, "Size of UParticleSystemReplay is not correct.");
	auto constexpr UParticleSystemReplay_ClipIDNumber_Offset = offsetof(UParticleSystemReplay, ClipIDNumber);
	static_assert(UParticleSystemReplay_ClipIDNumber_Offset == 0x30, "UParticleSystemReplay::ClipIDNumber offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
