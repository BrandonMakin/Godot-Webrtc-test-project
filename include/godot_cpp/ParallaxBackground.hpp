#ifndef PARALLAXBACKGROUND_H
#define PARALLAXBACKGROUND_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "CanvasLayer.hpp"


namespace godot {



class GD_CPP_BINDING_API ParallaxBackground : public CanvasLayer {
public:

	void _init();



	void _camera_moved(const Transform2D arg0);
	void set_scroll_offset(const Vector2 ofs);
	Vector2 get_scroll_offset() const;
	void set_scroll_base_offset(const Vector2 ofs);
	Vector2 get_scroll_base_offset() const;
	void set_scroll_base_scale(const Vector2 scale);
	Vector2 get_scroll_base_scale() const;
	void set_limit_begin(const Vector2 ofs);
	Vector2 get_limit_begin() const;
	void set_limit_end(const Vector2 ofs);
	Vector2 get_limit_end() const;
	void set_ignore_camera_zoom(const bool ignore);
	bool is_ignore_camera_zoom();
};

}
#endif
