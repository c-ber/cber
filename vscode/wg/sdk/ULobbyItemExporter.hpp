#pragma once
#include "UExportableDataAsset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULobbyItemExporter // Size: 0x68
	: public UExportableDataAsset // Size: 0x58
{
private:
	typedef ULobbyItemExporter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1859); // id32("Class TslGame.LobbyItemExporter")
		return ptr;
	}
	FString LocJsonSaveFileName; /* Ofs: 0x58 Size: 0x10 - StrProperty TslGame.LobbyItemExporter.LocJsonSaveFileName */


	inline bool SetLocJsonSaveFileName(t_structHelper inst, FString value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULobbyItemExporter = sizeof(ULobbyItemExporter); // 104
    static_assert(sizeof(ULobbyItemExporter) == 0x68, "Size of ULobbyItemExporter is not correct.");
	auto constexpr ULobbyItemExporter_LocJsonSaveFileName_Offset = offsetof(ULobbyItemExporter, LocJsonSaveFileName);
	static_assert(ULobbyItemExporter_LocJsonSaveFileName_Offset == 0x58, "ULobbyItemExporter::LocJsonSaveFileName offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
