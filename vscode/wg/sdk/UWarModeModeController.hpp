#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeModeController // Size: 0x450
	: public UActor // Size: 0x410
{
private:
	typedef UWarModeModeController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1891); // id32("Class TslGame.WarModeModeController")
		return ptr;
	}
//	ExternalPtr<struct UClass> WarModeConfigClass; /* Ofs: 0x408 Size: 0x8 - ClassProperty TslGame.WarModeModeController.WarModeConfigClass */
	ExternalPtr<struct UWarModeConfig> WarModeConfig; /* Ofs: 0x410 Size: 0x8 - ObjectProperty TslGame.WarModeModeController.WarModeConfig */
	ExternalPtr<struct UClass> AirRespawnProcessorClass; /* Ofs: 0x418 Size: 0x8 - ClassProperty TslGame.WarModeModeController.AirRespawnProcessorClass */
	ExternalPtr<struct UAirRespawnProcessor> AirRespawnProcessor; /* Ofs: 0x420 Size: 0x8 - ObjectProperty TslGame.WarModeModeController.AirRespawnProcessor */
	ExternalPtr<struct UTslGameMode> TslGameMode; /* Ofs: 0x428 Size: 0x8 - ObjectProperty TslGame.WarModeModeController.TslGameMode */
	uint8_t UnknownData430[0x10];
	ExternalPtr<struct UClass> CarePackegeClass; /* Ofs: 0x440 Size: 0x8 - ClassProperty TslGame.WarModeModeController.CarePackegeClass */
	ExternalPtr<struct UWarModeCarePackage> CarePackege; /* Ofs: 0x448 Size: 0x8 - ObjectProperty TslGame.WarModeModeController.CarePackege */


//	inline bool SetWarModeConfigClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x408, value); }
	inline bool SetWarModeConfig(t_structHelper inst, ExternalPtr<struct UWarModeConfig> value) { inst.WriteOffset(0x410, value); }
	inline bool SetAirRespawnProcessorClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x418, value); }
	inline bool SetAirRespawnProcessor(t_structHelper inst, ExternalPtr<struct UAirRespawnProcessor> value) { inst.WriteOffset(0x420, value); }
	inline bool SetTslGameMode(t_structHelper inst, ExternalPtr<struct UTslGameMode> value) { inst.WriteOffset(0x428, value); }
	inline bool SetCarePackegeClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x440, value); }
	inline bool SetCarePackege(t_structHelper inst, ExternalPtr<struct UWarModeCarePackage> value) { inst.WriteOffset(0x448, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeModeController = sizeof(UWarModeModeController); // 1104
    static_assert(sizeof(UWarModeModeController) == 0x450, "Size of UWarModeModeController is not correct.");
//	auto constexpr UWarModeModeController_WarModeConfigClass_Offset = offsetof(UWarModeModeController, WarModeConfigClass);
//	static_assert(UWarModeModeController_WarModeConfigClass_Offset == 0x408, "UWarModeModeController::WarModeConfigClass offset is not 408");
	auto constexpr UWarModeModeController_WarModeConfig_Offset = offsetof(UWarModeModeController, WarModeConfig);
	static_assert(UWarModeModeController_WarModeConfig_Offset == 0x410, "UWarModeModeController::WarModeConfig offset is not 410");
	auto constexpr UWarModeModeController_AirRespawnProcessorClass_Offset = offsetof(UWarModeModeController, AirRespawnProcessorClass);
	static_assert(UWarModeModeController_AirRespawnProcessorClass_Offset == 0x418, "UWarModeModeController::AirRespawnProcessorClass offset is not 418");
	auto constexpr UWarModeModeController_AirRespawnProcessor_Offset = offsetof(UWarModeModeController, AirRespawnProcessor);
	static_assert(UWarModeModeController_AirRespawnProcessor_Offset == 0x420, "UWarModeModeController::AirRespawnProcessor offset is not 420");
	auto constexpr UWarModeModeController_TslGameMode_Offset = offsetof(UWarModeModeController, TslGameMode);
	static_assert(UWarModeModeController_TslGameMode_Offset == 0x428, "UWarModeModeController::TslGameMode offset is not 428");
	auto constexpr UWarModeModeController_CarePackegeClass_Offset = offsetof(UWarModeModeController, CarePackegeClass);
	static_assert(UWarModeModeController_CarePackegeClass_Offset == 0x440, "UWarModeModeController::CarePackegeClass offset is not 440");
	auto constexpr UWarModeModeController_CarePackege_Offset = offsetof(UWarModeModeController, CarePackege);
	static_assert(UWarModeModeController_CarePackege_Offset == 0x448, "UWarModeModeController::CarePackege offset is not 448");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
