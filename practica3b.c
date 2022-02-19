#include <stdio.h>
//CT

int main()
{
	long l;
	short s;
	signed S;
	unsigned u;
	
	printf("===========================================\n\n");
	printf("¡Hola! Este programa te muestra la memoria\nusada por diferentes tipos de datos:\n\n");

	printf("long usa: %lu bytes en la memooria\n", sizeof(long));
	printf("short usa: %lu bytes en la memoria\n", sizeof(short));
	printf("signed usa: %lu bytes en la memoria\n", sizeof(signed));
	printf("unsigned usa: %lu bytes en la memoria\n", sizeof(unsigned));

	printf("\n===========================================\n\n");
	
    	return 0;
}

