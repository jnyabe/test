#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/XmlOutputter.h>
#include <cppunit/TextOutputter.h>
#include "http_client.h"
#include "debug.h"

#define TEST_OUTPUT_FILE "test_result.xml"

int main(int argc, const char** argv)
{
	CPPUNIT_NS::TestResult controller;

	//途中結果の収集
	CPPUNIT_NS::BriefTestProgressListener progress;
	controller.addListener(&progress);

	//テストを走らせる。テストを入れて走る
	CPPUNIT_NS::TestRunner runner;
	runner.addTest( CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest() );
 
	CppUnit::TestResultCollector result; 
	controller.addListener ( &result ); 
 
	std::ofstream xmlout (TEST_OUTPUT_FILE); 
	CppUnit::XmlOutputter xmlOutputter ( &result, xmlout ); 
	CppUnit::TextOutputter consoleOutputter ( &result, std::cout ); 
	
	runner.run(controller); 
 
	xmlOutputter.write(); 
	consoleOutputter.write(); 

	return result.wasSuccessful() ? 0 : 1;	
}
