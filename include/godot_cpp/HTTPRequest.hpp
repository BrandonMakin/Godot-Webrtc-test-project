#ifndef HTTPREQUEST_H
#define HTTPREQUEST_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Node.hpp"


namespace godot {



class GD_CPP_BINDING_API HTTPRequest : public Node {
public:

	void _init();

	const static int RESULT_BODY_SIZE_LIMIT_EXCEEDED = 7;
	const static int RESULT_CANT_CONNECT = 2;
	const static int RESULT_CANT_RESOLVE = 3;
	const static int RESULT_CHUNKED_BODY_SIZE_MISMATCH = 1;
	const static int RESULT_CONNECTION_ERROR = 4;
	const static int RESULT_DOWNLOAD_FILE_CANT_OPEN = 9;
	const static int RESULT_DOWNLOAD_FILE_WRITE_ERROR = 10;
	const static int RESULT_NO_RESPONSE = 6;
	const static int RESULT_REDIRECT_LIMIT_REACHED = 11;
	const static int RESULT_REQUEST_FAILED = 8;
	const static int RESULT_SSL_HANDSHAKE_ERROR = 5;
	const static int RESULT_SUCCESS = 0;


	int request(const String url, const PoolStringArray custom_headers = PoolStringArray(), const bool ssl_validate_domain = true, const int method = 0, const String request_data = "");
	void cancel_request();
	int get_http_client_status() const;
	void set_use_threads(const bool enable);
	bool is_using_threads() const;
	void set_body_size_limit(const int bytes);
	int get_body_size_limit() const;
	void set_max_redirects(const int amount);
	int get_max_redirects() const;
	void set_download_file(const String path);
	String get_download_file() const;
	int get_downloaded_bytes() const;
	int get_body_size() const;
	void _redirect_request(const String arg0);
	void _request_done(const int arg0, const int arg1, const PoolStringArray arg2, const PoolByteArray arg3);
};

}
#endif
