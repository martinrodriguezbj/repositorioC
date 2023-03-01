#include <stdio.h>
#define cuadrado(x) x*x
int main()
{
    int i=5;
    int k=i++;
    int l=i++;
    int j=k*l;
    printf("k es: %d y l es: %d ",k,l);
    printf("El numero 5 al cuadrado es: %d \n", j);
    i=5;
    printf("El numero 5 al cuadrado es: %d \n", cuadrado(i++));
    printf("%d",i);
    return 0;
}
