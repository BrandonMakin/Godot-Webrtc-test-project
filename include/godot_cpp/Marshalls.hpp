#ifndef MARSHALLS_H
#define MARSHALLS_H

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



class GD_CPP_BINDING_API Marshalls : public Reference {
private:
	static void ___singleton_init();
public:

	void _init();



	static String variant_to_base64(const Variant variant);
	static Variant base64_to_variant(const String base64_str);
	static String raw_to_base64(const PoolByteArray array);
	static PoolByteArray base64_to_raw(const String base64_str);
	static String utf8_to_base64(const String utf8_str);
	static String base64_to_utf8(const String base64_str);
};

}
#endif
