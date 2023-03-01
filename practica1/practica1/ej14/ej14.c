#include <stdio.h>

int funcion(int num,int num1){
  return ((num < num1)?num:num1);
}

int main(){
    int n1;
    printf("Numero menor: %i",funcion(7,2));
    scanf("%i",&n1);
}