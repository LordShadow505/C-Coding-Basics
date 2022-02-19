#include<stdio.h>

int main() 
{
	int a, b, c;

	printf("================================================\n\n");
	printf("¡Hola! Este programa compara 3 números\n\n");
	printf("Ingresa 3 números:\n");
	scanf("%d %d %d.", &a ,&b, &c);
	
	putchar('\n');	

	if (a>b){
 		if(b>c){
 		printf("%d Mayor que %d Mayor que %d",a ,b ,c);
 		}		
  	}
 	if(a>c){
 		if(c>b){
 		printf("%d Mayor que %d Mayor que %d",a,c,b);
  		}
   	}
 	if(c>a){
 		if(a>b){
 		printf("%d Mayor que %d Mayor que %d",c,a,b);
 		}
  	}
 	if(c>b){
 		if(b>a){
 		printf("%d Mayor que %d Mayor que %d",c,b,a);
 		}
   	}	
 	if(b>a){
 		if(a>c){
 		printf("%d Mayor que %d Mayor que %d",b,a,c);
 		}
   	}
 	if(b>c){
 		if(c>a){
 		printf("%d Mayor que %d Mayor que %d",b,c,a);
 		}
   	}
 	if(a>b){
 	 	if(b==c){
 		printf("%d Mayor que %d Igual que %d",a,b,c);
		}
   	}
 	if(c>a){
 		if(a==b){
 		printf("%d Menor que %d Igual que %d",c,a,b);
 		}	
   	}
 	if(a==b){
 		if(b>c){
 		printf("%d Igual que %d Mayor que %d",a,b,c);
 		}
   	}
  	if(b==c){
  		if(c>a){
 		printf("%d Igual que %d Mayor que %d",b,c,a);
 		}
    	}
 	if(b>a){
 		if(a==c){
 		printf("%d Mayor que %d Igual que %d",b,a,c);
 		}
   	}
 	if(a==c){
 		if(c>b){
 		printf("%d Igual que %d Mayor que %d",a,c,b);
 		}
   	}
 	if(a==b){
 		if(b==c){
 		printf("%d Igual que %d Igual que %d",a,b,c);
 		}
   	}


	printf("\n\n================================================\n\n");

	return 0;
}
 
