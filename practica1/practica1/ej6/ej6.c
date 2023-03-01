#include <stdio.h>

char fun(int num){
  return num;
}

int main(){
    int n1;
    printf("Envio un 65 y retorna: %c",fun(65));
    scanf("%i",&n1);
    return 0;
}
