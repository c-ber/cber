#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlackboardEntry // Size: 0x18
{
public:
    FName EntryName; /* Ofs: 0x0 Size: 0x8 NameProperty AIModule.BlackboardEntry.EntryName */
    ExternalPtr<struct UBlackboardKeyType> KeyType; /* Ofs: 0x8 Size: 0x8 ObjectProperty AIModule.BlackboardEntry.KeyType */
    bool bInstanceSynced; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty AIModule.BlackboardEntry.bInstanceSynced */
    uint8_t UnknownData11[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlackboardEntry = sizeof(FBlackboardEntry); // 24
    static_assert(sizeof(FBlackboardEntry) == 0x18, "Size of FBlackboardEntry is not correct.");
	auto constexpr FBlackboardEntry_EntryName_Offset = offsetof(FBlackboardEntry, EntryName);
	static_assert(FBlackboardEntry_EntryName_Offset == 0x0, "FBlackboardEntry::EntryName offset is not 0");
	auto constexpr FBlackboardEntry_KeyType_Offset = offsetof(FBlackboardEntry, KeyType);
	static_assert(FBlackboardEntry_KeyType_Offset == 0x8, "FBlackboardEntry::KeyType offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
