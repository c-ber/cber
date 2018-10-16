#pragma once
#include "FLogCommon.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLogBase // Size: 0x58
{
public:
    FLogCommon Common; /* Ofs: 0x0 Size: 0x28 StructProperty TslCommon.LogBase.Common */
    int32_t _V; /* Ofs: 0x28 Size: 0x4 IntProperty TslCommon.LogBase._V */
    uint8_t UnknownData2C[0x4];
    FString _D; /* Ofs: 0x30 Size: 0x10 StrProperty TslCommon.LogBase._D */
    FString _T; /* Ofs: 0x40 Size: 0x10 StrProperty TslCommon.LogBase._T */
    bool _U; /* Ofs: 0x50 Size: 0x1 BitMask: 01 BoolProperty TslCommon.LogBase._U */
    uint8_t UnknownData51[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLogBase = sizeof(FLogBase); // 88
    static_assert(sizeof(FLogBase) == 0x58, "Size of FLogBase is not correct.");
	auto constexpr FLogBase_Common_Offset = offsetof(FLogBase, Common);
	static_assert(FLogBase_Common_Offset == 0x0, "FLogBase::Common offset is not 0");
	auto constexpr FLogBase__V_Offset = offsetof(FLogBase, _V);
	static_assert(FLogBase__V_Offset == 0x28, "FLogBase::_V offset is not 28");
	auto constexpr FLogBase__D_Offset = offsetof(FLogBase, _D);
	static_assert(FLogBase__D_Offset == 0x30, "FLogBase::_D offset is not 30");
	auto constexpr FLogBase__T_Offset = offsetof(FLogBase, _T);
	static_assert(FLogBase__T_Offset == 0x40, "FLogBase::_T offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
