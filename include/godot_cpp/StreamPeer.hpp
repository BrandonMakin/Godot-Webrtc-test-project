#ifndef STREAMPEER_H
#define STREAMPEER_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Reference.hpp"


namespace godot {



class GD_CPP_BINDING_API StreamPeer : public Reference {
public:

	void _init();



	int put_data(const PoolByteArray data);
	Array put_partial_data(const PoolByteArray data);
	Array get_data(const int bytes);
	Array get_partial_data(const int bytes);
	int get_available_bytes() const;
	void set_big_endian(const bool enable);
	bool is_big_endian_enabled() const;
	void put_8(const int val);
	void put_u8(const int val);
	void put_16(const int val);
	void put_u16(const int val);
	void put_32(const int val);
	void put_u32(const int val);
	void put_64(const int val);
	void put_u64(const int val);
	void put_float(const float val);
	void put_double(const float val);
	void put_utf8_string(const String val);
	void put_var(const Variant val);
	int get_8();
	int get_u8();
	int get_16();
	int get_u16();
	int get_32();
	int get_u32();
	int get_64();
	int get_u64();
	float get_float();
	float get_double();
	String get_string(const int bytes);
	String get_utf8_string(const int bytes);
	Variant get_var();
};

}
#endif
