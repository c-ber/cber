#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAssetManager // Size: 0x3A8
	: public UObject // Size: 0x30
{
private:
	typedef UAssetManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(281); // id32("Class Engine.AssetManager")
		return ptr;
	}
	uint8_t UnknownData30[0x260];
	TArray<ExternalPtr<struct UObject>> ObjectReferenceList; /* Ofs: 0x290 Size: 0x10 - ArrayProperty Engine.AssetManager.ObjectReferenceList */
	uint8_t boolField2A0;
	uint8_t boolField2A1;
	uint8_t boolField2A2;
	uint8_t boolField2A3;
	uint8_t boolField2A4;
	uint8_t boolField2A5;
	uint8_t boolField2A6;
	uint8_t UnknownData2A7[0x101];


	inline bool SetObjectReferenceList(t_structHelper inst, TArray<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x290, value); }
	inline bool bIsGlobalAsyncScanEnvironment()
	{
		return boolField2A0& 0x1;
	}
	inline bool SetbIsGlobalAsyncScanEnvironment(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2A0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShouldKeepHardRefs()
	{
		return boolField2A1& 0x1;
	}
	inline bool SetbShouldKeepHardRefs(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2A1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShouldGuessTypeAndName()
	{
		return boolField2A2& 0x1;
	}
	inline bool SetbShouldGuessTypeAndName(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2A2, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShouldUseSynchronousLoad()
	{
		return boolField2A3& 0x1;
	}
	inline bool SetbShouldUseSynchronousLoad(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2A3, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsBulkScanning()
	{
		return boolField2A4& 0x1;
	}
	inline bool SetbIsBulkScanning(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2A4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsManagementDatabaseCurrent()
	{
		return boolField2A5& 0x1;
	}
	inline bool SetbIsManagementDatabaseCurrent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2A5, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUpdateManagementDatabaseAfterScan()
	{
		return boolField2A6& 0x1;
	}
	inline bool SetbUpdateManagementDatabaseAfterScan(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2A6, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAssetManager = sizeof(UAssetManager); // 936
    static_assert(sizeof(UAssetManager) == 0x3A8, "Size of UAssetManager is not correct.");
	auto constexpr UAssetManager_ObjectReferenceList_Offset = offsetof(UAssetManager, ObjectReferenceList);
	static_assert(UAssetManager_ObjectReferenceList_Offset == 0x290, "UAssetManager::ObjectReferenceList offset is not 290");
	auto constexpr UAssetManager_boolField2A0_Offset = offsetof(UAssetManager, boolField2A0);
	static_assert(UAssetManager_boolField2A0_Offset == 0x2a0, "UAssetManager::boolField2A0 offset is not 2a0");
	auto constexpr UAssetManager_boolField2A1_Offset = offsetof(UAssetManager, boolField2A1);
	static_assert(UAssetManager_boolField2A1_Offset == 0x2a1, "UAssetManager::boolField2A1 offset is not 2a1");
	auto constexpr UAssetManager_boolField2A2_Offset = offsetof(UAssetManager, boolField2A2);
	static_assert(UAssetManager_boolField2A2_Offset == 0x2a2, "UAssetManager::boolField2A2 offset is not 2a2");
	auto constexpr UAssetManager_boolField2A3_Offset = offsetof(UAssetManager, boolField2A3);
	static_assert(UAssetManager_boolField2A3_Offset == 0x2a3, "UAssetManager::boolField2A3 offset is not 2a3");
	auto constexpr UAssetManager_boolField2A4_Offset = offsetof(UAssetManager, boolField2A4);
	static_assert(UAssetManager_boolField2A4_Offset == 0x2a4, "UAssetManager::boolField2A4 offset is not 2a4");
	auto constexpr UAssetManager_boolField2A5_Offset = offsetof(UAssetManager, boolField2A5);
	static_assert(UAssetManager_boolField2A5_Offset == 0x2a5, "UAssetManager::boolField2A5 offset is not 2a5");
	auto constexpr UAssetManager_boolField2A6_Offset = offsetof(UAssetManager, boolField2A6);
	static_assert(UAssetManager_boolField2A6_Offset == 0x2a6, "UAssetManager::boolField2A6 offset is not 2a6");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
