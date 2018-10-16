#pragma once
#include "UTslVehicleSeatActor.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleSeatBase_C // Size: 0x4C4
	: public UTslVehicleSeatActor // Size: 0x4A0
{
private:
	typedef UVehicleSeatBase_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124232); // id32("BlueprintGeneratedClass VehicleSeatBase.VehicleSeatBase_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x4A0 Size: 0x8 - StructProperty VehicleSeatBase.VehicleSeatBase_C.UberGraphFrame */
	ExternalPtr<struct USphereComponent> VehicleSeatInteractionCollision; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty VehicleSeatBase.VehicleSeatBase_C.VehicleSeatInteractionCollision */
	ExternalPtr<struct UInteractionComponent> Interaction; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty VehicleSeatBase.VehicleSeatBase_C.Interaction */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty VehicleSeatBase.VehicleSeatBase_C.DefaultSceneRoot */
	float LastInteractionTime; /* Ofs: 0x4C0 Size: 0x4 - FloatProperty VehicleSeatBase.VehicleSeatBase_C.LastInteractionTime */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetVehicleSeatInteractionCollision(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetInteraction(t_structHelper inst, ExternalPtr<struct UInteractionComponent> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetLastInteractionTime(t_structHelper inst, float value) { inst.WriteOffset(0x4C0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleSeatBase_C = sizeof(UVehicleSeatBase_C); // 1220
    static_assert(sizeof(UVehicleSeatBase_C) == 0x4C4, "Size of UVehicleSeatBase_C is not correct.");
	auto constexpr UVehicleSeatBase_C_UberGraphFrame_Offset = offsetof(UVehicleSeatBase_C, UberGraphFrame);
	static_assert(UVehicleSeatBase_C_UberGraphFrame_Offset == 0x4a0, "UVehicleSeatBase_C::UberGraphFrame offset is not 4a0");
	auto constexpr UVehicleSeatBase_C_VehicleSeatInteractionCollision_Offset = offsetof(UVehicleSeatBase_C, VehicleSeatInteractionCollision);
	static_assert(UVehicleSeatBase_C_VehicleSeatInteractionCollision_Offset == 0x4a8, "UVehicleSeatBase_C::VehicleSeatInteractionCollision offset is not 4a8");
	auto constexpr UVehicleSeatBase_C_Interaction_Offset = offsetof(UVehicleSeatBase_C, Interaction);
	static_assert(UVehicleSeatBase_C_Interaction_Offset == 0x4b0, "UVehicleSeatBase_C::Interaction offset is not 4b0");
	auto constexpr UVehicleSeatBase_C_DefaultSceneRoot_Offset = offsetof(UVehicleSeatBase_C, DefaultSceneRoot);
	static_assert(UVehicleSeatBase_C_DefaultSceneRoot_Offset == 0x4b8, "UVehicleSeatBase_C::DefaultSceneRoot offset is not 4b8");
	auto constexpr UVehicleSeatBase_C_LastInteractionTime_Offset = offsetof(UVehicleSeatBase_C, LastInteractionTime);
	static_assert(UVehicleSeatBase_C_LastInteractionTime_Offset == 0x4c0, "UVehicleSeatBase_C::LastInteractionTime offset is not 4c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
