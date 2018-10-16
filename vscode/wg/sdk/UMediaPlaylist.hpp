#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMediaPlaylist // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UMediaPlaylist t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(347); // id32("Class MediaAssets.MediaPlaylist")
		return ptr;
	}
	TArray<ExternalPtr<struct UMediaSource>> Items; /* Ofs: 0x30 Size: 0x10 - ArrayProperty MediaAssets.MediaPlaylist.Items */


	inline bool SetItems(t_structHelper inst, TArray<ExternalPtr<struct UMediaSource>> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMediaPlaylist = sizeof(UMediaPlaylist); // 64
    static_assert(sizeof(UMediaPlaylist) == 0x40, "Size of UMediaPlaylist is not correct.");
	auto constexpr UMediaPlaylist_Items_Offset = offsetof(UMediaPlaylist, Items);
	static_assert(UMediaPlaylist_Items_Offset == 0x30, "UMediaPlaylist::Items offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
