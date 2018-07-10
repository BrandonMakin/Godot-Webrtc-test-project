#ifndef TILESET_H
#define TILESET_H

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

class Texture;
class Shape2D;
class OccluderPolygon2D;
class NavigationPolygon;
class CanvasItemMaterial;


class GD_CPP_BINDING_API TileSet : public Resource {
public:

	void _init();



	void create_tile(const int id);
	void tile_set_name(const int id, const String name);
	String tile_get_name(const int id) const;
	void tile_set_texture(const int id, const Texture *texture);
	Texture *tile_get_texture(const int id) const;
	void tile_set_material(const int id, const CanvasItemMaterial *material);
	CanvasItemMaterial *tile_get_material(const int id) const;
	void tile_set_texture_offset(const int id, const Vector2 texture_offset);
	Vector2 tile_get_texture_offset(const int id) const;
	void tile_set_shape_offset(const int id, const Vector2 shape_offset);
	Vector2 tile_get_shape_offset(const int id) const;
	void tile_set_region(const int id, const Rect2 region);
	Rect2 tile_get_region(const int id) const;
	void tile_set_shape(const int id, const Shape2D *shape);
	Shape2D *tile_get_shape(const int id) const;
	void tile_set_shapes(const int id, const Array shapes);
	Array tile_get_shapes(const int id) const;
	void tile_set_navigation_polygon(const int id, const NavigationPolygon *navigation_polygon);
	NavigationPolygon *tile_get_navigation_polygon(const int id) const;
	void tile_set_navigation_polygon_offset(const int id, const Vector2 navigation_polygon_offset);
	Vector2 tile_get_navigation_polygon_offset(const int id) const;
	void tile_set_light_occluder(const int id, const OccluderPolygon2D *light_occluder);
	OccluderPolygon2D *tile_get_light_occluder(const int id) const;
	void tile_set_occluder_offset(const int id, const Vector2 occluder_offset);
	Vector2 tile_get_occluder_offset(const int id) const;
	void remove_tile(const int id);
	void clear();
	int get_last_unused_tile_id() const;
	int find_tile_by_name(const String name) const;
	Array get_tiles_ids() const;
};

}
#endif
