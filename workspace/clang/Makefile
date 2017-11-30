all: hello
	
CFLAGS=-g -Wall -o hello
CC=clang
INCLUDES+= -I bsp/ps7_cortexa9_0/libsrc/standalone_v6_4/src
INCLUDES+= -I bsp/ps7_cortexa9_0/include/

APPLICATION=../application/src/helloworld.c

hello:
	$(CC) $(CFLAGS) $(INCLUDES) $(APPLICATION)

tidy:
	clang-tidy $(APPLICATION) -- $(INCLUDES)
	
clean:
	rm hello
