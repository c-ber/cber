#pragma once
#include "UBlueprintGeneratedClass.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWidgetBlueprintGeneratedClass // Size: 0x450
	: public UBlueprintGeneratedClass // Size: 0x3E0
{
private:
	typedef UWidgetBlueprintGeneratedClass t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1649); // id32("Class UMG.WidgetBlueprintGeneratedClass")
		return ptr;
	}
//	ExternalPtr<struct UWidgetTree> WidgetTree; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty UMG.WidgetBlueprintGeneratedClass.WidgetTree */
	uint8_t boolField3E0;
	uint8_t UnknownData3E1[0x7];
	TArray<struct FDelegateRuntimeBinding> Bindings; /* Ofs: 0x3E8 Size: 0x10 - ArrayProperty UMG.WidgetBlueprintGeneratedClass.Bindings */
	TArray<ExternalPtr<struct UWidgetAnimation>> Animations; /* Ofs: 0x3F8 Size: 0x10 - ArrayProperty UMG.WidgetBlueprintGeneratedClass.Animations */
	TArray<struct FName> NamedSlots; /* Ofs: 0x408 Size: 0x10 - ArrayProperty UMG.WidgetBlueprintGeneratedClass.NamedSlots */
	uint8_t boolField418;
	uint8_t boolField419;
	uint8_t boolField41A;
	uint8_t UnknownData41B[0x5];
	TAssetPtr<ExternalPtr<struct UUserWidget>> TemplateAsset; /* Ofs: 0x420 Size: 0x1C - AssetObjectProperty UMG.WidgetBlueprintGeneratedClass.TemplateAsset */
	uint8_t UnknownData43C[0x4];
	ExternalPtr<struct UUserWidget> Template; /* Ofs: 0x440 Size: 0x8 - ObjectProperty UMG.WidgetBlueprintGeneratedClass.Template */
	uint8_t UnknownData448[0x8];


//	inline bool SetWidgetTree(t_structHelper inst, ExternalPtr<struct UWidgetTree> value) { inst.WriteOffset(0x3D8, value); }
	inline bool bAllowTemplate()
	{
		return boolField3E0& 0x1;
	}
	inline bool SetbAllowTemplate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3E0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBindings(t_structHelper inst, TArray<struct FDelegateRuntimeBinding> value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetAnimations(t_structHelper inst, TArray<ExternalPtr<struct UWidgetAnimation>> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetNamedSlots(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x408, value); }
	inline bool bValidTemplate()
	{
		return boolField418& 0x1;
	}
	inline bool SetbValidTemplate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x418, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bTemplateInitialized()
	{
		return boolField419& 0x1;
	}
	inline bool SetbTemplateInitialized(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x419, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCookedTemplate()
	{
		return boolField41A& 0x1;
	}
	inline bool SetbCookedTemplate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTemplateAsset(t_structHelper inst, TAssetPtr<ExternalPtr<struct UUserWidget>> value) { inst.WriteOffset(0x420, value); }
	inline bool SetTemplate(t_structHelper inst, ExternalPtr<struct UUserWidget> value) { inst.WriteOffset(0x440, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWidgetBlueprintGeneratedClass = sizeof(UWidgetBlueprintGeneratedClass); // 1104
    static_assert(sizeof(UWidgetBlueprintGeneratedClass) == 0x450, "Size of UWidgetBlueprintGeneratedClass is not correct.");
//	auto constexpr UWidgetBlueprintGeneratedClass_WidgetTree_Offset = offsetof(UWidgetBlueprintGeneratedClass, WidgetTree);
//	static_assert(UWidgetBlueprintGeneratedClass_WidgetTree_Offset == 0x3d8, "UWidgetBlueprintGeneratedClass::WidgetTree offset is not 3d8");
	auto constexpr UWidgetBlueprintGeneratedClass_boolField3E0_Offset = offsetof(UWidgetBlueprintGeneratedClass, boolField3E0);
	static_assert(UWidgetBlueprintGeneratedClass_boolField3E0_Offset == 0x3e0, "UWidgetBlueprintGeneratedClass::boolField3E0 offset is not 3e0");
	auto constexpr UWidgetBlueprintGeneratedClass_Bindings_Offset = offsetof(UWidgetBlueprintGeneratedClass, Bindings);
	static_assert(UWidgetBlueprintGeneratedClass_Bindings_Offset == 0x3e8, "UWidgetBlueprintGeneratedClass::Bindings offset is not 3e8");
	auto constexpr UWidgetBlueprintGeneratedClass_Animations_Offset = offsetof(UWidgetBlueprintGeneratedClass, Animations);
	static_assert(UWidgetBlueprintGeneratedClass_Animations_Offset == 0x3f8, "UWidgetBlueprintGeneratedClass::Animations offset is not 3f8");
	auto constexpr UWidgetBlueprintGeneratedClass_NamedSlots_Offset = offsetof(UWidgetBlueprintGeneratedClass, NamedSlots);
	static_assert(UWidgetBlueprintGeneratedClass_NamedSlots_Offset == 0x408, "UWidgetBlueprintGeneratedClass::NamedSlots offset is not 408");
	auto constexpr UWidgetBlueprintGeneratedClass_boolField418_Offset = offsetof(UWidgetBlueprintGeneratedClass, boolField418);
	static_assert(UWidgetBlueprintGeneratedClass_boolField418_Offset == 0x418, "UWidgetBlueprintGeneratedClass::boolField418 offset is not 418");
	auto constexpr UWidgetBlueprintGeneratedClass_boolField419_Offset = offsetof(UWidgetBlueprintGeneratedClass, boolField419);
	static_assert(UWidgetBlueprintGeneratedClass_boolField419_Offset == 0x419, "UWidgetBlueprintGeneratedClass::boolField419 offset is not 419");
	auto constexpr UWidgetBlueprintGeneratedClass_boolField41A_Offset = offsetof(UWidgetBlueprintGeneratedClass, boolField41A);
	static_assert(UWidgetBlueprintGeneratedClass_boolField41A_Offset == 0x41a, "UWidgetBlueprintGeneratedClass::boolField41A offset is not 41a");
	auto constexpr UWidgetBlueprintGeneratedClass_TemplateAsset_Offset = offsetof(UWidgetBlueprintGeneratedClass, TemplateAsset);
	static_assert(UWidgetBlueprintGeneratedClass_TemplateAsset_Offset == 0x420, "UWidgetBlueprintGeneratedClass::TemplateAsset offset is not 420");
	auto constexpr UWidgetBlueprintGeneratedClass_Template_Offset = offsetof(UWidgetBlueprintGeneratedClass, Template);
	static_assert(UWidgetBlueprintGeneratedClass_Template_Offset == 0x440, "UWidgetBlueprintGeneratedClass::Template offset is not 440");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
