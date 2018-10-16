#pragma once
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBookMark // Size: 0x58
	: public UObject // Size: 0x30
{
private:
	typedef UBookMark t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(681); // id32("Class Engine.BookMark")
		return ptr;
	}
	FVector Location; /* Ofs: 0x30 Size: 0xC - StructProperty Engine.BookMark.Location */
	FRotator Rotation; /* Ofs: 0x3C Size: 0xC - StructProperty Engine.BookMark.Rotation */
	TArray<struct FString> HiddenLevels; /* Ofs: 0x48 Size: 0x10 - ArrayProperty Engine.BookMark.HiddenLevels */


	inline bool SetLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x30, value); }
	inline bool SetRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x3C, value); }
	inline bool SetHiddenLevels(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBookMark = sizeof(UBookMark); // 88
    static_assert(sizeof(UBookMark) == 0x58, "Size of UBookMark is not correct.");
	auto constexpr UBookMark_Location_Offset = offsetof(UBookMark, Location);
	static_assert(UBookMark_Location_Offset == 0x30, "UBookMark::Location offset is not 30");
	auto constexpr UBookMark_Rotation_Offset = offsetof(UBookMark, Rotation);
	static_assert(UBookMark_Rotation_Offset == 0x3c, "UBookMark::Rotation offset is not 3c");
	auto constexpr UBookMark_HiddenLevels_Offset = offsetof(UBookMark, HiddenLevels);
	static_assert(UBookMark_HiddenLevels_Offset == 0x48, "UBookMark::HiddenLevels offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
