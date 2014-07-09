all: main.o file.o
	g++ -o program main.o file.o

main.o: main.cpp main.h
	g++ -c main.cpp
	
file.o: file.cpp file.h
	g++ -c file.cpp
	
clean:
	rm -rf *.o program
