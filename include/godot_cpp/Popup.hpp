#ifndef POPUP_H
#define POPUP_H

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



class GD_CPP_BINDING_API Popup : public Control {
public:

	void _init();

	const static int NOTIFICATION_POPUP_HIDE = 81;
	const static int NOTIFICATION_POST_POPUP = 80;


	void popup_centered(const Vector2 size = Vector2(0, 0));
	void popup_centered_ratio(const float ratio = 0.75);
	void popup_centered_minsize(const Vector2 minsize = Vector2(0, 0));
	void popup(const Rect2 bounds = Rect2(0, 0, 0, 0));
	void set_exclusive(const bool enable);
	bool is_exclusive() const;
};

}
#endif
