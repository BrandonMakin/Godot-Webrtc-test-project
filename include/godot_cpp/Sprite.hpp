#ifndef SPRITE_H
#define SPRITE_H

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

class Texture;


class GD_CPP_BINDING_API Sprite : public Node2D {
public:

	void _init();



	void set_texture(const Texture *texture);
	Texture *get_texture() const;
	void set_centered(const bool centered);
	bool is_centered() const;
	void set_offset(const Vector2 offset);
	Vector2 get_offset() const;
	void set_flip_h(const bool flip_h);
	bool is_flipped_h() const;
	void set_flip_v(const bool flip_v);
	bool is_flipped_v() const;
	void set_region(const bool enabled);
	bool is_region() const;
	void set_region_rect(const Rect2 rect);
	Rect2 get_region_rect() const;
	void set_frame(const int frame);
	int get_frame() const;
	void set_vframes(const int vframes);
	int get_vframes() const;
	void set_hframes(const int hframes);
	int get_hframes() const;
};

}
#endif
