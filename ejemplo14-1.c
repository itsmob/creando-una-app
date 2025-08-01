// Escribir archivos
#include <stdio.h>

int main(void)
{
    FILE *archivo;

    // Escribir en el archivo o crearlo si no existe
    archivo = fopen("ejemplo14.txt", "w");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo para escritura.\n");
        return 1;
    }

    fprintf(archivo, "Hola, estudiante.\nEste es un ejemplo de archivo.\n");
    fclose(archivo); // Importante cerrar
    printf("ejemplo14.txt creado exitosamente!.\n");

    return 0;
}
