#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFoliageTypeObject // Size: 0x20
{
public:
    ExternalPtr<struct UObject> FoliageTypeObject; /* Ofs: 0x0 Size: 0x8 ObjectProperty Foliage.FoliageTypeObject.FoliageTypeObject */
    ExternalPtr<struct UFoliageType_InstancedStaticMesh> TypeInstance; /* Ofs: 0x8 Size: 0x8 ObjectProperty Foliage.FoliageTypeObject.TypeInstance */
    bool bIsAsset; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty Foliage.FoliageTypeObject.bIsAsset */
    uint8_t UnknownData11[0x7];
    ExternalPtr<struct UClass> Type; /* Ofs: 0x18 Size: 0x8 ClassProperty Foliage.FoliageTypeObject.Type */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFoliageTypeObject = sizeof(FFoliageTypeObject); // 32
    static_assert(sizeof(FFoliageTypeObject) == 0x20, "Size of FFoliageTypeObject is not correct.");
	auto constexpr FFoliageTypeObject_FoliageTypeObject_Offset = offsetof(FFoliageTypeObject, FoliageTypeObject);
	static_assert(FFoliageTypeObject_FoliageTypeObject_Offset == 0x0, "FFoliageTypeObject::FoliageTypeObject offset is not 0");
	auto constexpr FFoliageTypeObject_TypeInstance_Offset = offsetof(FFoliageTypeObject, TypeInstance);
	static_assert(FFoliageTypeObject_TypeInstance_Offset == 0x8, "FFoliageTypeObject::TypeInstance offset is not 8");
	auto constexpr FFoliageTypeObject_Type_Offset = offsetof(FFoliageTypeObject, Type);
	static_assert(FFoliageTypeObject_Type_Offset == 0x18, "FFoliageTypeObject::Type offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
