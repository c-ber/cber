#pragma once
#include "UPlatformInterfaceBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCloudStorageBase // Size: 0x58
	: public UPlatformInterfaceBase // Size: 0x40
{
private:
	typedef UCloudStorageBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1179); // id32("Class Engine.CloudStorageBase")
		return ptr;
	}
	TArray<struct FString> LocalCloudFiles; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.CloudStorageBase.LocalCloudFiles */
	uint8_t boolField50;
	uint8_t UnknownData51[0x7];


	inline bool SetLocalCloudFiles(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x40, value); }
	inline bool bSuppressDelegateCalls()
	{
		return boolField50& 0x1;
	}
	inline bool SetbSuppressDelegateCalls(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCloudStorageBase = sizeof(UCloudStorageBase); // 88
    static_assert(sizeof(UCloudStorageBase) == 0x58, "Size of UCloudStorageBase is not correct.");
	auto constexpr UCloudStorageBase_LocalCloudFiles_Offset = offsetof(UCloudStorageBase, LocalCloudFiles);
	static_assert(UCloudStorageBase_LocalCloudFiles_Offset == 0x40, "UCloudStorageBase::LocalCloudFiles offset is not 40");
	auto constexpr UCloudStorageBase_boolField50_Offset = offsetof(UCloudStorageBase, boolField50);
	static_assert(UCloudStorageBase_boolField50_Offset == 0x50, "UCloudStorageBase::boolField50 offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
