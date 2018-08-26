#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlueprintCore // Size: 0x58
	: public UObject // Size: 0x30
{
private:
	typedef UBlueprintCore t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(288); // id32("Class Engine.BlueprintCore")
		return ptr;
	}
	ExternalPtr<struct UClass> SkeletonGeneratedClass; /* Ofs: 0x30 Size: 0x8 - ClassProperty Engine.BlueprintCore.SkeletonGeneratedClass */
	ExternalPtr<struct UClass> GeneratedClass; /* Ofs: 0x38 Size: 0x8 - ClassProperty Engine.BlueprintCore.GeneratedClass */
	uint8_t boolField40;
	uint8_t boolField41;
	uint8_t UnknownData42[0x2];
	FGuid BlueprintGuid; /* Ofs: 0x44 Size: 0x10 - StructProperty Engine.BlueprintCore.BlueprintGuid */
	uint8_t UnknownData54[0x4];


	inline bool SetSkeletonGeneratedClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x30, value); }
	inline bool SetGeneratedClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x38, value); }
	inline bool bLegacyNeedToPurgeSkelRefs()
	{
		return boolField40& 0x1;
	}
	inline bool SetbLegacyNeedToPurgeSkelRefs(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLegacyGeneratedClassIsAuthoritative()
	{
		return boolField41& 0x1;
	}
	inline bool SetbLegacyGeneratedClassIsAuthoritative(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBlueprintGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0x44, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlueprintCore = sizeof(UBlueprintCore); // 88
    static_assert(sizeof(UBlueprintCore) == 0x58, "Size of UBlueprintCore is not correct.");
	auto constexpr UBlueprintCore_SkeletonGeneratedClass_Offset = offsetof(UBlueprintCore, SkeletonGeneratedClass);
	static_assert(UBlueprintCore_SkeletonGeneratedClass_Offset == 0x30, "UBlueprintCore::SkeletonGeneratedClass offset is not 30");
	auto constexpr UBlueprintCore_GeneratedClass_Offset = offsetof(UBlueprintCore, GeneratedClass);
	static_assert(UBlueprintCore_GeneratedClass_Offset == 0x38, "UBlueprintCore::GeneratedClass offset is not 38");
	auto constexpr UBlueprintCore_boolField40_Offset = offsetof(UBlueprintCore, boolField40);
	static_assert(UBlueprintCore_boolField40_Offset == 0x40, "UBlueprintCore::boolField40 offset is not 40");
	auto constexpr UBlueprintCore_boolField41_Offset = offsetof(UBlueprintCore, boolField41);
	static_assert(UBlueprintCore_boolField41_Offset == 0x41, "UBlueprintCore::boolField41 offset is not 41");
	auto constexpr UBlueprintCore_BlueprintGuid_Offset = offsetof(UBlueprintCore, BlueprintGuid);
	static_assert(UBlueprintCore_BlueprintGuid_Offset == 0x44, "UBlueprintCore::BlueprintGuid offset is not 44");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
