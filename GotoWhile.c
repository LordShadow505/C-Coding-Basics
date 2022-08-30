#include <stdio.h>

int main(){

int num,lim,i;

printf("====================================================\n");
printf("       TABLAS DE MULTIPLICAR DIABOLICAS           \n\n");

	printf("Ingresa un numero: ");
	scanf("%d",&num);
	printf("Ingresa el limite: ");
	scanf("%d",&i);
    printf("\n");

    lim=1;

WhileFalso:
     
    if(lim<=i)
    printf("%d x %d = %d\n",num,lim,num*lim);
    lim++;
    
    //Si llega al limite, termina
    if(lim>i){
        
        goto Fin;
    }
    //Regresa a WhileFalso
    goto WhileFalso;

Fin:  
    printf("====================================================\n");  

    return 0;
}
