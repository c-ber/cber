#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraScriptDataInterfaceInfo // Size: 0x20
{
public:
    ExternalPtr<struct UNiagaraDataInterface> DataInterface; /* Ofs: 0x0 Size: 0x8 ObjectProperty Niagara.NiagaraScriptDataInterfaceInfo.DataInterface */
    FGuid ID; /* Ofs: 0x8 Size: 0x10 StructProperty Niagara.NiagaraScriptDataInterfaceInfo.ID */
    FName Name; /* Ofs: 0x18 Size: 0x8 NameProperty Niagara.NiagaraScriptDataInterfaceInfo.Name */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraScriptDataInterfaceInfo = sizeof(FNiagaraScriptDataInterfaceInfo); // 32
    static_assert(sizeof(FNiagaraScriptDataInterfaceInfo) == 0x20, "Size of FNiagaraScriptDataInterfaceInfo is not correct.");
	auto constexpr FNiagaraScriptDataInterfaceInfo_DataInterface_Offset = offsetof(FNiagaraScriptDataInterfaceInfo, DataInterface);
	static_assert(FNiagaraScriptDataInterfaceInfo_DataInterface_Offset == 0x0, "FNiagaraScriptDataInterfaceInfo::DataInterface offset is not 0");
	auto constexpr FNiagaraScriptDataInterfaceInfo_ID_Offset = offsetof(FNiagaraScriptDataInterfaceInfo, ID);
	static_assert(FNiagaraScriptDataInterfaceInfo_ID_Offset == 0x8, "FNiagaraScriptDataInterfaceInfo::ID offset is not 8");
	auto constexpr FNiagaraScriptDataInterfaceInfo_Name_Offset = offsetof(FNiagaraScriptDataInterfaceInfo, Name);
	static_assert(FNiagaraScriptDataInterfaceInfo_Name_Offset == 0x18, "FNiagaraScriptDataInterfaceInfo::Name offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
