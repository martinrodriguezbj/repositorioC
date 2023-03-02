#include <stdio.h>
#include <stdlib.h>
/*
Probar con distintas entradas, por ejemplo:
queso 1
2\n5
5 (EOF)
64\n(EOF)
En Linux EOF es Ctrl+D y en Windows es Ctrl+Z
*/
void error_de_lectura(int codigo){
    int caracter;
    if (codigo == EOF){
        puts("Se alcanzo fin de archivo");
    exit(1);
    }
    else{
        puts("Error de conversion, limpiando buffer...");
    do {
        caracter = getchar();
        } while (caracter != EOF && caracter != '\n');
    }
}

int main(int argc, char *argv[]){
    int n1, n2 , c;
    int leidos;
    for (int i = 0; i < 10; i++){
        printf("Ingrese 2 numeros: ");
        if ((leidos = scanf(" %d %d", &n1, &n2)) != 2){
			printf("leido: %d",leidos);
            error_de_lectura(leidos);
            continue;
        }
    printf(" %d + %d = %d\n", n1, n2, n1 + n2);
    }
    return 0;
}
