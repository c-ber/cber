#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USkeletalMeshReductionSettings // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef USkeletalMeshReductionSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1197); // id32("Class Engine.SkeletalMeshReductionSettings")
		return ptr;
	}
	TArray<struct FSkeletalMeshLODGroupSettings> Settings; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.SkeletalMeshReductionSettings.Settings */
	uint8_t UnknownData40[0x8];


	inline bool SetSettings(t_structHelper inst, TArray<struct FSkeletalMeshLODGroupSettings> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSkeletalMeshReductionSettings = sizeof(USkeletalMeshReductionSettings); // 72
    static_assert(sizeof(USkeletalMeshReductionSettings) == 0x48, "Size of USkeletalMeshReductionSettings is not correct.");
	auto constexpr USkeletalMeshReductionSettings_Settings_Offset = offsetof(USkeletalMeshReductionSettings, Settings);
	static_assert(USkeletalMeshReductionSettings_Settings_Offset == 0x30, "USkeletalMeshReductionSettings::Settings offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
