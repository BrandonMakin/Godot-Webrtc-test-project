#ifndef VISUALSCRIPTCONSTANT_H
#define VISUALSCRIPTCONSTANT_H

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



class GD_CPP_BINDING_API VisualScriptConstant : public VisualScriptNode {
public:

	void _init();



	void set_constant_type(const int type);
	int get_constant_type() const;
	void set_constant_value(const Variant value);
	void get_constant_value() const;
};

}
#endif
