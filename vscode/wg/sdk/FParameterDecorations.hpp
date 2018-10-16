#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FParameterDecorations // Size: 0x10
{
public:
    TArray<ExternalPtr<struct UTexture2D>> Images; /* Ofs: 0x0 Size: 0x10 ArrayProperty CustomizableObject.ParameterDecorations.Images */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFParameterDecorations = sizeof(FParameterDecorations); // 16
    static_assert(sizeof(FParameterDecorations) == 0x10, "Size of FParameterDecorations is not correct.");
	auto constexpr FParameterDecorations_Images_Offset = offsetof(FParameterDecorations, Images);
	static_assert(FParameterDecorations_Images_Offset == 0x0, "FParameterDecorations::Images offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
