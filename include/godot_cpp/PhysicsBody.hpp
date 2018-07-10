#ifndef PHYSICSBODY_H
#define PHYSICSBODY_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "CollisionObject.hpp"


namespace godot {

class PhysicsBody;


class GD_CPP_BINDING_API PhysicsBody : public CollisionObject {
public:

	void _init();



	void set_collision_layer(const int layer);
	int get_collision_layer() const;
	void set_collision_mask(const int mask);
	int get_collision_mask() const;
	void set_collision_mask_bit(const int bit, const bool value);
	bool get_collision_mask_bit(const int bit) const;
	void set_collision_layer_bit(const int bit, const bool value);
	bool get_collision_layer_bit(const int bit) const;
	void _set_layers(const int mask);
	int _get_layers() const;
	void add_collision_exception_with(const PhysicsBody *body);
	void remove_collision_exception_with(const PhysicsBody *body);
};

}
#endif
