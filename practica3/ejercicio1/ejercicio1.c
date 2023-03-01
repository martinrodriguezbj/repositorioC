#include <stdio.h>
#include <string.h>

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

int main(){
	char cadena[50];
	convertir(2000,cadena,20);
	puts(cadena);
}