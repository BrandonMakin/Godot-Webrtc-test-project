#ifndef LABEL_H
#define LABEL_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Control.hpp"


namespace godot {



class GD_CPP_BINDING_API Label : public Control {
public:

	void _init();

	const static int ALIGN_CENTER = 1;
	const static int ALIGN_FILL = 3;
	const static int ALIGN_LEFT = 0;
	const static int ALIGN_RIGHT = 2;
	const static int VALIGN_BOTTOM = 2;
	const static int VALIGN_CENTER = 1;
	const static int VALIGN_FILL = 3;
	const static int VALIGN_TOP = 0;


	void set_align(const int align);
	int get_align() const;
	void set_valign(const int valign);
	int get_valign() const;
	void set_text(const String text);
	String get_text() const;
	void set_autowrap(const bool enable);
	bool has_autowrap() const;
	void set_clip_text(const bool enable);
	bool is_clipping_text() const;
	void set_uppercase(const bool enable);
	bool is_uppercase() const;
	int get_line_height() const;
	int get_line_count() const;
	int get_visible_line_count() const;
	int get_total_character_count() const;
	void set_visible_characters(const int amount);
	int get_visible_characters() const;
	void set_percent_visible(const float percent_visible);
	float get_percent_visible() const;
	void set_lines_skipped(const int lines_skipped);
	int get_lines_skipped() const;
	void set_max_lines_visible(const int lines_visible);
	int get_max_lines_visible() const;
};

}
#endif
