#include <stdio.h>
#include <string.h>

int es_palindromo(char *p){
	int tam=strlen(p)-1;
	for (int i=0,j=tam;i<=j;i++,j--){
		if (p[i]!=p[j])
			return 0;
		}
	return 1;
}

char* encripto(char *dest,const char *src){
	int i;
	for (i=0;src[i]!='\0';i++){
		dest[i]=~src[i];
	}
	dest[i]='\0';
	return dest; 
}

int main(){
  char *palabra="neuquen";
  if(es_palindromo(palabra))
	printf("Es palindromo");
	else
		printf("No es palindromo");
		
  char dest[50];
  const char *src="Buen dia";
  encripto(dest,src);
  
  for(int i=0;dest[i]!='\0';i++)
	printf("%d",dest[i]);
}
