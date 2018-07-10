#ifndef OMNILIGHT_H
#define OMNILIGHT_H

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



class GD_CPP_BINDING_API OmniLight : public Light {
public:

	void _init();



	void set_shadow_mode(const int mode);
	int get_shadow_mode() const;
	void set_shadow_detail(const int detail);
	int get_shadow_detail() const;
};

}
#endif
