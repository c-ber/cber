#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialParameterCollectionInstance // Size: 0xF0
	: public UObject // Size: 0x30
{
private:
	typedef UMaterialParameterCollectionInstance t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1024); // id32("Class Engine.MaterialParameterCollectionInstance")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	ExternalPtr<struct UMaterialParameterCollection> Collection; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.MaterialParameterCollectionInstance.Collection */
	ExternalPtr<struct UWorld> World; /* Ofs: 0x40 Size: 0x8 - ObjectProperty Engine.MaterialParameterCollectionInstance.World */
	uint8_t UnknownData48[0xA8];


	inline bool SetCollection(t_structHelper inst, ExternalPtr<struct UMaterialParameterCollection> value) { inst.WriteOffset(0x38, value); }
	inline bool SetWorld(t_structHelper inst, ExternalPtr<struct UWorld> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialParameterCollectionInstance = sizeof(UMaterialParameterCollectionInstance); // 240
    static_assert(sizeof(UMaterialParameterCollectionInstance) == 0xF0, "Size of UMaterialParameterCollectionInstance is not correct.");
	auto constexpr UMaterialParameterCollectionInstance_Collection_Offset = offsetof(UMaterialParameterCollectionInstance, Collection);
	static_assert(UMaterialParameterCollectionInstance_Collection_Offset == 0x38, "UMaterialParameterCollectionInstance::Collection offset is not 38");
	auto constexpr UMaterialParameterCollectionInstance_World_Offset = offsetof(UMaterialParameterCollectionInstance, World);
	static_assert(UMaterialParameterCollectionInstance_World_Offset == 0x40, "UMaterialParameterCollectionInstance::World offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
