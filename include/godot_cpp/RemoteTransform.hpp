#ifndef REMOTETRANSFORM_H
#define REMOTETRANSFORM_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Spatial.hpp"


namespace godot {



class GD_CPP_BINDING_API RemoteTransform : public Spatial {
public:

	void _init();



	void set_remote_node(const NodePath path);
	NodePath get_remote_node() const;
};

}
#endif
