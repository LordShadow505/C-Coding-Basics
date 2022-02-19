#include <stdio.h>
//CT

int main()
{
	int arreglo[5][8];                 
	int i=0,j=0,s1=0,ValorMen=0;
  	float prom=0;
  	int ValorMayC=0,cmpx=0,cmpy=0,cmgx=0,cmgy=0,ValorMayorA=0,ValorMenorA=0;
  	
	printf("===========================================================\n\n");
	printf("¡Hola! Este programa almacena valores en un arreglo de 5 x 8\nY ejecuta operaciones en ellos\n\n");


	printf("Ingresa los números para almacenar:\n");
  
  		for(i=0;i<5;i++){
  		  for(j=0;j<8;j++){
      			printf("Ingresa un número para (%d,%d): ",i,j);
      			scanf("%d",&arreglo[i][j]);

      			if(arreglo[i][j]>ValorMayorA){
        		ValorMayorA=arreglo[i][j];
        		cmgx=i;
        		cmgy=j;
      			}
			
      			else if(arreglo[i][j]<ValorMenorA){
        		ValorMayorA=arreglo[i][j];
        		cmpx=i;
        		cmpy=j;
      			}

     			if(ValorMenorA==0)
        		ValorMenorA=arreglo[i][j];

    			if(ValorMayorA==0)
      			ValorMayorA=arreglo[i][j];
    			}
  		}


  	printf("\n\nEl número menor es: (%d,%d) = %d\n",cmpx,cmpy,arreglo[cmpx][cmpy]);
  	printf("El número mayor es: (%d,%d) = %d\n",cmgx,cmgy,arreglo[cmgx][cmgy]);
  	
	putchar('\n');

 		for(i=0;i<5;i++){
    			for(j=0;j<8;j++){
    			if(arreglo[i][j]<ValorMen||ValorMen==0)
        		ValorMen=arreglo[i][j];
      			s1+=arreglo[i][j];
      

   			 }
    	   		 printf("Suma de renglón %d = %d, el valor menor es: %d\n",i,s1,ValorMen);
    			 s1=0; 
    			 ValorMen=0;
  			 }

	putchar('\n');
  
  		for(i=0;i<8;i++){
    			for(j=0;j<5;j++){
      			prom+=arreglo[j][i];
      			if(arreglo[j][i]>ValorMayC||ValorMayC==0)
        		ValorMayC=arreglo[j][i];
    			}
    			printf("Promedio de la columna %d = %.2f, el valor mayor es: %d\n",i,prom/5,ValorMayC);
    			ValorMayC=0;
    			s1=0;
			}


	printf("\n\n===========================================================\n\n");
	

  return 0;
}
