#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct alumnos{
		char nombre[10];
		char apellido[10];
		char fechaNacimiento[11];
		char legajo[10];
		char tipoDNI[10];
		char numDNI[10];
		};
		
struct alumnosPunteros{
		char *nombre;
		char *apellido;
		char *fechaNacimiento;
		char *legajo;
		char *tipoDNI;
		char *numDNI;
		};

int main(){
	struct alumnos alumnos1;
	strcpy(alumnos1.nombre,"Martin");
	strcpy(alumnos1.apellido,"Rodriguez");
	strcpy(alumnos1.fechaNacimiento,"20-01-2001");
	strcpy(alumnos1.legajo,"123456");
	strcpy(alumnos1.tipoDNI,"DNI");
	strcpy(alumnos1.numDNI,"43186859");
	
	struct alumnos alumnos2;
	alumnos2=alumnos1;
	printf("----Imprimo alumnos1----\n");
	printf("%s\n",alumnos1.nombre);
	printf("%s\n",alumnos1.apellido);
	printf("%s\n",alumnos1.fechaNacimiento);
	printf("%s\n",alumnos1.legajo);
	printf("%s\n",alumnos1.tipoDNI);
	printf("%s\n",alumnos1.numDNI);
	printf("-----------------");
		printf("----Imprimo alumnos2----\n");
	printf("%s\n",alumnos2.nombre);
	printf("%s\n",alumnos2.apellido);
	printf("%s\n",alumnos2.fechaNacimiento);
	printf("%s\n",alumnos2.legajo);
	printf("%s\n",alumnos2.tipoDNI);
	printf("%s\n",alumnos2.numDNI);
	
	//cambio el campo nombre de alumnos1
	strcpy(alumnos1.nombre,"Albert");
	//vuelvo a imprimir ambas estructuras
	puts("VUELVO A MOSTRAR AMBAS ESTRUCTURAS");
		printf("----Imprimo alumnos1----\n");
	printf("%s\n",alumnos1.nombre);
	printf("%s\n",alumnos1.apellido);
	printf("%s\n",alumnos1.fechaNacimiento);
	printf("%s\n",alumnos1.legajo);
	printf("%s\n",alumnos1.tipoDNI);
	printf("%s\n",alumnos1.numDNI);
	printf("-----------------");
		printf("----Imprimo alumnos2----\n");
	printf("%s\n",alumnos2.nombre);
	printf("%s\n",alumnos2.apellido);
	printf("%s\n",alumnos2.fechaNacimiento);
	printf("%s\n",alumnos2.legajo);
	printf("%s\n",alumnos2.tipoDNI);
	printf("%s\n",alumnos2.numDNI);
	
	//Inicializo estructura con campos de punteros
	struct alumnosPunteros alumnos3;
	alumnos3.nombre=malloc(strlen("Martin")+1);
	strcpy(alumnos3.nombre,"Martin");
	alumnos3.apellido=malloc(strlen("Rodriguez")+1);
	strcpy(alumnos3.apellido,"Rodriguez");
	alumnos3.fechaNacimiento=malloc(strlen("20-01-2001")+1);
	strcpy(alumnos3.fechaNacimiento,"20-01-2001");
	alumnos3.legajo=malloc(strlen("123456")+1);
	strcpy(alumnos3.legajo,"123456");
	alumnos3.tipoDNI=malloc(strlen("DNI")+1);
	strcpy(alumnos3.tipoDNI,"DNI");
	alumnos3.numDNI=malloc(strlen("43186859")+1);
	strcpy(alumnos3.numDNI,"43186859");
	
	puts("Muestro estructuras con punteros");
			printf("----Imprimo alumnos3----\n");
	printf("%s\n",alumnos3.nombre);
	printf("%s\n",alumnos3.apellido);
	printf("%s\n",alumnos3.fechaNacimiento);
	printf("%s\n",alumnos3.legajo);
	printf("%s\n",alumnos3.tipoDNI);
	printf("%s\n",alumnos3.numDNI);
	printf("-----------------");
	
	struct alumnosPunteros alumnos4;
	alumnos4=alumnos3;
	
			printf("----Imprimo alumnos4----\n");
	printf("%s\n",alumnos4.nombre);
	printf("%s\n",alumnos4.apellido);
	printf("%s\n",alumnos4.fechaNacimiento);
	printf("%s\n",alumnos4.legajo);
	printf("%s\n",alumnos4.tipoDNI);
	printf("%s\n",alumnos4.numDNI);
	
	puts("Edito nombre de alumnos3");
	strcpy(alumnos3.nombre,"Pedro");
	
	puts("Vuelvo a mostrar estructuras con punteros");
			printf("----Imprimo alumnos3----\n");
	printf("%s\n",alumnos3.nombre);
	printf("%s\n",alumnos3.apellido);
	printf("%s\n",alumnos3.fechaNacimiento);
	printf("%s\n",alumnos3.legajo);
	printf("%s\n",alumnos3.tipoDNI);
	printf("%s\n",alumnos3.numDNI);
	printf("-----------------");
			printf("----Imprimo alumnos4----\n");
	printf("%s\n",alumnos4.nombre);
	printf("%s\n",alumnos4.apellido);
	printf("%s\n",alumnos4.fechaNacimiento);
	printf("%s\n",alumnos4.legajo);
	printf("%s\n",alumnos4.tipoDNI);
	printf("%s\n",alumnos4.numDNI);
	
	//COnclusion, cuando los campos son arreglos de tamaño fijo, y asigno una variable a otra, al editar una de las variables
	//la otra queda como antes, pero cuando los campos son punteros a char, y asigno una variable a otra, al editar un campo,
	//ambas variables van a ser alteradas.
	}
