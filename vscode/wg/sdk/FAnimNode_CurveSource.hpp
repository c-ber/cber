#pragma once
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_CurveSource // Size: 0x68
 : public FAnimNode_Base // Size: 0x30
{
public:
    FPoseLink SourcePose; /* Ofs: 0x30 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_CurveSource.SourcePose */
    FName SourceBinding; /* Ofs: 0x48 Size: 0x8 NameProperty AnimGraphRuntime.AnimNode_CurveSource.SourceBinding */
    float Alpha; /* Ofs: 0x50 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_CurveSource.Alpha */
    uint8_t UnknownData54[0x4];
    TScriptInterface<ExternalPtr<struct UCurveSourceInterface>> CurveSource; /* Ofs: 0x58 Size: 0x10 InterfaceProperty AnimGraphRuntime.AnimNode_CurveSource.CurveSource */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_CurveSource = sizeof(FAnimNode_CurveSource); // 104
    static_assert(sizeof(FAnimNode_CurveSource) == 0x68, "Size of FAnimNode_CurveSource is not correct.");
	auto constexpr FAnimNode_CurveSource_SourcePose_Offset = offsetof(FAnimNode_CurveSource, SourcePose);
	static_assert(FAnimNode_CurveSource_SourcePose_Offset == 0x30, "FAnimNode_CurveSource::SourcePose offset is not 30");
	auto constexpr FAnimNode_CurveSource_SourceBinding_Offset = offsetof(FAnimNode_CurveSource, SourceBinding);
	static_assert(FAnimNode_CurveSource_SourceBinding_Offset == 0x48, "FAnimNode_CurveSource::SourceBinding offset is not 48");
	auto constexpr FAnimNode_CurveSource_Alpha_Offset = offsetof(FAnimNode_CurveSource, Alpha);
	static_assert(FAnimNode_CurveSource_Alpha_Offset == 0x50, "FAnimNode_CurveSource::Alpha offset is not 50");
	auto constexpr FAnimNode_CurveSource_CurveSource_Offset = offsetof(FAnimNode_CurveSource, CurveSource);
	static_assert(FAnimNode_CurveSource_CurveSource_Offset == 0x58, "FAnimNode_CurveSource::CurveSource offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
