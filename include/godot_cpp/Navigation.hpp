#ifndef NAVIGATION_H
#define NAVIGATION_H

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
class NavigationMesh;


class GD_CPP_BINDING_API Navigation : public Spatial {
public:

	void _init();



	int navmesh_create(const NavigationMesh *mesh, const Transform xform, const Object *owner = nullptr);
	void navmesh_set_transform(const int id, const Transform xform);
	void navmesh_remove(const int id);
	PoolVector3Array get_simple_path(const Vector3 start, const Vector3 end, const bool optimize = true);
	Vector3 get_closest_point_to_segment(const Vector3 start, const Vector3 end, const bool use_collision = false);
	Vector3 get_closest_point(const Vector3 to_point);
	Vector3 get_closest_point_normal(const Vector3 to_point);
	Object *get_closest_point_owner(const Vector3 to_point);
	void set_up_vector(const Vector3 up);
	Vector3 get_up_vector() const;
};

}
#endif
