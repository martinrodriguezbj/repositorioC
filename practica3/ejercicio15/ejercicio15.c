#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[]){
	char w[255];
	char *clave="abracadabra";
	if (argc>0){
		sscanf(argv[1],"%s",w);
		if (strcmp(w,clave)==0)
			puts("Usted inicio sesion correctamente");
			else
				printf("parametros recibidos: %d",argc);
	}
	return 0;
	}

//Si la clave de acceso tiene espacios se va a tomar como incorrecta, ya que contaria como otro parametro
//en argv[0] esta el nombre del programa
