#ifndef THREAD_H
#define THREAD_H

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


class GD_CPP_BINDING_API Thread : public Reference {
public:

	void _init();

	const static int PRIORITY_HIGH = 2;
	const static int PRIORITY_LOW = 0;
	const static int PRIORITY_NORMAL = 1;


	Error start(const Object *instance, const String method, const Variant userdata = Variant(), const int priority = 1);
	String get_id() const;
	bool is_active() const;
	Variant wait_to_finish();
};

}
#endif
