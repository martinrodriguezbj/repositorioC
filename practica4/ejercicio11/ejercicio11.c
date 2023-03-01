#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
struct nodo{
	void *dato;
	size_t size;
	struct nodo *siguiente;
	};
	
typedef struct nodo nodo_t;
typedef nodo_t *lista_t;
	
void nueva_lista(lista_t *l){
	*l= NULL;
	}
	
lista_t lista_agregar(lista_t l,void *d,size_t s){
	lista_t lAux;
	lAux=l;
	lista_t anterior;
	nodo_t *nodo;
	nodo=malloc(sizeof(nodo_t));
	nodo->dato=malloc(s);
	memcpy(nodo->dato,d,s);
	nodo->size=s;
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
	
int lista_esVacia(lista_t l){
	return l==NULL;
	}
	
lista_t destruirLista(lista_t l){
	lista_t anterior, actual = l;
	while (actual){
		anterior=actual;
		actual=actual->siguiente;
		free(anterior);
		}
		return NULL;
	}

int lista_ExisteElemento(lista_t l,void* dato){
	while(l){
		printf("%d",*(int*)dato);
		if (*((int*)l->dato)==*((int*)dato)) return 1;
		l=l->siguiente;
		}
		return 0;
	}
	
int main(){
	lista_t lista;
	int num=5;
	int num2=4999;
	char *saludo="Hola buen dia como andas";
	nueva_lista(&lista);
	lista=lista_agregar(lista,(void*) &num,sizeof(num));
	lista=lista_agregar(lista,(void*) &num2,sizeof(num2));
	lista=lista_agregar(lista,(void*) saludo,strlen(saludo));
	if(lista_ExisteElemento(lista,(void*) &num))
		puts("Existe elemento en la lista");
		else
			puts("El elemento no existe");
	
	printf("%d\n",*((int*)lista->dato));
	lista=lista->siguiente;
	printf("%d\n",*((int*)lista->dato));
	lista=lista->siguiente;
	printf("%s\n",lista->dato);
	if(lista_esVacia(lista))
		puts("Lista vacia\n");
		else
			puts("La lista tiene elementos\n");
	lista=destruirLista(lista);
	}

