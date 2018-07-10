#ifndef BITMAP_H
#define BITMAP_H

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



class GD_CPP_BINDING_API BitMap : public Resource {
public:

	void _init();



	void create(const Vector2 size);
	void create_from_image_alpha(const Image image);
	void set_bit(const Vector2 pos, const bool bit);
	bool get_bit(const Vector2 pos) const;
	void set_bit_rect(const Rect2 p_rect, const bool bit);
	int get_true_bit_count() const;
	Vector2 get_size() const;
	void _set_data(const Dictionary arg0);
	Dictionary _get_data() const;
};

}
#endif
