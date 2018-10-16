#pragma once
#include "UPlayerController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCustomVehicleController // Size: 0x790
	: public UPlayerController // Size: 0x780
{
private:
	typedef UCustomVehicleController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2056); // id32("Class OceanPlugin.CustomVehicleController")
		return ptr;
	}
	ExternalPtr<struct UPawn> PlayerPawn; /* Ofs: 0x780 Size: 0x8 - ObjectProperty OceanPlugin.CustomVehicleController.PlayerPawn */
	uint8_t UnknownData788[0x8];


	inline bool SetPlayerPawn(t_structHelper inst, ExternalPtr<struct UPawn> value) { inst.WriteOffset(0x780, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCustomVehicleController = sizeof(UCustomVehicleController); // 1936
    static_assert(sizeof(UCustomVehicleController) == 0x790, "Size of UCustomVehicleController is not correct.");
	auto constexpr UCustomVehicleController_PlayerPawn_Offset = offsetof(UCustomVehicleController, PlayerPawn);
	static_assert(UCustomVehicleController_PlayerPawn_Offset == 0x780, "UCustomVehicleController::PlayerPawn offset is not 780");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
