#include <stdio.h>
int main(){
	char arr1[ ][15] = {"uno", "dos", "tres","holaholaholahol"};
	char arr2[5][15];
	char *arr3[ ] = {"uno", "dos", "tres", "cuatro"};
	char *arr4[4];

	printf("tamaño arr1:%d\n",sizeof(arr1));
	printf("tamaño arr2:%d\n",sizeof(arr2));
	printf("tamaño arr3:%d\n",sizeof(arr3));
	printf("tamaño arr4:%d\n",sizeof(arr4));

	//la diferencia entre un arreglo multidimensiona y un arreglo
	//de punteros es que en el arreglo multidimensional
	//
}
