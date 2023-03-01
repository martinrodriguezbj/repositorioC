#include <stdio.h>
int main(int argc,char *argv[]){
	int i;
	printf("%d",argc);//cantidad de parametros pasados
	for(i=0;i<argc;i++)
		puts(argv[i]); //vector de strings
	return 0;
	}
