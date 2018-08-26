#pragma once
#include "FNavigationFilterFlags.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavigationQueryFilter // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef UNavigationQueryFilter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(653); // id32("Class Engine.NavigationQueryFilter")
		return ptr;
	}
	TArray<struct FNavigationFilterArea> Areas; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.NavigationQueryFilter.Areas */
	FNavigationFilterFlags IncludeFlags; /* Ofs: 0x40 Size: 0x4 - StructProperty Engine.NavigationQueryFilter.IncludeFlags */
	FNavigationFilterFlags ExcludeFlags; /* Ofs: 0x44 Size: 0x4 - StructProperty Engine.NavigationQueryFilter.ExcludeFlags */
	uint8_t UnknownData48[0x8];


	inline bool SetAreas(t_structHelper inst, TArray<struct FNavigationFilterArea> value) { inst.WriteOffset(0x30, value); }
	inline bool SetIncludeFlags(t_structHelper inst, FNavigationFilterFlags value) { inst.WriteOffset(0x40, value); }
	inline bool SetExcludeFlags(t_structHelper inst, FNavigationFilterFlags value) { inst.WriteOffset(0x44, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavigationQueryFilter = sizeof(UNavigationQueryFilter); // 80
    static_assert(sizeof(UNavigationQueryFilter) == 0x50, "Size of UNavigationQueryFilter is not correct.");
	auto constexpr UNavigationQueryFilter_Areas_Offset = offsetof(UNavigationQueryFilter, Areas);
	static_assert(UNavigationQueryFilter_Areas_Offset == 0x30, "UNavigationQueryFilter::Areas offset is not 30");
	auto constexpr UNavigationQueryFilter_IncludeFlags_Offset = offsetof(UNavigationQueryFilter, IncludeFlags);
	static_assert(UNavigationQueryFilter_IncludeFlags_Offset == 0x40, "UNavigationQueryFilter::IncludeFlags offset is not 40");
	auto constexpr UNavigationQueryFilter_ExcludeFlags_Offset = offsetof(UNavigationQueryFilter, ExcludeFlags);
	static_assert(UNavigationQueryFilter_ExcludeFlags_Offset == 0x44, "UNavigationQueryFilter::ExcludeFlags offset is not 44");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
