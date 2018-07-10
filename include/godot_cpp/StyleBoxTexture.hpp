#ifndef STYLEBOXTEXTURE_H
#define STYLEBOXTEXTURE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "StyleBox.hpp"


namespace godot {

class Texture;


class GD_CPP_BINDING_API StyleBoxTexture : public StyleBox {
public:

	void _init();



	void set_texture(const Texture *texture);
	Texture *get_texture() const;
	void set_margin_size(const int margin, const float size);
	float get_margin_size(const int margin) const;
	void set_expand_margin_size(const int margin, const float size);
	float get_expand_margin_size(const int margin) const;
	void set_region_rect(const Rect2 region);
	Rect2 get_region_rect() const;
	void set_draw_center(const bool enable);
	bool get_draw_center() const;
	void set_modulate(const Color color);
	Color get_modulate() const;
};

}
#endif
