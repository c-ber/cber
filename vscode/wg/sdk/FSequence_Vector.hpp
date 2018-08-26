#pragma once
#include "FSequenceBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSequence_Vector // Size: 0xA0
 : public FSequenceBase // Size: 0x98
{
public:
    ExternalPtr<struct UCurveVector> VectorCurve; /* Ofs: 0x98 Size: 0x8 ObjectProperty TslGame.Sequence_Vector.VectorCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSequence_Vector = sizeof(FSequence_Vector); // 160
    static_assert(sizeof(FSequence_Vector) == 0xA0, "Size of FSequence_Vector is not correct.");
	auto constexpr FSequence_Vector_VectorCurve_Offset = offsetof(FSequence_Vector, VectorCurve);
	static_assert(FSequence_Vector_VectorCurve_Offset == 0x98, "FSequence_Vector::VectorCurve offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
