#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGraphReference // Size: 0x20
{
public:
    ExternalPtr<struct UEdGraph> MacroGraph; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.GraphReference.MacroGraph */
    ExternalPtr<struct UBlueprint> GraphBlueprint; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.GraphReference.GraphBlueprint */
    FGuid GraphGuid; /* Ofs: 0x10 Size: 0x10 StructProperty Engine.GraphReference.GraphGuid */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGraphReference = sizeof(FGraphReference); // 32
    static_assert(sizeof(FGraphReference) == 0x20, "Size of FGraphReference is not correct.");
	auto constexpr FGraphReference_MacroGraph_Offset = offsetof(FGraphReference, MacroGraph);
	static_assert(FGraphReference_MacroGraph_Offset == 0x0, "FGraphReference::MacroGraph offset is not 0");
	auto constexpr FGraphReference_GraphBlueprint_Offset = offsetof(FGraphReference, GraphBlueprint);
	static_assert(FGraphReference_GraphBlueprint_Offset == 0x8, "FGraphReference::GraphBlueprint offset is not 8");
	auto constexpr FGraphReference_GraphGuid_Offset = offsetof(FGraphReference, GraphGuid);
	static_assert(FGraphReference_GraphGuid_Offset == 0x10, "FGraphReference::GraphGuid offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
