#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEdGraphTerminalType // Size: 0x30
{
public:
    FString TerminalCategory; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.EdGraphTerminalType.TerminalCategory */
    FString TerminalSubCategory; /* Ofs: 0x10 Size: 0x10 StrProperty Engine.EdGraphTerminalType.TerminalSubCategory */
    TWeakObjectPtr<ExternalPtr<struct UObject>> TerminalSubCategoryObject; /* Ofs: 0x20 Size: 0x8 WeakObjectProperty Engine.EdGraphTerminalType.TerminalSubCategoryObject */
    bool bTerminalIsConst; /* Ofs: 0x28 Size: 0x1 BitMask: 01 BoolProperty Engine.EdGraphTerminalType.bTerminalIsConst */
    bool bTerminalIsWeakPointer; /* Ofs: 0x29 Size: 0x1 BitMask: 01 BoolProperty Engine.EdGraphTerminalType.bTerminalIsWeakPointer */
    uint8_t UnknownData2A[0x6];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEdGraphTerminalType = sizeof(FEdGraphTerminalType); // 48
    static_assert(sizeof(FEdGraphTerminalType) == 0x30, "Size of FEdGraphTerminalType is not correct.");
	auto constexpr FEdGraphTerminalType_TerminalCategory_Offset = offsetof(FEdGraphTerminalType, TerminalCategory);
	static_assert(FEdGraphTerminalType_TerminalCategory_Offset == 0x0, "FEdGraphTerminalType::TerminalCategory offset is not 0");
	auto constexpr FEdGraphTerminalType_TerminalSubCategory_Offset = offsetof(FEdGraphTerminalType, TerminalSubCategory);
	static_assert(FEdGraphTerminalType_TerminalSubCategory_Offset == 0x10, "FEdGraphTerminalType::TerminalSubCategory offset is not 10");
	auto constexpr FEdGraphTerminalType_TerminalSubCategoryObject_Offset = offsetof(FEdGraphTerminalType, TerminalSubCategoryObject);
	static_assert(FEdGraphTerminalType_TerminalSubCategoryObject_Offset == 0x20, "FEdGraphTerminalType::TerminalSubCategoryObject offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
