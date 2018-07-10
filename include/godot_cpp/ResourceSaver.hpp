#ifndef RESOURCESAVER_H
#define RESOURCESAVER_H

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

class Resource;
class Object;


class GD_CPP_BINDING_API ResourceSaver : public Object {
private:
	static void ___singleton_init();
public:

	void _init();

	const static int FLAG_BUNDLE_RESOURCES = 2;
	const static int FLAG_CHANGE_PATH = 4;
	const static int FLAG_COMPRESS = 32;
	const static int FLAG_OMIT_EDITOR_PROPERTIES = 8;
	const static int FLAG_RELATIVE_PATHS = 1;
	const static int FLAG_SAVE_BIG_ENDIAN = 16;


	static int save(const String path, const Resource *resource, const int flags = 0);
	static PoolStringArray get_recognized_extensions(const Object *type);
};

}
#endif
