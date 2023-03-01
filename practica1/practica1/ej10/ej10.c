#include <stdio.h>

char funcion(char car){
  char res;
  if (car>96 && car<123){ //tambien podria hacer if (islower(car))
    res='m';
  }else{
    res='M';
  }
  return res;
}

int main(){
    int n1;
    printf("Si es minuscula devuelve m, si no devuelve M: %c",funcion('m'));
    scanf("%i",&n1);
}
