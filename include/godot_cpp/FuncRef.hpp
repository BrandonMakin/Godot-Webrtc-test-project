#ifndef FUNCREF_H
#define FUNCREF_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Reference.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API FuncRef : public Reference {
public:

	void _init();



	Variant call_func();
	void set_instance(const Object *instance);
	void set_function(const String name);
};

}
#endif
