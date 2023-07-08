#include "http_client.h"
#include "debug.h"


int main(int argc, const char** argv)
{
	int ret = 0;
	HttpClient httpClient;
	char data[1024];
	char buffer[1024];
	
	ret = httpClient.Connect("http://www.google.com/");
	if(ret < 0)
	{
		ERRPRT("Connect: %#x\n",ret);
	}
	ret = httpClient.Send(data, sizeof(data));
	if(ret < 0)
	{
		ERRPRT("Send: %#x\n",ret);
	}
	size_t actualSize = 0;
	ret = httpClient.Recv(buffer,sizeof(buffer), &actualSize);
	if(ret < 0)
	{
		ERRPRT("Recv: %#x\n",ret);
	}
	ret = httpClient.Disconnect();
	if(ret < 0)
	{
		ERRPRT("Disconnect: %#x\n",ret);
	}
	
	return ret;
}
