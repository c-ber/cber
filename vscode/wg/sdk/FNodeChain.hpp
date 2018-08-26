#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNodeChain // Size: 0x10
{
public:
    TArray<struct FName> Nodes; /* Ofs: 0x0 Size: 0x10 ArrayProperty AnimationCore.NodeChain.Nodes */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNodeChain = sizeof(FNodeChain); // 16
    static_assert(sizeof(FNodeChain) == 0x10, "Size of FNodeChain is not correct.");
	auto constexpr FNodeChain_Nodes_Offset = offsetof(FNodeChain, Nodes);
	static_assert(FNodeChain_Nodes_Offset == 0x0, "FNodeChain::Nodes offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
