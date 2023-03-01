#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct alumnosPunteros{
		char *nombre;
		char *apellido;
		char *fechaNacimiento;
		char *legajo;
		char *tipoDNI;
		char *numDNI;
		};
typedef struct alumnosPunteros *alumnos;

void inicializoAlumnos(alumnos *a){
	alumnos aux;
	aux=malloc(sizeof(struct alumnosPunteros));
	
	aux->nombre=malloc(strlen("Martin")+1);
	strcpy(aux->nombre,"Martin");
	aux->apellido=malloc(strlen("Rodriguez")+1);
	strcpy(aux->apellido,"Rodriguez");
	aux->fechaNacimiento=malloc(strlen("20-01-2001")+1);
	strcpy(aux->fechaNacimiento,"20-01-2001");
	aux->legajo=malloc(strlen("123456")+1);
	strcpy(aux->legajo,"123456");
	aux->tipoDNI=malloc(strlen("DNI")+1);
	strcpy(aux->tipoDNI,"DNI");
	aux->numDNI=malloc(strlen("43186859")+1);
	strcpy(aux->numDNI,"43186859");
	*a=aux;
	}
	
char* alumnoString(alumnos a){
	char *aux;
	aux=malloc(strlen(a->nombre)+1);
	strcpy(aux,a->nombre);
	aux=realloc(aux,strlen(aux)+2);
	strcat(aux,"-");
	aux=realloc(aux,strlen(aux)+strlen(a->apellido)+1);
	strcat(aux,a->apellido);
	aux=realloc(aux,strlen(aux)+2);
	strcat(aux,"-");
	aux=realloc(aux,strlen(aux)+strlen(a->fechaNacimiento)+1);
	strcat(aux,a->fechaNacimiento);
	return aux;
	
	}

int main(){	
	alumnos alumnos1;
	char *alumnoCadena;
	inicializoAlumnos(&alumnos1);
	alumnoCadena=alumnoString(alumnos1);
	printf("Imprimo cadena: %s",alumnoCadena);
	
	free(alumnoCadena);
	free(alumnos1->nombre);
	free(alumnos1->apellido);
	free(alumnos1->fechaNacimiento);
	free(alumnos1->legajo);
	free(alumnos1->tipoDNI);
	free(alumnos1->numDNI);
	free(alumnos1);
	
}
