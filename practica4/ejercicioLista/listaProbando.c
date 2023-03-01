#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
struct nodo{
	char *dato;
	struct nodo *siguiente;
	};
	
typedef struct nodo nodo_t;
typedef nodo_t *lista_t;
	
void nueva_lista(lista_t *l){
	*l= NULL;
	}
	
lista_t lista_agregar(lista_t l,char *elem){
	lista_t lAux;
	lAux=l;
	lista_t anterior;
	nodo_t *nodo;
	nodo=malloc(sizeof(nodo_t));
	nodo->dato=malloc(strlen(elem)+1);
	strcpy(nodo->dato,elem);
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
	
lista_t editarLista(lista_t l,char *elem){
	l->dato=realloc(l->dato,strlen(elem)+1);
	strcpy(l->dato,elem);
	return l;
	}
	
	
int main(){
	lista_t lista;
	nueva_lista(&lista);
	char *aux="hola todo bien como andas que andabas haciendo";
	lista=lista_agregar(lista,aux);
	char *edit="Cambie el texto";
	lista=editarLista(lista,edit);
	printf("%s",lista->dato);
	}
