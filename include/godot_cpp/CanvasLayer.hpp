#ifndef CANVASLAYER_H
#define CANVASLAYER_H

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

class Viewport;
class World2D;


class GD_CPP_BINDING_API CanvasLayer : public Node {
public:

	void _init();



	void set_layer(const int layer);
	int get_layer() const;
	void set_transform(const Transform2D transform);
	Transform2D get_transform() const;
	void set_offset(const Vector2 offset);
	Vector2 get_offset() const;
	void set_rotation(const float radians);
	float get_rotation() const;
	void set_rotationd(const float degrees);
	float get_rotationd() const;
	void _set_rotationd(const float degrees);
	float _get_rotationd() const;
	void set_scale(const Vector2 scale);
	Vector2 get_scale() const;
	void set_custom_viewport(const Viewport *viewport);
	Viewport *get_custom_viewport() const;
	World2D *get_world_2d() const;
};

}
#endif
