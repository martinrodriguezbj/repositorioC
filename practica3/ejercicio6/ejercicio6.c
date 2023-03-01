#include <stdio.h>
#include <string.h>

void imprimirInverso(char *a){
	int j=strlen(a)-1;
	printf("%d\n",j);
	for (;j>=0;j--){
		printf("%c\n",a[j]);
	}
}

void imprimirInversoRecursivo(char *a,int tam){
	if (tam>=0){
		printf("%c",a[tam]);
		imprimirInversoRecursivo(a,tam-1);
	}
}

int main(){
	char *letras= "Hola buen dia";
	//imprimirInverso(letras);
	int j=strlen(letras)-1;
	imprimirInversoRecursivo(letras,j);
}