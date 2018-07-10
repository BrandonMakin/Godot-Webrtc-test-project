#ifndef GRIDCONTAINER_H
#define GRIDCONTAINER_H

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



class GD_CPP_BINDING_API GridContainer : public Container {
public:

	void _init();



	void set_columns(const int columns);
	int get_columns() const;
};

}
#endif
