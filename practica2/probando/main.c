#include <stdio.h>
#include <ctype.h>
int main()
{
  int c;
  int mayus=0; int minus=0; int dig=0; int otros=0;
  while ((c=getchar())!=EOF){
	  if(isupper(c)){
		mayus++;
	  }else if(islower(c)){
			  minus++;
			}else if(isdigit(c)){
					dig++;
					}else{
						otros++;
					}
	}

  if ((mayus+minus+dig+otros)==0){
	fprintf(stderr,"no data.\n");
  }else{
	  printf("Mayus:%d\n",mayus);
	  printf("Minus:%d\n",minus);
	  printf("digitos:%d\n",dig);
	  printf("otros:%d\n",otros);
	}

}
