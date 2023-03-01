#include <stdlib.h>
void alocarMemoria(int **num){
	*num=malloc(sizeof(int));
	}

int main(){
	int *num;
	alocarMemoria(&num);
	}
