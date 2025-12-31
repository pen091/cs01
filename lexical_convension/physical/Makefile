CC=gcc

all : add sub library run

add :
	$(CC) -fpic -c ./src/add.c -o ./obj/add.o

sub : 
	$(CC) -fpic -c ./src/sub.c -o ./obj/sub.o

library :
	gcc -shared ./obj/*.o -o ./lib/libpen.so

run :
	$(CC) ./src/calc.c -o ./binary/calc ./lib/libpen.so
	./binary/calc

clean :
	rm ./obj/*.o
	rm ./lib/libpen.so
	rm ./binary/calc


