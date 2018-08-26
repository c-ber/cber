#pragma once
#include "USpectatorPawnMovement.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslSpectatorPawnMovement // Size: 0x2C0
	: public USpectatorPawnMovement // Size: 0x290
{
private:
	typedef UTslSpectatorPawnMovement t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1504); // id32("Class TslGame.TslSpectatorPawnMovement")
		return ptr;
	}
	uint8_t UnknownData290[0x4];
	float FastMoveModifier; /* Ofs: 0x294 Size: 0x4 - FloatProperty TslGame.TslSpectatorPawnMovement.FastMoveModifier */
	float SlowMoveModifier; /* Ofs: 0x298 Size: 0x4 - FloatProperty TslGame.TslSpectatorPawnMovement.SlowMoveModifier */
	float MinFreeMoveSpeed; /* Ofs: 0x29C Size: 0x4 - FloatProperty TslGame.TslSpectatorPawnMovement.MinFreeMoveSpeed */
	float MaxFreeMoveSpeed; /* Ofs: 0x2A0 Size: 0x4 - FloatProperty TslGame.TslSpectatorPawnMovement.MaxFreeMoveSpeed */
	float MinFreeMoveSpeedHeight; /* Ofs: 0x2A4 Size: 0x4 - FloatProperty TslGame.TslSpectatorPawnMovement.MinFreeMoveSpeedHeight */
	float MaxFreeMoveSpeedHeight; /* Ofs: 0x2A8 Size: 0x4 - FloatProperty TslGame.TslSpectatorPawnMovement.MaxFreeMoveSpeedHeight */
	float AbsoluteMinZ; /* Ofs: 0x2AC Size: 0x4 - FloatProperty TslGame.TslSpectatorPawnMovement.AbsoluteMinZ */
	float AbsoluteMaxZ; /* Ofs: 0x2B0 Size: 0x4 - FloatProperty TslGame.TslSpectatorPawnMovement.AbsoluteMaxZ */
	uint8_t UnknownData2B4[0xC];


	inline bool SetFastMoveModifier(t_structHelper inst, float value) { inst.WriteOffset(0x294, value); }
	inline bool SetSlowMoveModifier(t_structHelper inst, float value) { inst.WriteOffset(0x298, value); }
	inline bool SetMinFreeMoveSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x29C, value); }
	inline bool SetMaxFreeMoveSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetMinFreeMoveSpeedHeight(t_structHelper inst, float value) { inst.WriteOffset(0x2A4, value); }
	inline bool SetMaxFreeMoveSpeedHeight(t_structHelper inst, float value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetAbsoluteMinZ(t_structHelper inst, float value) { inst.WriteOffset(0x2AC, value); }
	inline bool SetAbsoluteMaxZ(t_structHelper inst, float value) { inst.WriteOffset(0x2B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslSpectatorPawnMovement = sizeof(UTslSpectatorPawnMovement); // 704
    static_assert(sizeof(UTslSpectatorPawnMovement) == 0x2C0, "Size of UTslSpectatorPawnMovement is not correct.");
	auto constexpr UTslSpectatorPawnMovement_FastMoveModifier_Offset = offsetof(UTslSpectatorPawnMovement, FastMoveModifier);
	static_assert(UTslSpectatorPawnMovement_FastMoveModifier_Offset == 0x294, "UTslSpectatorPawnMovement::FastMoveModifier offset is not 294");
	auto constexpr UTslSpectatorPawnMovement_SlowMoveModifier_Offset = offsetof(UTslSpectatorPawnMovement, SlowMoveModifier);
	static_assert(UTslSpectatorPawnMovement_SlowMoveModifier_Offset == 0x298, "UTslSpectatorPawnMovement::SlowMoveModifier offset is not 298");
	auto constexpr UTslSpectatorPawnMovement_MinFreeMoveSpeed_Offset = offsetof(UTslSpectatorPawnMovement, MinFreeMoveSpeed);
	static_assert(UTslSpectatorPawnMovement_MinFreeMoveSpeed_Offset == 0x29c, "UTslSpectatorPawnMovement::MinFreeMoveSpeed offset is not 29c");
	auto constexpr UTslSpectatorPawnMovement_MaxFreeMoveSpeed_Offset = offsetof(UTslSpectatorPawnMovement, MaxFreeMoveSpeed);
	static_assert(UTslSpectatorPawnMovement_MaxFreeMoveSpeed_Offset == 0x2a0, "UTslSpectatorPawnMovement::MaxFreeMoveSpeed offset is not 2a0");
	auto constexpr UTslSpectatorPawnMovement_MinFreeMoveSpeedHeight_Offset = offsetof(UTslSpectatorPawnMovement, MinFreeMoveSpeedHeight);
	static_assert(UTslSpectatorPawnMovement_MinFreeMoveSpeedHeight_Offset == 0x2a4, "UTslSpectatorPawnMovement::MinFreeMoveSpeedHeight offset is not 2a4");
	auto constexpr UTslSpectatorPawnMovement_MaxFreeMoveSpeedHeight_Offset = offsetof(UTslSpectatorPawnMovement, MaxFreeMoveSpeedHeight);
	static_assert(UTslSpectatorPawnMovement_MaxFreeMoveSpeedHeight_Offset == 0x2a8, "UTslSpectatorPawnMovement::MaxFreeMoveSpeedHeight offset is not 2a8");
	auto constexpr UTslSpectatorPawnMovement_AbsoluteMinZ_Offset = offsetof(UTslSpectatorPawnMovement, AbsoluteMinZ);
	static_assert(UTslSpectatorPawnMovement_AbsoluteMinZ_Offset == 0x2ac, "UTslSpectatorPawnMovement::AbsoluteMinZ offset is not 2ac");
	auto constexpr UTslSpectatorPawnMovement_AbsoluteMaxZ_Offset = offsetof(UTslSpectatorPawnMovement, AbsoluteMaxZ);
	static_assert(UTslSpectatorPawnMovement_AbsoluteMaxZ_Offset == 0x2b0, "UTslSpectatorPawnMovement::AbsoluteMaxZ offset is not 2b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
