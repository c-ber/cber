#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UExtendedReflectionSettings // Size: 0xB0
	: public UObject // Size: 0x30
{
private:
	typedef UExtendedReflectionSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(773); // id32("Class Engine.ExtendedReflectionSettings")
		return ptr;
	}
	float GlobalOverrideIntensity; /* Ofs: 0x30 Size: 0x4 - FloatProperty Engine.ExtendedReflectionSettings.GlobalOverrideIntensity */
	int32_t StreamingSectionSize; /* Ofs: 0x34 Size: 0x4 - IntProperty Engine.ExtendedReflectionSettings.StreamingSectionSize */
	TArray<struct FExtendedReflectionSharedCubemap> SharedCubemaps; /* Ofs: 0x38 Size: 0x10 - ArrayProperty Engine.ExtendedReflectionSettings.SharedCubemaps */
	TArray<ExternalPtr<struct UTextureCube>> ReferencedCubemaps; /* Ofs: 0x48 Size: 0x10 - ArrayProperty Engine.ExtendedReflectionSettings.ReferencedCubemaps */
	uint8_t UnknownData58[0x58];


	inline bool SetGlobalOverrideIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetStreamingSectionSize(t_structHelper inst, int32_t value) { inst.WriteOffset(0x34, value); }
	inline bool SetSharedCubemaps(t_structHelper inst, TArray<struct FExtendedReflectionSharedCubemap> value) { inst.WriteOffset(0x38, value); }
	inline bool SetReferencedCubemaps(t_structHelper inst, TArray<ExternalPtr<struct UTextureCube>> value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUExtendedReflectionSettings = sizeof(UExtendedReflectionSettings); // 176
    static_assert(sizeof(UExtendedReflectionSettings) == 0xB0, "Size of UExtendedReflectionSettings is not correct.");
	auto constexpr UExtendedReflectionSettings_GlobalOverrideIntensity_Offset = offsetof(UExtendedReflectionSettings, GlobalOverrideIntensity);
	static_assert(UExtendedReflectionSettings_GlobalOverrideIntensity_Offset == 0x30, "UExtendedReflectionSettings::GlobalOverrideIntensity offset is not 30");
	auto constexpr UExtendedReflectionSettings_StreamingSectionSize_Offset = offsetof(UExtendedReflectionSettings, StreamingSectionSize);
	static_assert(UExtendedReflectionSettings_StreamingSectionSize_Offset == 0x34, "UExtendedReflectionSettings::StreamingSectionSize offset is not 34");
	auto constexpr UExtendedReflectionSettings_SharedCubemaps_Offset = offsetof(UExtendedReflectionSettings, SharedCubemaps);
	static_assert(UExtendedReflectionSettings_SharedCubemaps_Offset == 0x38, "UExtendedReflectionSettings::SharedCubemaps offset is not 38");
	auto constexpr UExtendedReflectionSettings_ReferencedCubemaps_Offset = offsetof(UExtendedReflectionSettings, ReferencedCubemaps);
	static_assert(UExtendedReflectionSettings_ReferencedCubemaps_Offset == 0x48, "UExtendedReflectionSettings::ReferencedCubemaps offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
