#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FActorSequenceObjectReferences // Size: 0x10
{
public:
    TArray<struct FActorSequenceObjectReference> Array; /* Ofs: 0x0 Size: 0x10 ArrayProperty ActorSequence.ActorSequenceObjectReferences.Array */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFActorSequenceObjectReferences = sizeof(FActorSequenceObjectReferences); // 16
    static_assert(sizeof(FActorSequenceObjectReferences) == 0x10, "Size of FActorSequenceObjectReferences is not correct.");
	auto constexpr FActorSequenceObjectReferences_Array_Offset = offsetof(FActorSequenceObjectReferences, Array);
	static_assert(FActorSequenceObjectReferences_Array_Offset == 0x0, "FActorSequenceObjectReferences::Array offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
