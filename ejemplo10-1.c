// Scope - a y b no cambiarán debido al alcance de las variables
#include <stdio.h>

// Prototipo de función
void cambiar(int a, int b);

int main(void)
{
    int a = 10;
    int b = 20;

    // Imprimir valores antes de llamar a la función
    printf("a: %d y b: %d\n", a, b);

    // Pasamos el valor 'a' y 'b' (no sus direcciones)
    cambiar(a, b);

    // Imprimir valores después: no cambian
    printf("a: %d y b: %d\n", a, b);

    return 0;
}

// Intenta cambiar a y b, pero solo modifica copias locales
void cambiar(int a, int b)
{
    printf("Dentro de cambiar() a: %d y b: %d (antes del cambio)\n", a, b);

    int temporal = a;
    a = b;
    b = temporal;

    printf("Dentro de cambiar() a: %d y b: %d (después del cambio)\n", a, b);
}