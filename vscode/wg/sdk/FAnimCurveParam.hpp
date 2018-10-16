#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimCurveParam // Size: 0x10
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.AnimCurveParam.Name */
    uint8_t UnknownData8[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimCurveParam = sizeof(FAnimCurveParam); // 16
    static_assert(sizeof(FAnimCurveParam) == 0x10, "Size of FAnimCurveParam is not correct.");
	auto constexpr FAnimCurveParam_Name_Offset = offsetof(FAnimCurveParam, Name);
	static_assert(FAnimCurveParam_Name_Offset == 0x0, "FAnimCurveParam::Name offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
