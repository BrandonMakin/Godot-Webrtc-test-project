#ifndef VISUALSCRIPTYIELD_H
#define VISUALSCRIPTYIELD_H

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



class GD_CPP_BINDING_API VisualScriptYield : public VisualScriptNode {
public:

	void _init();

	const static int YIELD_FIXED_FRAME = 2;
	const static int YIELD_FRAME = 1;
	const static int YIELD_WAIT = 3;


	void set_yield_mode(const int mode);
	int get_yield_mode();
	void set_wait_time(const float sec);
	float get_wait_time();
};

}
#endif
