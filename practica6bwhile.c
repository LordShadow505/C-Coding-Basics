#include <stdio.h>
//LS

int main()
{
	int num,lim,i;

	printf("========================================================\n\n");
	printf("                 TABLAS DE MULTIPLICAR   	          \n\n");
	printf("¡Hola! Este programa calcula las tablas de multiplicar\n");

	printf("\nIngresa el número a calcular:\n");
	scanf("%d",&num);
	printf("\nIngresa el número de veces a multiplicar:\n");
	scanf("%d",&i);
	putchar('\n');
	lim=1;

	while (lim<=i){
	printf("%d x %d = %d\n",num,lim,num*lim);
	lim++;
	}

	printf("\n\n========================================================\n\n");

	return 0;
}
