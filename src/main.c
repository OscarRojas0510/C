#include <stdio.h>

int main()
{
    char *cadena = NULL;
    size_t longitud = 0;

    // Pide al usuario que ingrese una cadena
    printf("Introduce una cadena: ");

    // Usa getline para leer una línea de longitud variable
    if (getline(&cadena, &longitud, stdin) != -1)
    {
        // Elimina el carácter de nueva línea (\n) al final de la cadena si está presente
        if (cadena[strlen(cadena) - 1] == '\n')
        {
            cadena[strlen(cadena) - 1] = '\0';
        }

        // Imprime la cadena leída
        printf("Cadena introducida: %s\nTamaño de la cadena: %d\n", cadena, sizeof(cadena));

        // Liberar la memoria asignada dinámicamente
        free(cadena);
    }
    else
    {
        // Manejar error de lectura
        printf("Error al leer la cadena.\n");
    }

    return 0;
}
