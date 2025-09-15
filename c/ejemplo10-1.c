// Scope - a y b no cambiarán debido al alcance de las variables
#include <stdio.h>

// Prototipo de función
void cambiar(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("%d %d\n", x, y);
    cambiar(x, y);
    printf("%d %d\n", x, y);

    return 0;
}

void cambiar(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}