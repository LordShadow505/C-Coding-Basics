#include<math.h>
#include<stdio.h>
//CT

//FUNCIONES	
  void cuadrado(void);
  void cuadrado(void); //RECTANGULO
  void triangulo(void);
  void rombo(void);
  void circulo(void);
  int opc, i;

		//MENU
		int main(){
		i=6;
		while(i<=6){
		printf("=======================================\n");
		printf("     CALCULADORA MAESTRA V1        ");
		printf("\n\n¡Hola! Este programa puede ejecutar las siguientes opciones:\n\n");

		printf("1.Calcular área y perímetro de un Cuadrado\n");
		printf("2.Calcular área y perímetro de un Rectángulo\n");
		printf("3.Calcular área y perímetro de un Triángulo\n");
		printf("4.Calcular área y perímetro de un Rombo\n");
		printf("5.Calcular área y perímetro de un Círculo\n");
		printf("6.Salir\n\n");

		printf("Selecciona un número de la lista anterior para proceder:\n");
		scanf("%d", &opc);
			
			switch(opc){

				case 1:
				printf("\nEjecutando opción 1...\n\n\n\n\n\n");
				cuadrado();	
				break;	
				case 2:
				printf("\nEjecutando opción 2...\n\n\n\n\n\n");
				cuadrado();	//RECTANGULO
				break;	
				case 3:
				printf("\nEjecutando opción 3...\n\n\n\n\n\n");
				triangulo();	
				break;		
				case 4:
				printf("\nEjecutando opción 4...\n\n\n\n\n\n");
				rombo();	
				break;	
				case 5:
				printf("\nEjecutando opción 5...\n\n\n\n\n\n");
				circulo();	
				break;	
				case 6:
				printf("\nEjecutando opción 6...\n\n");
				printf("\n¡Que tenga un buen día c:!\n\n");
				printf("=======================================\n\n");
				i=7;	
				break;
				default:
				printf("Por favor, selecciona una opción:\n");
				getchar();
				break;	
				}
	}
}

void cuadrado(void){
	int x, y;
	int ar, per;
	printf("-------------------------------------------\n");
	printf("Calculadora de cuadrados y rectángulos:\n\n");
	printf("\nIngresa ancho y alto:\n");
	scanf("%d %d", &x, &y);
	ar = x * y;
	per = x * 2 + y *2;
	printf("El área es: %d\n", ar);
	printf("El perímetro es: %d\n\n", per);
	printf("-------------------------------------------");
	printf("\n\nRegresando al menú...\n\n");
}
void triangulo(void){
	float x, y;
	float ar, per;
	printf("-------------------------------------------\n");
	printf("Calculadora de triángulos:\n\n");
	printf("\nIngresa un lado y altura:\n");
	scanf("%f %f", &x, &y);
	ar = (x * y)/2;
	per = x * 3;
	printf("El área es: %f\n", ar);
	printf("El perímetro es: %f\n\n", per);
	printf("-------------------------------------------");
	printf("\n\nRegresando al menú...\n\n");
}
void rombo(void){
	float x, y, x2, y2;
	float lado;
	float ar;
	float per;
	printf("-------------------------------------------\n");
	printf("Calculadora de rombos:\n\n");
	printf("\nIngresa diagonal 1, diagonal 2:\n");
	scanf("%f %f", &x, &y);
	ar = (x * y)/2;
	x2 = x/2;
	y2 = y/2;
	x2 = x2*x2;
	y2 = y2*y2;
	lado = x2 + y2;
	float lado2 = sqrt(lado);	
	per = lado2*4;
	printf("El área es: %f\n", ar);
	printf("El perímetro es: %f\n\n", per);
	printf("-------------------------------------------");
	printf("\n\nRegresando al menú...\n\n");
}
void circulo(void){
	int x;
	float pi = 3.1415926535;
	float ar, per;
	printf("-------------------------------------------\n");
	printf("Calculadora de círculos:\n\n");
	printf("\nIngresa radio:\n");
	scanf("%d", &x);
	ar = (x*x)*pi;
	per = (2*pi)*(x);
	printf("El área es: %f\n", ar);
	printf("El perímetro es: %f\n\n", per);
	printf("-------------------------------------------");
	printf("\n\nRegresando al menú...\n\n");
}
