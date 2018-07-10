#ifndef RESOURCELOADER_H
#define RESOURCELOADER_H

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

class ResourceInteractiveLoader;
class Resource;


class GD_CPP_BINDING_API ResourceLoader : public Object {
private:
	static void ___singleton_init();
public:

	void _init();



	static ResourceInteractiveLoader *load_interactive(const String path, const String type_hint);
	static Resource *load(const String path, const String type_hint, const bool p_no_cache = false);
	static PoolStringArray get_recognized_extensions_for_type(const String type);
	static void set_abort_on_missing_resources(const bool abort);
	static PoolStringArray get_dependencies(const String path);
	static bool has(const String path);
};

}
#endif
