#ifndef VISUALSCRIPTRETURN_H
#define VISUALSCRIPTRETURN_H

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



class GD_CPP_BINDING_API VisualScriptReturn : public VisualScriptNode {
public:

	void _init();



	void set_return_type(const int type);
	int get_return_type() const;
	void set_enable_return_value(const bool enable);
	bool is_return_value_enabled() const;
};

}
#endif
