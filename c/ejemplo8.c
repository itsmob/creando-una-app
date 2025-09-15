// Arrays (Estructuras de datos)
#include <stdio.h>

int main()
{
    // Declaración de un array de 4 enteros
    int edades[4];

    // Asignación de valores a cada posición del array
    edades[0] = 25;
    edades[1] = 22;
    edades[2] = 24;
    edades[3] = 23;

    // Mostrar los valores almacenados en el array
    printf("Las edades de los estudiantes son: %d, %d, %d, %d.\n", edades[0], edades[1], edades[2], edades[3]);

    // Mostrar las direcciones de memoria
    printf("0x%p es la dirección del array\n", edades);
    printf("0x%p es la dirección del primer elemento del array\n", &edades[0]);
    printf("0x%p es la dirección del segundo elemento del array\n", &edades[1]);
    printf("0x%p es la dirección del tercer elemento del array\n", &edades[2]);
    printf("0x%p es la dirección del cuarto elemento del array\n", &edades[3]);

    return 0; // Fin del programa. Todo salió bien
}