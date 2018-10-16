#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlackboardKeySelector // Size: 0x28
{
public:
    TArray<ExternalPtr<struct UBlackboardKeyType>> AllowedTypes; /* Ofs: 0x0 Size: 0x10 ArrayProperty AIModule.BlackboardKeySelector.AllowedTypes */
    FName SelectedKeyName; /* Ofs: 0x10 Size: 0x8 NameProperty AIModule.BlackboardKeySelector.SelectedKeyName */
    ExternalPtr<struct UClass> SelectedKeyType; /* Ofs: 0x18 Size: 0x8 ClassProperty AIModule.BlackboardKeySelector.SelectedKeyType */
    uint8_t SelectedKeyID; /* Ofs: 0x20 Size: 0x1 ByteProperty AIModule.BlackboardKeySelector.SelectedKeyID */
    uint8_t UnknownData21[0x3];
    bool bNoneIsAllowedValue; /* Ofs: 0x24 Size: 0x1 BitMask: 01 BoolProperty AIModule.BlackboardKeySelector.bNoneIsAllowedValue */
    uint8_t UnknownData25[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlackboardKeySelector = sizeof(FBlackboardKeySelector); // 40
    static_assert(sizeof(FBlackboardKeySelector) == 0x28, "Size of FBlackboardKeySelector is not correct.");
	auto constexpr FBlackboardKeySelector_AllowedTypes_Offset = offsetof(FBlackboardKeySelector, AllowedTypes);
	static_assert(FBlackboardKeySelector_AllowedTypes_Offset == 0x0, "FBlackboardKeySelector::AllowedTypes offset is not 0");
	auto constexpr FBlackboardKeySelector_SelectedKeyName_Offset = offsetof(FBlackboardKeySelector, SelectedKeyName);
	static_assert(FBlackboardKeySelector_SelectedKeyName_Offset == 0x10, "FBlackboardKeySelector::SelectedKeyName offset is not 10");
	auto constexpr FBlackboardKeySelector_SelectedKeyType_Offset = offsetof(FBlackboardKeySelector, SelectedKeyType);
	static_assert(FBlackboardKeySelector_SelectedKeyType_Offset == 0x18, "FBlackboardKeySelector::SelectedKeyType offset is not 18");
	auto constexpr FBlackboardKeySelector_SelectedKeyID_Offset = offsetof(FBlackboardKeySelector, SelectedKeyID);
	static_assert(FBlackboardKeySelector_SelectedKeyID_Offset == 0x20, "FBlackboardKeySelector::SelectedKeyID offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
