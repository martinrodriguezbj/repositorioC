#include <stdio.h>

int dig(char car){
  int res;
  if (isdigit(car)){
    res=0;
  }else{
    res=1;
  }
  return res;
}

int main(){
    int n1;
    printf("Si es un digito devuelve 0, si no devuelve 1: %i",dig('n'));
    scanf("%i",&n1);
}
