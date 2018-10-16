#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCollisionProfileName // Size: 0x8
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.CollisionProfileName.Name */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCollisionProfileName = sizeof(FCollisionProfileName); // 8
    static_assert(sizeof(FCollisionProfileName) == 0x8, "Size of FCollisionProfileName is not correct.");
	auto constexpr FCollisionProfileName_Name_Offset = offsetof(FCollisionProfileName, Name);
	static_assert(FCollisionProfileName_Name_Offset == 0x0, "FCollisionProfileName::Name offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
