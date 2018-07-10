#ifndef NODE2D_H
#define NODE2D_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "CanvasItem.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API Node2D : public CanvasItem {
public:

	void _init();



	float _get_rotd() const;
	void _set_rotd(const float degrees);
	void set_position(const Vector2 pos);
	void set_rotation(const float radians);
	void set_rotation_in_degrees(const float degrees);
	void set_scale(const Vector2 scale);
	Vector2 get_position() const;
	float get_rotation() const;
	float get_rotation_in_degrees() const;
	Vector2 get_scale() const;
	void rotate(const float radians);
	void move_local_x(const float delta, const bool scaled = false);
	void move_local_y(const float delta, const bool scaled = false);
	void translate(const Vector2 offset);
	void global_translate(const Vector2 offset);
	void scale(const Vector2 ratio);
	void set_global_position(const Vector2 pos);
	Vector2 get_global_position() const;
	void set_global_rotation(const float radians);
	float get_global_rotation() const;
	void set_global_rotation_in_degrees(const float degrees);
	float get_global_rotation_in_degrees() const;
	void set_global_scale(const Vector2 scale);
	Vector2 get_global_scale() const;
	void set_transform(const Transform2D xform);
	void set_global_transform(const Transform2D xform);
	void look_at(const Vector2 point);
	float get_angle_to(const Vector2 point) const;
	void set_z(const int z);
	int get_z() const;
	void set_z_as_relative(const bool enable);
	bool is_z_relative() const;
	void edit_set_pivot(const Vector2 pivot);
	Transform2D get_relative_transform_to_parent(const Object *parent) const;
};

}
#endif
