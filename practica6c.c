#include<stdio.h>
//CT

int main ()
{ 
	int n ,opc;
	int i=4;
 	while (i<=4){
	printf("=======================================\n");
	printf("¡Hola! Este programa muestra las siguientes opciones:\n\n");
  	printf ("1.Opción 1\n");
  	printf ("2.Opción 2\n");
	printf ("3.Opción 3\n");
  	printf ("4.Salir\n\n");

   	printf("Selecciona un número de la lista anterior para proceder:\n");
  	scanf ("%d", &opc);
  	
		switch (opc){
  	
  			case 1:
			printf("\nEjecutando opción 1...\n\n\n\n\n\n");    
    			break;
   
			case 2:
			printf("\nEjecutando opción 2...\n\n\n\n\n\n");
    			break; 
   
			case 3:
			printf("\nEjecutando opción 3...\n\n\n\n\n\n");
    			break;
   
			case 4:
			printf("\nEjecutando opción 4...\n\n\n\n\n\n");
   			printf("\n¡Que tenga un buen día c:!\n\n");
			printf("=======================================\n\n");
			i=5;
   			break;
   			default:
   			printf("Por favor, selecciona una opción:\n");
   			getchar();
   			break;
  			}
	 }
 	 return 0;
}
