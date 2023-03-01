#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define T_INT 1
#define T_FLOAT 2
#define T_STR 3
 
union T_union{
    int ival;
    float fval;
    char *sval;
};
 
 
int main() {
    union T_union valor;
    int opcion;
    char cadena_aux[1024];
 
    scanf("%d", &opcion);
    switch (opcion) {
        case T_INT:
            scanf("%d", &(valor.ival));
            break;
        case T_FLOAT:
            scanf("%f", &(valor.fval));
            break;
        case T_STR:
            fgets(cadena_aux, 1024, stdin);
            valor.sval = malloc(strlen(cadena_aux) + 1);
            strcpy(valor.sval, cadena_aux);
            break;
    }
    
    switch (opcion){
		case T_INT:
			printf("%d",valor.ival);
			break;
		case T_FLOAT:
			printf("%f",valor.fval);
			break;
		case T_STR:
			printf("%S",valor.sval);
			break;
		}
 
    
    if (opcion == T_STR) free(valor.sval);
 
 
}
