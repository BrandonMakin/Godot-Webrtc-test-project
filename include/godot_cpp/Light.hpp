#ifndef LIGHT_H
#define LIGHT_H

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



class GD_CPP_BINDING_API Light : public VisualInstance {
public:

	void _init();

	const static int PARAM_ATTENUATION = 3;
	const static int PARAM_CONTACT_SHADOW_SIZE = 6;
	const static int PARAM_ENERGY = 0;
	const static int PARAM_MAX = 14;
	const static int PARAM_RANGE = 2;
	const static int PARAM_SHADOW_BIAS = 12;
	const static int PARAM_SHADOW_BIAS_SPLIT_SCALE = 13;
	const static int PARAM_SHADOW_MAX_DISTANCE = 7;
	const static int PARAM_SHADOW_NORMAL_BIAS = 11;
	const static int PARAM_SHADOW_SPLIT_1_OFFSET = 8;
	const static int PARAM_SHADOW_SPLIT_2_OFFSET = 9;
	const static int PARAM_SHADOW_SPLIT_3_OFFSET = 10;
	const static int PARAM_SPECULAR = 1;
	const static int PARAM_SPOT_ANGLE = 4;
	const static int PARAM_SPOT_ATTENUATION = 5;


	void set_editor_only(const bool editor_only);
	bool is_editor_only() const;
	void set_param(const int param, const float value);
	float get_param(const int param) const;
	void set_shadow(const bool enabled);
	bool has_shadow() const;
	void set_negative(const bool enabled);
	bool is_negative() const;
	void set_cull_mask(const int cull_mask);
	int get_cull_mask() const;
	void set_color(const Color color);
	Color get_color() const;
	void set_shadow_color(const Color shadow_color);
	Color get_shadow_color() const;
};

}
#endif
