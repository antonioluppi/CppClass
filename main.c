#include <stdio.h>
#include "main.h"

int main(int argc,char*argv[]){
	unsigned int i;
	for(i=0; i < argc; i++){
		printf("argv[%d]=%s\n",i, argv[i]);
	}
	return 0;
}