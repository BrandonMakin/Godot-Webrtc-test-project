#ifndef VISIBILITYNOTIFIER_H
#define VISIBILITYNOTIFIER_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Spatial.hpp"


namespace godot {



class GD_CPP_BINDING_API VisibilityNotifier : public Spatial {
public:

	void _init();



	void set_aabb(const Rect3 rect);
	Rect3 get_aabb() const;
	bool is_on_screen() const;
};

}
#endif
