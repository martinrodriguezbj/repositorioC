#include <stdio.h>

int main()
{
  int c;
  int cant=0; int lineas=0;
  while ((c = getchar()) != EOF)
  {
    cant++;
    if (c == '\n'){
        lineas++;
    }
    printf("Ingrese: %d\n",c);
  }
  printf("Cantidad de caracteres ingresados: %d",cant);
  printf("Cantidad de lineas ingresados: %d",lineas);
  return 0;
  }
