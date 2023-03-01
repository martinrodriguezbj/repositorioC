#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *letras= "0123456789ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";

void invertir(char s[]){
	//23a5
	//5a32 
	int i=0;
	int j=strlen(s) - 1;
	for (;i<j;i++,j--){
		char tmp = s[i];
		s[i]=s[j];
		s[j]=tmp;
	}
}

void convertir(int n, char s[],int base){
	int pos=0;
	do{
		int resto=n%base;
		s[pos]=letras[resto];//0025
		pos++;
		n=n/base;
	}while(n!=0);
	s[pos]='\0'; 
	invertir(s);
}

int main(int argc,char *argv[]){
	if(argc==3){
		char a[20];
		char b[20];
		sscanf(argv[1],"%s",a);
		sscanf(argv[2],"%s",b);
		int x=atoi(a);
		int y=atoi(b);
		char cadena[50];
		convertir(x,cadena,y);
		puts(cadena);
	}else
		printf("Ingreso de parametros incorrecto:%d",argc);
	return 0;	
	}
