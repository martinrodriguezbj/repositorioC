#include <stdio.h>
#ifndef MAX
#define MAX 20
#endif

int main(){
	char *frase="Hola como andas todo bien";



	printf("%s\n",frase);


	char w[MAX]="";
	int res,s;
	int cant=0;
	while (res=sscanf(frase,"%s%n",w,&s) != EOF){ //n lo que hace es guardar en s la cantidad de caracteres leidos en la palabra
		frase+=s;
		cant++;
	}
	printf("Res: %d",res);
	printf("Cantidad de palabras: %d\n",cant);
	for (int k=0;w[k]!='\0';k++)
		printf("%c",w[k]);
}
