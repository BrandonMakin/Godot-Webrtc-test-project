#ifndef RESOURCEPRELOADER_H
#define RESOURCEPRELOADER_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Node.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API ResourcePreloader : public Node {
public:

	void _init();



	void _set_resources(const Array arg0);
	Array _get_resources() const;
	void add_resource(const String name, const Object *resource);
	void remove_resource(const String name);
	void rename_resource(const String name, const String newname);
	bool has_resource(const String name) const;
	Object *get_resource(const String name) const;
	PoolStringArray get_resource_list() const;
};

}
#endif
