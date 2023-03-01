#include <stdio.h>
#include <string.h>
void ordenar(int vector [],int tamanio){
	int i;
	int j;
	int aux_elem;
	//uso metodo de intercambio o burbujeo
	for (int i=0;i<tamanio-1;i++){
		for (j=1;j<tamanio;j++){
			if (vector[j]<vector[j-1]){
				aux_elem=vector[j];
				vector[j]=vector[j-1];
				vector[j-1]=aux_elem;
			}
		}
	}
	printf("IMPRIMO J: %d\n",j);
	printf("v[6]=%d\n",vector[6]);
}

int main(){
	int vector[]={8,5,4,3,2,1};
	int tamanio=6;
		for (int i=0;i<7;i++){
		printf("%d-pos: %d\n",vector[i],i);
	}
	printf("\n");
	ordenar(vector,tamanio);
	for (int i=0;i<7;i++){
		printf("%d-pos: %d\n",vector[i],i);
	}
}