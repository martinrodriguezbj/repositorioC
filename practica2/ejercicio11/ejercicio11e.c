#include <stdio.h>
int main()
{
  int res, dia, mes, anio,c;
  do {
	printf("Ingresar fecha\n");
    res = scanf(" %2d/%2d/%4d", &dia, &mes, &anio);
    printf("scanf retorno %i\n", res); 
    if (res != EOF) {
      if (res != 3) {
	
        printf("ERROR: El formato debe ser dd/mm/yyyy\n");
        while((c=getchar())!='\n' && c!=EOF);
    }  else {
        printf("Fecha: %d/ %d/ %d\n", dia, mes, anio);
        while((c=getchar())!='\n' && c!=EOF);
        }
    }
    //printf("Imprimo res: %d",res);
  } while (res != EOF);
  return 0;
}
