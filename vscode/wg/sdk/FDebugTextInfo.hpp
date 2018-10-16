#pragma once
#include "FVector.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDebugTextInfo // Size: 0x60
{
public:
    ExternalPtr<struct UActor> SrcActor; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.DebugTextInfo.SrcActor */
    FVector SrcActorOffset; /* Ofs: 0x8 Size: 0xC StructProperty Engine.DebugTextInfo.SrcActorOffset */
    FVector SrcActorDesiredOffset; /* Ofs: 0x14 Size: 0xC StructProperty Engine.DebugTextInfo.SrcActorDesiredOffset */
    FString DebugText; /* Ofs: 0x20 Size: 0x10 StrProperty Engine.DebugTextInfo.DebugText */
    float TimeRemaining; /* Ofs: 0x30 Size: 0x4 FloatProperty Engine.DebugTextInfo.TimeRemaining */
    float Duration; /* Ofs: 0x34 Size: 0x4 FloatProperty Engine.DebugTextInfo.Duration */
    FColor TextColor; /* Ofs: 0x38 Size: 0x4 StructProperty Engine.DebugTextInfo.TextColor */
    bool bAbsoluteLocation : 1; /* Ofs: 0x3C Size: 0x1 BitMask: 01 BoolProperty Engine.DebugTextInfo.bAbsoluteLocation */
    bool bKeepAttachedToActor : 1; /* Ofs: 0x3C Size: 0x1 BitMask: 02 BoolProperty Engine.DebugTextInfo.bKeepAttachedToActor */
    bool bDrawShadow : 1; /* Ofs: 0x3C Size: 0x1 BitMask: 04 BoolProperty Engine.DebugTextInfo.bDrawShadow */
    uint8_t UnknownData3D[0x3];
    FVector OrigActorLocation; /* Ofs: 0x40 Size: 0xC StructProperty Engine.DebugTextInfo.OrigActorLocation */
    uint8_t UnknownData4C[0x4];
    ExternalPtr<struct UFont> Font; /* Ofs: 0x50 Size: 0x8 ObjectProperty Engine.DebugTextInfo.Font */
    float FontScale; /* Ofs: 0x58 Size: 0x4 FloatProperty Engine.DebugTextInfo.FontScale */
    uint8_t UnknownData5C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDebugTextInfo = sizeof(FDebugTextInfo); // 96
    static_assert(sizeof(FDebugTextInfo) == 0x60, "Size of FDebugTextInfo is not correct.");
	auto constexpr FDebugTextInfo_SrcActor_Offset = offsetof(FDebugTextInfo, SrcActor);
	static_assert(FDebugTextInfo_SrcActor_Offset == 0x0, "FDebugTextInfo::SrcActor offset is not 0");
	auto constexpr FDebugTextInfo_SrcActorOffset_Offset = offsetof(FDebugTextInfo, SrcActorOffset);
	static_assert(FDebugTextInfo_SrcActorOffset_Offset == 0x8, "FDebugTextInfo::SrcActorOffset offset is not 8");
	auto constexpr FDebugTextInfo_SrcActorDesiredOffset_Offset = offsetof(FDebugTextInfo, SrcActorDesiredOffset);
	static_assert(FDebugTextInfo_SrcActorDesiredOffset_Offset == 0x14, "FDebugTextInfo::SrcActorDesiredOffset offset is not 14");
	auto constexpr FDebugTextInfo_DebugText_Offset = offsetof(FDebugTextInfo, DebugText);
	static_assert(FDebugTextInfo_DebugText_Offset == 0x20, "FDebugTextInfo::DebugText offset is not 20");
	auto constexpr FDebugTextInfo_TimeRemaining_Offset = offsetof(FDebugTextInfo, TimeRemaining);
	static_assert(FDebugTextInfo_TimeRemaining_Offset == 0x30, "FDebugTextInfo::TimeRemaining offset is not 30");
	auto constexpr FDebugTextInfo_Duration_Offset = offsetof(FDebugTextInfo, Duration);
	static_assert(FDebugTextInfo_Duration_Offset == 0x34, "FDebugTextInfo::Duration offset is not 34");
	auto constexpr FDebugTextInfo_TextColor_Offset = offsetof(FDebugTextInfo, TextColor);
	static_assert(FDebugTextInfo_TextColor_Offset == 0x38, "FDebugTextInfo::TextColor offset is not 38");
	auto constexpr FDebugTextInfo_OrigActorLocation_Offset = offsetof(FDebugTextInfo, OrigActorLocation);
	static_assert(FDebugTextInfo_OrigActorLocation_Offset == 0x40, "FDebugTextInfo::OrigActorLocation offset is not 40");
	auto constexpr FDebugTextInfo_Font_Offset = offsetof(FDebugTextInfo, Font);
	static_assert(FDebugTextInfo_Font_Offset == 0x50, "FDebugTextInfo::Font offset is not 50");
	auto constexpr FDebugTextInfo_FontScale_Offset = offsetof(FDebugTextInfo, FontScale);
	static_assert(FDebugTextInfo_FontScale_Offset == 0x58, "FDebugTextInfo::FontScale offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
