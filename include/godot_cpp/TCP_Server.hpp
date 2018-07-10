#ifndef TCP_SERVER_H
#define TCP_SERVER_H

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


class GD_CPP_BINDING_API TCP_Server : public Reference {
public:

	void _init();



	int listen(const int port, const String bind_address = "*");
	bool is_connection_available() const;
	Object *take_connection();
	void stop();
};

}
#endif
