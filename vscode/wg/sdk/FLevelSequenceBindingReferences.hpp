#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLevelSequenceBindingReferences // Size: 0x50
{
public:
    TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences; /* Ofs: 0x0 Size: 0x50 MapProperty LevelSequence.LevelSequenceBindingReferences.BindingIdToReferences */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLevelSequenceBindingReferences = sizeof(FLevelSequenceBindingReferences); // 80
    static_assert(sizeof(FLevelSequenceBindingReferences) == 0x50, "Size of FLevelSequenceBindingReferences is not correct.");
	auto constexpr FLevelSequenceBindingReferences_BindingIdToReferences_Offset = offsetof(FLevelSequenceBindingReferences, BindingIdToReferences);
	static_assert(FLevelSequenceBindingReferences_BindingIdToReferences_Offset == 0x0, "FLevelSequenceBindingReferences::BindingIdToReferences offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
