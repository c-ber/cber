#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRecoilPatternData // Size: 0x8
{
public:
    float Angle; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.RecoilPatternData.Angle */
    float Magnitude; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.RecoilPatternData.Magnitude */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRecoilPatternData = sizeof(FRecoilPatternData); // 8
    static_assert(sizeof(FRecoilPatternData) == 0x8, "Size of FRecoilPatternData is not correct.");
	auto constexpr FRecoilPatternData_Angle_Offset = offsetof(FRecoilPatternData, Angle);
	static_assert(FRecoilPatternData_Angle_Offset == 0x0, "FRecoilPatternData::Angle offset is not 0");
	auto constexpr FRecoilPatternData_Magnitude_Offset = offsetof(FRecoilPatternData, Magnitude);
	static_assert(FRecoilPatternData_Magnitude_Offset == 0x4, "FRecoilPatternData::Magnitude offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
