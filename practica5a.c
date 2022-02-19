#include <stdio.h>
//CT

int main()
{
	int a;
	char b;
	float c;
	double d;
	
	printf("============================================\n\n");
	printf("¡Hola! Este programa te muestra la memoria\nusada por diferentes tipos de datos:\n\n");

	printf("int usa: %lu bytes en la memoria\n", sizeof(int));
	printf("char usa: %lu bytes en la memoria\n", sizeof(char));
	printf("float usa: %lu bytes en la memoria\n", sizeof(float));
	printf("double usa: %lu bytes en la memoria\n", sizeof(double));

	printf("\n============================================\n\n");

	return 0;
}
