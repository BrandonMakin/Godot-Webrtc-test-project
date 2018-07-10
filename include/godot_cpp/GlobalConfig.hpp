#ifndef GLOBALCONFIG_H
#define GLOBALCONFIG_H

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

class Object;


class GD_CPP_BINDING_API GlobalConfig : public Object {
private:
	static void ___singleton_init();
public:

	void _init();



	static bool has(const String name);
	static void set_order(const String name, const int pos);
	static int get_order(const String name);
	static void set_initial_value(const String name, const Variant value);
	static void add_property_info(const Dictionary hint);
	static void clear(const String name);
	static String localize_path(const String path);
	static String globalize_path(const String path);
	static int save();
	static bool has_singleton(const String name);
	static Object *get_singleton(const String name);
	static bool load_resource_pack(const String pack);
	static bool property_can_revert(const String name);
	static void property_get_revert(const String name);
	static int save_custom(const String file);
};

}
#endif
