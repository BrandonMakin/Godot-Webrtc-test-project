#ifndef SPRITE3D_H
#define SPRITE3D_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "SpriteBase3D.hpp"


namespace godot {

class Texture;


class GD_CPP_BINDING_API Sprite3D : public SpriteBase3D {
public:

	void _init();



	void set_texture(const Texture *texture);
	Texture *get_texture() const;
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
