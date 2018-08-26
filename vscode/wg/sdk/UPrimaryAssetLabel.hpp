#pragma once
#include "UPrimaryDataAsset.hpp"
#include "FPrimaryAssetRules.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPrimaryAssetLabel // Size: 0x70
	: public UPrimaryDataAsset // Size: 0x38
{
private:
	typedef UPrimaryAssetLabel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(713); // id32("Class Engine.PrimaryAssetLabel")
		return ptr;
	}
	FPrimaryAssetRules Rules; /* Ofs: 0x38 Size: 0x10 - StructProperty Engine.PrimaryAssetLabel.Rules */
	uint8_t boolField48;
	uint8_t UnknownData49[0x7];
	TArray<ExternalPtr<struct UObject>> ExplicitAssets; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.PrimaryAssetLabel.ExplicitAssets */
	TArray<ExternalPtr<struct UClass>> ExplicitBlueprints; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Engine.PrimaryAssetLabel.ExplicitBlueprints */


	inline bool SetRules(t_structHelper inst, FPrimaryAssetRules value) { inst.WriteOffset(0x38, value); }
	inline bool bLabelAssetsInMyDirectory()
	{
		return boolField48& 0x1;
	}
	inline bool SetbLabelAssetsInMyDirectory(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetExplicitAssets(t_structHelper inst, TArray<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x50, value); }
	inline bool SetExplicitBlueprints(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPrimaryAssetLabel = sizeof(UPrimaryAssetLabel); // 112
    static_assert(sizeof(UPrimaryAssetLabel) == 0x70, "Size of UPrimaryAssetLabel is not correct.");
	auto constexpr UPrimaryAssetLabel_Rules_Offset = offsetof(UPrimaryAssetLabel, Rules);
	static_assert(UPrimaryAssetLabel_Rules_Offset == 0x38, "UPrimaryAssetLabel::Rules offset is not 38");
	auto constexpr UPrimaryAssetLabel_boolField48_Offset = offsetof(UPrimaryAssetLabel, boolField48);
	static_assert(UPrimaryAssetLabel_boolField48_Offset == 0x48, "UPrimaryAssetLabel::boolField48 offset is not 48");
	auto constexpr UPrimaryAssetLabel_ExplicitAssets_Offset = offsetof(UPrimaryAssetLabel, ExplicitAssets);
	static_assert(UPrimaryAssetLabel_ExplicitAssets_Offset == 0x50, "UPrimaryAssetLabel::ExplicitAssets offset is not 50");
	auto constexpr UPrimaryAssetLabel_ExplicitBlueprints_Offset = offsetof(UPrimaryAssetLabel, ExplicitBlueprints);
	static_assert(UPrimaryAssetLabel_ExplicitBlueprints_Offset == 0x60, "UPrimaryAssetLabel::ExplicitBlueprints offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
