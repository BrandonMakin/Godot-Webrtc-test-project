#ifndef VISUALSCRIPTCOMMENT_H
#define VISUALSCRIPTCOMMENT_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "VisualScriptNode.hpp"


namespace godot {



class GD_CPP_BINDING_API VisualScriptComment : public VisualScriptNode {
public:

	void _init();



	void set_title(const String title);
	String get_title() const;
	void set_description(const String description);
	String get_description() const;
	void set_size(const Vector2 size);
	Vector2 get_size() const;
};

}
#endif
