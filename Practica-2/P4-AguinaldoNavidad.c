#include <stdio.h>

int main () {

    char nombre[50];
    float salariomes, aguinaldo;
    int mesestrab;

    printf ("Sistema de Sueldos y Salarios / Aguinaldo\n");

    printf ("Nombre del trabajador:");
    scanf (" %[^\n]", &nombre);

    printf ("Salario mensual:");
    scanf ("%f", &salariomes);

    printf ("Meses trabajados:");
    scanf ("%d", &mesestrab);

    if (mesestrab>=12){
        printf ("\n%s con %d meses de trabajo, recibe un aguinaldo de: %.2f\n", nombre, mesestrab,   salariomes);
    } else {
        aguinaldo = salariomes * mesestrab / 12;
        printf ("\n%s con %d meses de trabajo, recibe un aguinaldo de: %.2f\n", nombre, mesestrab, aguinaldo);
    }

return 0;
}
