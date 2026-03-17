#include <stdio.h>

int main () {

    float numero1, numero2, nummayor;

    printf ("Ingrese el primer numero:");
    scanf ("%f", &numero1);

    printf ("Ingrese el segundo numero:");
    scanf ("%f", &numero2);

    if (numero1==numero2) {
        printf ("\nLos numeros son iguales");
    }
    else if (numero1 > numero2) {
            nummayor = numero1;
            printf ("\nEl primer numero es mayor: %.0f", nummayor);
        }
        else {
            nummayor = numero2;
            printf ("\nEl segundo numero es mayor %.0f", nummayor);
        }

return 0;
}
