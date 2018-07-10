#ifndef JOINT_H
#define JOINT_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Spatial.hpp"


namespace godot {



class GD_CPP_BINDING_API Joint : public Spatial {
public:

	void _init();



	void set_node_a(const NodePath node);
	NodePath get_node_a() const;
	void set_node_b(const NodePath node);
	NodePath get_node_b() const;
	void set_solver_priority(const int priority);
	int get_solver_priority() const;
	void set_exclude_nodes_from_collision(const bool enable);
	bool get_exclude_nodes_from_collision() const;
};

}
#endif
