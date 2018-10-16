#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPostProcessEffectParameter // Size: 0x18
{
public:
    FString Name; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.PostProcessEffectParameter.Name */
    float Value; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.PostProcessEffectParameter.Value */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPostProcessEffectParameter = sizeof(FPostProcessEffectParameter); // 24
    static_assert(sizeof(FPostProcessEffectParameter) == 0x18, "Size of FPostProcessEffectParameter is not correct.");
	auto constexpr FPostProcessEffectParameter_Name_Offset = offsetof(FPostProcessEffectParameter, Name);
	static_assert(FPostProcessEffectParameter_Name_Offset == 0x0, "FPostProcessEffectParameter::Name offset is not 0");
	auto constexpr FPostProcessEffectParameter_Value_Offset = offsetof(FPostProcessEffectParameter, Value);
	static_assert(FPostProcessEffectParameter_Value_Offset == 0x10, "FPostProcessEffectParameter::Value offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
