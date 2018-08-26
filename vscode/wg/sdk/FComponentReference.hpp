#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FComponentReference // Size: 0x18
{
public:
    ExternalPtr<struct UActor> OtherActor; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.ComponentReference.OtherActor */
    FName ComponentProperty; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.ComponentReference.ComponentProperty */
    uint8_t UnknownData10[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFComponentReference = sizeof(FComponentReference); // 24
    static_assert(sizeof(FComponentReference) == 0x18, "Size of FComponentReference is not correct.");
	auto constexpr FComponentReference_OtherActor_Offset = offsetof(FComponentReference, OtherActor);
	static_assert(FComponentReference_OtherActor_Offset == 0x0, "FComponentReference::OtherActor offset is not 0");
	auto constexpr FComponentReference_ComponentProperty_Offset = offsetof(FComponentReference, ComponentProperty);
	static_assert(FComponentReference_ComponentProperty_Offset == 0x8, "FComponentReference::ComponentProperty offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
