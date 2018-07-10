#ifndef NAVIGATIONMESH_H
#define NAVIGATIONMESH_H

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



class GD_CPP_BINDING_API NavigationMesh : public Resource {
public:

	void _init();



	void set_vertices(const PoolVector3Array vertices);
	PoolVector3Array get_vertices() const;
	void add_polygon(const PoolIntArray polygon);
	int get_polygon_count() const;
	PoolIntArray get_polygon(const int idx);
	void clear_polygons();
	void _set_polygons(const Array polygons);
	Array _get_polygons() const;
};

}
#endif
