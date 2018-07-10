#ifndef CLASSDB_H
#define CLASSDB_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Object.hpp"


namespace godot {



class GD_CPP_BINDING_API ClassDB : public Object {
private:
	static void ___singleton_init();
public:

	void _init();



	static PoolStringArray get_class_list();
	static PoolStringArray get_inheriters_from_class(const String _class);
	static String get_parent_class(const String _class);
	static bool class_exists(const String _class);
	static bool is_parent_class(const String _class, const String inherits);
	static bool can_instance(const String _class);
	static Variant instance(const String _class);
	static bool class_has_signal(const String _class, const String signal);
	static Dictionary class_get_signal(const String _class, const String signal);
	static Array class_get_signal_list(const String _class, const bool no_inheritance = false);
	static Array class_get_property_list(const String _class, const bool no_inheritance = false);
	static bool class_has_method(const String _class, const String method, const bool no_inheritance = false);
	static Array class_get_method_list(const String _class, const bool no_inheritance = false);
	static PoolStringArray class_get_integer_constant_list(const String _class, const bool no_inheritance = false);
	static bool class_has_integer_constant(const String _class, const String name);
	static int class_get_integer_constant(const String _class, const String name);
	static String class_get_category(const String _class);
	static bool is_class_enabled(const String _class);
};

}
#endif
