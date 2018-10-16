#pragma once
#include "UAnimNotifyState.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslReloadMagazineAnimState // Size: 0x40
	: public UAnimNotifyState // Size: 0x38
{
private:
	typedef UTslReloadMagazineAnimState t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1490); // id32("Class TslGame.TslReloadMagazineAnimState")
		return ptr;
	}
	uint8_t boolField38;
	uint8_t UnknownData39[0x7];


	inline bool bReloadAmmoAtTheStateEnd()
	{
		return boolField38& 0x1;
	}
	inline bool SetbReloadAmmoAtTheStateEnd(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslReloadMagazineAnimState = sizeof(UTslReloadMagazineAnimState); // 64
    static_assert(sizeof(UTslReloadMagazineAnimState) == 0x40, "Size of UTslReloadMagazineAnimState is not correct.");
	auto constexpr UTslReloadMagazineAnimState_boolField38_Offset = offsetof(UTslReloadMagazineAnimState, boolField38);
	static_assert(UTslReloadMagazineAnimState_boolField38_Offset == 0x38, "UTslReloadMagazineAnimState::boolField38 offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
