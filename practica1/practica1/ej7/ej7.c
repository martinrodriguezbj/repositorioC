#include <stdio.h>

float div(int unsigned num, int unsigned num2){
  float res=0;
  if (num>num2){
     res=num/num2;
  }else{
      res=num2/num;
  }
  return res;
}

int main(){
    int n1;
    printf("El resultado de la division es %f",div(10,5));
    scanf("%i",&n1);
}