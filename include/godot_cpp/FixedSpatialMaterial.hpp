#ifndef FIXEDSPATIALMATERIAL_H
#define FIXEDSPATIALMATERIAL_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Material.hpp"


namespace godot {

class Texture;
class Object;


class GD_CPP_BINDING_API FixedSpatialMaterial : public Material {
public:

	void _init();

	const static int BLEND_MODE_ADD = 1;
	const static int BLEND_MODE_MIX = 0;
	const static int BLEND_MODE_MUL = 3;
	const static int BLEND_MODE_SUB = 2;
	const static int CULL_BACK = 0;
	const static int CULL_DISABLED = 2;
	const static int CULL_FRONT = 1;
	const static int DEPTH_DRAW_ALPHA_OPAQUE_PREPASS = 3;
	const static int DEPTH_DRAW_ALWAYS = 1;
	const static int DEPTH_DRAW_DISABLED = 2;
	const static int DEPTH_DRAW_OPAQUE_ONLY = 0;
	const static int DETAIL_UV_1 = 0;
	const static int DETAIL_UV_2 = 1;
	const static int DIFFUSE_BURLEY = 3;
	const static int DIFFUSE_LAMBERT = 0;
	const static int DIFFUSE_LAMBERT_WRAP = 1;
	const static int DIFFUSE_OREN_NAYAR = 2;
	const static int FEATURE_AMBIENT_OCCLUSION = 6;
	const static int FEATURE_ANISOTROPY = 5;
	const static int FEATURE_CLEARCOAT = 4;
	const static int FEATURE_DETAIL = 10;
	const static int FEATURE_EMISSION = 1;
	const static int FEATURE_HEIGHT_MAPPING = 7;
	const static int FEATURE_MAX = 11;
	const static int FEATURE_NORMAL_MAPPING = 2;
	const static int FEATURE_REFRACTION = 9;
	const static int FEATURE_RIM = 3;
	const static int FEATURE_SUBSURACE_SCATTERING = 8;
	const static int FEATURE_TRANSPARENT = 0;
	const static int FLAG_ALBEDO_FROM_VERTEX_COLOR = 2;
	const static int FLAG_MAX = 5;
	const static int FLAG_ONTOP = 1;
	const static int FLAG_SRGB_VERTEX_COLOR = 3;
	const static int FLAG_UNSHADED = 0;
	const static int FLAG_USE_POINT_SIZE = 4;
	const static int SPECULAR_MODE_METALLIC = 0;
	const static int SPECULAR_MODE_SPECULAR = 1;
	const static int TEXTURE_ALBEDO = 0;
	const static int TEXTURE_AMBIENT_OCCLUSION = 7;
	const static int TEXTURE_CLEARCOAT = 5;
	const static int TEXTURE_DETAIL_ALBEDO = 13;
	const static int TEXTURE_DETAIL_MASK = 12;
	const static int TEXTURE_DETAIL_NORMAL = 14;
	const static int TEXTURE_EMISSION = 2;
	const static int TEXTURE_FLOWMAP = 6;
	const static int TEXTURE_HEIGHT = 8;
	const static int TEXTURE_MAX = 15;
	const static int TEXTURE_NORMAL = 3;
	const static int TEXTURE_REFRACTION = 10;
	const static int TEXTURE_REFRACTION_ROUGHNESS = 11;
	const static int TEXTURE_RIM = 4;
	const static int TEXTURE_SPECULAR = 1;
	const static int TEXTURE_SUBSURFACE_SCATTERING = 9;


	void set_albedo(const Color albedo);
	Color get_albedo() const;
	void set_specular_mode(const int specular_mode);
	int get_specular_mode() const;
	void set_specular(const Color specular);
	Color get_specular() const;
	void set_metalness(const float metalness);
	float get_metalness() const;
	void set_roughness(const float roughness);
	float get_roughness() const;
	void set_emission(const Color emission);
	Color get_emission() const;
	void set_emission_energy(const float emission_energy);
	float get_emission_energy() const;
	void set_normal_scale(const float normal_scale);
	float get_normal_scale() const;
	void set_rim(const float rim);
	float get_rim() const;
	void set_rim_tint(const float rim_tint);
	float get_rim_tint() const;
	void set_clearcoat(const float clearcoat);
	float get_clearcoat() const;
	void set_clearcoat_gloss(const float clearcoat_gloss);
	float get_clearcoat_gloss() const;
	void set_anisotropy(const float anisotropy);
	float get_anisotropy() const;
	void set_height_scale(const float height_scale);
	float get_height_scale() const;
	void set_subsurface_scattering_strength(const float strength);
	float get_subsurface_scattering_strength() const;
	void set_refraction(const float refraction);
	float get_refraction() const;
	void set_refraction_roughness(const float refraction_roughness);
	float get_refraction_roughness() const;
	void set_line_width(const float line_width);
	float get_line_width() const;
	void set_point_size(const float point_size);
	float get_point_size() const;
	void set_detail_uv(const int detail_uv);
	int get_detail_uv() const;
	void set_blend_mode(const int blend_mode);
	int get_blend_mode() const;
	void set_depth_draw_mode(const int depth_draw_mode);
	int get_depth_draw_mode() const;
	void set_cull_mode(const int cull_mode);
	int get_cull_mode() const;
	void set_diffuse_mode(const int diffuse_mode);
	int get_diffuse_mode() const;
	void set_flag(const int flag, const bool enable);
	bool get_flag(const int arg0) const;
	void set_feature(const int feature, const bool enable);
	bool get_feature(const int feature) const;
	void set_texture(const Texture *param, const Object *texture);
	Texture *get_texture(const Texture *param) const;
	void set_detail_blend_mode(const int detail_blend_mode);
	int get_detail_blend_mode() const;
	void set_uv1_scale(const Vector2 scale);
	Vector2 get_uv1_scale() const;
	void set_uv1_offset(const Vector2 offset);
	Vector2 get_uv1_offset() const;
	void set_uv2_scale(const Vector2 scale);
	Vector2 get_uv2_scale() const;
	void set_uv2_offset(const Vector2 offset);
	Vector2 get_uv2_offset() const;
};

}
#endif
