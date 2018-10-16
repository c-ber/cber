#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLevelSequenceObject // Size: 0x38
{
public:
    TLazyObjectPtr<ExternalPtr<struct UObject>> ObjectOrOwner; /* Ofs: 0x0 Size: 0x1C LazyObjectProperty LevelSequence.LevelSequenceObject.ObjectOrOwner */
    uint8_t UnknownData1C[0x4];
    FString ComponentName; /* Ofs: 0x20 Size: 0x10 StrProperty LevelSequence.LevelSequenceObject.ComponentName */
    TWeakObjectPtr<ExternalPtr<struct UObject>> CachedComponent; /* Ofs: 0x30 Size: 0x8 WeakObjectProperty LevelSequence.LevelSequenceObject.CachedComponent */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLevelSequenceObject = sizeof(FLevelSequenceObject); // 56
    static_assert(sizeof(FLevelSequenceObject) == 0x38, "Size of FLevelSequenceObject is not correct.");
	auto constexpr FLevelSequenceObject_ObjectOrOwner_Offset = offsetof(FLevelSequenceObject, ObjectOrOwner);
	static_assert(FLevelSequenceObject_ObjectOrOwner_Offset == 0x0, "FLevelSequenceObject::ObjectOrOwner offset is not 0");
	auto constexpr FLevelSequenceObject_ComponentName_Offset = offsetof(FLevelSequenceObject, ComponentName);
	static_assert(FLevelSequenceObject_ComponentName_Offset == 0x20, "FLevelSequenceObject::ComponentName offset is not 20");
	auto constexpr FLevelSequenceObject_CachedComponent_Offset = offsetof(FLevelSequenceObject, CachedComponent);
	static_assert(FLevelSequenceObject_CachedComponent_Offset == 0x30, "FLevelSequenceObject::CachedComponent offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
