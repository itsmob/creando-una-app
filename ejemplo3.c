// Valores Binarios
#include <stdio.h>
#include <stdint.h>

int main()
{
    // Declaración e inicialización de una variable tipo uint8_t (entero sin signo de 8 bits)
    // 0b01000001 es la representación binaria del número 65, que en la tabla ASCII corresponde a la letra 'A'
    uint8_t byte_1 = 0b01000001;

    // ----------------------------
    // Imprimir el byte como número
    // ----------------------------
    // %d interpreta el byte como número decimal
    printf("Imprimir byte como si fuese un número: %d\n", byte_1);

    // ----------------------------
    // Imprimir el byte como carácter
    // ----------------------------
    // %c interpreta el byte como un carácter ASCII
    printf("Imprimir byte como si fuese un carácter: %c\n", byte_1);

    return 0; // Fin del programa. Todo salió bien
}