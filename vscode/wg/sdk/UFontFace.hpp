#pragma once
#include "EFontHinting.hpp"
#include "EFontLoadingPolicy.hpp"
#include "EFontLayoutMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFontFace // Size: 0x60
	: public UObject // Size: 0x30
{
private:
	typedef UFontFace t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(776); // id32("Class Engine.FontFace")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	FString SourceFilename; /* Ofs: 0x38 Size: 0x10 - StrProperty Engine.FontFace.SourceFilename */
	TEnumAsByte<enum EFontHinting> Hinting; /* Ofs: 0x48 Size: 0x1 - EnumProperty Engine.FontFace.Hinting */
	TEnumAsByte<enum EFontLoadingPolicy> LoadingPolicy; /* Ofs: 0x49 Size: 0x1 - EnumProperty Engine.FontFace.LoadingPolicy */
	TEnumAsByte<enum EFontLayoutMethod> LayoutMethod; /* Ofs: 0x4A Size: 0x1 - EnumProperty Engine.FontFace.LayoutMethod */
	uint8_t UnknownData4B[0x15];


	inline bool SetSourceFilename(t_structHelper inst, FString value) { inst.WriteOffset(0x38, value); }
	inline bool SetHinting(t_structHelper inst, TEnumAsByte<enum EFontHinting> value) { inst.WriteOffset(0x48, value); }
	inline bool SetLoadingPolicy(t_structHelper inst, TEnumAsByte<enum EFontLoadingPolicy> value) { inst.WriteOffset(0x49, value); }
	inline bool SetLayoutMethod(t_structHelper inst, TEnumAsByte<enum EFontLayoutMethod> value) { inst.WriteOffset(0x4A, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFontFace = sizeof(UFontFace); // 96
    static_assert(sizeof(UFontFace) == 0x60, "Size of UFontFace is not correct.");
	auto constexpr UFontFace_SourceFilename_Offset = offsetof(UFontFace, SourceFilename);
	static_assert(UFontFace_SourceFilename_Offset == 0x38, "UFontFace::SourceFilename offset is not 38");
	auto constexpr UFontFace_Hinting_Offset = offsetof(UFontFace, Hinting);
	static_assert(UFontFace_Hinting_Offset == 0x48, "UFontFace::Hinting offset is not 48");
	auto constexpr UFontFace_LoadingPolicy_Offset = offsetof(UFontFace, LoadingPolicy);
	static_assert(UFontFace_LoadingPolicy_Offset == 0x49, "UFontFace::LoadingPolicy offset is not 49");
	auto constexpr UFontFace_LayoutMethod_Offset = offsetof(UFontFace, LayoutMethod);
	static_assert(UFontFace_LayoutMethod_Offset == 0x4a, "UFontFace::LayoutMethod offset is not 4a");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
