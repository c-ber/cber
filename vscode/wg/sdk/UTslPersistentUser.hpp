#pragma once
#include "USaveGame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPersistentUser // Size: 0x60
	: public USaveGame // Size: 0x30
{
private:
	typedef UTslPersistentUser t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1426); // id32("Class TslGame.TslPersistentUser")
		return ptr;
	}
	float Gamma; /* Ofs: 0x30 Size: 0x4 - FloatProperty TslGame.TslPersistentUser.Gamma */
	float AimSensitivity; /* Ofs: 0x34 Size: 0x4 - FloatProperty TslGame.TslPersistentUser.AimSensitivity */
	uint8_t boolField38;
	uint8_t UnknownData39[0x3];
	float ScreenScalePercentage; /* Ofs: 0x3C Size: 0x4 - FloatProperty TslGame.TslPersistentUser.ScreenScalePercentage */
	uint8_t UnknownData40[0x20];


	inline bool SetGamma(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetAimSensitivity(t_structHelper inst, float value) { inst.WriteOffset(0x34, value); }
	inline bool bInvertedYAxis()
	{
		return boolField38& 0x1;
	}
	inline bool SetbInvertedYAxis(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetScreenScalePercentage(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPersistentUser = sizeof(UTslPersistentUser); // 96
    static_assert(sizeof(UTslPersistentUser) == 0x60, "Size of UTslPersistentUser is not correct.");
	auto constexpr UTslPersistentUser_Gamma_Offset = offsetof(UTslPersistentUser, Gamma);
	static_assert(UTslPersistentUser_Gamma_Offset == 0x30, "UTslPersistentUser::Gamma offset is not 30");
	auto constexpr UTslPersistentUser_AimSensitivity_Offset = offsetof(UTslPersistentUser, AimSensitivity);
	static_assert(UTslPersistentUser_AimSensitivity_Offset == 0x34, "UTslPersistentUser::AimSensitivity offset is not 34");
	auto constexpr UTslPersistentUser_boolField38_Offset = offsetof(UTslPersistentUser, boolField38);
	static_assert(UTslPersistentUser_boolField38_Offset == 0x38, "UTslPersistentUser::boolField38 offset is not 38");
	auto constexpr UTslPersistentUser_ScreenScalePercentage_Offset = offsetof(UTslPersistentUser, ScreenScalePercentage);
	static_assert(UTslPersistentUser_ScreenScalePercentage_Offset == 0x3c, "UTslPersistentUser::ScreenScalePercentage offset is not 3c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
