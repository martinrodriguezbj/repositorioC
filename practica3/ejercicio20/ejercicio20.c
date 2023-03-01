#include <stdlib.h>
#include <stdio.h>
void inicializarPila(char **pila,int *dimF,int *dimL){
	*pila=NULL;
	*dimF=0;
	*dimL=0;
}

void destruirPIla(char **pila,int *dimF,int *dimL){
  free(*pila);
  *dimF=0;
  *dimL=0;
}

void apilar(char **pila,int *dimF,int *dimL,char elemento){
	char *list=*pila;
	if (*dimF==*dimL){
		list=realloc(list,(++(*dimF)));
		}
	list[(*dimL)++]=elemento;
	*pila=list;	
}

int desapilar(char **pila,int *dimL){
	int c=-1;
	if (*dimL==0)
		fprintf(stderr,"No se puede desapilar, devuelve -1\n");
	char *list=*pila;
	c=list[--(*dimL)];
	return c;
	}


int main(){
	char *pila;
	int dimF;
	int dimL;
	inicializarPila(&pila,&dimF,&dimL);
	apilar(&pila,&dimF,&dimL,'H');
	apilar(&pila,&dimF,&dimL,'O');
	apilar(&pila,&dimF,&dimL,'L');
	apilar(&pila,&dimF,&dimL,'A');
	int c=desapilar(&pila,&dimL);
	printf("Resultado de desapilar: %d",c);
	}
