#include <stdio.h>
#include <string.h>

int es_palindromo(char *p){
	int tam=strlen(p)-1;
	for (int i=0,j=tam;i<=j;i++,j--){
		if (p[i]!=p[j])
			return 0;
		}
	if (tam>=1)//este if lo puse por si la palabra es de una letra, osea si es una "y", tiene que retornar que no es capicua
		return 1;
		else
			return 0;
}

int cantidadCapicua(char *frase){
	char w[strlen(frase)];
	int res,s,cant=0;
	while (res=sscanf(frase,"%s%n",w,&s) != EOF){ //n lo que hace es guardar en s la cantidad de caracteres leidos en la palabra
		frase+=s;
		if(es_palindromo(w))
			cant++;
	}	
	return cant;
}

void analizarTexto(char *texto){
	char frase[strlen(texto)];
	int linea=0;
	int i=0,cant=0;
	while (*texto!='\0'){
		i=0;
		linea++;
		while ((*texto!='\0') && (*texto!='\n')){
			frase[i++]=*texto;
			texto++;
			}
		if(*texto=='\n')
			texto++;
		frase[i]='\0';
		if(cant=cantidadCapicua(frase))
			printf("La linea %d tiene %d palabras capicuas\n",linea,cant);
		}
}

int main(){
	char *frase="neuquen boca reconocer\nbien y vos\nse puede reconocer que es neuquen";
	analizarTexto(frase);
}
