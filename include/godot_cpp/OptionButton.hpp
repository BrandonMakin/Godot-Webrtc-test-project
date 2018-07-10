#ifndef OPTIONBUTTON_H
#define OPTIONBUTTON_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Button.hpp"


namespace godot {

class Texture;


class GD_CPP_BINDING_API OptionButton : public Button {
public:

	void _init();



	void _selected(const int arg0);
	void add_item(const String label, const int id = -1);
	void add_icon_item(const Texture *texture, const String label, const int id);
	void set_item_text(const int idx, const String text);
	void set_item_icon(const int idx, const Texture *texture);
	void set_item_disabled(const int idx, const bool disabled);
	void set_item_ID(const int idx, const int id);
	void set_item_metadata(const int idx, const Variant metadata);
	String get_item_text(const int idx) const;
	Texture *get_item_icon(const int idx) const;
	int get_item_ID(const int idx) const;
	void get_item_metadata(const int idx) const;
	bool is_item_disabled(const int idx) const;
	int get_item_count() const;
	void add_separator();
	void clear();
	void select(const int idx);
	int get_selected() const;
	int get_selected_ID() const;
	void get_selected_metadata() const;
	void remove_item(const int idx);
	void _select_int(const int arg0);
	void _set_items(const Array arg0);
	Array _get_items() const;
};

}
#endif
