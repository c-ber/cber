#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpData // Size: 0x78
	: public UObject // Size: 0x30
{
private:
	typedef UInterpData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(786); // id32("Class Engine.InterpData")
		return ptr;
	}
	float InterpLength; /* Ofs: 0x30 Size: 0x4 - FloatProperty Engine.InterpData.InterpLength */
	float PathBuildTime; /* Ofs: 0x34 Size: 0x4 - FloatProperty Engine.InterpData.PathBuildTime */
	TArray<ExternalPtr<struct UInterpGroup>> InterpGroups; /* Ofs: 0x38 Size: 0x10 - ArrayProperty Engine.InterpData.InterpGroups */
	ExternalPtr<struct UInterpCurveEdSetup> CurveEdSetup; /* Ofs: 0x48 Size: 0x8 - ObjectProperty Engine.InterpData.CurveEdSetup */
	float EdSectionStart; /* Ofs: 0x50 Size: 0x4 - FloatProperty Engine.InterpData.EdSectionStart */
	float EdSectionEnd; /* Ofs: 0x54 Size: 0x4 - FloatProperty Engine.InterpData.EdSectionEnd */
	uint8_t boolField58;
	uint8_t UnknownData59[0x7];
	ExternalPtr<struct UInterpGroupDirector> CachedDirectorGroup; /* Ofs: 0x60 Size: 0x8 - ObjectProperty Engine.InterpData.CachedDirectorGroup */
	TArray<struct FName> AllEventNames; /* Ofs: 0x68 Size: 0x10 - ArrayProperty Engine.InterpData.AllEventNames */


	inline bool SetInterpLength(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetPathBuildTime(t_structHelper inst, float value) { inst.WriteOffset(0x34, value); }
	inline bool SetInterpGroups(t_structHelper inst, TArray<ExternalPtr<struct UInterpGroup>> value) { inst.WriteOffset(0x38, value); }
	inline bool SetCurveEdSetup(t_structHelper inst, ExternalPtr<struct UInterpCurveEdSetup> value) { inst.WriteOffset(0x48, value); }
	inline bool SetEdSectionStart(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool SetEdSectionEnd(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool bShouldBakeAndPrune()
	{
		return boolField58& 0x1;
	}
	inline bool SetbShouldBakeAndPrune(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x58, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCachedDirectorGroup(t_structHelper inst, ExternalPtr<struct UInterpGroupDirector> value) { inst.WriteOffset(0x60, value); }
	inline bool SetAllEventNames(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpData = sizeof(UInterpData); // 120
    static_assert(sizeof(UInterpData) == 0x78, "Size of UInterpData is not correct.");
	auto constexpr UInterpData_InterpLength_Offset = offsetof(UInterpData, InterpLength);
	static_assert(UInterpData_InterpLength_Offset == 0x30, "UInterpData::InterpLength offset is not 30");
	auto constexpr UInterpData_PathBuildTime_Offset = offsetof(UInterpData, PathBuildTime);
	static_assert(UInterpData_PathBuildTime_Offset == 0x34, "UInterpData::PathBuildTime offset is not 34");
	auto constexpr UInterpData_InterpGroups_Offset = offsetof(UInterpData, InterpGroups);
	static_assert(UInterpData_InterpGroups_Offset == 0x38, "UInterpData::InterpGroups offset is not 38");
	auto constexpr UInterpData_CurveEdSetup_Offset = offsetof(UInterpData, CurveEdSetup);
	static_assert(UInterpData_CurveEdSetup_Offset == 0x48, "UInterpData::CurveEdSetup offset is not 48");
	auto constexpr UInterpData_EdSectionStart_Offset = offsetof(UInterpData, EdSectionStart);
	static_assert(UInterpData_EdSectionStart_Offset == 0x50, "UInterpData::EdSectionStart offset is not 50");
	auto constexpr UInterpData_EdSectionEnd_Offset = offsetof(UInterpData, EdSectionEnd);
	static_assert(UInterpData_EdSectionEnd_Offset == 0x54, "UInterpData::EdSectionEnd offset is not 54");
	auto constexpr UInterpData_boolField58_Offset = offsetof(UInterpData, boolField58);
	static_assert(UInterpData_boolField58_Offset == 0x58, "UInterpData::boolField58 offset is not 58");
	auto constexpr UInterpData_CachedDirectorGroup_Offset = offsetof(UInterpData, CachedDirectorGroup);
	static_assert(UInterpData_CachedDirectorGroup_Offset == 0x60, "UInterpData::CachedDirectorGroup offset is not 60");
	auto constexpr UInterpData_AllEventNames_Offset = offsetof(UInterpData, AllEventNames);
	static_assert(UInterpData_AllEventNames_Offset == 0x68, "UInterpData::AllEventNames offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
