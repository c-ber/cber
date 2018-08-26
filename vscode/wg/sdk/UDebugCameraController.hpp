#pragma once
#include "UPlayerController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDebugCameraController // Size: 0x7D0
	: public UPlayerController // Size: 0x780
{
private:
	typedef UDebugCameraController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1733); // id32("Class Engine.DebugCameraController")
		return ptr;
	}
	uint8_t boolField780;
	uint8_t UnknownData781[0x7];
	ExternalPtr<struct UDrawFrustumComponent> DrawFrustum; /* Ofs: 0x788 Size: 0x8 - ObjectProperty Engine.DebugCameraController.DrawFrustum */
	uint8_t UnknownData790[0x20];
	float SpeedScale; /* Ofs: 0x7B0 Size: 0x4 - FloatProperty Engine.DebugCameraController.SpeedScale */
	float InitialMaxSpeed; /* Ofs: 0x7B4 Size: 0x4 - FloatProperty Engine.DebugCameraController.InitialMaxSpeed */
	float InitialAccel; /* Ofs: 0x7B8 Size: 0x4 - FloatProperty Engine.DebugCameraController.InitialAccel */
	float InitialDecel; /* Ofs: 0x7BC Size: 0x4 - FloatProperty Engine.DebugCameraController.InitialDecel */
	uint8_t UnknownData7C0[0x10];


	inline bool bShowSelectedInfo()
	{
		return boolField780& 0x1;
	}
	inline bool SetbShowSelectedInfo(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x780, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsFrozenRendering()
	{
		return boolField780& 0x2;
	}
	inline bool SetbIsFrozenRendering(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x780, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetDrawFrustum(t_structHelper inst, ExternalPtr<struct UDrawFrustumComponent> value) { inst.WriteOffset(0x788, value); }
	inline bool SetSpeedScale(t_structHelper inst, float value) { inst.WriteOffset(0x7B0, value); }
	inline bool SetInitialMaxSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x7B4, value); }
	inline bool SetInitialAccel(t_structHelper inst, float value) { inst.WriteOffset(0x7B8, value); }
	inline bool SetInitialDecel(t_structHelper inst, float value) { inst.WriteOffset(0x7BC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDebugCameraController = sizeof(UDebugCameraController); // 2000
    static_assert(sizeof(UDebugCameraController) == 0x7D0, "Size of UDebugCameraController is not correct.");
	auto constexpr UDebugCameraController_boolField780_Offset = offsetof(UDebugCameraController, boolField780);
	static_assert(UDebugCameraController_boolField780_Offset == 0x780, "UDebugCameraController::boolField780 offset is not 780");
	auto constexpr UDebugCameraController_DrawFrustum_Offset = offsetof(UDebugCameraController, DrawFrustum);
	static_assert(UDebugCameraController_DrawFrustum_Offset == 0x788, "UDebugCameraController::DrawFrustum offset is not 788");
	auto constexpr UDebugCameraController_SpeedScale_Offset = offsetof(UDebugCameraController, SpeedScale);
	static_assert(UDebugCameraController_SpeedScale_Offset == 0x7b0, "UDebugCameraController::SpeedScale offset is not 7b0");
	auto constexpr UDebugCameraController_InitialMaxSpeed_Offset = offsetof(UDebugCameraController, InitialMaxSpeed);
	static_assert(UDebugCameraController_InitialMaxSpeed_Offset == 0x7b4, "UDebugCameraController::InitialMaxSpeed offset is not 7b4");
	auto constexpr UDebugCameraController_InitialAccel_Offset = offsetof(UDebugCameraController, InitialAccel);
	static_assert(UDebugCameraController_InitialAccel_Offset == 0x7b8, "UDebugCameraController::InitialAccel offset is not 7b8");
	auto constexpr UDebugCameraController_InitialDecel_Offset = offsetof(UDebugCameraController, InitialDecel);
	static_assert(UDebugCameraController_InitialDecel_Offset == 0x7bc, "UDebugCameraController::InitialDecel offset is not 7bc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
