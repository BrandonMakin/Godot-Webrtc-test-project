#ifndef PARTICLES2D_H
#define PARTICLES2D_H

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

class Texture;
class ColorRamp;
class Object;


class GD_CPP_BINDING_API Particles2D : public Node2D {
public:

	void _init();

	const static int MAX_COLOR_PHASES = 4;
	const static int PARAM_ANIM_INITIAL_POS = 15;
	const static int PARAM_ANIM_SPEED_SCALE = 14;
	const static int PARAM_DAMPING = 9;
	const static int PARAM_DIRECTION = 0;
	const static int PARAM_FINAL_SIZE = 12;
	const static int PARAM_GRAVITY_DIRECTION = 5;
	const static int PARAM_GRAVITY_STRENGTH = 6;
	const static int PARAM_HUE_VARIATION = 13;
	const static int PARAM_INITIAL_ANGLE = 10;
	const static int PARAM_INITIAL_SIZE = 11;
	const static int PARAM_LINEAR_VELOCITY = 2;
	const static int PARAM_MAX = 16;
	const static int PARAM_ORBIT_VELOCITY = 4;
	const static int PARAM_RADIAL_ACCEL = 7;
	const static int PARAM_SPIN_VELOCITY = 3;
	const static int PARAM_SPREAD = 1;
	const static int PARAM_TANGENTIAL_ACCEL = 8;


	void set_emitting(const bool active);
	bool is_emitting() const;
	void set_process_mode(const int mode);
	int get_process_mode() const;
	void set_amount(const int amount);
	int get_amount() const;
	void set_lifetime(const float lifetime);
	float get_lifetime() const;
	void set_time_scale(const float time_scale);
	float get_time_scale() const;
	void set_pre_process_time(const float time);
	float get_pre_process_time() const;
	void set_emit_timeout(const float value);
	float get_emit_timeout() const;
	void set_param(const int param, const float value);
	float get_param(const int param) const;
	void set_randomness(const int param, const float value);
	float get_randomness(const int param) const;
	Texture *set_texture(const Object *texture);
	Texture *get_texture() const;
	void set_color(const Color color);
	Color get_color() const;
	ColorRamp *set_color_ramp(const Object *color_ramp);
	ColorRamp *get_color_ramp() const;
	void set_emissor_offset(const Vector2 offset);
	Vector2 get_emissor_offset() const;
	void set_flip_h(const bool enable);
	bool is_flipped_h() const;
	void set_flip_v(const bool enable);
	bool is_flipped_v() const;
	void set_h_frames(const int enable);
	int get_h_frames() const;
	void set_v_frames(const int enable);
	int get_v_frames() const;
	void set_emission_half_extents(const Vector2 extents);
	Vector2 get_emission_half_extents() const;
	void set_color_phases(const int phases);
	int get_color_phases() const;
	void set_color_phase_color(const int phase, const Color color);
	Color get_color_phase_color(const int phase) const;
	void set_color_phase_pos(const int phase, const float pos);
	float get_color_phase_pos(const int phase) const;
	void pre_process(const float time);
	void reset();
	void set_use_local_space(const bool enable);
	bool is_using_local_space() const;
	void set_initial_velocity(const Vector2 velocity);
	Vector2 get_initial_velocity() const;
	void set_explosiveness(const float amount);
	float get_explosiveness() const;
	void set_emission_points(const PoolVector2Array points);
	PoolVector2Array get_emission_points() const;
};

}
#endif
