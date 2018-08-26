#pragma once
#include "UContentWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInvalidationBox // Size: 0x160
	: public UContentWidget // Size: 0x148
{
private:
	typedef UInvalidationBox t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(499); // id32("Class UMG.InvalidationBox")
		return ptr;
	}
	uint8_t boolField148;
	uint8_t boolField149;
	uint8_t UnknownData14A[0x16];


	inline bool bCanCache()
	{
		return boolField148& 0x1;
	}
	inline bool SetbCanCache(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x148, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool CacheRelativeTransforms()
	{
		return boolField149& 0x1;
	}
	inline bool SetCacheRelativeTransforms(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x149, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInvalidationBox = sizeof(UInvalidationBox); // 352
    static_assert(sizeof(UInvalidationBox) == 0x160, "Size of UInvalidationBox is not correct.");
	auto constexpr UInvalidationBox_boolField148_Offset = offsetof(UInvalidationBox, boolField148);
	static_assert(UInvalidationBox_boolField148_Offset == 0x148, "UInvalidationBox::boolField148 offset is not 148");
	auto constexpr UInvalidationBox_boolField149_Offset = offsetof(UInvalidationBox, boolField149);
	static_assert(UInvalidationBox_boolField149_Offset == 0x149, "UInvalidationBox::boolField149 offset is not 149");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
