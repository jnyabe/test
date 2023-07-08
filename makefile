SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)
CC = clang++

.cpp.o:
	$(CC) -o $@ -c $<

http_client: $(OBJS)
	$(CC) -o $@ $(OBJS)

all: http_client

clean:
	-$(RM) http_client $(OBJS)
