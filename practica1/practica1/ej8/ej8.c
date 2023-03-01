#include <stdio.h>

int suma(int num){
  int suma=0;
  for (int i=0;i<=num;i++){
     suma=suma+i;
  }
  return suma;
}

int main(){
    int n1;
    printf("La suma es: %i",suma(10));
    scanf("%i",&n1);
}