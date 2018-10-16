#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavigationDataChunk // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef UNavigationDataChunk t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1036); // id32("Class Engine.NavigationDataChunk")
		return ptr;
	}
	FName NavigationDataName; /* Ofs: 0x30 Size: 0x8 - NameProperty Engine.NavigationDataChunk.NavigationDataName */


	inline bool SetNavigationDataName(t_structHelper inst, FName value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavigationDataChunk = sizeof(UNavigationDataChunk); // 56
    static_assert(sizeof(UNavigationDataChunk) == 0x38, "Size of UNavigationDataChunk is not correct.");
	auto constexpr UNavigationDataChunk_NavigationDataName_Offset = offsetof(UNavigationDataChunk, NavigationDataName);
	static_assert(UNavigationDataChunk_NavigationDataName_Offset == 0x30, "UNavigationDataChunk::NavigationDataName offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
