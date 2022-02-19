#include <stdio.h>
//CT

int main()
{
	int edad, f;

	printf("=======================================================\n\n");
	printf("¡Hola! este programa determina si puedes entrar aquí\n");

    	printf("Ingrese tu edad:\n");
   	scanf("%d", &edad);

		f = 18 - edad;
	
		if(edad >= 18){
		printf("\nPuedes pasar, eres mayor de edad\n");
		}
		else{
    		printf("\nNo puedes pasar, eres menor de edad, te faltan %d años\n", f);
	 	}
	
	
	printf("\n=======================================================\n\n");

	 return 0;
}
