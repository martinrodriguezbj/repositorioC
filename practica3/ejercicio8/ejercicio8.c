#include <stdio.h>
#include <string.h>

int main(){
char dest[20]="todo bien";
const char *src="Hola que tal";


int aux=strcmp(src,dest); //devuelve num positivo si src es mayor,negativo si es menor, y 0 si es igual
printf("Aux: %d",aux);

strcpy(dest,src); //copia src a dest

int longitud=strlen(dest);
//printf("Long: %d",longitud);

char *aux2=strstr(dest,src);
printf("ocurrencia: %c",*aux2);

//strcat(dest,src); //concatenamiento de dest y src, dest tiene que tener espacio para concatenar
for (int i=0;dest[i]!='\0';i++)
	printf("%c",dest[i]);
}
