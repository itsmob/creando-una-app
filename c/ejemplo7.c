// Pointer = Punteros (Referencias)
#include <stdio.h>

int main()
{
    // ----------------------------
    // Declaración e inicialización
    // ----------------------------
    int numero = 25;

    // Mostrar el valor de la variable
    printf("El valor de 'numero' es: %d\n", numero);

    // Mostrar la dirección de memoria de la variable
    printf("La dirección en memoria de 'numero' es: 0x%p\n", &numero);

    // ----------------------------
    // Usar un puntero
    // ----------------------------

    // Declarar un puntero que apunta a la dirección de 'numero'
    int *p_numero = &numero;

    // Cambiar el valor de 'numero'
    numero = 26;

    // Mostrar el nuevo valor y la misma dirección
    printf("El nuevo valor de 'numero' es: %d\n", numero);
    printf("La dirección (guardada en el puntero) sigue siendo: %p\n", p_numero);

    // Usar el puntero para acceder al valor
    printf("Valor accedido desde el puntero: %d\n", *p_numero); // Se usa * para desreferenciar

    return 0; // Fin del programa. Todo salió bien
}