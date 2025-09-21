#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    // Comprobacion de comandos
    if (argc != 4)
    {
        printf("Error en los comandos iniciales\n");
        printf("Ejemplo: volumen.exe entrada.wav salida.wav 4");
        return 1;
    }

    // Apertura de archivos
    FILE * entrada;
    entrada = fopen(argv[1], "rb"); //read binary
    if (entrada == NULL)
    {
        printf("El archivo %s no existe", argv[1]);
        return 1;
    }

    FILE * salida;
    salida = fopen(argv[2], "wb"); //write binary
     if (salida == NULL)
    {
        printf("No se puedo crear el archivo %s", argv[2]);
        return 1;
    }

    // Crea buffer
    int8_t header[44];

    // Copia el header
    int codigo = fread(header, 44, 1, entrada);
    if (codigo != 1)
    {
        printf("No se pudo leer el header");
        return 1;
    }

    int codigo_2 = fwrite(header, 44, 1, salida);
    if (codigo_2 != 1)
    {
        printf("No se pudo copiar el header");
        return 1;
    }

    int16_t pedacito;

    int codigo_3 = fread(&pedacito, 2, 1, entrada);
    if (codigo_3 != 1)
    {
        printf("Error leyendo el pedacito");
        return 1;
    }

    // ASCII to float
    float factor = atof(argv[3]);
    int codigo_4;

    while(codigo_3 == 1)
    {
        pedacito = pedacito * factor;
    
        codigo_4 = fwrite(&pedacito, 2, 1, salida);
        if (codigo_4 != 1){
            printf("No se pudo copiar el pedacito modificado en la consola");
            return 1;
        }
        codigo_3 = fread(&pedacito, 2, 1, entrada);
    }

    return 0;
}