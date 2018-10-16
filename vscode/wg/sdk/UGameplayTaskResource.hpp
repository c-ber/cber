#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameplayTaskResource // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UGameplayTaskResource t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1678); // id32("Class GameplayTasks.GameplayTaskResource")
		return ptr;
	}
	int32_t ManualResourceID; /* Ofs: 0x30 Size: 0x4 - IntProperty GameplayTasks.GameplayTaskResource.ManualResourceID */
	int8_t AutoResourceID; /* Ofs: 0x34 Size: 0x1 - Int8Property GameplayTasks.GameplayTaskResource.AutoResourceID */
	uint8_t UnknownData35[0x3];
	uint8_t boolField38;
	uint8_t UnknownData39[0x7];


	inline bool SetManualResourceID(t_structHelper inst, int32_t value) { inst.WriteOffset(0x30, value); }
	inline bool SetAutoResourceID(t_structHelper inst, int8_t value) { inst.WriteOffset(0x34, value); }
	inline bool bManuallySetID()
	{
		return boolField38& 0x1;
	}
	inline bool SetbManuallySetID(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameplayTaskResource = sizeof(UGameplayTaskResource); // 64
    static_assert(sizeof(UGameplayTaskResource) == 0x40, "Size of UGameplayTaskResource is not correct.");
	auto constexpr UGameplayTaskResource_ManualResourceID_Offset = offsetof(UGameplayTaskResource, ManualResourceID);
	static_assert(UGameplayTaskResource_ManualResourceID_Offset == 0x30, "UGameplayTaskResource::ManualResourceID offset is not 30");
	auto constexpr UGameplayTaskResource_AutoResourceID_Offset = offsetof(UGameplayTaskResource, AutoResourceID);
	static_assert(UGameplayTaskResource_AutoResourceID_Offset == 0x34, "UGameplayTaskResource::AutoResourceID offset is not 34");
	auto constexpr UGameplayTaskResource_boolField38_Offset = offsetof(UGameplayTaskResource, boolField38);
	static_assert(UGameplayTaskResource_boolField38_Offset == 0x38, "UGameplayTaskResource::boolField38 offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
