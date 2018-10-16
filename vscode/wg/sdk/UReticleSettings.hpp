#pragma once
#include "UDataAsset.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReticleSettings // Size: 0x68
	: public UDataAsset // Size: 0x38
{
private:
	typedef UReticleSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1872); // id32("Class TslGame.ReticleSettings")
		return ptr;
	}
	float ReticleAngularSize; /* Ofs: 0x38 Size: 0x4 - FloatProperty TslGame.ReticleSettings.ReticleAngularSize */
	FVector2D ReticleCenter; /* Ofs: 0x3C Size: 0x8 - StructProperty TslGame.ReticleSettings.ReticleCenter */
	uint8_t UnknownData44[0x4];
	ExternalPtr<struct UTexture2D> ReticleTexture; /* Ofs: 0x48 Size: 0x8 - ObjectProperty TslGame.ReticleSettings.ReticleTexture */
	uint8_t boolField50;
	uint8_t UnknownData51[0x7];
	TArray<struct FReticleTextureData> ReticleTextureDataArray; /* Ofs: 0x58 Size: 0x10 - ArrayProperty TslGame.ReticleSettings.ReticleTextureDataArray */


	inline bool SetReticleAngularSize(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetReticleCenter(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x3C, value); }
	inline bool SetReticleTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x48, value); }
	inline bool bUseReticleTextureOverride()
	{
		return boolField50& 0x1;
	}
	inline bool SetbUseReticleTextureOverride(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetReticleTextureDataArray(t_structHelper inst, TArray<struct FReticleTextureData> value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReticleSettings = sizeof(UReticleSettings); // 104
    static_assert(sizeof(UReticleSettings) == 0x68, "Size of UReticleSettings is not correct.");
	auto constexpr UReticleSettings_ReticleAngularSize_Offset = offsetof(UReticleSettings, ReticleAngularSize);
	static_assert(UReticleSettings_ReticleAngularSize_Offset == 0x38, "UReticleSettings::ReticleAngularSize offset is not 38");
	auto constexpr UReticleSettings_ReticleCenter_Offset = offsetof(UReticleSettings, ReticleCenter);
	static_assert(UReticleSettings_ReticleCenter_Offset == 0x3c, "UReticleSettings::ReticleCenter offset is not 3c");
	auto constexpr UReticleSettings_ReticleTexture_Offset = offsetof(UReticleSettings, ReticleTexture);
	static_assert(UReticleSettings_ReticleTexture_Offset == 0x48, "UReticleSettings::ReticleTexture offset is not 48");
	auto constexpr UReticleSettings_boolField50_Offset = offsetof(UReticleSettings, boolField50);
	static_assert(UReticleSettings_boolField50_Offset == 0x50, "UReticleSettings::boolField50 offset is not 50");
	auto constexpr UReticleSettings_ReticleTextureDataArray_Offset = offsetof(UReticleSettings, ReticleTextureDataArray);
	static_assert(UReticleSettings_ReticleTextureDataArray_Offset == 0x58, "UReticleSettings::ReticleTextureDataArray offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
