#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FParticleCurvePair // Size: 0x18
{
public:
    FString CurveName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.ParticleCurvePair.CurveName */
    ExternalPtr<struct UObject> CurveObject; /* Ofs: 0x10 Size: 0x8 ObjectProperty Engine.ParticleCurvePair.CurveObject */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFParticleCurvePair = sizeof(FParticleCurvePair); // 24
    static_assert(sizeof(FParticleCurvePair) == 0x18, "Size of FParticleCurvePair is not correct.");
	auto constexpr FParticleCurvePair_CurveName_Offset = offsetof(FParticleCurvePair, CurveName);
	static_assert(FParticleCurvePair_CurveName_Offset == 0x0, "FParticleCurvePair::CurveName offset is not 0");
	auto constexpr FParticleCurvePair_CurveObject_Offset = offsetof(FParticleCurvePair, CurveObject);
	static_assert(FParticleCurvePair_CurveObject_Offset == 0x10, "FParticleCurvePair::CurveObject offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
