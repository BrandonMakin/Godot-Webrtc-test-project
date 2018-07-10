#ifndef RESOURCE_H
#define RESOURCE_H

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

class Object;
class Node;


class GD_CPP_BINDING_API Resource : public Reference {
public:

	void _init();



	void _setup_local_to_scene() const;
	void set_path(const String path);
	void take_over_path(const String path);
	String get_path() const;
	void set_name(const String name);
	String get_name() const;
	RID get_rid() const;
	void set_local_to_scene(const bool enable);
	bool is_local_to_scene() const;
	Node *get_local_scene() const;
	void setup_local_to_scene();
	Object *duplicate(const bool subresources = false);
};

}
#endif
