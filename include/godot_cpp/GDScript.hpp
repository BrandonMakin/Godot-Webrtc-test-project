#ifndef GDSCRIPT_H
#define GDSCRIPT_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Script.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API GDScript : public Script {
public:

	void _init();



	Object *new_();
	PoolByteArray get_as_byte_code() const;
};

}
#endif
