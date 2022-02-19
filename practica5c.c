#include <stdio.h>
//CT

int main(){

	float estatura;

	printf("==============================================\n\n");
	printf("¡Hola! Este programa determina si alguien\ntiene la estatura indicada para entrar a un juego\n");

	printf("La estatura mínima para entrar a este\njuego es de 1.5 metros\n\n");
   	printf("¿Cuál es tu estatura?:\n ");
   	scanf("%f", &estatura);
	
		if(estatura>=1.5)
		printf("\n¡Felicidades! Puedes subir al juego\n");
		else {
		printf("\nLo sentimos, no puedes subir al juego\n");
		}

	printf("\n==============================================\n\n");
	return 0;
}
