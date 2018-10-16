#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UObjectLibrary // Size: 0x160
	: public UObject // Size: 0x30
{
private:
	typedef UObjectLibrary t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1046); // id32("Class Engine.ObjectLibrary")
		return ptr;
	}
	ExternalPtr<struct UClass> ObjectBaseClass; /* Ofs: 0x30 Size: 0x8 - ClassProperty Engine.ObjectLibrary.ObjectBaseClass */
	uint8_t boolField38;
	uint8_t UnknownData39[0x7];
	TArray<ExternalPtr<struct UObject>> Objects; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.ObjectLibrary.Objects */
	TArray<ExternalPtr<struct UObject>> WeakObjects; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.ObjectLibrary.WeakObjects */
	uint8_t boolField60;
	uint8_t boolField61;
	uint8_t UnknownData62[0xFE];


	inline bool SetObjectBaseClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x30, value); }
	inline bool bHasBlueprintClasses()
	{
		return boolField38& 0x1;
	}
	inline bool SetbHasBlueprintClasses(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetObjects(t_structHelper inst, TArray<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x40, value); }
	inline bool SetWeakObjects(t_structHelper inst, TArray<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x50, value); }
	inline bool bUseWeakReferences()
	{
		return boolField60& 0x1;
	}
	inline bool SetbUseWeakReferences(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x60, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsFullyLoaded()
	{
		return boolField61& 0x1;
	}
	inline bool SetbIsFullyLoaded(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x61, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUObjectLibrary = sizeof(UObjectLibrary); // 352
    static_assert(sizeof(UObjectLibrary) == 0x160, "Size of UObjectLibrary is not correct.");
	auto constexpr UObjectLibrary_ObjectBaseClass_Offset = offsetof(UObjectLibrary, ObjectBaseClass);
	static_assert(UObjectLibrary_ObjectBaseClass_Offset == 0x30, "UObjectLibrary::ObjectBaseClass offset is not 30");
	auto constexpr UObjectLibrary_boolField38_Offset = offsetof(UObjectLibrary, boolField38);
	static_assert(UObjectLibrary_boolField38_Offset == 0x38, "UObjectLibrary::boolField38 offset is not 38");
	auto constexpr UObjectLibrary_Objects_Offset = offsetof(UObjectLibrary, Objects);
	static_assert(UObjectLibrary_Objects_Offset == 0x40, "UObjectLibrary::Objects offset is not 40");
	auto constexpr UObjectLibrary_WeakObjects_Offset = offsetof(UObjectLibrary, WeakObjects);
	static_assert(UObjectLibrary_WeakObjects_Offset == 0x50, "UObjectLibrary::WeakObjects offset is not 50");
	auto constexpr UObjectLibrary_boolField60_Offset = offsetof(UObjectLibrary, boolField60);
	static_assert(UObjectLibrary_boolField60_Offset == 0x60, "UObjectLibrary::boolField60 offset is not 60");
	auto constexpr UObjectLibrary_boolField61_Offset = offsetof(UObjectLibrary, boolField61);
	static_assert(UObjectLibrary_boolField61_Offset == 0x61, "UObjectLibrary::boolField61 offset is not 61");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
