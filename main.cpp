#include <cstdio>
#include "main.h"

int main(int argc,char*argv[]){
	for(unsigned int i=0; i < argc; i++){
		printf("argv[%d]=%s\n",i, argv[i]);
	}
	return 0;
}