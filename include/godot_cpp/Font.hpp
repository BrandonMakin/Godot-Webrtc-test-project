#ifndef FONT_H
#define FONT_H

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



class GD_CPP_BINDING_API Font : public Resource {
public:

	void _init();



	void draw(const RID canvas_item, const Vector2 pos, const String string, const Color modulate = Color(1,1,1,1), const int clip_w = -1) const;
	float get_ascent() const;
	float get_descent() const;
	float get_height() const;
	bool is_distance_field_hint() const;
	Vector2 get_string_size(const String string) const;
	float draw_char(const RID canvas_item, const Vector2 pos, const int _char, const int next = -1, const Color modulate = Color(1,1,1,1)) const;
	void update_changes();
};

}
#endif
