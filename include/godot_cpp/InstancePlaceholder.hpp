#ifndef INSTANCEPLACEHOLDER_H
#define INSTANCEPLACEHOLDER_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Node.hpp"


namespace godot {

class PackedScene;


class GD_CPP_BINDING_API InstancePlaceholder : public Node {
public:

	void _init();



	Dictionary get_stored_values(const bool with_order = false);
	void replace_by_instance(const PackedScene *custom_scene = nullptr);
	String get_instance_path() const;
};

}
#endif
