#ifndef VIEWPORTCONTAINER_H
#define VIEWPORTCONTAINER_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Container.hpp"


namespace godot {



class GD_CPP_BINDING_API ViewportContainer : public Container {
public:

	void _init();



	void set_stretch(const bool enable);
	bool is_stretch_enabled() const;
};

}
#endif
