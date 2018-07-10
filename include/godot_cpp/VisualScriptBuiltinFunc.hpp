#ifndef VISUALSCRIPTBUILTINFUNC_H
#define VISUALSCRIPTBUILTINFUNC_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "VisualScriptNode.hpp"


namespace godot {



class GD_CPP_BINDING_API VisualScriptBuiltinFunc : public VisualScriptNode {
public:

	void _init();



	void set_func(const int which);
	int get_func();
};

}
#endif
