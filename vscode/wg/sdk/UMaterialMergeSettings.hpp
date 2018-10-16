#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialMergeSettings // Size: 0xB0
	: public UObject // Size: 0x30
{
private:
	typedef UMaterialMergeSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1929); // id32("Class TslGame.MaterialMergeSettings")
		return ptr;
	}
	uint8_t UnknownData30[0x58];
	ExternalPtr<struct UMaterial> MasterMaterial; /* Ofs: 0x88 Size: 0x8 - ObjectProperty TslGame.MaterialMergeSettings.MasterMaterial */
	ExternalPtr<struct UMaterial> MergedMaterial; /* Ofs: 0x90 Size: 0x8 - ObjectProperty TslGame.MaterialMergeSettings.MergedMaterial */
	TArray<struct FMaterialMergerParameters> ParameterList; /* Ofs: 0x98 Size: 0x10 - ArrayProperty TslGame.MaterialMergeSettings.ParameterList */
	uint8_t boolFieldA8;
	uint8_t UnknownDataA9[0x7];


	inline bool SetMasterMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x88, value); }
	inline bool SetMergedMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x90, value); }
	inline bool SetParameterList(t_structHelper inst, TArray<struct FMaterialMergerParameters> value) { inst.WriteOffset(0x98, value); }
	inline bool bUpdateParameterList()
	{
		return boolFieldA8& 0x1;
	}
	inline bool SetbUpdateParameterList(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialMergeSettings = sizeof(UMaterialMergeSettings); // 176
    static_assert(sizeof(UMaterialMergeSettings) == 0xB0, "Size of UMaterialMergeSettings is not correct.");
	auto constexpr UMaterialMergeSettings_MasterMaterial_Offset = offsetof(UMaterialMergeSettings, MasterMaterial);
	static_assert(UMaterialMergeSettings_MasterMaterial_Offset == 0x88, "UMaterialMergeSettings::MasterMaterial offset is not 88");
	auto constexpr UMaterialMergeSettings_MergedMaterial_Offset = offsetof(UMaterialMergeSettings, MergedMaterial);
	static_assert(UMaterialMergeSettings_MergedMaterial_Offset == 0x90, "UMaterialMergeSettings::MergedMaterial offset is not 90");
	auto constexpr UMaterialMergeSettings_ParameterList_Offset = offsetof(UMaterialMergeSettings, ParameterList);
	static_assert(UMaterialMergeSettings_ParameterList_Offset == 0x98, "UMaterialMergeSettings::ParameterList offset is not 98");
	auto constexpr UMaterialMergeSettings_boolFieldA8_Offset = offsetof(UMaterialMergeSettings, boolFieldA8);
	static_assert(UMaterialMergeSettings_boolFieldA8_Offset == 0xa8, "UMaterialMergeSettings::boolFieldA8 offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
