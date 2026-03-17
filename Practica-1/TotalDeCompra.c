#include <stdio.h>

int main () {

    int cantidad;
    float total;

    printf ("Calculadora de Ventas\n");

    printf ("Cantidad de cuadernos: ");
    scanf ("%d", &cantidad);

    total=cantidad*12;

    printf ("\n-----------------------------------\n");
    printf ("Cantidad de cuadernos: %d\n", cantidad);
    printf ("Total a pagar: %.2f\n", total);
    printf ("-----------------------------------");

return 0;
}
