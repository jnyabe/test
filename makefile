SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)
CC = clang++
FLAGS = -std=c++17
LDFLAGS =
LIBS = -lcppunit

.cpp.o:
	$(CC) $(FLAGS) -o $@ -c $<

http_client: $(OBJS)
	$(CC) $(FLAGS) $(LDFLAGS) -o $@ $(OBJS) $(LIBS)

all: http_client

clean:
	-$(RM) http_client $(OBJS) *~
