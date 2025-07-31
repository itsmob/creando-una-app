// Averiguar cuánto espacio en la memoria reserva cada tipo de variable
#include <stdio.h>

int main()
{
    // sizeof() devuelve el tamaño en bytes que ocupa cada tipo de dato

    printf("Tamaño de char:   %d byte(s)\n", sizeof(char));
    printf("Tamaño de int:    %d byte(s)\n", sizeof(int));
    printf("Tamaño de float:  %d byte(s)\n", sizeof(float));
    printf("Tamaño de double: %d byte(s)\n", sizeof(double)); // Bonus: incluir double

    return 0; // Fin del programa. Todo salió bien
}