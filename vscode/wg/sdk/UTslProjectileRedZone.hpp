#pragma once
#include "UTslProjectile.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslProjectileRedZone // Size: 0x5D0
	: public UTslProjectile // Size: 0x5B0
{
private:
	typedef UTslProjectileRedZone t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1485); // id32("Class TslGame.TslProjectileRedZone")
		return ptr;
	}
	ExternalPtr<struct UAkAudioEvent> CreateSound; /* Ofs: 0x5B0 Size: 0x8 - ObjectProperty TslGame.TslProjectileRedZone.CreateSound */
	FText DisplayName; /* Ofs: 0x5B8 Size: 0x18 - TextProperty TslGame.TslProjectileRedZone.DisplayName */


	inline bool SetCreateSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetDisplayName(t_structHelper inst, FText value) { inst.WriteOffset(0x5B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslProjectileRedZone = sizeof(UTslProjectileRedZone); // 1488
    static_assert(sizeof(UTslProjectileRedZone) == 0x5D0, "Size of UTslProjectileRedZone is not correct.");
	auto constexpr UTslProjectileRedZone_CreateSound_Offset = offsetof(UTslProjectileRedZone, CreateSound);
	static_assert(UTslProjectileRedZone_CreateSound_Offset == 0x5b0, "UTslProjectileRedZone::CreateSound offset is not 5b0");
	auto constexpr UTslProjectileRedZone_DisplayName_Offset = offsetof(UTslProjectileRedZone, DisplayName);
	static_assert(UTslProjectileRedZone_DisplayName_Offset == 0x5b8, "UTslProjectileRedZone::DisplayName offset is not 5b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
