#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    /*
    Tipos de datos:
    */
    int entero = 1;
    printf("Este es un tipo entero: %i", entero);
    float flotante = 6543.123456f;
    printf("\nEste es un tipo float: %f", flotante);
    printf("\nEste es un tipo float: %.2f", flotante);  // solo se imprimen 2 digitos despues del punto
    printf("\nEste es un tipo float: %1.3f", flotante); // se imprime al menos un digito, pero si hay más se imprimen hasta 3

    double doble = 654321.123456;
    printf("\nEste es un double: %lf", doble);

    char c = 'A';
    printf("\nEste es un char: %c", c);
    c = 66;
    printf("\nEste también es un char: %c", c);
    bool b = true; // para este dato se necesita una libreria
    printf("\nEste es un boolean: %d", b);

    char string[] = "Hola mundo";
    /*
    Este tipo de dato necesita un espacio extra para un caracter llamado "fin de cadena" (\0)
    Si no se reserva este espacio, puede haber problemas
    */
    printf("\nEste es un string: %s", string);

    /*
    Imprimir la dirección de memorio de una variable:
    */
    printf("\nEste es la dirección de string: %p", &string);
    return 0;
}
