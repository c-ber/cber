#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpFilter // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UInterpFilter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(787); // id32("Class Engine.InterpFilter")
		return ptr;
	}
	FString Caption; /* Ofs: 0x30 Size: 0x10 - StrProperty Engine.InterpFilter.Caption */


	inline bool SetCaption(t_structHelper inst, FString value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpFilter = sizeof(UInterpFilter); // 64
    static_assert(sizeof(UInterpFilter) == 0x40, "Size of UInterpFilter is not correct.");
	auto constexpr UInterpFilter_Caption_Offset = offsetof(UInterpFilter, Caption);
	static_assert(UInterpFilter_Caption_Offset == 0x30, "UInterpFilter::Caption offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
