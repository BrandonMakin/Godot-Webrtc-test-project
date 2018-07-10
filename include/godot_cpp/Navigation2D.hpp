#ifndef NAVIGATION2D_H
#define NAVIGATION2D_H

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
class NavigationPolygon;


class GD_CPP_BINDING_API Navigation2D : public Node2D {
public:

	void _init();



	int navpoly_create(const NavigationPolygon *mesh, const Transform2D xform, const Object *owner = nullptr);
	void navpoly_set_transform(const int id, const Transform2D xform);
	void navpoly_remove(const int id);
	PoolVector2Array get_simple_path(const Vector2 start, const Vector2 end, const bool optimize = true);
	Vector2 get_closest_point(const Vector2 to_point);
	Object *get_closest_point_owner(const Vector2 to_point);
};

}
#endif
