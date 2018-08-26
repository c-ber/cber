#pragma once
#include "FAnimLinkableElement.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCompositeSection // Size: 0x58
 : public FAnimLinkableElement // Size: 0x30
{
public:
    FName SectionName; /* Ofs: 0x30 Size: 0x8 NameProperty Engine.CompositeSection.SectionName */
    float StartTime; /* Ofs: 0x38 Size: 0x4 FloatProperty Engine.CompositeSection.StartTime */
    uint8_t UnknownData3C[0x4];
    FName NextSectionName; /* Ofs: 0x40 Size: 0x8 NameProperty Engine.CompositeSection.NextSectionName */
    TArray<ExternalPtr<struct UAnimMetaData>> MetaData; /* Ofs: 0x48 Size: 0x10 ArrayProperty Engine.CompositeSection.MetaData */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCompositeSection = sizeof(FCompositeSection); // 88
    static_assert(sizeof(FCompositeSection) == 0x58, "Size of FCompositeSection is not correct.");
	auto constexpr FCompositeSection_SectionName_Offset = offsetof(FCompositeSection, SectionName);
	static_assert(FCompositeSection_SectionName_Offset == 0x30, "FCompositeSection::SectionName offset is not 30");
	auto constexpr FCompositeSection_StartTime_Offset = offsetof(FCompositeSection, StartTime);
	static_assert(FCompositeSection_StartTime_Offset == 0x38, "FCompositeSection::StartTime offset is not 38");
	auto constexpr FCompositeSection_NextSectionName_Offset = offsetof(FCompositeSection, NextSectionName);
	static_assert(FCompositeSection_NextSectionName_Offset == 0x40, "FCompositeSection::NextSectionName offset is not 40");
	auto constexpr FCompositeSection_MetaData_Offset = offsetof(FCompositeSection, MetaData);
	static_assert(FCompositeSection_MetaData_Offset == 0x48, "FCompositeSection::MetaData offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
