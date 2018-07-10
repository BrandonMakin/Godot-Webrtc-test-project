#ifndef ATLASTEXTURE_H
#define ATLASTEXTURE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Texture.hpp"


namespace godot {

class Texture;


class GD_CPP_BINDING_API AtlasTexture : public Texture {
public:

	void _init();



	void set_atlas(const Texture *atlas);
	Texture *get_atlas() const;
	void set_region(const Rect2 region);
	Rect2 get_region() const;
	void set_margin(const Rect2 margin);
	Rect2 get_margin() const;
};

}
#endif
