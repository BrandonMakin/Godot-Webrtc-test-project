#ifndef REFERENCE_H
#define REFERENCE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Object.hpp"


namespace godot {



class GD_CPP_BINDING_API Reference : public Object {
public:

	void _init();



	bool init_ref();
	void reference();
	bool unreference();
};

}
#endif
