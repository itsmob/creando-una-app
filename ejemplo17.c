// Overflow = Desbordamiento
#include <stdio.h>

int main(void)
{
    // Valor máximo de un unsigned char: 255 (8 bits en 1s)
    unsigned char x = 0b11111111;

    printf("%d\n", x); // Imprime 255

    x++; // Desborda: pasa de 255 a 0

    printf("%d\n", x); // Imprime 0

    return 0;
}