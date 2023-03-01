#include <stdio.h>
#include <string.h>
char* my_strcat(char *dest,const char *src){
	int i=strlen(dest)c;
	for (int j=0;src[j]!='\0';j++){
		dest[i]=src[j];
		i++;
		}
		dest[i]='\0';
	return dest;
}

int my_strlen(char *dest){
	int cant=0;
	for (int i=0;dest[i]!='\0';i++)
		cant++;
	return cant;
	}

int my_strcmp(char *dest,char *src){
	
}

char* my_strcpy(char *dest,const char *src){
	int i;
	for(i=0;src[i]!='\0';i++)
		dest[i]=src[i];
	dest[i]='\0';
	return dest;
}

int main(){
	char dest[20]="todo bien";
	const char *src="Hola que tal";
	//my_strcat(dest,src);
	
	printf("%s\n",dest);
	
	//printf("Longitud: %d",my_strlen(dest));
	
	my_strcpy(dest,src);
	printf("Imprimo strcpy");
	for (int i=0;dest[i]!='\0';i++)
	printf("%c",dest[i]);
	*/
	
}
