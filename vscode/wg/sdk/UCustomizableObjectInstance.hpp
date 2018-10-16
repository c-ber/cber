#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCustomizableObjectInstance // Size: 0x160
	: public UObject // Size: 0x30
{
private:
	typedef UCustomizableObjectInstance t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2015); // id32("Class CustomizableObject.CustomizableObjectInstance")
		return ptr;
	}
	ExternalPtr<struct UCustomizableObject> CustomizableObject; /* Ofs: 0x30 Size: 0x8 - ObjectProperty CustomizableObject.CustomizableObjectInstance.CustomizableObject */
	ExternalPtr<struct USkeletalMesh> SkeletalMesh; /* Ofs: 0x38 Size: 0x8 - ObjectProperty CustomizableObject.CustomizableObjectInstance.SkeletalMesh */
	TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters; /* Ofs: 0x40 Size: 0x10 - ArrayProperty CustomizableObject.CustomizableObjectInstance.BoolParameters */
	TArray<struct FCustomizableObjectIntParameterValue> IntParameters; /* Ofs: 0x50 Size: 0x10 - ArrayProperty CustomizableObject.CustomizableObjectInstance.IntParameters */
	TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters; /* Ofs: 0x60 Size: 0x10 - ArrayProperty CustomizableObject.CustomizableObjectInstance.FloatParameters */
	TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters; /* Ofs: 0x70 Size: 0x10 - ArrayProperty CustomizableObject.CustomizableObjectInstance.TextureParameters */
	TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters; /* Ofs: 0x80 Size: 0x10 - ArrayProperty CustomizableObject.CustomizableObjectInstance.VectorParameters */
	TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters; /* Ofs: 0x90 Size: 0x10 - ArrayProperty CustomizableObject.CustomizableObjectInstance.ProjectorParameters */
	uint8_t boolFieldA0;
	uint8_t UnknownDataA1[0x7];
	FScriptMulticastDelegate UpdatedDelegate; /* Ofs: 0xA8 Size: 0x10 - MulticastDelegateProperty CustomizableObject.CustomizableObjectInstance.UpdatedDelegate */
	uint8_t UnknownDataB8[0x98];
	ExternalPtr<struct UCustomizableInstancePrivateData> PrivateData; /* Ofs: 0x150 Size: 0x8 - ObjectProperty CustomizableObject.CustomizableObjectInstance.PrivateData */
	uint8_t UnknownData158[0x8];


	inline bool SetCustomizableObject(t_structHelper inst, ExternalPtr<struct UCustomizableObject> value) { inst.WriteOffset(0x30, value); }
	inline bool SetSkeletalMesh(t_structHelper inst, ExternalPtr<struct USkeletalMesh> value) { inst.WriteOffset(0x38, value); }
	inline bool SetBoolParameters(t_structHelper inst, TArray<struct FCustomizableObjectBoolParameterValue> value) { inst.WriteOffset(0x40, value); }
	inline bool SetIntParameters(t_structHelper inst, TArray<struct FCustomizableObjectIntParameterValue> value) { inst.WriteOffset(0x50, value); }
	inline bool SetFloatParameters(t_structHelper inst, TArray<struct FCustomizableObjectFloatParameterValue> value) { inst.WriteOffset(0x60, value); }
	inline bool SetTextureParameters(t_structHelper inst, TArray<struct FCustomizableObjectTextureParameterValue> value) { inst.WriteOffset(0x70, value); }
	inline bool SetVectorParameters(t_structHelper inst, TArray<struct FCustomizableObjectVectorParameterValue> value) { inst.WriteOffset(0x80, value); }
	inline bool SetProjectorParameters(t_structHelper inst, TArray<struct FCustomizableObjectProjectorParameterValue> value) { inst.WriteOffset(0x90, value); }
	inline bool bBuildParameterDecorations()
	{
		return boolFieldA0& 0x1;
	}
	inline bool SetbBuildParameterDecorations(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetUpdatedDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xA8, value); }
	inline bool SetPrivateData(t_structHelper inst, ExternalPtr<struct UCustomizableInstancePrivateData> value) { inst.WriteOffset(0x150, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCustomizableObjectInstance = sizeof(UCustomizableObjectInstance); // 352
    static_assert(sizeof(UCustomizableObjectInstance) == 0x160, "Size of UCustomizableObjectInstance is not correct.");
	auto constexpr UCustomizableObjectInstance_CustomizableObject_Offset = offsetof(UCustomizableObjectInstance, CustomizableObject);
	static_assert(UCustomizableObjectInstance_CustomizableObject_Offset == 0x30, "UCustomizableObjectInstance::CustomizableObject offset is not 30");
	auto constexpr UCustomizableObjectInstance_SkeletalMesh_Offset = offsetof(UCustomizableObjectInstance, SkeletalMesh);
	static_assert(UCustomizableObjectInstance_SkeletalMesh_Offset == 0x38, "UCustomizableObjectInstance::SkeletalMesh offset is not 38");
	auto constexpr UCustomizableObjectInstance_BoolParameters_Offset = offsetof(UCustomizableObjectInstance, BoolParameters);
	static_assert(UCustomizableObjectInstance_BoolParameters_Offset == 0x40, "UCustomizableObjectInstance::BoolParameters offset is not 40");
	auto constexpr UCustomizableObjectInstance_IntParameters_Offset = offsetof(UCustomizableObjectInstance, IntParameters);
	static_assert(UCustomizableObjectInstance_IntParameters_Offset == 0x50, "UCustomizableObjectInstance::IntParameters offset is not 50");
	auto constexpr UCustomizableObjectInstance_FloatParameters_Offset = offsetof(UCustomizableObjectInstance, FloatParameters);
	static_assert(UCustomizableObjectInstance_FloatParameters_Offset == 0x60, "UCustomizableObjectInstance::FloatParameters offset is not 60");
	auto constexpr UCustomizableObjectInstance_TextureParameters_Offset = offsetof(UCustomizableObjectInstance, TextureParameters);
	static_assert(UCustomizableObjectInstance_TextureParameters_Offset == 0x70, "UCustomizableObjectInstance::TextureParameters offset is not 70");
	auto constexpr UCustomizableObjectInstance_VectorParameters_Offset = offsetof(UCustomizableObjectInstance, VectorParameters);
	static_assert(UCustomizableObjectInstance_VectorParameters_Offset == 0x80, "UCustomizableObjectInstance::VectorParameters offset is not 80");
	auto constexpr UCustomizableObjectInstance_ProjectorParameters_Offset = offsetof(UCustomizableObjectInstance, ProjectorParameters);
	static_assert(UCustomizableObjectInstance_ProjectorParameters_Offset == 0x90, "UCustomizableObjectInstance::ProjectorParameters offset is not 90");
	auto constexpr UCustomizableObjectInstance_boolFieldA0_Offset = offsetof(UCustomizableObjectInstance, boolFieldA0);
	static_assert(UCustomizableObjectInstance_boolFieldA0_Offset == 0xa0, "UCustomizableObjectInstance::boolFieldA0 offset is not a0");
	auto constexpr UCustomizableObjectInstance_UpdatedDelegate_Offset = offsetof(UCustomizableObjectInstance, UpdatedDelegate);
	static_assert(UCustomizableObjectInstance_UpdatedDelegate_Offset == 0xa8, "UCustomizableObjectInstance::UpdatedDelegate offset is not a8");
	auto constexpr UCustomizableObjectInstance_PrivateData_Offset = offsetof(UCustomizableObjectInstance, PrivateData);
	static_assert(UCustomizableObjectInstance_PrivateData_Offset == 0x150, "UCustomizableObjectInstance::PrivateData offset is not 150");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
