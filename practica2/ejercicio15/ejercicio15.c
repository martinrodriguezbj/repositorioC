#include <stdio.h>
#define macro1(expr) printf(#expr "= %g\n", expr);
#define macro2(uno, dos) uno##dos
#define macro3(str1,str2) #str1 "" #str2
int main()
{
    int i=1;
    int j=5;
   //macro1(4.2);
   //printf("%d",macro2(3,3));
   printf("%s",macro3(hello,world));
    return 0;
}
