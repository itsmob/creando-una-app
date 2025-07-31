// Scope - a y b cambiaran debido al scope
#include <stdio.h>

// Prototipo de funcione
void cambiar();

int a = 10;
int b = 20;

int main(void)
{
    printf("a: %d y b: %d\n", a, b);

    cambiar();

    printf("a: %d y b: %d\n", a, b);

    return 0; // Fin del programa. Todo salió bien
}

// Definición de cambiar()
void cambiar()
{
    int temporal;
    temporal = a;
    a = b;
    b = temporal;
}