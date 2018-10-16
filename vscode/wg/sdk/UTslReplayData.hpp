#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslReplayData // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UTslReplayData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1491); // id32("Class TslGame.TslReplayData")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslReplayData = sizeof(UTslReplayData); // 48
    static_assert(sizeof(UTslReplayData) == 0x30, "Size of UTslReplayData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
