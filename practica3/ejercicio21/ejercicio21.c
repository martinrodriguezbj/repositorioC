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
		return c;
		else{
			char *list=*pila;
			c=list[--(*dimL)];
		}
		return c;
	}

int main(){
	char *pila;
	int dimL;
	int dimF;
	int c;
	inicializarPila(&pila,&dimL,&dimF);
	while((c=getchar())!=EOF){
		apilar(&pila,&dimF,&dimL,c);
		}
	printf("\n");	
	int d=0;
	while (d!=-1){
		d=desapilar(&pila,&dimL);
		if (d!=-1)
			printf("%c",d);
		}
}
