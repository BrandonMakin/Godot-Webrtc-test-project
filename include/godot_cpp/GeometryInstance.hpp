#ifndef GEOMETRYINSTANCE_H
#define GEOMETRYINSTANCE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "VisualInstance.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API GeometryInstance : public VisualInstance {
public:

	void _init();

	const static int FLAG_BILLBOARD = 0;
	const static int FLAG_BILLBOARD_FIX_Y = 1;
	const static int FLAG_CAST_SHADOW = 2;
	const static int FLAG_DEPH_SCALE = 3;
	const static int FLAG_MAX = 6;
	const static int FLAG_VISIBLE_IN_ALL_ROOMS = 4;
	const static int SHADOW_CASTING_SETTING_DOUBLE_SIDED = 2;
	const static int SHADOW_CASTING_SETTING_OFF = 0;
	const static int SHADOW_CASTING_SETTING_ON = 1;
	const static int SHADOW_CASTING_SETTING_SHADOWS_ONLY = 3;


	void set_material_override(const Object *material);
	Object *get_material_override() const;
	void set_flag(const int flag, const bool value);
	bool get_flag(const int flag) const;
	void set_cast_shadows_setting(const int shadow_casting_setting);
	int get_cast_shadows_setting() const;
	void set_lod_max_hysteresis(const float mode);
	float get_lod_max_hysteresis() const;
	void set_lod_max_distance(const float mode);
	float get_lod_max_distance() const;
	void set_lod_min_hysteresis(const float mode);
	float get_lod_min_hysteresis() const;
	void set_lod_min_distance(const float mode);
	float get_lod_min_distance() const;
	void set_extra_cull_margin(const float margin);
	float get_extra_cull_margin() const;
};

}
#endif
