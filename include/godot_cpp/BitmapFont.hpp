#ifndef BITMAPFONT_H
#define BITMAPFONT_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Font.hpp"


namespace godot {

class Texture;
class Object;


class GD_CPP_BINDING_API BitmapFont : public Font {
public:

	void _init();



	int create_from_fnt(const String path);
	void set_height(const float px);
	void set_ascent(const float px);
	void add_kerning_pair(const int char_a, const int char_b, const int kerning);
	int get_kerning_pair(const int char_a, const int char_b) const;
	void add_texture(const Texture *texture);
	void add_char(const int character, const int texture, const Rect2 rect, const Vector2 align = Vector2(0, 0), const float advance = -1);
	int get_texture_count() const;
	Texture *get_texture(const int idx) const;
	Vector2 get_char_size(const int _char, const int next = 0) const;
	void set_distance_field_hint(const bool enable);
	void clear();
	void _set_chars(const PoolIntArray arg0);
	PoolIntArray _get_chars() const;
	void _set_kernings(const PoolIntArray arg0);
	PoolIntArray _get_kernings() const;
	void _set_textures(const Array arg0);
	Array _get_textures() const;
	void set_fallback(const Object *fallback);
	Object *get_fallback() const;
};

}
#endif
