#ifndef SHADER_H
#define SHADER_H

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


class GD_CPP_BINDING_API Shader : public Resource {
public:

	void _init();

	const static int MODE_CANVAS_ITEM = 1;
	const static int MODE_PARTICLES = 2;
	const static int MODE_SPATIAL = 0;


	int get_mode() const;
	void set_code(const String code);
	String get_code() const;
	void set_default_texture_param(const String param, const Texture *texture);
	Texture *get_default_texture_param(const String param) const;
	bool has_param(const String name) const;
};

}
#endif
