#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAIStimulus // Size: 0x48
{
public:
    float Age; /* Ofs: 0x0 Size: 0x4 FloatProperty AIModule.AIStimulus.Age */
    float ExpirationAge; /* Ofs: 0x4 Size: 0x4 FloatProperty AIModule.AIStimulus.ExpirationAge */
    float Strength; /* Ofs: 0x8 Size: 0x4 FloatProperty AIModule.AIStimulus.Strength */
    FVector StimulusLocation; /* Ofs: 0xC Size: 0xC StructProperty AIModule.AIStimulus.StimulusLocation */
    FVector ReceiverLocation; /* Ofs: 0x18 Size: 0xC StructProperty AIModule.AIStimulus.ReceiverLocation */
    uint8_t UnknownData24[0x4];
    FName Tag; /* Ofs: 0x28 Size: 0x8 NameProperty AIModule.AIStimulus.Tag */
    uint8_t UnknownData30[0x10];
    bool bSuccessfullySensed; /* Ofs: 0x40 Size: 0x1 BitMask: 02 BoolProperty AIModule.AIStimulus.bSuccessfullySensed */
    uint8_t UnknownData41[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAIStimulus = sizeof(FAIStimulus); // 72
    static_assert(sizeof(FAIStimulus) == 0x48, "Size of FAIStimulus is not correct.");
	auto constexpr FAIStimulus_Age_Offset = offsetof(FAIStimulus, Age);
	static_assert(FAIStimulus_Age_Offset == 0x0, "FAIStimulus::Age offset is not 0");
	auto constexpr FAIStimulus_ExpirationAge_Offset = offsetof(FAIStimulus, ExpirationAge);
	static_assert(FAIStimulus_ExpirationAge_Offset == 0x4, "FAIStimulus::ExpirationAge offset is not 4");
	auto constexpr FAIStimulus_Strength_Offset = offsetof(FAIStimulus, Strength);
	static_assert(FAIStimulus_Strength_Offset == 0x8, "FAIStimulus::Strength offset is not 8");
	auto constexpr FAIStimulus_StimulusLocation_Offset = offsetof(FAIStimulus, StimulusLocation);
	static_assert(FAIStimulus_StimulusLocation_Offset == 0xc, "FAIStimulus::StimulusLocation offset is not c");
	auto constexpr FAIStimulus_ReceiverLocation_Offset = offsetof(FAIStimulus, ReceiverLocation);
	static_assert(FAIStimulus_ReceiverLocation_Offset == 0x18, "FAIStimulus::ReceiverLocation offset is not 18");
	auto constexpr FAIStimulus_Tag_Offset = offsetof(FAIStimulus, Tag);
	static_assert(FAIStimulus_Tag_Offset == 0x28, "FAIStimulus::Tag offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
