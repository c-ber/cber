#pragma once
#include "UItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URandomlyGeneratableItem // Size: 0x230
	: public UItem // Size: 0x1C8
{
private:
	typedef URandomlyGeneratableItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1913); // id32("Class TslGame.RandomlyGeneratableItem")
		return ptr;
	}
	FString RandomExpression; /* Ofs: 0x1C8 Size: 0x10 - StrProperty TslGame.RandomlyGeneratableItem.RandomExpression */
	uint8_t boolField1D8;
	uint8_t UnknownData1D9[0x7];
	TAssetPtr<ExternalPtr<struct UClass>> OpenKeyItem; /* Ofs: 0x1E0 Size: 0x1C - AssetClassProperty TslGame.RandomlyGeneratableItem.OpenKeyItem */
	uint8_t UnknownData1FC[0x4];
	int32_t OpenKeyItemCount; /* Ofs: 0x200 Size: 0x4 - IntProperty TslGame.RandomlyGeneratableItem.OpenKeyItemCount */
	int32_t PointOpenPrice; /* Ofs: 0x204 Size: 0x4 - IntProperty TslGame.RandomlyGeneratableItem.PointOpenPrice */
	int32_t ExchangeBundleId; /* Ofs: 0x208 Size: 0x4 - IntProperty TslGame.RandomlyGeneratableItem.ExchangeBundleId */
	uint8_t UnknownData20C[0x4];
	TArray<struct FLobbyItemBundle> BundleList; /* Ofs: 0x210 Size: 0x10 - ArrayProperty TslGame.RandomlyGeneratableItem.BundleList */
	TArray<ExternalPtr<struct UClass>> ReferenceItems; /* Ofs: 0x220 Size: 0x10 - ArrayProperty TslGame.RandomlyGeneratableItem.ReferenceItems */


	inline bool SetRandomExpression(t_structHelper inst, FString value) { inst.WriteOffset(0x1C8, value); }
	inline bool bOpenByKey()
	{
		return boolField1D8& 0x1;
	}
	inline bool SetbOpenByKey(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1D8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOpenByPoint()
	{
		return boolField1D8& 0x2;
	}
	inline bool SetbOpenByPoint(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1D8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetOpenKeyItem(t_structHelper inst, TAssetPtr<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x1E0, value); }
	inline bool SetOpenKeyItemCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x200, value); }
	inline bool SetPointOpenPrice(t_structHelper inst, int32_t value) { inst.WriteOffset(0x204, value); }
	inline bool SetExchangeBundleId(t_structHelper inst, int32_t value) { inst.WriteOffset(0x208, value); }
	inline bool SetBundleList(t_structHelper inst, TArray<struct FLobbyItemBundle> value) { inst.WriteOffset(0x210, value); }
	inline bool SetReferenceItems(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x220, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURandomlyGeneratableItem = sizeof(URandomlyGeneratableItem); // 560
    static_assert(sizeof(URandomlyGeneratableItem) == 0x230, "Size of URandomlyGeneratableItem is not correct.");
	auto constexpr URandomlyGeneratableItem_RandomExpression_Offset = offsetof(URandomlyGeneratableItem, RandomExpression);
	static_assert(URandomlyGeneratableItem_RandomExpression_Offset == 0x1c8, "URandomlyGeneratableItem::RandomExpression offset is not 1c8");
	auto constexpr URandomlyGeneratableItem_boolField1D8_Offset = offsetof(URandomlyGeneratableItem, boolField1D8);
	static_assert(URandomlyGeneratableItem_boolField1D8_Offset == 0x1d8, "URandomlyGeneratableItem::boolField1D8 offset is not 1d8");
	auto constexpr URandomlyGeneratableItem_OpenKeyItem_Offset = offsetof(URandomlyGeneratableItem, OpenKeyItem);
	static_assert(URandomlyGeneratableItem_OpenKeyItem_Offset == 0x1e0, "URandomlyGeneratableItem::OpenKeyItem offset is not 1e0");
	auto constexpr URandomlyGeneratableItem_OpenKeyItemCount_Offset = offsetof(URandomlyGeneratableItem, OpenKeyItemCount);
	static_assert(URandomlyGeneratableItem_OpenKeyItemCount_Offset == 0x200, "URandomlyGeneratableItem::OpenKeyItemCount offset is not 200");
	auto constexpr URandomlyGeneratableItem_PointOpenPrice_Offset = offsetof(URandomlyGeneratableItem, PointOpenPrice);
	static_assert(URandomlyGeneratableItem_PointOpenPrice_Offset == 0x204, "URandomlyGeneratableItem::PointOpenPrice offset is not 204");
	auto constexpr URandomlyGeneratableItem_ExchangeBundleId_Offset = offsetof(URandomlyGeneratableItem, ExchangeBundleId);
	static_assert(URandomlyGeneratableItem_ExchangeBundleId_Offset == 0x208, "URandomlyGeneratableItem::ExchangeBundleId offset is not 208");
	auto constexpr URandomlyGeneratableItem_BundleList_Offset = offsetof(URandomlyGeneratableItem, BundleList);
	static_assert(URandomlyGeneratableItem_BundleList_Offset == 0x210, "URandomlyGeneratableItem::BundleList offset is not 210");
	auto constexpr URandomlyGeneratableItem_ReferenceItems_Offset = offsetof(URandomlyGeneratableItem, ReferenceItems);
	static_assert(URandomlyGeneratableItem_ReferenceItems_Offset == 0x220, "URandomlyGeneratableItem::ReferenceItems offset is not 220");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
