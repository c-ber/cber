#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInst // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UInterpTrackInst t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(822); // id32("Class Engine.InterpTrackInst")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInst = sizeof(UInterpTrackInst); // 48
    static_assert(sizeof(UInterpTrackInst) == 0x30, "Size of UInterpTrackInst is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
