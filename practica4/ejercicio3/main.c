#include <stdio.h>

void inicializaCero(int *num){
	*num=0;
	}

int main(){
	int num=999;
	inicializaCero(&num);
	printf("Num: %d",num);
	}
