#include <stdio.h>
//CT

int main()
	{
	int ordenar;
	int num[10];
	
	printf("===============================================\n\n");
	printf("¡Hola! Este programa ordena números ascendentemente\n\n");
	printf("Ingresa 10 números a ordenar:\n");

	for (int i = 0; i <= 10 ; i++){
  	scanf("%d",&num[i]);
	}

	for (int i = 0 ; i <= 10; i++){
  		for (int j = 0 ; j <= 10 - i - 1; j++){
    			if (num[j] > num[j+1]){ 
      			ordenar = num[j];
      			num[j] = num[j+1];
      			num[j+1] = ordenar;
   			}
  		}	
	}

	printf("Los números en orden ascendente son:\n\n");
	for (int i = 0; i <= 10; i++)
	printf("%d\n", num[i]);


	printf("\n===============================================\n\n");

	return 0;
}
