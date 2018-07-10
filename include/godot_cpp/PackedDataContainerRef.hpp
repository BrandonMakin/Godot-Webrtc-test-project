#ifndef PACKEDDATACONTAINERREF_H
#define PACKEDDATACONTAINERREF_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Reference.hpp"


namespace godot {



class GD_CPP_BINDING_API PackedDataContainerRef : public Reference {
public:

	void _init();



	int size() const;
	void _iter_init(const Array arg0);
	void _iter_get(const Variant arg0);
	void _iter_next(const Array arg0);
	bool _is_dictionary() const;
};

}
#endif
