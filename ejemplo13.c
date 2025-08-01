// Estructuras de control (cíclicas): for y while
#include <stdio.h>

int main(void)
{
    // for: se ejecuta 3 veces
    for (int i = 1; i <= 3; i = i + 1)
    {
        printf("Hola %d\n", i);
    }
    printf("\n");

    // while: se repite mientras "estoy_cocinando" sea mayor que 0
    int estoy_cocinando = 3;

    printf("Haré otra cosa mientras cocino\n");
    while (estoy_cocinando > 0)
    {
        printf("Estoy revisando el correo...\n");
        estoy_cocinando = estoy_cocinando - 1;
    }

    printf("Ya la comida está lista\n");
    printf("Revisaré el correo en otra ocasión\n");

    return 0;
}

// D: declaracion de la variable iteradora.
// C: condicion usando la variable iteradora.
// A: actualizacion de la variable iteradora.
//
// for (D; C; A)
// {
//     /* code */
// }

// while (condicion)
// {
//     /* code */
// }
