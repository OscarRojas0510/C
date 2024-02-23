#include <stdio.h>
#include <stdbool.h>

int main()
{
    char nombre[100];
    int edad;
    double sueldo;
    bool esEmpConf;
    int esEmpConfTemp;
    printf("Proporciona tu nombre: \n");
    scanf("%[^\n]s", nombre);
    printf("Proporciona tu edad : \n");
    scanf("%d", &edad);
    printf("Proporciona tu sueldo (USD)\n");
    scanf("%lf", &sueldo);
    printf("Eres empleado de confianza? (1/0)\n");
    scanf("%d", &esEmpConfTemp);
    esEmpConf = esEmpConfTemp;

    printf("La información ingresada es:\n");
    printf("Nombre: %s\n", nombre);
    printf("Edad: %i\n", edad);
    printf("Sueldo: $%0.2lf\n", sueldo);
    printf("Empleado de confianza: %d\n", esEmpConf);
    return 0;
}
