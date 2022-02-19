#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
//CT

int main()
{
	char archivo;
	FILE *i;
	i = fopen("HolaMundo.txt", "r+");

		printf("Hola Mundo\n");
		while( (archivo = fgetc(i)) != EOF ){
			printf("%c", toupper(archivo));
		}
	
		fclose(i);
		return 0;
}
