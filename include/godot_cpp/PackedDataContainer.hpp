#ifndef PACKEDDATACONTAINER_H
#define PACKEDDATACONTAINER_H

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



class GD_CPP_BINDING_API PackedDataContainer : public Resource {
public:

	void _init();



	void _set_data(const PoolByteArray arg0);
	PoolByteArray _get_data() const;
	void _iter_init(const Array arg0);
	void _iter_get(const Variant arg0);
	void _iter_next(const Array arg0);
	Error pack(const Variant value);
	int size() const;
};

}
#endif
