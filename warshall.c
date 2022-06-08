#include <stdio.h>

//======================================================================

//  Scarlett Michel Ramirez Pureco
//  Carlos Alberto Tavera Arteaga

//  Algoritmo de Warshall

//======================================================================

int main()
{
    int m, i, j, k;

    printf("=====================================================\n");
    printf("Ingrese el numero de vertices: ");
    scanf("%d", &m);
    long A[m][m], P[m][m];

//--------------------------------------------------------------------------
  
//Relacion de la matriz.    

    printf("Ingresar la matriz de %d x %d:\n", m, m);
    
    printf("*Rellene la matriz de izquierda a derecha, fila por fila.*\n");

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < m; j++)
            {
                scanf("%ld", &A[i][j]);
                if (A[i][j] != 0)
                    P[i][j] = 1;
                else
                    P[i][j] = 0;
            }
        }

//--------------------------------------------------------------------------

//Muestra la relacion de la matriz. 
 

    printf("\nRelacion de la matriz: \n");   

	for(i = 0;i < m; i++)
	{
		for(j = 0;j < m; j++)
		{
			printf("%ld ", P[i][j]);
			
		}
		printf("\n");
	}

//--------------------------------------------------------------------------

//Algoritmo de Warshall.- Es un método eficiente para calcular el cierre transitivo de una relación.

//Se basa en la construcción de una secuencia de matrices cero-uno.


    printf("\n");

        for (k = 0; k < m; k++)
        {
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < m; j++)
                {
                    P[i][j] = P[i][j] + P[i][k] * P[k][j];
                    if (P[i][j] != 0)
                        P[i][j] = 1;
                }
            }
        }
        
//--------------------------------------------------------------------------
        
//Cierre transitivo. 
       
    printf("La matriz de adyacencia es: \n");

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < m; j++)
            {
                printf("%ld ", P[i][j]);
            }
            printf("\n");
        }

//--------------------------------------------------------------------------

//Parejas de la relacion. 


    printf("\n");
    printf("Parejas de la relacion: \n");

        for (i = 0; i < m; i++)
        {
            
            for (j = 0; j < m; j++)
            {
                if (P[i][j] == 1)
                    printf("Pareja: (%d,%d)\n", i+1, j+1);
                    
            }
        }

//--------------------------------------------------------------------------

//COMPARACION DE MATRICES. SI ES TRANSITIVA O NO.

//Se compara la matriz introducida con la matriz adyacente.

//En caso de ser iguales, la matriz sera transitiva de lo contrario seria un cierre transitivo.


 
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (P[i][j] != A[i][j])
            {
                printf("\nLa matriz no es transitiva.\n");
                 printf("\n=====================================================\n");
                return 0;
            }
        }
    }

    printf("\nLa matriz es transitiva.\n");
    printf("\n=====================================================\n");
    return 0;
}

//--------------------------------------------------------------------------

//0 1 1
//0 0 0
//0 1 0
