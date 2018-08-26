#pragma once
#include "UBlendSpaceBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlendSpace1D // Size: 0x150
	: public UBlendSpaceBase // Size: 0x148
{
private:
	typedef UBlendSpace1D t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(254); // id32("Class Engine.BlendSpace1D")
		return ptr;
	}
	uint8_t boolField148;
	uint8_t UnknownData149[0x7];


	inline bool bScaleAnimation()
	{
		return boolField148& 0x1;
	}
	inline bool SetbScaleAnimation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x148, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlendSpace1D = sizeof(UBlendSpace1D); // 336
    static_assert(sizeof(UBlendSpace1D) == 0x150, "Size of UBlendSpace1D is not correct.");
	auto constexpr UBlendSpace1D_boolField148_Offset = offsetof(UBlendSpace1D, boolField148);
	static_assert(UBlendSpace1D_boolField148_Offset == 0x148, "UBlendSpace1D::boolField148 offset is not 148");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
