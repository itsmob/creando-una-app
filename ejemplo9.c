// Funciones en C
#include <stdio.h>

// Prototipos de funciones (declaraciones previas)
void saludar(void);
void saludar_por_nombre(char *nombre);
int sumar(int a, int b);

int main(void)
{
    // Llamar a la función saludar
    saludar();

    // Llamar a la función saludar_por_nombre
    char *nombre_del_estudiante = "Gilberto";
    saludar_por_nombre(nombre_del_estudiante);

    // Llamar a la función sumar
    int x = 10;
    int y = 20;
    int numero_resultante = sumar(x, y);

    // Mostrar el resultado
    printf("La suma de %d + %d es: %d\n", x, y, numero_resultante);

    return 0; // Fin del programa. Todo salió bien
}

// Definición de funciones
void saludar(void)
{
    printf("Hola!\n");
}

void saludar_por_nombre(char *nombre)
{
    printf("Hola %s!\n", nombre);
}

int sumar(int a, int b)
{
    int resultado = a + b;
    return resultado;
}