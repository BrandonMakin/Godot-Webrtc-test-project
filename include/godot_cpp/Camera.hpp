#ifndef CAMERA_H
#define CAMERA_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Spatial.hpp"


namespace godot {

class Environment;


class GD_CPP_BINDING_API Camera : public Spatial {
public:

	void _init();

	const static int KEEP_HEIGHT = 1;
	const static int KEEP_WIDTH = 0;
	const static int PROJECTION_ORTHOGONAL = 1;
	const static int PROJECTION_PERSPECTIVE = 0;


	Vector3 project_ray_normal(const Vector2 screen_point) const;
	Vector3 project_local_ray_normal(const Vector2 screen_point) const;
	Vector3 project_ray_origin(const Vector2 screen_point) const;
	Vector2 unproject_position(const Vector3 world_point) const;
	bool is_position_behind(const Vector3 world_point) const;
	Vector3 project_position(const Vector2 screen_point) const;
	void set_perspective(const float fov, const float z_near, const float z_far);
	void set_orthogonal(const float size, const float z_near, const float z_far);
	void make_current();
	void clear_current();
	bool is_current() const;
	Transform get_camera_transform() const;
	float get_fov() const;
	float get_size() const;
	float get_zfar() const;
	float get_znear() const;
	int get_projection() const;
	void set_h_offset(const float ofs);
	float get_h_offset() const;
	void set_v_offset(const float ofs);
	float get_v_offset() const;
	void set_cull_mask(const int mask);
	int get_cull_mask() const;
	void set_environment(const Environment *env);
	Environment *get_environment() const;
	void set_keep_aspect_mode(const int mode);
	int get_keep_aspect_mode() const;
};

}
#endif
