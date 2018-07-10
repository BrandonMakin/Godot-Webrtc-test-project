#ifndef BUTTON_H
#define BUTTON_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "BaseButton.hpp"


namespace godot {

class Texture;


class GD_CPP_BINDING_API Button : public BaseButton {
public:

	void _init();

	const static int ALIGN_CENTER = 1;
	const static int ALIGN_LEFT = 0;
	const static int ALIGN_RIGHT = 2;


	void set_text(const String text);
	String get_text() const;
	void set_button_icon(const Texture *texture);
	Texture *get_button_icon() const;
	void set_flat(const bool enabled);
	void set_clip_text(const bool enabled);
	bool get_clip_text() const;
	void set_text_align(const int align);
	int get_text_align() const;
	bool is_flat() const;
};

}
#endif
