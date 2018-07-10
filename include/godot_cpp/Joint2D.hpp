#ifndef JOINT2D_H
#define JOINT2D_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Node2D.hpp"


namespace godot {



class GD_CPP_BINDING_API Joint2D : public Node2D {
public:

	void _init();



	void set_node_a(const NodePath node);
	NodePath get_node_a() const;
	void set_node_b(const NodePath node);
	NodePath get_node_b() const;
	void set_bias(const float bias);
	float get_bias() const;
	void set_exclude_nodes_from_collision(const bool enable);
	bool get_exclude_nodes_from_collision() const;
};

}
#endif
