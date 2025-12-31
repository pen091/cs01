CC=gcc

all : preprocessing assembly object binary 

preprocessing:
	$(CC) -E hello.c > hello.i

assembly:
	$(CC) -S hello.i -o hello.s

object:
	$(CC) -c hello.s -o hello.o

binary:
	$(CC) hello.o -o hello


clean:
	rm hello.i
	rm hello.s
	rm hello.o
	rm hello

run:
	./hello
	$(CC) hello.o -o hello
