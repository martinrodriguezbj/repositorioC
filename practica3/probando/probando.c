#include <stdio.h>
int main(){
	int nro=24;
	void *cosa;
	cosa=&nro;

	printf("nro: %d\n",nro);
	printf("direccion de nro: %p\n",&nro);

	printf("cosa= %p\n",cosa);
	printf("direccion de cosa=%p\n",&cosa);

	printf("Imprimo a lo que apunta cosa: %d\n", *((int *)cosa));
	return 0;
}