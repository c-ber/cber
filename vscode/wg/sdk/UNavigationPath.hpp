#pragma once
#include "ENavigationOptionFlag.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavigationPath // Size: 0xD0
	: public UObject // Size: 0x30
{
private:
	typedef UNavigationPath t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1038); // id32("Class Engine.NavigationPath")
		return ptr;
	}
	FScriptMulticastDelegate PathUpdatedNotifier; /* Ofs: 0x30 Size: 0x10 - MulticastDelegateProperty Engine.NavigationPath.PathUpdatedNotifier */
	TArray<struct FVector> PathPoints; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.NavigationPath.PathPoints */
	TEnumAsByte<enum ENavigationOptionFlag> RecalculateOnInvalidation; /* Ofs: 0x50 Size: 0x1 - ByteProperty Engine.NavigationPath.RecalculateOnInvalidation */
	uint8_t UnknownData51[0x7F];


	inline bool SetPathUpdatedNotifier(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x30, value); }
	inline bool SetPathPoints(t_structHelper inst, TArray<struct FVector> value) { inst.WriteOffset(0x40, value); }
	inline bool SetRecalculateOnInvalidation(t_structHelper inst, TEnumAsByte<enum ENavigationOptionFlag> value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavigationPath = sizeof(UNavigationPath); // 208
    static_assert(sizeof(UNavigationPath) == 0xD0, "Size of UNavigationPath is not correct.");
	auto constexpr UNavigationPath_PathUpdatedNotifier_Offset = offsetof(UNavigationPath, PathUpdatedNotifier);
	static_assert(UNavigationPath_PathUpdatedNotifier_Offset == 0x30, "UNavigationPath::PathUpdatedNotifier offset is not 30");
	auto constexpr UNavigationPath_PathPoints_Offset = offsetof(UNavigationPath, PathPoints);
	static_assert(UNavigationPath_PathPoints_Offset == 0x40, "UNavigationPath::PathPoints offset is not 40");
	auto constexpr UNavigationPath_RecalculateOnInvalidation_Offset = offsetof(UNavigationPath, RecalculateOnInvalidation);
	static_assert(UNavigationPath_RecalculateOnInvalidation_Offset == 0x50, "UNavigationPath::RecalculateOnInvalidation offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
