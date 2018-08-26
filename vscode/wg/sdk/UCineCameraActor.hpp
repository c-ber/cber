#pragma once
#include "UCameraActor.hpp"
#include "FCameraLookatTrackingSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCineCameraActor // Size: 0x9B0
	: public UCameraActor // Size: 0x970
{
private:
	typedef UCineCameraActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1269); // id32("Class CinematicCamera.CineCameraActor")
		return ptr;
	}
	FCameraLookatTrackingSettings LookatTrackingSettings; /* Ofs: 0x970 Size: 0x30 - StructProperty CinematicCamera.CineCameraActor.LookatTrackingSettings */
	uint8_t UnknownData9A0[0x10];


	inline bool SetLookatTrackingSettings(t_structHelper inst, FCameraLookatTrackingSettings value) { inst.WriteOffset(0x970, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCineCameraActor = sizeof(UCineCameraActor); // 2480
    static_assert(sizeof(UCineCameraActor) == 0x9B0, "Size of UCineCameraActor is not correct.");
	auto constexpr UCineCameraActor_LookatTrackingSettings_Offset = offsetof(UCineCameraActor, LookatTrackingSettings);
	static_assert(UCineCameraActor_LookatTrackingSettings_Offset == 0x970, "UCineCameraActor::LookatTrackingSettings offset is not 970");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
