#include "funciones.h" // Usamos el mismo encabezado
#include <stdio.h>

void saludar(void)
{
    printf("Hola!\n");
}

void saludar_por_nombre(char *nombre)
{
    printf("Hola %s!\n", nombre);
}

int sumar(int a, int b)
{
    int resultado = a + b;
    return resultado;
}