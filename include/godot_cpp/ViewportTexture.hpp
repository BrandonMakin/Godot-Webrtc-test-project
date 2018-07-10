#ifndef VIEWPORTTEXTURE_H
#define VIEWPORTTEXTURE_H

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



class GD_CPP_BINDING_API ViewportTexture : public Texture {
public:

	void _init();



	void set_viewport_path_in_scene(const NodePath path);
	NodePath get_viewport_path_in_scene() const;
};

}
#endif
