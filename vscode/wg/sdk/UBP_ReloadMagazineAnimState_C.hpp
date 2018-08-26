#pragma once
#include "UTslReloadMagazineAnimState.hpp"
#include "Enum_MagazineReloadAnimStateActionType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_ReloadMagazineAnimState_C // Size: 0x50
	: public UTslReloadMagazineAnimState // Size: 0x40
{
private:
	typedef UBP_ReloadMagazineAnimState_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(54742); // id32("BlueprintGeneratedClass BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C")
		return ptr;
	}
	TEnumAsByte<enum Enum_MagazineReloadAnimStateActionType> ActionType; /* Ofs: 0x40 Size: 0x1 - ByteProperty BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.ActionType */
	uint8_t UnknownData41[0x7];
	ExternalPtr<struct UActor> Gun; /* Ofs: 0x48 Size: 0x8 - ObjectProperty BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Gun */


	inline bool SetActionType(t_structHelper inst, TEnumAsByte<enum Enum_MagazineReloadAnimStateActionType> value) { inst.WriteOffset(0x40, value); }
	inline bool SetGun(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_ReloadMagazineAnimState_C = sizeof(UBP_ReloadMagazineAnimState_C); // 80
    static_assert(sizeof(UBP_ReloadMagazineAnimState_C) == 0x50, "Size of UBP_ReloadMagazineAnimState_C is not correct.");
	auto constexpr UBP_ReloadMagazineAnimState_C_ActionType_Offset = offsetof(UBP_ReloadMagazineAnimState_C, ActionType);
	static_assert(UBP_ReloadMagazineAnimState_C_ActionType_Offset == 0x40, "UBP_ReloadMagazineAnimState_C::ActionType offset is not 40");
	auto constexpr UBP_ReloadMagazineAnimState_C_Gun_Offset = offsetof(UBP_ReloadMagazineAnimState_C, Gun);
	static_assert(UBP_ReloadMagazineAnimState_C_Gun_Offset == 0x48, "UBP_ReloadMagazineAnimState_C::Gun offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
