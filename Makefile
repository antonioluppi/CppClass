all: main.o
	gcc -o program main.o

main.o: main.cpp main.h
	gcc -c main.c

clean:
	rm -rf *.o program