#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDebugDisplayProperty // Size: 0x20
{
public:
    ExternalPtr<struct UObject> obj; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.DebugDisplayProperty.obj */
    ExternalPtr<struct UClass> WithinClass; /* Ofs: 0x8 Size: 0x8 ClassProperty Engine.DebugDisplayProperty.WithinClass */
    uint8_t UnknownData10[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDebugDisplayProperty = sizeof(FDebugDisplayProperty); // 32
    static_assert(sizeof(FDebugDisplayProperty) == 0x20, "Size of FDebugDisplayProperty is not correct.");
	auto constexpr FDebugDisplayProperty_obj_Offset = offsetof(FDebugDisplayProperty, obj);
	static_assert(FDebugDisplayProperty_obj_Offset == 0x0, "FDebugDisplayProperty::obj offset is not 0");
	auto constexpr FDebugDisplayProperty_WithinClass_Offset = offsetof(FDebugDisplayProperty, WithinClass);
	static_assert(FDebugDisplayProperty_WithinClass_Offset == 0x8, "FDebugDisplayProperty::WithinClass offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
