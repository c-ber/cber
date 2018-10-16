#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBPInterfaceDescription // Size: 0x18
{
public:
    ExternalPtr<struct UClass> Interface; /* Ofs: 0x0 Size: 0x8 ClassProperty Engine.BPInterfaceDescription.Interface */
    TArray<ExternalPtr<struct UEdGraph>> Graphs; /* Ofs: 0x8 Size: 0x10 ArrayProperty Engine.BPInterfaceDescription.Graphs */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBPInterfaceDescription = sizeof(FBPInterfaceDescription); // 24
    static_assert(sizeof(FBPInterfaceDescription) == 0x18, "Size of FBPInterfaceDescription is not correct.");
	auto constexpr FBPInterfaceDescription_Interface_Offset = offsetof(FBPInterfaceDescription, Interface);
	static_assert(FBPInterfaceDescription_Interface_Offset == 0x0, "FBPInterfaceDescription::Interface offset is not 0");
	auto constexpr FBPInterfaceDescription_Graphs_Offset = offsetof(FBPInterfaceDescription, Graphs);
	static_assert(FBPInterfaceDescription_Graphs_Offset == 0x8, "FBPInterfaceDescription::Graphs offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
