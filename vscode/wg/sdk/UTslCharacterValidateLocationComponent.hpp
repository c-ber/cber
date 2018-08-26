#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslCharacterValidateLocationComponent // Size: 0x210
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTslCharacterValidateLocationComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1347); // id32("Class TslGame.TslCharacterValidateLocationComponent")
		return ptr;
	}
//	float ValidLocationCacheInterval; /* Ofs: 0x1E8 Size: 0x4 - FloatProperty TslGame.TslCharacterValidateLocationComponent.ValidLocationCacheInterval */
	uint8_t UnknownData1F0[0xC];
	float InvalidUndergroundCheckInterval; /* Ofs: 0x1FC Size: 0x4 - FloatProperty TslGame.TslCharacterValidateLocationComponent.InvalidUndergroundCheckInterval */
	uint8_t UnknownData200[0x4];
	float InvalidUndergroundCheckLength; /* Ofs: 0x204 Size: 0x4 - FloatProperty TslGame.TslCharacterValidateLocationComponent.InvalidUndergroundCheckLength */
	float MaxAdjustRange; /* Ofs: 0x208 Size: 0x4 - FloatProperty TslGame.TslCharacterValidateLocationComponent.MaxAdjustRange */
	int32_t MaxAdjustCount; /* Ofs: 0x20C Size: 0x4 - IntProperty TslGame.TslCharacterValidateLocationComponent.MaxAdjustCount */


//	inline bool SetValidLocationCacheInterval(t_structHelper inst, float value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetInvalidUndergroundCheckInterval(t_structHelper inst, float value) { inst.WriteOffset(0x1FC, value); }
	inline bool SetInvalidUndergroundCheckLength(t_structHelper inst, float value) { inst.WriteOffset(0x204, value); }
	inline bool SetMaxAdjustRange(t_structHelper inst, float value) { inst.WriteOffset(0x208, value); }
	inline bool SetMaxAdjustCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x20C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslCharacterValidateLocationComponent = sizeof(UTslCharacterValidateLocationComponent); // 528
    static_assert(sizeof(UTslCharacterValidateLocationComponent) == 0x210, "Size of UTslCharacterValidateLocationComponent is not correct.");
//	auto constexpr UTslCharacterValidateLocationComponent_ValidLocationCacheInterval_Offset = offsetof(UTslCharacterValidateLocationComponent, ValidLocationCacheInterval);
//	static_assert(UTslCharacterValidateLocationComponent_ValidLocationCacheInterval_Offset == 0x1e8, "UTslCharacterValidateLocationComponent::ValidLocationCacheInterval offset is not 1e8");
	auto constexpr UTslCharacterValidateLocationComponent_InvalidUndergroundCheckInterval_Offset = offsetof(UTslCharacterValidateLocationComponent, InvalidUndergroundCheckInterval);
	static_assert(UTslCharacterValidateLocationComponent_InvalidUndergroundCheckInterval_Offset == 0x1fc, "UTslCharacterValidateLocationComponent::InvalidUndergroundCheckInterval offset is not 1fc");
	auto constexpr UTslCharacterValidateLocationComponent_InvalidUndergroundCheckLength_Offset = offsetof(UTslCharacterValidateLocationComponent, InvalidUndergroundCheckLength);
	static_assert(UTslCharacterValidateLocationComponent_InvalidUndergroundCheckLength_Offset == 0x204, "UTslCharacterValidateLocationComponent::InvalidUndergroundCheckLength offset is not 204");
	auto constexpr UTslCharacterValidateLocationComponent_MaxAdjustRange_Offset = offsetof(UTslCharacterValidateLocationComponent, MaxAdjustRange);
	static_assert(UTslCharacterValidateLocationComponent_MaxAdjustRange_Offset == 0x208, "UTslCharacterValidateLocationComponent::MaxAdjustRange offset is not 208");
	auto constexpr UTslCharacterValidateLocationComponent_MaxAdjustCount_Offset = offsetof(UTslCharacterValidateLocationComponent, MaxAdjustCount);
	static_assert(UTslCharacterValidateLocationComponent_MaxAdjustCount_Offset == 0x20c, "UTslCharacterValidateLocationComponent::MaxAdjustCount offset is not 20c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
