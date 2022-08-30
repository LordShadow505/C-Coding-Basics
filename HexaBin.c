#include <stdio.h>

union Float_Bit
{
    float f;
    int i;
};

int main()
{
    union Float_Bit FBits;
    int i;

    printf("====================================================\n");

    printf("Ingresa un numero decimal: ");
    scanf("%f", &FBits.f);

    printf("\n%f En Hexadecimal binario:\n", FBits.f);

    for (i = 31; i >= 0; i--)
    {

       //Imprimir cada bit
        printf("%d", (FBits.i >> i) & 1);
       
       //Imprimir un espacio cada 4 bits
        if (i % 4 == 0)
            printf(" ");
    }
    printf("\n\n====================================================\n");

    return 0;
}
