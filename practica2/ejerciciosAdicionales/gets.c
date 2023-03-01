#include <stdio.h>
int main(){
        int x = 1300;
        char buffer[10]; //si se ingresan mas caracteres que 10, el programa termina de manera inesperada
        printf("x = %d\n", x);
        printf("Ingresa por teclado: \"hola\"\n");
        fgets(buffer,10,stdin);
        printf("%s\n",buffer);
        printf("x = %d\n", x);
        return 0;
}
