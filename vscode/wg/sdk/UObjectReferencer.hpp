#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UObjectReferencer // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UObjectReferencer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1047); // id32("Class Engine.ObjectReferencer")
		return ptr;
	}
	TArray<ExternalPtr<struct UObject>> ReferencedObjects; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.ObjectReferencer.ReferencedObjects */


	inline bool SetReferencedObjects(t_structHelper inst, TArray<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUObjectReferencer = sizeof(UObjectReferencer); // 64
    static_assert(sizeof(UObjectReferencer) == 0x40, "Size of UObjectReferencer is not correct.");
	auto constexpr UObjectReferencer_ReferencedObjects_Offset = offsetof(UObjectReferencer, ReferencedObjects);
	static_assert(UObjectReferencer_ReferencedObjects_Offset == 0x30, "UObjectReferencer::ReferencedObjects offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
