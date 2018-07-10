#ifndef XMLPARSER_H
#define XMLPARSER_H

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



class GD_CPP_BINDING_API XMLParser : public Reference {
public:

	void _init();

	const static int NODE_CDATA = 5;
	const static int NODE_COMMENT = 4;
	const static int NODE_ELEMENT = 1;
	const static int NODE_ELEMENT_END = 2;
	const static int NODE_NONE = 0;
	const static int NODE_TEXT = 3;
	const static int NODE_UNKNOWN = 6;


	int read();
	int get_node_type();
	String get_node_name() const;
	String get_node_data() const;
	int get_node_offset() const;
	int get_attribute_count() const;
	String get_attribute_name(const int idx) const;
	String get_attribute_value(const int idx) const;
	bool has_attribute(const String name) const;
	String get_named_attribute_value(const String name) const;
	String get_named_attribute_value_safe(const String name) const;
	bool is_empty() const;
	int get_current_line() const;
	void skip_section();
	int seek(const int pos);
	int open(const String file);
	int open_buffer(const PoolByteArray buffer);
};

}
#endif
