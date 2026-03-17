#include <stdio.h>

int main () {

    int numero1, numero2, suma;

    printf("Caluladora Simple\n");

    printf ("Ingrese el primer numero:");
    scanf ("%d", &numero1);

    printf ("Ingrese el segundo numero:");
    scanf ("%d", &numero2);

    suma = numero1 + numero2;

    printf ("\nResultado: %d", suma);

return 0;
}
