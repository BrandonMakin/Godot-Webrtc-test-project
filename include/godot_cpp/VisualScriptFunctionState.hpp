#ifndef VISUALSCRIPTFUNCTIONSTATE_H
#define VISUALSCRIPTFUNCTIONSTATE_H

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

class Object;


class GD_CPP_BINDING_API VisualScriptFunctionState : public Reference {
public:

	void _init();



	void connect_to_signal(const Object *obj, const String signals, const Array args);
	Array resume(const Array args = Array());
	bool is_valid() const;
	void _signal_callback();
};

}
#endif
