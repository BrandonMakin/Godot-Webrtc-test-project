#ifndef COLLISIONOBJECT2D_H
#define COLLISIONOBJECT2D_H

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
class Shape;
class Shape2D;


class GD_CPP_BINDING_API CollisionObject2D : public Node2D {
public:

	void _init();



	void _input_event(const Object *viewport, const InputEvent event, const int shape_idx);
	void add_shape(const Shape2D *shape, const Transform2D transform = Transform2D());
	int get_shape_count() const;
	void set_shape(const int shape_idx, const Shape *shape);
	void set_shape_transform(const int shape_idx, const Transform2D transform);
	void set_shape_as_trigger(const int shape_idx, const bool enable);
	Shape2D *get_shape(const int shape_idx) const;
	Transform2D get_shape_transform(const int shape_idx) const;
	bool is_shape_set_as_trigger(const int shape_idx) const;
	void remove_shape(const int shape_idx);
	void clear_shapes();
	RID get_rid() const;
	void set_pickable(const bool enabled);
	bool is_pickable() const;
};

}
#endif
