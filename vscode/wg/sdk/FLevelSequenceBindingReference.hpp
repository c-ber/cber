#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLevelSequenceBindingReference // Size: 0x20
{
public:
    FString PackageName; /* Ofs: 0x0 Size: 0x10 StrProperty LevelSequence.LevelSequenceBindingReference.PackageName */
    FString ObjectPath; /* Ofs: 0x10 Size: 0x10 StrProperty LevelSequence.LevelSequenceBindingReference.ObjectPath */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLevelSequenceBindingReference = sizeof(FLevelSequenceBindingReference); // 32
    static_assert(sizeof(FLevelSequenceBindingReference) == 0x20, "Size of FLevelSequenceBindingReference is not correct.");
	auto constexpr FLevelSequenceBindingReference_PackageName_Offset = offsetof(FLevelSequenceBindingReference, PackageName);
	static_assert(FLevelSequenceBindingReference_PackageName_Offset == 0x0, "FLevelSequenceBindingReference::PackageName offset is not 0");
	auto constexpr FLevelSequenceBindingReference_ObjectPath_Offset = offsetof(FLevelSequenceBindingReference, ObjectPath);
	static_assert(FLevelSequenceBindingReference_ObjectPath_Offset == 0x10, "FLevelSequenceBindingReference::ObjectPath offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
