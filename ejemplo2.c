// Mostrar variables en la consola
#include <stdio.h>

int main()
{
    // ----------------------------
    // Variable tipo entero (int)
    // ----------------------------

    // Declaración e inicialización de una variable tipo int
    int numero_x = 10;

    // Mostrar el contenido de numero_x en la consola
    // %d se usa para imprimir valores enteros
    printf("El valor de la variable numero_x: %d\n", numero_x);

    // ----------------------------
    // Variables tipo carácter (char)
    // ----------------------------

    // Declaración e inicialización de variables tipo char
    char letra_h = 'H';
    char letra_o = 'o';
    char letra_l = 'l';
    char letra_a = 'a';

    // Mostrar el contenido de las variables en la consola
    // %c se usa para imprimir caracteres individuales
    printf("Usando variables: %c%c%c%c\n", letra_h, letra_o, letra_l, letra_a);

    // También se puede imprimir texto directamente
    printf("Usando texto directo: Hola\n");

    return 0; // Fin del programa. Todo salió bien
}