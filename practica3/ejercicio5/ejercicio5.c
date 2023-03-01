#include <stdio.h>
void funcion(int arregloA[],int arregloB[],int resultado[],int tamanio){
	for (int i=0;i<tamanio;i++){
		resultado[i]=arregloA[i]+arregloB[i];
	}
}


int main(){
	int arregloA[]={1,2,3,4,5,6};
	int arregloB[]={1,2,3,4,5,6};
	int resultado[6];
	int tamanio=6;
	funcion(arregloA,arregloB,resultado,tamanio);
	for (int i=0;i<tamanio;i++){
		printf("%d-",resultado[i]);
	}
}