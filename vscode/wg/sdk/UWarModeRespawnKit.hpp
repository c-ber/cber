#pragma once
#include "ERespawnKitType.hpp"
#include "ERespawnKitType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeRespawnKit // Size: 0x98
	: public UObject // Size: 0x30
{
private:
	typedef UWarModeRespawnKit t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1883); // id32("Class TslGame.WarModeRespawnKit")
		return ptr;
	}
	TMap<ERespawnKitType, struct FWarModeRespawnKitInfoListOfType> RespawnKitsDB; /* Ofs: 0x30 Size: 0x50 - MapProperty TslGame.WarModeRespawnKit.RespawnKitsDB */
	TEnumAsByte<enum ERespawnKitType> SelectedRespawnKitType; /* Ofs: 0x80 Size: 0x1 - EnumProperty TslGame.WarModeRespawnKit.SelectedRespawnKitType */
	uint8_t UnknownData81[0x7];
	TArray<struct FWarModeRespawnKitInstance> RespawnKits; /* Ofs: 0x88 Size: 0x10 - ArrayProperty TslGame.WarModeRespawnKit.RespawnKits */


	inline bool SetRespawnKitsDB(t_structHelper inst, TMap<ERespawnKitType, struct FWarModeRespawnKitInfoListOfType> value) { inst.WriteOffset(0x30, value); }
	inline bool SetSelectedRespawnKitType(t_structHelper inst, TEnumAsByte<enum ERespawnKitType> value) { inst.WriteOffset(0x80, value); }
	inline bool SetRespawnKits(t_structHelper inst, TArray<struct FWarModeRespawnKitInstance> value) { inst.WriteOffset(0x88, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeRespawnKit = sizeof(UWarModeRespawnKit); // 152
    static_assert(sizeof(UWarModeRespawnKit) == 0x98, "Size of UWarModeRespawnKit is not correct.");
	auto constexpr UWarModeRespawnKit_RespawnKitsDB_Offset = offsetof(UWarModeRespawnKit, RespawnKitsDB);
	static_assert(UWarModeRespawnKit_RespawnKitsDB_Offset == 0x30, "UWarModeRespawnKit::RespawnKitsDB offset is not 30");
	auto constexpr UWarModeRespawnKit_SelectedRespawnKitType_Offset = offsetof(UWarModeRespawnKit, SelectedRespawnKitType);
	static_assert(UWarModeRespawnKit_SelectedRespawnKitType_Offset == 0x80, "UWarModeRespawnKit::SelectedRespawnKitType offset is not 80");
	auto constexpr UWarModeRespawnKit_RespawnKits_Offset = offsetof(UWarModeRespawnKit, RespawnKits);
	static_assert(UWarModeRespawnKit_RespawnKits_Offset == 0x88, "UWarModeRespawnKit::RespawnKits offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
