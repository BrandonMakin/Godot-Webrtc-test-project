#ifndef THEME_H
#define THEME_H

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

class Texture;
class Object;
class StyleBox;
class Font;


class GD_CPP_BINDING_API Theme : public Resource {
public:

	void _init();



	void set_icon(const String name, const String type, const Texture *texture);
	Texture *get_icon(const String name, const String type) const;
	bool has_icon(const String name, const String type) const;
	void clear_icon(const String name, const String type);
	PoolStringArray get_icon_list(const String type) const;
	void set_stylebox(const String name, const String type, const StyleBox *texture);
	StyleBox *get_stylebox(const String name, const String type) const;
	bool has_stylebox(const String name, const String type) const;
	void clear_stylebox(const String name, const String type);
	PoolStringArray get_stylebox_list(const String type) const;
	PoolStringArray get_stylebox_types() const;
	void set_font(const String name, const String type, const Font *font);
	Font *get_font(const String name, const String type) const;
	bool has_font(const String name, const String type) const;
	void clear_font(const String name, const String type);
	PoolStringArray get_font_list(const String type) const;
	void set_color(const String name, const String type, const Color color);
	Color get_color(const String name, const String type) const;
	bool has_color(const String name, const String type) const;
	void clear_color(const String name, const String type);
	PoolStringArray get_color_list(const String type) const;
	void set_constant(const String name, const String type, const int constant);
	int get_constant(const String name, const String type) const;
	bool has_constant(const String name, const String type) const;
	void clear_constant(const String name, const String type);
	PoolStringArray get_constant_list(const String type) const;
	void set_default_font(const Object *font);
	Object *get_default_font() const;
	PoolStringArray get_type_list(const String type) const;
	void _emit_theme_changed();
	void copy_default_theme();
};

}
#endif
