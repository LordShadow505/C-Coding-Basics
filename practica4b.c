#include<stdio.h>
//CT
int main()
{
 	char caracter;
	int num;
	//char frase;

	printf("Ingrese un caracter: \n");
	caracter=getchar();
	
	printf("Ingrese un número: \n");
	scanf("%d", &num);


	//printf("Ingrese una frase: \n");
	//gets(frase); gets me da error en el compilador de gcc, pero asi se usaria.

	printf("Caracter: %c \n",caracter);
	printf("Número: %d \n",num);
	//printf("Frase: %c", frase);
 return 0;
}
