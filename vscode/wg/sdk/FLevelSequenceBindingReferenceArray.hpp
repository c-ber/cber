#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLevelSequenceBindingReferenceArray // Size: 0x10
{
public:
    TArray<struct FLevelSequenceBindingReference> References; /* Ofs: 0x0 Size: 0x10 ArrayProperty LevelSequence.LevelSequenceBindingReferenceArray.References */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLevelSequenceBindingReferenceArray = sizeof(FLevelSequenceBindingReferenceArray); // 16
    static_assert(sizeof(FLevelSequenceBindingReferenceArray) == 0x10, "Size of FLevelSequenceBindingReferenceArray is not correct.");
	auto constexpr FLevelSequenceBindingReferenceArray_References_Offset = offsetof(FLevelSequenceBindingReferenceArray, References);
	static_assert(FLevelSequenceBindingReferenceArray_References_Offset == 0x0, "FLevelSequenceBindingReferenceArray::References offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
