#pragma once
#include "EActorSequenceObjectReferenceType.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FActorSequenceObjectReference // Size: 0x28
{
public:
    TEnumAsByte<enum EActorSequenceObjectReferenceType> Type; /* Ofs: 0x0 Size: 0x1 EnumProperty ActorSequence.ActorSequenceObjectReference.Type */
    uint8_t UnknownData1[0x3];
    FGuid ActorId; /* Ofs: 0x4 Size: 0x10 StructProperty ActorSequence.ActorSequenceObjectReference.ActorId */
    uint8_t UnknownData14[0x4];
    FString PathToComponent; /* Ofs: 0x18 Size: 0x10 StrProperty ActorSequence.ActorSequenceObjectReference.PathToComponent */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFActorSequenceObjectReference = sizeof(FActorSequenceObjectReference); // 40
    static_assert(sizeof(FActorSequenceObjectReference) == 0x28, "Size of FActorSequenceObjectReference is not correct.");
	auto constexpr FActorSequenceObjectReference_Type_Offset = offsetof(FActorSequenceObjectReference, Type);
	static_assert(FActorSequenceObjectReference_Type_Offset == 0x0, "FActorSequenceObjectReference::Type offset is not 0");
	auto constexpr FActorSequenceObjectReference_ActorId_Offset = offsetof(FActorSequenceObjectReference, ActorId);
	static_assert(FActorSequenceObjectReference_ActorId_Offset == 0x4, "FActorSequenceObjectReference::ActorId offset is not 4");
	auto constexpr FActorSequenceObjectReference_PathToComponent_Offset = offsetof(FActorSequenceObjectReference, PathToComponent);
	static_assert(FActorSequenceObjectReference_PathToComponent_Offset == 0x18, "FActorSequenceObjectReference::PathToComponent offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
