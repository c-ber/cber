#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslDamageFieldContainer // Size: 0x450
	: public UActor // Size: 0x410
{
private:
	typedef UTslDamageFieldContainer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1359); // id32("Class TslGame.TslDamageFieldContainer")
		return ptr;
	}
	TArray<struct FDamageFieldLayout> DamageFieldLayouts; /* Ofs: 0x410 Size: 0x10 - ArrayProperty TslGame.TslDamageFieldContainer.DamageFieldLayouts */
	uint8_t UnknownData420[0x8];
	ExternalPtr<struct UClass> DamageFieldTemplate; /* Ofs: 0x428 Size: 0x8 - ClassProperty TslGame.TslDamageFieldContainer.DamageFieldTemplate */
	uint8_t boolField430;
	uint8_t UnknownData431[0x3];
	int32_t FlameMaxCountInWall; /* Ofs: 0x434 Size: 0x4 - IntProperty TslGame.TslDamageFieldContainer.FlameMaxCountInWall */
	float FlameDelayInWall; /* Ofs: 0x438 Size: 0x4 - FloatProperty TslGame.TslDamageFieldContainer.FlameDelayInWall */
	uint8_t UnknownData43C[0x14];


	inline bool SetDamageFieldLayouts(t_structHelper inst, TArray<struct FDamageFieldLayout> value) { inst.WriteOffset(0x410, value); }
	inline bool SetDamageFieldTemplate(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x428, value); }
	inline bool FlameInWall()
	{
		return boolField430& 0x1;
	}
	inline bool SetFlameInWall(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x430, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFlameMaxCountInWall(t_structHelper inst, int32_t value) { inst.WriteOffset(0x434, value); }
	inline bool SetFlameDelayInWall(t_structHelper inst, float value) { inst.WriteOffset(0x438, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslDamageFieldContainer = sizeof(UTslDamageFieldContainer); // 1104
    static_assert(sizeof(UTslDamageFieldContainer) == 0x450, "Size of UTslDamageFieldContainer is not correct.");
	auto constexpr UTslDamageFieldContainer_DamageFieldLayouts_Offset = offsetof(UTslDamageFieldContainer, DamageFieldLayouts);
	static_assert(UTslDamageFieldContainer_DamageFieldLayouts_Offset == 0x410, "UTslDamageFieldContainer::DamageFieldLayouts offset is not 410");
	auto constexpr UTslDamageFieldContainer_DamageFieldTemplate_Offset = offsetof(UTslDamageFieldContainer, DamageFieldTemplate);
	static_assert(UTslDamageFieldContainer_DamageFieldTemplate_Offset == 0x428, "UTslDamageFieldContainer::DamageFieldTemplate offset is not 428");
	auto constexpr UTslDamageFieldContainer_boolField430_Offset = offsetof(UTslDamageFieldContainer, boolField430);
	static_assert(UTslDamageFieldContainer_boolField430_Offset == 0x430, "UTslDamageFieldContainer::boolField430 offset is not 430");
	auto constexpr UTslDamageFieldContainer_FlameMaxCountInWall_Offset = offsetof(UTslDamageFieldContainer, FlameMaxCountInWall);
	static_assert(UTslDamageFieldContainer_FlameMaxCountInWall_Offset == 0x434, "UTslDamageFieldContainer::FlameMaxCountInWall offset is not 434");
	auto constexpr UTslDamageFieldContainer_FlameDelayInWall_Offset = offsetof(UTslDamageFieldContainer, FlameDelayInWall);
	static_assert(UTslDamageFieldContainer_FlameDelayInWall_Offset == 0x438, "UTslDamageFieldContainer::FlameDelayInWall offset is not 438");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
