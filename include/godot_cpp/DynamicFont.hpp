#ifndef DYNAMICFONT_H
#define DYNAMICFONT_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Font.hpp"


namespace godot {

class DynamicFontData;


class GD_CPP_BINDING_API DynamicFont : public Font {
public:

	void _init();

	const static int SPACING_BOTTOM = 1;
	const static int SPACING_CHAR = 2;
	const static int SPACING_SPACE = 3;
	const static int SPACING_TOP = 0;


	void set_font_data(const DynamicFontData *data);
	DynamicFontData *get_font_data() const;
	void set_size(const int data);
	int get_size() const;
	void set_use_mipmaps(const bool enable);
	bool get_use_mipmaps() const;
	void set_use_filter(const bool enable);
	bool get_use_filter() const;
	void set_spacing(const int type, const int value);
	int get_spacing(const int type) const;
	void add_fallback(const DynamicFontData *data);
	void set_fallback(const int idx, const DynamicFontData *data);
	DynamicFontData *get_fallback(const int idx) const;
	void remove_fallback(const int idx);
	int get_fallback_count() const;
};

}
#endif
