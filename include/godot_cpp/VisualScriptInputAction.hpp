#ifndef VISUALSCRIPTINPUTACTION_H
#define VISUALSCRIPTINPUTACTION_H

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



class GD_CPP_BINDING_API VisualScriptInputAction : public VisualScriptNode {
public:

	void _init();



	void set_action_name(const String name);
	String get_action_name() const;
	void set_action_mode(const int mode);
	int get_action_mode() const;
};

}
#endif
