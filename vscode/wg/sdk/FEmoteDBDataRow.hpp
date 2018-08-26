#pragma once
#include "FTableRowBase.hpp"
#include "EEmoteAnimType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEmoteDBDataRow // Size: 0x50
 : public FTableRowBase // Size: 0x8
{
public:
    int32_t EmoteID; /* Ofs: 0x8 Size: 0x4 IntProperty TslGame.EmoteDBDataRow.EmoteID */
    uint8_t UnknownDataC[0x4];
    FText EmoteLocalizedName; /* Ofs: 0x10 Size: 0x18 TextProperty TslGame.EmoteDBDataRow.EmoteLocalizedName */
    ExternalPtr<struct UTexture2D> UITexture; /* Ofs: 0x28 Size: 0x8 ObjectProperty TslGame.EmoteDBDataRow.UITexture */
    ExternalPtr<struct UMaterialInterface> UIMaterial; /* Ofs: 0x30 Size: 0x8 ObjectProperty TslGame.EmoteDBDataRow.UIMaterial */
    ExternalPtr<struct UAnimMontage> AnimMontage; /* Ofs: 0x38 Size: 0x8 ObjectProperty TslGame.EmoteDBDataRow.AnimMontage */
    TEnumAsByte<enum EEmoteAnimType> AnimType; /* Ofs: 0x40 Size: 0x1 EnumProperty TslGame.EmoteDBDataRow.AnimType */
    bool bIsRotationAllowed; /* Ofs: 0x41 Size: 0x1 BitMask: 01 BoolProperty TslGame.EmoteDBDataRow.bIsRotationAllowed */
    bool bIsLoopable; /* Ofs: 0x42 Size: 0x1 BitMask: 01 BoolProperty TslGame.EmoteDBDataRow.bIsLoopable */
    bool bIsRNG; /* Ofs: 0x43 Size: 0x1 BitMask: 01 BoolProperty TslGame.EmoteDBDataRow.bIsRNG */
    bool bIsCooperative; /* Ofs: 0x44 Size: 0x1 BitMask: 01 BoolProperty TslGame.EmoteDBDataRow.bIsCooperative */
    uint8_t UnknownData45[0x3];
    ExternalPtr<struct UTslEmoteTraceData> TraceDataRef; /* Ofs: 0x48 Size: 0x8 ObjectProperty TslGame.EmoteDBDataRow.TraceDataRef */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEmoteDBDataRow = sizeof(FEmoteDBDataRow); // 80
    static_assert(sizeof(FEmoteDBDataRow) == 0x50, "Size of FEmoteDBDataRow is not correct.");
	auto constexpr FEmoteDBDataRow_EmoteID_Offset = offsetof(FEmoteDBDataRow, EmoteID);
	static_assert(FEmoteDBDataRow_EmoteID_Offset == 0x8, "FEmoteDBDataRow::EmoteID offset is not 8");
	auto constexpr FEmoteDBDataRow_EmoteLocalizedName_Offset = offsetof(FEmoteDBDataRow, EmoteLocalizedName);
	static_assert(FEmoteDBDataRow_EmoteLocalizedName_Offset == 0x10, "FEmoteDBDataRow::EmoteLocalizedName offset is not 10");
	auto constexpr FEmoteDBDataRow_UITexture_Offset = offsetof(FEmoteDBDataRow, UITexture);
	static_assert(FEmoteDBDataRow_UITexture_Offset == 0x28, "FEmoteDBDataRow::UITexture offset is not 28");
	auto constexpr FEmoteDBDataRow_UIMaterial_Offset = offsetof(FEmoteDBDataRow, UIMaterial);
	static_assert(FEmoteDBDataRow_UIMaterial_Offset == 0x30, "FEmoteDBDataRow::UIMaterial offset is not 30");
	auto constexpr FEmoteDBDataRow_AnimMontage_Offset = offsetof(FEmoteDBDataRow, AnimMontage);
	static_assert(FEmoteDBDataRow_AnimMontage_Offset == 0x38, "FEmoteDBDataRow::AnimMontage offset is not 38");
	auto constexpr FEmoteDBDataRow_AnimType_Offset = offsetof(FEmoteDBDataRow, AnimType);
	static_assert(FEmoteDBDataRow_AnimType_Offset == 0x40, "FEmoteDBDataRow::AnimType offset is not 40");
	auto constexpr FEmoteDBDataRow_TraceDataRef_Offset = offsetof(FEmoteDBDataRow, TraceDataRef);
	static_assert(FEmoteDBDataRow_TraceDataRef_Offset == 0x48, "FEmoteDBDataRow::TraceDataRef offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
