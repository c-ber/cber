#pragma once
#include "FSequenceBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSequence_Float // Size: 0xA0
 : public FSequenceBase // Size: 0x98
{
public:
    ExternalPtr<struct UCurveFloat> FloatCurve; /* Ofs: 0x98 Size: 0x8 ObjectProperty TslGame.Sequence_Float.FloatCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSequence_Float = sizeof(FSequence_Float); // 160
    static_assert(sizeof(FSequence_Float) == 0xA0, "Size of FSequence_Float is not correct.");
	auto constexpr FSequence_Float_FloatCurve_Offset = offsetof(FSequence_Float, FloatCurve);
	static_assert(FSequence_Float_FloatCurve_Offset == 0x98, "FSequence_Float::FloatCurve offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
