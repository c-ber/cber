#pragma once
#include "FSmartName.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimCurveBase // Size: 0x20
{
public:
    FName LastObservedName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.AnimCurveBase.LastObservedName */
    FSmartName Name; /* Ofs: 0x8 Size: 0x10 StructProperty Engine.AnimCurveBase.Name */
    int32_t CurveTypeFlags; /* Ofs: 0x18 Size: 0x4 IntProperty Engine.AnimCurveBase.CurveTypeFlags */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimCurveBase = sizeof(FAnimCurveBase); // 32
    static_assert(sizeof(FAnimCurveBase) == 0x20, "Size of FAnimCurveBase is not correct.");
	auto constexpr FAnimCurveBase_LastObservedName_Offset = offsetof(FAnimCurveBase, LastObservedName);
	static_assert(FAnimCurveBase_LastObservedName_Offset == 0x0, "FAnimCurveBase::LastObservedName offset is not 0");
	auto constexpr FAnimCurveBase_Name_Offset = offsetof(FAnimCurveBase, Name);
	static_assert(FAnimCurveBase_Name_Offset == 0x8, "FAnimCurveBase::Name offset is not 8");
	auto constexpr FAnimCurveBase_CurveTypeFlags_Offset = offsetof(FAnimCurveBase, CurveTypeFlags);
	static_assert(FAnimCurveBase_CurveTypeFlags_Offset == 0x18, "FAnimCurveBase::CurveTypeFlags offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
