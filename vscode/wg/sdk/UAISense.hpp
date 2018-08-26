#pragma once
#include "EAISenseNotifyType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISense // Size: 0x120
	: public UObject // Size: 0x30
{
private:
	typedef UAISense t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1674); // id32("Class AIModule.AISense")
		return ptr;
	}
	float DefaultExpirationAge; /* Ofs: 0x30 Size: 0x4 - FloatProperty AIModule.AISense.DefaultExpirationAge */
	TEnumAsByte<enum EAISenseNotifyType> NotifyType; /* Ofs: 0x34 Size: 0x1 - EnumProperty AIModule.AISense.NotifyType */
	uint8_t UnknownData35[0x3];
	uint8_t boolField38;
	uint8_t UnknownData39[0x7];
	ExternalPtr<struct UAIPerceptionSystem> PerceptionSystemInstance; /* Ofs: 0x40 Size: 0x8 - ObjectProperty AIModule.AISense.PerceptionSystemInstance */
	uint8_t UnknownData48[0xD8];


	inline bool SetDefaultExpirationAge(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetNotifyType(t_structHelper inst, TEnumAsByte<enum EAISenseNotifyType> value) { inst.WriteOffset(0x34, value); }
	inline bool bWantsNewPawnNotification()
	{
		return boolField38& 0x1;
	}
	inline bool SetbWantsNewPawnNotification(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAutoRegisterAllPawnsAsSources()
	{
		return boolField38& 0x2;
	}
	inline bool SetbAutoRegisterAllPawnsAsSources(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetPerceptionSystemInstance(t_structHelper inst, ExternalPtr<struct UAIPerceptionSystem> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISense = sizeof(UAISense); // 288
    static_assert(sizeof(UAISense) == 0x120, "Size of UAISense is not correct.");
	auto constexpr UAISense_DefaultExpirationAge_Offset = offsetof(UAISense, DefaultExpirationAge);
	static_assert(UAISense_DefaultExpirationAge_Offset == 0x30, "UAISense::DefaultExpirationAge offset is not 30");
	auto constexpr UAISense_NotifyType_Offset = offsetof(UAISense, NotifyType);
	static_assert(UAISense_NotifyType_Offset == 0x34, "UAISense::NotifyType offset is not 34");
	auto constexpr UAISense_boolField38_Offset = offsetof(UAISense, boolField38);
	static_assert(UAISense_boolField38_Offset == 0x38, "UAISense::boolField38 offset is not 38");
	auto constexpr UAISense_PerceptionSystemInstance_Offset = offsetof(UAISense, PerceptionSystemInstance);
	static_assert(UAISense_PerceptionSystemInstance_Offset == 0x40, "UAISense::PerceptionSystemInstance offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
