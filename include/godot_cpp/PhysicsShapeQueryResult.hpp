#ifndef PHYSICSSHAPEQUERYRESULT_H
#define PHYSICSSHAPEQUERYRESULT_H

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


class GD_CPP_BINDING_API PhysicsShapeQueryResult : public Reference {
public:

	void _init();



	int get_result_count() const;
	RID get_result_rid(const int idx) const;
	int get_result_object_id(const int idx) const;
	Object *get_result_object(const int idx) const;
	int get_result_object_shape(const int idx) const;
};

}
#endif
