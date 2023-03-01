#include <stdlib.h>
#include <string.h>
#include <stdio.h>

	struct fecha{
		char anio[5];
		char mes[3];
		char dia[3];
		}una_fecha;
		
		typedef struct fecha *creoFecha;

void inicializarFecha(creoFecha *fecha1){
		creoFecha fechaAux;
		fechaAux=malloc(sizeof(struct fecha));
		strcpy(fechaAux->anio,"1972");
		strcpy(fechaAux->mes,"1");
		strcpy(fechaAux->dia,"1");
		*fecha1=fechaAux;
	}

int main(){
		
		strcpy(una_fecha.anio,"2014");
		strcpy(una_fecha.mes,"06");
		strcpy(una_fecha.dia,"12");
		printf("Fecha: %s - %s - %s",una_fecha.anio,una_fecha.mes,una_fecha.dia);
		
		creoFecha fecha1; //puntero a struct
		inicializarFecha(&fecha1);
		printf("Fecha: %s - %s - %s",fecha1->anio,fecha1->mes,fecha1->dia);
	}
