#ifndef GDFUNCTIONSTATE_H
#define GDFUNCTIONSTATE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Reference.hpp"


namespace godot {



class GD_CPP_BINDING_API GDFunctionState : public Reference {
public:

	void _init();



	Variant resume(const Variant arg = Variant());
	bool is_valid() const;
	void _signal_callback();
};

}
#endif
