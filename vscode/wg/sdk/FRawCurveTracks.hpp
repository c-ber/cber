#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRawCurveTracks // Size: 0x10
{
public:
    TArray<struct FFloatCurve> FloatCurves; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.RawCurveTracks.FloatCurves */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRawCurveTracks = sizeof(FRawCurveTracks); // 16
    static_assert(sizeof(FRawCurveTracks) == 0x10, "Size of FRawCurveTracks is not correct.");
	auto constexpr FRawCurveTracks_FloatCurves_Offset = offsetof(FRawCurveTracks, FloatCurves);
	static_assert(FRawCurveTracks_FloatCurves_Offset == 0x0, "FRawCurveTracks::FloatCurves offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
