#include "http_client.h"
#include "debug.h"

HttpClient::HttpClient()
{
	
}

HttpClient::~HttpClient()
{
	
}

int32_t HttpClient::Connect(const char* url)
{
	TRACE(__FUNCTION__);
	return 0;
}

int32_t HttpClient::Disconnect(void)
{
	TRACE(__FUNCTION__);
	return 0;
}

int32_t HttpClient::Send(const char* data, size_t dataSize)
{
	TRACE(__FUNCTION__);
	return 0;
}

int32_t HttpClient::Recv(char* buffer, size_t bufferSize, size_t* actualSize)
{
	TRACE(__FUNCTION__);
	return 0;
}

int32_t HttpClient::Abort(void)
{
	TRACE(__FUNCTION__);
	return 0;
}
	

