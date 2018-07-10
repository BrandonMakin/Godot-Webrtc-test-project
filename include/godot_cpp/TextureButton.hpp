#ifndef TEXTUREBUTTON_H
#define TEXTUREBUTTON_H

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

class BitMap;
class Texture;


class GD_CPP_BINDING_API TextureButton : public BaseButton {
public:

	void _init();

	const static int STRETCH_KEEP = 2;
	const static int STRETCH_KEEP_ASPECT = 4;
	const static int STRETCH_KEEP_ASPECT_CENTERED = 5;
	const static int STRETCH_KEEP_ASPECT_COVERED = 6;
	const static int STRETCH_KEEP_CENTERED = 3;
	const static int STRETCH_SCALE = 0;
	const static int STRETCH_TILE = 1;


	void set_normal_texture(const Texture *texture);
	void set_pressed_texture(const Texture *texture);
	void set_hover_texture(const Texture *texture);
	void set_disabled_texture(const Texture *texture);
	void set_focused_texture(const Texture *texture);
	void set_click_mask(const BitMap *mask);
	void set_expand(const bool p_expand);
	void set_stretch_mode(const int p_mode);
	Texture *get_normal_texture() const;
	Texture *get_pressed_texture() const;
	Texture *get_hover_texture() const;
	Texture *get_disabled_texture() const;
	Texture *get_focused_texture() const;
	BitMap *get_click_mask() const;
	bool get_expand() const;
	int get_stretch_mode() const;
};

}
#endif
