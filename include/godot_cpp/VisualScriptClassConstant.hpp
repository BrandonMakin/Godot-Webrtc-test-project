#ifndef VISUALSCRIPTCLASSCONSTANT_H
#define VISUALSCRIPTCLASSCONSTANT_H

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



class GD_CPP_BINDING_API VisualScriptClassConstant : public VisualScriptNode {
public:

	void _init();



	void set_class_constant(const String name);
	String get_class_constant();
	void set_base_type(const String name);
	String get_base_type();
};

}
#endif
