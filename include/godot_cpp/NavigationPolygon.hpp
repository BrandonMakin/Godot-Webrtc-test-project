#ifndef NAVIGATIONPOLYGON_H
#define NAVIGATIONPOLYGON_H

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



class GD_CPP_BINDING_API NavigationPolygon : public Resource {
public:

	void _init();



	void set_vertices(const PoolVector2Array vertices);
	PoolVector2Array get_vertices() const;
	void add_polygon(const PoolIntArray polygon);
	int get_polygon_count() const;
	PoolIntArray get_polygon(const int idx);
	void clear_polygons();
	void add_outline(const PoolVector2Array outline);
	void add_outline_at_index(const PoolVector2Array outline, const int index);
	int get_outline_count() const;
	void set_outline(const int idx, const PoolVector2Array outline);
	PoolVector2Array get_outline(const int idx) const;
	void remove_outline(const int idx);
	void clear_outlines();
	void make_polygons_from_outlines();
	void _set_polygons(const Array polygons);
	Array _get_polygons() const;
	void _set_outlines(const Array outlines);
	Array _get_outlines() const;
};

}
#endif
