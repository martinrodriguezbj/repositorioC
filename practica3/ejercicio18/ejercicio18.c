#include <stdlib.h>
int* crear_vector_int(int n){
	int *aux=malloc(n*sizeof(int));
	return aux;
	}

int main(){
	int *v=crear_vector_int(5);
	}
