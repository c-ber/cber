#pragma once
#include "FDynamicPropertyPath.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPropertyBinding // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef UPropertyBinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1634); // id32("Class UMG.PropertyBinding")
		return ptr;
	}
	TWeakObjectPtr<ExternalPtr<struct UObject>> SourceObject; /* Ofs: 0x30 Size: 0x8 - WeakObjectProperty UMG.PropertyBinding.SourceObject */
	FDynamicPropertyPath SourcePath; /* Ofs: 0x38 Size: 0x10 - StructProperty UMG.PropertyBinding.SourcePath */
	FName DestinationProperty; /* Ofs: 0x48 Size: 0x8 - NameProperty UMG.PropertyBinding.DestinationProperty */


	inline bool SetSourceObject(t_structHelper inst, TWeakObjectPtr<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x30, value); }
	inline bool SetSourcePath(t_structHelper inst, FDynamicPropertyPath value) { inst.WriteOffset(0x38, value); }
	inline bool SetDestinationProperty(t_structHelper inst, FName value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPropertyBinding = sizeof(UPropertyBinding); // 80
    static_assert(sizeof(UPropertyBinding) == 0x50, "Size of UPropertyBinding is not correct.");
	auto constexpr UPropertyBinding_SourceObject_Offset = offsetof(UPropertyBinding, SourceObject);
	static_assert(UPropertyBinding_SourceObject_Offset == 0x30, "UPropertyBinding::SourceObject offset is not 30");
	auto constexpr UPropertyBinding_SourcePath_Offset = offsetof(UPropertyBinding, SourcePath);
	static_assert(UPropertyBinding_SourcePath_Offset == 0x38, "UPropertyBinding::SourcePath offset is not 38");
	auto constexpr UPropertyBinding_DestinationProperty_Offset = offsetof(UPropertyBinding, DestinationProperty);
	static_assert(UPropertyBinding_DestinationProperty_Offset == 0x48, "UPropertyBinding::DestinationProperty offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
