#ifndef VISUALSCRIPTPRELOAD_H
#define VISUALSCRIPTPRELOAD_H

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

class Object;


class GD_CPP_BINDING_API VisualScriptPreload : public VisualScriptNode {
public:

	void _init();



	void set_preload(const Object *resource);
	Object *get_preload() const;
};

}
#endif
