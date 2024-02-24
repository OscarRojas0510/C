#include <stdio.h>

int main()
{
    int a = 10; // Variable normal
    /*
    La variable 'b', se declara como '*b', ya que el
    asterisco significa que la variable es un apuntador,
    un apuntador en una variable que no se asigna un espacio
    en memoria propio, sino que comparte el espacio con otra
    variable.
    */
    int *b = &a; // '&a' obtiene la dirección de memoria en hexadecimal

    imprimirAyB(a, *b);

    printf("modificar a+=10\n");
    a += 10;
    imprimirAyB(a, *b);

    printf("modificar *b-=10\n");
    *b -= 10;
    imprimirAyB(a, *b);
    return 0;
}

void imprimirAyB(int a, int b)
{
    printf("valor de a -> %d\n", a);
    printf("valor de *b -> %d\n", b);
}
