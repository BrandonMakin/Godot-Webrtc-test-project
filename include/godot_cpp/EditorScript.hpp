#ifndef EDITORSCRIPT_H
#define EDITORSCRIPT_H

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


class GD_CPP_BINDING_API EditorScript : public Reference {
public:

	void _init();



	void _run() const;
	void add_root_node(const Object *node);
	Object *get_scene();
};

}
#endif
