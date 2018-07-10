#ifndef LARGETEXTURE_H
#define LARGETEXTURE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Texture.hpp"


namespace godot {

class Texture;


class GD_CPP_BINDING_API LargeTexture : public Texture {
public:

	void _init();



	int add_piece(const Vector2 ofs, const Texture *texture);
	void set_piece_offset(const int idx, const Vector2 ofs);
	void set_piece_texture(const int idx, const Texture *texture);
	void set_size(const Vector2 size);
	void clear();
	int get_piece_count() const;
	Vector2 get_piece_offset(const int idx) const;
	Texture *get_piece_texture(const int idx) const;
	void _set_data(const Array data);
	Array _get_data() const;
};

}
#endif
