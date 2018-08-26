#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPerBoneBlendWeight // Size: 0x8
{
public:
    int32_t SourceIndex; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.PerBoneBlendWeight.SourceIndex */
    float BlendWeight; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.PerBoneBlendWeight.BlendWeight */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPerBoneBlendWeight = sizeof(FPerBoneBlendWeight); // 8
    static_assert(sizeof(FPerBoneBlendWeight) == 0x8, "Size of FPerBoneBlendWeight is not correct.");
	auto constexpr FPerBoneBlendWeight_SourceIndex_Offset = offsetof(FPerBoneBlendWeight, SourceIndex);
	static_assert(FPerBoneBlendWeight_SourceIndex_Offset == 0x0, "FPerBoneBlendWeight::SourceIndex offset is not 0");
	auto constexpr FPerBoneBlendWeight_BlendWeight_Offset = offsetof(FPerBoneBlendWeight, BlendWeight);
	static_assert(FPerBoneBlendWeight_BlendWeight_Offset == 0x4, "FPerBoneBlendWeight::BlendWeight offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
