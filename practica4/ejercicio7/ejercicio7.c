#include <stdio.h>
int main(){
	struct estructura{
		int a;
		char b;
		}estructura1;
	printf("Tamaño estructura completa: %d\n",sizeof(struct estructura));	
	
	printf("Tamaño estructura1: %d\n",sizeof(estructura1));	
	printf("Tamaño a: %d\n",sizeof(estructura1.a));	
	printf("Tamaño b: %d\n",sizeof(estructura1.b));		
	}
	//el tamaño del struct no coincide con la suma del tamaño de sus campos ya que un struct es tan grande
	//como sus miembros o incluso mas, por que despues de cada miembro del struct pueden haber bytes de
	//relleno para los miembros queden alineados en memoria.
