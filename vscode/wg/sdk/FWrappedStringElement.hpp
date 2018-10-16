#pragma once
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWrappedStringElement // Size: 0x18
{
public:
    FString Value; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.WrappedStringElement.Value */
    FVector2D LineExtent; /* Ofs: 0x10 Size: 0x8 StructProperty Engine.WrappedStringElement.LineExtent */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWrappedStringElement = sizeof(FWrappedStringElement); // 24
    static_assert(sizeof(FWrappedStringElement) == 0x18, "Size of FWrappedStringElement is not correct.");
	auto constexpr FWrappedStringElement_Value_Offset = offsetof(FWrappedStringElement, Value);
	static_assert(FWrappedStringElement_Value_Offset == 0x0, "FWrappedStringElement::Value offset is not 0");
	auto constexpr FWrappedStringElement_LineExtent_Offset = offsetof(FWrappedStringElement, LineExtent);
	static_assert(FWrappedStringElement_LineExtent_Offset == 0x10, "FWrappedStringElement::LineExtent offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
