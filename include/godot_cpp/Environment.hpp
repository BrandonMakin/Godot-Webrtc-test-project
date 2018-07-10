#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Resource.hpp"


namespace godot {

class Object;
class CubeMap;


class GD_CPP_BINDING_API Environment : public Resource {
public:

	void _init();

	const static int BG_CANVAS = 3;
	const static int BG_CLEAR_COLOR = 0;
	const static int BG_COLOR = 1;
	const static int BG_KEEP = 4;
	const static int BG_MAX = 5;
	const static int BG_SKYBOX = 2;
	const static int DOF_BLUR_QUALITY_HIGH = 2;
	const static int DOF_BLUR_QUALITY_LOW = 0;
	const static int DOF_BLUR_QUALITY_MEDIUM = 1;
	const static int GLOW_BLEND_MODE_ADDITIVE = 0;
	const static int GLOW_BLEND_MODE_REPLACE = 3;
	const static int GLOW_BLEND_MODE_SCREEN = 1;
	const static int GLOW_BLEND_MODE_SOFTLIGHT = 2;
	const static int TONE_MAPPER_ACES = 3;
	const static int TONE_MAPPER_FILMIC = 2;
	const static int TONE_MAPPER_LINEAR = 0;
	const static int TONE_MAPPER_REINHARDT = 1;


	void set_background(const int mode);
	void set_skybox(const CubeMap *skybox);
	void set_skybox_scale(const float scale);
	void set_bg_color(const Color color);
	void set_bg_energy(const float energy);
	void set_canvas_max_layer(const int layer);
	void set_ambient_light_color(const Color color);
	void set_ambient_light_energy(const float energy);
	void set_ambient_light_skybox_contribution(const float energy);
	int get_background() const;
	CubeMap *get_skybox() const;
	float get_skybox_scale() const;
	Color get_bg_color() const;
	float get_bg_energy() const;
	int get_canvas_max_layer() const;
	Color get_ambient_light_color() const;
	float get_ambient_light_energy() const;
	float get_ambient_light_skybox_contribution() const;
	void set_ssr_enabled(const bool enabled);
	bool is_ssr_enabled() const;
	void set_ssr_max_steps(const int max_steps);
	int get_ssr_max_steps() const;
	void set_ssr_accel(const float accel);
	float get_ssr_accel() const;
	void set_ssr_fade(const float fade);
	float get_ssr_fade() const;
	void set_ssr_depth_tolerance(const float depth_tolerance);
	float get_ssr_depth_tolerance() const;
	void set_ssr_smooth(const bool smooth);
	bool is_ssr_smooth() const;
	void set_ssr_rough(const bool rough);
	bool is_ssr_rough() const;
	void set_ssao_enabled(const bool enabled);
	bool is_ssao_enabled() const;
	void set_ssao_radius(const float radius);
	float get_ssao_radius() const;
	void set_ssao_intensity(const float intensity);
	float get_ssao_intensity() const;
	void set_ssao_radius2(const float radius);
	float get_ssao_radius2() const;
	void set_ssao_intensity2(const float intensity);
	float get_ssao_intensity2() const;
	void set_ssao_bias(const float bias);
	float get_ssao_bias() const;
	void set_ssao_direct_light_affect(const float amount);
	float get_ssao_direct_light_affect() const;
	void set_ssao_color(const Color color);
	Color get_ssao_color() const;
	void set_ssao_blur(const bool enabled);
	bool is_ssao_blur_enabled() const;
	void set_dof_blur_far_enabled(const bool enabled);
	bool is_dof_blur_far_enabled() const;
	void set_dof_blur_far_distance(const float intensity);
	float get_dof_blur_far_distance() const;
	void set_dof_blur_far_transition(const float intensity);
	float get_dof_blur_far_transition() const;
	void set_dof_blur_far_amount(const float intensity);
	float get_dof_blur_far_amount() const;
	void set_dof_blur_far_quality(const int intensity);
	int get_dof_blur_far_quality() const;
	void set_dof_blur_near_enabled(const bool enabled);
	bool is_dof_blur_near_enabled() const;
	void set_dof_blur_near_distance(const float intensity);
	float get_dof_blur_near_distance() const;
	void set_dof_blur_near_transition(const float intensity);
	float get_dof_blur_near_transition() const;
	void set_dof_blur_near_amount(const float intensity);
	float get_dof_blur_near_amount() const;
	void set_dof_blur_near_quality(const int level);
	int get_dof_blur_near_quality() const;
	void set_glow_enabled(const bool enabled);
	bool is_glow_enabled() const;
	void set_glow_level(const int idx, const bool enabled);
	bool is_glow_level_enabled(const int idx) const;
	void set_glow_intensity(const float intensity);
	float get_glow_intensity() const;
	void set_glow_strength(const float strength);
	float get_glow_strength() const;
	void set_glow_bloom(const float amount);
	float get_glow_bloom() const;
	void set_glow_blend_mode(const int mode);
	int get_glow_blend_mode() const;
	void set_glow_hdr_bleed_treshold(const float treshold);
	float get_glow_hdr_bleed_treshold() const;
	void set_glow_hdr_bleed_scale(const float scale);
	float get_glow_hdr_bleed_scale() const;
	void set_glow_bicubic_upscale(const bool enabled);
	bool is_glow_bicubic_upscale_enabled() const;
	void set_tonemapper(const int mode);
	int get_tonemapper() const;
	void set_tonemap_exposure(const float exposure);
	float get_tonemap_exposure() const;
	void set_tonemap_white(const float white);
	float get_tonemap_white() const;
	void set_tonemap_auto_exposure(const bool auto_exposure);
	bool get_tonemap_auto_exposure() const;
	void set_tonemap_auto_exposure_max(const float exposure_max);
	float get_tonemap_auto_exposure_max() const;
	void set_tonemap_auto_exposure_min(const float exposure_min);
	float get_tonemap_auto_exposure_min() const;
	void set_tonemap_auto_exposure_speed(const float exposure_speed);
	float get_tonemap_auto_exposure_speed() const;
	void set_tonemap_auto_exposure_grey(const float exposure_grey);
	float get_tonemap_auto_exposure_grey() const;
	void set_adjustment_enable(const bool enabled);
	bool is_adjustment_enabled() const;
	void set_adjustment_brightness(const float brightness);
	float get_adjustment_brightness() const;
	void set_adjustment_contrast(const float contrast);
	float get_adjustment_contrast() const;
	void set_adjustment_saturation(const float saturation);
	float get_adjustment_saturation() const;
	void set_adjustment_color_correction(const Object *color_correction);
	Object *get_adjustment_color_correction() const;
};

}
#endif
