#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFontFaceInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UFontFaceInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(375); // id32("Class SlateCore.FontFaceInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFontFaceInterface = sizeof(UFontFaceInterface); // 48
    static_assert(sizeof(UFontFaceInterface) == 0x30, "Size of UFontFaceInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
