#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOnlineBeaconHostObject // Size: 0x430
	: public UActor // Size: 0x410
{
private:
	typedef UOnlineBeaconHostObject t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2110); // id32("Class OnlineSubsystemUtils.OnlineBeaconHostObject")
		return ptr;
	}
//	FString BeaconTypeName; /* Ofs: 0x408 Size: 0x10 - StrProperty OnlineSubsystemUtils.OnlineBeaconHostObject.BeaconTypeName */
	uint8_t UnknownData410[0x8];
	ExternalPtr<struct UClass> ClientBeaconActorClass; /* Ofs: 0x418 Size: 0x8 - ClassProperty OnlineSubsystemUtils.OnlineBeaconHostObject.ClientBeaconActorClass */
	TArray<ExternalPtr<struct UOnlineBeaconClient>> ClientActors; /* Ofs: 0x420 Size: 0x10 - ArrayProperty OnlineSubsystemUtils.OnlineBeaconHostObject.ClientActors */


//	inline bool SetBeaconTypeName(t_structHelper inst, FString value) { inst.WriteOffset(0x408, value); }
	inline bool SetClientBeaconActorClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x418, value); }
	inline bool SetClientActors(t_structHelper inst, TArray<ExternalPtr<struct UOnlineBeaconClient>> value) { inst.WriteOffset(0x420, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOnlineBeaconHostObject = sizeof(UOnlineBeaconHostObject); // 1072
    static_assert(sizeof(UOnlineBeaconHostObject) == 0x430, "Size of UOnlineBeaconHostObject is not correct.");
//	auto constexpr UOnlineBeaconHostObject_BeaconTypeName_Offset = offsetof(UOnlineBeaconHostObject, BeaconTypeName);
//	static_assert(UOnlineBeaconHostObject_BeaconTypeName_Offset == 0x408, "UOnlineBeaconHostObject::BeaconTypeName offset is not 408");
	auto constexpr UOnlineBeaconHostObject_ClientBeaconActorClass_Offset = offsetof(UOnlineBeaconHostObject, ClientBeaconActorClass);
	static_assert(UOnlineBeaconHostObject_ClientBeaconActorClass_Offset == 0x418, "UOnlineBeaconHostObject::ClientBeaconActorClass offset is not 418");
	auto constexpr UOnlineBeaconHostObject_ClientActors_Offset = offsetof(UOnlineBeaconHostObject, ClientActors);
	static_assert(UOnlineBeaconHostObject_ClientActors_Offset == 0x420, "UOnlineBeaconHostObject::ClientActors offset is not 420");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
