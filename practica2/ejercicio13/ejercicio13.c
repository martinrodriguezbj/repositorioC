
#include <stdio.h>
#define maximo(a,b) (a > b) ? a : b
#define minimo(a,b) (a < b) ? a : b
int main()
{
    int i=1;
    int j=5;
    printf("El numero mayor entre 1 y 5 es: %d \n", maximo(i++,j++));
    printf("%d",j);
    //printf("El numero menor entre 1 y 5 es: %d", minimo(i,j));
    return 0;
}
