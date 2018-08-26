#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPawnActionStack // Size: 0x8
{
public:
    ExternalPtr<struct UPawnAction> TopAction; /* Ofs: 0x0 Size: 0x8 ObjectProperty AIModule.PawnActionStack.TopAction */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPawnActionStack = sizeof(FPawnActionStack); // 8
    static_assert(sizeof(FPawnActionStack) == 0x8, "Size of FPawnActionStack is not correct.");
	auto constexpr FPawnActionStack_TopAction_Offset = offsetof(FPawnActionStack, TopAction);
	static_assert(FPawnActionStack_TopAction_Offset == 0x0, "FPawnActionStack::TopAction offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
