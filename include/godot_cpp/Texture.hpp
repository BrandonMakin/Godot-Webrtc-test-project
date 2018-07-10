#ifndef TEXTURE_H
#define TEXTURE_H

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



class GD_CPP_BINDING_API Texture : public Resource {
public:

	void _init();

	const static int FLAGS_DEFAULT = 7;
	const static int FLAG_ANISOTROPIC_FILTER = 8;
	const static int FLAG_CONVERT_TO_LINEAR = 16;
	const static int FLAG_FILTER = 4;
	const static int FLAG_MIPMAPS = 1;
	const static int FLAG_MIRRORED_REPEAT = 32;
	const static int FLAG_REPEAT = 2;
	const static int FLAG_VIDEO_SURFACE = 4096;


	int get_width() const;
	int get_height() const;
	Vector2 get_size() const;
	bool has_alpha() const;
	void set_flags(const int flags);
	int get_flags() const;
	void draw(const RID canvas_item, const Vector2 pos, const Color modulate = Color(1,1,1,1), const bool transpose = false) const;
	void draw_rect(const RID canvas_item, const Rect2 rect, const bool tile, const Color modulate = Color(1,1,1,1), const bool transpose = false) const;
	void draw_rect_region(const RID canvas_item, const Rect2 rect, const Rect2 src_rect, const Color modulate = Color(1,1,1,1), const bool transpose = false) const;
};

}
#endif
