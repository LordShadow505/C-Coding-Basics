#include <stdio.h> 
//CT

int main()
{
	int num;
	
	printf("====================================\n\n");
	printf("¡Hola! Este programa determina si un\nnumero es igual, mayor o menor que 0\n");
		
  	printf("Introduce un numero:\n");
	scanf("%d", &num);
	
	if(num == 0){
		printf("\n%d es igual a 0\n", num);
		}
	else if(num > 0){
		printf("\n%d es mayor que 0\n", num);
		}
	else{
		printf("\n%d es menor que 0\n", num);
		}

	printf("\n====================================\n\n");
  return 0;
}
