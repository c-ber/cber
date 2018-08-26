#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FConstrainComponentPropName // Size: 0x8
{
public:
    FName ComponentName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.ConstrainComponentPropName.ComponentName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFConstrainComponentPropName = sizeof(FConstrainComponentPropName); // 8
    static_assert(sizeof(FConstrainComponentPropName) == 0x8, "Size of FConstrainComponentPropName is not correct.");
	auto constexpr FConstrainComponentPropName_ComponentName_Offset = offsetof(FConstrainComponentPropName, ComponentName);
	static_assert(FConstrainComponentPropName_ComponentName_Offset == 0x0, "FConstrainComponentPropName::ComponentName offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
