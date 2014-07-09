#include "main.h"
#include "file.h"

int main(int argc,char*argv[]){
	list myList;
	myList.argc = argc;
	myList.argv = argv;
	int N = 0;
	do{
		N = myList.printNext();
	}while(N);
	return 0;
}