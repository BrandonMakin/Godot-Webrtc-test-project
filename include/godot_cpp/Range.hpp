#ifndef RANGE_H
#define RANGE_H

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


class GD_CPP_BINDING_API Range : public Control {
public:

	void _init();



	float get_value() const;
	float get_min() const;
	float get_max() const;
	float get_step() const;
	float get_page() const;
	float get_as_ratio() const;
	void set_value(const float value);
	void set_min(const float minimum);
	void set_max(const float maximum);
	void set_step(const float step);
	void set_page(const float pagesize);
	void set_as_ratio(const float value);
	void set_use_rounded_values(const bool enabled);
	bool is_using_rounded_values() const;
	void set_exp_ratio(const bool enabled);
	bool is_ratio_exp() const;
	void share(const Object *with);
	void unshare();
};

}
#endif
