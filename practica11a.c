#include <stdio.h>
#include <stdlib.h>
//CT
int main()
{
  	char txt[100], tex, letra;
  	int a = 0, e = 0, i = 0, o = 0, u = 0, z = 0, max;
	FILE *y;
	FILE *p;
  
  	y = fopen ("HolaMundo.txt", "r");
  	p = fopen ("HolaMundo.txt", "r");

  	printf("Hola Mundo\n");
  	while( (tex = fgetc(y)) != EOF ){
                    printf("%c", tex);
             }


  	while ( (txt[z]=getc(p)) != EOF){
    			tex = txt[z];
    			switch (tex){
      				case 'a':
        			a++;
        			break;
      				case 'e':
        			e++;
        			break;
      				case 'i':
        			i++;
        			break;
      				case 'o':
        			o++;
        			break;
      				case 'u':
        			u++;
				break;
    				}
    				z++;
  		}

  		printf("\nTotal de Vocales: %d\n", a + e + i + o + u);

  			max = a;
  			letra = 'a';
  			if(e > max){
  				max = e;
				letra = 'e';
  			}
  			if(i > max){
  				max = i;
				letra = 'i';
  			}
  			if(o > max){
        			max = o;
				letra = 'o';
  			}
  			if(u > max){
        			max = u;
				letra = 'u';
  			}
		printf("La vocal que mas se repite es %c con %d repeticiones\n", letra, max);
  		fclose(p);
  		return 0;
}
