#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInputScaleBias // Size: 0x8
{
public:
    float Scale; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.InputScaleBias.Scale */
    float Bias; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.InputScaleBias.Bias */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInputScaleBias = sizeof(FInputScaleBias); // 8
    static_assert(sizeof(FInputScaleBias) == 0x8, "Size of FInputScaleBias is not correct.");
	auto constexpr FInputScaleBias_Scale_Offset = offsetof(FInputScaleBias, Scale);
	static_assert(FInputScaleBias_Scale_Offset == 0x0, "FInputScaleBias::Scale offset is not 0");
	auto constexpr FInputScaleBias_Bias_Offset = offsetof(FInputScaleBias, Bias);
	static_assert(FInputScaleBias_Bias_Offset == 0x4, "FInputScaleBias::Bias offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
