#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEdGraphPinReference // Size: 0x18
{
public:
    TWeakObjectPtr<ExternalPtr<struct UEdGraphNode>> OwningNode; /* Ofs: 0x0 Size: 0x8 WeakObjectProperty Engine.EdGraphPinReference.OwningNode */
    FGuid PinId; /* Ofs: 0x8 Size: 0x10 StructProperty Engine.EdGraphPinReference.PinId */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEdGraphPinReference = sizeof(FEdGraphPinReference); // 24
    static_assert(sizeof(FEdGraphPinReference) == 0x18, "Size of FEdGraphPinReference is not correct.");
	auto constexpr FEdGraphPinReference_OwningNode_Offset = offsetof(FEdGraphPinReference, OwningNode);
	static_assert(FEdGraphPinReference_OwningNode_Offset == 0x0, "FEdGraphPinReference::OwningNode offset is not 0");
	auto constexpr FEdGraphPinReference_PinId_Offset = offsetof(FEdGraphPinReference, PinId);
	static_assert(FEdGraphPinReference_PinId_Offset == 0x8, "FEdGraphPinReference::PinId offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
