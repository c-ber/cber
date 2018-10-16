#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGamePadInputAixsComponent // Size: 0x210
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UGamePadInputAixsComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1865); // id32("Class TslGame.GamePadInputAixsComponent")
		return ptr;
	}
	uint8_t UnknownData1F0[0x4];
	float YawAccelPct; /* Ofs: 0x1F4 Size: 0x4 - FloatProperty TslGame.GamePadInputAixsComponent.YawAccelPct */
	float PitchAccelPct; /* Ofs: 0x1F8 Size: 0x4 - FloatProperty TslGame.GamePadInputAixsComponent.PitchAccelPct */
	float LastYawAccelDir; /* Ofs: 0x1FC Size: 0x4 - FloatProperty TslGame.GamePadInputAixsComponent.LastYawAccelDir */
	float LastPitchAccelDir; /* Ofs: 0x200 Size: 0x4 - FloatProperty TslGame.GamePadInputAixsComponent.LastPitchAccelDir */
	float LastYawInput; /* Ofs: 0x204 Size: 0x4 - FloatProperty TslGame.GamePadInputAixsComponent.LastYawInput */
	float LastPitchInput; /* Ofs: 0x208 Size: 0x4 - FloatProperty TslGame.GamePadInputAixsComponent.LastPitchInput */
	uint8_t UnknownData20C[0x4];


	inline bool SetYawAccelPct(t_structHelper inst, float value) { inst.WriteOffset(0x1F4, value); }
	inline bool SetPitchAccelPct(t_structHelper inst, float value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetLastYawAccelDir(t_structHelper inst, float value) { inst.WriteOffset(0x1FC, value); }
	inline bool SetLastPitchAccelDir(t_structHelper inst, float value) { inst.WriteOffset(0x200, value); }
	inline bool SetLastYawInput(t_structHelper inst, float value) { inst.WriteOffset(0x204, value); }
	inline bool SetLastPitchInput(t_structHelper inst, float value) { inst.WriteOffset(0x208, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGamePadInputAixsComponent = sizeof(UGamePadInputAixsComponent); // 528
    static_assert(sizeof(UGamePadInputAixsComponent) == 0x210, "Size of UGamePadInputAixsComponent is not correct.");
	auto constexpr UGamePadInputAixsComponent_YawAccelPct_Offset = offsetof(UGamePadInputAixsComponent, YawAccelPct);
	static_assert(UGamePadInputAixsComponent_YawAccelPct_Offset == 0x1f4, "UGamePadInputAixsComponent::YawAccelPct offset is not 1f4");
	auto constexpr UGamePadInputAixsComponent_PitchAccelPct_Offset = offsetof(UGamePadInputAixsComponent, PitchAccelPct);
	static_assert(UGamePadInputAixsComponent_PitchAccelPct_Offset == 0x1f8, "UGamePadInputAixsComponent::PitchAccelPct offset is not 1f8");
	auto constexpr UGamePadInputAixsComponent_LastYawAccelDir_Offset = offsetof(UGamePadInputAixsComponent, LastYawAccelDir);
	static_assert(UGamePadInputAixsComponent_LastYawAccelDir_Offset == 0x1fc, "UGamePadInputAixsComponent::LastYawAccelDir offset is not 1fc");
	auto constexpr UGamePadInputAixsComponent_LastPitchAccelDir_Offset = offsetof(UGamePadInputAixsComponent, LastPitchAccelDir);
	static_assert(UGamePadInputAixsComponent_LastPitchAccelDir_Offset == 0x200, "UGamePadInputAixsComponent::LastPitchAccelDir offset is not 200");
	auto constexpr UGamePadInputAixsComponent_LastYawInput_Offset = offsetof(UGamePadInputAixsComponent, LastYawInput);
	static_assert(UGamePadInputAixsComponent_LastYawInput_Offset == 0x204, "UGamePadInputAixsComponent::LastYawInput offset is not 204");
	auto constexpr UGamePadInputAixsComponent_LastPitchInput_Offset = offsetof(UGamePadInputAixsComponent, LastPitchInput);
	static_assert(UGamePadInputAixsComponent_LastPitchInput_Offset == 0x208, "UGamePadInputAixsComponent::LastPitchInput offset is not 208");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
