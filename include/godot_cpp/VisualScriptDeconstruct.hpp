#ifndef VISUALSCRIPTDECONSTRUCT_H
#define VISUALSCRIPTDECONSTRUCT_H

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



class GD_CPP_BINDING_API VisualScriptDeconstruct : public VisualScriptNode {
public:

	void _init();



	void set_deconstruct_type(const int type);
	int get_deconstruct_type() const;
	void set_deconstruct_input_type(const int input_type);
	int get_deconstruct_input_type() const;
	void _set_elem_cache(const Array _cache);
	Array _get_elem_cache() const;
};

}
#endif
