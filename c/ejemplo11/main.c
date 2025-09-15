// Modularizacion
#include <stdio.h>
#include "funciones.h" // Incluimos las funciones que declaramos

int main(void)
{
    saludar();

    saludar_por_nombre("Gilberto");

    printf("La suma de 10 + 20 es: %d\n", sumar(10, 20));

    return 0;
}