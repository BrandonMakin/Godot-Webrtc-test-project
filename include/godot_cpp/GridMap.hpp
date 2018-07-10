#ifndef GRIDMAP_H
#define GRIDMAP_H

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
class MeshLibrary;


class GD_CPP_BINDING_API GridMap : public Spatial {
public:

	void _init();

	const static int INVALID_CELL_ITEM = -1;


	void set_theme(const MeshLibrary *theme);
	MeshLibrary *get_theme() const;
	void set_cell_size(const float size);
	float get_cell_size() const;
	void set_octant_size(const int size);
	int get_octant_size() const;
	void set_cell_item(const int x, const int y, const int z, const int item, const int orientation = 0);
	int get_cell_item(const int x, const int y, const int z) const;
	int get_cell_item_orientation(const int x, const int y, const int z) const;
	void _update_dirty_map_callback();
	void resource_changed(const Object *resource);
	void set_center_x(const bool enable);
	bool get_center_x() const;
	void set_center_y(const bool enable);
	bool get_center_y() const;
	void set_center_z(const bool enable);
	bool get_center_z() const;
	void set_clip(const bool enabled, const bool clipabove = true, const int floor = 0, const int axis = 0);
	int create_area(const int id, const Rect3 area);
	Rect3 area_get_bounds(const int area) const;
	void area_set_exterior_portal(const int area, const bool enable);
	void area_set_name(const int area, const String name);
	String area_get_name(const int area) const;
	bool area_is_exterior_portal(const int area) const;
	void area_set_portal_disable_distance(const int area, const float distance);
	float area_get_portal_disable_distance(const int area) const;
	void area_set_portal_disable_color(const int area, const Color color);
	Color area_get_portal_disable_color(const int area) const;
	void erase_area(const int area);
	int get_unused_area_id() const;
	void clear();
	Array get_meshes();
};

}
#endif
