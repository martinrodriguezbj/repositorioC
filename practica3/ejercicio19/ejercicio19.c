#include <stdlib.h>
int* crear_vector_int(int n){
	int *aux=malloc(n*sizeof(int));
	return aux;
	}
	
int* aumentarYreducirVector(int *v,int n){
	v=realloc(v,n*sizeof(int));
	return v;
	}

int main(){
	int *v=crear_vector_int(5);
	v=aumentarYreducirVector(v,8);
	}
