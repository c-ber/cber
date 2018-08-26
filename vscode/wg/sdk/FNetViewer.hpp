#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNetViewer // Size: 0x30
{
public:
    ExternalPtr<struct UNetConnection> Connection; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.NetViewer.Connection */
    ExternalPtr<struct UActor> InViewer; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.NetViewer.InViewer */
    ExternalPtr<struct UActor> ViewTarget; /* Ofs: 0x10 Size: 0x8 ObjectProperty Engine.NetViewer.ViewTarget */
    FVector ViewLocation; /* Ofs: 0x18 Size: 0xC StructProperty Engine.NetViewer.ViewLocation */
    FVector ViewDir; /* Ofs: 0x24 Size: 0xC StructProperty Engine.NetViewer.ViewDir */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNetViewer = sizeof(FNetViewer); // 48
    static_assert(sizeof(FNetViewer) == 0x30, "Size of FNetViewer is not correct.");
	auto constexpr FNetViewer_Connection_Offset = offsetof(FNetViewer, Connection);
	static_assert(FNetViewer_Connection_Offset == 0x0, "FNetViewer::Connection offset is not 0");
	auto constexpr FNetViewer_InViewer_Offset = offsetof(FNetViewer, InViewer);
	static_assert(FNetViewer_InViewer_Offset == 0x8, "FNetViewer::InViewer offset is not 8");
	auto constexpr FNetViewer_ViewTarget_Offset = offsetof(FNetViewer, ViewTarget);
	static_assert(FNetViewer_ViewTarget_Offset == 0x10, "FNetViewer::ViewTarget offset is not 10");
	auto constexpr FNetViewer_ViewLocation_Offset = offsetof(FNetViewer, ViewLocation);
	static_assert(FNetViewer_ViewLocation_Offset == 0x18, "FNetViewer::ViewLocation offset is not 18");
	auto constexpr FNetViewer_ViewDir_Offset = offsetof(FNetViewer, ViewDir);
	static_assert(FNetViewer_ViewDir_Offset == 0x24, "FNetViewer::ViewDir offset is not 24");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
