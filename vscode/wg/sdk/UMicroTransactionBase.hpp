#pragma once
#include "UPlatformInterfaceBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMicroTransactionBase // Size: 0x70
	: public UPlatformInterfaceBase // Size: 0x40
{
private:
	typedef UMicroTransactionBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1181); // id32("Class Engine.MicroTransactionBase")
		return ptr;
	}
	TArray<struct FPurchaseInfo> AvailableProducts; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.MicroTransactionBase.AvailableProducts */
	FString LastError; /* Ofs: 0x50 Size: 0x10 - StrProperty Engine.MicroTransactionBase.LastError */
	FString LastErrorSolution; /* Ofs: 0x60 Size: 0x10 - StrProperty Engine.MicroTransactionBase.LastErrorSolution */


	inline bool SetAvailableProducts(t_structHelper inst, TArray<struct FPurchaseInfo> value) { inst.WriteOffset(0x40, value); }
	inline bool SetLastError(t_structHelper inst, FString value) { inst.WriteOffset(0x50, value); }
	inline bool SetLastErrorSolution(t_structHelper inst, FString value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMicroTransactionBase = sizeof(UMicroTransactionBase); // 112
    static_assert(sizeof(UMicroTransactionBase) == 0x70, "Size of UMicroTransactionBase is not correct.");
	auto constexpr UMicroTransactionBase_AvailableProducts_Offset = offsetof(UMicroTransactionBase, AvailableProducts);
	static_assert(UMicroTransactionBase_AvailableProducts_Offset == 0x40, "UMicroTransactionBase::AvailableProducts offset is not 40");
	auto constexpr UMicroTransactionBase_LastError_Offset = offsetof(UMicroTransactionBase, LastError);
	static_assert(UMicroTransactionBase_LastError_Offset == 0x50, "UMicroTransactionBase::LastError offset is not 50");
	auto constexpr UMicroTransactionBase_LastErrorSolution_Offset = offsetof(UMicroTransactionBase, LastErrorSolution);
	static_assert(UMicroTransactionBase_LastErrorSolution_Offset == 0x60, "UMicroTransactionBase::LastErrorSolution offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
