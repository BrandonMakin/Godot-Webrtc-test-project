#ifndef LINE2D_H
#define LINE2D_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Node2D.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API Line2D : public Node2D {
public:

	void _init();

	const static int LINE_CAP_BOX = 1;
	const static int LINE_CAP_NONE = 0;
	const static int LINE_CAP_ROUND = 2;
	const static int LINE_JOINT_BEVEL = 1;
	const static int LINE_JOINT_ROUND = 2;
	const static int LINE_JOINT_SHARP = 0;
	const static int LINE_TEXTURE_NONE = 0;
	const static int LINE_TEXTURE_TILE = 1;


	void set_points(const PoolVector2Array points);
	PoolVector2Array get_points() const;
	void set_point_pos(const int i, const Vector2 pos);
	Vector2 get_point_pos(const int i) const;
	int get_point_count() const;
	void add_point(const Vector2 pos);
	void remove_point(const int i);
	void set_width(const float width);
	float get_width() const;
	void set_default_color(const Color color);
	Color get_default_color() const;
	void set_gradient(const Object *color);
	Object *get_gradient() const;
	void set_texture(const Object *texture);
	Object *get_texture() const;
	void set_texture_mode(const int mode);
	int get_texture_mode() const;
	void set_joint_mode(const int mode);
	int get_joint_mode() const;
	void set_begin_cap_mode(const int mode);
	int get_begin_cap_mode() const;
	void set_end_cap_mode(const int mode);
	int get_end_cap_mode() const;
	void set_sharp_limit(const float limit);
	float get_sharp_limit() const;
	void set_round_precision(const int precision);
	int get_round_precision() const;
	void _gradient_changed();
};

}
#endif
