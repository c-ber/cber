#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UModePreset // Size: 0x68
	: public UObject // Size: 0x30
{
private:
	typedef UModePreset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1892); // id32("Class TslGame.ModePreset")
		return ptr;
	}
	TArray<struct FModePresetsPerMap> ModePresets; /* Ofs: 0x30 Size: 0x10 - ArrayProperty TslGame.ModePreset.ModePresets */
	uint8_t UnknownData40[0x28];


	inline bool SetModePresets(t_structHelper inst, TArray<struct FModePresetsPerMap> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUModePreset = sizeof(UModePreset); // 104
    static_assert(sizeof(UModePreset) == 0x68, "Size of UModePreset is not correct.");
	auto constexpr UModePreset_ModePresets_Offset = offsetof(UModePreset, ModePresets);
	static_assert(UModePreset_ModePresets_Offset == 0x30, "UModePreset::ModePresets offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
