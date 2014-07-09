#include <cstdio>
#include "file.h"

int list::printNext(){
	if(i < argc){
		printf("argv[%d]=%s\n", i, argv[i]);
		i++;
		return 1;
	}else{
		return 0;
	}
}

list::list(){
	i = 0;
}