#include<stdio.h>
//CT

int main() 
{
	char opc;

	printf("=====================================================\n\n");
	printf("¡Hola! Este programa determina si un carácter es\nnúmero, vocal, consonante o carácter especial\n\n");
	printf("Ingresa un carácter:\n");
	opc=getchar();
	switch(opc){

		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':

		printf("El carácter es un número");
		break;

		case 'b':
		case 'c':
		case 'd':
		case 'f':
		case 'g':
		case 'h':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z':
		case 'B':
		case 'C':
		case 'D':
		case 'F':
		case 'G':
		case 'H':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':

		printf("El carácter es una consonante");
		break;

		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':

		printf("El carácter es una vocal");
		break;

		case ':':
		case ';':
		case '.':
		case ',':
		case '"':
		case '*':
		case '(':
		case ')':
		case '[':
		case ']':
		case '-':
		case '!':
		case '?':

		printf("El carácter es un signo de puntuación");
		break;

		default:
		printf("El carácter es un símbolo especial");

		}
	
	printf("\n\n=====================================================\n\n");

	return 0;
}


