#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int sumar(int num1,int num2){
	return num1+num2;
	}
	
int restar(int num1,int num2){
	return num1-num2;
	}

int dividir(int num1,int num2){
	return num1/num2;
	}
	
int multiplicar(int num1,int num2){
	return num1*num2;
	}
	
int imprimirParametros(char **argv,int argc){
		printf("Los parametros ingresados son: ");
		for (int i=0;i<argc;i++){
			printf("'%s'",argv[i]);
			}
	}	
	
void ayudar(){
	printf("Aca iria el texto de ayuda\n");
	}
	

int main(int argc,char *argv[]){
	char w[255];
	char *suma="-s";
	char *resta="-r";
	char *divide="-d";
	char *multiplica="-m";
	char *imprimeParametros="-i";
	char *ayuda="-h";
	char aux[10];
	char num1[10];
	char num2[10];
	
	if(argc==5){
		sscanf(argv[4],"%s",aux);
		if(strcmp(aux,imprimeParametros)==0){
			sscanf(argv[1],"%s",aux);
			sscanf(argv[2],"%s",num1);
			sscanf(argv[3],"%s",num2);
			int x=atoi(num1);
		    int y=atoi(num2);
			if(strcmp(aux,suma)==0)
				printf("El resultado de la suma es: %d\n",sumar(x,y));
			if(strcmp(aux,resta)==0)
				printf("El resultado de la resta es: %d\n",restar(x,y));
			if(strcmp(aux,multiplica)==0)
				printf("El resultado de multiplicar es: %d\n",multiplicar(x,y));
			if(strcmp(aux,divide)==0)
				printf("El resultado de dividr es: %d\n",dividir(x,y));
			imprimirParametros(argv,argc);
			}
		}else if(argc==4){
			sscanf(argv[1],"%s",aux);
			sscanf(argv[2],"%s",num1);
			sscanf(argv[3],"%s",num2);
			int x=atoi(num1);
		    int y=atoi(num2);
			if(strcmp(aux,suma)==0)
				printf("El resultado de la suma es: %d\n",sumar(x,y));
			if(strcmp(aux,resta)==0)
				printf("El resultado de la resta es: %d\n",restar(x,y));
			if(strcmp(aux,multiplica)==0)
				printf("El resultado de multiplicar es: %d\n",multiplicar(x,y));
			if(strcmp(aux,divide)==0)
				printf("El resultado de dividr es: %d\n",dividir(x,y));
			}else if(argc==2){
				sscanf(argv[1],"%s",aux);
				if (strcmp(aux,ayuda)==0)
					ayudar();
				}
	
		
	
}
	
