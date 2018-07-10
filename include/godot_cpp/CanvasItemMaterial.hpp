#ifndef CANVASITEMMATERIAL_H
#define CANVASITEMMATERIAL_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Material.hpp"


namespace godot {

class Shader;


class GD_CPP_BINDING_API CanvasItemMaterial : public Material {
public:

	void _init();



	void set_shader(const Shader *shader);
	Shader *get_shader() const;
	void set_shader_param(const String param, const Variant value);
	void get_shader_param(const String param) const;
};

}
#endif
