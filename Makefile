all: main.o
	g++ -o program main.o

main.o: main.cpp main.h
	g++ -c main.cpp
	
clean:
	rm -rf *.o program