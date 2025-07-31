// Operaciones con float y combinación de tipos (casting)
#include <stdio.h>

int main()
{
    // ----------------------------
    // Tipo float (número decimal)
    // ----------------------------

    // Declaración e inicialización de variables
    float precio_unitario = 19.99; // Precio con decimales
    int cantidad = 3;              // Cantidad sin decimales (entero)

    // Cálculo del total
    // Aquí usamos "casting" para convertir el entero a float
    // Así evitamos perder precisión al sumar un float con un int
    float total = precio_unitario * (float)cantidad;

    // Mostrar el resultado con dos decimales
    printf("Total a pagar: %.2f\n", total);

    return 0; // Fin del programa. Todo salió bien
}