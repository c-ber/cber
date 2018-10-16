#pragma once
#include "UCharacterBreathBuff.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuff_DecreaseBreathInApnea_C // Size: 0x4A0
	: public UCharacterBreathBuff // Size: 0x480
{
private:
	typedef UBuff_DecreaseBreathInApnea_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88461); // id32("BlueprintGeneratedClass Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x480 Size: 0x8 - StructProperty Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x488 Size: 0x8 - ObjectProperty Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.DefaultSceneRoot */
	float HealthPerTick; /* Ofs: 0x490 Size: 0x4 - FloatProperty Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.HealthPerTick */
	uint8_t UnknownData494[0x4];
	ExternalPtr<struct UClass> DamageType; /* Ofs: 0x498 Size: 0x8 - ClassProperty Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.DamageType */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x480, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x488, value); }
	inline bool SetHealthPerTick(t_structHelper inst, float value) { inst.WriteOffset(0x490, value); }
	inline bool SetDamageType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x498, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuff_DecreaseBreathInApnea_C = sizeof(UBuff_DecreaseBreathInApnea_C); // 1184
    static_assert(sizeof(UBuff_DecreaseBreathInApnea_C) == 0x4A0, "Size of UBuff_DecreaseBreathInApnea_C is not correct.");
	auto constexpr UBuff_DecreaseBreathInApnea_C_UberGraphFrame_Offset = offsetof(UBuff_DecreaseBreathInApnea_C, UberGraphFrame);
	static_assert(UBuff_DecreaseBreathInApnea_C_UberGraphFrame_Offset == 0x480, "UBuff_DecreaseBreathInApnea_C::UberGraphFrame offset is not 480");
	auto constexpr UBuff_DecreaseBreathInApnea_C_DefaultSceneRoot_Offset = offsetof(UBuff_DecreaseBreathInApnea_C, DefaultSceneRoot);
	static_assert(UBuff_DecreaseBreathInApnea_C_DefaultSceneRoot_Offset == 0x488, "UBuff_DecreaseBreathInApnea_C::DefaultSceneRoot offset is not 488");
	auto constexpr UBuff_DecreaseBreathInApnea_C_HealthPerTick_Offset = offsetof(UBuff_DecreaseBreathInApnea_C, HealthPerTick);
	static_assert(UBuff_DecreaseBreathInApnea_C_HealthPerTick_Offset == 0x490, "UBuff_DecreaseBreathInApnea_C::HealthPerTick offset is not 490");
	auto constexpr UBuff_DecreaseBreathInApnea_C_DamageType_Offset = offsetof(UBuff_DecreaseBreathInApnea_C, DamageType);
	static_assert(UBuff_DecreaseBreathInApnea_C_DamageType_Offset == 0x498, "UBuff_DecreaseBreathInApnea_C::DamageType offset is not 498");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
