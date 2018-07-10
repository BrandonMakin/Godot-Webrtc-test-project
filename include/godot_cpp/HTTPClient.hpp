#ifndef HTTPCLIENT_H
#define HTTPCLIENT_H

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

class StreamPeer;


class GD_CPP_BINDING_API HTTPClient : public Reference {
public:

	void _init();

	const static int METHOD_CONNECT = 7;
	const static int METHOD_DELETE = 4;
	const static int METHOD_GET = 0;
	const static int METHOD_HEAD = 1;
	const static int METHOD_MAX = 8;
	const static int METHOD_OPTIONS = 5;
	const static int METHOD_POST = 2;
	const static int METHOD_PUT = 3;
	const static int METHOD_TRACE = 6;
	const static int RESPONSE_ACCEPTED = 202;
	const static int RESPONSE_BAD_GATEWAY = 502;
	const static int RESPONSE_BAD_REQUEST = 400;
	const static int RESPONSE_CONFLICT = 409;
	const static int RESPONSE_CONTINUE = 100;
	const static int RESPONSE_CREATED = 201;
	const static int RESPONSE_EXPECTATION_FAILED = 417;
	const static int RESPONSE_FAILED_DEPENDENCY = 424;
	const static int RESPONSE_FORBIDDEN = 403;
	const static int RESPONSE_FOUND = 302;
	const static int RESPONSE_GATEWAY_TIMEOUT = 504;
	const static int RESPONSE_GONE = 410;
	const static int RESPONSE_HTTP_VERSION_NOT_SUPPORTED = 505;
	const static int RESPONSE_IM_USED = 226;
	const static int RESPONSE_INSUFFICIENT_STORAGE = 507;
	const static int RESPONSE_INTERNAL_SERVER_ERROR = 500;
	const static int RESPONSE_LENGTH_REQUIRED = 411;
	const static int RESPONSE_LOCKED = 423;
	const static int RESPONSE_METHOD_NOT_ALLOWED = 405;
	const static int RESPONSE_MOVED_PERMANENTLY = 301;
	const static int RESPONSE_MULTIPLE_CHOICES = 300;
	const static int RESPONSE_MULTI_STATUS = 207;
	const static int RESPONSE_NON_AUTHORITATIVE_INFORMATION = 203;
	const static int RESPONSE_NOT_ACCEPTABLE = 406;
	const static int RESPONSE_NOT_EXTENDED = 510;
	const static int RESPONSE_NOT_FOUND = 404;
	const static int RESPONSE_NOT_IMPLEMENTED = 501;
	const static int RESPONSE_NOT_MODIFIED = 304;
	const static int RESPONSE_NO_CONTENT = 204;
	const static int RESPONSE_OK = 200;
	const static int RESPONSE_PARTIAL_CONTENT = 206;
	const static int RESPONSE_PAYMENT_REQUIRED = 402;
	const static int RESPONSE_PRECONDITION_FAILED = 412;
	const static int RESPONSE_PROCESSING = 102;
	const static int RESPONSE_PROXY_AUTHENTICATION_REQUIRED = 407;
	const static int RESPONSE_REQUESTED_RANGE_NOT_SATISFIABLE = 416;
	const static int RESPONSE_REQUEST_ENTITY_TOO_LARGE = 413;
	const static int RESPONSE_REQUEST_TIMEOUT = 408;
	const static int RESPONSE_REQUEST_URI_TOO_LONG = 414;
	const static int RESPONSE_RESET_CONTENT = 205;
	const static int RESPONSE_SEE_OTHER = 303;
	const static int RESPONSE_SERVICE_UNAVAILABLE = 503;
	const static int RESPONSE_SWITCHING_PROTOCOLS = 101;
	const static int RESPONSE_TEMPORARY_REDIRECT = 307;
	const static int RESPONSE_UNAUTHORIZED = 401;
	const static int RESPONSE_UNPROCESSABLE_ENTITY = 422;
	const static int RESPONSE_UNSUPPORTED_MEDIA_TYPE = 415;
	const static int RESPONSE_UPGRADE_REQUIRED = 426;
	const static int RESPONSE_USE_PROXY = 305;
	const static int STATUS_BODY = 7;
	const static int STATUS_CANT_CONNECT = 4;
	const static int STATUS_CANT_RESOLVE = 2;
	const static int STATUS_CONNECTED = 5;
	const static int STATUS_CONNECTING = 3;
	const static int STATUS_CONNECTION_ERROR = 8;
	const static int STATUS_DISCONNECTED = 0;
	const static int STATUS_REQUESTING = 6;
	const static int STATUS_RESOLVING = 1;
	const static int STATUS_SSL_HANDSHAKE_ERROR = 9;


	Error connect_to_host(const String host, const int port, const bool use_ssl = false, const bool verify_host = true);
	void set_connection(const StreamPeer *connection);
	StreamPeer *get_connection() const;
	int request_raw(const int method, const String url, const PoolStringArray headers, const PoolByteArray body);
	int request(const int method, const String url, const PoolStringArray headers, const String body);
	int send_body_text(const String body);
	int send_body_data(const PoolByteArray body);
	void close();
	bool has_response() const;
	bool is_response_chunked() const;
	int get_response_code() const;
	PoolStringArray get_response_headers();
	Dictionary get_response_headers_as_dictionary();
	int get_response_body_length() const;
	PoolByteArray read_response_body_chunk();
	void set_read_chunk_size(const int bytes);
	void set_blocking_mode(const bool enabled);
	bool is_blocking_mode_enabled() const;
	int get_status() const;
	Error poll();
	String query_string_from_dict(const Dictionary fields);
};

}
#endif
