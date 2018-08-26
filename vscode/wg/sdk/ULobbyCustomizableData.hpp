#pragma once
#include "UExportableDataAsset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULobbyCustomizableData // Size: 0x78
	: public UExportableDataAsset // Size: 0x58
{
private:
	typedef ULobbyCustomizableData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1858); // id32("Class TslGame.LobbyCustomizableData")
		return ptr;
	}
	TArray<struct FLobbyFaceElement> Faces; /* Ofs: 0x58 Size: 0x10 - ArrayProperty TslGame.LobbyCustomizableData.Faces */
	TArray<struct FLobbyHairElement> Hairs; /* Ofs: 0x68 Size: 0x10 - ArrayProperty TslGame.LobbyCustomizableData.Hairs */


	inline bool SetFaces(t_structHelper inst, TArray<struct FLobbyFaceElement> value) { inst.WriteOffset(0x58, value); }
	inline bool SetHairs(t_structHelper inst, TArray<struct FLobbyHairElement> value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULobbyCustomizableData = sizeof(ULobbyCustomizableData); // 120
    static_assert(sizeof(ULobbyCustomizableData) == 0x78, "Size of ULobbyCustomizableData is not correct.");
	auto constexpr ULobbyCustomizableData_Faces_Offset = offsetof(ULobbyCustomizableData, Faces);
	static_assert(ULobbyCustomizableData_Faces_Offset == 0x58, "ULobbyCustomizableData::Faces offset is not 58");
	auto constexpr ULobbyCustomizableData_Hairs_Offset = offsetof(ULobbyCustomizableData, Hairs);
	static_assert(ULobbyCustomizableData_Hairs_Offset == 0x68, "ULobbyCustomizableData::Hairs offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
