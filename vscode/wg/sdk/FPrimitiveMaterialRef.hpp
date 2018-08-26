#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPrimitiveMaterialRef // Size: 0x18
{
public:
    ExternalPtr<struct UPrimitiveComponent> Primitive; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.PrimitiveMaterialRef.Primitive */
    ExternalPtr<struct UDecalComponent> Decal; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.PrimitiveMaterialRef.Decal */
    int32_t ElementIndex; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.PrimitiveMaterialRef.ElementIndex */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPrimitiveMaterialRef = sizeof(FPrimitiveMaterialRef); // 24
    static_assert(sizeof(FPrimitiveMaterialRef) == 0x18, "Size of FPrimitiveMaterialRef is not correct.");
	auto constexpr FPrimitiveMaterialRef_Primitive_Offset = offsetof(FPrimitiveMaterialRef, Primitive);
	static_assert(FPrimitiveMaterialRef_Primitive_Offset == 0x0, "FPrimitiveMaterialRef::Primitive offset is not 0");
	auto constexpr FPrimitiveMaterialRef_Decal_Offset = offsetof(FPrimitiveMaterialRef, Decal);
	static_assert(FPrimitiveMaterialRef_Decal_Offset == 0x8, "FPrimitiveMaterialRef::Decal offset is not 8");
	auto constexpr FPrimitiveMaterialRef_ElementIndex_Offset = offsetof(FPrimitiveMaterialRef, ElementIndex);
	static_assert(FPrimitiveMaterialRef_ElementIndex_Offset == 0x10, "FPrimitiveMaterialRef::ElementIndex offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
