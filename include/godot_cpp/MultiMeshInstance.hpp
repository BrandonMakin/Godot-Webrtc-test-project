#ifndef MULTIMESHINSTANCE_H
#define MULTIMESHINSTANCE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "GeometryInstance.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API MultiMeshInstance : public GeometryInstance {
public:

	void _init();



	void set_multimesh(const Object *multimesh);
	Object *get_multimesh() const;
};

}
#endif
