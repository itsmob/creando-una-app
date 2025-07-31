// Leer archivos
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *archivo;

    // Leer del archivo
    archivo = fopen("ejemplo15.txt", "r");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo para lectura.\n");
        return 1;
    }

    char linea[100];
    while (fgets(linea, sizeof(linea), archivo))
    {
        printf("%s", linea);
    }

    fclose(archivo);

    return 0;
}