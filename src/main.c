#include <stdio.h>

int main()
{
    /*
    Pedir info desde consola
    */
    int cadena_length = 10;
    char cadena[cadena_length];
    printf("Ingresa un nombre: \n");

    scanf("%s", cadena);
    printf("\nEl nombre ingresado fue: %s\n", cadena);

    return 0;
}
