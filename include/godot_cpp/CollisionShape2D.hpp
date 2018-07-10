#ifndef COLLISIONSHAPE2D_H
#define COLLISIONSHAPE2D_H

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

class Object;


class GD_CPP_BINDING_API CollisionShape2D : public Node2D {
public:

	void _init();



	void set_shape(const Object *shape);
	Object *get_shape() const;
	void _shape_changed();
	void _add_to_collision_object(const Object *arg0);
	void set_trigger(const bool enable);
	bool is_trigger() const;
	void _set_update_shape_index(const int index);
	int _get_update_shape_index() const;
	int get_collision_object_shape_index() const;
};

}
#endif
