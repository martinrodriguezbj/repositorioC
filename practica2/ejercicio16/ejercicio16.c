#include <stdio.h>
#define mi_macro(t, a, b) {t _z##a##_##b = a; a = b; b = _z##a##_ ##b ;}
int main()
{
    int a=1;
    int b=2;
    printf("Antes de la macro A:%d\n",a);
    printf("Antes de la macro B:%d\n",b);
    mi_macro(int,a,b);
    printf("Despues de la macro A:%d\n",a);
    printf("Despues de la macro A:%d\n",b);
    return 0;
}
