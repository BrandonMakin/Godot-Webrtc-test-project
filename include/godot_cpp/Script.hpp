#ifndef SCRIPT_H
#define SCRIPT_H

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

class Object;


class GD_CPP_BINDING_API Script : public Resource {
public:

	void _init();



	bool can_instance() const;
	bool instance_has(const Object *base_object) const;
	bool has_source_code() const;
	String get_source_code() const;
	void set_source_code(const String source);
	int reload(const bool keep_state = false);
};

}
#endif
