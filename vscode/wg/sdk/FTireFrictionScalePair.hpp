#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTireFrictionScalePair // Size: 0x10
{
public:
    ExternalPtr<struct UTireType> TireType; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.TireFrictionScalePair.TireType */
    float FrictionScale; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.TireFrictionScalePair.FrictionScale */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTireFrictionScalePair = sizeof(FTireFrictionScalePair); // 16
    static_assert(sizeof(FTireFrictionScalePair) == 0x10, "Size of FTireFrictionScalePair is not correct.");
	auto constexpr FTireFrictionScalePair_TireType_Offset = offsetof(FTireFrictionScalePair, TireType);
	static_assert(FTireFrictionScalePair_TireType_Offset == 0x0, "FTireFrictionScalePair::TireType offset is not 0");
	auto constexpr FTireFrictionScalePair_FrictionScale_Offset = offsetof(FTireFrictionScalePair, FrictionScale);
	static_assert(FTireFrictionScalePair_FrictionScale_Offset == 0x8, "FTireFrictionScalePair::FrictionScale offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
