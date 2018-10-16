#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCompositionGraphCapturePasses // Size: 0x10
{
public:
    TArray<struct FString> Value; /* Ofs: 0x0 Size: 0x10 ArrayProperty MovieSceneCapture.CompositionGraphCapturePasses.Value */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCompositionGraphCapturePasses = sizeof(FCompositionGraphCapturePasses); // 16
    static_assert(sizeof(FCompositionGraphCapturePasses) == 0x10, "Size of FCompositionGraphCapturePasses is not correct.");
	auto constexpr FCompositionGraphCapturePasses_Value_Offset = offsetof(FCompositionGraphCapturePasses, Value);
	static_assert(FCompositionGraphCapturePasses_Value_Offset == 0x0, "FCompositionGraphCapturePasses::Value offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
