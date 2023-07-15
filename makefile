SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)
CC = clang++
FLAGS = -std=c++17
LDFLAGS =
LIBS = -lcppunit
BIN = http_client_test

.cpp.o:
	$(CC) $(FLAGS) -o $@ -c $<

http_client_test: $(OBJS)
	$(CC) $(FLAGS) $(LDFLAGS) -o $@ $(OBJS) $(LIBS)

all: $(BIN)

clean:
	-$(RM) $(BIN) $(OBJS) *~
