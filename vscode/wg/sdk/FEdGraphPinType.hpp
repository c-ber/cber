#pragma once
#include "FSimpleMemberReference.hpp"
#include "FEdGraphTerminalType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEdGraphPinType // Size: 0x80
{
public:
    FString PinCategory; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.EdGraphPinType.PinCategory */
    FString PinSubCategory; /* Ofs: 0x10 Size: 0x10 StrProperty Engine.EdGraphPinType.PinSubCategory */
    TWeakObjectPtr<ExternalPtr<struct UObject>> PinSubCategoryObject; /* Ofs: 0x20 Size: 0x8 WeakObjectProperty Engine.EdGraphPinType.PinSubCategoryObject */
    FSimpleMemberReference PinSubCategoryMemberReference; /* Ofs: 0x28 Size: 0x20 StructProperty Engine.EdGraphPinType.PinSubCategoryMemberReference */
    FEdGraphTerminalType PinValueType; /* Ofs: 0x48 Size: 0x30 StructProperty Engine.EdGraphPinType.PinValueType */
    bool bIsMap; /* Ofs: 0x78 Size: 0x1 BitMask: 01 BoolProperty Engine.EdGraphPinType.bIsMap */
    bool bIsSet; /* Ofs: 0x79 Size: 0x1 BitMask: 01 BoolProperty Engine.EdGraphPinType.bIsSet */
    bool bIsArray; /* Ofs: 0x7A Size: 0x1 BitMask: 01 BoolProperty Engine.EdGraphPinType.bIsArray */
    bool bIsReference; /* Ofs: 0x7B Size: 0x1 BitMask: 01 BoolProperty Engine.EdGraphPinType.bIsReference */
    bool bIsConst; /* Ofs: 0x7C Size: 0x1 BitMask: 01 BoolProperty Engine.EdGraphPinType.bIsConst */
    bool bIsWeakPointer; /* Ofs: 0x7D Size: 0x1 BitMask: 01 BoolProperty Engine.EdGraphPinType.bIsWeakPointer */
    uint8_t UnknownData7E[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEdGraphPinType = sizeof(FEdGraphPinType); // 128
    static_assert(sizeof(FEdGraphPinType) == 0x80, "Size of FEdGraphPinType is not correct.");
	auto constexpr FEdGraphPinType_PinCategory_Offset = offsetof(FEdGraphPinType, PinCategory);
	static_assert(FEdGraphPinType_PinCategory_Offset == 0x0, "FEdGraphPinType::PinCategory offset is not 0");
	auto constexpr FEdGraphPinType_PinSubCategory_Offset = offsetof(FEdGraphPinType, PinSubCategory);
	static_assert(FEdGraphPinType_PinSubCategory_Offset == 0x10, "FEdGraphPinType::PinSubCategory offset is not 10");
	auto constexpr FEdGraphPinType_PinSubCategoryObject_Offset = offsetof(FEdGraphPinType, PinSubCategoryObject);
	static_assert(FEdGraphPinType_PinSubCategoryObject_Offset == 0x20, "FEdGraphPinType::PinSubCategoryObject offset is not 20");
	auto constexpr FEdGraphPinType_PinSubCategoryMemberReference_Offset = offsetof(FEdGraphPinType, PinSubCategoryMemberReference);
	static_assert(FEdGraphPinType_PinSubCategoryMemberReference_Offset == 0x28, "FEdGraphPinType::PinSubCategoryMemberReference offset is not 28");
	auto constexpr FEdGraphPinType_PinValueType_Offset = offsetof(FEdGraphPinType, PinValueType);
	static_assert(FEdGraphPinType_PinValueType_Offset == 0x48, "FEdGraphPinType::PinValueType offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
