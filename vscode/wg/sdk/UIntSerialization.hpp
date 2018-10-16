#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UIntSerialization // Size: 0x58
	: public UObject // Size: 0x30
{
private:
	typedef UIntSerialization t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(845); // id32("Class Engine.IntSerialization")
		return ptr;
	}
	uint16_t UnsignedInt16Variable; /* Ofs: 0x30 Size: 0x2 - UInt16Property Engine.IntSerialization.UnsignedInt16Variable */
	uint8_t UnknownData32[0x2];
	uint32_t UnsignedInt32Variable; /* Ofs: 0x34 Size: 0x4 - UInt32Property Engine.IntSerialization.UnsignedInt32Variable */
	uint64_t UnsignedInt64Variable; /* Ofs: 0x38 Size: 0x8 - UInt64Property Engine.IntSerialization.UnsignedInt64Variable */
	int8_t SignedInt8Variable; /* Ofs: 0x40 Size: 0x1 - Int8Property Engine.IntSerialization.SignedInt8Variable */
	uint8_t UnknownData41[0x1];
	int16_t SignedInt16Variable; /* Ofs: 0x42 Size: 0x2 - Int16Property Engine.IntSerialization.SignedInt16Variable */
	uint8_t UnknownData44[0x4];
	int64_t SignedInt64Variable; /* Ofs: 0x48 Size: 0x8 - Int64Property Engine.IntSerialization.SignedInt64Variable */
	uint8_t UnsignedInt8Variable; /* Ofs: 0x50 Size: 0x1 - ByteProperty Engine.IntSerialization.UnsignedInt8Variable */
	uint8_t UnknownData51[0x3];
	int32_t SignedInt32Variable; /* Ofs: 0x54 Size: 0x4 - IntProperty Engine.IntSerialization.SignedInt32Variable */


	inline bool SetUnsignedInt16Variable(t_structHelper inst, uint16_t value) { inst.WriteOffset(0x30, value); }
	inline bool SetUnsignedInt32Variable(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x34, value); }
	inline bool SetUnsignedInt64Variable(t_structHelper inst, uint64_t value) { inst.WriteOffset(0x38, value); }
	inline bool SetSignedInt8Variable(t_structHelper inst, int8_t value) { inst.WriteOffset(0x40, value); }
	inline bool SetSignedInt16Variable(t_structHelper inst, int16_t value) { inst.WriteOffset(0x42, value); }
	inline bool SetSignedInt64Variable(t_structHelper inst, int64_t value) { inst.WriteOffset(0x48, value); }
	inline bool SetUnsignedInt8Variable(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x50, value); }
	inline bool SetSignedInt32Variable(t_structHelper inst, int32_t value) { inst.WriteOffset(0x54, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUIntSerialization = sizeof(UIntSerialization); // 88
    static_assert(sizeof(UIntSerialization) == 0x58, "Size of UIntSerialization is not correct.");
	auto constexpr UIntSerialization_UnsignedInt16Variable_Offset = offsetof(UIntSerialization, UnsignedInt16Variable);
	static_assert(UIntSerialization_UnsignedInt16Variable_Offset == 0x30, "UIntSerialization::UnsignedInt16Variable offset is not 30");
	auto constexpr UIntSerialization_UnsignedInt32Variable_Offset = offsetof(UIntSerialization, UnsignedInt32Variable);
	static_assert(UIntSerialization_UnsignedInt32Variable_Offset == 0x34, "UIntSerialization::UnsignedInt32Variable offset is not 34");
	auto constexpr UIntSerialization_UnsignedInt64Variable_Offset = offsetof(UIntSerialization, UnsignedInt64Variable);
	static_assert(UIntSerialization_UnsignedInt64Variable_Offset == 0x38, "UIntSerialization::UnsignedInt64Variable offset is not 38");
	auto constexpr UIntSerialization_SignedInt8Variable_Offset = offsetof(UIntSerialization, SignedInt8Variable);
	static_assert(UIntSerialization_SignedInt8Variable_Offset == 0x40, "UIntSerialization::SignedInt8Variable offset is not 40");
	auto constexpr UIntSerialization_SignedInt16Variable_Offset = offsetof(UIntSerialization, SignedInt16Variable);
	static_assert(UIntSerialization_SignedInt16Variable_Offset == 0x42, "UIntSerialization::SignedInt16Variable offset is not 42");
	auto constexpr UIntSerialization_SignedInt64Variable_Offset = offsetof(UIntSerialization, SignedInt64Variable);
	static_assert(UIntSerialization_SignedInt64Variable_Offset == 0x48, "UIntSerialization::SignedInt64Variable offset is not 48");
	auto constexpr UIntSerialization_UnsignedInt8Variable_Offset = offsetof(UIntSerialization, UnsignedInt8Variable);
	static_assert(UIntSerialization_UnsignedInt8Variable_Offset == 0x50, "UIntSerialization::UnsignedInt8Variable offset is not 50");
	auto constexpr UIntSerialization_SignedInt32Variable_Offset = offsetof(UIntSerialization, SignedInt32Variable);
	static_assert(UIntSerialization_SignedInt32Variable_Offset == 0x54, "UIntSerialization::SignedInt32Variable offset is not 54");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
