#include <stdio.h>
int main(){
	char *arr1="Hola mundo";
	char arr2[20];

	printf("%d\n",sizeof(arr1)); //imprime 4 por que es un puntero
	printf("%d\n",sizeof(arr2)); //imprime 20 por que es el vector
	return 0;
}