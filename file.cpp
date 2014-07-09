#include <cstdio>
#include "file.h"

int list::Add(char*ptToChar){
	if(internalList_Count < MaxinternalList_Count){
		internalList[internalList_Count] = ptToChar;
		internalList_Count++;
		return 1;
	}else{
		return 0;
	}
}

int list::Add(int argc, char**argv){
	for(int i=0; i < argc; i++){
		if( !Add(argv[i]) ){
			return 0;
		}
	}
	return 1;
}

int list::PrintAll(){
	for(int i=0;i<internalList_Count;i++){
		printf("argv[%d]=%s\n", i, internalList[i]);
	}
}

int list::PrintNext(){

	return 0;
}

void list::ResetPrint(){
	i = 0;
}

list::list(){
	internalList_Count = 0;
	ResetPrint();
}