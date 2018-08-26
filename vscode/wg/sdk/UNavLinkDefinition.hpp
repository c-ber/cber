#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavLinkDefinition // Size: 0x58
	: public UObject // Size: 0x30
{
private:
	typedef UNavLinkDefinition t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1041); // id32("Class Engine.NavLinkDefinition")
		return ptr;
	}
	TArray<struct FNavigationLink> Links; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.NavLinkDefinition.Links */
	TArray<struct FNavigationSegmentLink> SegmentLinks; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.NavLinkDefinition.SegmentLinks */
	uint8_t UnknownData50[0x8];


	inline bool SetLinks(t_structHelper inst, TArray<struct FNavigationLink> value) { inst.WriteOffset(0x30, value); }
	inline bool SetSegmentLinks(t_structHelper inst, TArray<struct FNavigationSegmentLink> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavLinkDefinition = sizeof(UNavLinkDefinition); // 88
    static_assert(sizeof(UNavLinkDefinition) == 0x58, "Size of UNavLinkDefinition is not correct.");
	auto constexpr UNavLinkDefinition_Links_Offset = offsetof(UNavLinkDefinition, Links);
	static_assert(UNavLinkDefinition_Links_Offset == 0x30, "UNavLinkDefinition::Links offset is not 30");
	auto constexpr UNavLinkDefinition_SegmentLinks_Offset = offsetof(UNavLinkDefinition, SegmentLinks);
	static_assert(UNavLinkDefinition_SegmentLinks_Offset == 0x40, "UNavLinkDefinition::SegmentLinks offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
