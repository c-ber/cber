#pragma once
#include "UCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslCharacterProxy // Size: 0x8A0
	: public UCharacter // Size: 0x870
{
private:
	typedef UTslCharacterProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1345); // id32("Class TslGame.TslCharacterProxy")
		return ptr;
	}
	uint8_t UnknownData870[0x8];
	TArray<ExternalPtr<struct UWeaponClone>> ArmedWeapons; /* Ofs: 0x878 Size: 0x10 - ArrayProperty TslGame.TslCharacterProxy.ArmedWeapons */
	ExternalPtr<struct UWeaponAnimInfoComponent> WeaponAnimInfoComponent; /* Ofs: 0x888 Size: 0x8 - ObjectProperty TslGame.TslCharacterProxy.WeaponAnimInfoComponent */
	float WeaponUpdateIntervalSeconds; /* Ofs: 0x890 Size: 0x4 - FloatProperty TslGame.TslCharacterProxy.WeaponUpdateIntervalSeconds */
	uint8_t UnknownData894[0xC];


	inline bool SetArmedWeapons(t_structHelper inst, TArray<ExternalPtr<struct UWeaponClone>> value) { inst.WriteOffset(0x878, value); }
	inline bool SetWeaponAnimInfoComponent(t_structHelper inst, ExternalPtr<struct UWeaponAnimInfoComponent> value) { inst.WriteOffset(0x888, value); }
	inline bool SetWeaponUpdateIntervalSeconds(t_structHelper inst, float value) { inst.WriteOffset(0x890, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslCharacterProxy = sizeof(UTslCharacterProxy); // 2208
    static_assert(sizeof(UTslCharacterProxy) == 0x8A0, "Size of UTslCharacterProxy is not correct.");
	auto constexpr UTslCharacterProxy_ArmedWeapons_Offset = offsetof(UTslCharacterProxy, ArmedWeapons);
	static_assert(UTslCharacterProxy_ArmedWeapons_Offset == 0x878, "UTslCharacterProxy::ArmedWeapons offset is not 878");
	auto constexpr UTslCharacterProxy_WeaponAnimInfoComponent_Offset = offsetof(UTslCharacterProxy, WeaponAnimInfoComponent);
	static_assert(UTslCharacterProxy_WeaponAnimInfoComponent_Offset == 0x888, "UTslCharacterProxy::WeaponAnimInfoComponent offset is not 888");
	auto constexpr UTslCharacterProxy_WeaponUpdateIntervalSeconds_Offset = offsetof(UTslCharacterProxy, WeaponUpdateIntervalSeconds);
	static_assert(UTslCharacterProxy_WeaponUpdateIntervalSeconds_Offset == 0x890, "UTslCharacterProxy::WeaponUpdateIntervalSeconds offset is not 890");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
