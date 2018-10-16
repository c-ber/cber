#pragma once
#include "UItemExplorer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItemPackage // Size: 0x580
	: public UItemExplorer // Size: 0x470
{
private:
	typedef UItemPackage t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1846); // id32("Class TslGame.ItemPackage")
		return ptr;
	}
	uint8_t UnknownData470[0x10];
	FText PackageName; /* Ofs: 0x480 Size: 0x18 - TextProperty TslGame.ItemPackage.PackageName */
	FText PackageCategory; /* Ofs: 0x498 Size: 0x18 - TextProperty TslGame.ItemPackage.PackageCategory */
	FText PackageDetailedName; /* Ofs: 0x4B0 Size: 0x18 - TextProperty TslGame.ItemPackage.PackageDetailedName */
	FText PackageDescription; /* Ofs: 0x4C8 Size: 0x18 - TextProperty TslGame.ItemPackage.PackageDescription */
	ExternalPtr<struct UTexture> PackageIcon; /* Ofs: 0x4E0 Size: 0x8 - ObjectProperty TslGame.ItemPackage.PackageIcon */
	float PackageIconSizeRatio; /* Ofs: 0x4E8 Size: 0x4 - FloatProperty TslGame.ItemPackage.PackageIconSizeRatio */
	uint8_t UnknownData4EC[0x4];
	ExternalPtr<struct UTexture> PackageToolTipIcon; /* Ofs: 0x4F0 Size: 0x8 - ObjectProperty TslGame.ItemPackage.PackageToolTipIcon */
	float PackageToolTipIconSizeRatio; /* Ofs: 0x4F8 Size: 0x4 - FloatProperty TslGame.ItemPackage.PackageToolTipIconSizeRatio */
	uint8_t UnknownData4FC[0x4];
	TAssetPtr<ExternalPtr<struct UStaticMesh>> PackageMesh; /* Ofs: 0x500 Size: 0x1C - AssetObjectProperty TslGame.ItemPackage.PackageMesh */
	uint8_t UnknownData51C[0x4];
	ExternalPtr<struct UBoxComponent> BoxComponent; /* Ofs: 0x520 Size: 0x8 - ObjectProperty TslGame.ItemPackage.BoxComponent */
	ExternalPtr<struct UOnceInteractionComponent> InteractionComponent; /* Ofs: 0x528 Size: 0x8 - ObjectProperty TslGame.ItemPackage.InteractionComponent */
	uint8_t boolField530;
	uint8_t UnknownData531[0x7];
	TArray<ExternalPtr<struct UItem>> Items; /* Ofs: 0x538 Size: 0x10 - ArrayProperty TslGame.ItemPackage.Items */
	FString CreatorName; /* Ofs: 0x548 Size: 0x10 - StrProperty TslGame.ItemPackage.CreatorName */
	int32_t SortPriority; /* Ofs: 0x558 Size: 0x4 - IntProperty TslGame.ItemPackage.SortPriority */
	uint8_t UnknownData55C[0xC];
	ExternalPtr<struct UClass> DropItemFxClass; /* Ofs: 0x568 Size: 0x8 - ClassProperty TslGame.ItemPackage.DropItemFxClass */
	ExternalPtr<struct UTslParticle> BoxFx; /* Ofs: 0x570 Size: 0x8 - ObjectProperty TslGame.ItemPackage.BoxFx */
	uint8_t UnknownData578[0x8];


	inline bool SetPackageName(t_structHelper inst, FText value) { inst.WriteOffset(0x480, value); }
	inline bool SetPackageCategory(t_structHelper inst, FText value) { inst.WriteOffset(0x498, value); }
	inline bool SetPackageDetailedName(t_structHelper inst, FText value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetPackageDescription(t_structHelper inst, FText value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetPackageIcon(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetPackageIconSizeRatio(t_structHelper inst, float value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetPackageToolTipIcon(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetPackageToolTipIconSizeRatio(t_structHelper inst, float value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetPackageMesh(t_structHelper inst, TAssetPtr<ExternalPtr<struct UStaticMesh>> value) { inst.WriteOffset(0x500, value); }
	inline bool SetBoxComponent(t_structHelper inst, ExternalPtr<struct UBoxComponent> value) { inst.WriteOffset(0x520, value); }
	inline bool SetInteractionComponent(t_structHelper inst, ExternalPtr<struct UOnceInteractionComponent> value) { inst.WriteOffset(0x528, value); }
	inline bool DestroyByEmptyItem()
	{
		return boolField530& 0x1;
	}
	inline bool SetDestroyByEmptyItem(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x530, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetItems(t_structHelper inst, TArray<ExternalPtr<struct UItem>> value) { inst.WriteOffset(0x538, value); }
	inline bool SetCreatorName(t_structHelper inst, FString value) { inst.WriteOffset(0x548, value); }
	inline bool SetSortPriority(t_structHelper inst, int32_t value) { inst.WriteOffset(0x558, value); }
	inline bool SetDropItemFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x568, value); }
	inline bool SetBoxFx(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x570, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItemPackage = sizeof(UItemPackage); // 1408
    static_assert(sizeof(UItemPackage) == 0x580, "Size of UItemPackage is not correct.");
	auto constexpr UItemPackage_PackageName_Offset = offsetof(UItemPackage, PackageName);
	static_assert(UItemPackage_PackageName_Offset == 0x480, "UItemPackage::PackageName offset is not 480");
	auto constexpr UItemPackage_PackageCategory_Offset = offsetof(UItemPackage, PackageCategory);
	static_assert(UItemPackage_PackageCategory_Offset == 0x498, "UItemPackage::PackageCategory offset is not 498");
	auto constexpr UItemPackage_PackageDetailedName_Offset = offsetof(UItemPackage, PackageDetailedName);
	static_assert(UItemPackage_PackageDetailedName_Offset == 0x4b0, "UItemPackage::PackageDetailedName offset is not 4b0");
	auto constexpr UItemPackage_PackageDescription_Offset = offsetof(UItemPackage, PackageDescription);
	static_assert(UItemPackage_PackageDescription_Offset == 0x4c8, "UItemPackage::PackageDescription offset is not 4c8");
	auto constexpr UItemPackage_PackageIcon_Offset = offsetof(UItemPackage, PackageIcon);
	static_assert(UItemPackage_PackageIcon_Offset == 0x4e0, "UItemPackage::PackageIcon offset is not 4e0");
	auto constexpr UItemPackage_PackageIconSizeRatio_Offset = offsetof(UItemPackage, PackageIconSizeRatio);
	static_assert(UItemPackage_PackageIconSizeRatio_Offset == 0x4e8, "UItemPackage::PackageIconSizeRatio offset is not 4e8");
	auto constexpr UItemPackage_PackageToolTipIcon_Offset = offsetof(UItemPackage, PackageToolTipIcon);
	static_assert(UItemPackage_PackageToolTipIcon_Offset == 0x4f0, "UItemPackage::PackageToolTipIcon offset is not 4f0");
	auto constexpr UItemPackage_PackageToolTipIconSizeRatio_Offset = offsetof(UItemPackage, PackageToolTipIconSizeRatio);
	static_assert(UItemPackage_PackageToolTipIconSizeRatio_Offset == 0x4f8, "UItemPackage::PackageToolTipIconSizeRatio offset is not 4f8");
	auto constexpr UItemPackage_PackageMesh_Offset = offsetof(UItemPackage, PackageMesh);
	static_assert(UItemPackage_PackageMesh_Offset == 0x500, "UItemPackage::PackageMesh offset is not 500");
	auto constexpr UItemPackage_BoxComponent_Offset = offsetof(UItemPackage, BoxComponent);
	static_assert(UItemPackage_BoxComponent_Offset == 0x520, "UItemPackage::BoxComponent offset is not 520");
	auto constexpr UItemPackage_InteractionComponent_Offset = offsetof(UItemPackage, InteractionComponent);
	static_assert(UItemPackage_InteractionComponent_Offset == 0x528, "UItemPackage::InteractionComponent offset is not 528");
	auto constexpr UItemPackage_boolField530_Offset = offsetof(UItemPackage, boolField530);
	static_assert(UItemPackage_boolField530_Offset == 0x530, "UItemPackage::boolField530 offset is not 530");
	auto constexpr UItemPackage_Items_Offset = offsetof(UItemPackage, Items);
	static_assert(UItemPackage_Items_Offset == 0x538, "UItemPackage::Items offset is not 538");
	auto constexpr UItemPackage_CreatorName_Offset = offsetof(UItemPackage, CreatorName);
	static_assert(UItemPackage_CreatorName_Offset == 0x548, "UItemPackage::CreatorName offset is not 548");
	auto constexpr UItemPackage_SortPriority_Offset = offsetof(UItemPackage, SortPriority);
	static_assert(UItemPackage_SortPriority_Offset == 0x558, "UItemPackage::SortPriority offset is not 558");
	auto constexpr UItemPackage_DropItemFxClass_Offset = offsetof(UItemPackage, DropItemFxClass);
	static_assert(UItemPackage_DropItemFxClass_Offset == 0x568, "UItemPackage::DropItemFxClass offset is not 568");
	auto constexpr UItemPackage_BoxFx_Offset = offsetof(UItemPackage, BoxFx);
	static_assert(UItemPackage_BoxFx_Offset == 0x570, "UItemPackage::BoxFx offset is not 570");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
