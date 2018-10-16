#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslReplayMapDataInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UTslReplayMapDataInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1947); // id32("Class TslGame.TslReplayMapDataInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslReplayMapDataInterface = sizeof(UTslReplayMapDataInterface); // 48
    static_assert(sizeof(UTslReplayMapDataInterface) == 0x30, "Size of UTslReplayMapDataInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
