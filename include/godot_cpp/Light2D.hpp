#ifndef LIGHT2D_H
#define LIGHT2D_H

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


class GD_CPP_BINDING_API Light2D : public Node2D {
public:

	void _init();

	const static int MODE_ADD = 0;
	const static int MODE_MASK = 3;
	const static int MODE_MIX = 2;
	const static int MODE_SUB = 1;


	void set_enabled(const bool enabled);
	bool is_enabled() const;
	void set_editor_only(const bool editor_only);
	bool is_editor_only() const;
	void set_texture(const Object *texture);
	Object *get_texture() const;
	void set_texture_offset(const Vector2 texture_offset);
	Vector2 get_texture_offset() const;
	void set_color(const Color color);
	Color get_color() const;
	void set_height(const float height);
	float get_height() const;
	void set_energy(const float energy);
	float get_energy() const;
	void set_texture_scale(const float texture_scale);
	float get_texture_scale() const;
	void set_z_range_min(const int z);
	int get_z_range_min() const;
	void set_z_range_max(const int z);
	int get_z_range_max() const;
	void set_layer_range_min(const int layer);
	int get_layer_range_min() const;
	void set_layer_range_max(const int layer);
	int get_layer_range_max() const;
	void set_item_cull_mask(const int item_cull_mask);
	int get_item_cull_mask() const;
	void set_item_shadow_cull_mask(const int item_shadow_cull_mask);
	int get_item_shadow_cull_mask() const;
	void set_mode(const int mode);
	int get_mode() const;
	void set_shadow_enabled(const bool enabled);
	bool is_shadow_enabled() const;
	void set_shadow_buffer_size(const int size);
	int get_shadow_buffer_size() const;
	void set_shadow_gradient_length(const float multiplier);
	float get_shadow_gradient_length() const;
	void set_shadow_filter(const int filter);
	int get_shadow_filter() const;
	void set_shadow_color(const Color shadow_color);
	Color get_shadow_color() const;
};

}
#endif
