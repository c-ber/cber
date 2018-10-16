#pragma once
#include "UBlendSpaceBase.hpp"
#include "EBlendSpaceAxis.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlendSpace // Size: 0x150
	: public UBlendSpaceBase // Size: 0x148
{
private:
	typedef UBlendSpace t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(252); // id32("Class Engine.BlendSpace")
		return ptr;
	}
	TEnumAsByte<enum EBlendSpaceAxis> AxisToScaleAnimation; /* Ofs: 0x148 Size: 0x1 - ByteProperty Engine.BlendSpace.AxisToScaleAnimation */
	uint8_t UnknownData149[0x7];


	inline bool SetAxisToScaleAnimation(t_structHelper inst, TEnumAsByte<enum EBlendSpaceAxis> value) { inst.WriteOffset(0x148, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlendSpace = sizeof(UBlendSpace); // 336
    static_assert(sizeof(UBlendSpace) == 0x150, "Size of UBlendSpace is not correct.");
	auto constexpr UBlendSpace_AxisToScaleAnimation_Offset = offsetof(UBlendSpace, AxisToScaleAnimation);
	static_assert(UBlendSpace_AxisToScaleAnimation_Offset == 0x148, "UBlendSpace::AxisToScaleAnimation offset is not 148");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
