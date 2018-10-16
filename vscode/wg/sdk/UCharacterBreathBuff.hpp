#pragma once
#include "UTslBuff.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCharacterBreathBuff // Size: 0x480
	: public UTslBuff // Size: 0x470
{
private:
	typedef UCharacterBreathBuff t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1335); // id32("Class TslGame.CharacterBreathBuff")
		return ptr;
	}
//	float BreathPerTick; /* Ofs: 0x468 Size: 0x4 - FloatProperty TslGame.CharacterBreathBuff.BreathPerTick */
	ExternalPtr<struct UCharacterBreathComponent> SpawnerComponent; /* Ofs: 0x470 Size: 0x8 - ObjectProperty TslGame.CharacterBreathBuff.SpawnerComponent */
	uint8_t UnknownData478[0x8];


//	inline bool SetBreathPerTick(t_structHelper inst, float value) { inst.WriteOffset(0x468, value); }
	inline bool SetSpawnerComponent(t_structHelper inst, ExternalPtr<struct UCharacterBreathComponent> value) { inst.WriteOffset(0x470, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCharacterBreathBuff = sizeof(UCharacterBreathBuff); // 1152
    static_assert(sizeof(UCharacterBreathBuff) == 0x480, "Size of UCharacterBreathBuff is not correct.");
//	auto constexpr UCharacterBreathBuff_BreathPerTick_Offset = offsetof(UCharacterBreathBuff, BreathPerTick);
//	static_assert(UCharacterBreathBuff_BreathPerTick_Offset == 0x468, "UCharacterBreathBuff::BreathPerTick offset is not 468");
	auto constexpr UCharacterBreathBuff_SpawnerComponent_Offset = offsetof(UCharacterBreathBuff, SpawnerComponent);
	static_assert(UCharacterBreathBuff_SpawnerComponent_Offset == 0x470, "UCharacterBreathBuff::SpawnerComponent offset is not 470");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
