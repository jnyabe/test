#include "http_client_test.h"

void HttpClientTest::setUp()
{
	
}
void HttpClientTest::testDown()
{
	
}

void HttpClientTest::test_connect()
{
	HttpClient client;
	const char url[] = "http://example.com/";
	CPPUNIT_ASSERT_EQUAL(0, client.Connect(url));
}

void HttpClientTest::test_disconnect()
{
	HttpClient client;
	CPPUNIT_ASSERT_EQUAL(0, client.Disconnect());	
}

void HttpClientTest::test_send()
{
	HttpClient client;
	char data[1024];
	CPPUNIT_ASSERT_EQUAL(0, client.Send(data, sizeof(data)));
}

void HttpClientTest::test_recv()
{
	HttpClient client;
	char buffer[1024];
	size_t length;
	CPPUNIT_ASSERT_EQUAL(0, client.Recv(buffer, sizeof(buffer), &length));
}

void HttpClientTest::test_abort()
{
	HttpClient client;
	CPPUNIT_ASSERT_EQUAL(0, client.Abort());
 }

CPPUNIT_TEST_SUITE_REGISTRATION(HttpClientTest);
