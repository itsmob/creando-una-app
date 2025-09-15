// Pasar valores por referencia
#include <stdio.h>

// Prototipo de función
void cambiar(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x: %d, y: %d\n", x, y);
    cambiar(&x, &y);
    printf("x: %d, y: %d\n", x, y);

    return 0;
}

// cambiar() modifica los valores originales usando punteros
void cambiar(int *a, int *b)
{
    int temporal = *a;
    *a = *b;
    *b = temporal;
}