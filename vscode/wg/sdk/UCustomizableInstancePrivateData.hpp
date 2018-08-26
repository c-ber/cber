#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCustomizableInstancePrivateData // Size: 0x1E8
	: public UObject // Size: 0x30
{
private:
	typedef UCustomizableInstancePrivateData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2016); // id32("Class CustomizableObject.CustomizableInstancePrivateData")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	TArray<struct FGeneratedMaterial> GeneratedMaterials; /* Ofs: 0x38 Size: 0x10 - ArrayProperty CustomizableObject.CustomizableInstancePrivateData.GeneratedMaterials */
	TArray<struct FGeneratedMesh> GeneratedMeshes; /* Ofs: 0x48 Size: 0x10 - ArrayProperty CustomizableObject.CustomizableInstancePrivateData.GeneratedMeshes */
	TArray<struct FGeneratedTexture> GeneratedTextures; /* Ofs: 0x58 Size: 0x10 - ArrayProperty CustomizableObject.CustomizableInstancePrivateData.GeneratedTextures */
	uint8_t UnknownData68[0x88];
	TArray<struct FParameterDecorations> ParameterDecorations; /* Ofs: 0xF0 Size: 0x10 - ArrayProperty CustomizableObject.CustomizableInstancePrivateData.ParameterDecorations */
	uint8_t UnknownData100[0xE8];


	inline bool SetGeneratedMaterials(t_structHelper inst, TArray<struct FGeneratedMaterial> value) { inst.WriteOffset(0x38, value); }
	inline bool SetGeneratedMeshes(t_structHelper inst, TArray<struct FGeneratedMesh> value) { inst.WriteOffset(0x48, value); }
	inline bool SetGeneratedTextures(t_structHelper inst, TArray<struct FGeneratedTexture> value) { inst.WriteOffset(0x58, value); }
	inline bool SetParameterDecorations(t_structHelper inst, TArray<struct FParameterDecorations> value) { inst.WriteOffset(0xF0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCustomizableInstancePrivateData = sizeof(UCustomizableInstancePrivateData); // 488
    static_assert(sizeof(UCustomizableInstancePrivateData) == 0x1E8, "Size of UCustomizableInstancePrivateData is not correct.");
	auto constexpr UCustomizableInstancePrivateData_GeneratedMaterials_Offset = offsetof(UCustomizableInstancePrivateData, GeneratedMaterials);
	static_assert(UCustomizableInstancePrivateData_GeneratedMaterials_Offset == 0x38, "UCustomizableInstancePrivateData::GeneratedMaterials offset is not 38");
	auto constexpr UCustomizableInstancePrivateData_GeneratedMeshes_Offset = offsetof(UCustomizableInstancePrivateData, GeneratedMeshes);
	static_assert(UCustomizableInstancePrivateData_GeneratedMeshes_Offset == 0x48, "UCustomizableInstancePrivateData::GeneratedMeshes offset is not 48");
	auto constexpr UCustomizableInstancePrivateData_GeneratedTextures_Offset = offsetof(UCustomizableInstancePrivateData, GeneratedTextures);
	static_assert(UCustomizableInstancePrivateData_GeneratedTextures_Offset == 0x58, "UCustomizableInstancePrivateData::GeneratedTextures offset is not 58");
	auto constexpr UCustomizableInstancePrivateData_ParameterDecorations_Offset = offsetof(UCustomizableInstancePrivateData, ParameterDecorations);
	static_assert(UCustomizableInstancePrivateData_ParameterDecorations_Offset == 0xf0, "UCustomizableInstancePrivateData::ParameterDecorations offset is not f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
