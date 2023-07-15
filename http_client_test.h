#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/extensions/HelperMacros.h>

#include "http_client.h"

class HttpClientTest : public CPPUNIT_NS::TestFixture{
    CPPUNIT_TEST_SUITE(HttpClientTest);
    CPPUNIT_TEST(test_connect);
    CPPUNIT_TEST(test_disconnect);
    CPPUNIT_TEST(test_send);
	CPPUNIT_TEST(test_recv);
    CPPUNIT_TEST(test_abort);	
    CPPUNIT_TEST_SUITE_END();

protected:
    void test_connect();
    void test_disconnect();
    void test_send();
	void test_recv();
	void test_abort();

public:
    void setUp();
    void testDown();
};
