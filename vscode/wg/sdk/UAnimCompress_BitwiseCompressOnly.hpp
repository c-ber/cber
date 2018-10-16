#pragma once
#include "UAnimCompress.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimCompress_BitwiseCompressOnly // Size: 0x50
	: public UAnimCompress // Size: 0x50
{
private:
	typedef UAnimCompress_BitwiseCompressOnly t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(262); // id32("Class Engine.AnimCompress_BitwiseCompressOnly")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimCompress_BitwiseCompressOnly = sizeof(UAnimCompress_BitwiseCompressOnly); // 80
    static_assert(sizeof(UAnimCompress_BitwiseCompressOnly) == 0x50, "Size of UAnimCompress_BitwiseCompressOnly is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
