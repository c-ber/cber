#pragma once
#include "UDataAsset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleSurfaceAudioData // Size: 0x48
	: public UDataAsset // Size: 0x38
{
private:
	typedef UVehicleSurfaceAudioData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1606); // id32("Class TslGame.VehicleSurfaceAudioData")
		return ptr;
	}
	ExternalPtr<struct UAkAudioEvent> EventIn; /* Ofs: 0x38 Size: 0x8 - ObjectProperty TslGame.VehicleSurfaceAudioData.EventIn */
	ExternalPtr<struct UAkAudioEvent> EventOut; /* Ofs: 0x40 Size: 0x8 - ObjectProperty TslGame.VehicleSurfaceAudioData.EventOut */


	inline bool SetEventIn(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x38, value); }
	inline bool SetEventOut(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleSurfaceAudioData = sizeof(UVehicleSurfaceAudioData); // 72
    static_assert(sizeof(UVehicleSurfaceAudioData) == 0x48, "Size of UVehicleSurfaceAudioData is not correct.");
	auto constexpr UVehicleSurfaceAudioData_EventIn_Offset = offsetof(UVehicleSurfaceAudioData, EventIn);
	static_assert(UVehicleSurfaceAudioData_EventIn_Offset == 0x38, "UVehicleSurfaceAudioData::EventIn offset is not 38");
	auto constexpr UVehicleSurfaceAudioData_EventOut_Offset = offsetof(UVehicleSurfaceAudioData, EventOut);
	static_assert(UVehicleSurfaceAudioData_EventOut_Offset == 0x40, "UVehicleSurfaceAudioData::EventOut offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
