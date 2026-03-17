#include <stdio.h>

int main () {

    float precio, cantidad, subtotal, montodesc;

    printf ("Sistema de Ventas\n");

    printf ("Cantidad de producto: ");
    scanf ("%f", &cantidad);

    printf ("Precio de producto: ");
    scanf ("%f", &precio);

    subtotal = cantidad*precio;

    printf ("\nSubtotal: %.2f\n", subtotal);

    if (subtotal>100) {
        montodesc = subtotal*0.9;
        printf ("Aplica para el descuento\n");
        printf ("Total a pagar: %.2f", montodesc);
    }
    else {
        printf ("No aplica para el descuento\n");
        printf ("Total a pagar: %.2f", subtotal);
    }

return 0;
}
