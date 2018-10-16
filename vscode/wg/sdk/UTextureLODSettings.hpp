#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTextureLODSettings // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UTextureLODSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1249); // id32("Class Engine.TextureLODSettings")
		return ptr;
	}
	TArray<struct FTextureLODGroup> TextureLODGroups; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.TextureLODSettings.TextureLODGroups */


	inline bool SetTextureLODGroups(t_structHelper inst, TArray<struct FTextureLODGroup> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTextureLODSettings = sizeof(UTextureLODSettings); // 64
    static_assert(sizeof(UTextureLODSettings) == 0x40, "Size of UTextureLODSettings is not correct.");
	auto constexpr UTextureLODSettings_TextureLODGroups_Offset = offsetof(UTextureLODSettings, TextureLODGroups);
	static_assert(UTextureLODSettings_TextureLODGroups_Offset == 0x30, "UTextureLODSettings::TextureLODGroups offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
