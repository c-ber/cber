#pragma once
#include "UTslPlayerController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPerfBotPlayerController // Size: 0xD30
	: public UTslPlayerController // Size: 0xCD0
{
private:
	typedef UPerfBotPlayerController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1327); // id32("Class TslGame.PerfBotPlayerController")
		return ptr;
	}
//	int32_t AmmoClips; /* Ofs: 0xCC8 Size: 0x4 - IntProperty TslGame.PerfBotPlayerController.AmmoClips */
	ExternalPtr<struct UClass> WeaponType; /* Ofs: 0xCD0 Size: 0x8 - ClassProperty TslGame.PerfBotPlayerController.WeaponType */
	uint8_t UnknownDataCD8[0x58];


//	inline bool SetAmmoClips(t_structHelper inst, int32_t value) { inst.WriteOffset(0xCC8, value); }
	inline bool SetWeaponType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xCD0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPerfBotPlayerController = sizeof(UPerfBotPlayerController); // 3376
    static_assert(sizeof(UPerfBotPlayerController) == 0xD30, "Size of UPerfBotPlayerController is not correct.");
//	auto constexpr UPerfBotPlayerController_AmmoClips_Offset = offsetof(UPerfBotPlayerController, AmmoClips);
//	static_assert(UPerfBotPlayerController_AmmoClips_Offset == 0xcc8, "UPerfBotPlayerController::AmmoClips offset is not cc8");
	auto constexpr UPerfBotPlayerController_WeaponType_Offset = offsetof(UPerfBotPlayerController, WeaponType);
	static_assert(UPerfBotPlayerController_WeaponType_Offset == 0xcd0, "UPerfBotPlayerController::WeaponType offset is not cd0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
