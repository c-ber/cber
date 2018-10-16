#pragma once
#include "UPhysicsVolume.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPainCausingVolume // Size: 0x480
	: public UPhysicsVolume // Size: 0x450
{
private:
	typedef UPainCausingVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1721); // id32("Class Engine.PainCausingVolume")
		return ptr;
	}
	uint8_t boolField450;
	uint8_t UnknownData451[0x3];
	float DamagePerSec; /* Ofs: 0x454 Size: 0x4 - FloatProperty Engine.PainCausingVolume.DamagePerSec */
	ExternalPtr<struct UClass> DamageType; /* Ofs: 0x458 Size: 0x8 - ClassProperty Engine.PainCausingVolume.DamageType */
	float PainInterval; /* Ofs: 0x460 Size: 0x4 - FloatProperty Engine.PainCausingVolume.PainInterval */
	uint8_t boolField464;
	uint8_t UnknownData465[0x3];
	ExternalPtr<struct UController> DamageInstigator; /* Ofs: 0x468 Size: 0x8 - ObjectProperty Engine.PainCausingVolume.DamageInstigator */
	uint8_t UnknownData470[0x10];


	inline bool bPainCausing()
	{
		return boolField450& 0x1;
	}
	inline bool SetbPainCausing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x450, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDamagePerSec(t_structHelper inst, float value) { inst.WriteOffset(0x454, value); }
	inline bool SetDamageType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x458, value); }
	inline bool SetPainInterval(t_structHelper inst, float value) { inst.WriteOffset(0x460, value); }
	inline bool bEntryPain()
	{
		return boolField464& 0x1;
	}
	inline bool SetbEntryPain(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x464, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool BACKUP_bPainCausing()
	{
		return boolField464& 0x2;
	}
	inline bool SetBACKUP_bPainCausing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x464, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetDamageInstigator(t_structHelper inst, ExternalPtr<struct UController> value) { inst.WriteOffset(0x468, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPainCausingVolume = sizeof(UPainCausingVolume); // 1152
    static_assert(sizeof(UPainCausingVolume) == 0x480, "Size of UPainCausingVolume is not correct.");
	auto constexpr UPainCausingVolume_boolField450_Offset = offsetof(UPainCausingVolume, boolField450);
	static_assert(UPainCausingVolume_boolField450_Offset == 0x450, "UPainCausingVolume::boolField450 offset is not 450");
	auto constexpr UPainCausingVolume_DamagePerSec_Offset = offsetof(UPainCausingVolume, DamagePerSec);
	static_assert(UPainCausingVolume_DamagePerSec_Offset == 0x454, "UPainCausingVolume::DamagePerSec offset is not 454");
	auto constexpr UPainCausingVolume_DamageType_Offset = offsetof(UPainCausingVolume, DamageType);
	static_assert(UPainCausingVolume_DamageType_Offset == 0x458, "UPainCausingVolume::DamageType offset is not 458");
	auto constexpr UPainCausingVolume_PainInterval_Offset = offsetof(UPainCausingVolume, PainInterval);
	static_assert(UPainCausingVolume_PainInterval_Offset == 0x460, "UPainCausingVolume::PainInterval offset is not 460");
	auto constexpr UPainCausingVolume_boolField464_Offset = offsetof(UPainCausingVolume, boolField464);
	static_assert(UPainCausingVolume_boolField464_Offset == 0x464, "UPainCausingVolume::boolField464 offset is not 464");
	auto constexpr UPainCausingVolume_DamageInstigator_Offset = offsetof(UPainCausingVolume, DamageInstigator);
	static_assert(UPainCausingVolume_DamageInstigator_Offset == 0x468, "UPainCausingVolume::DamageInstigator offset is not 468");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
