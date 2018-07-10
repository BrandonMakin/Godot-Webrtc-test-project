#ifndef COLLISIONPOLYGON_H
#define COLLISIONPOLYGON_H

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

class Object;


class GD_CPP_BINDING_API CollisionPolygon : public Spatial {
public:

	void _init();



	void _add_to_collision_object(const Object *arg0);
	void set_build_mode(const int build_mode);
	int get_build_mode() const;
	void set_depth(const float depth);
	float get_depth() const;
	void set_polygon(const PoolVector2Array polygon);
	PoolVector2Array get_polygon() const;
	void _set_shape_range(const Vector2 shape_range);
	Vector2 _get_shape_range() const;
	int get_collision_object_first_shape() const;
	int get_collision_object_last_shape() const;
};

}
#endif
