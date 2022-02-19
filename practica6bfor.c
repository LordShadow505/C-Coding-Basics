#include <stdio.h>
//LS

int main()
{

  	int i, num, lim;
    
	printf("========================================================\n\n");
	printf("                 TABLAS DE MULTIPLICAR   	          \n\n");
	printf("¡Hola! Este programa calcula las tablas de multiplicar\n");

        printf("\nIngresa el número a calcular:\n");
	scanf("%d",&num);
	printf("\nIngresa el número de veces a multiplicar:\n");
	scanf("%d",&lim);
	putchar('\n');

        for (i = 1;i<=lim;i++){
        printf("%d x %d = %d\n", num, i, num*i);   
	}

	printf("\n\n========================================================\n\n");

   	return 0;
}
