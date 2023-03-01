#include <stdio.h>
#include <stdlib.h>

int main(){
	struct var{
		int campo;
		};
		
		struct var *varr;
		varr=malloc(sizeof(struct var));
		printf("Campo antes: %d",(*varr).campo);
		(*varr).campo=1;
		printf("Campo despues: %d",(varr->campo)); //Esta es la otra alternativa sintactica
		
	}
	
	//es posible usar la notacion (*varr).campo cuando estamos trabajadno con un puntero a struct, y lo tenemos
	//alocado en la memoria heap
