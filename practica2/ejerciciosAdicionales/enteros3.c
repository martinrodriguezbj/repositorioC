#include <stdio.h>
#include <math.h>
int main(int argc, char **argv){
	int a,b,res;
	//a=6;
	//b=2;
	//res=pow(a,b);
	
	//para compilar esto tengo que hace gcc enteros3.c -lm  el parametro l va directamente precedido por el
	//nombre de la biblioteca de funciones que quiero enlazar, usando -lm estoy solicitando enlazar la biblioteca
	//cuyo nombre es m
	printf("2 elevado a la quinta es = %\n",pow(2,5));
	return 0;
}
