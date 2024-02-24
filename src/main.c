#include <stdio.h>
// Otra forma de usar constantes.
#define PI 3.1416
// Usar constante PI de la libreria math
#include <math.h>

int main()
{
    /*
    Constantes en C:

    Sintaxis:

    const <tipo> <nombre> = valor;

    A diferencia de una variable, la constante de debe inicializar
    en el momento de declararla.

    Una constante es inmutable, por lo que no se puede cambiar su valor
    en el tiempo de ejecución, solo en el tiempo de compilación.
    */

     // como regla, no se usa camelCase, si no se usa snake_case
    // MI_CONSTANTE =20;  //esto arroja un error
    printf("Este es el valor de la constante: %d\n", MI_CONSTANTE);
    printf("Este es el valor de la constante al inicio del archivo: %.4f\n", PI);
    printf("Este es el valor de la constante PI de la libreria math: %.50lf\n", M_PI);

    /*
    
    */
    return 0;
}
