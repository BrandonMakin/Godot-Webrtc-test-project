#ifndef DIRECTIONALLIGHT_H
#define DIRECTIONALLIGHT_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Light.hpp"


namespace godot {



class GD_CPP_BINDING_API DirectionalLight : public Light {
public:

	void _init();

	const static int SHADOW_ORTHOGONAL = 0;
	const static int SHADOW_PARALLEL_2_SPLITS = 1;
	const static int SHADOW_PARALLEL_4_SPLITS = 2;


	void set_shadow_mode(const int mode);
	int get_shadow_mode() const;
	void set_blend_splits(const bool enabled);
	bool is_blend_splits_enabled() const;
};

}
#endif
