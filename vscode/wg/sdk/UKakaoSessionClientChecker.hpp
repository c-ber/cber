#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UKakaoSessionClientChecker // Size: 0x58
	: public UObject // Size: 0x30
{
private:
	typedef UKakaoSessionClientChecker t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1921); // id32("Class TslGame.KakaoSessionClientChecker")
		return ptr;
	}
	uint8_t UnknownData30[0x28];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUKakaoSessionClientChecker = sizeof(UKakaoSessionClientChecker); // 88
    static_assert(sizeof(UKakaoSessionClientChecker) == 0x58, "Size of UKakaoSessionClientChecker is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
