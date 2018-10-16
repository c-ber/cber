#pragma once
#include "UVolume.hpp"
#include "FPostProcessSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPostProcessVolume // Size: 0x990
	: public UVolume // Size: 0x440
{
private:
	typedef UPostProcessVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1725); // id32("Class Engine.PostProcessVolume")
		return ptr;
	}
	uint8_t UnknownData440[0x10];
	FPostProcessSettings Settings; /* Ofs: 0x450 Size: 0x530 - StructProperty Engine.PostProcessVolume.Settings */
	float Priority; /* Ofs: 0x980 Size: 0x4 - FloatProperty Engine.PostProcessVolume.Priority */
	float BlendRadius; /* Ofs: 0x984 Size: 0x4 - FloatProperty Engine.PostProcessVolume.BlendRadius */
	float BlendWeight; /* Ofs: 0x988 Size: 0x4 - FloatProperty Engine.PostProcessVolume.BlendWeight */
	uint8_t boolField98C;
	uint8_t UnknownData98D[0x3];


	inline bool SetSettings(t_structHelper inst, FPostProcessSettings value) { inst.WriteOffset(0x450, value); }
	inline bool SetPriority(t_structHelper inst, float value) { inst.WriteOffset(0x980, value); }
	inline bool SetBlendRadius(t_structHelper inst, float value) { inst.WriteOffset(0x984, value); }
	inline bool SetBlendWeight(t_structHelper inst, float value) { inst.WriteOffset(0x988, value); }
	inline bool bEnabled()
	{
		return boolField98C& 0x1;
	}
	inline bool SetbEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x98C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUnbound()
	{
		return boolField98C& 0x2;
	}
	inline bool SetbUnbound(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x98C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPostProcessVolume = sizeof(UPostProcessVolume); // 2448
    static_assert(sizeof(UPostProcessVolume) == 0x990, "Size of UPostProcessVolume is not correct.");
	auto constexpr UPostProcessVolume_Settings_Offset = offsetof(UPostProcessVolume, Settings);
	static_assert(UPostProcessVolume_Settings_Offset == 0x450, "UPostProcessVolume::Settings offset is not 450");
	auto constexpr UPostProcessVolume_Priority_Offset = offsetof(UPostProcessVolume, Priority);
	static_assert(UPostProcessVolume_Priority_Offset == 0x980, "UPostProcessVolume::Priority offset is not 980");
	auto constexpr UPostProcessVolume_BlendRadius_Offset = offsetof(UPostProcessVolume, BlendRadius);
	static_assert(UPostProcessVolume_BlendRadius_Offset == 0x984, "UPostProcessVolume::BlendRadius offset is not 984");
	auto constexpr UPostProcessVolume_BlendWeight_Offset = offsetof(UPostProcessVolume, BlendWeight);
	static_assert(UPostProcessVolume_BlendWeight_Offset == 0x988, "UPostProcessVolume::BlendWeight offset is not 988");
	auto constexpr UPostProcessVolume_boolField98C_Offset = offsetof(UPostProcessVolume, boolField98C);
	static_assert(UPostProcessVolume_boolField98C_Offset == 0x98c, "UPostProcessVolume::boolField98C offset is not 98c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
