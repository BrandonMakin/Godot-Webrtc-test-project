#ifndef PHYSICS2DSERVERSW_H
#define PHYSICS2DSERVERSW_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Physics2DServer.hpp"


namespace godot {



class GD_CPP_BINDING_API Physics2DServerSW : public Physics2DServer {
public:

	void _init();



};

}
#endif
