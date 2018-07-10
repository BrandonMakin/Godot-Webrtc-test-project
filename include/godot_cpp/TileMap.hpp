#ifndef TILEMAP_H
#define TILEMAP_H

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

class TileSet;


class GD_CPP_BINDING_API TileMap : public Node2D {
public:

	void _init();

	const static int HALF_OFFSET_DISABLED = 2;
	const static int HALF_OFFSET_X = 0;
	const static int HALF_OFFSET_Y = 1;
	const static int INVALID_CELL = -1;
	const static int MODE_CUSTOM = 2;
	const static int MODE_ISOMETRIC = 1;
	const static int MODE_SQUARE = 0;
	const static int TILE_ORIGIN_BOTTOM_LEFT = 2;
	const static int TILE_ORIGIN_CENTER = 1;
	const static int TILE_ORIGIN_TOP_LEFT = 0;


	void set_tileset(const TileSet *tileset);
	TileSet *get_tileset() const;
	void set_mode(const int mode);
	int get_mode() const;
	void set_half_offset(const int half_offset);
	int get_half_offset() const;
	void set_custom_transform(const Transform2D custom_transform);
	Transform2D get_custom_transform() const;
	void set_cell_size(const Vector2 size);
	Vector2 get_cell_size() const;
	void _set_old_cell_size(const int size);
	int _get_old_cell_size() const;
	void set_quadrant_size(const int size);
	int get_quadrant_size() const;
	void set_tile_origin(const int origin);
	int get_tile_origin() const;
	void set_center_x(const bool enable);
	bool get_center_x() const;
	void set_center_y(const bool enable);
	bool get_center_y() const;
	void set_y_sort_mode(const bool enable);
	bool is_y_sort_mode_enabled() const;
	void set_collision_use_kinematic(const bool use_kinematic);
	bool get_collision_use_kinematic() const;
	void set_collision_layer(const int mask);
	int get_collision_layer() const;
	void set_collision_mask(const int mask);
	int get_collision_mask() const;
	void set_collision_friction(const float value);
	float get_collision_friction() const;
	void set_collision_bounce(const float value);
	float get_collision_bounce() const;
	void set_occluder_light_mask(const int mask);
	int get_occluder_light_mask() const;
	void set_cell(const int x, const int y, const int tile, const bool flip_x = false, const bool flip_y = false, const bool transpose = false);
	void set_cellv(const Vector2 pos, const int tile, const bool flip_x = false, const bool flip_y = false, const bool transpose = false);
	int get_cell(const int x, const int y) const;
	int get_cellv(const Vector2 pos) const;
	bool is_cell_x_flipped(const int x, const int y) const;
	bool is_cell_y_flipped(const int x, const int y) const;
	bool is_cell_transposed(const int x, const int y) const;
	void clear();
	Array get_used_cells() const;
	Rect2 get_used_rect();
	Vector2 map_to_world(const Vector2 mappos, const bool ignore_half_ofs = false) const;
	Vector2 world_to_map(const Vector2 worldpos) const;
	void _clear_quadrants();
	void _recreate_quadrants();
	void _update_dirty_quadrants();
	void _set_tile_data(const PoolIntArray arg0);
	PoolIntArray _get_tile_data() const;
};

}
#endif
