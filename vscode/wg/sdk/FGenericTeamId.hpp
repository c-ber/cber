#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGenericTeamId // Size: 0x1
{
public:
    uint8_t TeamId; /* Ofs: 0x0 Size: 0x1 ByteProperty AIModule.GenericTeamId.TeamId */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGenericTeamId = sizeof(FGenericTeamId); // 1
    static_assert(sizeof(FGenericTeamId) == 0x1, "Size of FGenericTeamId is not correct.");
	auto constexpr FGenericTeamId_TeamId_Offset = offsetof(FGenericTeamId, TeamId);
	static_assert(FGenericTeamId_TeamId_Offset == 0x0, "FGenericTeamId::TeamId offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
