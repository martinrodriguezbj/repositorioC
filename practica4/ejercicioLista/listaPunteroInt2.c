#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
struct nodo{
	int *dato;
	struct nodo *siguiente;
	};
	
typedef struct nodo nodo_t;
typedef nodo_t *lista_t;
	
void nueva_lista(lista_t *l){
	*l= NULL;
	}
	
lista_t lista_agregar(lista_t l,int num){
	lista_t lAux;
	lAux=l;
	lista_t anterior;
	nodo_t *nodo;
	nodo=malloc(sizeof(nodo_t));
	nodo->dato=malloc(sizeof(int));
	*nodo->dato=num;
	nodo->siguiente=NULL;
	if (l==NULL)
		return nodo;
	while(lAux!=NULL){
		anterior=lAux;
		lAux=lAux->siguiente;
		}
		anterior->siguiente=nodo;
	return l;
	}
	
int main(){
	lista_t lista;
	nueva_lista(&lista);
	int num=5;
	lista=lista_agregar(lista,num);
	lista=lista_agregar(lista,10);
	printf("%d",lista->dato);
	}
