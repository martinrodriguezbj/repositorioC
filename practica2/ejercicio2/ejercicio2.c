#include <stdio.h>

int esEof(int c){
  return(c != EOF);
}

int main()
{
  int c;
  c = getchar();
  printf("Retorna: %d",esEof(c));
  return 0;
  }
