#ifndef COLLISIONOBJECT_H
#define COLLISIONOBJECT_H

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

class Shape;
class Object;


class GD_CPP_BINDING_API CollisionObject : public Spatial {
public:

	void _init();



	void _input_event(const Object *camera, const InputEvent event, const Vector3 click_pos, const Vector3 click_normal, const int shape_idx) const;
	void add_shape(const Shape *shape, const Transform transform = Transform());
	int get_shape_count() const;
	void set_shape(const int shape_idx, const Shape *shape);
	void set_shape_transform(const int shape_idx, const Transform transform);
	void set_shape_as_trigger(const int shape_idx, const bool enable);
	bool is_shape_set_as_trigger(const int shape_idx) const;
	Shape *get_shape(const int shape_idx) const;
	Transform get_shape_transform(const int shape_idx) const;
	void remove_shape(const int shape_idx);
	void clear_shapes();
	void set_ray_pickable(const bool ray_pickable);
	bool is_ray_pickable() const;
	void set_capture_input_on_drag(const bool enable);
	bool get_capture_input_on_drag() const;
	RID get_rid() const;
};

}
#endif
