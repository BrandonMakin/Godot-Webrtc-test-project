#ifndef EDITORSELECTION_H
#define EDITORSELECTION_H

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

class Node;
class Object;


class GD_CPP_BINDING_API EditorSelection : public Object {
public:

	void _init();



	void _node_removed(const Object *arg0);
	void clear();
	void add_node(const Node *node);
	void remove_node(const Node *node);
	Array get_selected_nodes();
	Array get_transformable_selected_nodes();
};

}
#endif
