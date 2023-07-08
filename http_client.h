#ifndef __HTTP_CLIENT_H_DEFINED__
#define __HTTP_CLIENT_H_DEFINED__

#include <stdlib.h>
#include <stdint.h>


class HttpClient
{
public:
	HttpClient();
	virtual ~HttpClient();
	int32_t Connect(const char* url);
	int32_t Disconnect(void);
	int32_t Send(const char* data, size_t dataSize);
	int32_t Recv(char* buffer, size_t bufferSize, size_t* actualSize);
	int32_t Abort(void);
};
	
#endif /* __HTTP_CLIENT_H_DEFINED__ */
