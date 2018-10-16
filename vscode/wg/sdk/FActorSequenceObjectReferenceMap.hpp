#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FActorSequenceObjectReferenceMap // Size: 0x20
{
public:
    TArray<struct FGuid> BindingIds; /* Ofs: 0x0 Size: 0x10 ArrayProperty ActorSequence.ActorSequenceObjectReferenceMap.BindingIds */
    TArray<struct FActorSequenceObjectReferences> References; /* Ofs: 0x10 Size: 0x10 ArrayProperty ActorSequence.ActorSequenceObjectReferenceMap.References */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFActorSequenceObjectReferenceMap = sizeof(FActorSequenceObjectReferenceMap); // 32
    static_assert(sizeof(FActorSequenceObjectReferenceMap) == 0x20, "Size of FActorSequenceObjectReferenceMap is not correct.");
	auto constexpr FActorSequenceObjectReferenceMap_BindingIds_Offset = offsetof(FActorSequenceObjectReferenceMap, BindingIds);
	static_assert(FActorSequenceObjectReferenceMap_BindingIds_Offset == 0x0, "FActorSequenceObjectReferenceMap::BindingIds offset is not 0");
	auto constexpr FActorSequenceObjectReferenceMap_References_Offset = offsetof(FActorSequenceObjectReferenceMap, References);
	static_assert(FActorSequenceObjectReferenceMap_References_Offset == 0x10, "FActorSequenceObjectReferenceMap::References offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
