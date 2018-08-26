#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDataAsset // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef UDataAsset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(49); // id32("Class Engine.DataAsset")
		return ptr;
	}
	ExternalPtr<struct UClass> NativeClass; /* Ofs: 0x30 Size: 0x8 - ClassProperty Engine.DataAsset.NativeClass */


	inline bool SetNativeClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDataAsset = sizeof(UDataAsset); // 56
    static_assert(sizeof(UDataAsset) == 0x38, "Size of UDataAsset is not correct.");
	auto constexpr UDataAsset_NativeClass_Offset = offsetof(UDataAsset, NativeClass);
	static_assert(UDataAsset_NativeClass_Offset == 0x30, "UDataAsset::NativeClass offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
