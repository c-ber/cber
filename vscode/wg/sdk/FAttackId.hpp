#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAttackId // Size: 0x4
{
public:
    int32_t ID; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.AttackId.ID */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAttackId = sizeof(FAttackId); // 4
    static_assert(sizeof(FAttackId) == 0x4, "Size of FAttackId is not correct.");
	auto constexpr FAttackId_ID_Offset = offsetof(FAttackId, ID);
	static_assert(FAttackId_ID_Offset == 0x0, "FAttackId::ID offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
