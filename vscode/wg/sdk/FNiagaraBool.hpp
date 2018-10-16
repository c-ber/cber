#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraBool // Size: 0x4
{
public:
    int32_t Value; /* Ofs: 0x0 Size: 0x4 IntProperty Niagara.NiagaraBool.Value */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraBool = sizeof(FNiagaraBool); // 4
    static_assert(sizeof(FNiagaraBool) == 0x4, "Size of FNiagaraBool is not correct.");
	auto constexpr FNiagaraBool_Value_Offset = offsetof(FNiagaraBool, Value);
	static_assert(FNiagaraBool_Value_Offset == 0x0, "FNiagaraBool::Value offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
