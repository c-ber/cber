#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCompilationOptions // Size: 0x18
{
public:
    bool bLocal; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty CustomizableObject.CompilationOptions.bLocal */
    uint8_t UnknownData1[0x3];
    int32_t OptimizationLevel; /* Ofs: 0x4 Size: 0x4 IntProperty CustomizableObject.CompilationOptions.OptimizationLevel */
    uint8_t UnknownData8[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCompilationOptions = sizeof(FCompilationOptions); // 24
    static_assert(sizeof(FCompilationOptions) == 0x18, "Size of FCompilationOptions is not correct.");
	auto constexpr FCompilationOptions_OptimizationLevel_Offset = offsetof(FCompilationOptions, OptimizationLevel);
	static_assert(FCompilationOptions_OptimizationLevel_Offset == 0x4, "FCompilationOptions::OptimizationLevel offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
