#include <limits.h> // Para usar UINT_MA
#include <stdio.h>

char uno(){
char c;
c = 'A' + 3;
return (c);//retorna D
}

int dos()
{
int a = 10;
return ((a++ == 9)?a:--a); //10
}

float tres()
{
float x =10.2 +2.5; 
return x; //12.7
}

int cuatro()
{
float x=3.6;
return (int)x; //3
}

int cinco()
{
int a = 17, b;
b = ++a % 3;
return (b > 1);//0
}

int seis()
{
int a = 3;
a <<= 3;
return a;//0011 <<= 11000 = 24
}

int siete ()
{
// Ver:
// https://www.gnu.org/software/libc/manual/html_node/Range-of-Type.html
unsigned a = 8, b;
b = ~a;
printf("B=%d",b);
return (b == (UINT_MAX - 8));//
}

int ocho()
{
int i = 320;
return (char) i;//64
}

double nueve()
{
char c = 'A';
return (double) c;//62
}





int main(){
int n1;
printf("Retorna: %c\n",uno());
printf("Retorna2: %d\n",dos());
printf("Retorna3: %.2f\n",tres());
printf("Retorna4: %d\n",cuatro());
printf("Retorna5: %i\n",cinco());
printf("Retorna6: %i\n",seis());
printf("Retorna7: %i\n",siete());
printf("Retorna8: %i\n",ocho());
printf("Retorna9: %f\n",nueve()); //no se por que retorna 0
scanf("%i",&n1);
}
