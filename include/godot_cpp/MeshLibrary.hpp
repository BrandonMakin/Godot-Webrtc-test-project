#ifndef MESHLIBRARY_H
#define MESHLIBRARY_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Resource.hpp"


namespace godot {

class Shape;
class NavigationMesh;
class Mesh;


class GD_CPP_BINDING_API MeshLibrary : public Resource {
public:

	void _init();



	void create_item(const int id);
	void set_item_name(const int id, const String name);
	void set_item_mesh(const int id, const Mesh *mesh);
	void set_item_navmesh(const int id, const NavigationMesh *navmesh);
	void set_item_shape(const int id, const Shape *shape);
	String get_item_name(const int id) const;
	Mesh *get_item_mesh(const int id) const;
	NavigationMesh *get_item_navmesh(const int id) const;
	Shape *get_item_shape(const int id) const;
	void remove_item(const int id);
	void clear();
	PoolIntArray get_item_list() const;
	int get_last_unused_item_id() const;
};

}
#endif
