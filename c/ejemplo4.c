// Operaciones acordes al tipo de variable
#include <stdio.h>

int main()
{
    // ----------------------------
    // Tipo entero (int)
    // ----------------------------

    // Declaración e inicialización de variables enteras
    int numero_entero_a = 24;
    int numero_entero_b = 6;

    // Operación de suma entre enteros
    int resultado_entero = numero_entero_a + numero_entero_b;

    // Mostrar el resultado en consola
    printf("Suma de enteros: %d + %d = %d\n", numero_entero_a, numero_entero_b, resultado_entero);

    // ----------------------------
    // Mezclar char con int (ejemplo didáctico)
    // ----------------------------

    char letra = 'A'; // En la tabla ASCII, 'A' tiene el valor numérico 65
    int numero = 5;

    // Mostrar el valor de la letra como carácter y como número
    printf("Letra: '%c' - Valor ASCII: %d\n", letra, letra);

    // Sumar la letra (como número) con un entero
    int resultado = letra + numero; // 65 + 5 = 70

    // Mostrar el resultado como número y como carácter
    printf("Resultado de '%c' + %d como número: %d\n", letra, numero, resultado);
    printf("Resultado de '%c' + %d como carácter: %c\n", letra, numero, resultado); // 70 en ASCII es 'F'

    return 0; // Fin del programa. Todo salió bien
}