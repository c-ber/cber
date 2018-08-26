#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMediaSource // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef UMediaSource t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(351); // id32("Class MediaAssets.MediaSource")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMediaSource = sizeof(UMediaSource); // 56
    static_assert(sizeof(UMediaSource) == 0x38, "Size of UMediaSource is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
