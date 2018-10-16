#pragma once
#include "EAnimLinkMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimLinkableElement // Size: 0x30
{
public:
    uint8_t UnknownData0[0x8];
    ExternalPtr<struct UAnimMontage> LinkedMontage; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.AnimLinkableElement.LinkedMontage */
    int32_t SlotIndex; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.AnimLinkableElement.SlotIndex */
    int32_t SegmentIndex; /* Ofs: 0x14 Size: 0x4 IntProperty Engine.AnimLinkableElement.SegmentIndex */
    TEnumAsByte<enum EAnimLinkMethod> LinkMethod; /* Ofs: 0x18 Size: 0x1 ByteProperty Engine.AnimLinkableElement.LinkMethod */
    TEnumAsByte<enum EAnimLinkMethod> CachedLinkMethod; /* Ofs: 0x19 Size: 0x1 ByteProperty Engine.AnimLinkableElement.CachedLinkMethod */
    uint8_t UnknownData1A[0x2];
    float SegmentBeginTime; /* Ofs: 0x1C Size: 0x4 FloatProperty Engine.AnimLinkableElement.SegmentBeginTime */
    float SegmentLength; /* Ofs: 0x20 Size: 0x4 FloatProperty Engine.AnimLinkableElement.SegmentLength */
    float LinkValue; /* Ofs: 0x24 Size: 0x4 FloatProperty Engine.AnimLinkableElement.LinkValue */
    ExternalPtr<struct UAnimSequenceBase> LinkedSequence; /* Ofs: 0x28 Size: 0x8 ObjectProperty Engine.AnimLinkableElement.LinkedSequence */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimLinkableElement = sizeof(FAnimLinkableElement); // 48
    static_assert(sizeof(FAnimLinkableElement) == 0x30, "Size of FAnimLinkableElement is not correct.");
	auto constexpr FAnimLinkableElement_LinkedMontage_Offset = offsetof(FAnimLinkableElement, LinkedMontage);
	static_assert(FAnimLinkableElement_LinkedMontage_Offset == 0x8, "FAnimLinkableElement::LinkedMontage offset is not 8");
	auto constexpr FAnimLinkableElement_SlotIndex_Offset = offsetof(FAnimLinkableElement, SlotIndex);
	static_assert(FAnimLinkableElement_SlotIndex_Offset == 0x10, "FAnimLinkableElement::SlotIndex offset is not 10");
	auto constexpr FAnimLinkableElement_SegmentIndex_Offset = offsetof(FAnimLinkableElement, SegmentIndex);
	static_assert(FAnimLinkableElement_SegmentIndex_Offset == 0x14, "FAnimLinkableElement::SegmentIndex offset is not 14");
	auto constexpr FAnimLinkableElement_LinkMethod_Offset = offsetof(FAnimLinkableElement, LinkMethod);
	static_assert(FAnimLinkableElement_LinkMethod_Offset == 0x18, "FAnimLinkableElement::LinkMethod offset is not 18");
	auto constexpr FAnimLinkableElement_CachedLinkMethod_Offset = offsetof(FAnimLinkableElement, CachedLinkMethod);
	static_assert(FAnimLinkableElement_CachedLinkMethod_Offset == 0x19, "FAnimLinkableElement::CachedLinkMethod offset is not 19");
	auto constexpr FAnimLinkableElement_SegmentBeginTime_Offset = offsetof(FAnimLinkableElement, SegmentBeginTime);
	static_assert(FAnimLinkableElement_SegmentBeginTime_Offset == 0x1c, "FAnimLinkableElement::SegmentBeginTime offset is not 1c");
	auto constexpr FAnimLinkableElement_SegmentLength_Offset = offsetof(FAnimLinkableElement, SegmentLength);
	static_assert(FAnimLinkableElement_SegmentLength_Offset == 0x20, "FAnimLinkableElement::SegmentLength offset is not 20");
	auto constexpr FAnimLinkableElement_LinkValue_Offset = offsetof(FAnimLinkableElement, LinkValue);
	static_assert(FAnimLinkableElement_LinkValue_Offset == 0x24, "FAnimLinkableElement::LinkValue offset is not 24");
	auto constexpr FAnimLinkableElement_LinkedSequence_Offset = offsetof(FAnimLinkableElement, LinkedSequence);
	static_assert(FAnimLinkableElement_LinkedSequence_Offset == 0x28, "FAnimLinkableElement::LinkedSequence offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
