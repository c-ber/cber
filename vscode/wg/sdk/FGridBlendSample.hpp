#pragma once
#include "FEditorElement.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGridBlendSample // Size: 0x1C
{
public:
    FEditorElement GridElement; /* Ofs: 0x0 Size: 0x18 StructProperty Engine.GridBlendSample.GridElement */
    float BlendWeight; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.GridBlendSample.BlendWeight */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGridBlendSample = sizeof(FGridBlendSample); // 28
    static_assert(sizeof(FGridBlendSample) == 0x1C, "Size of FGridBlendSample is not correct.");
	auto constexpr FGridBlendSample_GridElement_Offset = offsetof(FGridBlendSample, GridElement);
	static_assert(FGridBlendSample_GridElement_Offset == 0x0, "FGridBlendSample::GridElement offset is not 0");
	auto constexpr FGridBlendSample_BlendWeight_Offset = offsetof(FGridBlendSample, BlendWeight);
	static_assert(FGridBlendSample_BlendWeight_Offset == 0x18, "FGridBlendSample::BlendWeight offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
