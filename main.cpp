#include "main.h"
#include "file.h"

int main(int argc,char*argv[]){
	list myList;
	myList.Add(argc, argv);
	char name[] = "Elias";
	myList.Add(name);
	int N = 0;
	
	do{
		N = myList.PrintNext();
	}while(N);
	
	myList.PrintAll();
	
	return 0;
}