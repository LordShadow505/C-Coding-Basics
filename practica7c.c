#include<math.h>
#include<stdio.h>
//CT

//FUNCIONES
  void potencia(void);
  void factorial(void);
  void fibonacci(void);
  void parentesis(void);
  int opc, i;

	        //MENU
	        int main(){
	        i=5;
	        while(i<=5){
		printf("=======================================\n");
		printf("     CALCULADORA MAESTRA V2        ");
		printf("\n\nola! Este programa puede ejecutar las siguientes opciones:\n\n");

		printf("1.Calcular una potencia\n");
		printf("2.Calcular un factorial\n");
		printf("3.Mostar la Sucesi贸n De Fibonacci\n");
		printf("4.Anidar par茅ntesis\n");
		printf("5.Salir\n\n");

		printf("Selecciona un n煤mero de la lista anterior para proceder:\n");
		scanf("%d", &opc);
			
			switch(opc){

				case 1:
				printf("\nEjecutando opci贸n 1...\n\n\n\n\n\n");
				potencia();	
				break;	
				case 2:
				printf("\nEjecutando opci贸n 2...\n\n\n\n\n\n");
				factorial();
				break;	
				case 3:
				printf("\nEjecutando opci贸n 3...\n\n\n\n\n\n");
				fibonacci();	
				break;		
				case 4:
				printf("\nEjecutando opci贸n 4...\n\n\n\n\n\n");
				parentesis();	
				break;	
				case 5:
				printf("\nEjecutando opci贸n 5...\n\n\n\n\n\n");
				printf("\n隆Que tenga un buen d铆a c:!\n\n");
				printf("=======================================\n\n");
				i=6;	
				break;
				default:
				printf("Por favor, selecciona una opci贸n:\n");
				getchar();
				break;	
				}
	}
}

void potencia(void){
	int x, y;
	printf("-------------------------------------------\n");
	printf("Calculadora de potencias:\n\n");
	printf("\nIngresa un n煤mero y la potencia a calcular:\n");
	scanf("%d %d", &x, &y);
	double res = pow(x, y);
	printf("= %f\n", res);
	printf("-------------------------------------------");
	printf("\n\nRegresando al men煤...\n\n");
}
void factorial(void){
	int x, y;
	int f=1;
	printf("-------------------------------------------\n");
	printf("Calculadora de factoriales:\n\n");
	printf("\nIngresa un n煤mero:\n");
	scanf("%d", &x);

	for (y = x; y >1; y--){
	f = f*y;
	}

	printf("= %d\n\n", f);
	printf("-------------------------------------------");
	printf("\n\nRegresando al men煤...\n\n");
}
void fibonacci(void){
	double x = 1, y = 0, i;
	int lim;
	printf("-------------------------------------------\n");
	printf("Mostrar Serie de Fibonacci:\n\n");
	printf("Ingresa cu谩ntas sucesiones mostrar:\n");
	printf("Nota: Se muestra el doble ingresado\n");
	scanf("%d", &lim);
	printf("\n");
	for(i = 0; i < lim; i++){
		printf("%f\n", y);
		printf("%f\n", x);
		y = y + x;
		x = x + y;
	}
}
void parentesis(void){
	int x;
	int i;	
	printf("-------------------------------------------\n");
	printf("Anidadora de par茅ntesis:\n\n");
	printf("\nIngresa el n煤mero a anidar:\n");
	scanf("%d", &x);
	printf("Resultado:\n");
	for(i = 0; i < x; i++){
		printf("( ");
	}
	for(i = 0; i < x; i++){
		printf(") ");
	}
	putchar('\n');
	printf("-------------------------------------------");
	printf("\n\nRegresando al men煤...\n\n");
}
