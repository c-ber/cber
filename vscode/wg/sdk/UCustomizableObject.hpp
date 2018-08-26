#pragma once
#include "ECustomizableObjectRelevancy.hpp"
#include "FCompilationOptions.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCustomizableObject // Size: 0x1A8
	: public UObject // Size: 0x30
{
private:
	typedef UCustomizableObject t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2017); // id32("Class CustomizableObject.CustomizableObject")
		return ptr;
	}
	ExternalPtr<struct USkeletalMesh> ReferenceSkeletalMesh; /* Ofs: 0x30 Size: 0x8 - ObjectProperty CustomizableObject.CustomizableObject.ReferenceSkeletalMesh */
	ExternalPtr<struct UStaticMesh> ReferenceStaticMesh; /* Ofs: 0x38 Size: 0x8 - ObjectProperty CustomizableObject.CustomizableObject.ReferenceStaticMesh */
	TEnumAsByte<enum ECustomizableObjectRelevancy> Relevancy; /* Ofs: 0x40 Size: 0x1 - EnumProperty CustomizableObject.CustomizableObject.Relevancy */
	uint8_t boolField41;
	uint8_t UnknownData42[0x6];
	TArray<ExternalPtr<struct UMaterialInterface>> ReferencedMaterials; /* Ofs: 0x48 Size: 0x10 - ArrayProperty CustomizableObject.CustomizableObject.ReferencedMaterials */
	TArray<struct FMutableModelImageProperties> ImageProperties; /* Ofs: 0x58 Size: 0x10 - ArrayProperty CustomizableObject.CustomizableObject.ImageProperties */
	TMap<struct FString, struct FCustomizableObjectIdPair> GroupNodeMap; /* Ofs: 0x68 Size: 0x50 - MapProperty CustomizableObject.CustomizableObject.GroupNodeMap */
	FCompilationOptions CompileOptions; /* Ofs: 0xB8 Size: 0x18 - StructProperty CustomizableObject.CustomizableObject.CompileOptions */
	FGuid VersionId; /* Ofs: 0xD0 Size: 0x10 - StructProperty CustomizableObject.CustomizableObject.VersionId */
	TArray<struct FMutableModelParameterProperties> ParameterProperties; /* Ofs: 0xE0 Size: 0x10 - ArrayProperty CustomizableObject.CustomizableObject.ParameterProperties */
	TMap<struct FString, struct FParameterUIData> ParameterUIDataMap; /* Ofs: 0xF0 Size: 0x50 - MapProperty CustomizableObject.CustomizableObject.ParameterUIDataMap */
	TMap<struct FString, struct FParameterUIData> StateUIDataMap; /* Ofs: 0x140 Size: 0x50 - MapProperty CustomizableObject.CustomizableObject.StateUIDataMap */
	uint8_t boolField190;
	uint8_t UnknownData191[0x17];


	inline bool SetReferenceSkeletalMesh(t_structHelper inst, ExternalPtr<struct USkeletalMesh> value) { inst.WriteOffset(0x30, value); }
	inline bool SetReferenceStaticMesh(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x38, value); }
	inline bool SetRelevancy(t_structHelper inst, TEnumAsByte<enum ECustomizableObjectRelevancy> value) { inst.WriteOffset(0x40, value); }
	inline bool bDisableTextureLayoutManagement()
	{
		return boolField41& 0x1;
	}
	inline bool SetbDisableTextureLayoutManagement(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetReferencedMaterials(t_structHelper inst, TArray<ExternalPtr<struct UMaterialInterface>> value) { inst.WriteOffset(0x48, value); }
	inline bool SetImageProperties(t_structHelper inst, TArray<struct FMutableModelImageProperties> value) { inst.WriteOffset(0x58, value); }
	inline bool SetGroupNodeMap(t_structHelper inst, TMap<struct FString, struct FCustomizableObjectIdPair> value) { inst.WriteOffset(0x68, value); }
	inline bool SetCompileOptions(t_structHelper inst, FCompilationOptions value) { inst.WriteOffset(0xB8, value); }
	inline bool SetVersionId(t_structHelper inst, FGuid value) { inst.WriteOffset(0xD0, value); }
	inline bool SetParameterProperties(t_structHelper inst, TArray<struct FMutableModelParameterProperties> value) { inst.WriteOffset(0xE0, value); }
	inline bool SetParameterUIDataMap(t_structHelper inst, TMap<struct FString, struct FParameterUIData> value) { inst.WriteOffset(0xF0, value); }
	inline bool SetStateUIDataMap(t_structHelper inst, TMap<struct FString, struct FParameterUIData> value) { inst.WriteOffset(0x140, value); }
	inline bool bIsChildObject()
	{
		return boolField190& 0x1;
	}
	inline bool SetbIsChildObject(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x190, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCustomizableObject = sizeof(UCustomizableObject); // 424
    static_assert(sizeof(UCustomizableObject) == 0x1A8, "Size of UCustomizableObject is not correct.");
	auto constexpr UCustomizableObject_ReferenceSkeletalMesh_Offset = offsetof(UCustomizableObject, ReferenceSkeletalMesh);
	static_assert(UCustomizableObject_ReferenceSkeletalMesh_Offset == 0x30, "UCustomizableObject::ReferenceSkeletalMesh offset is not 30");
	auto constexpr UCustomizableObject_ReferenceStaticMesh_Offset = offsetof(UCustomizableObject, ReferenceStaticMesh);
	static_assert(UCustomizableObject_ReferenceStaticMesh_Offset == 0x38, "UCustomizableObject::ReferenceStaticMesh offset is not 38");
	auto constexpr UCustomizableObject_Relevancy_Offset = offsetof(UCustomizableObject, Relevancy);
	static_assert(UCustomizableObject_Relevancy_Offset == 0x40, "UCustomizableObject::Relevancy offset is not 40");
	auto constexpr UCustomizableObject_boolField41_Offset = offsetof(UCustomizableObject, boolField41);
	static_assert(UCustomizableObject_boolField41_Offset == 0x41, "UCustomizableObject::boolField41 offset is not 41");
	auto constexpr UCustomizableObject_ReferencedMaterials_Offset = offsetof(UCustomizableObject, ReferencedMaterials);
	static_assert(UCustomizableObject_ReferencedMaterials_Offset == 0x48, "UCustomizableObject::ReferencedMaterials offset is not 48");
	auto constexpr UCustomizableObject_ImageProperties_Offset = offsetof(UCustomizableObject, ImageProperties);
	static_assert(UCustomizableObject_ImageProperties_Offset == 0x58, "UCustomizableObject::ImageProperties offset is not 58");
	auto constexpr UCustomizableObject_GroupNodeMap_Offset = offsetof(UCustomizableObject, GroupNodeMap);
	static_assert(UCustomizableObject_GroupNodeMap_Offset == 0x68, "UCustomizableObject::GroupNodeMap offset is not 68");
	auto constexpr UCustomizableObject_CompileOptions_Offset = offsetof(UCustomizableObject, CompileOptions);
	static_assert(UCustomizableObject_CompileOptions_Offset == 0xb8, "UCustomizableObject::CompileOptions offset is not b8");
	auto constexpr UCustomizableObject_VersionId_Offset = offsetof(UCustomizableObject, VersionId);
	static_assert(UCustomizableObject_VersionId_Offset == 0xd0, "UCustomizableObject::VersionId offset is not d0");
	auto constexpr UCustomizableObject_ParameterProperties_Offset = offsetof(UCustomizableObject, ParameterProperties);
	static_assert(UCustomizableObject_ParameterProperties_Offset == 0xe0, "UCustomizableObject::ParameterProperties offset is not e0");
	auto constexpr UCustomizableObject_ParameterUIDataMap_Offset = offsetof(UCustomizableObject, ParameterUIDataMap);
	static_assert(UCustomizableObject_ParameterUIDataMap_Offset == 0xf0, "UCustomizableObject::ParameterUIDataMap offset is not f0");
	auto constexpr UCustomizableObject_StateUIDataMap_Offset = offsetof(UCustomizableObject, StateUIDataMap);
	static_assert(UCustomizableObject_StateUIDataMap_Offset == 0x140, "UCustomizableObject::StateUIDataMap offset is not 140");
	auto constexpr UCustomizableObject_boolField190_Offset = offsetof(UCustomizableObject, boolField190);
	static_assert(UCustomizableObject_boolField190_Offset == 0x190, "UCustomizableObject::boolField190 offset is not 190");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
