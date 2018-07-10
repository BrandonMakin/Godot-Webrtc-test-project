#ifndef WORLD2D_H
#define WORLD2D_H

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

class Physics2DDirectSpaceState;


class GD_CPP_BINDING_API World2D : public Resource {
public:

	void _init();



	RID get_canvas();
	RID get_space();
	RID get_sound_space();
	Physics2DDirectSpaceState *get_direct_space_state();
};

}
#endif
