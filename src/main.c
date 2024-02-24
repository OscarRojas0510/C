#include <stdio.h>
#include <stdbool.h>

int main()
{
    // sizeof
    /*
    Sirve para ver el tamaño de las variables em bytes
    */
    int entero;
    float flotante;
    double doble;
    char caracter;
    char cadena[] = "Hola mundo";
    bool boleano = false;
    long largo;

    printf("tamaño en bytes de un entero: %lu\n", sizeof(entero));     // 4
    printf("tamaño en bytes de un float: %lu\n", sizeof(flotante));    // 4
    printf("tamaño en bytes de un double: %lu\n", sizeof(doble));      // 8
    printf("tamaño en bytes de un caracter: %lu\n", sizeof(caracter)); // 1
    printf("tamaño en bytes de una cadena : %lu\n", sizeof(cadena));   // 11
    printf("tamaño en bytes de un booleano: %lu\n", sizeof(boleano));  // 1
    printf("tamaño en bytes de un long: %lu\n", sizeof(largo));        // 8

    return 0;
}
