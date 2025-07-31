// Pasar valores por referencia
#include <stdio.h>

// Prototipo de función
void cambiar(int *a, int *b);

int main(void)
{
    int a = 10;
    int b = 20;

    // Mostrar valores antes del cambio
    printf("Dentro de main() a: %d y b: %d (antes del cambio)\n", a, b);

    // Pasamos las direcciones (referencias)
    cambiar(&a, &b);

    // Mostrar valores después del cambio
    printf("Dentro de main() a: %d y b: %d (despues del cambio)\n", a, b);

    return 0; // Fin del programa. Todo salió bien
}

// cambiar() modifica los valores originales usando punteros
void cambiar(int *a, int *b)
{
    printf("Dentro de cambiar() a: %d y b: %d (antes del cambio)\n", *a, *b);

    int temporal = *a;
    *a = *b;
    *b = temporal;

    printf("Dentro de cambiar() a: %d y b: %d (despues del cambio)\n", *a, *b);
}