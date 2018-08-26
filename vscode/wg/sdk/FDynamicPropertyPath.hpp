#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDynamicPropertyPath // Size: 0x10
{
public:
    TArray<struct FPropertyPathSegment> Segments; /* Ofs: 0x0 Size: 0x10 ArrayProperty UMG.DynamicPropertyPath.Segments */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDynamicPropertyPath = sizeof(FDynamicPropertyPath); // 16
    static_assert(sizeof(FDynamicPropertyPath) == 0x10, "Size of FDynamicPropertyPath is not correct.");
	auto constexpr FDynamicPropertyPath_Segments_Offset = offsetof(FDynamicPropertyPath, Segments);
	static_assert(FDynamicPropertyPath_Segments_Offset == 0x0, "FDynamicPropertyPath::Segments offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
