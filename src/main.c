#include <stdio.h>

int main()
{
    /*
    Pedir info desde consola
    */
    int cadena_length = 100;
    char cadena[cadena_length];
    printf("Ingresa un nombre: \n");

    gets(cadena);

    printf("\nEl nombre ingresado fue: %s\n", cadena);

    return 0;
}
