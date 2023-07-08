#ifndef __DEBUG_H_DEFINED_
#define __DEBUG_H_DEFINED_

#include<stdio.h>
#include<string>

#define DBGPRT(...) {fprintf(stderr, "[DBGPRT]");fprintf(stderr, __VA_ARGS__);}
#define ERRPRT(...) {fprintf(stderr, "[ERRPRT]");fprintf(stderr, __VA_ARGS__);}

class TraceBlock
{
private:
	std::string m_label;
public:
	TraceBlock(const char* name):m_label(name) {
		DBGPRT("[BEGIN] %s\n", m_label.c_str());
	}
	virtual ~TraceBlock() {
		DBGPRT("[ END ] %s\n", m_label.c_str());
	}
};

#define TRACE(label) TraceBlock(label)
#endif // __DEBUG_H_DEFINED_
