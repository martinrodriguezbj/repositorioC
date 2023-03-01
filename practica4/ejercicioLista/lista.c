#include <stddef.h>
#include <stdlib.h>
struct nodo{
	int dato;
	struct nodo *siguiente;
	};
	
typedef struct nodo nodo_t;
typedef nodo_t *lista_t;
	
void nueva_lista(lista_t *l){
	*l= NULL;
	}
	
lista_t lista_agregar(lista_t l,int dato){
	lista_t lAux;
	lAux=l;
	lista_t anterior;
	nodo_t *nodo;
	nodo=malloc(sizeof(nodo_t));
	nodo->dato=dato;
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
	
lista_t lista_destruir(lista_t l){
	lista_t anterior,actual = l;
	while (actual!=NULL){
		anterior=actual;
		actual=actual->siguiente;
		free(anterior);
		}
		return NULL;
	}
	
int main(){
	lista_t lista;
	nueva_lista(&lista);
	lista=lista_agregar(lista,5);
	lista=lista_agregar(lista,10);
	lista=lista_destruir(lista);
	}
