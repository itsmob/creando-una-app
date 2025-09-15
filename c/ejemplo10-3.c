// Scope - a y b cambiaran debido al scope
#include <stdio.h>

// Prototipo de funcione
void cambiar();

int x = 1;
int y = 2;

int main(void)
{
    printf("%d %d\n", x, y);
    cambiar();
    printf("%d %d\n", x, y);

    return 0;
}

void cambiar()
{
    int temporal = x;
    x = y;
    y = temporal;
}