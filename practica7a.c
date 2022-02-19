#include<stdio.h>
#include<ctype.h>
//CT
int main()
{

	int lim;
	int pos = 0;

	printf("=========================================\n\n");
	printf("¡Hola! Este programa convierte\nlas minúsculas en mayúsculas\n\n");
	printf("Ingresa el número máximo del arreglo:\n");
	scanf("%d", &lim);
	printf("\nIngresa una frase o palabra\npara empezar la conversión:\n\n");

	char frase[lim];
	char c = getchar();	


		while((c=getchar()) !='\n' && pos<lim){
			frase[pos] = c;		
			putchar(toupper(frase[pos]));
			pos++;
			}

	printf("\n\n=========================================\n\n");

	

return 0;
}
