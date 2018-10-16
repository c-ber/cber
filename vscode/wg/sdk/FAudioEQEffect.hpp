#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAudioEQEffect // Size: 0x38
{
public:
    uint8_t UnknownData0[0x8];
    float FrequencyCenter0; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.AudioEQEffect.FrequencyCenter0 */
    float Gain0; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.AudioEQEffect.Gain0 */
    float Bandwidth0; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.AudioEQEffect.Bandwidth0 */
    float FrequencyCenter1; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.AudioEQEffect.FrequencyCenter1 */
    float Gain1; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.AudioEQEffect.Gain1 */
    float Bandwidth1; /* Ofs: 0x1C Size: 0x4 FloatProperty Engine.AudioEQEffect.Bandwidth1 */
    float FrequencyCenter2; /* Ofs: 0x20 Size: 0x4 FloatProperty Engine.AudioEQEffect.FrequencyCenter2 */
    float Gain2; /* Ofs: 0x24 Size: 0x4 FloatProperty Engine.AudioEQEffect.Gain2 */
    float Bandwidth2; /* Ofs: 0x28 Size: 0x4 FloatProperty Engine.AudioEQEffect.Bandwidth2 */
    float FrequencyCenter3; /* Ofs: 0x2C Size: 0x4 FloatProperty Engine.AudioEQEffect.FrequencyCenter3 */
    float Gain3; /* Ofs: 0x30 Size: 0x4 FloatProperty Engine.AudioEQEffect.Gain3 */
    float Bandwidth3; /* Ofs: 0x34 Size: 0x4 FloatProperty Engine.AudioEQEffect.Bandwidth3 */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAudioEQEffect = sizeof(FAudioEQEffect); // 56
    static_assert(sizeof(FAudioEQEffect) == 0x38, "Size of FAudioEQEffect is not correct.");
	auto constexpr FAudioEQEffect_FrequencyCenter0_Offset = offsetof(FAudioEQEffect, FrequencyCenter0);
	static_assert(FAudioEQEffect_FrequencyCenter0_Offset == 0x8, "FAudioEQEffect::FrequencyCenter0 offset is not 8");
	auto constexpr FAudioEQEffect_Gain0_Offset = offsetof(FAudioEQEffect, Gain0);
	static_assert(FAudioEQEffect_Gain0_Offset == 0xc, "FAudioEQEffect::Gain0 offset is not c");
	auto constexpr FAudioEQEffect_Bandwidth0_Offset = offsetof(FAudioEQEffect, Bandwidth0);
	static_assert(FAudioEQEffect_Bandwidth0_Offset == 0x10, "FAudioEQEffect::Bandwidth0 offset is not 10");
	auto constexpr FAudioEQEffect_FrequencyCenter1_Offset = offsetof(FAudioEQEffect, FrequencyCenter1);
	static_assert(FAudioEQEffect_FrequencyCenter1_Offset == 0x14, "FAudioEQEffect::FrequencyCenter1 offset is not 14");
	auto constexpr FAudioEQEffect_Gain1_Offset = offsetof(FAudioEQEffect, Gain1);
	static_assert(FAudioEQEffect_Gain1_Offset == 0x18, "FAudioEQEffect::Gain1 offset is not 18");
	auto constexpr FAudioEQEffect_Bandwidth1_Offset = offsetof(FAudioEQEffect, Bandwidth1);
	static_assert(FAudioEQEffect_Bandwidth1_Offset == 0x1c, "FAudioEQEffect::Bandwidth1 offset is not 1c");
	auto constexpr FAudioEQEffect_FrequencyCenter2_Offset = offsetof(FAudioEQEffect, FrequencyCenter2);
	static_assert(FAudioEQEffect_FrequencyCenter2_Offset == 0x20, "FAudioEQEffect::FrequencyCenter2 offset is not 20");
	auto constexpr FAudioEQEffect_Gain2_Offset = offsetof(FAudioEQEffect, Gain2);
	static_assert(FAudioEQEffect_Gain2_Offset == 0x24, "FAudioEQEffect::Gain2 offset is not 24");
	auto constexpr FAudioEQEffect_Bandwidth2_Offset = offsetof(FAudioEQEffect, Bandwidth2);
	static_assert(FAudioEQEffect_Bandwidth2_Offset == 0x28, "FAudioEQEffect::Bandwidth2 offset is not 28");
	auto constexpr FAudioEQEffect_FrequencyCenter3_Offset = offsetof(FAudioEQEffect, FrequencyCenter3);
	static_assert(FAudioEQEffect_FrequencyCenter3_Offset == 0x2c, "FAudioEQEffect::FrequencyCenter3 offset is not 2c");
	auto constexpr FAudioEQEffect_Gain3_Offset = offsetof(FAudioEQEffect, Gain3);
	static_assert(FAudioEQEffect_Gain3_Offset == 0x30, "FAudioEQEffect::Gain3 offset is not 30");
	auto constexpr FAudioEQEffect_Bandwidth3_Offset = offsetof(FAudioEQEffect, Bandwidth3);
	static_assert(FAudioEQEffect_Bandwidth3_Offset == 0x34, "FAudioEQEffect::Bandwidth3 offset is not 34");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
