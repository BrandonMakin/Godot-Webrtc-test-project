#ifndef DLSCRIPT_H
#define DLSCRIPT_H

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


class GD_CPP_BINDING_API DLScript : public Script {
public:

	void _init();



	Object *get_library() const;
	void set_library(const Object *library);
	String get_script_name() const;
	void set_script_name(const String script_name);
};

}
#endif
