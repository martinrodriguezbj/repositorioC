#include <stdio.h>
#include <ctype.h>

void capitalizar(char *cadena){
	printf("Forma original: '%s'",cadena);
	//pasamos el primer caracter a mayusculas
	cadena[0]=toupper(cadena[0]);
	printf("Capitalizado: '%s'\n",cadena);
	puts("--");
}

int main(int argc,char **argv){
	char cadena1[]="foo";
	char cadena2[]="bar"; //no andaba por que antes era char *cadena2="bar" , osea un literal y no se puede modficiar, solo son de lectura 
	
	capitalizar(cadena1);
	capitalizar(cadena2);
	return 0;
	}
