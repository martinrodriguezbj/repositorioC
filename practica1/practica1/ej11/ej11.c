#include <stdio.h>
#include <ctype.h>

char funcion(char car){
  char res;
  if (isupper(car)){
    car=car+32;
    res=car;
  }else{
    res=car;
  }
  return res;
}

int main(){
    int n1;
    printf("Retorna: %c",funcion('f'));
    scanf("%i",&n1);
}
