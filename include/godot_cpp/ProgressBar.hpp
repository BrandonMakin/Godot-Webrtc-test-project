#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Range.hpp"


namespace godot {



class GD_CPP_BINDING_API ProgressBar : public Range {
public:

	void _init();



	void set_percent_visible(const bool visible);
	bool is_percent_visible() const;
};

}
#endif
