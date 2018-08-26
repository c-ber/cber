#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTextPropertyTestObject // Size: 0x78
	: public UObject // Size: 0x30
{
private:
	typedef UTextPropertyTestObject t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1238); // id32("Class Engine.TextPropertyTestObject")
		return ptr;
	}
	FText DefaultedText; /* Ofs: 0x30 Size: 0x18 - TextProperty Engine.TextPropertyTestObject.DefaultedText */
	FText UndefaultedText; /* Ofs: 0x48 Size: 0x18 - TextProperty Engine.TextPropertyTestObject.UndefaultedText */
	FText TransientText; /* Ofs: 0x60 Size: 0x18 - TextProperty Engine.TextPropertyTestObject.TransientText */


	inline bool SetDefaultedText(t_structHelper inst, FText value) { inst.WriteOffset(0x30, value); }
	inline bool SetUndefaultedText(t_structHelper inst, FText value) { inst.WriteOffset(0x48, value); }
	inline bool SetTransientText(t_structHelper inst, FText value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTextPropertyTestObject = sizeof(UTextPropertyTestObject); // 120
    static_assert(sizeof(UTextPropertyTestObject) == 0x78, "Size of UTextPropertyTestObject is not correct.");
	auto constexpr UTextPropertyTestObject_DefaultedText_Offset = offsetof(UTextPropertyTestObject, DefaultedText);
	static_assert(UTextPropertyTestObject_DefaultedText_Offset == 0x30, "UTextPropertyTestObject::DefaultedText offset is not 30");
	auto constexpr UTextPropertyTestObject_UndefaultedText_Offset = offsetof(UTextPropertyTestObject, UndefaultedText);
	static_assert(UTextPropertyTestObject_UndefaultedText_Offset == 0x48, "UTextPropertyTestObject::UndefaultedText offset is not 48");
	auto constexpr UTextPropertyTestObject_TransientText_Offset = offsetof(UTextPropertyTestObject, TransientText);
	static_assert(UTextPropertyTestObject_TransientText_Offset == 0x60, "UTextPropertyTestObject::TransientText offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
