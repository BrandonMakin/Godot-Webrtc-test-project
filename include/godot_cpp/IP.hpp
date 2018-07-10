#ifndef IP_H
#define IP_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Object.hpp"


namespace godot {



class GD_CPP_BINDING_API IP : public Object {
private:
	static void ___singleton_init();
public:

	void _init();

	const static int RESOLVER_INVALID_ID = -1;
	const static int RESOLVER_MAX_QUERIES = 32;
	const static int RESOLVER_STATUS_DONE = 2;
	const static int RESOLVER_STATUS_ERROR = 3;
	const static int RESOLVER_STATUS_NONE = 0;
	const static int RESOLVER_STATUS_WAITING = 1;
	const static int TYPE_ANY = 3;
	const static int TYPE_IPV4 = 1;
	const static int TYPE_IPV6 = 2;
	const static int TYPE_NONE = 0;


	static String resolve_hostname(const String host, const int ip_type = 3);
	static int resolve_hostname_queue_item(const String host, const int ip_type = 3);
	static int get_resolve_item_status(const int id);
	static String get_resolve_item_address(const int id);
	static void erase_resolve_item(const int id);
	static Array get_local_addresses();
	static void clear_cache(const String arg0);
};

}
#endif
