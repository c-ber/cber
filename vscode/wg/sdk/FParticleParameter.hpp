#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FParticleParameter // Size: 0x18
{
public:
    FString Name; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.ParticleParameter.Name */
    float Value; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.ParticleParameter.Value */
    bool bEnableRTPC; /* Ofs: 0x14 Size: 0x1 BitMask: 01 BoolProperty TslGame.ParticleParameter.bEnableRTPC */
    uint8_t UnknownData15[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFParticleParameter = sizeof(FParticleParameter); // 24
    static_assert(sizeof(FParticleParameter) == 0x18, "Size of FParticleParameter is not correct.");
	auto constexpr FParticleParameter_Name_Offset = offsetof(FParticleParameter, Name);
	static_assert(FParticleParameter_Name_Offset == 0x0, "FParticleParameter::Name offset is not 0");
	auto constexpr FParticleParameter_Value_Offset = offsetof(FParticleParameter, Value);
	static_assert(FParticleParameter_Value_Offset == 0x10, "FParticleParameter::Value offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
