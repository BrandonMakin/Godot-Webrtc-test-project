#ifndef VISUALSCRIPTBASICTYPECONSTANT_H
#define VISUALSCRIPTBASICTYPECONSTANT_H

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



class GD_CPP_BINDING_API VisualScriptBasicTypeConstant : public VisualScriptNode {
public:

	void _init();



	void set_basic_type(const int name);
	int get_basic_type() const;
	void set_basic_type_constant(const String name);
	String get_basic_type_constant() const;
};

}
#endif
