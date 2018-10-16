#pragma once
#include "UTslBuff.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuff_DamageOverTime_C // Size: 0x490
	: public UTslBuff // Size: 0x470
{
private:
	typedef UBuff_DamageOverTime_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(129725); // id32("BlueprintGeneratedClass Buff_DamageOverTime.Buff_DamageOverTime_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x470 Size: 0x8 - StructProperty Buff_DamageOverTime.Buff_DamageOverTime_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x478 Size: 0x8 - ObjectProperty Buff_DamageOverTime.Buff_DamageOverTime_C.DefaultSceneRoot */
	float BaseDamage; /* Ofs: 0x480 Size: 0x4 - FloatProperty Buff_DamageOverTime.Buff_DamageOverTime_C.BaseDamage */
	uint8_t UnknownData484[0x4];
	ExternalPtr<struct UClass> DamageType; /* Ofs: 0x488 Size: 0x8 - ClassProperty Buff_DamageOverTime.Buff_DamageOverTime_C.DamageType */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x470, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x478, value); }
	inline bool SetBaseDamage(t_structHelper inst, float value) { inst.WriteOffset(0x480, value); }
	inline bool SetDamageType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x488, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuff_DamageOverTime_C = sizeof(UBuff_DamageOverTime_C); // 1168
    static_assert(sizeof(UBuff_DamageOverTime_C) == 0x490, "Size of UBuff_DamageOverTime_C is not correct.");
	auto constexpr UBuff_DamageOverTime_C_UberGraphFrame_Offset = offsetof(UBuff_DamageOverTime_C, UberGraphFrame);
	static_assert(UBuff_DamageOverTime_C_UberGraphFrame_Offset == 0x470, "UBuff_DamageOverTime_C::UberGraphFrame offset is not 470");
	auto constexpr UBuff_DamageOverTime_C_DefaultSceneRoot_Offset = offsetof(UBuff_DamageOverTime_C, DefaultSceneRoot);
	static_assert(UBuff_DamageOverTime_C_DefaultSceneRoot_Offset == 0x478, "UBuff_DamageOverTime_C::DefaultSceneRoot offset is not 478");
	auto constexpr UBuff_DamageOverTime_C_BaseDamage_Offset = offsetof(UBuff_DamageOverTime_C, BaseDamage);
	static_assert(UBuff_DamageOverTime_C_BaseDamage_Offset == 0x480, "UBuff_DamageOverTime_C::BaseDamage offset is not 480");
	auto constexpr UBuff_DamageOverTime_C_DamageType_Offset = offsetof(UBuff_DamageOverTime_C, DamageType);
	static_assert(UBuff_DamageOverTime_C_DamageType_Offset == 0x488, "UBuff_DamageOverTime_C::DamageType offset is not 488");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
