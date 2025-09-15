// Estructuras = Structs
#include <stdio.h>

struct taza
{
    char *color;
    char *imagen;
    float peso;
    float volumen;
};

int main(void)
{
    struct taza mi_taza;
    mi_taza.color = "blanca";
    mi_taza.imagen = "Goku";
    mi_taza.peso = 0.5;
    mi_taza.volumen = 0.6;

    printf("Mi taza es %s con una imagen de %s, mi taza pesa %0.1f kilos y le caben %0.1f litros de agua\n", mi_taza.color, mi_taza.imagen, mi_taza.peso, mi_taza.volumen);

    struct taza la_taza_de_maria;
    la_taza_de_maria.color = "negra";
    la_taza_de_maria.imagen = "Rapunzel";
    la_taza_de_maria.peso = 0.4;
    la_taza_de_maria.volumen = 0.5;

    printf("La taza de maria es %s con una imagen de %s, mi taza pesa %0.1f kilos y le caben %0.1f litros de agua", la_taza_de_maria.color, la_taza_de_maria.imagen, la_taza_de_maria.peso, la_taza_de_maria.volumen);

    return 0;
}