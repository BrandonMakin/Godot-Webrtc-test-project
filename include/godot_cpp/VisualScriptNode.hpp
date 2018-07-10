#ifndef VISUALSCRIPTNODE_H
#define VISUALSCRIPTNODE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Resource.hpp"


namespace godot {

class VisualScript;


class GD_CPP_BINDING_API VisualScriptNode : public Resource {
public:

	void _init();



	VisualScript *get_visual_script() const;
	void set_default_input_value(const int port_idx, const Variant value);
	Variant get_default_input_value(const int port_idx) const;
	void _set_default_input_values(const Array values);
	Array _get_default_input_values() const;
};

}
#endif
