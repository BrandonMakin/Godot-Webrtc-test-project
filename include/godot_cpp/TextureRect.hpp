#ifndef TEXTURERECT_H
#define TEXTURERECT_H

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

class Object;


class GD_CPP_BINDING_API TextureRect : public Control {
public:

	void _init();

	const static int STRETCH_KEEP = 3;
	const static int STRETCH_KEEP_ASPECT = 5;
	const static int STRETCH_KEEP_ASPECT_CENTERED = 6;
	const static int STRETCH_KEEP_ASPECT_COVERED = 7;
	const static int STRETCH_KEEP_CENTERED = 4;
	const static int STRETCH_SCALE = 1;
	const static int STRETCH_SCALE_ON_EXPAND = 0;
	const static int STRETCH_TILE = 2;


	void set_texture(const Object *texture);
	Object *get_texture() const;
	void set_expand(const bool enable);
	bool has_expand() const;
	void set_stretch_mode(const int stretch_mode);
	int get_stretch_mode() const;
};

}
#endif
